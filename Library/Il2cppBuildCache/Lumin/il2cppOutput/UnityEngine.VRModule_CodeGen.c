#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.XR.XRSettings::get_enabled()
extern void XRSettings_get_enabled_m202056F80CE700EB87DD52C213BE30262B8433AE (void);
// 0x00000002 System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
extern void XRSettings_get_loadedDeviceName_mFCE6E2901F4E9D598EB91C5255CA5353A69A34B4 (void);
// 0x00000003 System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
extern void XRDevice_InvokeDeviceLoaded_m9B8D07480B85A337BE2B947204E50E41149DC77E (void);
// 0x00000004 System.Void UnityEngine.XR.XRDevice::.cctor()
extern void XRDevice__cctor_mB1E8BACD04DBC82739EBC4FC70714E71B9C7F33B (void);
static Il2CppMethodPointer s_methodPointers[4] = 
{
	XRSettings_get_enabled_m202056F80CE700EB87DD52C213BE30262B8433AE,
	XRSettings_get_loadedDeviceName_mFCE6E2901F4E9D598EB91C5255CA5353A69A34B4,
	XRDevice_InvokeDeviceLoaded_m9B8D07480B85A337BE2B947204E50E41149DC77E,
	XRDevice__cctor_mB1E8BACD04DBC82739EBC4FC70714E71B9C7F33B,
};
static const int32_t s_InvokerIndices[4] = 
{
	4733,
	4756,
	4693,
	4778,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_VRModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule = 
{
	"UnityEngine.VRModule.dll",
	4,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_VRModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
