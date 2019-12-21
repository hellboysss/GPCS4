#include "sce_libkernel.h"

// Note:
// The codebase is generated using GenerateCode.py
// You may need to modify the code manually to fit development needs

static const SCE_EXPORT_FUNCTION g_pSceLibkernel_libkernel_FunctionTable[] = {
	{ 0xF41703CA43E6A352, "__error", (void*)__error },
	{ 0x3AEDE22F569BBE78, "__stack_chk_fail", (void*)__stack_chk_fail },
	{ 0x7FBB8EC58F663355, "__stack_chk_guard", (void*)__stack_chk_guard },
	{ 0xBCD7B5C387622C2B, "__tls_get_addr", (void*)__tls_get_addr },
	{ 0x91BC385071D2632D, "__pthread_cxa_finalize", (void*)__pthread_cxa_finalize },
	{ 0x171559A81000EE4B, "_write", (void*)scek__write },
	{ 0xAD35F0EB9C662C80, "sceKernelAllocateDirectMemory", (void*)sceKernelAllocateDirectMemory },
	{ 0x4018BB1C22B4DE1C, "sceKernelClockGettime", (void*)sceKernelClockGettime },
	{ 0x50AD939760D6527B, "sceKernelClose", (void*)sceKernelClose },
	{ 0x0F439D14C8E9E3A2, "sceKernelCreateEqueue", (void*)sceKernelCreateEqueue },
	{ 0x0691686E8509A195, "sceKernelCreateEventFlag", (void*)sceKernelCreateEventFlag },
	{ 0xD7CF31E7B258A748, "sceKernelCreateSema", (void*)sceKernelCreateSema },
	{ 0x8E91639A0002E401, "sceKernelDeleteEqueue", (void*)sceKernelDeleteEqueue },
	{ 0xF26AA5F4E7109DDE, "sceKernelDeleteEventFlag", (void*)sceKernelDeleteEventFlag },
	{ 0x47526F9FC6D2096F, "sceKernelDeleteSema", (void*)sceKernelDeleteSema },
	{ 0x901C023EC617FE6E, "sceKernelFstat", (void*)sceKernelFstat },
	{ 0x7D3C7AEA5E625880, "sceKernelFsync", (void*)sceKernelFsync },
	{ 0x556DD355988CE3F1, "sceKernelFtruncate", (void*)sceKernelFtruncate },
	{ 0x54EC7C3469875D3B, "sceKernelGetCpumode", (void*)sceKernelGetCpumode },
	{ 0xA4EF7A4F0CCE9B91, "sceKernelGetDirectMemorySize", (void*)sceKernelGetDirectMemorySize },
	{ 0xE09DAC5099AE1D94, "sceKernelGetProcessTime", (void*)sceKernelGetProcessTime },
	{ 0x7E0C6731E4CD52D6, "sceKernelGetProcessTimeCounter", (void*)sceKernelGetProcessTimeCounter },
	{ 0x04DA30C76979F3C1, "sceKernelGetProcessTimeCounterFrequency", (void*)sceKernelGetProcessTimeCounterFrequency },
	{ 0xD63DD2DE7FED4D6E, "sceKernelGetTscFrequency", (void*)sceKernelGetTscFrequency },
	{ 0x8F6008A92A893F4C, "sceKernelGetdents", (void*)sceKernelGetdents },
	{ 0x5AC95C2B51507062, "sceKernelIsNeoMode", (void*)sceKernelIsNeoMode },
	{ 0xA226FBE85FF5D9F9, "sceKernelLseek", (void*)sceKernelLseek },
	{ 0x2FF4372C48C86E00, "sceKernelMapDirectMemory", (void*)sceKernelMapDirectMemory },
	{ 0x21620105D4C78ADE, "sceKernelMapFlexibleMemory", (void*)sceKernelMapFlexibleMemory },
	{ 0xB96C96DEFF7CB14E, "sceKernelCheckReachability", (void*)sceKernelCheckReachability },
	{ 0x7E022C435D316150, "sceKernelChmod", (void*)sceKernelChmod },
	{ 0xD7F2C52E6445C713, "sceKernelMkdir", (void*)sceKernelMkdir },
	{ 0xD46DE51751A0D64F, "sceKernelOpen", (void*)sceKernelOpen },
	{ 0x0A0E2CAD9E9329B5, "sceKernelRead", (void*)sceKernelRead },
	{ 0xFF62115023BFFCF3, "sceKernelReadTsc", (void*)sceKernelReadTsc },
	{ 0x301B88B6F6DAEB3F, "sceKernelReleaseDirectMemory", (void*)sceKernelReleaseDirectMemory },
	{ 0xB5E888B4BD9BA05C, "sceKernelReleaseFlexibleMemory", (void*)sceKernelReleaseFlexibleMemory },
	{ 0xE7635C614F7E944A, "sceKernelRename", (void*)sceKernelRename },
	{ 0x20E9D2BC7CEABBA0, "sceKernelSetEventFlag", (void*)sceKernelSetEventFlag },
	{ 0xE1CCE9A47062AE2C, "sceKernelSignalSema", (void*)sceKernelSignalSema },
	{ 0x795F70003DAB8880, "sceKernelStat", (void*)sceKernelStat },
	{ 0x0145D5C5678953F0, "sceKernelUnlink", (void*)sceKernelUnlink },
	{ 0xD637D72D15738AC7, "sceKernelUsleep", (void*)sceKernelUsleep },
	{ 0x7F3C8C2ACF648A6D, "sceKernelWaitEqueue", (void*)sceKernelWaitEqueue },
	{ 0x253BC17E58586B34, "sceKernelWaitEventFlag", (void*)sceKernelWaitEventFlag },
	{ 0x6716B45614154EC9, "sceKernelWaitSema", (void*)sceKernelWaitSema },
	{ 0xE304B37BDD8184B2, "sceKernelWrite", (void*)sceKernelWrite },
	{ 0xEB6282C04326CDC3, "scePthreadAttrDestroy", (void*)scePthreadAttrDestroy },
	{ 0x1573D61CD93C39FD, "scePthreadAttrGetschedparam", (void*)scePthreadAttrGetschedparam },
	{ 0x9EC628351CB0C0D8, "scePthreadAttrInit", (void*)scePthreadAttrInit },
	{ 0xDEAC603387B31130, "scePthreadAttrSetaffinity", (void*)scePthreadAttrSetaffinity },
	{ 0xFD6ADEA6BB6ED10B, "scePthreadAttrSetdetachstate", (void*)scePthreadAttrSetdetachstate },
	{ 0x7976D44A911A4EC0, "scePthreadAttrSetinheritsched", (void*)scePthreadAttrSetinheritsched },
	{ 0x0F3112F61405E1FE, "scePthreadAttrSetschedparam", (void*)scePthreadAttrSetschedparam },
	{ 0xE3E87D133C0A1782, "scePthreadAttrSetschedpolicy", (void*)scePthreadAttrSetschedpolicy },
	{ 0x5135F325B5A18531, "scePthreadAttrSetstacksize", (void*)scePthreadAttrSetstacksize },
	{ 0x246823ED4BEB97E0, "scePthreadCondBroadcast", (void*)scePthreadCondBroadcast },
	{ 0x83E3D977686269C8, "scePthreadCondDestroy", (void*)scePthreadCondDestroy },
	{ 0xD936FDDAABA9AE5D, "scePthreadCondInit", (void*)scePthreadCondInit },
	{ 0x90387F35FC6032D1, "scePthreadCondSignal", (void*)scePthreadCondSignal },
	{ 0x58A0172785C13D0E, "scePthreadCondWait", (void*)scePthreadCondWait },
	{ 0xC1A3DCC58891DD60, "scePthreadCondattrDestroy", (void*)scePthreadCondattrDestroy },
	{ 0x9B9FF66EC35FBFBB, "scePthreadCondattrInit", (void*)scePthreadCondattrInit },
	{ 0xE9482DC15FB4CDBE, "scePthreadCreate", (void*)scePthreadCreate },
	{ 0xDE483BAD3D0D408B, "scePthreadExit", (void*)scePthreadExit },
	{ 0xADCAD5149B105916, "scePthreadGetaffinity", (void*)scePthreadGetaffinity },
	{ 0xD6D2B21BB465309A, "scePthreadGetprio", (void*)scePthreadGetprio },
	{ 0xA27358F41CA7FD6F, "scePthreadJoin", (void*)scePthreadJoin },
	{ 0xD8E7F47FEDE68611, "scePthreadMutexDestroy", (void*)scePthreadMutexDestroy },
	{ 0x726A3544862F6BDA, "scePthreadMutexInit", (void*)scePthreadMutexInit },
	{ 0xF542B5BCB6507EDE, "scePthreadMutexLock", (void*)scePthreadMutexLock },
	{ 0xB67DD5943D211BAD, "scePthreadMutexUnlock", (void*)scePthreadMutexUnlock },
	{ 0xB2658492D8B2C86D, "scePthreadMutexattrDestroy", (void*)scePthreadMutexattrDestroy },
	{ 0x17C6D41F0006DBCE, "scePthreadMutexattrInit", (void*)scePthreadMutexattrInit },
	{ 0xD451AF5348BDB1A4, "scePthreadMutexattrSetprotocol", (void*)scePthreadMutexattrSetprotocol },
	{ 0x88CA7C42913E5CEE, "scePthreadMutexattrSettype", (void*)scePthreadMutexattrSettype },
	{ 0xE663BE7172006912, "scePthreadMutexGetprioceiling", (void*)scePthreadMutexGetprioceiling },
	{ 0x181518EF2C1D50B1, "scePthreadRename", (void*)scePthreadRename },
	{ 0x041FA46F4F1397D0, "scePthreadRwlockDestroy", (void*)scePthreadRwlockDestroy },
	{ 0xE942C06B47EAE230, "scePthreadRwlockInit", (void*)scePthreadRwlockInit },
	{ 0x3B1F62D1CECBE70D, "scePthreadRwlockRdlock", (void*)scePthreadRwlockRdlock },
	{ 0xF8BF7C3C86C6B6D9, "scePthreadRwlockUnlock", (void*)scePthreadRwlockUnlock },
	{ 0x9AA74DA2BAC1FA02, "scePthreadRwlockWrlock", (void*)scePthreadRwlockWrlock },
	{ 0x8B689F6777D2D9FA, "scePthreadRwlockattrDestroy", (void*)scePthreadRwlockattrDestroy },
	{ 0xC8E7C683F2356482, "scePthreadRwlockattrInit", (void*)scePthreadRwlockattrInit },
	{ 0x688F8E782CFCC6B4, "scePthreadSelf", (void*)scePthreadSelf },
	{ 0x6EDDC24C12A61B22, "scePthreadSetaffinity", (void*)scePthreadSetaffinity },
	{ 0x5B41E99B65F4B8F1, "scePthreadSetprio", (void*)scePthreadSetprio },
	{ 0x4FBDA1CFA7DFAB4F, "scePthreadYield", (void*)scePthreadYield },
	{ 0xD92284C7A6D2ABFE, "sceKernelBatchMap", (void*)sceKernelBatchMap },
	{ 0x8705523C29A9E6D3, "sceKernelCheckedReleaseDirectMemory", (void*)sceKernelCheckedReleaseDirectMemory },
	{ 0x2F01BC8379E2AB00, "sceKernelDlsym", (void*)sceKernelDlsym },
	{ 0x042F8E1B99BDF9BC, "sceKernelGetDirectMemoryType", (void*)sceKernelGetDirectMemoryType },
	{ 0xE285D87BD5E69344, "sceKernelGetGPI", (void*)sceKernelGetGPI },
	{ 0xB59DB2A6563C3016, "sceKernelGetPageTableStats", (void*)sceKernelGetPageTableStats },
	{ 0x7A37A471A35036AD, "sceKernelGettimeofday", (void*)sceKernelGettimeofday },
	{ 0xC83070540A250E08, "sceKernelIsStack", (void*)sceKernelIsStack },
	{ 0xC33BEA4F852A297F, "sceKernelLoadStartModule", (void*)sceKernelLoadStartModule },
	{ 0x35C6965317CC3484, "sceKernelMapNamedDirectMemory", (void*)sceKernelMapNamedDirectMemory },
	{ 0x98BF0D0C7F3A8902, "sceKernelMapNamedFlexibleMemory", (void*)sceKernelMapNamedFlexibleMemory },
	{ 0xBD23009B77316136, "sceKernelMprotect", (void*)sceKernelMprotect },
	{ 0xF5B7DD2C8CAEC026, "sceKernelMtypeprotect", (void*)sceKernelMtypeprotect },
	{ 0x71091EF54B8140E9, "sceKernelMunmap", (void*)sceKernelMunmap },
	{ 0x58571F2F697389DA, "sceKernelQueryMemoryProtection", (void*)sceKernelQueryMemoryProtection },
	{ 0xEE8C6FDCF3C2BA6A, "sceKernelReserveVirtualRange", (void*)sceKernelReserveVirtualRange },
	{ 0x068858AFF17BFE2B, "sceKernelSetPrtAperture", (void*)sceKernelSetPrtAperture },
	{ 0x0C6306DC9B21AD95, "sceKernelSetVirtualRangeName", (void*)sceKernelSetVirtualRangeName },
	{ 0x5E3A28B22C3E5CF2, "sceKernelUuidCreate", (void*)sceKernelUuidCreate },
	{ 0xAD58D1BC72745FA7, "sceKernelVirtualQuery", (void*)sceKernelVirtualQuery },
	{ 0xA810E6A42C86B2C1, "scePthreadCancel", (void*)scePthreadCancel },
	{ 0xE2A1AB47A7A83FD6, "scePthreadDetach", (void*)scePthreadDetach },
	{ 0x1E8C3B07C39EB7A9, "scePthreadGetname", (void*)scePthreadGetname },
	{ 0x3F8D644D6512DC42, "scePthreadGetschedparam", (void*)scePthreadGetschedparam },
	{ 0x7A886DEE640E0A6A, "scePthreadGetspecific", (void*)scePthreadGetspecific },
	{ 0x81E0DAAA01FD9538, "scePthreadKeyCreate", (void*)scePthreadKeyCreate },
	{ 0x21A7C8D8FC5C3E74, "scePthreadMutexTimedlock", (void*)scePthreadMutexTimedlock },
	{ 0xBA9A15AF330715E1, "scePthreadMutexTrylock", (void*)scePthreadMutexTrylock },
	{ 0xA084454E3A082DB8, "scePthreadSetschedparam", (void*)scePthreadSetschedparam },
	{ 0xc755fbe9aad83315, "scePthreadAttrGet", (void*)scePthreadAttrGet },
	{ 0xF81CD7624A9878B1, "scePthreadSetspecific", (void*)scePthreadSetspecific },
	{ 0xf3eb39073663c528, "scePthreadAttrGetaffinity", (void*)scePthreadAttrGetaffinity },
	{ 0x4694092552938853, "sceKernelGetModuleInfoForUnwind", (void*)sceKernelGetModuleInfoForUnwind },
	{ 0xcc4ff05c86632e83, "sceKernelDebugRaiseExceptionOnReleaseMode", (void*)sceKernelDebugRaiseExceptionOnReleaseMode },
	{ 0x38c0d128a019f08e, "sceKernelDebugRaiseException", (void*)sceKernelDebugRaiseException },
	{ 0x581eba7afbbc6ec5, "sceKernelGetCompiledSdkVersion", (void*)sceKernelGetCompiledSdkVersion },
	{ 0x8e1fbc5e22b82de1, "sceKernelIsAddressSanitizerEnabled", (void*)sceKernelIsAddressSanitizerEnabled },
	{ 0xf79f6aadaccf22b8, "sceKernelGetProcParam", (void*)sceKernelGetProcParam },
	{ 0xa7911c41e11e2401, "_sceKernelRtldSetApplicationHeapAPI", (void*)_sceKernelRtldSetApplicationHeapAPI },
	{ 0x1E82D558D6A70417, "getpid", (void*)scek_getpid },
	{ 0x7BAA2F068F59BC97, "getppid", (void*)scek_getppid },
	{ 0x5644c0b2b643709d, "sigfillset", (void*)scek_sigfillset },
	{ 0x68f732a6d6ce899b, "sigprocmask", (void*)scek_sigprocmask },
	{ 0x93e017aaedbf7817, "getpagesize", (void*)scek_getpagesize },
	{ 0x04f13db3dbd0417a, "mmap", (void*)scek_mmap },
	{ 0x72b6f98fb9a49357, "_is_signal_return", (void*)_is_signal_return },
	{ 0xb59638f9264d1610, "msync", (void*)scek_msync },
	{ 0xc2e0aba081a3b768, "open", (void*)scek_open },
	{ 0xe9cdeb09513f7d35, "_open", (void*)scek__open },
	{ 0x128B51F1ADC049FE, "pthread_self", (void*)scek_pthread_self },
	{ 0x1e4ee21e61b1075f, "ipmimgr_call", (void*)scek_ipmimgr_call },
	{ 0xfa0f943fc3f27e6a, "sceKernelGetProcessType", (void*)sceKernelGetProcessType },
	{ 0x0f8ca56b7bf1e2d6, "sceKernelError", (void*)sceKernelError },
	SCE_FUNCTION_ENTRY_END
};

static const SCE_EXPORT_FUNCTION g_pSceLibkernel_libSceCoredump_FunctionTable[] = {
	{ 0xF985F4CFF19448DC, "sceCoredumpAttachMemoryRegion", (void*)sceCoredumpAttachMemoryRegion },
	{ 0xF332D27C47D6E405, "sceCoredumpRegisterCoredumpHandler", (void*)sceCoredumpRegisterCoredumpHandler },
	{ 0x0DB6E48FA60759DA, "sceCoredumpWriteUserData", (void*)sceCoredumpWriteUserData },
	SCE_FUNCTION_ENTRY_END
};

static const SCE_EXPORT_FUNCTION g_pSceLibkernel_libScePosix_FunctionTable[] = {
	{ 0x94B313F6F240724D, "clock_gettime", (void*)scek_clock_gettime },
	{ 0x9FCF2FC770B99D6F, "gettimeofday", (void*)scek_gettimeofday },
	{ 0xC92F14D931827B50, "nanosleep", (void*)scek_nanosleep },
	{ 0x4575EA8B80AD17CC, "pthread_cond_destroy", (void*)scek_pthread_cond_destroy },
	{ 0xD13C959383122EDD, "pthread_cond_init", (void*)scek_pthread_cond_init },
	{ 0xD8C3B2FAB51FBA14, "pthread_cond_signal", (void*)scek_pthread_cond_signal },
	{ 0xDBB6C08222663A1D, "pthread_cond_timedwait", (void*)scek_pthread_cond_timedwait },
	{ 0x3A9F130466392878, "pthread_cond_wait", (void*)scek_pthread_cond_wait },
	{ 0x3B184807C2C1FCF4, "pthread_create", (void*)scek_pthread_create },
	{ 0xED7976E7B33854D2, "pthread_equal", (void*)scek_pthread_equal },
	{ 0x87D09C3F7274A153, "pthread_join", (void*)scek_pthread_join },
	{ 0x96D09F686AF62461, "pthread_mutex_destroy", (void*)scek_pthread_mutex_destroy },
	{ 0xB6D1CD7D4FAA0C15, "pthread_mutex_init", (void*)scek_pthread_mutex_init },
	{ 0xEC7D224CE7224CBA, "pthread_mutex_lock", (void*)scek_pthread_mutex_lock },
	{ 0x2BF8D785BB76827E, "pthread_mutex_trylock", (void*)scek_pthread_mutex_trylock },
	{ 0xD99F8FA58E826898, "pthread_mutex_unlock", (void*)scek_pthread_mutex_unlock },
	{ 0x1C5EE52B8EB1CE36, "pthread_mutexattr_destroy", (void*)scek_pthread_mutexattr_destroy },
	{ 0x7501D612C26DA04E, "pthread_mutexattr_init", (void*)scek_pthread_mutexattr_init },
	{ 0x9839A030E19552A8, "pthread_mutexattr_settype", (void*)scek_pthread_mutexattr_settype },
	{ 0xE971B8077DCDD3D8, "sched_yield", (void*)scek_sched_yield },
	{ 0x41CB5E4706EC9D5D, "usleep", (void*)scek_usleep },
	{ 0x6D8FCF3BA261CE14, "close", (void*)scek_close },
	{ 0x5D52FC4A8DD02549, "connect", (void*)scek_connect },
	{ 0x5ECF617620FBB000, "pthread_setschedparam", (void*)scek_pthread_setschedparam },
	{ 0xD3F297692EF4C72E, "pthread_getspecific", (void*)scek_pthread_getspecific },
	{ 0x9AA50B35D8A64E7D, "pthread_key_create", (void*)scek_pthread_key_create },
	{ 0x133F318E8F541781, "recv", (void*)scek_recv },
	{ 0x4FC7C447EB481A09, "select", (void*)scek_select },
	{ 0x7035B6DF7440C16A, "sem_destroy", (void*)scek_sem_destroy },
	{ 0xA43B8F11FDE6E1F2, "sem_init", (void*)scek_sem_init },
	{ 0x20A3FCB72A744149, "sem_post", (void*)scek_sem_post },
	{ 0xC39207CAF6A183FA, "sem_timedwait", (void*)scek_sem_timedwait },
	{ 0x602579746181702A, "sem_wait", (void*)scek_sem_wait },
	{ 0x7D939E64838498BC, "send", (void*)scek_send },
	{ 0x4D4BA2612DA413CB, "shutdown", (void*)scek_shutdown },
	SCE_FUNCTION_ENTRY_END
};

static const SCE_EXPORT_LIBRARY g_pSceLibkernel_LibTable[] = {
	{ "libkernel", g_pSceLibkernel_libkernel_FunctionTable },
	{ "libSceCoredump", g_pSceLibkernel_libSceCoredump_FunctionTable },
	{ "libScePosix", g_pSceLibkernel_libScePosix_FunctionTable },
	SCE_LIBRARY_ENTRY_END
};

const SCE_EXPORT_MODULE g_ExpModuleSceLibkernel = {
	"libkernel",
	g_pSceLibkernel_LibTable,
	NULL
};
