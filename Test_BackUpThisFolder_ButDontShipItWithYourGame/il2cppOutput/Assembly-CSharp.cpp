#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<BikeState>
struct Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<NativeBLE/BtleDevice>
struct Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66;
// System.Action`1<NativeBLE/ConnectedDevice>
struct Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<NativeBLE/BtleDevice>
struct List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// NativeBLE/BtleDevice[]
struct BtleDeviceU5BU5D_t8965CED5B05BE1B64072D646E5585FC22ED921AA;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AdaptToSafeArea
struct AdaptToSafeArea_t29441D7B0FDCB5081E6D8A354725FEC31E9BC8B2;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// BikeManager
struct BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D;
// BikeState
struct BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DebugText
struct DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DeviceLine
struct DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeBLE
struct NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UpdateAndroidLib
struct UpdateAndroidLib_t2148D519B61D9123ABBCF1A39B2EDFC2598FA666;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// DeviceLine/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NativeBLE/BtleDevice
struct BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99;
// NativeBLE/ConnectedDevice
struct ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____279BACEE9079B3CCBFA413FF279C708A367835A2261C01605B93E903F8C743E6_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01FEE5BFAE8002803A5DEDD5D81E2CC3E4C41E94;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0BDC7CD69C22904C12A1BF08FC87BB9A0A170166;
IL2CPP_EXTERN_C String_t* _stringLiteral0FDFE0FD4BD4F3832053407A0EFB6F11655A54C6;
IL2CPP_EXTERN_C String_t* _stringLiteral10BB7D1FEDFD100EAF2ECD6C57A699179AAAFE00;
IL2CPP_EXTERN_C String_t* _stringLiteral1209DA8E082EA0AB89D6752F17E2C344724C888F;
IL2CPP_EXTERN_C String_t* _stringLiteral158F3A8EBA35F33F74D6EE2F0DE6901C6C4BB25B;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral276565662846912BD6C311C6C7B732FC149F12D5;
IL2CPP_EXTERN_C String_t* _stringLiteral27E1E9940D161AD7BF05452F0737F4E0A73F9A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral620BA0F93E5976480937E5E5244E0D180B242528;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE747681C1E9CC4D79E714B44A576724D270D8;
IL2CPP_EXTERN_C String_t* _stringLiteral7AF7AA279E48CBE88058633418F5624BDA17A6C0;
IL2CPP_EXTERN_C String_t* _stringLiteral86A2D3F60CAA8EACC042B49E74AB6C15311A9CCB;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral980E5B80F311F03C89986ADEC1B87B0E51D7B370;
IL2CPP_EXTERN_C String_t* _stringLiteral9D91C7ECF8D1671AE341DA6A052FFA936CE3149A;
IL2CPP_EXTERN_C String_t* _stringLiteral9E10010E5AE8285C6A7ADBF58138F19FDA95A09C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6388683ABA9FE3D10CB7129CCE6D0B07CE14A92;
IL2CPP_EXTERN_C String_t* _stringLiteralABDB69945EA24DB610930EB823D5354B7800B964;
IL2CPP_EXTERN_C String_t* _stringLiteralB2746AB0D1EA91843B34A867C7C10F41AD4DE376;
IL2CPP_EXTERN_C String_t* _stringLiteralB2B3B3273A9D0168B1739A1E0A24C5CA68595939;
IL2CPP_EXTERN_C String_t* _stringLiteralC2E2C1659D6F0257C7B32E4AEF1C2D0CEA15A175;
IL2CPP_EXTERN_C String_t* _stringLiteralD26DB2D8C30F23686891421CA1BC1B4E74114F58;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB062DA5806A0E3DD31C8CA98BD65B442B1903D;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4C29EB5ACC744808B3535E969A7016310747B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AA4E3066259B95A5279352AA72429493F119E3;
IL2CPP_EXTERN_C String_t* _stringLiteralF99E5B8BB587888B66986A5F3E5F335A15D9698E;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFEDA668D27507E94ED03804963AD6A9B453C9535;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BikeManager_U3CStartU3Eb__11_0_mD1DC0066B83EF4853DD9D6EC5EABD7DFBFF14087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BikeManager_onConnected_mC72A6F0C24C8A4AEF6418399E2AB2E7DFE903D47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BikeManager_onDeviceSelected_mD5D24E7965BC03F62269737879557D41C897894F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BikeManager_onScanResult_mD5FD1F4ACBBCBBF09CEE0B8FE773F88FC2A9D7DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BikeManager_onServicesDiscovered_mF1B382DEBBDA2C245B7A9886769B38D68AF07144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugText_HandleLog_mCF10770A207EA008665CBB4889B686D8E2ED3E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF_m899D7C3BF7272006276A4C4CB9D4C66152C1DD51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisBtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99_m84BBEC4B7E39EB3F8105A13C743EC113FEDDDD5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m708D6811CA89F8467F4780CC9A2B14E3B4E441E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mA34B3C54C3DB0F3BE6711E460EE2BA036F1FF839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF60E807469E4751538C9F32DEA95061F21E6A4EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CsetU3Eb__0_m751F10E9B91F4F11EA13E47AA394D2AF0DEDFA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<NativeBLE/BtleDevice>
struct List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BtleDeviceU5BU5D_t8965CED5B05BE1B64072D646E5585FC22ED921AA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BtleDeviceU5BU5D_t8965CED5B05BE1B64072D646E5585FC22ED921AA* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC  : public RuntimeObject
{
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject* ____syncRoot_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// DeviceLine/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F  : public RuntimeObject
{
	// NativeBLE/BtleDevice DeviceLine/<>c__DisplayClass3_0::device
	BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___device_0;
};

// NativeBLE/BtleDevice
struct BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99  : public RuntimeObject
{
	// System.String NativeBLE/BtleDevice::address
	String_t* ___address_0;
	// System.String NativeBLE/BtleDevice::name
	String_t* ___name_1;
};

// NativeBLE/ConnectedDevice
struct ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5  : public RuntimeObject
{
	// NativeBLE/BtleDevice NativeBLE/ConnectedDevice::deviceInfo
	BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___deviceInfo_0;
	// System.Int32 NativeBLE/ConnectedDevice::state
	int32_t ___state_1;
	// System.Collections.Generic.List`1<System.String> NativeBLE/ConnectedDevice::services
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___services_2;
	// System.Collections.Generic.List`1<System.String> NativeBLE/ConnectedDevice::characteristics
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___characteristics_3;
	// System.Int32 NativeBLE/ConnectedDevice::mtu
	int32_t ___mtu_4;
	// System.Int32 NativeBLE/ConnectedDevice::txPhy
	int32_t ___txPhy_5;
	// System.Int32 NativeBLE/ConnectedDevice::rxPhy
	int32_t ___rxPhy_6;
	// System.Int32 NativeBLE/ConnectedDevice::rssi
	int32_t ___rssi_7;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_tC38CF142534A070C2B94C80666D4D49680A1F92A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_tC38CF142534A070C2B94C80666D4D49680A1F92A__padding[10];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::279BACEE9079B3CCBFA413FF279C708A367835A2261C01605B93E903F8C743E6
	__StaticArrayInitTypeSizeU3D10_tC38CF142534A070C2B94C80666D4D49680A1F92A ___279BACEE9079B3CCBFA413FF279C708A367835A2261C01605B93E903F8C743E6_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// NativeBLE/AndroidMessagePrefix
struct AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0 
{
	// System.Int32 NativeBLE/AndroidMessagePrefix::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<BikeState>
struct Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<NativeBLE/BtleDevice>
struct Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66  : public MulticastDelegate_t
{
};

// System.Action`1<NativeBLE/ConnectedDevice>
struct Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// AdaptToSafeArea
struct AdaptToSafeArea_t29441D7B0FDCB5081E6D8A354725FEC31E9BC8B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas AdaptToSafeArea::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
};

// BikeManager
struct BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BikeManager::loadingOverlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadingOverlay_5;
	// UnityEngine.GameObject BikeManager::scanPage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scanPage_6;
	// UnityEngine.UI.Button BikeManager::scanButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___scanButton_7;
	// UnityEngine.Transform BikeManager::deviceLineContainer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___deviceLineContainer_8;
	// UnityEngine.GameObject BikeManager::deviceLine_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deviceLine_prefab_9;
	// UnityEngine.GameObject BikeManager::connectPage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___connectPage_10;
	// UnityEngine.UI.Button BikeManager::closeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___closeButton_11;
	// System.String BikeManager::currentDevice
	String_t* ___currentDevice_12;
	// System.Byte[] BikeManager::currentStateId
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___currentStateId_16;
	// System.Action`1<BikeState> BikeManager::currentStateCallback
	Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* ___currentStateCallback_17;
	// System.Action`1<BikeState> BikeManager::notificationsCallback
	Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* ___notificationsCallback_19;
};

struct BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_StaticFields
{
	// BikeManager BikeManager::instance
	BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* ___instance_4;
};

// BikeState
struct BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DebugText
struct DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text DebugText::logText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___logText_5;
	// System.String DebugText::myLog
	String_t* ___myLog_6;
	// System.Collections.Queue DebugText::myLogQueue
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* ___myLogQueue_7;
};

struct DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB_StaticFields
{
	// DebugText DebugText::instance
	DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB* ___instance_4;
};

// DeviceLine
struct DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button DeviceLine::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_4;
	// TMPro.TMP_Text DeviceLine::text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_5;
	// NativeBLE/BtleDevice DeviceLine::device
	BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___device_6;
};

// NativeBLE
struct NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields
{
	// System.Boolean NativeBLE::available
	bool ___available_4;
	// UnityEngine.AndroidJavaClass NativeBLE::unityClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___unityClass_5;
	// UnityEngine.AndroidJavaObject NativeBLE::unityActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___unityActivity_6;
	// System.Collections.Generic.List`1<NativeBLE/BtleDevice> NativeBLE::foundDevices
	List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* ___foundDevices_7;
	// NativeBLE/ConnectedDevice NativeBLE::currentDevice
	ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* ___currentDevice_8;
	// System.Action`1<NativeBLE/BtleDevice> NativeBLE::onScanResult
	Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* ___onScanResult_9;
	// System.Action`1<NativeBLE/ConnectedDevice> NativeBLE::onConnected
	Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* ___onConnected_10;
	// System.Action`1<System.Int32> NativeBLE::onDisconnected
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___onDisconnected_11;
	// System.Action NativeBLE::onCharacteristicWrite
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCharacteristicWrite_12;
	// System.Action NativeBLE::onDescriptorWrite
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDescriptorWrite_13;
	// System.Action`1<NativeBLE/ConnectedDevice> NativeBLE::onservicesDiscovered
	Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* ___onservicesDiscovered_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UpdateAndroidLib
struct UpdateAndroidLib_t2148D519B61D9123ABBCF1A39B2EDFC2598FA666  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UpdateAndroidLib::buildOutputName
	String_t* ___buildOutputName_4;
	// System.String UpdateAndroidLib::libBuildPath
	String_t* ___libBuildPath_5;
	// System.String UpdateAndroidLib::localLibPath
	String_t* ___localLibPath_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// NativeBLE/AndroidMessagePrefix[]
struct AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Action`1<NativeBLE/BtleDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m51B9444F9A851713825F64E548B5A0530EB1255D (Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action`1<NativeBLE/ConnectedDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1A8DC5D37895C78D245D047DDCE20AEE1806CCA8 (Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean NativeBLE::scanBLE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_scanBLE_mBF352B23CE72C49B96CC4D7329591C24C5E56CF3 (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<DeviceLine>()
inline DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* GameObject_GetComponent_TisDeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF_m899D7C3BF7272006276A4C4CB9D4C66152C1DD51 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DeviceLine::set(NativeBLE/BtleDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceLine_set_mDFC8EDF332B9D7AC14971452751359E68750A2EA (DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___device0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean NativeBLE::exploreServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_exploreServices_mC03EE0949C8A6631B60A5A61DBFB3A11B16F2134 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Boolean NativeBLE::writeCharacteristic(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_writeCharacteristic_m133BD18CAAF8FC9D392C9DA660EA4254974A8069 (String_t* ___service0, String_t* ___characteristic1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data2, const RuntimeMethod* method) ;
// System.Boolean NativeBLE::connectBLE(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_connectBLE_mA0BB5EF8AEAF68B2EF7A48DE09DAE0150FFF6A88 (String_t* ___address0, const RuntimeMethod* method) ;
// System.Void NativeBLE::disconnectBLE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_disconnectBLE_mAD195D449610D0AF55B0730A7EA7AAB09F15DCA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void BikeState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeState__ctor_m7ED683829739BB253DF0CAF4BCECAF1E9C8FB35C (BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<BikeState>::Invoke(T)
inline void Action_1_Invoke_mC59BAD51D6964BAF83F955DFEA75346D018FAE4E_inline (Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* __this, BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF*, BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void BikeManager::scan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_scan_m93F37F81ADEA308A503E46A3CB3F45996AB2735F (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AdaptToSafeArea::applySafeArea(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptToSafeArea_applySafeArea_m740D56CA4E96B27E08ED9E40146A59D9B644802F (AdaptToSafeArea_t29441D7B0FDCB5081E6D8A354725FEC31E9BC8B2* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___safeAreaTransform0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m4FFA2CF15868DE7146265B14A4A95FC0561FE5AF (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Canvas::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Canvas_get_pixelRect_m6093115759D4B39B4076AFE44F7ECC886B1F6C9F (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_m9185431F0B315A8CE2AA6D7B8DA764BDA350918B (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m44CDFD932D3A105FD92D6DEC0592F1E5285631C6 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Collections.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mFCCBE2B4FFBD3F33D6FBE2D010C9A0CA976784CB (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.List`1<NativeBLE/BtleDevice>::Clear()
inline void List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_inline (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<NativeBLE/BtleDevice>(System.String)
inline BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* JsonUtility_FromJson_TisBtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99_m84BBEC4B7E39EB3F8105A13C743EC113FEDDDD5E (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Boolean System.Collections.Generic.List`1<NativeBLE/BtleDevice>::Contains(T)
inline bool List_1_Contains_mA34B3C54C3DB0F3BE6711E460EE2BA036F1FF839 (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02*, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<NativeBLE/BtleDevice>::Add(T)
inline void List_1_Add_m708D6811CA89F8467F4780CC9A2B14E3B4E441E0_inline (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02*, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action`1<NativeBLE/BtleDevice>::Invoke(T)
inline void Action_1_Invoke_m0BFC01CD45A038EFF4F7A0FE004BA1092D4AEB11_inline (Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66*, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// T UnityEngine.JsonUtility::FromJson<NativeBLE/ConnectedDevice>(System.String)
inline ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void NativeBLE/ConnectedDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedDevice__ctor_m8D1515A40D295B5737042DA863D09435DCF67D14 (ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<NativeBLE/ConnectedDevice>::Invoke(T)
inline void Action_1_Invoke_mC603B261D54161BBDB0B1E9F9E344F9D78FDA6BD_inline (Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* __this, ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*, ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NativeBLE/BtleDevice>::.ctor()
inline void List_1__ctor_mF60E807469E4751538C9F32DEA95061F21E6A4EF (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m68CDF30174466285011A5E8B320CAE02D7EF432C (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.Void DeviceLine/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2227082822D9858D1D68AFF9970EDE8F7B0DD6D4 (U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* __this, const RuntimeMethod* method) ;
// System.Void BikeManager::connect(NativeBLE/BtleDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_connect_m2DC638E3939851F806D1F23F2E78BBC3338A3DFE (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___device0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void BikeManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_Awake_mC46FC3E98B8827E5ED80C0AF400FAC93BF95CCA5 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// instance = this;
		((BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_StaticFields*)il2cpp_codegen_static_fields_for(BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_StaticFields*)il2cpp_codegen_static_fields_for(BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void BikeManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_OnEnable_mFBD1D5AC31C64C71096A199C7256D784AFC852B1 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeManager_onConnected_mC72A6F0C24C8A4AEF6418399E2AB2E7DFE903D47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeManager_onScanResult_mD5FD1F4ACBBCBBF09CEE0B8FE773F88FC2A9D7DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeManager_onServicesDiscovered_mF1B382DEBBDA2C245B7A9886769B38D68AF07144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeBLE.onScanResult += this.onScanResult;
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* L_0 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onScanResult_9;
		Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* L_1 = (Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66*)il2cpp_codegen_object_new(Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m51B9444F9A851713825F64E548B5A0530EB1255D(L_1, __this, (intptr_t)((void*)BikeManager_onScanResult_mD5FD1F4ACBBCBBF09CEE0B8FE773F88FC2A9D7DD_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onScanResult_9 = ((Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66*)Castclass((RuntimeObject*)L_2, Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onScanResult_9), (void*)((Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66*)Castclass((RuntimeObject*)L_2, Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66_il2cpp_TypeInfo_var)));
		// NativeBLE.onConnected += this.onConnected;
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_3 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onConnected_10;
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_4 = (Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*)il2cpp_codegen_object_new(Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m1A8DC5D37895C78D245D047DDCE20AEE1806CCA8(L_4, __this, (intptr_t)((void*)BikeManager_onConnected_mC72A6F0C24C8A4AEF6418399E2AB2E7DFE903D47_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onConnected_10 = ((Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*)Castclass((RuntimeObject*)L_5, Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onConnected_10), (void*)((Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*)Castclass((RuntimeObject*)L_5, Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var)));
		// NativeBLE.onservicesDiscovered += this.onServicesDiscovered;
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_6 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onservicesDiscovered_14;
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_7 = (Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*)il2cpp_codegen_object_new(Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m1A8DC5D37895C78D245D047DDCE20AEE1806CCA8(L_7, __this, (intptr_t)((void*)BikeManager_onServicesDiscovered_mF1B382DEBBDA2C245B7A9886769B38D68AF07144_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_6, L_7, NULL);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onservicesDiscovered_14 = ((Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*)Castclass((RuntimeObject*)L_8, Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onservicesDiscovered_14), (void*)((Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B*)Castclass((RuntimeObject*)L_8, Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void BikeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_Start_m4EC93E59B56ABED0A94F582108CE07F896C942FE (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeManager_U3CStartU3Eb__11_0_mD1DC0066B83EF4853DD9D6EC5EABD7DFBFF14087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scanButton.onClick.AddListener(delegate {
		//     scan();
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___scanButton_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)BikeManager_U3CStartU3Eb__11_0_mD1DC0066B83EF4853DD9D6EC5EABD7DFBFF14087_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::scan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_scan_m93F37F81ADEA308A503E46A3CB3F45996AB2735F (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (Transform child in deviceLineContainer) Destroy(child.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___deviceLineContainer_8;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0043;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0010_1:
			{
				// foreach (Transform child in deviceLineContainer) Destroy(child.gameObject);
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// foreach (Transform child in deviceLineContainer) Destroy(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
			}

IL_0028_1:
			{
				// foreach (Transform child in deviceLineContainer) Destroy(child.gameObject);
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// NativeBLE.scanBLE();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = NativeBLE_scanBLE_mBF352B23CE72C49B96CC4D7329591C24C5E56CF3(NULL);
		// }
		return;
	}
}
// System.Void BikeManager::onScanResult(NativeBLE/BtleDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_onScanResult_mD5FD1F4ACBBCBBF09CEE0B8FE773F88FC2A9D7DD (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___btleDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeManager_onDeviceSelected_mD5D24E7965BC03F62269737879557D41C897894F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF_m899D7C3BF7272006276A4C4CB9D4C66152C1DD51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* V_0 = NULL;
	{
		// DeviceLine line = Instantiate(deviceLine_prefab, deviceLineContainer).GetComponent<DeviceLine>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deviceLine_prefab_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___deviceLineContainer_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_2);
		DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* L_3;
		L_3 = GameObject_GetComponent_TisDeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF_m899D7C3BF7272006276A4C4CB9D4C66152C1DD51(L_2, GameObject_GetComponent_TisDeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF_m899D7C3BF7272006276A4C4CB9D4C66152C1DD51_RuntimeMethod_var);
		V_0 = L_3;
		// line.set(btleDevice);
		DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* L_4 = V_0;
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_5 = ___btleDevice0;
		NullCheck(L_4);
		DeviceLine_set_mDFC8EDF332B9D7AC14971452751359E68750A2EA(L_4, L_5, NULL);
		// line.button.onClick.AddListener(onDeviceSelected);
		DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* L_6 = V_0;
		NullCheck(L_6);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = L_6->___button_4;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)BikeManager_onDeviceSelected_mD5D24E7965BC03F62269737879557D41C897894F_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::onDeviceSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_onDeviceSelected_mD5D24E7965BC03F62269737879557D41C897894F (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	{
		// loadingOverlay.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loadingOverlay_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::onConnected(NativeBLE/ConnectedDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_onConnected_mC72A6F0C24C8A4AEF6418399E2AB2E7DFE903D47 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadingOverlay.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loadingOverlay_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// scanPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___scanPage_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// connectPage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___connectPage_10;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// NativeBLE.exploreServices();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NativeBLE_exploreServices_mC03EE0949C8A6631B60A5A61DBFB3A11B16F2134(NULL);
		// }
		return;
	}
}
// System.Void BikeManager::onServicesDiscovered(NativeBLE/ConnectedDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_onServicesDiscovered_mF1B382DEBBDA2C245B7A9886769B38D68AF07144 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____279BACEE9079B3CCBFA413FF279C708A367835A2261C01605B93E903F8C743E6_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10BB7D1FEDFD100EAF2ECD6C57A699179AAAFE00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2B3B3273A9D0168B1739A1E0A24C5CA68595939);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeBLE.writeCharacteristic(CURRENT_STATE_SERVICE, CURRENT_STATE_WRITE_CHARACTERISTIC, new byte[] { 0x00, 0xD1, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 });
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____279BACEE9079B3CCBFA413FF279C708A367835A2261C01605B93E903F8C743E6_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NativeBLE_writeCharacteristic_m133BD18CAAF8FC9D392C9DA660EA4254974A8069(_stringLiteral10BB7D1FEDFD100EAF2ECD6C57A699179AAAFE00, _stringLiteralB2B3B3273A9D0168B1739A1E0A24C5CA68595939, L_1, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::connect(NativeBLE/BtleDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_connect_m2DC638E3939851F806D1F23F2E78BBC3338A3DFE (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeBLE.connectBLE(device.address);
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_0 = ___device0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___address_0;
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeBLE_connectBLE_mA0BB5EF8AEAF68B2EF7A48DE09DAE0150FFF6A88(L_1, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_disconnect_m0C2A25B92D353639578D9E1D2B0917F51A4AAA3A (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeBLE.disconnectBLE();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		NativeBLE_disconnectBLE_mAD195D449610D0AF55B0730A7EA7AAB09F15DCA8(NULL);
		// }
		return;
	}
}
// System.Void BikeManager::onDisconnected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_onDisconnected_m3AA9EED232BCF5954D022EE78A0DC5ACB7BB8D06 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// scanPage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___scanPage_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// connectPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___connectPage_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::getCurrentState(System.String,System.Action`1<BikeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_getCurrentState_m4454676E3D5A06B61149E61E012D9B982F0CD1FB (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, String_t* ___device0, Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A2D3F60CAA8EACC042B49E74AB6C15311A9CCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = device;
		String_t* L_0 = ___device0;
		__this->___currentDevice_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentDevice_12), (void*)L_0);
		// currentStateCallback = callback;
		Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* L_1 = ___callback1;
		__this->___currentStateCallback_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentStateCallback_17), (void*)L_1);
		// Debug.Log("Getting state 1/3");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral86A2D3F60CAA8EACC042B49E74AB6C15311A9CCB, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::currentStateWriteResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_currentStateWriteResponse_m5AC42E2F290DA608821E8024A69441561E54558A (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, String_t* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2E2C1659D6F0257C7B32E4AEF1C2D0CEA15A175);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Getting state 2/3 " + response);
		String_t* L_0 = ___response0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC2E2C1659D6F0257C7B32E4AEF1C2D0CEA15A175, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::currentStateReadResponse(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_currentStateReadResponse_m242D9B94D5DA0956825C0AC9E4B584A1CE655F1F (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, String_t* ___response0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01FEE5BFAE8002803A5DEDD5D81E2CC3E4C41E94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* G_B5_0 = NULL;
	Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* G_B4_0 = NULL;
	{
		// string s = "Getting state 3/3 " + response + " : ";
		String_t* L_0 = ___response0;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral01FEE5BFAE8002803A5DEDD5D81E2CC3E4C41E94, L_0, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, NULL);
		V_0 = L_1;
		// foreach (byte b in data) s += (int)b + " ";
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0037;
	}

IL_0019:
	{
		// foreach (byte b in data) s += (int)b + " ";
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// foreach (byte b in data) s += (int)b + " ";
		String_t* L_7 = V_0;
		uint8_t L_8 = V_3;
		V_4 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_7, L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_10;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0037:
	{
		// foreach (byte b in data) s += (int)b + " ";
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// Debug.Log(s);
		String_t* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		// currentStateCallback?.Invoke(new BikeState());
		Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* L_15 = __this->___currentStateCallback_17;
		Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* L_16 = L_15;
		G_B4_0 = L_16;
		if (L_16)
		{
			G_B5_0 = L_16;
			goto IL_0050;
		}
	}
	{
		goto IL_005b;
	}

IL_0050:
	{
		BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E* L_17 = (BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E*)il2cpp_codegen_object_new(BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		BikeState__ctor_m7ED683829739BB253DF0CAF4BCECAF1E9C8FB35C(L_17, NULL);
		NullCheck(G_B5_0);
		Action_1_Invoke_mC59BAD51D6964BAF83F955DFEA75346D018FAE4E_inline(G_B5_0, L_17, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void BikeManager::subscribeToNotifications(System.String,System.Action`1<BikeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_subscribeToNotifications_m4E4ED65BB8872DC3C9F9EEBE45480929919BA351 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, String_t* ___device0, Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FDFE0FD4BD4F3832053407A0EFB6F11655A54C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = device;
		String_t* L_0 = ___device0;
		__this->___currentDevice_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentDevice_12), (void*)L_0);
		// notificationsCallback = callback;
		Action_1_tCCF7F02881C715CE334AC1172005C5B9267690AF* L_1 = ___callback1;
		__this->___notificationsCallback_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___notificationsCallback_19), (void*)L_1);
		// Debug.Log("Getting notifications");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0FDFE0FD4BD4F3832053407A0EFB6F11655A54C6, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::notificationResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_notificationResponse_m3EF569A617872B36F1B1867B6D37FA99D990F996 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, String_t* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BDC7CD69C22904C12A1BF08FC87BB9A0A170166);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("New notification " + response);
		String_t* L_0 = ___response0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0BDC7CD69C22904C12A1BF08FC87BB9A0A170166, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void BikeManager::characteristicUpdated(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_characteristicUpdated_mAE5B5230B16755C2919E7F84CBF2A2D2517F3F55 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, String_t* ___uuid0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BikeManager::unsubscribeToNotifications(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_unsubscribeToNotifications_mE614851590F01CF1741D9D6882D53AC7D5AEAD40 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BikeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager__ctor_m6C2113CE9A0F4F0565E68D7DDC8D6B2DC479804D (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string currentDevice = "";
		__this->___currentDevice_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentDevice_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// byte[] currentStateId = { 3, 0 };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)3);
		__this->___currentStateId_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentStateId_16), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BikeManager::<Start>b__11_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeManager_U3CStartU3Eb__11_0_mD1DC0066B83EF4853DD9D6EC5EABD7DFBFF14087 (BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* __this, const RuntimeMethod* method) 
{
	{
		// scan();
		BikeManager_scan_m93F37F81ADEA308A503E46A3CB3F45996AB2735F(__this, NULL);
		// });
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
// System.Void BikeState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeState_Start_m1A4E1DEBDCCE535861D7EB49A6658EFAA4F799DC (BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BikeState::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeState_Update_mCCCEDC253026D6FE1680D5F3A7183A9D7C58B6CC (BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BikeState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeState__ctor_m7ED683829739BB253DF0CAF4BCECAF1E9C8FB35C (BikeState_tD2B5E928A658CBDAFD20BC4999D689200CCA682E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AdaptToSafeArea::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptToSafeArea_Start_mDCFBFF3C863B6BF5F9FFA80D5D22F1EBDD2F18D0 (AdaptToSafeArea_t29441D7B0FDCB5081E6D8A354725FEC31E9BC8B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_4), (void*)L_0);
		// RectTransform rt = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_0 = L_1;
		// applySafeArea(rt);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = V_0;
		AdaptToSafeArea_applySafeArea_m740D56CA4E96B27E08ED9E40146A59D9B644802F(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void AdaptToSafeArea::applySafeArea(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptToSafeArea_applySafeArea_m740D56CA4E96B27E08ED9E40146A59D9B644802F (AdaptToSafeArea_t29441D7B0FDCB5081E6D8A354725FEC31E9BC8B2* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___safeAreaTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (safeAreaTransform == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___safeAreaTransform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_00bf;
	}

IL_0011:
	{
		// var safeArea = Screen.safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = Screen_get_safeArea_m4FFA2CF15868DE7146265B14A4A95FC0561FE5AF(NULL);
		V_0 = L_3;
		// var anchorMin = safeArea.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&V_0), NULL);
		V_1 = L_4;
		// var anchorMax = safeArea.position + safeArea.size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_5, L_6, NULL);
		V_2 = L_7;
		// anchorMin.x /= canvas.pixelRect.width;
		float* L_8 = (&(&V_1)->___x_0);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = __this->___canvas_4;
		NullCheck(L_11);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = Canvas_get_pixelRect_m6093115759D4B39B4076AFE44F7ECC886B1F6C9F(L_11, NULL);
		V_4 = L_12;
		float L_13;
		L_13 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		*((float*)L_9) = (float)((float)(L_10/L_13));
		// anchorMin.y /= canvas.pixelRect.height;
		float* L_14 = (&(&V_1)->___y_1);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = __this->___canvas_4;
		NullCheck(L_17);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18;
		L_18 = Canvas_get_pixelRect_m6093115759D4B39B4076AFE44F7ECC886B1F6C9F(L_17, NULL);
		V_4 = L_18;
		float L_19;
		L_19 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		*((float*)L_15) = (float)((float)(L_16/L_19));
		// anchorMax.x /= canvas.pixelRect.width;
		float* L_20 = (&(&V_2)->___x_0);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_23 = __this->___canvas_4;
		NullCheck(L_23);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24;
		L_24 = Canvas_get_pixelRect_m6093115759D4B39B4076AFE44F7ECC886B1F6C9F(L_23, NULL);
		V_4 = L_24;
		float L_25;
		L_25 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		*((float*)L_21) = (float)((float)(L_22/L_25));
		// anchorMax.y /= canvas.pixelRect.height;
		float* L_26 = (&(&V_2)->___y_1);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_29 = __this->___canvas_4;
		NullCheck(L_29);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_30;
		L_30 = Canvas_get_pixelRect_m6093115759D4B39B4076AFE44F7ECC886B1F6C9F(L_29, NULL);
		V_4 = L_30;
		float L_31;
		L_31 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		*((float*)L_27) = (float)((float)(L_28/L_31));
		// safeAreaTransform.anchorMin = anchorMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = ___safeAreaTransform0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		NullCheck(L_32);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_32, L_33, NULL);
		// safeAreaTransform.anchorMax = anchorMax;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34 = ___safeAreaTransform0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_2;
		NullCheck(L_34);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_34, L_35, NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void AdaptToSafeArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptToSafeArea__ctor_m2E7E26F94AEEE98419E269F6F63A0826E64FC42D (AdaptToSafeArea_t29441D7B0FDCB5081E6D8A354725FEC31E9BC8B2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DebugText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugText_Awake_mFC4001865F0F57196C22BFEFEA9E87B81F47BDB4 (DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB_StaticFields*)il2cpp_codegen_static_fields_for(DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB_StaticFields*)il2cpp_codegen_static_fields_for(DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void DebugText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugText_OnEnable_mA9B5C81117E330ACB050D660788E13590A38806E (DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugText_HandleLog_mCF10770A207EA008665CBB4889B686D8E2ED3E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived += HandleLog;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)DebugText_HandleLog_mCF10770A207EA008665CBB4889B686D8E2ED3E36_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_m9185431F0B315A8CE2AA6D7B8DA764BDA350918B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DebugText::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugText_OnDisable_m07E63376E03A469B8B236F0B7D92CE36BF552874 (DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugText_HandleLog_mCF10770A207EA008665CBB4889B686D8E2ED3E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived -= HandleLog;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)DebugText_HandleLog_mCF10770A207EA008665CBB4889B686D8E2ED3E36_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m44CDFD932D3A105FD92D6DEC0592F1E5285631C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void DebugText::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugText_HandleLog_mCF10770A207EA008665CBB4889B686D8E2ED3E36 (DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB* __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1209DA8E082EA0AB89D6752F17E2C344724C888F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD26DB2D8C30F23686891421CA1BC1B4E74114F58);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// myLog = logString;
		String_t* L_0 = ___logString0;
		__this->___myLog_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myLog_6), (void*)L_0);
		// string newString = "\n [" + type + "] : " + myLog;
		Il2CppFakeBox<int32_t> L_1(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, (&___type2));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3 = __this->___myLog_6;
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralD26DB2D8C30F23686891421CA1BC1B4E74114F58, L_2, _stringLiteral1209DA8E082EA0AB89D6752F17E2C344724C888F, L_3, NULL);
		V_0 = L_4;
		// myLogQueue.Enqueue(newString);
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_5 = __this->___myLogQueue_7;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_5, L_6);
		// if (type == LogType.Exception) {
		int32_t L_7 = ___type2;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)4))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// newString = "\n" + stackTrace;
		String_t* L_9 = ___stackTrace1;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_9, NULL);
		V_0 = L_10;
		// myLogQueue.Enqueue(newString);
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_11 = __this->___myLogQueue_7;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_11, L_12);
	}

IL_005b:
	{
		// myLog = string.Empty;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___myLog_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myLog_6), (void*)L_13);
		// foreach (string mylog in myLogQueue) {
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_14 = __this->___myLogQueue_7;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(14 /* System.Collections.IEnumerator System.Collections.Queue::GetEnumerator() */, L_14);
		V_2 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_16 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_17 = V_4;
					if (!L_17)
					{
						goto IL_00b3;
					}
				}
				{
					RuntimeObject* L_18 = V_4;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_00b3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0095_1;
			}

IL_0075_1:
			{
				// foreach (string mylog in myLogQueue) {
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				V_3 = ((String_t*)CastclassSealed((RuntimeObject*)L_20, String_t_il2cpp_TypeInfo_var));
				// myLog += mylog;
				String_t* L_21 = __this->___myLog_6;
				String_t* L_22 = V_3;
				String_t* L_23;
				L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_21, L_22, NULL);
				__this->___myLog_6 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___myLog_6), (void*)L_23);
			}

IL_0095_1:
			{
				// foreach (string mylog in myLogQueue) {
				RuntimeObject* L_24 = V_2;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0075_1;
				}
			}
			{
				goto IL_00b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		// logText.text = myLog;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_26 = __this->___logText_5;
		String_t* L_27 = __this->___myLog_6;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_27);
		// }
		return;
	}
}
// System.Void DebugText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugText__ctor_m6DD57C61A6534302F9D2708163BBDB0C7BCC566C (DebugText_tB5ADE9E9500916F30E622D344333304CA543D8AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue myLogQueue = new Queue();
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_0 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)il2cpp_codegen_object_new(Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue__ctor_mFCCBE2B4FFBD3F33D6FBE2D010C9A0CA976784CB(L_0, NULL);
		__this->___myLogQueue_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myLogQueue_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NativeBLE::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_Awake_mCAA5CB3D549C6431F30DBD824C245564167A27B3 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D91C7ECF8D1671AE341DA6A052FFA936CE3149A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB062DA5806A0E3DD31C8CA98BD65B442B1903D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// gameObject.name = "NativeBLE";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, _stringLiteralDCB062DA5806A0E3DD31C8CA98BD65B442B1903D, NULL);
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		// unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___unityClass_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___unityClass_5), (void*)L_3);
		// unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___unityClass_5;
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___unityActivity_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___unityActivity_6), (void*)L_5);
		// if (unityActivity != null && unityActivity.Call<bool>("androidAvailable")) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___unityActivity_6;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___unityActivity_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_9;
		L_9 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_7, _stringLiteral9D91C7ECF8D1671AE341DA6A052FFA936CE3149A, L_8, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0061;
	}

IL_0060:
	{
		G_B4_0 = 0;
	}

IL_0061:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// available = true;
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___available_4 = (bool)1;
	}

IL_006d:
	{
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Boolean NativeBLE::scanBLE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_scanBLE_mBF352B23CE72C49B96CC4D7329591C24C5E56CF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E10010E5AE8285C6A7ADBF58138F19FDA95A09C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_2;
		// unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_4;
		// if (unityActivity != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// foundDevices.Clear();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_7 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7;
		NullCheck(L_7);
		List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_inline(L_7, List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		// return unityActivity.Call<bool>("scanLeDevice");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_10;
		L_10 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_8, _stringLiteral9E10010E5AE8285C6A7ADBF58138F19FDA95A09C, L_9, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_4 = L_10;
		goto IL_0054;
	}

IL_004e:
	{
	}

IL_004f:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		bool L_11 = V_4;
		return L_11;
	}
}
// System.Boolean NativeBLE::connectBLE(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_connectBLE_mA0BB5EF8AEAF68B2EF7A48DE09DAE0150FFF6A88 (String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6388683ABA9FE3D10CB7129CCE6D0B07CE14A92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_2;
		// unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_4;
		// if (unityActivity != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// foundDevices.Clear();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_7 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7;
		NullCheck(L_7);
		List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_inline(L_7, List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		// return unityActivity.Call<bool>("connectLeDevice", address);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		String_t* L_11 = ___address0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_8);
		bool L_12;
		L_12 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_8, _stringLiteralA6388683ABA9FE3D10CB7129CCE6D0B07CE14A92, L_10, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_4 = L_12;
		goto IL_0059;
	}

IL_0053:
	{
	}

IL_0054:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		bool L_13 = V_4;
		return L_13;
	}
}
// System.Boolean NativeBLE::exploreServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_exploreServices_mC03EE0949C8A6631B60A5A61DBFB3A11B16F2134 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEDA668D27507E94ED03804963AD6A9B453C9535);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_2;
		// unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_4;
		// if (unityActivity != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// foundDevices.Clear();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_7 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7;
		NullCheck(L_7);
		List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_inline(L_7, List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		// return unityActivity.Call<bool>("exploreLeServices");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_10;
		L_10 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_8, _stringLiteralFEDA668D27507E94ED03804963AD6A9B453C9535, L_9, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_4 = L_10;
		goto IL_0054;
	}

IL_004e:
	{
	}

IL_004f:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		bool L_11 = V_4;
		return L_11;
	}
}
// System.Boolean NativeBLE::writeCharacteristic(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_writeCharacteristic_m133BD18CAAF8FC9D392C9DA660EA4254974A8069 (String_t* ___service0, String_t* ___characteristic1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral620BA0F93E5976480937E5E5244E0D180B242528);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_2;
		// unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_4;
		// if (unityActivity != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		// foundDevices.Clear();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_7 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7;
		NullCheck(L_7);
		List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_inline(L_7, List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		// return unityActivity.Call<bool>("writeCharacteristic", service, characteristic, data);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		String_t* L_11 = ___service0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___characteristic1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___data2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		NullCheck(L_8);
		bool L_16;
		L_16 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_8, _stringLiteral620BA0F93E5976480937E5E5244E0D180B242528, L_14, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_4 = L_16;
		goto IL_0061;
	}

IL_005b:
	{
	}

IL_005c:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0061;
	}

IL_0061:
	{
		// }
		bool L_17 = V_4;
		return L_17;
	}
}
// System.Boolean NativeBLE::readCharacteristic(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeBLE_readCharacteristic_m766B7A4B05245F21E780EB875986E0880D481558 (String_t* ___service0, String_t* ___characteristic1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF99E5B8BB587888B66986A5F3E5F335A15D9698E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_2;
		// unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_4;
		// if (unityActivity != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// foundDevices.Clear();
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_7 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7;
		NullCheck(L_7);
		List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_inline(L_7, List_1_Clear_mF98D39B2E06E557DCE5C17BE5D4DB8008DA0F04A_RuntimeMethod_var);
		// return unityActivity.Call<bool>("readCharacteristic", service, characteristic);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		String_t* L_11 = ___service0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___characteristic1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		NullCheck(L_8);
		bool L_14;
		L_14 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_8, _stringLiteralF99E5B8BB587888B66986A5F3E5F335A15D9698E, L_12, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_4 = L_14;
		goto IL_005d;
	}

IL_0057:
	{
	}

IL_0058:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		bool L_15 = V_4;
		return L_15;
	}
}
// System.Void NativeBLE::disconnectBLE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_disconnectBLE_mAD195D449610D0AF55B0730A7EA7AAB09F15DCA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4C29EB5ACC744808B3535E969A7016310747B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (Application.platform == RuntimePlatform.Android) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_2;
		// unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_4;
		// if (unityActivity != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// unityActivity.Call("disconnectLeDevice");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_7, _stringLiteralDE4C29EB5ACC744808B3535E969A7016310747B9, L_8, NULL);
	}

IL_0041:
	{
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::scanResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_scanResult_m2BD4A345500B9672B4949227C114B55B684D491A (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisBtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99_m84BBEC4B7E39EB3F8105A13C743EC113FEDDDD5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m708D6811CA89F8467F4780CC9A2B14E3B4E441E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mA34B3C54C3DB0F3BE6711E460EE2BA036F1FF839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* V_0 = NULL;
	bool V_1 = false;
	Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* G_B3_0 = NULL;
	Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* G_B2_0 = NULL;
	{
		// BtleDevice btleDevice = JsonUtility.FromJson<BtleDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_1;
		L_1 = JsonUtility_FromJson_TisBtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99_m84BBEC4B7E39EB3F8105A13C743EC113FEDDDD5E(L_0, JsonUtility_FromJson_TisBtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99_m84BBEC4B7E39EB3F8105A13C743EC113FEDDDD5E_RuntimeMethod_var);
		V_0 = L_1;
		// if (!foundDevices.Contains(btleDevice)) {
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7;
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_mA34B3C54C3DB0F3BE6711E460EE2BA036F1FF839(L_2, L_3, List_1_Contains_mA34B3C54C3DB0F3BE6711E460EE2BA036F1FF839_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// foundDevices.Add(btleDevice);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_6 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7;
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m708D6811CA89F8467F4780CC9A2B14E3B4E441E0_inline(L_6, L_7, List_1_Add_m708D6811CA89F8467F4780CC9A2B14E3B4E441E0_RuntimeMethod_var);
		// onScanResult?.Invoke(btleDevice);
		Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* L_8 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onScanResult_9;
		Action_1_tBEBA7D79DE7A3E7490BB0EF0FC2D88284D0BAF66* L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_0032:
	{
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_10 = V_0;
		NullCheck(G_B3_0);
		Action_1_Invoke_m0BFC01CD45A038EFF4F7A0FE004BA1092D4AEB11_inline(G_B3_0, L_10, NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::connected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_connected_m76DF3C8A111EABDFB5ADA49AFF350B9BD6C841D8 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* G_B2_0 = NULL;
	Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* G_B1_0 = NULL;
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// onConnected?.Invoke(new ConnectedDevice());
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_3 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onConnected_10;
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0022;
		}
	}
	{
		goto IL_002d;
	}

IL_0022:
	{
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_5 = (ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5*)il2cpp_codegen_object_new(ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConnectedDevice__ctor_m8D1515A40D295B5737042DA863D09435DCF67D14(L_5, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mC603B261D54161BBDB0B1E9F9E344F9D78FDA6BD_inline(G_B2_0, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::disconnected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_disconnected_mBCD6CA0EDFF9CA3F1F9D8E60FF79D59B4D0D2738 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		// currentDevice = null;
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = (ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)(ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5*)NULL);
		// Debug.Log(status);
		String_t* L_0 = ___status0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// onDisconnected?.Invoke(int.Parse(status));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onDisconnected_11;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
	}
	{
		goto IL_0025;
	}

IL_0019:
	{
		String_t* L_3 = ___status0;
		int32_t L_4;
		L_4 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_3, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, L_4, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::characteristicWrite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_characteristicWrite_m19D743C39AD909651D2EBE8E4C729A27B1083A5C (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// onCharacteristicWrite?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onCharacteristicWrite_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0022;
		}
	}
	{
		goto IL_0028;
	}

IL_0022:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::descriptorWrite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_descriptorWrite_m4BD031855A9E44746C671B49889A5DAAE21FBE72 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// onDescriptorWrite?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onDescriptorWrite_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0022;
		}
	}
	{
		goto IL_0028;
	}

IL_0022:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::mtuChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_mtuChanged_mE0D19000DC113DF31DBFE47D9004FF7B74C71172 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeBLE::phyRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_phyRead_mCA433BC1CCF12FCF2CEC4262CDB0A75E37FE2EF6 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeBLE::phyUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_phyUpdate_mE424074B68688099C26F1B585330F0304AD95ECC (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeBLE::readRemoteRssi(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_readRemoteRssi_m3B59AAF7706FF43D3B37B7CE13BC72878F6F5B7C (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeBLE::reliableWriteCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_reliableWriteCompleted_m60C656ABFD54F8F7A29DB2748265F0EAD90C42BD (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeBLE::serviceChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_serviceChanged_m3A5A5EA2C5FE1BB81F7BA77FD9B264C721BA3E35 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeBLE::servicesDiscovered(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_servicesDiscovered_mD01BB60EC147F8E69F1B4477EF7DA17345CF6110 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___jsonDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* G_B2_0 = NULL;
	Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* G_B1_0 = NULL;
	{
		// currentDevice = JsonUtility.FromJson<ConnectedDevice>(jsonDevice);
		String_t* L_0 = ___jsonDevice0;
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_1;
		L_1 = JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4(L_0, JsonUtility_FromJson_TisConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5_mC2B2EAFDE7AF225F2FDB154E866E30343AE555D4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)L_1);
		// Debug.Log(currentDevice);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_2 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// onservicesDiscovered?.Invoke(currentDevice);
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_3 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___onservicesDiscovered_14;
		Action_1_tB27790D69255E0D86A8A8B3E20E3D013EC501C6B* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0022;
		}
	}
	{
		goto IL_002d;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* L_5 = ((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC603B261D54161BBDB0B1E9F9E344F9D78FDA6BD_inline(G_B2_0, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::messageFromAndroid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE_messageFromAndroid_mB0AF305174044FB03F91D3423489BFAE09C27C34 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE747681C1E9CC4D79E714B44A576724D270D8);
		s_Il2CppMethodInitialized = true;
	}
	AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// foreach (AndroidMessagePrefix prefix in (AndroidMessagePrefix[])Enum.GetValues(typeof(AndroidMessagePrefix))) {
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_1, NULL);
		V_0 = ((AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421*)Castclass((RuntimeObject*)L_2, AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_009e;
	}

IL_001e:
	{
		// foreach (AndroidMessagePrefix prefix in (AndroidMessagePrefix[])Enum.GetValues(typeof(AndroidMessagePrefix))) {
		AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (message.StartsWith(prefix.ToString())) {
		String_t* L_7 = ___message0;
		Il2CppFakeBox<int32_t> L_8(AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_7, L_9, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0099;
		}
	}
	{
		// message = message.Remove(0, prefix.ToString().Length + 1);
		String_t* L_12 = ___message0;
		Il2CppFakeBox<int32_t> L_13(AndroidMessagePrefix_t3CE95EA9789D18BAA255F8BBF459A269931389A0_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_12);
		String_t* L_16;
		L_16 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_12, 0, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		___message0 = L_16;
		// switch (prefix) {
		int32_t L_17 = V_2;
		V_5 = L_17;
		int32_t L_18 = V_5;
		V_4 = L_18;
		int32_t L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		goto IL_0065;
	}

IL_0065:
	{
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_0082;
		}
	}
	{
		goto IL_0098;
	}

IL_006c:
	{
		// message = "NativeNFC: " + message;
		String_t* L_21 = ___message0;
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6CAE747681C1E9CC4D79E714B44A576724D270D8, L_21, NULL);
		___message0 = L_22;
		// Debug.Log(message);
		String_t* L_23 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
		// return;
		goto IL_00a7;
	}

IL_0082:
	{
		// message = "NativeNFC: " + message;
		String_t* L_24 = ___message0;
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6CAE747681C1E9CC4D79E714B44A576724D270D8, L_24, NULL);
		___message0 = L_25;
		// Debug.LogError(message);
		String_t* L_26 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_26, NULL);
		// return;
		goto IL_00a7;
	}

IL_0098:
	{
	}

IL_0099:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009e:
	{
		// foreach (AndroidMessagePrefix prefix in (AndroidMessagePrefix[])Enum.GetValues(typeof(AndroidMessagePrefix))) {
		int32_t L_28 = V_1;
		AndroidMessagePrefixU5BU5D_tBD753C7A7F37C3C2AD076F8680CDE681725DE421* L_29 = V_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001e;
		}
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void NativeBLE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE__ctor_m2948183A5FDFA6BD06F37577AFE74E402BA0F438 (NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NativeBLE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBLE__cctor_mCB462C976056D2CFAC36C47887CE334B4983CC4E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF60E807469E4751538C9F32DEA95061F21E6A4EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static bool available = false;
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___available_4 = (bool)0;
		// static List<BtleDevice> foundDevices = new List<BtleDevice>();
		List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02* L_0 = (List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02*)il2cpp_codegen_object_new(List_1_t6A17D1DB637D9F58E73549DA896A954C154FDE02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF60E807469E4751538C9F32DEA95061F21E6A4EF(L_0, List_1__ctor_mF60E807469E4751538C9F32DEA95061F21E6A4EF_RuntimeMethod_var);
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___foundDevices_7), (void*)L_0);
		// static ConnectedDevice currentDevice = null;
		((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8 = (ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_StaticFields*)il2cpp_codegen_static_fields_for(NativeBLE_tC68B5EE3309F842B67EE27BFE164F87F7453CB93_il2cpp_TypeInfo_var))->___currentDevice_8), (void*)(ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5*)NULL);
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
// System.Boolean NativeBLE/BtleDevice::Equals(NativeBLE/BtleDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BtleDevice_Equals_m61CCB5F0B6053F5DA6B2C9862A33D06BF209EBF2 (BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return address == other.address;
		String_t* L_0 = __this->___address_0;
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___address_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String NativeBLE/BtleDevice::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BtleDevice_ToString_m52D397A52850D6A1A116CD73389A203F9EF7182D (BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return name + " : " + address + "\n";
		String_t* L_0 = __this->___name_1;
		String_t* L_1 = __this->___address_0;
		String_t* L_2;
		L_2 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_0, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void NativeBLE/BtleDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BtleDevice__ctor_mFE5A64EA2D37D9D64FFFBAF3C8681650E689AE38 (BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String NativeBLE/ConnectedDevice::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectedDevice_ToString_mE476F7701C00EC64EB15C6AAF16502CC294569EE (ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral276565662846912BD6C311C6C7B732FC149F12D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABDB69945EA24DB610930EB823D5354B7800B964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2746AB0D1EA91843B34A867C7C10F41AD4DE376);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		// string s = deviceInfo.ToString();
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_0 = __this->___deviceInfo_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// s += "Services: " + services.Count + " Characteristics: " + characteristics.Count + "\n";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralB2746AB0D1EA91843B34A867C7C10F41AD4DE376);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB2746AB0D1EA91843B34A867C7C10F41AD4DE376);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___services_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_7, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral276565662846912BD6C311C6C7B732FC149F12D5);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral276565662846912BD6C311C6C7B732FC149F12D5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = __this->___characteristics_3;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_12, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_1 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_15, NULL);
		V_0 = L_16;
		// for (int i = 0; i < services.Count; i++) {
		V_2 = 0;
		goto IL_00ad;
	}

IL_0065:
	{
		// s += "### - " + services[i] + "\n";
		String_t* L_17 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = __this->___services_2;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_18, L_19, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_21;
		L_21 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_17, _stringLiteralABDB69945EA24DB610930EB823D5354B7800B964, L_20, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_21;
		// if (characteristics.Count > i) s += characteristics[i];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = __this->___characteristics_3;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_22, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_24 = V_2;
		V_3 = (bool)((((int32_t)L_23) > ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		// if (characteristics.Count > i) s += characteristics[i];
		String_t* L_26 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = __this->___characteristics_3;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_27, L_28, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_30;
		L_30 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_26, L_29, NULL);
		V_0 = L_30;
	}

IL_00a8:
	{
		// for (int i = 0; i < services.Count; i++) {
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < services.Count; i++) {
		int32_t L_32 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_33 = __this->___services_2;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_33, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_4;
		if (L_35)
		{
			goto IL_0065;
		}
	}
	{
		// return s;
		String_t* L_36 = V_0;
		V_5 = L_36;
		goto IL_00c6;
	}

IL_00c6:
	{
		// }
		String_t* L_37 = V_5;
		return L_37;
	}
}
// System.Void NativeBLE/ConnectedDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedDevice__ctor_m8D1515A40D295B5737042DA863D09435DCF67D14 (ConnectedDevice_t33AF86D5679FFF4ECFF928947549B71258CD21E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int state = 0;
		__this->___state_1 = 0;
		// public List<string> services = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___services_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___services_2), (void*)L_0);
		// public List<string> characteristics = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___characteristics_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characteristics_3), (void*)L_1);
		// public int mtu = 0;
		__this->___mtu_4 = 0;
		// public int txPhy = 0;
		__this->___txPhy_5 = 0;
		// public int rxPhy = 0;
		__this->___rxPhy_6 = 0;
		// public int rssi = 0;
		__this->___rssi_7 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UpdateAndroidLib::updateLib()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateAndroidLib_updateLib_m133580AAC72294313BE7F471A0A824F420D6E9D6 (UpdateAndroidLib_t2148D519B61D9123ABBCF1A39B2EDFC2598FA666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158F3A8EBA35F33F74D6EE2F0DE6901C6C4BB25B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8AA4E3066259B95A5279352AA72429493F119E3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		// string origin = libBuildPath + "/" + buildOutputName;
		String_t* L_0 = __this->___libBuildPath_5;
		String_t* L_1 = __this->___buildOutputName_4;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		V_0 = L_2;
		// string destination = localLibPath + "/" + buildOutputName;
		String_t* L_3 = __this->___localLibPath_6;
		String_t* L_4 = __this->___buildOutputName_4;
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_4, NULL);
		V_1 = L_5;
		// if (!File.Exists(origin)) {
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_6, NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogError("Android Lib build is missing at " + origin);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE8AA4E3066259B95A5279352AA72429493F119E3, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_10, NULL);
		// return;
		goto IL_0092;
	}

IL_0050:
	{
		// if (File.Exists(destination)) {
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_11, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// File.Delete(destination);
		String_t* L_14 = V_1;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_14, NULL);
		// string metaFile = Path.GetFileNameWithoutExtension(destination) + ".meta";
		String_t* L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_16, _stringLiteral158F3A8EBA35F33F74D6EE2F0DE6901C6C4BB25B, NULL);
		V_4 = L_17;
		// if (File.Exists(metaFile)) File.Delete(metaFile);
		String_t* L_18 = V_4;
		bool L_19;
		L_19 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_18, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		// if (File.Exists(metaFile)) File.Delete(metaFile);
		String_t* L_21 = V_4;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_21, NULL);
	}

IL_0089:
	{
	}

IL_008a:
	{
		// File.Copy(origin, destination);
		String_t* L_22 = V_0;
		String_t* L_23 = V_1;
		File_Copy_m68CDF30174466285011A5E8B320CAE02D7EF432C(L_22, L_23, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void UpdateAndroidLib::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateAndroidLib__ctor_m0A6EDD2FDD19F2B0B6DC2D3EB9CC8BB9753B1A27 (UpdateAndroidLib_t2148D519B61D9123ABBCF1A39B2EDFC2598FA666* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27E1E9940D161AD7BF05452F0737F4E0A73F9A9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AF7AA279E48CBE88058633418F5624BDA17A6C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral980E5B80F311F03C89986ADEC1B87B0E51D7B370);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string buildOutputName = "app-debug.aar";
		__this->___buildOutputName_4 = _stringLiteral980E5B80F311F03C89986ADEC1B87B0E51D7B370;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buildOutputName_4), (void*)_stringLiteral980E5B80F311F03C89986ADEC1B87B0E51D7B370);
		// public string libBuildPath = "C:/ZINC-The-Cyborg-Dashboard/NativeNFC/app/build/outputs/aar";
		__this->___libBuildPath_5 = _stringLiteral27E1E9940D161AD7BF05452F0737F4E0A73F9A9E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___libBuildPath_5), (void*)_stringLiteral27E1E9940D161AD7BF05452F0737F4E0A73F9A9E);
		// public string localLibPath = "Packages/com.azapps.native-nfc/Runtime/Android";
		__this->___localLibPath_6 = _stringLiteral7AF7AA279E48CBE88058633418F5624BDA17A6C0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localLibPath_6), (void*)_stringLiteral7AF7AA279E48CBE88058633418F5624BDA17A6C0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DeviceLine::set(NativeBLE/BtleDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceLine_set_mDFC8EDF332B9D7AC14971452751359E68750A2EA (DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* __this, BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CsetU3Eb__0_m751F10E9B91F4F11EA13E47AA394D2AF0DEDFA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* L_0 = (U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m2227082822D9858D1D68AFF9970EDE8F7B0DD6D4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* L_1 = V_0;
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_2 = ___device0;
		NullCheck(L_1);
		L_1->___device_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___device_0), (void*)L_2);
		// this.device = device;
		U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* L_3 = V_0;
		NullCheck(L_3);
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_4 = L_3->___device_0;
		__this->___device_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___device_6), (void*)L_4);
		// text.text = device.name + " - " + device.address;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___text_5;
		U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* L_6 = V_0;
		NullCheck(L_6);
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_7 = L_6->___device_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___name_1;
		U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* L_9 = V_0;
		NullCheck(L_9);
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_10 = L_9->___device_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___address_0;
		String_t* L_12;
		L_12 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_11, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_12);
		// button.onClick.AddListener(delegate {
		//     BikeManager.instance.connect(device);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___button_4;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_13, NULL);
		U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* L_15 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CsetU3Eb__0_m751F10E9B91F4F11EA13E47AA394D2AF0DEDFA1E_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Void DeviceLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceLine__ctor_m2FA3D847B099D6439256F84F643231857C8864A6 (DeviceLine_t8E7A1CE3752E9FC84FD221FDC573D538EB1251BF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DeviceLine/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2227082822D9858D1D68AFF9970EDE8F7B0DD6D4 (U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DeviceLine/<>c__DisplayClass3_0::<set>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CsetU3Eb__0_m751F10E9B91F4F11EA13E47AA394D2AF0DEDFA1E (U3CU3Ec__DisplayClass3_0_t0082FF6AD84259EA1E8596BE9CC4E9B04FA4E56F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BikeManager.instance.connect(device);
		BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D* L_0 = ((BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_StaticFields*)il2cpp_codegen_static_fields_for(BikeManager_tFCF82DDB0EF9D94BDBD97B797DC09DBDFAA7AD3D_il2cpp_TypeInfo_var))->___instance_4;
		BtleDevice_tD1B8EBB1833B35EC42449AD70D5A772B764DCF99* L_1 = __this->___device_0;
		NullCheck(L_0);
		BikeManager_connect_m2DC638E3939851F806D1F23F2E78BBC3338A3DFE(L_0, L_1, NULL);
		// });
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
