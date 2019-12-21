#pragma once

#include "GPCS4Common.h"
#include "Singleton.h"
#include "Module.h"
#include <string>
#include <unordered_map>
#include <vector>

struct SCE_EXPORT_FUNCTION;
struct SCE_EXPORT_LIBRARY;
struct SCE_EXPORT_MODULE;

class CSceModuleSystem final : public Singleton<CSceModuleSystem>
{
	friend class  Singleton<CSceModuleSystem>;

public:
	struct LibraryRecord
	{
		enum class Mode
		{
			Disallow,
			Allow,
		};

		Mode mode;
		bool overrideable;
		std::unordered_map<uint64_t, bool> functions;
	};

private:
	struct ModuleRecord
	{
		bool overridable;
		std::unordered_map<std::string, LibraryRecord> libraries;
	};

	//since we won't insert or remove item after initialization
	//we use unordered_map instead of map
	typedef std::unordered_map<uint64, void*> NidFuncMap;
	typedef std::unordered_map<std::string, void*> NameFuncMap;

	typedef std::unordered_map<std::string, NidFuncMap> SceLibMapNid;
	typedef std::unordered_map<std::string, NameFuncMap> SceLibMapName;
	
	typedef std::unordered_map<std::string, SceLibMapNid> SceModuleMapNid;

	typedef std::unordered_map<std::string, bool> SceAllowedFileMap;
	typedef std::unordered_map<std::string, SceLibMapName> SceModuleMapName;
	typedef std::unordered_map<std::string, std::vector<std::string>> SceModuleMapPrxNames;
	typedef std::unordered_map<std::string, ModuleRecord> SceOverridableMapNid;
	typedef std::unordered_map<std::string, MemoryMappedModule> SceMappedModuleMap;

	typedef std::vector<MemoryMappedModule> SceMappedModuleList;
	typedef std::unordered_map<std::string, size_t> SceModuleNameIndexMap;

public:

	bool RegisterModule(const SCE_EXPORT_MODULE& stModule);

	bool registerFunction(std::string const &modName, std::string const &libName, uint64_t nid, void *p);

	bool registerSymbol(std::string const &modName,
						std::string const &libName,
						std::string const &symbolName,
						void *p);

	// I use rvalue reference here to express "sink" semantics, which means the container would take ownership
	// of the object after registeration and the original one would no longer be valid.
	bool registerMemoryMappedModule(std::string const &modName, MemoryMappedModule &&mod);

	bool isMemoryMappedModuleLoaded(std::string const &modName);

	SceMappedModuleList &getMemoryMappedModules();

	bool GetMemoryMappedModule(std::string const &modName, MemoryMappedModule **ppMod);
	
	void* FindFunction(const std::string& strModName, const std::string& strLibName, uint64 nNid);
	void *findSymbol(std::string const &modName, std::string const &libName, std::string const &symbolName);

	bool IsModuleLoaded(const std::string& modName);

	bool isModuleLoadable(std::string const &modName);

	bool isLibraryLoaded(std::string const &modName, std::string const &libName);

	bool setModuleOverridability(const std::string &modName, bool isOverridable);

	bool setLibraryOverridability(const std::string &modName,
								  const std::string &libName,
								  bool isOverridable,
								  LibraryRecord::Mode mode = LibraryRecord::Mode::Disallow);

	bool setFunctionOverridability(const std::string &modName,
								 const std::string &libName,
								 uint64_t nid, bool isOverridable);

	bool addAllowedFile(std::string const &fileName);
	bool isFileAllowedToLoad(std::string const &fileName);
	bool decodeEncodedName(std::string const &strEncName, uint *nModuleId, uint *nLibraryId, uint64_t *nNid);

	bool isModuleOverridable(std::string const &modName) const;
	bool isLibraryOverridable(std::string const &modName, std::string const &libName) const;
	bool isFunctionOverridable(std::string const &modName, std::string const &libName, uint64_t nid) const;

private:
	bool decodeValue(std::string const &strEnc, uint64_t &val);
	bool IsEndFunctionEntry(const SCE_EXPORT_FUNCTION* pFunc);
	bool IsEndLibraryEntry(const SCE_EXPORT_LIBRARY* pLib);

	bool isLibraryLoadable(std::string const &modName, std::string const &libName);
	bool isFunctionLoadable(std::string const &modName,std::string const &libName, uint64_t nid);

	bool isPrxKnown(std::string const& modName);

private:

	SceModuleMapNid m_umpModuleMapNid;
	SceModuleMapName m_umpModuleMapName;
	SceModuleMapPrxNames m_umpModuleMapPrxNames;

	SceOverridableMapNid m_overridableModules;
	//SceMappedModuleMap m_mappedModules;

	SceAllowedFileMap m_allowedFiles;

	SceMappedModuleList m_mappedModules;
	SceModuleNameIndexMap m_mappedModuleNameIndexMap;

private:
	CSceModuleSystem();
	~CSceModuleSystem();
	CSceModuleSystem(const CSceModuleSystem&);
	CSceModuleSystem& operator = (const CSceModuleSystem&);
};

