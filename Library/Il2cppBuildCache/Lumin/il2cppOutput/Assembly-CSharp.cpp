#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.MagicLeap.MLResult>
struct Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLResult/Code,UnityEngine.XR.MagicLeap.MLResult>
struct Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1;
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/Id>
struct List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.MagicLeap.MLPrivileges/RuntimeRequestId[]
struct RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// AuraControl
struct AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// ButtonScript
struct ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DynamicBeam
struct DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// ImageTargetInfo
struct ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2;
// ImageTrackingSystem
struct ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior
struct MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Raycast
struct Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// RotateAround
struct RotateAround_tA1C15A1BEC7DDA09D6BC38787E0075C7991B1BE4;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TouchpadGestures
struct TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// ImageTrackingSystem/TrackingStatusChanged
struct TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E;
// UnityEngine.XR.MagicLeap.MLImageTracker/Target
struct Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2;
// UnityEngine.XR.MagicLeap.MLInput/Controller
struct Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06;
// UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate
struct ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28;
// UnityEngine.XR.MagicLeap.MLInput/ControllerConnectionDelegate
struct ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40;
// UnityEngine.XR.MagicLeap.MLInput/ControllerTouchpadGestureDelegate
struct ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918;
// UnityEngine.XR.MagicLeap.MLRaycast/OnRaycastResultDelegate
struct OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35;
// UnityEngine.XR.MagicLeap.MLRaycast/QueryParams
struct QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.XR.MagicLeap.MLImageTracker/Target/OnImageResultDelegate
struct OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA;
// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture
struct TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureDirection_t9D768F015649363407AD78AB9708CD10CFCE197A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureType_tFDC3ED151DA3B854DD0DBB184DBFA2DFEA0279B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTrackingStatus_tD265A178E7A05347E44392F853930EAEBC9CA1A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MLAutoAPISingleton_1_tCD5DA834F74BC38C1AA2A38111BD28BB6B5A0104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tCEB9B254CAB9868032E4A7EFACA241DB6B7F39D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7EF6B3C83051E5B8C5059D372AA748375555F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3978B2F75ADEC6054DDE26F0E915AF7420AC52F7;
IL2CPP_EXTERN_C String_t* _stringLiteral42E8FA02D61B4B1CBE4070CD644D7226033DCF90;
IL2CPP_EXTERN_C String_t* _stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C;
IL2CPP_EXTERN_C String_t* _stringLiteral59861356BAB5171272E157858059C1801D7D5E5D;
IL2CPP_EXTERN_C String_t* _stringLiteral629DB51D07686B8790D11368AB5C823903423750;
IL2CPP_EXTERN_C String_t* _stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D;
IL2CPP_EXTERN_C String_t* _stringLiteral7023C1E54E888EAF9AB2C1C70A866FBD1B410340;
IL2CPP_EXTERN_C String_t* _stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB10F525DE9C119435E715F1C9447063FA524E6;
IL2CPP_EXTERN_C String_t* _stringLiteral80DB88D639AD1765F84D506A66B17327F0312EB7;
IL2CPP_EXTERN_C String_t* _stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156;
IL2CPP_EXTERN_C String_t* _stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralB5696D802E93F47F31F1E298FB7F74857D3CC019;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C1261706B1A411E4520C3FD3E2027423F0242F;
IL2CPP_EXTERN_C String_t* _stringLiteralBFDB4B83E8F624B1E36286AB9AD4DBA5CB4D16B5;
IL2CPP_EXTERN_C String_t* _stringLiteralC1F3ECDDEA99FCCA18D42A7229AC41DCF9DA7EB4;
IL2CPP_EXTERN_C String_t* _stringLiteralC4F75CC3F859FC460877E815F0AB4E93AE81CBF3;
IL2CPP_EXTERN_C String_t* _stringLiteralE28A776033DED10F52CBA40DBCE53745064C47C2;
IL2CPP_EXTERN_C String_t* _stringLiteralE99FE3237C273B5F7E79EA4CDE55EB90EE223312;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuraControl_RevertAura_mDEB6883F1E5EBE63EA5A4CB93CBCEAED98E28D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuraControl_Start_mEB1385524B27B76E6C8E5A7B6094300B818A474D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuraControl_UpdateAura_m47A5CEFB448F39951AA27EC0534AAEDE9E4E5B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuraControl_Update_m600186B4B2FA5F1D0A5ECDDFAB2F3EEC13B701E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuraControl__ctor_m3C3A1909A039A66C55F69B48CD155CBF3DD42908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonScript_CheckTrigger_mA5B6A083525B57C01B050EE4AC6EA273609CADEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonScript_OnDestroy_m2F388DAB58E789D97E27A16E3817292953D400F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonScript_Start_m667412D1B935EA027E49D2C8A4E3EA28C236D54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonScript_Update_m97527E784DB58C2B6A49C08FFE8F8E728643417B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonScript__ctor_mF4A9BCC4E47661F057F9B2A7770B635E63C8EC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicBeam_Start_m8334BB872FC8CD200A6E09DA20E4562B6FB9CF4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicBeam_Update_mD0F6E3CA817A4647A4893BAB4347EDB83095FABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicBeam__ctor_m33EDD16EE3B56B9925262DEF7E49C17F420AEEB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_m9DD5718496576085E0F81A43520F7D639BA07DBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTargetInfo__ctor_mEEBD0F458E8FE514529A99ED6520BCEFAAD7046F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_ActivatePrivileges_m05CD42B1F4DF3897FE8C9CFBDF57D863F2B829B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_Awake_m7D886D98EAAC639A36B65ABBF96830ED1F9BC033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_HandleImageTracked_m444944E0FA2A285CEE85DF39BE81482144AD5176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_HandlePrivilegesDone_m33BCEBA2C2857F2BE77398BD1583AD8AC435A77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_OnApplicationPause_mDAF6CD7D6384541E7F39DA55C65277B509FC0080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_OnDestroy_m40FC691721F2D29BDA5682D4A6785038BF62B704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_StartImageTracking_mDDD889D080330F30ABD869661629D9C351406585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_Start_mFCAA98E502C51C7726A59E0EF4CE0129199BD73E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_StopImageTracking_mD5DD256A59F14B65B8788AF953D1A8834FD6E7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTrackingSystem__ctor_mEAEFE6B53CA47EBBFED6180B1B04380CF029D125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Raycast_HandleOnReceiveRaycast_m1CA2E3B422F208E5148DA4D643A8A610C41C40EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Raycast_NormalMarker_mE133FF45D65CDBE6D713AD93A1A6E85C6A0A2888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Raycast_Start_mDF1A66F1482B724E5445E902013A9BEA83590DCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Raycast_Update_mC5D66806BEEF361113A0F062B1520F5F200AAA42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Raycast__ctor_m602C8E6ADEAC35BF2B610ADCB7499639F7404FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RotateAround_Update_mB59786F87DC788EC2B9394A823A7821541239DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RotateAround__ctor_m864285B5B460AC963938CDDC5EE18B1E93B443A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchpadGestures_Start_m443B27863D31CF5B10AAD91952956A29612D35B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchpadGestures_Update_m10097FB19D1F419F6B8237BB877B1A1E3EA55140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchpadGestures__ctor_m99AAC409948F714701B92254F90C8F9F24F44030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchpadGestures_updateGestureText_m30BB92430AA3E5EBBD7D974C124F9591F136353C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchpadGestures_updateTransform_mB126E950D7AFCE7FB2C077C426FC1C4C46A54D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingStatusChanged_BeginInvoke_m952B12A56B51C6A7D2F200ADD5C780ABDF34FFDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingStatusChanged_EndInvoke_m9915F26D283834D46120DC7819CC68E3ABEDD363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingStatusChanged_Invoke_m0145B1E464FD77148B1172AAC5B86AD1E70BEC84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingStatusChanged__ctor_m92A2799E1DF9BD96F808DD542CCBF9A65F9C1983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_OnDestroy_mB62A44EF5F87D2417F0583D2040CF6105A413EBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_QuitApp_m162ACD10403F6D6D896D25ACAB9C17C58CB476EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_StartApp_m316E375D462E4A4F3A47577AE7B0E773DF886082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// ImageTargetInfo
struct ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2  : public RuntimeObject
{
public:
	// System.String ImageTargetInfo::Name
	String_t* ___Name_0;
	// UnityEngine.Texture2D ImageTargetInfo::Image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Image_1;
	// System.Single ImageTargetInfo::LongerDimension
	float ___LongerDimension_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Image_1() { return static_cast<int32_t>(offsetof(ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2, ___Image_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_Image_1() const { return ___Image_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_Image_1() { return &___Image_1; }
	inline void set_Image_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_LongerDimension_2() { return static_cast<int32_t>(offsetof(ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2, ___LongerDimension_2)); }
	inline float get_LongerDimension_2() const { return ___LongerDimension_2; }
	inline float* get_address_of_LongerDimension_2() { return &___LongerDimension_2; }
	inline void set_LongerDimension_2(float value)
	{
		___LongerDimension_2 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLCoordinateFrameUID
struct MLCoordinateFrameUID_t7ADFCEC93CA8B3DDFB41EC8157D03B51D0611AC9 
{
public:
	// System.UInt64 UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLCoordinateFrameUID::First
	uint64_t ___First_0;
	// System.UInt64 UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLCoordinateFrameUID::Second
	uint64_t ___Second_1;

public:
	inline static int32_t get_offset_of_First_0() { return static_cast<int32_t>(offsetof(MLCoordinateFrameUID_t7ADFCEC93CA8B3DDFB41EC8157D03B51D0611AC9, ___First_0)); }
	inline uint64_t get_First_0() const { return ___First_0; }
	inline uint64_t* get_address_of_First_0() { return &___First_0; }
	inline void set_First_0(uint64_t value)
	{
		___First_0 = value;
	}

	inline static int32_t get_offset_of_Second_1() { return static_cast<int32_t>(offsetof(MLCoordinateFrameUID_t7ADFCEC93CA8B3DDFB41EC8157D03B51D0611AC9, ___Second_1)); }
	inline uint64_t get_Second_1() const { return ___Second_1; }
	inline uint64_t* get_address_of_Second_1() { return &___Second_1; }
	inline void set_Second_1(uint64_t value)
	{
		___Second_1 = value;
	}
};


// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLQuaternionf
struct MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1 
{
public:
	// System.Single UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLQuaternionf::X
	float ___X_0;
	// System.Single UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLQuaternionf::Y
	float ___Y_1;
	// System.Single UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLQuaternionf::Z
	float ___Z_2;
	// System.Single UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLQuaternionf::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLVec3f
struct MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952 
{
public:
	// System.Single UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLVec3f::X
	float ___X_0;
	// System.Single UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLVec3f::Y
	float ___Y_1;
	// System.Single UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLVec3f::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings
struct Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6 
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings::Name
	String_t* ___Name_0;
	// System.Single UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings::LongerDimension
	float ___LongerDimension_1;
	// System.Boolean UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings::IsStationary
	bool ___IsStationary_2;
	// System.Boolean UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings::IsEnabled
	bool ___IsEnabled_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_LongerDimension_1() { return static_cast<int32_t>(offsetof(Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6, ___LongerDimension_1)); }
	inline float get_LongerDimension_1() const { return ___LongerDimension_1; }
	inline float* get_address_of_LongerDimension_1() { return &___LongerDimension_1; }
	inline void set_LongerDimension_1(float value)
	{
		___LongerDimension_1 = value;
	}

	inline static int32_t get_offset_of_IsStationary_2() { return static_cast<int32_t>(offsetof(Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6, ___IsStationary_2)); }
	inline bool get_IsStationary_2() const { return ___IsStationary_2; }
	inline bool* get_address_of_IsStationary_2() { return &___IsStationary_2; }
	inline void set_IsStationary_2(bool value)
	{
		___IsStationary_2 = value;
	}

	inline static int32_t get_offset_of_IsEnabled_3() { return static_cast<int32_t>(offsetof(Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6, ___IsEnabled_3)); }
	inline bool get_IsEnabled_3() const { return ___IsEnabled_3; }
	inline bool* get_address_of_IsEnabled_3() { return &___IsEnabled_3; }
	inline void set_IsEnabled_3(bool value)
	{
		___IsEnabled_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings
struct Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6_marshaled_pinvoke
{
	char* ___Name_0;
	float ___LongerDimension_1;
	int8_t ___IsStationary_2;
	int8_t ___IsEnabled_3;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings
struct Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6_marshaled_com
{
	Il2CppChar* ___Name_0;
	float ___LongerDimension_1;
	int8_t ___IsStationary_2;
	int8_t ___IsEnabled_3;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// ImageTrackingStatus
struct ImageTrackingStatus_tD265A178E7A05347E44392F853930EAEBC9CA1A4 
{
public:
	// System.Int32 ImageTrackingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageTrackingStatus_tD265A178E7A05347E44392F853930EAEBC9CA1A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.MagicLeap.Internal.PerceptionHandle
struct PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC 
{
public:
	// System.IntPtr UnityEngine.XR.MagicLeap.Internal.PerceptionHandle::m_Handle
	intptr_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Hand
struct Hand_t3E8289E2F06B9BC6DCDF9E72B2FE138672C5EDB1 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLInput/Hand::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Hand_t3E8289E2F06B9BC6DCDF9E72B2FE138672C5EDB1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior/PrivilegeState
struct PrivilegeState_t7449F261F75033965B27065620D020FCF63E3553 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior/PrivilegeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrivilegeState_t7449F261F75033965B27065620D020FCF63E3553, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLPrivileges/RuntimeRequestId
struct RuntimeRequestId_tDE2FC0779E0D7897AC6983ABE74DE65BE9A96D9A 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLPrivileges/RuntimeRequestId::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeRequestId_tDE2FC0779E0D7897AC6983ABE74DE65BE9A96D9A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLRaycast/QueryParams
struct QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::<Position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::<UpVector>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CUpVectorU3Ek__BackingField_2;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::<Width>k__BackingField
	uint32_t ___U3CWidthU3Ek__BackingField_3;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::<Height>k__BackingField
	uint32_t ___U3CHeightU3Ek__BackingField_4;
	// System.Single UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::<HorizontalFovDegrees>k__BackingField
	float ___U3CHorizontalFovDegreesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::<CollideWithUnobserved>k__BackingField
	bool ___U3CCollideWithUnobservedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3, ___U3CPositionU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionU3Ek__BackingField_0() const { return ___U3CPositionU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionU3Ek__BackingField_0() { return &___U3CPositionU3Ek__BackingField_0; }
	inline void set_U3CPositionU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3, ___U3CDirectionU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_1() const { return ___U3CDirectionU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_1() { return &___U3CDirectionU3Ek__BackingField_1; }
	inline void set_U3CDirectionU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUpVectorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3, ___U3CUpVectorU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CUpVectorU3Ek__BackingField_2() const { return ___U3CUpVectorU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CUpVectorU3Ek__BackingField_2() { return &___U3CUpVectorU3Ek__BackingField_2; }
	inline void set_U3CUpVectorU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CUpVectorU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3, ___U3CWidthU3Ek__BackingField_3)); }
	inline uint32_t get_U3CWidthU3Ek__BackingField_3() const { return ___U3CWidthU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CWidthU3Ek__BackingField_3() { return &___U3CWidthU3Ek__BackingField_3; }
	inline void set_U3CWidthU3Ek__BackingField_3(uint32_t value)
	{
		___U3CWidthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3, ___U3CHeightU3Ek__BackingField_4)); }
	inline uint32_t get_U3CHeightU3Ek__BackingField_4() const { return ___U3CHeightU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CHeightU3Ek__BackingField_4() { return &___U3CHeightU3Ek__BackingField_4; }
	inline void set_U3CHeightU3Ek__BackingField_4(uint32_t value)
	{
		___U3CHeightU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CHorizontalFovDegreesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3, ___U3CHorizontalFovDegreesU3Ek__BackingField_5)); }
	inline float get_U3CHorizontalFovDegreesU3Ek__BackingField_5() const { return ___U3CHorizontalFovDegreesU3Ek__BackingField_5; }
	inline float* get_address_of_U3CHorizontalFovDegreesU3Ek__BackingField_5() { return &___U3CHorizontalFovDegreesU3Ek__BackingField_5; }
	inline void set_U3CHorizontalFovDegreesU3Ek__BackingField_5(float value)
	{
		___U3CHorizontalFovDegreesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CCollideWithUnobservedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3, ___U3CCollideWithUnobservedU3Ek__BackingField_6)); }
	inline bool get_U3CCollideWithUnobservedU3Ek__BackingField_6() const { return ___U3CCollideWithUnobservedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCollideWithUnobservedU3Ek__BackingField_6() { return &___U3CCollideWithUnobservedU3Ek__BackingField_6; }
	inline void set_U3CCollideWithUnobservedU3Ek__BackingField_6(bool value)
	{
		___U3CCollideWithUnobservedU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLRaycast/ResultState
struct ResultState_tB68151984EB584112578A91B1A656323B40288EF 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLRaycast/ResultState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultState_tB68151984EB584112578A91B1A656323B40288EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLResult/Code
struct Code_t188333EEE5268C7988596D9ED31D430EF7C049D8 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLResult/Code::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Code_t188333EEE5268C7988596D9ED31D430EF7C049D8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLTransform
struct MLTransform_t7EF5EB87F17E4C8ED837846579103F05C78120A4 
{
public:
	// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLQuaternionf UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLTransform::Rotation
	MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1  ___Rotation_0;
	// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLVec3f UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLTransform::Position
	MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952  ___Position_1;

public:
	inline static int32_t get_offset_of_Rotation_0() { return static_cast<int32_t>(offsetof(MLTransform_t7EF5EB87F17E4C8ED837846579103F05C78120A4, ___Rotation_0)); }
	inline MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1  get_Rotation_0() const { return ___Rotation_0; }
	inline MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1 * get_address_of_Rotation_0() { return &___Rotation_0; }
	inline void set_Rotation_0(MLQuaternionf_t35F217B9928EA6CEED94323A74B53AE3A0B992E1  value)
	{
		___Rotation_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(MLTransform_t7EF5EB87F17E4C8ED837846579103F05C78120A4, ___Position_1)); }
	inline MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952  get_Position_1() const { return ___Position_1; }
	inline MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952  value)
	{
		___Position_1 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLImageTracker/NativeBindings/MLImageTrackerTargetStaticDataNative
struct MLImageTrackerTargetStaticDataNative_t1A07F127DA29CB4C6975C18C7CF19260C0BA298E 
{
public:
	// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLImageTracker/NativeBindings/MLImageTrackerTargetStaticDataNative::CoordFrameTarget
	MLCoordinateFrameUID_t7ADFCEC93CA8B3DDFB41EC8157D03B51D0611AC9  ___CoordFrameTarget_0;

public:
	inline static int32_t get_offset_of_CoordFrameTarget_0() { return static_cast<int32_t>(offsetof(MLImageTrackerTargetStaticDataNative_t1A07F127DA29CB4C6975C18C7CF19260C0BA298E, ___CoordFrameTarget_0)); }
	inline MLCoordinateFrameUID_t7ADFCEC93CA8B3DDFB41EC8157D03B51D0611AC9  get_CoordFrameTarget_0() const { return ___CoordFrameTarget_0; }
	inline MLCoordinateFrameUID_t7ADFCEC93CA8B3DDFB41EC8157D03B51D0611AC9 * get_address_of_CoordFrameTarget_0() { return &___CoordFrameTarget_0; }
	inline void set_CoordFrameTarget_0(MLCoordinateFrameUID_t7ADFCEC93CA8B3DDFB41EC8157D03B51D0611AC9  value)
	{
		___CoordFrameTarget_0 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLImageTracker/Target/TrackingStatus
struct TrackingStatus_tD8289AF09A6CFB8A29BA63FF0D4677EAF4BAB4A4 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLImageTracker/Target/TrackingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingStatus_tD8289AF09A6CFB8A29BA63FF0D4677EAF4BAB4A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/Button
struct Button_tDDD218E139FF71E238BF22192CF1611B23BC9E62 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInput/Controller/Button::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Button_tDDD218E139FF71E238BF22192CF1611B23BC9E62, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/ControlCalibrationAccuracy
struct ControlCalibrationAccuracy_t11C7FB2195F4A9A697C59DB9B0ACC52FE027B9F4 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInput/Controller/ControlCalibrationAccuracy::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlCalibrationAccuracy_t11C7FB2195F4A9A697C59DB9B0ACC52FE027B9F4, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/ControlDof
struct ControlDof_tC5DCF812092EE2CD2FADD8D6C12D93DC63ED8C4A 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInput/Controller/ControlDof::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlDof_tC5DCF812092EE2CD2FADD8D6C12D93DC63ED8C4A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/ControlType
struct ControlType_t71F8F08BC52ABE697BF2DF5723E5137605314E22 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInput/Controller/ControlType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlType_t71F8F08BC52ABE697BF2DF5723E5137605314E22, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureDirection
struct GestureDirection_t9D768F015649363407AD78AB9708CD10CFCE197A 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureDirection::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureDirection_t9D768F015649363407AD78AB9708CD10CFCE197A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureType
struct GestureType_tFDC3ED151DA3B854DD0DBB184DBFA2DFEA0279B7 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureType_tFDC3ED151DA3B854DD0DBB184DBFA2DFEA0279B7, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/State
struct State_tCEB9B254CAB9868032E4A7EFACA241DB6B7F39D9 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/State::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tCEB9B254CAB9868032E4A7EFACA241DB6B7F39D9, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1<System.Object>
struct MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6  : public RuntimeObject
{
public:
	// System.UInt64 UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1::Handle
	uint64_t ___Handle_0;
	// System.String UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1::DllNotFoundError
	String_t* ___DllNotFoundError_3;
	// UnityEngine.XR.MagicLeap.Internal.PerceptionHandle UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1::perceptionHandle
	PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC  ___perceptionHandle_6;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6, ___Handle_0)); }
	inline uint64_t get_Handle_0() const { return ___Handle_0; }
	inline uint64_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(uint64_t value)
	{
		___Handle_0 = value;
	}

	inline static int32_t get_offset_of_DllNotFoundError_3() { return static_cast<int32_t>(offsetof(MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6, ___DllNotFoundError_3)); }
	inline String_t* get_DllNotFoundError_3() const { return ___DllNotFoundError_3; }
	inline String_t** get_address_of_DllNotFoundError_3() { return &___DllNotFoundError_3; }
	inline void set_DllNotFoundError_3(String_t* value)
	{
		___DllNotFoundError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DllNotFoundError_3), (void*)value);
	}

	inline static int32_t get_offset_of_perceptionHandle_6() { return static_cast<int32_t>(offsetof(MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6, ___perceptionHandle_6)); }
	inline PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC  get_perceptionHandle_6() const { return ___perceptionHandle_6; }
	inline PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC * get_address_of_perceptionHandle_6() { return &___perceptionHandle_6; }
	inline void set_perceptionHandle_6(PerceptionHandle_tE9293725830B8D749D6EA099EBEDD887CE5ABFEC  value)
	{
		___perceptionHandle_6 = value;
	}
};

struct MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6_StaticFields
{
public:
	// System.Boolean UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1::requiresXRLoader
	bool ___requiresXRLoader_1;
	// System.Boolean UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1::<IsStarted>k__BackingField
	bool ___U3CIsStartedU3Ek__BackingField_2;
	// T UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1::instance
	RuntimeObject * ___instance_4;
	// System.Boolean UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1::allowInit
	bool ___allowInit_5;

public:
	inline static int32_t get_offset_of_requiresXRLoader_1() { return static_cast<int32_t>(offsetof(MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6_StaticFields, ___requiresXRLoader_1)); }
	inline bool get_requiresXRLoader_1() const { return ___requiresXRLoader_1; }
	inline bool* get_address_of_requiresXRLoader_1() { return &___requiresXRLoader_1; }
	inline void set_requiresXRLoader_1(bool value)
	{
		___requiresXRLoader_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsStartedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6_StaticFields, ___U3CIsStartedU3Ek__BackingField_2)); }
	inline bool get_U3CIsStartedU3Ek__BackingField_2() const { return ___U3CIsStartedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsStartedU3Ek__BackingField_2() { return &___U3CIsStartedU3Ek__BackingField_2; }
	inline void set_U3CIsStartedU3Ek__BackingField_2(bool value)
	{
		___U3CIsStartedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6_StaticFields, ___instance_4)); }
	inline RuntimeObject * get_instance_4() const { return ___instance_4; }
	inline RuntimeObject ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(RuntimeObject * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_allowInit_5() { return static_cast<int32_t>(offsetof(MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6_StaticFields, ___allowInit_5)); }
	inline bool get_allowInit_5() const { return ___allowInit_5; }
	inline bool* get_address_of_allowInit_5() { return &___allowInit_5; }
	inline void set_allowInit_5(bool value)
	{
		___allowInit_5 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635 
{
public:
	// UnityEngine.XR.MagicLeap.MLResult/Code UnityEngine.XR.MagicLeap.MLResult::Result
	int32_t ___Result_0;
	// System.String UnityEngine.XR.MagicLeap.MLResult::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_Result_0() { return static_cast<int32_t>(offsetof(MLResult_t16167FAD492D3A6F53116897898D23453C72B635, ___Result_0)); }
	inline int32_t get_Result_0() const { return ___Result_0; }
	inline int32_t* get_address_of_Result_0() { return &___Result_0; }
	inline void set_Result_0(int32_t value)
	{
		___Result_0 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(MLResult_t16167FAD492D3A6F53116897898D23453C72B635, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}
};

struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLResult/Code,UnityEngine.XR.MagicLeap.MLResult> UnityEngine.XR.MagicLeap.MLResult::existingResults
	Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 * ___existingResults_1;

public:
	inline static int32_t get_offset_of_existingResults_1() { return static_cast<int32_t>(offsetof(MLResult_t16167FAD492D3A6F53116897898D23453C72B635_StaticFields, ___existingResults_1)); }
	inline Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 * get_existingResults_1() const { return ___existingResults_1; }
	inline Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 ** get_address_of_existingResults_1() { return &___existingResults_1; }
	inline void set_existingResults_1(Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 * value)
	{
		___existingResults_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___existingResults_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635_marshaled_pinvoke
{
	int32_t ___Result_0;
	char* ___message_2;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635_marshaled_com
{
	int32_t ___Result_0;
	Il2CppChar* ___message_2;
};

// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller
struct Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06  : public RuntimeObject
{
public:
	// System.UInt64 UnityEngine.XR.MagicLeap.MLInput/Controller::inputTrackerHandle
	uint64_t ___inputTrackerHandle_0;
	// System.Byte UnityEngine.XR.MagicLeap.MLInput/Controller::controllerId
	uint8_t ___controllerId_1;
	// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLInput/Controller::transform
	MLTransform_t7EF5EB87F17E4C8ED837846579103F05C78120A4  ___transform_2;
	// System.Boolean UnityEngine.XR.MagicLeap.MLInput/Controller::isMenuButtonDown
	bool ___isMenuButtonDown_3;
	// UnityEngine.XR.MagicLeap.MLInput/ControllerTouchpadGestureDelegate UnityEngine.XR.MagicLeap.MLInput/Controller::OnTouchpadGestureStart
	ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * ___OnTouchpadGestureStart_4;
	// UnityEngine.XR.MagicLeap.MLInput/ControllerTouchpadGestureDelegate UnityEngine.XR.MagicLeap.MLInput/Controller::OnTouchpadGestureContinue
	ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * ___OnTouchpadGestureContinue_5;
	// UnityEngine.XR.MagicLeap.MLInput/ControllerTouchpadGestureDelegate UnityEngine.XR.MagicLeap.MLInput/Controller::OnTouchpadGestureEnd
	ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * ___OnTouchpadGestureEnd_6;
	// UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate UnityEngine.XR.MagicLeap.MLInput/Controller::OnButtonDown
	ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * ___OnButtonDown_7;
	// UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate UnityEngine.XR.MagicLeap.MLInput/Controller::OnButtonUp
	ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * ___OnButtonUp_8;
	// UnityEngine.XR.MagicLeap.MLInput/ControllerConnectionDelegate UnityEngine.XR.MagicLeap.MLInput/Controller::OnConnect
	ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 * ___OnConnect_9;
	// UnityEngine.XR.MagicLeap.MLInput/ControllerConnectionDelegate UnityEngine.XR.MagicLeap.MLInput/Controller::OnDisconnect
	ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 * ___OnDisconnect_10;
	// UnityEngine.XR.MagicLeap.MLInput/Hand UnityEngine.XR.MagicLeap.MLInput/Controller::<Hand>k__BackingField
	int32_t ___U3CHandU3Ek__BackingField_11;
	// System.Boolean UnityEngine.XR.MagicLeap.MLInput/Controller::<Connected>k__BackingField
	bool ___U3CConnectedU3Ek__BackingField_12;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLInput/Controller::<Position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion UnityEngine.XR.MagicLeap.MLInput/Controller::<Orientation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLInput/Controller::<Touch1PosAndForce>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTouch1PosAndForceU3Ek__BackingField_15;
	// System.Boolean UnityEngine.XR.MagicLeap.MLInput/Controller::<Touch1Active>k__BackingField
	bool ___U3CTouch1ActiveU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLInput/Controller::<Touch2PosAndForce>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTouch2PosAndForceU3Ek__BackingField_17;
	// System.Boolean UnityEngine.XR.MagicLeap.MLInput/Controller::<Touch2Active>k__BackingField
	bool ___U3CTouch2ActiveU3Ek__BackingField_18;
	// System.Single UnityEngine.XR.MagicLeap.MLInput/Controller::<TriggerValue>k__BackingField
	float ___U3CTriggerValueU3Ek__BackingField_19;
	// System.Boolean UnityEngine.XR.MagicLeap.MLInput/Controller::<IsBumperDown>k__BackingField
	bool ___U3CIsBumperDownU3Ek__BackingField_20;
	// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/State UnityEngine.XR.MagicLeap.MLInput/Controller::<TouchpadGestureState>k__BackingField
	uint32_t ___U3CTouchpadGestureStateU3Ek__BackingField_21;
	// UnityEngine.XR.MagicLeap.MLInput/Controller/ControlType UnityEngine.XR.MagicLeap.MLInput/Controller::<Type>k__BackingField
	uint32_t ___U3CTypeU3Ek__BackingField_22;
	// UnityEngine.XR.MagicLeap.MLInput/Controller/ControlDof UnityEngine.XR.MagicLeap.MLInput/Controller::<Dof>k__BackingField
	uint32_t ___U3CDofU3Ek__BackingField_23;
	// UnityEngine.XR.MagicLeap.MLInput/Controller/ControlCalibrationAccuracy UnityEngine.XR.MagicLeap.MLInput/Controller::<CalibrationAccuracy>k__BackingField
	uint32_t ___U3CCalibrationAccuracyU3Ek__BackingField_24;
	// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture UnityEngine.XR.MagicLeap.MLInput/Controller::<CurrentTouchpadGesture>k__BackingField
	TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * ___U3CCurrentTouchpadGestureU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_inputTrackerHandle_0() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___inputTrackerHandle_0)); }
	inline uint64_t get_inputTrackerHandle_0() const { return ___inputTrackerHandle_0; }
	inline uint64_t* get_address_of_inputTrackerHandle_0() { return &___inputTrackerHandle_0; }
	inline void set_inputTrackerHandle_0(uint64_t value)
	{
		___inputTrackerHandle_0 = value;
	}

	inline static int32_t get_offset_of_controllerId_1() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___controllerId_1)); }
	inline uint8_t get_controllerId_1() const { return ___controllerId_1; }
	inline uint8_t* get_address_of_controllerId_1() { return &___controllerId_1; }
	inline void set_controllerId_1(uint8_t value)
	{
		___controllerId_1 = value;
	}

	inline static int32_t get_offset_of_transform_2() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___transform_2)); }
	inline MLTransform_t7EF5EB87F17E4C8ED837846579103F05C78120A4  get_transform_2() const { return ___transform_2; }
	inline MLTransform_t7EF5EB87F17E4C8ED837846579103F05C78120A4 * get_address_of_transform_2() { return &___transform_2; }
	inline void set_transform_2(MLTransform_t7EF5EB87F17E4C8ED837846579103F05C78120A4  value)
	{
		___transform_2 = value;
	}

	inline static int32_t get_offset_of_isMenuButtonDown_3() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___isMenuButtonDown_3)); }
	inline bool get_isMenuButtonDown_3() const { return ___isMenuButtonDown_3; }
	inline bool* get_address_of_isMenuButtonDown_3() { return &___isMenuButtonDown_3; }
	inline void set_isMenuButtonDown_3(bool value)
	{
		___isMenuButtonDown_3 = value;
	}

	inline static int32_t get_offset_of_OnTouchpadGestureStart_4() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___OnTouchpadGestureStart_4)); }
	inline ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * get_OnTouchpadGestureStart_4() const { return ___OnTouchpadGestureStart_4; }
	inline ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 ** get_address_of_OnTouchpadGestureStart_4() { return &___OnTouchpadGestureStart_4; }
	inline void set_OnTouchpadGestureStart_4(ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * value)
	{
		___OnTouchpadGestureStart_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchpadGestureStart_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnTouchpadGestureContinue_5() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___OnTouchpadGestureContinue_5)); }
	inline ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * get_OnTouchpadGestureContinue_5() const { return ___OnTouchpadGestureContinue_5; }
	inline ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 ** get_address_of_OnTouchpadGestureContinue_5() { return &___OnTouchpadGestureContinue_5; }
	inline void set_OnTouchpadGestureContinue_5(ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * value)
	{
		___OnTouchpadGestureContinue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchpadGestureContinue_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnTouchpadGestureEnd_6() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___OnTouchpadGestureEnd_6)); }
	inline ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * get_OnTouchpadGestureEnd_6() const { return ___OnTouchpadGestureEnd_6; }
	inline ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 ** get_address_of_OnTouchpadGestureEnd_6() { return &___OnTouchpadGestureEnd_6; }
	inline void set_OnTouchpadGestureEnd_6(ControllerTouchpadGestureDelegate_t95D3FEEA2DD92C52FB300BA3D9FCC6089E8BF918 * value)
	{
		___OnTouchpadGestureEnd_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchpadGestureEnd_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnButtonDown_7() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___OnButtonDown_7)); }
	inline ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * get_OnButtonDown_7() const { return ___OnButtonDown_7; }
	inline ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 ** get_address_of_OnButtonDown_7() { return &___OnButtonDown_7; }
	inline void set_OnButtonDown_7(ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * value)
	{
		___OnButtonDown_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonDown_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnButtonUp_8() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___OnButtonUp_8)); }
	inline ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * get_OnButtonUp_8() const { return ___OnButtonUp_8; }
	inline ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 ** get_address_of_OnButtonUp_8() { return &___OnButtonUp_8; }
	inline void set_OnButtonUp_8(ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * value)
	{
		___OnButtonUp_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonUp_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnect_9() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___OnConnect_9)); }
	inline ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 * get_OnConnect_9() const { return ___OnConnect_9; }
	inline ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 ** get_address_of_OnConnect_9() { return &___OnConnect_9; }
	inline void set_OnConnect_9(ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 * value)
	{
		___OnConnect_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnect_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnect_10() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___OnDisconnect_10)); }
	inline ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 * get_OnDisconnect_10() const { return ___OnDisconnect_10; }
	inline ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 ** get_address_of_OnDisconnect_10() { return &___OnDisconnect_10; }
	inline void set_OnDisconnect_10(ControllerConnectionDelegate_t3F3208C7BE7581E668A3D86ED2C8104B2B3F2C40 * value)
	{
		___OnDisconnect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnect_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CHandU3Ek__BackingField_11)); }
	inline int32_t get_U3CHandU3Ek__BackingField_11() const { return ___U3CHandU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CHandU3Ek__BackingField_11() { return &___U3CHandU3Ek__BackingField_11; }
	inline void set_U3CHandU3Ek__BackingField_11(int32_t value)
	{
		___U3CHandU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CConnectedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CConnectedU3Ek__BackingField_12)); }
	inline bool get_U3CConnectedU3Ek__BackingField_12() const { return ___U3CConnectedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CConnectedU3Ek__BackingField_12() { return &___U3CConnectedU3Ek__BackingField_12; }
	inline void set_U3CConnectedU3Ek__BackingField_12(bool value)
	{
		___U3CConnectedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CPositionU3Ek__BackingField_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionU3Ek__BackingField_13() const { return ___U3CPositionU3Ek__BackingField_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionU3Ek__BackingField_13() { return &___U3CPositionU3Ek__BackingField_13; }
	inline void set_U3CPositionU3Ek__BackingField_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3COrientationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3COrientationU3Ek__BackingField_14)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3COrientationU3Ek__BackingField_14() const { return ___U3COrientationU3Ek__BackingField_14; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3COrientationU3Ek__BackingField_14() { return &___U3COrientationU3Ek__BackingField_14; }
	inline void set_U3COrientationU3Ek__BackingField_14(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3COrientationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CTouch1PosAndForceU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CTouch1PosAndForceU3Ek__BackingField_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTouch1PosAndForceU3Ek__BackingField_15() const { return ___U3CTouch1PosAndForceU3Ek__BackingField_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTouch1PosAndForceU3Ek__BackingField_15() { return &___U3CTouch1PosAndForceU3Ek__BackingField_15; }
	inline void set_U3CTouch1PosAndForceU3Ek__BackingField_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTouch1PosAndForceU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CTouch1ActiveU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CTouch1ActiveU3Ek__BackingField_16)); }
	inline bool get_U3CTouch1ActiveU3Ek__BackingField_16() const { return ___U3CTouch1ActiveU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CTouch1ActiveU3Ek__BackingField_16() { return &___U3CTouch1ActiveU3Ek__BackingField_16; }
	inline void set_U3CTouch1ActiveU3Ek__BackingField_16(bool value)
	{
		___U3CTouch1ActiveU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CTouch2PosAndForceU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CTouch2PosAndForceU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTouch2PosAndForceU3Ek__BackingField_17() const { return ___U3CTouch2PosAndForceU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTouch2PosAndForceU3Ek__BackingField_17() { return &___U3CTouch2PosAndForceU3Ek__BackingField_17; }
	inline void set_U3CTouch2PosAndForceU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTouch2PosAndForceU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CTouch2ActiveU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CTouch2ActiveU3Ek__BackingField_18)); }
	inline bool get_U3CTouch2ActiveU3Ek__BackingField_18() const { return ___U3CTouch2ActiveU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CTouch2ActiveU3Ek__BackingField_18() { return &___U3CTouch2ActiveU3Ek__BackingField_18; }
	inline void set_U3CTouch2ActiveU3Ek__BackingField_18(bool value)
	{
		___U3CTouch2ActiveU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CTriggerValueU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CTriggerValueU3Ek__BackingField_19)); }
	inline float get_U3CTriggerValueU3Ek__BackingField_19() const { return ___U3CTriggerValueU3Ek__BackingField_19; }
	inline float* get_address_of_U3CTriggerValueU3Ek__BackingField_19() { return &___U3CTriggerValueU3Ek__BackingField_19; }
	inline void set_U3CTriggerValueU3Ek__BackingField_19(float value)
	{
		___U3CTriggerValueU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsBumperDownU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CIsBumperDownU3Ek__BackingField_20)); }
	inline bool get_U3CIsBumperDownU3Ek__BackingField_20() const { return ___U3CIsBumperDownU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsBumperDownU3Ek__BackingField_20() { return &___U3CIsBumperDownU3Ek__BackingField_20; }
	inline void set_U3CIsBumperDownU3Ek__BackingField_20(bool value)
	{
		___U3CIsBumperDownU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CTouchpadGestureStateU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CTouchpadGestureStateU3Ek__BackingField_21)); }
	inline uint32_t get_U3CTouchpadGestureStateU3Ek__BackingField_21() const { return ___U3CTouchpadGestureStateU3Ek__BackingField_21; }
	inline uint32_t* get_address_of_U3CTouchpadGestureStateU3Ek__BackingField_21() { return &___U3CTouchpadGestureStateU3Ek__BackingField_21; }
	inline void set_U3CTouchpadGestureStateU3Ek__BackingField_21(uint32_t value)
	{
		___U3CTouchpadGestureStateU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CTypeU3Ek__BackingField_22)); }
	inline uint32_t get_U3CTypeU3Ek__BackingField_22() const { return ___U3CTypeU3Ek__BackingField_22; }
	inline uint32_t* get_address_of_U3CTypeU3Ek__BackingField_22() { return &___U3CTypeU3Ek__BackingField_22; }
	inline void set_U3CTypeU3Ek__BackingField_22(uint32_t value)
	{
		___U3CTypeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CDofU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CDofU3Ek__BackingField_23)); }
	inline uint32_t get_U3CDofU3Ek__BackingField_23() const { return ___U3CDofU3Ek__BackingField_23; }
	inline uint32_t* get_address_of_U3CDofU3Ek__BackingField_23() { return &___U3CDofU3Ek__BackingField_23; }
	inline void set_U3CDofU3Ek__BackingField_23(uint32_t value)
	{
		___U3CDofU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CCalibrationAccuracyU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CCalibrationAccuracyU3Ek__BackingField_24)); }
	inline uint32_t get_U3CCalibrationAccuracyU3Ek__BackingField_24() const { return ___U3CCalibrationAccuracyU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CCalibrationAccuracyU3Ek__BackingField_24() { return &___U3CCalibrationAccuracyU3Ek__BackingField_24; }
	inline void set_U3CCalibrationAccuracyU3Ek__BackingField_24(uint32_t value)
	{
		___U3CCalibrationAccuracyU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentTouchpadGestureU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06, ___U3CCurrentTouchpadGestureU3Ek__BackingField_25)); }
	inline TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * get_U3CCurrentTouchpadGestureU3Ek__BackingField_25() const { return ___U3CCurrentTouchpadGestureU3Ek__BackingField_25; }
	inline TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 ** get_address_of_U3CCurrentTouchpadGestureU3Ek__BackingField_25() { return &___U3CCurrentTouchpadGestureU3Ek__BackingField_25; }
	inline void set_U3CCurrentTouchpadGestureU3Ek__BackingField_25(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * value)
	{
		___U3CCurrentTouchpadGestureU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentTouchpadGestureU3Ek__BackingField_25), (void*)value);
	}
};


// UnityEngine.XR.MagicLeap.MLImageTracker/NativeBindings/MLImageTrackerTargetResultNative
struct MLImageTrackerTargetResultNative_t41F1EA6C9FB4E95E0AB0D862D952B29643698CF5 
{
public:
	// UnityEngine.XR.MagicLeap.MLImageTracker/Target/TrackingStatus UnityEngine.XR.MagicLeap.MLImageTracker/NativeBindings/MLImageTrackerTargetResultNative::Status
	int32_t ___Status_0;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(MLImageTrackerTargetResultNative_t41F1EA6C9FB4E95E0AB0D862D952B29643698CF5, ___Status_0)); }
	inline int32_t get_Status_0() const { return ___Status_0; }
	inline int32_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(int32_t value)
	{
		___Status_0 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLImageTracker/Target/Result
struct Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2 
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLImageTracker/Target/Result::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_0;
	// UnityEngine.Quaternion UnityEngine.XR.MagicLeap.MLImageTracker/Target/Result::Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rotation_1;
	// UnityEngine.XR.MagicLeap.MLImageTracker/Target/TrackingStatus UnityEngine.XR.MagicLeap.MLImageTracker/Target/Result::Status
	int32_t ___Status_2;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2, ___Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_0() const { return ___Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2, ___Rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_Status_2() { return static_cast<int32_t>(offsetof(Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2, ___Status_2)); }
	inline int32_t get_Status_2() const { return ___Status_2; }
	inline int32_t* get_address_of_Status_2() { return &___Status_2; }
	inline void set_Status_2(int32_t value)
	{
		___Status_2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture
struct TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9  : public RuntimeObject
{
public:
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::posAndForceUnity
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___posAndForceUnity_0;
	// UnityEngine.XR.MagicLeap.Native.MagicLeapNativeBindings/MLVec3f UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::posAndForce
	MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952  ___posAndForce_1;
	// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureType UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::<Type>k__BackingField
	uint32_t ___U3CTypeU3Ek__BackingField_2;
	// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureDirection UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::<Direction>k__BackingField
	uint32_t ___U3CDirectionU3Ek__BackingField_3;
	// System.Single UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::<Speed>k__BackingField
	float ___U3CSpeedU3Ek__BackingField_4;
	// System.Single UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::<Distance>k__BackingField
	float ___U3CDistanceU3Ek__BackingField_5;
	// System.Single UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::<FingerGap>k__BackingField
	float ___U3CFingerGapU3Ek__BackingField_6;
	// System.Single UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_7;
	// System.Single UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::<Angle>k__BackingField
	float ___U3CAngleU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_posAndForceUnity_0() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___posAndForceUnity_0)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_posAndForceUnity_0() const { return ___posAndForceUnity_0; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_posAndForceUnity_0() { return &___posAndForceUnity_0; }
	inline void set_posAndForceUnity_0(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___posAndForceUnity_0 = value;
	}

	inline static int32_t get_offset_of_posAndForce_1() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___posAndForce_1)); }
	inline MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952  get_posAndForce_1() const { return ___posAndForce_1; }
	inline MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952 * get_address_of_posAndForce_1() { return &___posAndForce_1; }
	inline void set_posAndForce_1(MLVec3f_tABDB2B7D293736251D00845A7551060DB2CB1952  value)
	{
		___posAndForce_1 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___U3CTypeU3Ek__BackingField_2)); }
	inline uint32_t get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(uint32_t value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___U3CDirectionU3Ek__BackingField_3)); }
	inline uint32_t get_U3CDirectionU3Ek__BackingField_3() const { return ___U3CDirectionU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CDirectionU3Ek__BackingField_3() { return &___U3CDirectionU3Ek__BackingField_3; }
	inline void set_U3CDirectionU3Ek__BackingField_3(uint32_t value)
	{
		___U3CDirectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSpeedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___U3CSpeedU3Ek__BackingField_4)); }
	inline float get_U3CSpeedU3Ek__BackingField_4() const { return ___U3CSpeedU3Ek__BackingField_4; }
	inline float* get_address_of_U3CSpeedU3Ek__BackingField_4() { return &___U3CSpeedU3Ek__BackingField_4; }
	inline void set_U3CSpeedU3Ek__BackingField_4(float value)
	{
		___U3CSpeedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDistanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___U3CDistanceU3Ek__BackingField_5)); }
	inline float get_U3CDistanceU3Ek__BackingField_5() const { return ___U3CDistanceU3Ek__BackingField_5; }
	inline float* get_address_of_U3CDistanceU3Ek__BackingField_5() { return &___U3CDistanceU3Ek__BackingField_5; }
	inline void set_U3CDistanceU3Ek__BackingField_5(float value)
	{
		___U3CDistanceU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CFingerGapU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___U3CFingerGapU3Ek__BackingField_6)); }
	inline float get_U3CFingerGapU3Ek__BackingField_6() const { return ___U3CFingerGapU3Ek__BackingField_6; }
	inline float* get_address_of_U3CFingerGapU3Ek__BackingField_6() { return &___U3CFingerGapU3Ek__BackingField_6; }
	inline void set_U3CFingerGapU3Ek__BackingField_6(float value)
	{
		___U3CFingerGapU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___U3CRadiusU3Ek__BackingField_7)); }
	inline float get_U3CRadiusU3Ek__BackingField_7() const { return ___U3CRadiusU3Ek__BackingField_7; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_7() { return &___U3CRadiusU3Ek__BackingField_7; }
	inline void set_U3CRadiusU3Ek__BackingField_7(float value)
	{
		___U3CRadiusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CAngleU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9, ___U3CAngleU3Ek__BackingField_8)); }
	inline float get_U3CAngleU3Ek__BackingField_8() const { return ___U3CAngleU3Ek__BackingField_8; }
	inline float* get_address_of_U3CAngleU3Ek__BackingField_8() { return &___U3CAngleU3Ek__BackingField_8; }
	inline void set_U3CAngleU3Ek__BackingField_8(float value)
	{
		___U3CAngleU3Ek__BackingField_8 = value;
	}
};


// System.Action`1<UnityEngine.XR.MagicLeap.MLResult>
struct Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// ImageTrackingSystem/TrackingStatusChanged
struct TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.MagicLeap.MLImageTracker/Target
struct Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2  : public RuntimeObject
{
public:
	// UnityEngine.XR.MagicLeap.MLImageTracker/Target/Settings UnityEngine.XR.MagicLeap.MLImageTracker/Target::targetSettings
	Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6  ___targetSettings_0;
	// System.UInt64 UnityEngine.XR.MagicLeap.MLImageTracker/Target::targetHandle
	uint64_t ___targetHandle_1;
	// System.UInt64 UnityEngine.XR.MagicLeap.MLImageTracker/Target::trackerHandle
	uint64_t ___trackerHandle_2;
	// System.Byte[] UnityEngine.XR.MagicLeap.MLImageTracker/Target::imageData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___imageData_3;
	// UnityEngine.XR.MagicLeap.MLImageTracker/NativeBindings/MLImageTrackerTargetStaticDataNative UnityEngine.XR.MagicLeap.MLImageTracker/Target::targetStaticData
	MLImageTrackerTargetStaticDataNative_t1A07F127DA29CB4C6975C18C7CF19260C0BA298E  ___targetStaticData_4;
	// UnityEngine.XR.MagicLeap.MLImageTracker/NativeBindings/MLImageTrackerTargetResultNative UnityEngine.XR.MagicLeap.MLImageTracker/Target::nativeTrackingResult
	MLImageTrackerTargetResultNative_t41F1EA6C9FB4E95E0AB0D862D952B29643698CF5  ___nativeTrackingResult_5;
	// UnityEngine.XR.MagicLeap.MLImageTracker/Target/Result UnityEngine.XR.MagicLeap.MLImageTracker/Target::lastTrackingResult
	Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2  ___lastTrackingResult_6;
	// UnityEngine.XR.MagicLeap.MLImageTracker/Target/OnImageResultDelegate UnityEngine.XR.MagicLeap.MLImageTracker/Target::OnImageResult
	OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA * ___OnImageResult_7;

public:
	inline static int32_t get_offset_of_targetSettings_0() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___targetSettings_0)); }
	inline Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6  get_targetSettings_0() const { return ___targetSettings_0; }
	inline Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6 * get_address_of_targetSettings_0() { return &___targetSettings_0; }
	inline void set_targetSettings_0(Settings_t358C92F45429BDE664A6BED8AB7A9E71630C7BA6  value)
	{
		___targetSettings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___targetSettings_0))->___Name_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_targetHandle_1() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___targetHandle_1)); }
	inline uint64_t get_targetHandle_1() const { return ___targetHandle_1; }
	inline uint64_t* get_address_of_targetHandle_1() { return &___targetHandle_1; }
	inline void set_targetHandle_1(uint64_t value)
	{
		___targetHandle_1 = value;
	}

	inline static int32_t get_offset_of_trackerHandle_2() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___trackerHandle_2)); }
	inline uint64_t get_trackerHandle_2() const { return ___trackerHandle_2; }
	inline uint64_t* get_address_of_trackerHandle_2() { return &___trackerHandle_2; }
	inline void set_trackerHandle_2(uint64_t value)
	{
		___trackerHandle_2 = value;
	}

	inline static int32_t get_offset_of_imageData_3() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___imageData_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_imageData_3() const { return ___imageData_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_imageData_3() { return &___imageData_3; }
	inline void set_imageData_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___imageData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageData_3), (void*)value);
	}

	inline static int32_t get_offset_of_targetStaticData_4() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___targetStaticData_4)); }
	inline MLImageTrackerTargetStaticDataNative_t1A07F127DA29CB4C6975C18C7CF19260C0BA298E  get_targetStaticData_4() const { return ___targetStaticData_4; }
	inline MLImageTrackerTargetStaticDataNative_t1A07F127DA29CB4C6975C18C7CF19260C0BA298E * get_address_of_targetStaticData_4() { return &___targetStaticData_4; }
	inline void set_targetStaticData_4(MLImageTrackerTargetStaticDataNative_t1A07F127DA29CB4C6975C18C7CF19260C0BA298E  value)
	{
		___targetStaticData_4 = value;
	}

	inline static int32_t get_offset_of_nativeTrackingResult_5() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___nativeTrackingResult_5)); }
	inline MLImageTrackerTargetResultNative_t41F1EA6C9FB4E95E0AB0D862D952B29643698CF5  get_nativeTrackingResult_5() const { return ___nativeTrackingResult_5; }
	inline MLImageTrackerTargetResultNative_t41F1EA6C9FB4E95E0AB0D862D952B29643698CF5 * get_address_of_nativeTrackingResult_5() { return &___nativeTrackingResult_5; }
	inline void set_nativeTrackingResult_5(MLImageTrackerTargetResultNative_t41F1EA6C9FB4E95E0AB0D862D952B29643698CF5  value)
	{
		___nativeTrackingResult_5 = value;
	}

	inline static int32_t get_offset_of_lastTrackingResult_6() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___lastTrackingResult_6)); }
	inline Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2  get_lastTrackingResult_6() const { return ___lastTrackingResult_6; }
	inline Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2 * get_address_of_lastTrackingResult_6() { return &___lastTrackingResult_6; }
	inline void set_lastTrackingResult_6(Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2  value)
	{
		___lastTrackingResult_6 = value;
	}

	inline static int32_t get_offset_of_OnImageResult_7() { return static_cast<int32_t>(offsetof(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2, ___OnImageResult_7)); }
	inline OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA * get_OnImageResult_7() const { return ___OnImageResult_7; }
	inline OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA ** get_address_of_OnImageResult_7() { return &___OnImageResult_7; }
	inline void set_OnImageResult_7(OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA * value)
	{
		___OnImageResult_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnImageResult_7), (void*)value);
	}
};


// UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate
struct ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.MagicLeap.MLRaycast/OnRaycastResultDelegate
struct OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.MagicLeap.MLImageTracker/Target/OnImageResultDelegate
struct OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AuraControl
struct AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material[] AuraControl::_auraMat
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____auraMat_4;
	// UnityEngine.Color AuraControl::_AuraColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____AuraColor_5;
	// UnityEngine.Color AuraControl::_RimColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____RimColor_6;
	// UnityEngine.Texture2D AuraControl::_noiseTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____noiseTexture_7;
	// System.Single AuraControl::_auraWidth
	float ____auraWidth_8;
	// System.Single AuraControl::_AuraZ
	float ____AuraZ_9;
	// System.Single AuraControl::_noiseScale
	float ____noiseScale_10;
	// System.Single AuraControl::_speedX
	float ____speedX_11;
	// System.Single AuraControl::_speedY
	float ____speedY_12;
	// System.Single AuraControl::_noiseOpacity
	float ____noiseOpacity_13;
	// System.Single AuraControl::_brightness
	float ____brightness_14;
	// System.Single AuraControl::_rimEdge
	float ____rimEdge_15;
	// System.Single AuraControl::_rimPower
	float ____rimPower_16;
	// System.Boolean AuraControl::_editMode
	bool ____editMode_17;

public:
	inline static int32_t get_offset_of__auraMat_4() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____auraMat_4)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__auraMat_4() const { return ____auraMat_4; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__auraMat_4() { return &____auraMat_4; }
	inline void set__auraMat_4(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____auraMat_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____auraMat_4), (void*)value);
	}

	inline static int32_t get_offset_of__AuraColor_5() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____AuraColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__AuraColor_5() const { return ____AuraColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__AuraColor_5() { return &____AuraColor_5; }
	inline void set__AuraColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____AuraColor_5 = value;
	}

	inline static int32_t get_offset_of__RimColor_6() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____RimColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__RimColor_6() const { return ____RimColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__RimColor_6() { return &____RimColor_6; }
	inline void set__RimColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____RimColor_6 = value;
	}

	inline static int32_t get_offset_of__noiseTexture_7() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____noiseTexture_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__noiseTexture_7() const { return ____noiseTexture_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__noiseTexture_7() { return &____noiseTexture_7; }
	inline void set__noiseTexture_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____noiseTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____noiseTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of__auraWidth_8() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____auraWidth_8)); }
	inline float get__auraWidth_8() const { return ____auraWidth_8; }
	inline float* get_address_of__auraWidth_8() { return &____auraWidth_8; }
	inline void set__auraWidth_8(float value)
	{
		____auraWidth_8 = value;
	}

	inline static int32_t get_offset_of__AuraZ_9() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____AuraZ_9)); }
	inline float get__AuraZ_9() const { return ____AuraZ_9; }
	inline float* get_address_of__AuraZ_9() { return &____AuraZ_9; }
	inline void set__AuraZ_9(float value)
	{
		____AuraZ_9 = value;
	}

	inline static int32_t get_offset_of__noiseScale_10() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____noiseScale_10)); }
	inline float get__noiseScale_10() const { return ____noiseScale_10; }
	inline float* get_address_of__noiseScale_10() { return &____noiseScale_10; }
	inline void set__noiseScale_10(float value)
	{
		____noiseScale_10 = value;
	}

	inline static int32_t get_offset_of__speedX_11() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____speedX_11)); }
	inline float get__speedX_11() const { return ____speedX_11; }
	inline float* get_address_of__speedX_11() { return &____speedX_11; }
	inline void set__speedX_11(float value)
	{
		____speedX_11 = value;
	}

	inline static int32_t get_offset_of__speedY_12() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____speedY_12)); }
	inline float get__speedY_12() const { return ____speedY_12; }
	inline float* get_address_of__speedY_12() { return &____speedY_12; }
	inline void set__speedY_12(float value)
	{
		____speedY_12 = value;
	}

	inline static int32_t get_offset_of__noiseOpacity_13() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____noiseOpacity_13)); }
	inline float get__noiseOpacity_13() const { return ____noiseOpacity_13; }
	inline float* get_address_of__noiseOpacity_13() { return &____noiseOpacity_13; }
	inline void set__noiseOpacity_13(float value)
	{
		____noiseOpacity_13 = value;
	}

	inline static int32_t get_offset_of__brightness_14() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____brightness_14)); }
	inline float get__brightness_14() const { return ____brightness_14; }
	inline float* get_address_of__brightness_14() { return &____brightness_14; }
	inline void set__brightness_14(float value)
	{
		____brightness_14 = value;
	}

	inline static int32_t get_offset_of__rimEdge_15() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____rimEdge_15)); }
	inline float get__rimEdge_15() const { return ____rimEdge_15; }
	inline float* get_address_of__rimEdge_15() { return &____rimEdge_15; }
	inline void set__rimEdge_15(float value)
	{
		____rimEdge_15 = value;
	}

	inline static int32_t get_offset_of__rimPower_16() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____rimPower_16)); }
	inline float get__rimPower_16() const { return ____rimPower_16; }
	inline float* get_address_of__rimPower_16() { return &____rimPower_16; }
	inline void set__rimPower_16(float value)
	{
		____rimPower_16 = value;
	}

	inline static int32_t get_offset_of__editMode_17() { return static_cast<int32_t>(offsetof(AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80, ____editMode_17)); }
	inline bool get__editMode_17() const { return ____editMode_17; }
	inline bool* get_address_of__editMode_17() { return &____editMode_17; }
	inline void set__editMode_17(bool value)
	{
		____editMode_17 = value;
	}
};


// ButtonScript
struct ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ButtonScript::_cube
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____cube_4;
	// UnityEngine.Quaternion ButtonScript::_originalOrientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____originalOrientation_5;
	// UnityEngine.Vector3 ButtonScript::_rotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____rotation_6;
	// UnityEngine.XR.MagicLeap.MLInput/Controller ButtonScript::_controller
	Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * ____controller_8;

public:
	inline static int32_t get_offset_of__cube_4() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ____cube_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__cube_4() const { return ____cube_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__cube_4() { return &____cube_4; }
	inline void set__cube_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____cube_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cube_4), (void*)value);
	}

	inline static int32_t get_offset_of__originalOrientation_5() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ____originalOrientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__originalOrientation_5() const { return ____originalOrientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__originalOrientation_5() { return &____originalOrientation_5; }
	inline void set__originalOrientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____originalOrientation_5 = value;
	}

	inline static int32_t get_offset_of__rotation_6() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ____rotation_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__rotation_6() const { return ____rotation_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__rotation_6() { return &____rotation_6; }
	inline void set__rotation_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____rotation_6 = value;
	}

	inline static int32_t get_offset_of__controller_8() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ____controller_8)); }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * get__controller_8() const { return ____controller_8; }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 ** get_address_of__controller_8() { return &____controller_8; }
	inline void set__controller_8(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * value)
	{
		____controller_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____controller_8), (void*)value);
	}
};


// DynamicBeam
struct DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.MagicLeap.MLInput/Controller DynamicBeam::controller
	Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * ___controller_4;
	// UnityEngine.LineRenderer DynamicBeam::beamLine
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___beamLine_5;
	// UnityEngine.Color DynamicBeam::startColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___startColor_6;
	// UnityEngine.Color DynamicBeam::endColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endColor_7;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C, ___controller_4)); }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * get_controller_4() const { return ___controller_4; }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_beamLine_5() { return static_cast<int32_t>(offsetof(DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C, ___beamLine_5)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_beamLine_5() const { return ___beamLine_5; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_beamLine_5() { return &___beamLine_5; }
	inline void set_beamLine_5(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___beamLine_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beamLine_5), (void*)value);
	}

	inline static int32_t get_offset_of_startColor_6() { return static_cast<int32_t>(offsetof(DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C, ___startColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_startColor_6() const { return ___startColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_startColor_6() { return &___startColor_6; }
	inline void set_startColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___startColor_6 = value;
	}

	inline static int32_t get_offset_of_endColor_7() { return static_cast<int32_t>(offsetof(DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C, ___endColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endColor_7() const { return ___endColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endColor_7() { return &___endColor_7; }
	inline void set_endColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endColor_7 = value;
	}
};


// ImageTrackingSystem
struct ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ImageTrackingSystem::TrackedImageFollower
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TrackedImageFollower_4;
	// UnityEngine.XR.MagicLeap.MLImageTracker/Target ImageTrackingSystem::_imageTarget
	Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2 * ____imageTarget_5;
	// ImageTargetInfo ImageTrackingSystem::TargetInfo
	ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * ___TargetInfo_6;
	// ImageTrackingStatus ImageTrackingSystem::CurrentStatus
	int32_t ___CurrentStatus_8;
	// UnityEngine.Vector3 ImageTrackingSystem::ImagePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ImagePos_9;
	// UnityEngine.Quaternion ImageTrackingSystem::ImageRot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___ImageRot_10;

public:
	inline static int32_t get_offset_of_TrackedImageFollower_4() { return static_cast<int32_t>(offsetof(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C, ___TrackedImageFollower_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TrackedImageFollower_4() const { return ___TrackedImageFollower_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TrackedImageFollower_4() { return &___TrackedImageFollower_4; }
	inline void set_TrackedImageFollower_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TrackedImageFollower_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackedImageFollower_4), (void*)value);
	}

	inline static int32_t get_offset_of__imageTarget_5() { return static_cast<int32_t>(offsetof(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C, ____imageTarget_5)); }
	inline Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2 * get__imageTarget_5() const { return ____imageTarget_5; }
	inline Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2 ** get_address_of__imageTarget_5() { return &____imageTarget_5; }
	inline void set__imageTarget_5(Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2 * value)
	{
		____imageTarget_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____imageTarget_5), (void*)value);
	}

	inline static int32_t get_offset_of_TargetInfo_6() { return static_cast<int32_t>(offsetof(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C, ___TargetInfo_6)); }
	inline ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * get_TargetInfo_6() const { return ___TargetInfo_6; }
	inline ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 ** get_address_of_TargetInfo_6() { return &___TargetInfo_6; }
	inline void set_TargetInfo_6(ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * value)
	{
		___TargetInfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetInfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentStatus_8() { return static_cast<int32_t>(offsetof(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C, ___CurrentStatus_8)); }
	inline int32_t get_CurrentStatus_8() const { return ___CurrentStatus_8; }
	inline int32_t* get_address_of_CurrentStatus_8() { return &___CurrentStatus_8; }
	inline void set_CurrentStatus_8(int32_t value)
	{
		___CurrentStatus_8 = value;
	}

	inline static int32_t get_offset_of_ImagePos_9() { return static_cast<int32_t>(offsetof(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C, ___ImagePos_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_ImagePos_9() const { return ___ImagePos_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_ImagePos_9() { return &___ImagePos_9; }
	inline void set_ImagePos_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___ImagePos_9 = value;
	}

	inline static int32_t get_offset_of_ImageRot_10() { return static_cast<int32_t>(offsetof(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C, ___ImageRot_10)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_ImageRot_10() const { return ___ImageRot_10; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_ImageRot_10() { return &___ImageRot_10; }
	inline void set_ImageRot_10(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___ImageRot_10 = value;
	}
};

struct ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C_StaticFields
{
public:
	// ImageTrackingSystem/TrackingStatusChanged ImageTrackingSystem::OnImageTrackingStatusChanged
	TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * ___OnImageTrackingStatusChanged_7;

public:
	inline static int32_t get_offset_of_OnImageTrackingStatusChanged_7() { return static_cast<int32_t>(offsetof(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C_StaticFields, ___OnImageTrackingStatusChanged_7)); }
	inline TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * get_OnImageTrackingStatusChanged_7() const { return ___OnImageTrackingStatusChanged_7; }
	inline TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E ** get_address_of_OnImageTrackingStatusChanged_7() { return &___OnImageTrackingStatusChanged_7; }
	inline void set_OnImageTrackingStatusChanged_7(TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * value)
	{
		___OnImageTrackingStatusChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnImageTrackingStatusChanged_7), (void*)value);
	}
};


// UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior
struct MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior/PrivilegeState UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::_state
	int32_t ____state_4;
	// System.Action`1<UnityEngine.XR.MagicLeap.MLResult> UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::OnPrivilegesDone
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * ___OnPrivilegesDone_5;
	// UnityEngine.XR.MagicLeap.MLPrivileges/RuntimeRequestId[] UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::_privileges
	RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* ____privileges_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/Id> UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::_privilegesToRequest
	List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 * ____privilegesToRequest_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/Id> UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::_privilegesGranted
	List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 * ____privilegesGranted_8;

public:
	inline static int32_t get_offset_of__state_4() { return static_cast<int32_t>(offsetof(MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D, ____state_4)); }
	inline int32_t get__state_4() const { return ____state_4; }
	inline int32_t* get_address_of__state_4() { return &____state_4; }
	inline void set__state_4(int32_t value)
	{
		____state_4 = value;
	}

	inline static int32_t get_offset_of_OnPrivilegesDone_5() { return static_cast<int32_t>(offsetof(MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D, ___OnPrivilegesDone_5)); }
	inline Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * get_OnPrivilegesDone_5() const { return ___OnPrivilegesDone_5; }
	inline Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 ** get_address_of_OnPrivilegesDone_5() { return &___OnPrivilegesDone_5; }
	inline void set_OnPrivilegesDone_5(Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * value)
	{
		___OnPrivilegesDone_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPrivilegesDone_5), (void*)value);
	}

	inline static int32_t get_offset_of__privileges_6() { return static_cast<int32_t>(offsetof(MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D, ____privileges_6)); }
	inline RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* get__privileges_6() const { return ____privileges_6; }
	inline RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6** get_address_of__privileges_6() { return &____privileges_6; }
	inline void set__privileges_6(RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* value)
	{
		____privileges_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____privileges_6), (void*)value);
	}

	inline static int32_t get_offset_of__privilegesToRequest_7() { return static_cast<int32_t>(offsetof(MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D, ____privilegesToRequest_7)); }
	inline List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 * get__privilegesToRequest_7() const { return ____privilegesToRequest_7; }
	inline List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 ** get_address_of__privilegesToRequest_7() { return &____privilegesToRequest_7; }
	inline void set__privilegesToRequest_7(List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 * value)
	{
		____privilegesToRequest_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____privilegesToRequest_7), (void*)value);
	}

	inline static int32_t get_offset_of__privilegesGranted_8() { return static_cast<int32_t>(offsetof(MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D, ____privilegesGranted_8)); }
	inline List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 * get__privilegesGranted_8() const { return ____privilegesGranted_8; }
	inline List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 ** get_address_of__privilegesGranted_8() { return &____privilegesGranted_8; }
	inline void set__privilegesGranted_8(List_1_t31B652CD86969C8258EDD2FCF0D3AA622E562F97 * value)
	{
		____privilegesGranted_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____privilegesGranted_8), (void*)value);
	}
};


// Raycast
struct Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Raycast::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_4;
	// UnityEngine.Transform Raycast::controllerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___controllerTransform_5;
	// System.Boolean Raycast::prefabCreated
	bool ___prefabCreated_6;
	// System.Boolean Raycast::triggerPulled
	bool ___triggerPulled_7;
	// UnityEngine.GameObject Raycast::cubeObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeObject_8;
	// UnityEngine.XR.MagicLeap.MLInput/Controller Raycast::controller
	Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * ___controller_9;

public:
	inline static int32_t get_offset_of_prefab_4() { return static_cast<int32_t>(offsetof(Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E, ___prefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_4() const { return ___prefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_4() { return &___prefab_4; }
	inline void set_prefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_controllerTransform_5() { return static_cast<int32_t>(offsetof(Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E, ___controllerTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_controllerTransform_5() const { return ___controllerTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_controllerTransform_5() { return &___controllerTransform_5; }
	inline void set_controllerTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___controllerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_prefabCreated_6() { return static_cast<int32_t>(offsetof(Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E, ___prefabCreated_6)); }
	inline bool get_prefabCreated_6() const { return ___prefabCreated_6; }
	inline bool* get_address_of_prefabCreated_6() { return &___prefabCreated_6; }
	inline void set_prefabCreated_6(bool value)
	{
		___prefabCreated_6 = value;
	}

	inline static int32_t get_offset_of_triggerPulled_7() { return static_cast<int32_t>(offsetof(Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E, ___triggerPulled_7)); }
	inline bool get_triggerPulled_7() const { return ___triggerPulled_7; }
	inline bool* get_address_of_triggerPulled_7() { return &___triggerPulled_7; }
	inline void set_triggerPulled_7(bool value)
	{
		___triggerPulled_7 = value;
	}

	inline static int32_t get_offset_of_cubeObject_8() { return static_cast<int32_t>(offsetof(Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E, ___cubeObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeObject_8() const { return ___cubeObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeObject_8() { return &___cubeObject_8; }
	inline void set_cubeObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_controller_9() { return static_cast<int32_t>(offsetof(Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E, ___controller_9)); }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * get_controller_9() const { return ___controller_9; }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 ** get_address_of_controller_9() { return &___controller_9; }
	inline void set_controller_9(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * value)
	{
		___controller_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_9), (void*)value);
	}
};


// RotateAround
struct RotateAround_tA1C15A1BEC7DDA09D6BC38787E0075C7991B1BE4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject RotateAround::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_4;
	// System.Single RotateAround::degreesPerSecond
	float ___degreesPerSecond_5;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(RotateAround_tA1C15A1BEC7DDA09D6BC38787E0075C7991B1BE4, ___target_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_4() const { return ___target_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_degreesPerSecond_5() { return static_cast<int32_t>(offsetof(RotateAround_tA1C15A1BEC7DDA09D6BC38787E0075C7991B1BE4, ___degreesPerSecond_5)); }
	inline float get_degreesPerSecond_5() const { return ___degreesPerSecond_5; }
	inline float* get_address_of_degreesPerSecond_5() { return &___degreesPerSecond_5; }
	inline void set_degreesPerSecond_5(float value)
	{
		___degreesPerSecond_5 = value;
	}
};


// TouchpadGestures
struct TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text TouchpadGestures::typeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___typeText_4;
	// UnityEngine.UI.Text TouchpadGestures::stateText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___stateText_5;
	// UnityEngine.UI.Text TouchpadGestures::directionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___directionText_6;
	// UnityEngine.Camera TouchpadGestures::Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___Camera_7;
	// UnityEngine.XR.MagicLeap.MLInput/Controller TouchpadGestures::_controller
	Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * ____controller_8;

public:
	inline static int32_t get_offset_of_typeText_4() { return static_cast<int32_t>(offsetof(TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E, ___typeText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_typeText_4() const { return ___typeText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_typeText_4() { return &___typeText_4; }
	inline void set_typeText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___typeText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeText_4), (void*)value);
	}

	inline static int32_t get_offset_of_stateText_5() { return static_cast<int32_t>(offsetof(TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E, ___stateText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_stateText_5() const { return ___stateText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_stateText_5() { return &___stateText_5; }
	inline void set_stateText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___stateText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateText_5), (void*)value);
	}

	inline static int32_t get_offset_of_directionText_6() { return static_cast<int32_t>(offsetof(TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E, ___directionText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_directionText_6() const { return ___directionText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_directionText_6() { return &___directionText_6; }
	inline void set_directionText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___directionText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directionText_6), (void*)value);
	}

	inline static int32_t get_offset_of_Camera_7() { return static_cast<int32_t>(offsetof(TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E, ___Camera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_Camera_7() const { return ___Camera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_Camera_7() { return &___Camera_7; }
	inline void set_Camera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___Camera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Camera_7), (void*)value);
	}

	inline static int32_t get_offset_of__controller_8() { return static_cast<int32_t>(offsetof(TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E, ____controller_8)); }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * get__controller_8() const { return ____controller_8; }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 ** get_address_of__controller_8() { return &____controller_8; }
	inline void set__controller_8(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * value)
	{
		____controller_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____controller_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.MagicLeap.MLInput/Controller UIManager::controller
	Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * ___controller_4;
	// UnityEngine.GameObject UIManager::HeadlockedCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HeadlockedCanvas_5;
	// UnityEngine.GameObject UIManager::controllerInput
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controllerInput_6;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___controller_4)); }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * get_controller_4() const { return ___controller_4; }
	inline Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_HeadlockedCanvas_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___HeadlockedCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HeadlockedCanvas_5() const { return ___HeadlockedCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HeadlockedCanvas_5() { return &___HeadlockedCanvas_5; }
	inline void set_HeadlockedCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HeadlockedCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeadlockedCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_controllerInput_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___controllerInput_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_controllerInput_6() const { return ___controllerInput_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_controllerInput_6() { return &___controllerInput_6; }
	inline void set_controllerInput_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___controllerInput_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerInput_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.MagicLeap.MLPrivileges/RuntimeRequestId[]
struct RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MagicLeap.MLResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_gshared (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1<System.Object>::get_IsStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MLAutoAPISingleton_1_get_IsStarted_mADBCDEB59E81A23FDC623E2EF206D6F8246133FD_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Void AuraControl::UpdateAura()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraControl_UpdateAura_m47A5CEFB448F39951AA27EC0534AAEDE9E4E5B59 (AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerButtonDelegate__ctor_m4CDDB179BBB160A67690DBEF7BFB83AC952B064B (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLInput::add_OnControllerButtonDown(UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLInput_add_OnControllerButtonDown_mB87B41FFFF4A373B5F999F8B8558444E6E2D6826 (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLInput::add_OnControllerButtonUp(UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLInput_add_OnControllerButtonUp_m31F887427AF05E8B6BF5644B8163CB0F7F1855DA (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLInput/Controller UnityEngine.XR.MagicLeap.MLInput::GetController(UnityEngine.XR.MagicLeap.MLInput/Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * MLInput_GetController_m829880F3652714900FB076D6D035B74FDCD8A015 (int32_t ___hand0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLInput::remove_OnControllerButtonDown(UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLInput_remove_OnControllerButtonDown_m6967C9201A85D88B061E7D70262613D16675A92F (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLInput::remove_OnControllerButtonUp(UnityEngine.XR.MagicLeap.MLInput/ControllerButtonDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLInput_remove_OnControllerButtonUp_m6280F912FB1D9D5774E26D448D3D7F563CC7ED2C (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, const RuntimeMethod* method);
// System.Void ButtonScript::CheckTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_CheckTrigger_mA5B6A083525B57C01B050EE4AC6EA273609CADEE (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single UnityEngine.XR.MagicLeap.MLInput/Controller::get_TriggerValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Controller_get_TriggerValue_m73F1D2D81FFD27D1C78ECAB9893C2D2A040BD3BC_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLInput/Controller::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Controller_get_Position_mC385D15F55BCC583641C6BB01E51E38BDB651353_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.MagicLeap.MLInput/Controller::get_Orientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Controller_get_Orientation_m0FAE1D4ADC458B66537B3F08C33345B01489862B_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m1E3A92D5F7F0003A8ED720CD5755B0FEB12BD8DB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ImageTrackingSystem::UpdateImageTrackingStatus(ImageTrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, int32_t ___status0, const RuntimeMethod* method);
// System.Void ImageTrackingSystem::StopImageTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_StopImageTracking_mD5DD256A59F14B65B8788AF953D1A8834FD6E7BC (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, bool ___pause0, const RuntimeMethod* method);
// System.Void ImageTrackingSystem::StartImageTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_StartImageTracking_mDDD889D080330F30ABD869661629D9C351406585 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method);
// System.Void ImageTrackingSystem::ActivatePrivileges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_ActivatePrivileges_m05CD42B1F4DF3897FE8C9CFBDF57D863F2B829B4 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior>()
inline MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior>()
inline MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * GameObject_AddComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_m9DD5718496576085E0F81A43520F7D639BA07DBF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::set_Privileges(UnityEngine.XR.MagicLeap.MLPrivileges/RuntimeRequestId[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MLPrivilegeRequesterBehavior_set_Privileges_mC0996C9111E5292B28A0F9D11DD2C7806B2E5681_inline (MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * __this, RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MagicLeap.MLResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::add_OnPrivilegesDone(System.Action`1<UnityEngine.XR.MagicLeap.MLResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLPrivilegeRequesterBehavior_add_OnPrivilegesDone_m8AEB359385EA4ACD5FD3B82F43CFBBA7B0DBF3BD (MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * __this, Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPrivilegeRequesterBehavior::remove_OnPrivilegesDone(System.Action`1<UnityEngine.XR.MagicLeap.MLResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLPrivilegeRequesterBehavior_remove_OnPrivilegesDone_m87EC19E9261045EAFEEBB1F453E60E77D000D7CB (MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * __this, Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLResult::get_IsOk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MLResult_get_IsOk_m36FFD3C2CCE4D6131ACB42254AAF6F93A8895001 (MLResult_t16167FAD492D3A6F53116897898D23453C72B635 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ImageTrackingSystem/TrackingStatusChanged::Invoke(ImageTrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingStatusChanged_Invoke_m0145B1E464FD77148B1172AAC5B86AD1E70BEC84 (TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * __this, int32_t ___status0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLAutoAPISingleton`1<UnityEngine.XR.MagicLeap.MLImageTracker>::get_IsStarted()
inline bool MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))MLAutoAPISingleton_1_get_IsStarted_mADBCDEB59E81A23FDC623E2EF206D6F8246133FD_gshared_inline)(method);
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLImageTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLImageTracker_Start_mF797B19579B951A7901AF00AD12BA5939DCA0B89 (const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLImageTracker::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLImageTracker_Enable_mD7BAC058B2FABBFCDCB5317B41E55E82776749F9 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLImageTracker/Target/OnImageResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageResultDelegate__ctor_mF8979BFF8C72BAF86E2AF0045ADE2C75543A17C4 (OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLImageTracker/Target UnityEngine.XR.MagicLeap.MLImageTracker::AddTarget(System.String,UnityEngine.Texture2D,System.Single,UnityEngine.XR.MagicLeap.MLImageTracker/Target/OnImageResultDelegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2 * MLImageTracker_AddTarget_mBA6C19FF8A0D59AD66593FDA8E59BA995281AA3C (String_t* ___name0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image1, float ___longerDimension2, OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA * ___callback3, bool ___isStationary4, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLImageTracker::RemoveTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MLImageTracker_RemoveTarget_m57CBBDDD9AD207C5EF53833FA043BCA687DC4E9D (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLImageTracker::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLImageTracker_Disable_mF440CD6298E897A2F94B6C4BD1C1DA45B0BABEE5 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLImageTracker::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLImageTracker_Stop_mB4610449534D8F8007BBFA097C6AB6C10F10439F (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D (const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryParams__ctor_mBAF1FA40535139375D4F388CB36F6F9D62347A34 (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Position_mB6267C4643664ABF6D7C26978F068829D5B8FDAF_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::set_Direction(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Direction_m06B26C7F9071649431684383121013D644D6A94E_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::set_UpVector(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_UpVector_mEF27765067B3C264A920D584FC095C1E54A40D69_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::set_Width(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Width_mDE89BA844FC9AABF02B4DC6CD1DAA49F98BECAA6_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLRaycast/QueryParams::set_Height(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Height_m3FA3EA51808BD0D0CF3DB7E3675770D9486C96B0_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLRaycast/OnRaycastResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRaycastResultDelegate__ctor_m8C71E9A8B22C6099DF09D488B38ABC43540DF64A (OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLRaycast::Raycast(UnityEngine.XR.MagicLeap.MLRaycast/QueryParams,UnityEngine.XR.MagicLeap.MLRaycast/OnRaycastResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLRaycast_Raycast_mF51F31A05F87D7BA09097D0ECB7BED4B323C0F53 (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * ___query0, OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35 * ___callback1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_m148C402FBE59E64FEEC9029185706B2A0DD39A03 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Raycast::NormalMarker(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast_NormalMarker_mE133FF45D65CDBE6D713AD93A1A6E85C6A0A2888 (Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLInput_Start_mE267A0FE208EB11E5030BAD931FC7F4BE53A8576 (const RuntimeMethod* method);
// System.Void TouchpadGestures::updateTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadGestures_updateTransform_mB126E950D7AFCE7FB2C077C426FC1C4C46A54D30 (TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E * __this, const RuntimeMethod* method);
// System.Void TouchpadGestures::updateGestureText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadGestures_updateGestureText_m30BB92430AA3E5EBBD7D974C124F9591F136353C (TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture UnityEngine.XR.MagicLeap.MLInput/Controller::get_CurrentTouchpadGesture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * Controller_get_CurrentTouchpadGesture_m3C194A9DEA3BC2D9E83DEDCDAB406C79782DFBFD_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureType UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TouchpadGesture_get_Type_mEB84C0B0BD4FD215BB7F338BEE502CAA14CFDF05_inline (TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/State UnityEngine.XR.MagicLeap.MLInput/Controller::get_TouchpadGestureState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Controller_get_TouchpadGestureState_m6088698734A7633451A1B082194D9EA0642A6CC5_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture/GestureDirection UnityEngine.XR.MagicLeap.MLInput/Controller/TouchpadGesture::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TouchpadGesture_get_Direction_m57F7A4518EFEE4246A99E6226E28862BF44C9976_inline (TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SlerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SlerpUnclamped_mFB883AD89894A0A5DEB45C5A3C1E5A95741B06D9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_mC34E8010B8BA97C05C913588237CF92AEB3419B5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UIManager::StartApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_StartApp_m316E375D462E4A4F3A47577AE7B0E773DF886082 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::QuitApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_QuitApp_m162ACD10403F6D6D896D25ACAB9C17C58CB476EB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLInput::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLInput_Stop_mDC2308707330357458768F072991A6A231DE3AE8 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AuraControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraControl_Start_mEB1385524B27B76E6C8E5A7B6094300B818A474D (AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuraControl_Start_mEB1385524B27B76E6C8E5A7B6094300B818A474D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(AuraControl_Start_mEB1385524B27B76E6C8E5A7B6094300B818A474D_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void AuraControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraControl_Update_m600186B4B2FA5F1D0A5ECDDFAB2F3EEC13B701E1 (AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuraControl_Update_m600186B4B2FA5F1D0A5ECDDFAB2F3EEC13B701E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(AuraControl_Update_m600186B4B2FA5F1D0A5ECDDFAB2F3EEC13B701E1_RuntimeMethod_var);
	{
		// if (_editMode)
		bool L_0 = __this->get__editMode_17();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateAura();
		AuraControl_UpdateAura_m47A5CEFB448F39951AA27EC0534AAEDE9E4E5B59(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AuraControl::UpdateAura()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraControl_UpdateAura_m47A5CEFB448F39951AA27EC0534AAEDE9E4E5B59 (AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuraControl_UpdateAura_m47A5CEFB448F39951AA27EC0534AAEDE9E4E5B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3978B2F75ADEC6054DDE26F0E915AF7420AC52F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E8FA02D61B4B1CBE4070CD644D7226033DCF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59861356BAB5171272E157858059C1801D7D5E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80DB88D639AD1765F84D506A66B17327F0312EB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5696D802E93F47F31F1E298FB7F74857D3CC019);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C1261706B1A411E4520C3FD3E2027423F0242F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFDB4B83E8F624B1E36286AB9AD4DBA5CB4D16B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1F3ECDDEA99FCCA18D42A7229AC41DCF9DA7EB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4F75CC3F859FC460877E815F0AB4E93AE81CBF3);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(AuraControl_UpdateAura_m47A5CEFB448F39951AA27EC0534AAEDE9E4E5B59_RuntimeMethod_var);
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Material auras in _auraMat)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get__auraMat_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_00e0;
	}

IL_000e:
	{
		// foreach (Material auras in _auraMat)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// auras.SetColor("_Color2", _AuraColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = L_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get__AuraColor_5();
		NullCheck(L_5);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_5, _stringLiteral59861356BAB5171272E157858059C1801D7D5E5D, L_6, /*hidden argument*/NULL);
		// auras.SetColor("_ColorR", _RimColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = L_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = __this->get__RimColor_6();
		NullCheck(L_7);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_7, _stringLiteral42E8FA02D61B4B1CBE4070CD644D7226033DCF90, L_8, /*hidden argument*/NULL);
		// auras.SetFloat("_Outline", _auraWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = L_7;
		float L_10 = __this->get__auraWidth_8();
		NullCheck(L_9);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_9, _stringLiteral80DB88D639AD1765F84D506A66B17327F0312EB7, L_10, /*hidden argument*/NULL);
		// auras.SetFloat("_OutlineZ", _AuraZ);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = L_9;
		float L_12 = __this->get__AuraZ_9();
		NullCheck(L_11);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_11, _stringLiteral3978B2F75ADEC6054DDE26F0E915AF7420AC52F7, L_12, /*hidden argument*/NULL);
		// auras.SetFloat("_Scale", _noiseScale);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = L_11;
		float L_14 = __this->get__noiseScale_10();
		NullCheck(L_13);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_13, _stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B, L_14, /*hidden argument*/NULL);
		// auras.SetFloat("_SpeedX", _speedX);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = L_13;
		float L_16 = __this->get__speedX_11();
		NullCheck(L_15);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_15, _stringLiteralC1F3ECDDEA99FCCA18D42A7229AC41DCF9DA7EB4, L_16, /*hidden argument*/NULL);
		// auras.SetFloat("_SpeedY", _speedY);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = L_15;
		float L_18 = __this->get__speedY_12();
		NullCheck(L_17);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_17, _stringLiteralB9C1261706B1A411E4520C3FD3E2027423F0242F, L_18, /*hidden argument*/NULL);
		// auras.SetTexture("_NoiseTex", _noiseTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = L_17;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = __this->get__noiseTexture_7();
		NullCheck(L_19);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_19, _stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156, L_20, /*hidden argument*/NULL);
		// auras.SetFloat("_Opacity", _noiseOpacity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = L_19;
		float L_22 = __this->get__noiseOpacity_13();
		NullCheck(L_21);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_21, _stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C, L_22, /*hidden argument*/NULL);
		// auras.SetFloat("_Brightness", _brightness);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23 = L_21;
		float L_24 = __this->get__brightness_14();
		NullCheck(L_23);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_23, _stringLiteralB5696D802E93F47F31F1E298FB7F74857D3CC019, L_24, /*hidden argument*/NULL);
		// auras.SetFloat("_Edge", _rimEdge);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = L_23;
		float L_26 = __this->get__rimEdge_15();
		NullCheck(L_25);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_25, _stringLiteralBFDB4B83E8F624B1E36286AB9AD4DBA5CB4D16B5, L_26, /*hidden argument*/NULL);
		// auras.SetFloat("_RimPower", _rimPower);
		float L_27 = __this->get__rimPower_16();
		NullCheck(L_25);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_25, _stringLiteralC4F75CC3F859FC460877E815F0AB4E93AE81CBF3, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00e0:
	{
		// foreach (Material auras in _auraMat)
		int32_t L_29 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AuraControl::RevertAura()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraControl_RevertAura_mDEB6883F1E5EBE63EA5A4CB93CBCEAED98E28D68 (AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuraControl_RevertAura_mDEB6883F1E5EBE63EA5A4CB93CBCEAED98E28D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80DB88D639AD1765F84D506A66B17327F0312EB7);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(AuraControl_RevertAura_mDEB6883F1E5EBE63EA5A4CB93CBCEAED98E28D68_RuntimeMethod_var);
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Material auras in _auraMat)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get__auraMat_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		// foreach (Material auras in _auraMat)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// auras.SetFloat("_Outline", 0f);
		NullCheck(L_4);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_4, _stringLiteral80DB88D639AD1765F84D506A66B17327F0312EB7, (0.0f), /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		// foreach (Material auras in _auraMat)
		int32_t L_6 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AuraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraControl__ctor_m3C3A1909A039A66C55F69B48CD155CBF3DD42908 (AuraControl_tE5CC119587856D9332CA4A1913A3BAC1E8722F80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuraControl__ctor_m3C3A1909A039A66C55F69B48CD155CBF3DD42908_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(AuraControl__ctor_m3C3A1909A039A66C55F69B48CD155CBF3DD42908_RuntimeMethod_var);
	{
		// public Color _AuraColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5(/*hidden argument*/NULL);
		__this->set__AuraColor_5(L_0);
		// public Color _RimColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5(/*hidden argument*/NULL);
		__this->set__RimColor_6(L_1);
		// public float _auraWidth = 0.3f;
		__this->set__auraWidth_8((0.300000012f));
		// public float _AuraZ = -0.05f;
		__this->set__AuraZ_9((-0.0500000007f));
		// public float _noiseScale = 0.01f;
		__this->set__noiseScale_10((0.00999999978f));
		// public float _speedX = 3f;
		__this->set__speedX_11((3.0f));
		// public float _speedY = 3f;
		__this->set__speedY_12((3.0f));
		// public float _noiseOpacity = 10f;
		__this->set__noiseOpacity_13((10.0f));
		// public float _brightness = 2f;
		__this->set__brightness_14((2.0f));
		// public float _rimEdge = 0.1f;
		__this->set__rimEdge_15((0.100000001f));
		// public float _rimPower = 1f;
		__this->set__rimPower_16((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Start_m667412D1B935EA027E49D2C8A4E3EA28C236D54C (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_Start_m667412D1B935EA027E49D2C8A4E3EA28C236D54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A7EF6B3C83051E5B8C5059D372AA748375555F0);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ButtonScript_Start_m667412D1B935EA027E49D2C8A4E3EA28C236D54C_RuntimeMethod_var);
	{
		// _cube = GameObject.Find("Pig");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m59E8F1E50866B94ABDD65B229D8B1B3A58FA7879(_stringLiteral1A7EF6B3C83051E5B8C5059D372AA748375555F0, /*hidden argument*/NULL);
		__this->set__cube_4(L_0);
		// _originalOrientation = _cube.transform.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get__cube_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		__this->set__originalOrientation_5(L_3);
		// MLInput.OnControllerButtonDown += OnButtonDown;
		ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * L_4 = (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 *)il2cpp_codegen_object_new(ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28_il2cpp_TypeInfo_var);
		ControllerButtonDelegate__ctor_m4CDDB179BBB160A67690DBEF7BFB83AC952B064B(L_4, __this, (intptr_t)((intptr_t)ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35_RuntimeMethod_var), /*hidden argument*/NULL);
		MLInput_add_OnControllerButtonDown_mB87B41FFFF4A373B5F999F8B8558444E6E2D6826(L_4, /*hidden argument*/NULL);
		// MLInput.OnControllerButtonUp += OnButtonUp;
		ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * L_5 = (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 *)il2cpp_codegen_object_new(ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28_il2cpp_TypeInfo_var);
		ControllerButtonDelegate__ctor_m4CDDB179BBB160A67690DBEF7BFB83AC952B064B(L_5, __this, (intptr_t)((intptr_t)ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E_RuntimeMethod_var), /*hidden argument*/NULL);
		MLInput_add_OnControllerButtonUp_m31F887427AF05E8B6BF5644B8163CB0F7F1855DA(L_5, /*hidden argument*/NULL);
		// _controller = MLInput.GetController(MLInput.Hand.Left);
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_6;
		L_6 = MLInput_GetController_m829880F3652714900FB076D6D035B74FDCD8A015(0, /*hidden argument*/NULL);
		__this->set__controller_8(L_6);
		// }
		return;
	}
}
// System.Void ButtonScript::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_OnDestroy_m2F388DAB58E789D97E27A16E3817292953D400F4 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_OnDestroy_m2F388DAB58E789D97E27A16E3817292953D400F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ButtonScript_OnDestroy_m2F388DAB58E789D97E27A16E3817292953D400F4_RuntimeMethod_var);
	{
		// MLInput.OnControllerButtonDown -= OnButtonDown;
		ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * L_0 = (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 *)il2cpp_codegen_object_new(ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28_il2cpp_TypeInfo_var);
		ControllerButtonDelegate__ctor_m4CDDB179BBB160A67690DBEF7BFB83AC952B064B(L_0, __this, (intptr_t)((intptr_t)ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35_RuntimeMethod_var), /*hidden argument*/NULL);
		MLInput_remove_OnControllerButtonDown_m6967C9201A85D88B061E7D70262613D16675A92F(L_0, /*hidden argument*/NULL);
		// MLInput.OnControllerButtonUp -= OnButtonUp;
		ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 * L_1 = (ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28 *)il2cpp_codegen_object_new(ControllerButtonDelegate_tACB2AE1B495E3E96808BB4142C091CA32C97CA28_il2cpp_TypeInfo_var);
		ControllerButtonDelegate__ctor_m4CDDB179BBB160A67690DBEF7BFB83AC952B064B(L_1, __this, (intptr_t)((intptr_t)ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E_RuntimeMethod_var), /*hidden argument*/NULL);
		MLInput_remove_OnControllerButtonUp_m6280F912FB1D9D5774E26D448D3D7F563CC7ED2C(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Update_m97527E784DB58C2B6A49C08FFE8F8E728643417B (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_Update_m97527E784DB58C2B6A49C08FFE8F8E728643417B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ButtonScript_Update_m97527E784DB58C2B6A49C08FFE8F8E728643417B_RuntimeMethod_var);
	{
		// _cube.transform.Rotate(_rotation, _rotationSpeed * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__cube_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get__rotation_6();
		float L_3;
		L_3 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC(L_1, L_2, ((float)il2cpp_codegen_multiply((float)(30.0f), (float)L_3)), /*hidden argument*/NULL);
		// CheckTrigger();
		ButtonScript_CheckTrigger_mA5B6A083525B57C01B050EE4AC6EA273609CADEE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::OnButtonDown(System.Byte,UnityEngine.XR.MagicLeap.MLInput/Controller/Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, uint8_t ___controllerId0, uint32_t ___button1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ButtonScript_OnButtonDown_mBC5DFEEC1F072F6FEFD8D085A38B5F4A6C634C35_RuntimeMethod_var);
	{
		// if (button == MLInput.Controller.Button.Bumper) {
		uint32_t L_0 = ___button1;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}
	{
		// _rotation.y = 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of__rotation_6();
		L_1->set_y_3((90.0f));
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ButtonScript::OnButtonUp(System.Byte,UnityEngine.XR.MagicLeap.MLInput/Controller/Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, uint8_t ___controllerId0, uint32_t ___button1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ButtonScript_OnButtonUp_m84FDB4C125E67A3218B2F5B1447A1C1798B9B06E_RuntimeMethod_var);
	{
		// if (button == MLInput.Controller.Button.Bumper)
		uint32_t L_0 = ___button1;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0024;
		}
	}
	{
		// _cube.transform.rotation = _originalOrientation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get__cube_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = __this->get__originalOrientation_5();
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_3, /*hidden argument*/NULL);
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void ButtonScript::CheckTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_CheckTrigger_mA5B6A083525B57C01B050EE4AC6EA273609CADEE (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript_CheckTrigger_mA5B6A083525B57C01B050EE4AC6EA273609CADEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ButtonScript_CheckTrigger_mA5B6A083525B57C01B050EE4AC6EA273609CADEE_RuntimeMethod_var);
	{
		// if (_controller.TriggerValue > 0.2f) {
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_0 = __this->get__controller_8();
		NullCheck(L_0);
		float L_1;
		L_1 = Controller_get_TriggerValue_m73F1D2D81FFD27D1C78ECAB9893C2D2A040BD3BC_inline(L_0, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.200000003f)))))
		{
			goto IL_0023;
		}
	}
	{
		// _rotation.x = 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of__rotation_6();
		L_2->set_x_2((90.0f));
		// } else {
		return;
	}

IL_0023:
	{
		// _rotation.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of__rotation_6();
		L_3->set_x_2((0.0f));
		// }
		return;
	}
}
// System.Void ButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript__ctor_mF4A9BCC4E47661F057F9B2A7770B635E63C8EC6B (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonScript__ctor_mF4A9BCC4E47661F057F9B2A7770B635E63C8EC6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ButtonScript__ctor_mF4A9BCC4E47661F057F9B2A7770B635E63C8EC6B_RuntimeMethod_var);
	{
		// private Vector3 _rotation = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set__rotation_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DynamicBeam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicBeam_Start_m8334BB872FC8CD200A6E09DA20E4562B6FB9CF4B (DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicBeam_Start_m8334BB872FC8CD200A6E09DA20E4562B6FB9CF4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(DynamicBeam_Start_m8334BB872FC8CD200A6E09DA20E4562B6FB9CF4B_RuntimeMethod_var);
	{
		// controller = MLInput.GetController(MLInput.Hand.Left);
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_0;
		L_0 = MLInput_GetController_m829880F3652714900FB076D6D035B74FDCD8A015(0, /*hidden argument*/NULL);
		__this->set_controller_4(L_0);
		// beamLine = GetComponent<LineRenderer>();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1;
		L_1 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		__this->set_beamLine_5(L_1);
		// beamLine.startColor = startColor;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_beamLine_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_startColor_6();
		NullCheck(L_2);
		LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_2, L_3, /*hidden argument*/NULL);
		// beamLine.endColor = endColor;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_4 = __this->get_beamLine_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_endColor_7();
		NullCheck(L_4);
		LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicBeam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicBeam_Update_mD0F6E3CA817A4647A4893BAB4347EDB83095FABA (DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicBeam_Update_mD0F6E3CA817A4647A4893BAB4347EDB83095FABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(DynamicBeam_Update_mD0F6E3CA817A4647A4893BAB4347EDB83095FABA_RuntimeMethod_var);
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.position = controller.Position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_1 = __this->get_controller_4();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Controller_get_Position_mC385D15F55BCC583641C6BB01E51E38BDB651353_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_2, /*hidden argument*/NULL);
		// transform.rotation = controller.Orientation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_4 = __this->get_controller_4();
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Controller_get_Orientation_m0FAE1D4ADC458B66537B3F08C33345B01489862B_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_5, /*hidden argument*/NULL);
		// if (Physics.Raycast(transform.position, transform.forward, out hit))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Physics_Raycast_m1E3A92D5F7F0003A8ED720CD5755B0FEB12BD8DB(L_7, L_9, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		// beamLine.useWorldSpace = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_11 = __this->get_beamLine_5();
		NullCheck(L_11);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_11, (bool)1, /*hidden argument*/NULL);
		// beamLine.SetPosition(0, transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_12 = __this->get_beamLine_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_12, 0, L_14, /*hidden argument*/NULL);
		// beamLine.SetPosition(1, hit.point);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_15 = __this->get_beamLine_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_15);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_15, 1, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0082:
	{
		// beamLine.useWorldSpace = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_17 = __this->get_beamLine_5();
		NullCheck(L_17);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_17, (bool)1, /*hidden argument*/NULL);
		// beamLine.SetPosition(0, transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_18 = __this->get_beamLine_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_18, 0, L_20, /*hidden argument*/NULL);
		// beamLine.SetPosition(1, transform.forward * 5);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_21 = __this->get_beamLine_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_23, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_21, 1, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicBeam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicBeam__ctor_m33EDD16EE3B56B9925262DEF7E49C17F420AEEB1 (DynamicBeam_t5DD77CBCC49E1DC7AB2F4540DBA4FBD9533C088C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicBeam__ctor_m33EDD16EE3B56B9925262DEF7E49C17F420AEEB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(DynamicBeam__ctor_m33EDD16EE3B56B9925262DEF7E49C17F420AEEB1_RuntimeMethod_var);
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageTargetInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetInfo__ctor_mEEBD0F458E8FE514529A99ED6520BCEFAAD7046F (ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTargetInfo__ctor_mEEBD0F458E8FE514529A99ED6520BCEFAAD7046F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTargetInfo__ctor_mEEBD0F458E8FE514529A99ED6520BCEFAAD7046F_RuntimeMethod_var);
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageTrackingSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_Awake_m7D886D98EAAC639A36B65ABBF96830ED1F9BC033 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_Awake_m7D886D98EAAC639A36B65ABBF96830ED1F9BC033_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_Awake_m7D886D98EAAC639A36B65ABBF96830ED1F9BC033_RuntimeMethod_var);
	{
		// UpdateImageTrackingStatus(ImageTrackingStatus.Inactive);
		ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_OnApplicationPause_mDAF6CD7D6384541E7F39DA55C65277B509FC0080 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, bool ___pauseStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_OnApplicationPause_mDAF6CD7D6384541E7F39DA55C65277B509FC0080_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_OnApplicationPause_mDAF6CD7D6384541E7F39DA55C65277B509FC0080_RuntimeMethod_var);
	{
		// if (pauseStatus == true)
		bool L_0 = ___pauseStatus0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// StopImageTracking(true);
		ImageTrackingSystem_StopImageTracking_mD5DD256A59F14B65B8788AF953D1A8834FD6E7BC(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000b:
	{
		// StartImageTracking();
		ImageTrackingSystem_StartImageTracking_mDDD889D080330F30ABD869661629D9C351406585(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_OnDestroy_m40FC691721F2D29BDA5682D4A6785038BF62B704 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_OnDestroy_m40FC691721F2D29BDA5682D4A6785038BF62B704_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_OnDestroy_m40FC691721F2D29BDA5682D4A6785038BF62B704_RuntimeMethod_var);
	{
		// StopImageTracking(false);
		ImageTrackingSystem_StopImageTracking_mD5DD256A59F14B65B8788AF953D1A8834FD6E7BC(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_Start_mFCAA98E502C51C7726A59E0EF4CE0129199BD73E (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_Start_mFCAA98E502C51C7726A59E0EF4CE0129199BD73E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_Start_mFCAA98E502C51C7726A59E0EF4CE0129199BD73E_RuntimeMethod_var);
	{
		// ActivatePrivileges();
		ImageTrackingSystem_ActivatePrivileges_m05CD42B1F4DF3897FE8C9CFBDF57D863F2B829B4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::ActivatePrivileges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_ActivatePrivileges_m05CD42B1F4DF3897FE8C9CFBDF57D863F2B829B4 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_m9DD5718496576085E0F81A43520F7D639BA07DBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_ActivatePrivileges_m05CD42B1F4DF3897FE8C9CFBDF57D863F2B829B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_HandlePrivilegesDone_m33BCEBA2C2857F2BE77398BD1583AD8AC435A77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_ActivatePrivileges_m05CD42B1F4DF3897FE8C9CFBDF57D863F2B829B4_RuntimeMethod_var);
	MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * V_0 = NULL;
	{
		// if (CurrentStatus != ImageTrackingStatus.PrivilegeDenied)
		int32_t L_0 = __this->get_CurrentStatus_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		// MLPrivilegeRequesterBehavior requesterBehavior = GetComponent<MLPrivilegeRequesterBehavior>();
		MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * L_1;
		L_1 = Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C(__this, /*hidden argument*/Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C_RuntimeMethod_var);
		V_0 = L_1;
		// if (requesterBehavior == null)
		MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// requesterBehavior = gameObject.AddComponent<MLPrivilegeRequesterBehavior>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * L_5;
		L_5 = GameObject_AddComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_m9DD5718496576085E0F81A43520F7D639BA07DBF(L_4, /*hidden argument*/GameObject_AddComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_m9DD5718496576085E0F81A43520F7D639BA07DBF_RuntimeMethod_var);
		V_0 = L_5;
		// requesterBehavior.Privileges = new MLPrivileges.RuntimeRequestId[]
		// {
		//     MLPrivileges.RuntimeRequestId.CameraCapture
		// };
		MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * L_6 = V_0;
		RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* L_7 = (RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6*)(RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6*)SZArrayNew(RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6_il2cpp_TypeInfo_var, (uint32_t)1);
		RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)26));
		NullCheck(L_6);
		MLPrivilegeRequesterBehavior_set_Privileges_mC0996C9111E5292B28A0F9D11DD2C7806B2E5681_inline(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// requesterBehavior.OnPrivilegesDone += HandlePrivilegesDone;
		MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * L_9 = V_0;
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_10 = (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 *)il2cpp_codegen_object_new(Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var);
		Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B(L_10, __this, (intptr_t)((intptr_t)ImageTrackingSystem_HandlePrivilegesDone_m33BCEBA2C2857F2BE77398BD1583AD8AC435A77B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var);
		NullCheck(L_9);
		MLPrivilegeRequesterBehavior_add_OnPrivilegesDone_m8AEB359385EA4ACD5FD3B82F43CFBBA7B0DBF3BD(L_9, L_10, /*hidden argument*/NULL);
		// requesterBehavior.enabled = true; // Component should be disabled in the editor until requested, this is discussed further below
		MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * L_11 = V_0;
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::HandlePrivilegesDone(UnityEngine.XR.MagicLeap.MLResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_HandlePrivilegesDone_m33BCEBA2C2857F2BE77398BD1583AD8AC435A77B (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, MLResult_t16167FAD492D3A6F53116897898D23453C72B635  ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_HandlePrivilegesDone_m33BCEBA2C2857F2BE77398BD1583AD8AC435A77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB10F525DE9C119435E715F1C9447063FA524E6);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_HandlePrivilegesDone_m33BCEBA2C2857F2BE77398BD1583AD8AC435A77B_RuntimeMethod_var);
	{
		// GetComponent<MLPrivilegeRequesterBehavior>().OnPrivilegesDone -= HandlePrivilegesDone;
		MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * L_0;
		L_0 = Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C(__this, /*hidden argument*/Component_GetComponent_TisMLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D_mB457708D86FAC94AAB39716205EC5CA23915435C_RuntimeMethod_var);
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_1 = (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 *)il2cpp_codegen_object_new(Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var);
		Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B(L_1, __this, (intptr_t)((intptr_t)ImageTrackingSystem_HandlePrivilegesDone_m33BCEBA2C2857F2BE77398BD1583AD8AC435A77B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var);
		NullCheck(L_0);
		MLPrivilegeRequesterBehavior_remove_OnPrivilegesDone_m87EC19E9261045EAFEEBB1F453E60E77D000D7CB(L_0, L_1, /*hidden argument*/NULL);
		// if (result.IsOk)
		bool L_2;
		L_2 = MLResult_get_IsOk_m36FFD3C2CCE4D6131ACB42254AAF6F93A8895001((MLResult_t16167FAD492D3A6F53116897898D23453C72B635 *)(&___result0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// StartImageTracking();
		ImageTrackingSystem_StartImageTracking_mDDD889D080330F30ABD869661629D9C351406585(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// Debug.LogError("Camera Privilege Denied or Not Present in Manifest");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral7FB10F525DE9C119435E715F1C9447063FA524E6, /*hidden argument*/NULL);
		// UpdateImageTrackingStatus(ImageTrackingStatus.PrivilegeDenied);
		ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::UpdateImageTrackingStatus(ImageTrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270_RuntimeMethod_var);
	TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * G_B2_0 = NULL;
	TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * G_B1_0 = NULL;
	{
		// CurrentStatus = status;
		int32_t L_0 = ___status0;
		__this->set_CurrentStatus_8(L_0);
		// OnImageTrackingStatusChanged?.Invoke(CurrentStatus);
		TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * L_1 = ((ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C_StaticFields*)il2cpp_codegen_static_fields_for(ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C_il2cpp_TypeInfo_var))->get_OnImageTrackingStatusChanged_7();
		TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		int32_t L_3 = __this->get_CurrentStatus_8();
		NullCheck(G_B2_0);
		TrackingStatusChanged_Invoke_m0145B1E464FD77148B1172AAC5B86AD1E70BEC84(G_B2_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::StartImageTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_StartImageTracking_mDDD889D080330F30ABD869661629D9C351406585 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_HandleImageTracked_m444944E0FA2A285CEE85DF39BE81482144AD5176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_StartImageTracking_mDDD889D080330F30ABD869661629D9C351406585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MLAutoAPISingleton_1_tCD5DA834F74BC38C1AA2A38111BD28BB6B5A0104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral629DB51D07686B8790D11368AB5C823903423750);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_StartImageTracking_mDDD889D080330F30ABD869661629D9C351406585_RuntimeMethod_var);
	MLResult_t16167FAD492D3A6F53116897898D23453C72B635  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (CurrentStatus != ImageTrackingStatus.PrivilegeDenied)
		int32_t L_0 = __this->get_CurrentStatus_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0096;
		}
	}
	{
		// if (!MLImageTracker.IsStarted && !MLImageTracker.Start().IsOk)
		IL2CPP_RUNTIME_CLASS_INIT(MLAutoAPISingleton_1_tCD5DA834F74BC38C1AA2A38111BD28BB6B5A0104_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_inline(/*hidden argument*/MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_2;
		L_2 = MLImageTracker_Start_mF797B19579B951A7901AF00AD12BA5939DCA0B89(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = MLResult_get_IsOk_m36FFD3C2CCE4D6131ACB42254AAF6F93A8895001((MLResult_t16167FAD492D3A6F53116897898D23453C72B635 *)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("Image Tracker Could Not Start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral629DB51D07686B8790D11368AB5C823903423750, /*hidden argument*/NULL);
		// UpdateImageTrackingStatus(ImageTrackingStatus.CameraUnavailable);
		ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270(__this, 3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0034:
	{
		// if (MLImageTracker.Enable().IsOk)
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_4;
		L_4 = MLImageTracker_Enable_mD7BAC058B2FABBFCDCB5317B41E55E82776749F9(/*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = MLResult_get_IsOk_m36FFD3C2CCE4D6131ACB42254AAF6F93A8895001((MLResult_t16167FAD492D3A6F53116897898D23453C72B635 *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0084;
		}
	}
	{
		// _imageTarget = MLImageTracker.AddTarget(TargetInfo.Name, TargetInfo.Image,
		// TargetInfo.LongerDimension, HandleImageTracked);
		ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * L_6 = __this->get_TargetInfo_6();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_Name_0();
		ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * L_8 = __this->get_TargetInfo_6();
		NullCheck(L_8);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = L_8->get_Image_1();
		ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * L_10 = __this->get_TargetInfo_6();
		NullCheck(L_10);
		float L_11 = L_10->get_LongerDimension_2();
		OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA * L_12 = (OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA *)il2cpp_codegen_object_new(OnImageResultDelegate_tAC8915F37A6E51DCF30870B669DD14E65ECFDBCA_il2cpp_TypeInfo_var);
		OnImageResultDelegate__ctor_mF8979BFF8C72BAF86E2AF0045ADE2C75543A17C4(L_12, __this, (intptr_t)((intptr_t)ImageTrackingSystem_HandleImageTracked_m444944E0FA2A285CEE85DF39BE81482144AD5176_RuntimeMethod_var), /*hidden argument*/NULL);
		Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2 * L_13;
		L_13 = MLImageTracker_AddTarget_mBA6C19FF8A0D59AD66593FDA8E59BA995281AA3C(L_7, L_9, L_11, L_12, (bool)0, /*hidden argument*/NULL);
		__this->set__imageTarget_5(L_13);
		// UpdateImageTrackingStatus(ImageTrackingStatus.ImageTrackingActive);
		ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0084:
	{
		// Debug.LogError("Image Tracker Could Not Start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral629DB51D07686B8790D11368AB5C823903423750, /*hidden argument*/NULL);
		// UpdateImageTrackingStatus(ImageTrackingStatus.CameraUnavailable);
		ImageTrackingSystem_UpdateImageTrackingStatus_m0F5DFA80F8341BD6FC9DD828A68EA4527596D270(__this, 3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::StopImageTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_StopImageTracking_mD5DD256A59F14B65B8788AF953D1A8834FD6E7BC (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_StopImageTracking_mD5DD256A59F14B65B8788AF953D1A8834FD6E7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MLAutoAPISingleton_1_tCD5DA834F74BC38C1AA2A38111BD28BB6B5A0104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_StopImageTracking_mD5DD256A59F14B65B8788AF953D1A8834FD6E7BC_RuntimeMethod_var);
	{
		// if (MLImageTracker.IsStarted)
		IL2CPP_RUNTIME_CLASS_INIT(MLAutoAPISingleton_1_tCD5DA834F74BC38C1AA2A38111BD28BB6B5A0104_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_inline(/*hidden argument*/MLAutoAPISingleton_1_get_IsStarted_mBB6FF9CBD443A311C3B35F9E84FA2E87B3BEE36A_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (pause == true) // Temporarily disable the Image Tracker
		bool L_1 = ___pause0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// MLImageTracker.RemoveTarget(TargetInfo.Name);
		ImageTargetInfo_tB9B67DCF6C2955E81662BE271DE1AE07DFE826C2 * L_2 = __this->get_TargetInfo_6();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_Name_0();
		bool L_4;
		L_4 = MLImageTracker_RemoveTarget_m57CBBDDD9AD207C5EF53833FA043BCA687DC4E9D(L_3, /*hidden argument*/NULL);
		// MLImageTracker.Disable();
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_5;
		L_5 = MLImageTracker_Disable_mF440CD6298E897A2F94B6C4BD1C1DA45B0BABEE5(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0022:
	{
		// MLImageTracker.Stop();
		MLImageTracker_Stop_mB4610449534D8F8007BBFA097C6AB6C10F10439F(/*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::HandleImageTracked(UnityEngine.XR.MagicLeap.MLImageTracker/Target,UnityEngine.XR.MagicLeap.MLImageTracker/Target/Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem_HandleImageTracked_m444944E0FA2A285CEE85DF39BE81482144AD5176 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, Target_t80374CFF36DC811F7FCD195ED98979B08AD16ED2 * ___imageTarget0, Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2  ___imageTargetResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem_HandleImageTracked_m444944E0FA2A285CEE85DF39BE81482144AD5176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem_HandleImageTracked_m444944E0FA2A285CEE85DF39BE81482144AD5176_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// switch (imageTargetResult.Status)
		Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2  L_0 = ___imageTargetResult1;
		int32_t L_1 = L_0.get_Status_2();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_3 = V_0;
		return;
	}

IL_000f:
	{
		// ImagePos = imageTargetResult.Position;
		Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2  L_4 = ___imageTargetResult1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4.get_Position_0();
		__this->set_ImagePos_9(L_5);
		// ImageRot = imageTargetResult.Rotation;
		Result_t62DDE919B95F6BFDE1DD6E480F0225B7912290A2  L_6 = ___imageTargetResult1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6.get_Rotation_1();
		__this->set_ImageRot_10(L_7);
		// if (TrackedImageFollower != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_TrackedImageFollower_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// TrackedImageFollower.transform.position = ImagePos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_TrackedImageFollower_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_ImagePos_9();
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_12, /*hidden argument*/NULL);
		// TrackedImageFollower.transform.rotation = ImageRot;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_TrackedImageFollower_4();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_ImageRot_10();
		NullCheck(L_14);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ImageTrackingSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSystem__ctor_mEAEFE6B53CA47EBBFED6180B1B04380CF029D125 (ImageTrackingSystem_tC4284FAE8C419EC1710B659D073D3CC8A7015E5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingSystem__ctor_mEAEFE6B53CA47EBBFED6180B1B04380CF029D125_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ImageTrackingSystem__ctor_mEAEFE6B53CA47EBBFED6180B1B04380CF029D125_RuntimeMethod_var);
	{
		// public Vector3 ImagePos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_ImagePos_9(L_0);
		// public Quaternion ImageRot = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		__this->set_ImageRot_10(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Raycast::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast_Start_mDF1A66F1482B724E5445E902013A9BEA83590DCF (Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Raycast_Start_mDF1A66F1482B724E5445E902013A9BEA83590DCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Raycast_Start_mDF1A66F1482B724E5445E902013A9BEA83590DCF_RuntimeMethod_var);
	{
		// controller = MLInput.GetController(MLInput.Hand.Left);
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_0;
		L_0 = MLInput_GetController_m829880F3652714900FB076D6D035B74FDCD8A015(0, /*hidden argument*/NULL);
		__this->set_controller_9(L_0);
		// }
		return;
	}
}
// System.Void Raycast::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast_Update_mC5D66806BEEF361113A0F062B1520F5F200AAA42 (Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Raycast_HandleOnReceiveRaycast_m1CA2E3B422F208E5148DA4D643A8A610C41C40EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Raycast_Update_mC5D66806BEEF361113A0F062B1520F5F200AAA42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Raycast_Update_mC5D66806BEEF361113A0F062B1520F5F200AAA42_RuntimeMethod_var);
	{
		// if ((controller.TriggerValue > 0.8f) && !triggerPulled)
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_0 = __this->get_controller_9();
		NullCheck(L_0);
		float L_1;
		L_1 = Controller_get_TriggerValue_m73F1D2D81FFD27D1C78ECAB9893C2D2A040BD3BC_inline(L_0, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.800000012f)))))
		{
			goto IL_008f;
		}
	}
	{
		bool L_2 = __this->get_triggerPulled_7();
		if (L_2)
		{
			goto IL_008f;
		}
	}
	{
		// controllerTransform.rotation = controller.Orientation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_controllerTransform_5();
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_4 = __this->get_controller_9();
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Controller_get_Orientation_m0FAE1D4ADC458B66537B3F08C33345B01489862B_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_5, /*hidden argument*/NULL);
		// MLRaycast.QueryParams _raycastParams = new MLRaycast.QueryParams
		// {
		//     // Update the parameters with our controller's transform
		//     Position = controller.Position,
		//     Direction = controllerTransform.forward,
		//     UpVector = controllerTransform.up,
		//     // Provide a size of our raycasting array (1x1)
		//     Width = 1,
		//     Height = 1
		// };
		QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * L_6 = (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 *)il2cpp_codegen_object_new(QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3_il2cpp_TypeInfo_var);
		QueryParams__ctor_mBAF1FA40535139375D4F388CB36F6F9D62347A34(L_6, /*hidden argument*/NULL);
		QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * L_7 = L_6;
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_8 = __this->get_controller_9();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Controller_get_Position_mC385D15F55BCC583641C6BB01E51E38BDB651353_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		QueryParams_set_Position_mB6267C4643664ABF6D7C26978F068829D5B8FDAF_inline(L_7, L_9, /*hidden argument*/NULL);
		QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * L_10 = L_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_controllerTransform_5();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		QueryParams_set_Direction_m06B26C7F9071649431684383121013D644D6A94E_inline(L_10, L_12, /*hidden argument*/NULL);
		QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * L_13 = L_10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_controllerTransform_5();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		QueryParams_set_UpVector_mEF27765067B3C264A920D584FC095C1E54A40D69_inline(L_13, L_15, /*hidden argument*/NULL);
		QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * L_16 = L_13;
		NullCheck(L_16);
		QueryParams_set_Width_mDE89BA844FC9AABF02B4DC6CD1DAA49F98BECAA6_inline(L_16, 1, /*hidden argument*/NULL);
		QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * L_17 = L_16;
		NullCheck(L_17);
		QueryParams_set_Height_m3FA3EA51808BD0D0CF3DB7E3675770D9486C96B0_inline(L_17, 1, /*hidden argument*/NULL);
		// MLRaycast.Raycast(_raycastParams, HandleOnReceiveRaycast);
		OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35 * L_18 = (OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35 *)il2cpp_codegen_object_new(OnRaycastResultDelegate_tBFD15D87D7F225F37EBC9310D24907091AD0BC35_il2cpp_TypeInfo_var);
		OnRaycastResultDelegate__ctor_m8C71E9A8B22C6099DF09D488B38ABC43540DF64A(L_18, __this, (intptr_t)((intptr_t)Raycast_HandleOnReceiveRaycast_m1CA2E3B422F208E5148DA4D643A8A610C41C40EA_RuntimeMethod_var), /*hidden argument*/NULL);
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_19;
		L_19 = MLRaycast_Raycast_mF51F31A05F87D7BA09097D0ECB7BED4B323C0F53(L_17, L_18, /*hidden argument*/NULL);
		// triggerPulled = true;
		__this->set_triggerPulled_7((bool)1);
	}

IL_008f:
	{
		// if((controller.TriggerValue < 0.2f))
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_20 = __this->get_controller_9();
		NullCheck(L_20);
		float L_21;
		L_21 = Controller_get_TriggerValue_m73F1D2D81FFD27D1C78ECAB9893C2D2A040BD3BC_inline(L_20, /*hidden argument*/NULL);
		if ((!(((float)L_21) < ((float)(0.200000003f)))))
		{
			goto IL_00a8;
		}
	}
	{
		// triggerPulled = false;
		__this->set_triggerPulled_7((bool)0);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void Raycast::NormalMarker(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast_NormalMarker_mE133FF45D65CDBE6D713AD93A1A6E85C6A0A2888 (Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Raycast_NormalMarker_mE133FF45D65CDBE6D713AD93A1A6E85C6A0A2888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Raycast_NormalMarker_mE133FF45D65CDBE6D713AD93A1A6E85C6A0A2888_RuntimeMethod_var);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion rotation = Quaternion.FromToRotation(Vector3.up, normal);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___normal1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_FromToRotation_m148C402FBE59E64FEEC9029185706B2A0DD39A03(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (!prefabCreated)
		bool L_3 = __this->get_prefabCreated_6();
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// cubeObject = Instantiate(prefab, point, rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_prefab_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___point0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		__this->set_cubeObject_8(L_7);
		// prefabCreated = true;
		__this->set_prefabCreated_6((bool)1);
	}

IL_002e:
	{
		// cubeObject.transform.position = point;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_cubeObject_8();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___point0;
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_10, /*hidden argument*/NULL);
		// cubeObject.transform.rotation = rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_cubeObject_8();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = V_0;
		NullCheck(L_12);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Raycast::HandleOnReceiveRaycast(UnityEngine.XR.MagicLeap.MLRaycast/ResultState,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast_HandleOnReceiveRaycast_m1CA2E3B422F208E5148DA4D643A8A610C41C40EA (Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E * __this, int32_t ___state0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, float ___confidence3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Raycast_HandleOnReceiveRaycast_m1CA2E3B422F208E5148DA4D643A8A610C41C40EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Raycast_HandleOnReceiveRaycast_m1CA2E3B422F208E5148DA4D643A8A610C41C40EA_RuntimeMethod_var);
	{
		// if (state == MLRaycast.ResultState.HitObserved)
		int32_t L_0 = ___state0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000c;
		}
	}
	{
		// NormalMarker(point, normal);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___point1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___normal2;
		Raycast_NormalMarker_mE133FF45D65CDBE6D713AD93A1A6E85C6A0A2888(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void Raycast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast__ctor_m602C8E6ADEAC35BF2B610ADCB7499639F7404FD5 (Raycast_tFD708DBDAD40436CE0FEBA17AFC5AA45751D551E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Raycast__ctor_m602C8E6ADEAC35BF2B610ADCB7499639F7404FD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Raycast__ctor_m602C8E6ADEAC35BF2B610ADCB7499639F7404FD5_RuntimeMethod_var);
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotateAround::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateAround_Update_mB59786F87DC788EC2B9394A823A7821541239DEF (RotateAround_tA1C15A1BEC7DDA09D6BC38787E0075C7991B1BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotateAround_Update_mB59786F87DC788EC2B9394A823A7821541239DEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(RotateAround_Update_mB59786F87DC788EC2B9394A823A7821541239DEF_RuntimeMethod_var);
	{
		// transform.RotateAround(target.transform.position, Vector3.up, degreesPerSecond * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_target_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A(/*hidden argument*/NULL);
		float L_5 = __this->get_degreesPerSecond_5();
		float L_6;
		L_6 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_0, L_3, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RotateAround::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateAround__ctor_m864285B5B460AC963938CDDC5EE18B1E93B443A8 (RotateAround_tA1C15A1BEC7DDA09D6BC38787E0075C7991B1BE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotateAround__ctor_m864285B5B460AC963938CDDC5EE18B1E93B443A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(RotateAround__ctor_m864285B5B460AC963938CDDC5EE18B1E93B443A8_RuntimeMethod_var);
	{
		// [SerializeField] private float degreesPerSecond = 45;
		__this->set_degreesPerSecond_5((45.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchpadGestures::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadGestures_Start_m443B27863D31CF5B10AAD91952956A29612D35B7 (TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchpadGestures_Start_m443B27863D31CF5B10AAD91952956A29612D35B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TouchpadGestures_Start_m443B27863D31CF5B10AAD91952956A29612D35B7_RuntimeMethod_var);
	{
		// MLInput.Start();
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_0;
		L_0 = MLInput_Start_mE267A0FE208EB11E5030BAD931FC7F4BE53A8576(/*hidden argument*/NULL);
		// _controller = MLInput.GetController(MLInput.Hand.Left);
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_1;
		L_1 = MLInput_GetController_m829880F3652714900FB076D6D035B74FDCD8A015(0, /*hidden argument*/NULL);
		__this->set__controller_8(L_1);
		// }
		return;
	}
}
// System.Void TouchpadGestures::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadGestures_Update_m10097FB19D1F419F6B8237BB877B1A1E3EA55140 (TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchpadGestures_Update_m10097FB19D1F419F6B8237BB877B1A1E3EA55140_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TouchpadGestures_Update_m10097FB19D1F419F6B8237BB877B1A1E3EA55140_RuntimeMethod_var);
	{
		// updateTransform();
		TouchpadGestures_updateTransform_mB126E950D7AFCE7FB2C077C426FC1C4C46A54D30(__this, /*hidden argument*/NULL);
		// updateGestureText();
		TouchpadGestures_updateGestureText_m30BB92430AA3E5EBBD7D974C124F9591F136353C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchpadGestures::updateGestureText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadGestures_updateGestureText_m30BB92430AA3E5EBBD7D974C124F9591F136353C (TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureDirection_t9D768F015649363407AD78AB9708CD10CFCE197A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureType_tFDC3ED151DA3B854DD0DBB184DBFA2DFEA0279B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_tCEB9B254CAB9868032E4A7EFACA241DB6B7F39D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchpadGestures_updateGestureText_m30BB92430AA3E5EBBD7D974C124F9591F136353C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7023C1E54E888EAF9AB2C1C70A866FBD1B410340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE28A776033DED10F52CBA40DBCE53745064C47C2);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TouchpadGestures_updateGestureText_m30BB92430AA3E5EBBD7D974C124F9591F136353C_RuntimeMethod_var);
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		// string gestureType = _controller.CurrentTouchpadGesture.Type.ToString();
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_0 = __this->get__controller_8();
		NullCheck(L_0);
		TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * L_1;
		L_1 = Controller_get_CurrentTouchpadGesture_m3C194A9DEA3BC2D9E83DEDCDAB406C79782DFBFD_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = TouchpadGesture_get_Type_mEB84C0B0BD4FD215BB7F338BEE502CAA14CFDF05_inline(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		RuntimeObject * L_3 = Box(GestureType_tFDC3ED151DA3B854DD0DBB184DBFA2DFEA0279B7_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_3 = *(uint32_t*)UnBox(L_3);
		V_0 = L_4;
		// string gestureState = _controller.TouchpadGestureState.ToString();
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_5 = __this->get__controller_8();
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = Controller_get_TouchpadGestureState_m6088698734A7633451A1B082194D9EA0642A6CC5_inline(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		RuntimeObject * L_7 = Box(State_tCEB9B254CAB9868032E4A7EFACA241DB6B7F39D9_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_4 = *(uint32_t*)UnBox(L_7);
		V_1 = L_8;
		// string gestureDirection = _controller.CurrentTouchpadGesture.Direction.ToString();
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_9 = __this->get__controller_8();
		NullCheck(L_9);
		TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * L_10;
		L_10 = Controller_get_CurrentTouchpadGesture_m3C194A9DEA3BC2D9E83DEDCDAB406C79782DFBFD_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = TouchpadGesture_get_Direction_m57F7A4518EFEE4246A99E6226E28862BF44C9976_inline(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		RuntimeObject * L_12 = Box(GestureDirection_t9D768F015649363407AD78AB9708CD10CFCE197A_il2cpp_TypeInfo_var, (&V_5));
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_5 = *(uint32_t*)UnBox(L_12);
		V_2 = L_13;
		// typeText.text = "Type: " + gestureType;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_typeText_4();
		String_t* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralE28A776033DED10F52CBA40DBCE53745064C47C2, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// stateText.text = "State: " + gestureState;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_stateText_5();
		String_t* L_18 = V_1;
		String_t* L_19;
		L_19 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		// directionText.text = "Direction: " + gestureDirection;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_directionText_6();
		String_t* L_21 = V_2;
		String_t* L_22;
		L_22 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral7023C1E54E888EAF9AB2C1C70A866FBD1B410340, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
		// }
		return;
	}
}
// System.Void TouchpadGestures::updateTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadGestures_updateTransform_mB126E950D7AFCE7FB2C077C426FC1C4C46A54D30 (TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchpadGestures_updateTransform_mB126E950D7AFCE7FB2C077C426FC1C4C46A54D30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TouchpadGestures_updateTransform_mB126E950D7AFCE7FB2C077C426FC1C4C46A54D30_RuntimeMethod_var);
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float speed = Time.deltaTime * 5.0f;
		float L_0;
		L_0 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)(5.0f)));
		// Vector3 pos = Camera.transform.position + Camera.transform.forward;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_Camera_7();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_Camera_7();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// gameObject.transform.position = Vector3.SlerpUnclamped(gameObject.transform.position, pos, speed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		float L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_SlerpUnclamped_mFB883AD89894A0A5DEB45C5A3C1E5A95741B06D9(L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_15, /*hidden argument*/NULL);
		// Quaternion rot = Quaternion.LookRotation(gameObject.transform.position - Camera.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = __this->get_Camera_7();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_18, L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_LookRotation_mC34E8010B8BA97C05C913588237CF92AEB3419B5(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		// gameObject.transform.rotation = Quaternion.Slerp(gameObject.transform.rotation, rot, speed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
		L_28 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_27, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29 = V_2;
		float L_30 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31;
		L_31 = Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541(L_28, L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_25, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchpadGestures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadGestures__ctor_m99AAC409948F714701B92254F90C8F9F24F44030 (TouchpadGestures_t574CA55B49708D24429881C72E593070FB7C334E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchpadGestures__ctor_m99AAC409948F714701B92254F90C8F9F24F44030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TouchpadGestures__ctor_m99AAC409948F714701B92254F90C8F9F24F44030_RuntimeMethod_var);
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E_RuntimeMethod_var);
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// MLInput.Start();
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_0;
		L_0 = MLInput_Start_mE267A0FE208EB11E5030BAD931FC7F4BE53A8576(/*hidden argument*/NULL);
		// controller = MLInput.GetController(MLInput.Hand.Left);
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_1;
		L_1 = MLInput_GetController_m829880F3652714900FB076D6D035B74FDCD8A015(0, /*hidden argument*/NULL);
		__this->set_controller_4(L_1);
		// Scene scene = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B(/*hidden argument*/NULL);
		V_0 = L_2;
		// Debug.Log(scene.name);
		String_t* L_3;
		L_3 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE99FE3237C273B5F7E79EA4CDE55EB90EE223312);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385_RuntimeMethod_var);
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(controller.TriggerValue > 0.5f){
		Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * L_0 = __this->get_controller_4();
		NullCheck(L_0);
		float L_1;
		L_1 = Controller_get_TriggerValue_m73F1D2D81FFD27D1C78ECAB9893C2D2A040BD3BC_inline(L_0, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.5f)))))
		{
			goto IL_0081;
		}
	}
	{
		// if(Physics.Raycast(controllerInput.transform.position,      controllerInput.transform.forward, out hit)){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_controllerInput_6();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_controllerInput_6();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Physics_Raycast_m1E3A92D5F7F0003A8ED720CD5755B0FEB12BD8DB(L_4, L_7, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		// if(hit.transform.gameObject.name == "StartButton"){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_11, _stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		// StartApp();
		UIManager_StartApp_m316E375D462E4A4F3A47577AE7B0E773DF886082(__this, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// if(hit.transform.gameObject.name == "QuitButton"){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_15, _stringLiteralE99FE3237C273B5F7E79EA4CDE55EB90EE223312, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		// QuitApp();
		UIManager_QuitApp_m162ACD10403F6D6D896D25ACAB9C17C58CB476EB(__this, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void UIManager::StartApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_StartApp_m316E375D462E4A4F3A47577AE7B0E773DF886082 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_StartApp_m316E375D462E4A4F3A47577AE7B0E773DF886082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UIManager_StartApp_m316E375D462E4A4F3A47577AE7B0E773DF886082_RuntimeMethod_var);
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HeadlockedCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HeadlockedCanvas_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("DemoScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m6993313A5BE51551C96597F20A81672422A051E4(_stringLiteral797BC20C9E73CA9A4F4A37A04BB2102DEB6E6CAC, /*hidden argument*/NULL);
		// Scene scene = SceneManager.GetActiveScene();
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1;
		L_1 = SceneManager_GetActiveScene_m3BA09EE5323C6A1910285EB37C155EC182AC773B(/*hidden argument*/NULL);
		V_0 = L_1;
		// Debug.Log(scene.name);
		String_t* L_2;
		L_2 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::QuitApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_QuitApp_m162ACD10403F6D6D896D25ACAB9C17C58CB476EB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_QuitApp_m162ACD10403F6D6D896D25ACAB9C17C58CB476EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UIManager_QuitApp_m162ACD10403F6D6D896D25ACAB9C17C58CB476EB_RuntimeMethod_var);
	{
		// HeadlockedCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_HeadlockedCanvas_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnDestroy_mB62A44EF5F87D2417F0583D2040CF6105A413EBA (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_OnDestroy_mB62A44EF5F87D2417F0583D2040CF6105A413EBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UIManager_OnDestroy_mB62A44EF5F87D2417F0583D2040CF6105A413EBA_RuntimeMethod_var);
	{
		// MLInput.Stop();
		MLInput_Stop_mDC2308707330357458768F072991A6A231DE3AE8(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B_RuntimeMethod_var);
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E (TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * __this, int32_t ___status0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___status0);

}
// System.Void ImageTrackingSystem/TrackingStatusChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingStatusChanged__ctor_m92A2799E1DF9BD96F808DD542CCBF9A65F9C1983 (TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStatusChanged__ctor_m92A2799E1DF9BD96F808DD542CCBF9A65F9C1983_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackingStatusChanged__ctor_m92A2799E1DF9BD96F808DD542CCBF9A65F9C1983_RuntimeMethod_var);
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ImageTrackingSystem/TrackingStatusChanged::Invoke(ImageTrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingStatusChanged_Invoke_m0145B1E464FD77148B1172AAC5B86AD1E70BEC84 (TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStatusChanged_Invoke_m0145B1E464FD77148B1172AAC5B86AD1E70BEC84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackingStatusChanged_Invoke_m0145B1E464FD77148B1172AAC5B86AD1E70BEC84_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult ImageTrackingSystem/TrackingStatusChanged::BeginInvoke(ImageTrackingStatus,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackingStatusChanged_BeginInvoke_m952B12A56B51C6A7D2F200ADD5C780ABDF34FFDB (TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * __this, int32_t ___status0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTrackingStatus_tD265A178E7A05347E44392F853930EAEBC9CA1A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStatusChanged_BeginInvoke_m952B12A56B51C6A7D2F200ADD5C780ABDF34FFDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackingStatusChanged_BeginInvoke_m952B12A56B51C6A7D2F200ADD5C780ABDF34FFDB_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = Box(ImageTrackingStatus_tD265A178E7A05347E44392F853930EAEBC9CA1A4_il2cpp_TypeInfo_var, &___status0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ImageTrackingSystem/TrackingStatusChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingStatusChanged_EndInvoke_m9915F26D283834D46120DC7819CC68E3ABEDD363 (TrackingStatusChanged_t46EF586109EC691BF7BC5D556B43AC6E2E6BB88E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStatusChanged_EndInvoke_m9915F26D283834D46120DC7819CC68E3ABEDD363_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackingStatusChanged_EndInvoke_m9915F26D283834D46120DC7819CC68E3ABEDD363_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Controller_get_TriggerValue_m73F1D2D81FFD27D1C78ECAB9893C2D2A040BD3BC_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method)
{
	{
		// public float TriggerValue { get; private set; }
		float L_0 = __this->get_U3CTriggerValueU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Controller_get_Position_mC385D15F55BCC583641C6BB01E51E38BDB651353_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Controller_get_Orientation_m0FAE1D4ADC458B66537B3F08C33345B01489862B_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Orientation { get; private set; }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_U3COrientationU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MLPrivilegeRequesterBehavior_set_Privileges_mC0996C9111E5292B28A0F9D11DD2C7806B2E5681_inline (MLPrivilegeRequesterBehavior_t4D5ADA3C43CB8706D0CF55F46F7D2B6EEEA8423D * __this, RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* ___value0, const RuntimeMethod* method)
{
	{
		// set { _privileges = value; }
		RuntimeRequestIdU5BU5D_t4A4EAB5A87ADD039E16F117A66591369501263F6* L_0 = ___value0;
		__this->set__privileges_6(L_0);
		// set { _privileges = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Position_mB6267C4643664ABF6D7C26978F068829D5B8FDAF_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPositionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Direction_m06B26C7F9071649431684383121013D644D6A94E_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; set; } = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CDirectionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_UpVector_mEF27765067B3C264A920D584FC095C1E54A40D69_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 UpVector { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CUpVectorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Width_mDE89BA844FC9AABF02B4DC6CD1DAA49F98BECAA6_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		// public uint Width { get; set; } = 1;
		uint32_t L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryParams_set_Height_m3FA3EA51808BD0D0CF3DB7E3675770D9486C96B0_inline (QueryParams_t01475FC8D359404DD3541EBF7E47A2DDB6D53EE3 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		// public uint Height { get; set; } = 1;
		uint32_t L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * Controller_get_CurrentTouchpadGesture_m3C194A9DEA3BC2D9E83DEDCDAB406C79782DFBFD_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method)
{
	{
		// public TouchpadGesture CurrentTouchpadGesture { get; private set; }
		TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * L_0 = __this->get_U3CCurrentTouchpadGestureU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TouchpadGesture_get_Type_mEB84C0B0BD4FD215BB7F338BEE502CAA14CFDF05_inline (TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * __this, const RuntimeMethod* method)
{
	{
		// public GestureType Type { get; private set; }
		uint32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Controller_get_TouchpadGestureState_m6088698734A7633451A1B082194D9EA0642A6CC5_inline (Controller_t094FA2A0202B05EE725DFFE9509CFD609E0C4B06 * __this, const RuntimeMethod* method)
{
	{
		// public TouchpadGesture.State TouchpadGestureState { get; private set; }
		uint32_t L_0 = __this->get_U3CTouchpadGestureStateU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TouchpadGesture_get_Direction_m57F7A4518EFEE4246A99E6226E28862BF44C9976_inline (TouchpadGesture_t6467B490197261F6541032019990F08A3C901CC9 * __this, const RuntimeMethod* method)
{
	{
		// public GestureDirection Direction { get; private set; }
		uint32_t L_0 = __this->get_U3CDirectionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MLAutoAPISingleton_1_get_IsStarted_mADBCDEB59E81A23FDC623E2EF206D6F8246133FD_gshared_inline (const RuntimeMethod* method)
{
	{
		// public static bool IsStarted { get; private set; } = false;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_0 = ((MLAutoAPISingleton_1_t43137D1B496BECBA3D60DED8C95E57D0EBF803D6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_U3CIsStartedU3Ek__BackingField_2();
		return (bool)L_0;
	}
}
