﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.ObjectModel.Collection`1<Mapbox.Json.Linq.JToken>
struct Collection_1_t698D920163F87A3C745FBAAB14B8265EED4C93A8;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Json.Linq.JToken>
struct Dictionary_2_t30150D65DBB7E0360410CCBC4896D7F46687DE18;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C;
// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<Mapbox.Json.Serialization.JsonProperty,System.Int32>
struct Func_2_t1C6806BF91D37E818D4EA33C4FFEFDD3FD11266D;
// System.Func`2<Mapbox.Json.Serialization.JsonProperty,Mapbox.Json.Serialization.JsonProperty>
struct Func_2_tB5FD7BFD0220997ECDE395308E1A4AEAD5CB3D26;
// System.Func`2<Mapbox.Json.Serialization.JsonProperty,System.String>
struct Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E;
// System.Func`2<Mapbox.Json.Serialization.JsonProperty,Mapbox.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_tE4B6D6ED9892A202DC9E9F8ADC4FFA1A6E0BDE76;
// System.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct Func_2_t7D30352C78352695FA12AEA57C26635DF9400618;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Linq.JToken>
struct IEnumerator_1_t80C3584B0C31D30CD59AC009C306AE5E70D92439;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Mapbox.Json.Linq.JToken>
struct IList_1_t28A8FF7238985BC62F746AB912032644CA6A9DAF;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t52E4CE6A2808933DF561E8BD1A816878E4ED6EF1;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7;
// Mapbox.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Mapbox.Json.Linq.JToken[]
struct JTokenU5BU5D_t1719B285767938769159618B57356CD420595D0E;
// Mapbox.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC;
// Mapbox.Json.Serialization.ErrorContext
struct ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Mapbox.Json.Serialization.IAttributeProvider
struct IAttributeProvider_tF9E678B5F2AD92271FE874B3A431FDB09CA78A8B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Mapbox.Json.Serialization.IValueProvider
struct IValueProvider_t2DE75F9B11D99092F969AFD4B4C6328C517774F8;
// Mapbox.Json.Linq.JContainer
struct JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF;
// Mapbox.Json.Linq.JObject
struct JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9;
// Mapbox.Json.Linq.JProperty
struct JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977;
// Mapbox.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D;
// Mapbox.Json.Linq.JToken
struct JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E;
// Mapbox.Json.Serialization.JsonContract
struct JsonContract_tB8AE13E8A3DF94A11B22021098AF5840972170BB;
// Mapbox.Json.JsonConverter
struct JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658;
// Mapbox.Json.JsonException
struct JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E;
// Mapbox.Json.Serialization.JsonProperty
struct JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289;
// Mapbox.Json.JsonSerializationException
struct JsonSerializationException_tB0F33B3ECD88F4270825B34D2A569CBB68150789;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mapbox.Json.Serialization.NamingStrategy
struct NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Mapbox.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t202474BE1B3127BAD9B979C1A1079CE1BEF3025C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c
struct U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tC66C5CF320F83C6F5A4D392451377064842534C3;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1
struct U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_2
struct U3CU3Ec__DisplayClass33_2_t5061E14A934453867FA6BF0853EBE73BBD0532AC;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tAE1B2CDF55F78E68EB58B3BB9791DC4C7EE37851;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_tCD6BD21BB8DB6F347075A17C4037B2C22B358A4D;
// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_tCFEF6E7B92500F76CE010E043021CFC94A17DAB3;
// Mapbox.Json.Utilities.EnumUtils/<>c
struct U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3;
// Mapbox.Json.Linq.JObject/<GetEnumerator>d__55
struct U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331;
// Mapbox.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78;
// Mapbox.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_t88AAF04DC5F01948E54CADA0AC2B7037084BB1AC;
// Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t30B73B9E4D8C27B362A883257DC66C45ABDA488E;
// Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t7B814800836EF5A1216B7DCC8A074593C37E91DD;
// Mapbox.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t72B62790D7B61622CBAB790A0C8B328CAA3A1838;
// Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133;
// Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t1456F7B4D6B38EDD533F45F377F3D9984C31BFFD;
// Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D;
// Mapbox.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B;
// Mapbox.Json.Serialization.JsonTypeReflector/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t5819EA4DF12335755CEB83D40156C428A4510D65;
// Mapbox.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t881CA8384B5B697B1EB58301B8444C73A446A9A8;
// Mapbox.Json.Utilities.PropertyNameTable/Entry
struct Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F;
// Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t26D5643A4AFC1DD04B5B47FBDA42A28A2AAA83BF;
// Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_tC6A8405F5CDC42300EEEC4E846A93F3725727507;
// Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t4A4CE241A27A11AE24E6DC4A2C9FF6DE469381C1;
// Mapbox.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239;
// Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163;
// Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_1
struct U3CU3Ec__DisplayClass43_1_tCB1D9624245D943667B2106471E2C9EAACC34614;
// Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_tB24370DFA23346392ECDE904D6C66B93043DC79D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t80C3584B0C31D30CD59AC009C306AE5E70D92439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_tB0F33B3ECD88F4270825B34D2A569CBB68150789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_tCFB10280705A84265AA81DB62D82C1077B56E4F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral23B435163284C2F25AE5E84212B0650024F0760B;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957;
IL2CPP_EXTERN_C String_t* _stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442;
IL2CPP_EXTERN_C String_t* _stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7;
IL2CPP_EXTERN_C String_t* _stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m772CD51D86931FCD742810D0BB192596AB8B2B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_m57B78281C09276BD6A56C535E552BB62F592B6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m05C64D91D8BB7ADDD6955763E4497A74599BA0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m0EF54668C6553DA6794BD8B64096B88C0484680B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_mE5CA22D9A20FA44FC9AE651A2E68A1E79D6E7ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCreatorU3Eb__21_1_m4D7589366AEF3EB4F2341EB71E530591CAEEF529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__32_1_mB8A21991C88910A21541286A593A57D29ACAE38E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CGetCreatorU3Eb__0_mF67C6D97F56B4AAC9630E1DF297051BF4DA136A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_1_U3CSetExtensionDataDelegatesU3Eb__0_m33DCBAD45335BD203CB13902971F9A5B6E89B4D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonConstructorAttribute_tC9191EB2FEC01110F1E24CAF7A80A5BF7D9C7E65_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonExtensionDataAttribute_t37DB563985989488D8D1E5892070C7AD2794DC8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct JTokenU5BU5D_t1719B285767938769159618B57356CD420595D0E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.ObjectModel.Collection`1<Mapbox.Json.Linq.JToken>
struct Collection_1_t698D920163F87A3C745FBAAB14B8265EED4C93A8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t698D920163F87A3C745FBAAB14B8265EED4C93A8, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t698D920163F87A3C745FBAAB14B8265EED4C93A8, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____items_1)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields, ____emptyArray_5)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Mapbox.Json.Serialization.ErrorContext
struct ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89  : public RuntimeObject
{
public:
	// System.Boolean Mapbox.Json.Serialization.ErrorContext::<Traced>k__BackingField
	bool ___U3CTracedU3Ek__BackingField_0;
	// System.Exception Mapbox.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t * ___U3CErrorU3Ek__BackingField_1;
	// System.Object Mapbox.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	RuntimeObject * ___U3COriginalObjectU3Ek__BackingField_2;
	// System.Object Mapbox.Json.Serialization.ErrorContext::<Member>k__BackingField
	RuntimeObject * ___U3CMemberU3Ek__BackingField_3;
	// System.String Mapbox.Json.Serialization.ErrorContext::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_4;
	// System.Boolean Mapbox.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTracedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89, ___U3CTracedU3Ek__BackingField_0)); }
	inline bool get_U3CTracedU3Ek__BackingField_0() const { return ___U3CTracedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTracedU3Ek__BackingField_0() { return &___U3CTracedU3Ek__BackingField_0; }
	inline void set_U3CTracedU3Ek__BackingField_0(bool value)
	{
		___U3CTracedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89, ___U3CErrorU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89, ___U3COriginalObjectU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3COriginalObjectU3Ek__BackingField_2() const { return ___U3COriginalObjectU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_2() { return &___U3COriginalObjectU3Ek__BackingField_2; }
	inline void set_U3COriginalObjectU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89, ___U3CMemberU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CMemberU3Ek__BackingField_3() const { return ___U3CMemberU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CMemberU3Ek__BackingField_3() { return &___U3CMemberU3Ek__BackingField_3; }
	inline void set_U3CMemberU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CMemberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89, ___U3CPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CPathU3Ek__BackingField_4() const { return ___U3CPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_4() { return &___U3CPathU3Ek__BackingField_4; }
	inline void set_U3CPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89, ___U3CHandledU3Ek__BackingField_5)); }
	inline bool get_U3CHandledU3Ek__BackingField_5() const { return ___U3CHandledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_5() { return &___U3CHandledU3Ek__BackingField_5; }
	inline void set_U3CHandledU3Ek__BackingField_5(bool value)
	{
		___U3CHandledU3Ek__BackingField_5 = value;
	}
};


// Mapbox.Json.Linq.JToken
struct JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E  : public RuntimeObject
{
public:
	// Mapbox.Json.Linq.JContainer Mapbox.Json.Linq.JToken::_parent
	JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF * ____parent_0;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JToken::_previous
	JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ____previous_1;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JToken::_next
	JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ____next_2;
	// System.Object Mapbox.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E, ____parent_0)); }
	inline JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF * get__parent_0() const { return ____parent_0; }
	inline JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E, ____previous_1)); }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * get__previous_1() const { return ____previous_1; }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E, ____next_2)); }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * get__next_2() const { return ____next_2; }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields
{
public:
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___BooleanTypes_4;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___NumberTypes_5;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___StringTypes_6;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___GuidTypes_7;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___TimeSpanTypes_8;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___UriTypes_9;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___CharTypes_10;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___DateTimeTypes_11;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t5074893262B0705DB859167FBCEE6B05EB40F376* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_12), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Mapbox.Json.Serialization.NamingStrategy
struct NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6  : public RuntimeObject
{
public:
	// System.Boolean Mapbox.Json.Serialization.NamingStrategy::<ProcessDictionaryKeys>k__BackingField
	bool ___U3CProcessDictionaryKeysU3Ek__BackingField_0;
	// System.Boolean Mapbox.Json.Serialization.NamingStrategy::<ProcessExtensionDataNames>k__BackingField
	bool ___U3CProcessExtensionDataNamesU3Ek__BackingField_1;
	// System.Boolean Mapbox.Json.Serialization.NamingStrategy::<OverrideSpecifiedNames>k__BackingField
	bool ___U3COverrideSpecifiedNamesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CProcessDictionaryKeysU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6, ___U3CProcessDictionaryKeysU3Ek__BackingField_0)); }
	inline bool get_U3CProcessDictionaryKeysU3Ek__BackingField_0() const { return ___U3CProcessDictionaryKeysU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CProcessDictionaryKeysU3Ek__BackingField_0() { return &___U3CProcessDictionaryKeysU3Ek__BackingField_0; }
	inline void set_U3CProcessDictionaryKeysU3Ek__BackingField_0(bool value)
	{
		___U3CProcessDictionaryKeysU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CProcessExtensionDataNamesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6, ___U3CProcessExtensionDataNamesU3Ek__BackingField_1)); }
	inline bool get_U3CProcessExtensionDataNamesU3Ek__BackingField_1() const { return ___U3CProcessExtensionDataNamesU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CProcessExtensionDataNamesU3Ek__BackingField_1() { return &___U3CProcessExtensionDataNamesU3Ek__BackingField_1; }
	inline void set_U3CProcessExtensionDataNamesU3Ek__BackingField_1(bool value)
	{
		___U3CProcessExtensionDataNamesU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COverrideSpecifiedNamesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6, ___U3COverrideSpecifiedNamesU3Ek__BackingField_2)); }
	inline bool get_U3COverrideSpecifiedNamesU3Ek__BackingField_2() const { return ___U3COverrideSpecifiedNamesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3COverrideSpecifiedNamesU3Ek__BackingField_2() { return &___U3COverrideSpecifiedNamesU3Ek__BackingField_2; }
	inline void set_U3COverrideSpecifiedNamesU3Ek__BackingField_2(bool value)
	{
		___U3COverrideSpecifiedNamesU3Ek__BackingField_2 = value;
	}
};


// Mapbox.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t202474BE1B3127BAD9B979C1A1079CE1BEF3025C  : public RuntimeObject
{
public:

public:
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

// Mapbox.Json.Serialization.DefaultContractResolver/<>c
struct U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields
{
public:
	// Mapbox.Json.Serialization.DefaultContractResolver/<>c Mapbox.Json.Serialization.DefaultContractResolver/<>c::<>9
	U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Mapbox.Json.Serialization.DefaultContractResolver/<>c::<>9__29_0
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__29_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Mapbox.Json.Serialization.DefaultContractResolver/<>c::<>9__29_1
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__29_1_2;
	// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>> Mapbox.Json.Serialization.DefaultContractResolver/<>c::<>9__32_0
	Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * ___U3CU3E9__32_0_3;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Mapbox.Json.Serialization.DefaultContractResolver/<>c::<>9__32_1
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__32_1_4;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Mapbox.Json.Serialization.DefaultContractResolver/<>c::<>9__35_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__35_0_5;
	// System.Func`2<Mapbox.Json.Serialization.JsonProperty,System.Int32> Mapbox.Json.Serialization.DefaultContractResolver/<>c::<>9__59_0
	Func_2_t1C6806BF91D37E818D4EA33C4FFEFDD3FD11266D * ___U3CU3E9__59_0_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields, ___U3CU3E9__29_1_2)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__29_1_2() const { return ___U3CU3E9__29_1_2; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__29_1_2() { return &___U3CU3E9__29_1_2; }
	inline void set_U3CU3E9__29_1_2(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__29_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields, ___U3CU3E9__32_0_3)); }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * get_U3CU3E9__32_0_3() const { return ___U3CU3E9__32_0_3; }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 ** get_address_of_U3CU3E9__32_0_3() { return &___U3CU3E9__32_0_3; }
	inline void set_U3CU3E9__32_0_3(Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * value)
	{
		___U3CU3E9__32_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields, ___U3CU3E9__32_1_4)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__32_1_4() const { return ___U3CU3E9__32_1_4; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__32_1_4() { return &___U3CU3E9__32_1_4; }
	inline void set_U3CU3E9__32_1_4(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__32_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields, ___U3CU3E9__35_0_5)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__35_0_5() const { return ___U3CU3E9__35_0_5; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__35_0_5() { return &___U3CU3E9__35_0_5; }
	inline void set_U3CU3E9__35_0_5(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__35_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__59_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields, ___U3CU3E9__59_0_6)); }
	inline Func_2_t1C6806BF91D37E818D4EA33C4FFEFDD3FD11266D * get_U3CU3E9__59_0_6() const { return ___U3CU3E9__59_0_6; }
	inline Func_2_t1C6806BF91D37E818D4EA33C4FFEFDD3FD11266D ** get_address_of_U3CU3E9__59_0_6() { return &___U3CU3E9__59_0_6; }
	inline void set_U3CU3E9__59_0_6(Func_2_t1C6806BF91D37E818D4EA33C4FFEFDD3FD11266D * value)
	{
		___U3CU3E9__59_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__59_0_6), (void*)value);
	}
};


// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tC66C5CF320F83C6F5A4D392451377064842534C3  : public RuntimeObject
{
public:
	// Mapbox.Json.Serialization.NamingStrategy Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass31_0::namingStrategy
	NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * ___namingStrategy_0;

public:
	inline static int32_t get_offset_of_namingStrategy_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_tC66C5CF320F83C6F5A4D392451377064842534C3, ___namingStrategy_0)); }
	inline NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * get_namingStrategy_0() const { return ___namingStrategy_0; }
	inline NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 ** get_address_of_namingStrategy_0() { return &___namingStrategy_0; }
	inline void set_namingStrategy_0(NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * value)
	{
		___namingStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namingStrategy_0), (void*)value);
	}
};


// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1  : public RuntimeObject
{
public:
	// System.Func`2<System.Object,System.Object> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_0::getExtensionDataDictionary
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___getExtensionDataDictionary_0;
	// System.Reflection.MemberInfo Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_0::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_getExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1, ___getExtensionDataDictionary_0)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_getExtensionDataDictionary_0() const { return ___getExtensionDataDictionary_0; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_getExtensionDataDictionary_0() { return &___getExtensionDataDictionary_0; }
	inline void set_getExtensionDataDictionary_0(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___getExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___member_1), (void*)value);
	}
};


// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1
struct U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1  : public RuntimeObject
{
public:
	// System.Action`2<System.Object,System.Object> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1::setExtensionDataDictionary
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___setExtensionDataDictionary_0;
	// System.Func`1<System.Object> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1::createExtensionDataDictionary
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___createExtensionDataDictionary_1;
	// Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1::setExtensionDataDictionaryValue
	MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * ___setExtensionDataDictionaryValue_2;
	// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_0 Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * ___CSU24U3CU3E8__locals1_3;

public:
	inline static int32_t get_offset_of_setExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1, ___setExtensionDataDictionary_0)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_setExtensionDataDictionary_0() const { return ___setExtensionDataDictionary_0; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_setExtensionDataDictionary_0() { return &___setExtensionDataDictionary_0; }
	inline void set_setExtensionDataDictionary_0(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___setExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_createExtensionDataDictionary_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1, ___createExtensionDataDictionary_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_createExtensionDataDictionary_1() const { return ___createExtensionDataDictionary_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_createExtensionDataDictionary_1() { return &___createExtensionDataDictionary_1; }
	inline void set_createExtensionDataDictionary_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___createExtensionDataDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createExtensionDataDictionary_1), (void*)value);
	}

	inline static int32_t get_offset_of_setExtensionDataDictionaryValue_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1, ___setExtensionDataDictionaryValue_2)); }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * get_setExtensionDataDictionaryValue_2() const { return ___setExtensionDataDictionaryValue_2; }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 ** get_address_of_setExtensionDataDictionaryValue_2() { return &___setExtensionDataDictionaryValue_2; }
	inline void set_setExtensionDataDictionaryValue_2(MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * value)
	{
		___setExtensionDataDictionaryValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionaryValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1, ___CSU24U3CU3E8__locals1_3)); }
	inline U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * get_CSU24U3CU3E8__locals1_3() const { return ___CSU24U3CU3E8__locals1_3; }
	inline U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 ** get_address_of_CSU24U3CU3E8__locals1_3() { return &___CSU24U3CU3E8__locals1_3; }
	inline void set_CSU24U3CU3E8__locals1_3(U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * value)
	{
		___CSU24U3CU3E8__locals1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_3), (void*)value);
	}
};


// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_2
struct U3CU3Ec__DisplayClass33_2_t5061E14A934453867FA6BF0853EBE73BBD0532AC  : public RuntimeObject
{
public:
	// Mapbox.Json.Serialization.ObjectConstructor`1<System.Object> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_2::createEnumerableWrapper
	ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * ___createEnumerableWrapper_0;
	// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_0 Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * ___CSU24U3CU3E8__locals2_1;

public:
	inline static int32_t get_offset_of_createEnumerableWrapper_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_2_t5061E14A934453867FA6BF0853EBE73BBD0532AC, ___createEnumerableWrapper_0)); }
	inline ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * get_createEnumerableWrapper_0() const { return ___createEnumerableWrapper_0; }
	inline ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 ** get_address_of_createEnumerableWrapper_0() { return &___createEnumerableWrapper_0; }
	inline void set_createEnumerableWrapper_0(ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * value)
	{
		___createEnumerableWrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createEnumerableWrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_2_t5061E14A934453867FA6BF0853EBE73BBD0532AC, ___CSU24U3CU3E8__locals2_1)); }
	inline U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * get_CSU24U3CU3E8__locals2_1() const { return ___CSU24U3CU3E8__locals2_1; }
	inline U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 ** get_address_of_CSU24U3CU3E8__locals2_1() { return &___CSU24U3CU3E8__locals2_1; }
	inline void set_CSU24U3CU3E8__locals2_1(U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * value)
	{
		___CSU24U3CU3E8__locals2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals2_1), (void*)value);
	}
};


// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tAE1B2CDF55F78E68EB58B3BB9791DC4C7EE37851  : public RuntimeObject
{
public:
	// Mapbox.Json.Serialization.NamingStrategy Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass47_0::namingStrategy
	NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * ___namingStrategy_0;

public:
	inline static int32_t get_offset_of_namingStrategy_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_tAE1B2CDF55F78E68EB58B3BB9791DC4C7EE37851, ___namingStrategy_0)); }
	inline NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * get_namingStrategy_0() const { return ___namingStrategy_0; }
	inline NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 ** get_address_of_namingStrategy_0() { return &___namingStrategy_0; }
	inline void set_namingStrategy_0(NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * value)
	{
		___namingStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namingStrategy_0), (void*)value);
	}
};


// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_tCD6BD21BB8DB6F347075A17C4037B2C22B358A4D  : public RuntimeObject
{
public:
	// Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0::shouldSerializeCall
	MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * ___shouldSerializeCall_0;

public:
	inline static int32_t get_offset_of_shouldSerializeCall_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_tCD6BD21BB8DB6F347075A17C4037B2C22B358A4D, ___shouldSerializeCall_0)); }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * get_shouldSerializeCall_0() const { return ___shouldSerializeCall_0; }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 ** get_address_of_shouldSerializeCall_0() { return &___shouldSerializeCall_0; }
	inline void set_shouldSerializeCall_0(MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * value)
	{
		___shouldSerializeCall_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shouldSerializeCall_0), (void*)value);
	}
};


// Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_tCFEF6E7B92500F76CE010E043021CFC94A17DAB3  : public RuntimeObject
{
public:
	// System.Func`2<System.Object,System.Object> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0::specifiedPropertyGet
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___specifiedPropertyGet_0;

public:
	inline static int32_t get_offset_of_specifiedPropertyGet_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_0_tCFEF6E7B92500F76CE010E043021CFC94A17DAB3, ___specifiedPropertyGet_0)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_specifiedPropertyGet_0() const { return ___specifiedPropertyGet_0; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_specifiedPropertyGet_0() { return &___specifiedPropertyGet_0; }
	inline void set_specifiedPropertyGet_0(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___specifiedPropertyGet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specifiedPropertyGet_0), (void*)value);
	}
};


// Mapbox.Json.Utilities.EnumUtils/<>c
struct U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_StaticFields
{
public:
	// Mapbox.Json.Utilities.EnumUtils/<>c Mapbox.Json.Utilities.EnumUtils/<>c::<>9
	U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 * ___U3CU3E9_0;
	// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> Mapbox.Json.Utilities.EnumUtils/<>c::<>9__1_0
	Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// Mapbox.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78  : public RuntimeObject
{
public:
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JProperty/JPropertyList::_token
	JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78, ____token_0)); }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * get__token_0() const { return ____token_0; }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Mapbox.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_t88AAF04DC5F01948E54CADA0AC2B7037084BB1AC  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Json.Linq.JToken/LineInfoAnnotation::LineNumber
	int32_t ___LineNumber_0;
	// System.Int32 Mapbox.Json.Linq.JToken/LineInfoAnnotation::LinePosition
	int32_t ___LinePosition_1;

public:
	inline static int32_t get_offset_of_LineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t88AAF04DC5F01948E54CADA0AC2B7037084BB1AC, ___LineNumber_0)); }
	inline int32_t get_LineNumber_0() const { return ___LineNumber_0; }
	inline int32_t* get_address_of_LineNumber_0() { return &___LineNumber_0; }
	inline void set_LineNumber_0(int32_t value)
	{
		___LineNumber_0 = value;
	}

	inline static int32_t get_offset_of_LinePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t88AAF04DC5F01948E54CADA0AC2B7037084BB1AC, ___LinePosition_1)); }
	inline int32_t get_LinePosition_1() const { return ___LinePosition_1; }
	inline int32_t* get_address_of_LinePosition_1() { return &___LinePosition_1; }
	inline void set_LinePosition_1(int32_t value)
	{
		___LinePosition_1 = value;
	}
};


// Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t30B73B9E4D8C27B362A883257DC66C45ABDA488E  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass58_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t30B73B9E4D8C27B362A883257DC66C45ABDA488E, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t7B814800836EF5A1216B7DCC8A074593C37E91DD  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass59_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t7B814800836EF5A1216B7DCC8A074593C37E91DD, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Mapbox.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t72B62790D7B61622CBAB790A0C8B328CAA3A1838  : public RuntimeObject
{
public:

public:
};


// Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_StaticFields
{
public:
	// Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<>9
	U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * ___U3CU3E9_0;
	// System.Func`2<Mapbox.Json.Serialization.JsonProperty,System.String> Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__36_0
	Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E * ___U3CU3E9__36_0_1;
	// System.Func`2<Mapbox.Json.Serialization.JsonProperty,System.String> Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__36_2
	Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E * ___U3CU3E9__36_2_2;
	// System.Func`2<Mapbox.Json.Serialization.JsonProperty,Mapbox.Json.Serialization.JsonProperty> Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__41_0
	Func_2_tB5FD7BFD0220997ECDE395308E1A4AEAD5CB3D26 * ___U3CU3E9__41_0_3;
	// System.Func`2<Mapbox.Json.Serialization.JsonProperty,Mapbox.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__41_1
	Func_2_tE4B6D6ED9892A202DC9E9F8ADC4FFA1A6E0BDE76 * ___U3CU3E9__41_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_StaticFields, ___U3CU3E9__36_0_1)); }
	inline Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E * get_U3CU3E9__36_0_1() const { return ___U3CU3E9__36_0_1; }
	inline Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E ** get_address_of_U3CU3E9__36_0_1() { return &___U3CU3E9__36_0_1; }
	inline void set_U3CU3E9__36_0_1(Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E * value)
	{
		___U3CU3E9__36_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_StaticFields, ___U3CU3E9__36_2_2)); }
	inline Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E * get_U3CU3E9__36_2_2() const { return ___U3CU3E9__36_2_2; }
	inline Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E ** get_address_of_U3CU3E9__36_2_2() { return &___U3CU3E9__36_2_2; }
	inline void set_U3CU3E9__36_2_2(Func_2_tE91A51033824F921A664A21B41D7266EEC9FAF9E * value)
	{
		___U3CU3E9__36_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_StaticFields, ___U3CU3E9__41_0_3)); }
	inline Func_2_tB5FD7BFD0220997ECDE395308E1A4AEAD5CB3D26 * get_U3CU3E9__41_0_3() const { return ___U3CU3E9__41_0_3; }
	inline Func_2_tB5FD7BFD0220997ECDE395308E1A4AEAD5CB3D26 ** get_address_of_U3CU3E9__41_0_3() { return &___U3CU3E9__41_0_3; }
	inline void set_U3CU3E9__41_0_3(Func_2_tB5FD7BFD0220997ECDE395308E1A4AEAD5CB3D26 * value)
	{
		___U3CU3E9__41_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_StaticFields, ___U3CU3E9__41_1_4)); }
	inline Func_2_tE4B6D6ED9892A202DC9E9F8ADC4FFA1A6E0BDE76 * get_U3CU3E9__41_1_4() const { return ___U3CU3E9__41_1_4; }
	inline Func_2_tE4B6D6ED9892A202DC9E9F8ADC4FFA1A6E0BDE76 ** get_address_of_U3CU3E9__41_1_4() { return &___U3CU3E9__41_1_4; }
	inline void set_U3CU3E9__41_1_4(Func_2_tE4B6D6ED9892A202DC9E9F8ADC4FFA1A6E0BDE76 * value)
	{
		___U3CU3E9__41_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_1_4), (void*)value);
	}
};


// Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t1456F7B4D6B38EDD533F45F377F3D9984C31BFFD  : public RuntimeObject
{
public:
	// Mapbox.Json.Serialization.JsonProperty Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0::property
	JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___property_0;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t1456F7B4D6B38EDD533F45F377F3D9984C31BFFD, ___property_0)); }
	inline JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * get_property_0() const { return ___property_0; }
	inline JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_0), (void*)value);
	}
};


// Mapbox.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_StaticFields
{
public:
	// Mapbox.Json.Serialization.JsonTypeReflector/<>c Mapbox.Json.Serialization.JsonTypeReflector/<>c::<>9
	U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Type> Mapbox.Json.Serialization.JsonTypeReflector/<>c::<>9__21_1
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___U3CU3E9__21_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_StaticFields, ___U3CU3E9__21_1_1)); }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * get_U3CU3E9__21_1_1() const { return ___U3CU3E9__21_1_1; }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF ** get_address_of_U3CU3E9__21_1_1() { return &___U3CU3E9__21_1_1; }
	inline void set_U3CU3E9__21_1_1(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * value)
	{
		___U3CU3E9__21_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_1_1), (void*)value);
	}
};


// Mapbox.Json.Serialization.JsonTypeReflector/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t5819EA4DF12335755CEB83D40156C428A4510D65  : public RuntimeObject
{
public:
	// System.Type Mapbox.Json.Serialization.JsonTypeReflector/<>c__DisplayClass21_0::type
	Type_t * ___type_0;
	// System.Func`1<System.Object> Mapbox.Json.Serialization.JsonTypeReflector/<>c__DisplayClass21_0::defaultConstructor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___defaultConstructor_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t5819EA4DF12335755CEB83D40156C428A4510D65, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultConstructor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t5819EA4DF12335755CEB83D40156C428A4510D65, ___defaultConstructor_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_defaultConstructor_1() const { return ___defaultConstructor_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_defaultConstructor_1() { return &___defaultConstructor_1; }
	inline void set_defaultConstructor_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___defaultConstructor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultConstructor_1), (void*)value);
	}
};


// Mapbox.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t881CA8384B5B697B1EB58301B8444C73A446A9A8  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Mapbox.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::c
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c_0;
	// System.Reflection.MethodBase Mapbox.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t881CA8384B5B697B1EB58301B8444C73A446A9A8, ___c_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t881CA8384B5B697B1EB58301B8444C73A446A9A8, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Mapbox.Json.Utilities.PropertyNameTable/Entry
struct Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F  : public RuntimeObject
{
public:
	// System.String Mapbox.Json.Utilities.PropertyNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Mapbox.Json.Utilities.PropertyNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Mapbox.Json.Utilities.PropertyNameTable/Entry Mapbox.Json.Utilities.PropertyNameTable/Entry::Next
	Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F, ___Next_2)); }
	inline Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F * get_Next_2() const { return ___Next_2; }
	inline Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_2), (void*)value);
	}
};


// Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t26D5643A4AFC1DD04B5B47FBDA42A28A2AAA83BF  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::ctor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t26D5643A4AFC1DD04B5B47FBDA42A28A2AAA83BF, ___ctor_0)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctor_0), (void*)value);
	}
};


// Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_tC6A8405F5CDC42300EEEC4E846A93F3725727507  : public RuntimeObject
{
public:
	// Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object> Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::call
	MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_tC6A8405F5CDC42300EEEC4E846A93F3725727507, ___call_0)); }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t4A4CE241A27A11AE24E6DC4A2C9FF6DE469381C1  : public RuntimeObject
{
public:
	// Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object> Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::call
	MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_2_t4A4CE241A27A11AE24E6DC4A2C9FF6DE469381C1, ___call_0)); }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Mapbox.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_StaticFields
{
public:
	// Mapbox.Json.Utilities.ReflectionUtils/<>c Mapbox.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Mapbox.Json.Utilities.ReflectionUtils/<>c::<>9__11_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__11_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Mapbox.Json.Utilities.ReflectionUtils/<>c::<>9__30_0
	Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * ___U3CU3E9__30_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Mapbox.Json.Utilities.ReflectionUtils/<>c::<>9__38_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__38_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Mapbox.Json.Utilities.ReflectionUtils/<>c::<>9__40_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__40_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_StaticFields, ___U3CU3E9__30_0_2)); }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * get_U3CU3E9__30_0_2() const { return ___U3CU3E9__30_0_2; }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 ** get_address_of_U3CU3E9__30_0_2() { return &___U3CU3E9__30_0_2; }
	inline void set_U3CU3E9__30_0_2(Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * value)
	{
		___U3CU3E9__30_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_StaticFields, ___U3CU3E9__38_0_3)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__38_0_3() const { return ___U3CU3E9__38_0_3; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__38_0_3() { return &___U3CU3E9__38_0_3; }
	inline void set_U3CU3E9__38_0_3(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__38_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_StaticFields, ___U3CU3E9__40_0_4)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__40_0_4() const { return ___U3CU3E9__40_0_4; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__40_0_4() { return &___U3CU3E9__40_0_4; }
	inline void set_U3CU3E9__40_0_4(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__40_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_0_4), (void*)value);
	}
};


// Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypeProperty_0), (void*)value);
	}
};


// Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_1
struct U3CU3Ec__DisplayClass43_1_tCB1D9624245D943667B2106471E2C9EAACC34614  : public RuntimeObject
{
public:
	// System.Type Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_1::subTypePropertyDeclaringType
	Type_t * ___subTypePropertyDeclaringType_0;
	// Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0 Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_subTypePropertyDeclaringType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_1_tCB1D9624245D943667B2106471E2C9EAACC34614, ___subTypePropertyDeclaringType_0)); }
	inline Type_t * get_subTypePropertyDeclaringType_0() const { return ___subTypePropertyDeclaringType_0; }
	inline Type_t ** get_address_of_subTypePropertyDeclaringType_0() { return &___subTypePropertyDeclaringType_0; }
	inline void set_subTypePropertyDeclaringType_0(Type_t * value)
	{
		___subTypePropertyDeclaringType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypePropertyDeclaringType_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_1_tCB1D9624245D943667B2106471E2C9EAACC34614, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___U3CU3E2__current_1;
	// Mapbox.Json.Linq.JProperty/JPropertyList Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359, ___U3CU3E2__current_1)); }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359, ___U3CU3E4__this_2)); }
	inline JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Json.Linq.JToken>
struct KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6, ___value_1)); }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * get_value_1() const { return ___value_1; }
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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

// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// Mapbox.Json.Linq.JContainer
struct JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF  : public JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E
{
public:
	// System.Object Mapbox.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_13;

public:
	inline static int32_t get_offset_of__syncRoot_13() { return static_cast<int32_t>(offsetof(JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF, ____syncRoot_13)); }
	inline RuntimeObject * get__syncRoot_13() const { return ____syncRoot_13; }
	inline RuntimeObject ** get_address_of__syncRoot_13() { return &____syncRoot_13; }
	inline void set__syncRoot_13(RuntimeObject * value)
	{
		____syncRoot_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_13), (void*)value);
	}
};


// Mapbox.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D  : public Collection_1_t698D920163F87A3C745FBAAB14B8265EED4C93A8
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JPropertyKeyedCollection::_dictionary
	Dictionary_2_t30150D65DBB7E0360410CCBC4896D7F46687DE18 * ____dictionary_3;

public:
	inline static int32_t get_offset_of__dictionary_3() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D, ____dictionary_3)); }
	inline Dictionary_2_t30150D65DBB7E0360410CCBC4896D7F46687DE18 * get__dictionary_3() const { return ____dictionary_3; }
	inline Dictionary_2_t30150D65DBB7E0360410CCBC4896D7F46687DE18 ** get_address_of__dictionary_3() { return &____dictionary_3; }
	inline void set__dictionary_3(Dictionary_2_t30150D65DBB7E0360410CCBC4896D7F46687DE18 * value)
	{
		____dictionary_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_3), (void*)value);
	}
};

struct JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.String> Mapbox.Json.Linq.JPropertyKeyedCollection::Comparer
	RuntimeObject* ___Comparer_2;

public:
	inline static int32_t get_offset_of_Comparer_2() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D_StaticFields, ___Comparer_2)); }
	inline RuntimeObject* get_Comparer_2() const { return ___Comparer_2; }
	inline RuntimeObject** get_address_of_Comparer_2() { return &___Comparer_2; }
	inline void set_Comparer_2(RuntimeObject* value)
	{
		___Comparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Comparer_2), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 
{
public:
	// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initialType_0), (void*)value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetType_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// Mapbox.Json.DefaultValueHandling
struct DefaultValueHandling_t7532CC46F3C26FAEDBD302EDBC765DFC37FDAAE4 
{
public:
	// System.Int32 Mapbox.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t7532CC46F3C26FAEDBD302EDBC765DFC37FDAAE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Mapbox.Json.Linq.JObject
struct JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9  : public JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF
{
public:
	// Mapbox.Json.Linq.JPropertyKeyedCollection Mapbox.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D * ____properties_14;
	// System.ComponentModel.PropertyChangedEventHandler Mapbox.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_15;

public:
	inline static int32_t get_offset_of__properties_14() { return static_cast<int32_t>(offsetof(JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9, ____properties_14)); }
	inline JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D * get__properties_14() const { return ____properties_14; }
	inline JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D ** get_address_of__properties_14() { return &____properties_14; }
	inline void set__properties_14(JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D * value)
	{
		____properties_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_14), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_15() { return static_cast<int32_t>(offsetof(JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9, ___PropertyChanged_15)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_15() const { return ___PropertyChanged_15; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_15() { return &___PropertyChanged_15; }
	inline void set_PropertyChanged_15(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_15), (void*)value);
	}
};


// Mapbox.Json.Linq.JProperty
struct JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977  : public JContainer_tD32D15C8289B7C96C5C0D769FAD9B7ECCD9D14BF
{
public:
	// Mapbox.Json.Linq.JProperty/JPropertyList Mapbox.Json.Linq.JProperty::_content
	JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * ____content_14;
	// System.String Mapbox.Json.Linq.JProperty::_name
	String_t* ____name_15;

public:
	inline static int32_t get_offset_of__content_14() { return static_cast<int32_t>(offsetof(JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977, ____content_14)); }
	inline JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * get__content_14() const { return ____content_14; }
	inline JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 ** get_address_of__content_14() { return &____content_14; }
	inline void set__content_14(JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * value)
	{
		____content_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_14), (void*)value);
	}

	inline static int32_t get_offset_of__name_15() { return static_cast<int32_t>(offsetof(JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977, ____name_15)); }
	inline String_t* get__name_15() const { return ____name_15; }
	inline String_t** get_address_of__name_15() { return &____name_15; }
	inline void set__name_15(String_t* value)
	{
		____name_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_15), (void*)value);
	}
};


// System.Reflection.MemberTypes
struct MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// Mapbox.Json.NullValueHandling
struct NullValueHandling_tE1897339D12310F2B823E51EA319A83DBDB300F9 
{
public:
	// System.Int32 Mapbox.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_tE1897339D12310F2B823E51EA319A83DBDB300F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.ObjectCreationHandling
struct ObjectCreationHandling_t97E2CEE5F9C20867BDE8E52E95741D7FDFBD5717 
{
public:
	// System.Int32 Mapbox.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t97E2CEE5F9C20867BDE8E52E95741D7FDFBD5717, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t734FCE142306C00BD455D779AA490E53D9B48C76 
{
public:
	// System.Int32 Mapbox.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t734FCE142306C00BD455D779AA490E53D9B48C76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.Required
struct Required_t044EDC8F0E86F0B3FAD375A6A323EA1F990207E6 
{
public:
	// System.Int32 Mapbox.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_t044EDC8F0E86F0B3FAD375A6A323EA1F990207E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.TypeNameHandling
struct TypeNameHandling_t0EE321E8792EF94C6ABEE7E1E73F4F6406555A6A 
{
public:
	// System.Int32 Mapbox.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t0EE321E8792EF94C6ABEE7E1E73F4F6406555A6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.Linq.JObject/<GetEnumerator>d__55
struct U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::<>2__current
	KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  ___U3CU3E2__current_1;
	// Mapbox.Json.Linq.JObject Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::<>4__this
	JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9 * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::<>s__1
	RuntimeObject* ___U3CU3Es__1_3;
	// Mapbox.Json.Linq.JProperty Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::<property>5__2
	JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 * ___U3CpropertyU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331, ___U3CU3E4__this_2)); }
	inline JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331, ___U3CU3Es__1_3)); }
	inline RuntimeObject* get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline RuntimeObject** get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(RuntimeObject* value)
	{
		___U3CU3Es__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331, ___U3CpropertyU3E5__2_4)); }
	inline JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 * get_U3CpropertyU3E5__2_4() const { return ___U3CpropertyU3E5__2_4; }
	inline JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 ** get_address_of_U3CpropertyU3E5__2_4() { return &___U3CpropertyU3E5__2_4; }
	inline void set_U3CpropertyU3E5__2_4(JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 * value)
	{
		___U3CpropertyU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyU3E5__2_4), (void*)value);
	}
};


// Mapbox.Json.JsonReader/State
struct State_t7A56536FB68F78ED0FBBD045C6827D38A2DF314C 
{
public:
	// System.Int32 Mapbox.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t7A56536FB68F78ED0FBBD045C6827D38A2DF314C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.Serialization.JsonSerializerInternalReader/PropertyPresence
struct PropertyPresence_tBE0BC3C3B5CEA5BD2CD9855BF9BAD82D2CC632F3 
{
public:
	// System.Int32 Mapbox.Json.Serialization.JsonSerializerInternalReader/PropertyPresence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyPresence_tBE0BC3C3B5CEA5BD2CD9855BF9BAD82D2CC632F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Json.JsonWriter/State
struct State_tE227250929F61F758E5F13354A1E8797CEDCD470 
{
public:
	// System.Int32 Mapbox.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tE227250929F61F758E5F13354A1E8797CEDCD470, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Mapbox.Json.DefaultValueHandling>
struct Nullable_1_t111E97C92275C8F06047BF4C5C5D71DD8601B374 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t111E97C92275C8F06047BF4C5C5D71DD8601B374, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t111E97C92275C8F06047BF4C5C5D71DD8601B374, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Mapbox.Json.NullValueHandling>
struct Nullable_1_t3F6BD2853050BB9B855CDD55F01A906FC3C5AD65 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3F6BD2853050BB9B855CDD55F01A906FC3C5AD65, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3F6BD2853050BB9B855CDD55F01A906FC3C5AD65, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Mapbox.Json.ObjectCreationHandling>
struct Nullable_1_tE85E45E51BD47640D70FEB08A0AEC72302F5EE41 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE85E45E51BD47640D70FEB08A0AEC72302F5EE41, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE85E45E51BD47640D70FEB08A0AEC72302F5EE41, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Mapbox.Json.ReferenceLoopHandling>
struct Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Mapbox.Json.Required>
struct Nullable_1_tE7391F601C075601B9C4C76354D64DBAEEF4CACB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE7391F601C075601B9C4C76354D64DBAEEF4CACB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE7391F601C075601B9C4C76354D64DBAEEF4CACB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Mapbox.Json.TypeNameHandling>
struct Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Mapbox.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Nullable_1_t011D6449FFC5927743309B7E834F47F948A416D3 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t011D6449FFC5927743309B7E834F47F948A416D3, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t011D6449FFC5927743309B7E834F47F948A416D3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Mapbox.Json.JsonException
struct JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E  : public Exception_t
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

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF  : public MulticastDelegate_t
{
public:

public:
};


// Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7  : public MulticastDelegate_t
{
public:

public:
};


// Mapbox.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3  : public MulticastDelegate_t
{
public:

public:
};


// Mapbox.Json.Serialization.JsonProperty
struct JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289  : public RuntimeObject
{
public:
	// System.Nullable`1<Mapbox.Json.Required> Mapbox.Json.Serialization.JsonProperty::_required
	Nullable_1_tE7391F601C075601B9C4C76354D64DBAEEF4CACB  ____required_0;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Mapbox.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Mapbox.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Mapbox.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Mapbox.Json.Serialization.JsonContract Mapbox.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_tB8AE13E8A3DF94A11B22021098AF5840972170BB * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Mapbox.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Mapbox.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3COrderU3Ek__BackingField_9;
	// System.String Mapbox.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Mapbox.Json.Serialization.IValueProvider Mapbox.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Mapbox.Json.Serialization.IAttributeProvider Mapbox.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Mapbox.Json.JsonConverter Mapbox.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * ___U3CConverterU3Ek__BackingField_13;
	// Mapbox.Json.JsonConverter Mapbox.Json.Serialization.JsonProperty::<MemberConverter>k__BackingField
	JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * ___U3CMemberConverterU3Ek__BackingField_14;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_15;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_16;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_17;
	// System.Boolean Mapbox.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_18;
	// System.Nullable`1<System.Boolean> Mapbox.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsReferenceU3Ek__BackingField_19;
	// System.Nullable`1<Mapbox.Json.NullValueHandling> Mapbox.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_t3F6BD2853050BB9B855CDD55F01A906FC3C5AD65  ___U3CNullValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Mapbox.Json.DefaultValueHandling> Mapbox.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_t111E97C92275C8F06047BF4C5C5D71DD8601B374  ___U3CDefaultValueHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Mapbox.Json.ReferenceLoopHandling> Mapbox.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92  ___U3CReferenceLoopHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Mapbox.Json.ObjectCreationHandling> Mapbox.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_tE85E45E51BD47640D70FEB08A0AEC72302F5EE41  ___U3CObjectCreationHandlingU3Ek__BackingField_23;
	// System.Nullable`1<Mapbox.Json.TypeNameHandling> Mapbox.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F  ___U3CTypeNameHandlingU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Mapbox.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldSerializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Mapbox.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldDeserializeU3Ek__BackingField_26;
	// System.Predicate`1<System.Object> Mapbox.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CGetIsSpecifiedU3Ek__BackingField_27;
	// System.Action`2<System.Object,System.Object> Mapbox.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___U3CSetIsSpecifiedU3Ek__BackingField_28;
	// Mapbox.Json.JsonConverter Mapbox.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * ___U3CItemConverterU3Ek__BackingField_29;
	// System.Nullable`1<System.Boolean> Mapbox.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CItemIsReferenceU3Ek__BackingField_30;
	// System.Nullable`1<Mapbox.Json.TypeNameHandling> Mapbox.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F  ___U3CItemTypeNameHandlingU3Ek__BackingField_31;
	// System.Nullable`1<Mapbox.Json.ReferenceLoopHandling> Mapbox.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ____required_0)); }
	inline Nullable_1_tE7391F601C075601B9C4C76354D64DBAEEF4CACB  get__required_0() const { return ____required_0; }
	inline Nullable_1_tE7391F601C075601B9C4C76354D64DBAEEF4CACB * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_tE7391F601C075601B9C4C76354D64DBAEEF4CACB  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_tB8AE13E8A3DF94A11B22021098AF5840972170BB * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_tB8AE13E8A3DF94A11B22021098AF5840972170BB ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_tB8AE13E8A3DF94A11B22021098AF5840972170BB * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberConverterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CMemberConverterU3Ek__BackingField_14)); }
	inline JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * get_U3CMemberConverterU3Ek__BackingField_14() const { return ___U3CMemberConverterU3Ek__BackingField_14; }
	inline JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 ** get_address_of_U3CMemberConverterU3Ek__BackingField_14() { return &___U3CMemberConverterU3Ek__BackingField_14; }
	inline void set_U3CMemberConverterU3Ek__BackingField_14(JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * value)
	{
		___U3CMemberConverterU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberConverterU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CIgnoredU3Ek__BackingField_15)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_15() const { return ___U3CIgnoredU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_15() { return &___U3CIgnoredU3Ek__BackingField_15; }
	inline void set_U3CIgnoredU3Ek__BackingField_15(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CReadableU3Ek__BackingField_16)); }
	inline bool get_U3CReadableU3Ek__BackingField_16() const { return ___U3CReadableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_16() { return &___U3CReadableU3Ek__BackingField_16; }
	inline void set_U3CReadableU3Ek__BackingField_16(bool value)
	{
		___U3CReadableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CWritableU3Ek__BackingField_17)); }
	inline bool get_U3CWritableU3Ek__BackingField_17() const { return ___U3CWritableU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_17() { return &___U3CWritableU3Ek__BackingField_17; }
	inline void set_U3CWritableU3Ek__BackingField_17(bool value)
	{
		___U3CWritableU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CHasMemberAttributeU3Ek__BackingField_18)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_18() const { return ___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return &___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_18(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CIsReferenceU3Ek__BackingField_19)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsReferenceU3Ek__BackingField_19() const { return ___U3CIsReferenceU3Ek__BackingField_19; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsReferenceU3Ek__BackingField_19() { return &___U3CIsReferenceU3Ek__BackingField_19; }
	inline void set_U3CIsReferenceU3Ek__BackingField_19(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsReferenceU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CNullValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_t3F6BD2853050BB9B855CDD55F01A906FC3C5AD65  get_U3CNullValueHandlingU3Ek__BackingField_20() const { return ___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_t3F6BD2853050BB9B855CDD55F01A906FC3C5AD65 * get_address_of_U3CNullValueHandlingU3Ek__BackingField_20() { return &___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_20(Nullable_1_t3F6BD2853050BB9B855CDD55F01A906FC3C5AD65  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CDefaultValueHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t111E97C92275C8F06047BF4C5C5D71DD8601B374  get_U3CDefaultValueHandlingU3Ek__BackingField_21() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t111E97C92275C8F06047BF4C5C5D71DD8601B374 * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return &___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_21(Nullable_1_t111E97C92275C8F06047BF4C5C5D71DD8601B374  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CReferenceLoopHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92  get_U3CReferenceLoopHandlingU3Ek__BackingField_22() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92 * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_22(Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CObjectCreationHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_tE85E45E51BD47640D70FEB08A0AEC72302F5EE41  get_U3CObjectCreationHandlingU3Ek__BackingField_23() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline Nullable_1_tE85E45E51BD47640D70FEB08A0AEC72302F5EE41 * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return &___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_23(Nullable_1_tE85E45E51BD47640D70FEB08A0AEC72302F5EE41  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CTypeNameHandlingU3Ek__BackingField_24)); }
	inline Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F  get_U3CTypeNameHandlingU3Ek__BackingField_24() const { return ___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return &___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_24(Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CShouldSerializeU3Ek__BackingField_25)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldSerializeU3Ek__BackingField_25() const { return ___U3CShouldSerializeU3Ek__BackingField_25; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldSerializeU3Ek__BackingField_25() { return &___U3CShouldSerializeU3Ek__BackingField_25; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_25(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CShouldDeserializeU3Ek__BackingField_26)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldDeserializeU3Ek__BackingField_26() const { return ___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_26() { return &___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_26(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CGetIsSpecifiedU3Ek__BackingField_27)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CGetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return &___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_27(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CSetIsSpecifiedU3Ek__BackingField_28)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_U3CSetIsSpecifiedU3Ek__BackingField_28() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return &___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_28(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CItemConverterU3Ek__BackingField_29)); }
	inline JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * get_U3CItemConverterU3Ek__BackingField_29() const { return ___U3CItemConverterU3Ek__BackingField_29; }
	inline JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 ** get_address_of_U3CItemConverterU3Ek__BackingField_29() { return &___U3CItemConverterU3Ek__BackingField_29; }
	inline void set_U3CItemConverterU3Ek__BackingField_29(JsonConverter_t7605FDFAD1D1C7E82E1C9E3FABBFAFACFB16C658 * value)
	{
		___U3CItemConverterU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CItemIsReferenceU3Ek__BackingField_30)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CItemIsReferenceU3Ek__BackingField_30() const { return ___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_30() { return &___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_30(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CItemTypeNameHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F  get_U3CItemTypeNameHandlingU3Ek__BackingField_31() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_31(Nullable_1_tAB7EE6174BE7250166E386BFCD42856B4A34873F  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32)); }
	inline Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_32(Nullable_1_t628124C5318D19C5B0C9C3D2F6B92728306F0A92  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_32 = value;
	}
};


// Mapbox.Json.JsonSerializationException
struct JsonSerializationException_tB0F33B3ECD88F4270825B34D2A569CBB68150789  : public JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D  : public RuntimeObject
{
public:
	// System.String Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Name
	String_t* ___Name_0;
	// Mapbox.Json.Serialization.JsonProperty Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Property
	JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___Property_1;
	// Mapbox.Json.Serialization.JsonProperty Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::ConstructorProperty
	JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___ConstructorProperty_2;
	// System.Nullable`1<Mapbox.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Presence
	Nullable_1_t011D6449FFC5927743309B7E834F47F948A416D3  ___Presence_3;
	// System.Object Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Value
	RuntimeObject * ___Value_4;
	// System.Boolean Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Used
	bool ___Used_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Property_1() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D, ___Property_1)); }
	inline JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * get_Property_1() const { return ___Property_1; }
	inline JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 ** get_address_of_Property_1() { return &___Property_1; }
	inline void set_Property_1(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * value)
	{
		___Property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Property_1), (void*)value);
	}

	inline static int32_t get_offset_of_ConstructorProperty_2() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D, ___ConstructorProperty_2)); }
	inline JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * get_ConstructorProperty_2() const { return ___ConstructorProperty_2; }
	inline JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 ** get_address_of_ConstructorProperty_2() { return &___ConstructorProperty_2; }
	inline void set_ConstructorProperty_2(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * value)
	{
		___ConstructorProperty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorProperty_2), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_3() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D, ___Presence_3)); }
	inline Nullable_1_t011D6449FFC5927743309B7E834F47F948A416D3  get_Presence_3() const { return ___Presence_3; }
	inline Nullable_1_t011D6449FFC5927743309B7E834F47F948A416D3 * get_address_of_Presence_3() { return &___Presence_3; }
	inline void set_Presence_3(Nullable_1_t011D6449FFC5927743309B7E834F47F948A416D3  value)
	{
		___Presence_3 = value;
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D, ___Value_4)); }
	inline RuntimeObject * get_Value_4() const { return ___Value_4; }
	inline RuntimeObject ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(RuntimeObject * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_4), (void*)value);
	}

	inline static int32_t get_offset_of_Used_5() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D, ___Used_5)); }
	inline bool get_Used_5() const { return ___Used_5; }
	inline bool* get_address_of_Used_5() { return &___Used_5; }
	inline void set_Used_5(bool value)
	{
		___Used_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mapbox.Json.Linq.JToken[]
struct JTokenU5BU5D_t1719B285767938769159618B57356CD420595D0E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * m_Items[1];

public:
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionUtils_AddRange_TisRuntimeObject_m191BB5E00FE929F8B9E1EB37E22BA0E5F48EF331_gshared (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// TResult Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_gshared (MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Object Mapbox.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762_gshared (ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared (Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_mAB6E1503725262F8102B0D23587B906F5E875C5A (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, const RuntimeMethod* method);
// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m6B66D0B8A49CB76EAE9A5116C6BB4CF7ADEFCF53 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConvertKey__ctor_mA4A1160884154D47F7775659847C749C8F86BC15 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method);
// System.Int32 Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConvertKey_GetHashCode_m695EC44961693BBBE3E2BB2B5B951A84533A4053 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mE6C59F146E78174C83AA0E721755189092900DB6 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0  ___other0, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_m665D7EA6B111E90047172F981FB40BA531C3DAF0 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFBEFDE40B10BDAA36C9CE3A30C9559DD83DB8600 (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsIndexedProperty_mF484AA37605F6D0024DD2D16BC7BC3B4F424B6AF (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334 (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Mapbox.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
inline void CollectionUtils_AddRange_TisMemberInfo_t_m772CD51D86931FCD742810D0BB192596AB8B2B3C (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m191BB5E00FE929F8B9E1EB37E22BA0E5F48EF331_gshared)(___initial0, ___collection1, method);
}
// System.Reflection.MemberTypes Mapbox.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_MemberType_mFE5199B18723694EBC291BC837010AC2B9D4C19E (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_CanReadMemberValue_m1525D6E82EA8F2E8C58525F8132E9E61CE4514D8 (MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String Mapbox.Json.Serialization.DefaultContractResolver::GetClrTypeFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultContractResolver_GetClrTypeFullName_mAAC0B344A16C36316C82C66FB778241F32B0648D (Type_t * ___type0, const RuntimeMethod* method);
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m14DFB18F790A02F82B136E3F074937B8E57A7660 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void Mapbox.Json.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mE44D3597C10A10F647BDD475F46646A36F05D888 (JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type Mapbox.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionUtils_GetMemberUnderlyingType_m0DF91A3239E19273BBF9DFF1772527FBD06B4888 (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_ImplementsGenericDefinition_m1D9A5F6EB554C87AF348797765014837A83D4DF5 (Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Mapbox.Json.Serialization.JsonProperty::get_Order()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_m8AD4A3D5345A394840A5A0E828525FA96402DC33_inline (JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
inline RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m7C77CB4C266817F10ECE6F2DF5DBEE86EA240991 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Void Mapbox.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m5A08BDF1D1CB3C20497F007770BD1F4EE327B7E3 (JsonSerializationException_tB0F33B3ECD88F4270825B34D2A569CBB68150789 * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726 (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
inline void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382 (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared)(__this, ___arg10, ___arg21, method);
}
// TResult Mapbox.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
inline RuntimeObject * MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1 (MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_gshared)(__this, ___target0, ___args1, method);
}
// System.Object Mapbox.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
inline RuntimeObject * ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762 (ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762_gshared)(__this, ___args0, method);
}
// System.Void Mapbox.Json.Utilities.EnumUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7F8F08AE90AE4975A9221E886FB3E3968A556FA1 (U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 * __this, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline (EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * __this, const RuntimeMethod* method);
// System.Void Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_m21C26584DAAEC9E61076FAFD1E734F5AF6FCE7BE (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<Mapbox.Json.Linq.JToken>::GetEnumerator()
inline RuntimeObject* Collection_1_GetEnumerator_m57B78281C09276BD6A56C535E552BB62F592B6A5 (Collection_1_t698D920163F87A3C745FBAAB14B8265EED4C93A8 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Collection_1_t698D920163F87A3C745FBAAB14B8265EED4C93A8 *, const RuntimeMethod*))Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared)(__this, method);
}
// System.String Mapbox.Json.Linq.JProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_m5D8E59B0A742D9EBB38A6A090077A43BCB542581 (JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 * __this, const RuntimeMethod* method);
// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * JProperty_get_Value_mD40BB2B91C09968377A6E540BACC0A4F5B0215C6 (JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Json.Linq.JToken>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m05C64D91D8BB7ADDD6955763E4497A74599BA0E7 (KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6 * __this, String_t* ___key0, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6 *, String_t*, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_System_IDisposable_Dispose_m943B16F4D92B0BB1464A7E535DB3E4346C79F8A7 (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m9D1CA93609CC528E346E3ED25319ED80911DEB4F (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_mA92609B1311FDC70B7912839BAB5EC46C7BA8E29 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2B7F359D8D8247405BA78BE6650052B206CC96A4 (U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * __this, const RuntimeMethod* method);
// System.String Mapbox.Json.Serialization.JsonProperty::get_PropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_mB4C1BB5D0E97ADBA819B89443C3692F1C6202201 (JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE76724752287714260E4AA01364002DC2E0FB35 (U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258 (RuntimeObject* ___source0, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C (Type_t * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// Mapbox.Json.Utilities.ReflectionDelegateFactory Mapbox.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_t202474BE1B3127BAD9B979C1A1079CE1BEF3025C * JsonTypeReflector_get_ReflectionDelegateFactory_m9C953FB88F3F2C5E375B4A0B44887B3CFCFA1999 (const RuntimeMethod* method);
// System.Void Mapbox.Json.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m5C93684F98F3CE478DA3ACC20745E65879D2BB49 (JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Void Mapbox.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA14ED2899162ECCC84F7C6E3C685982251D764F1 (U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsVirtual_mE04A892F20A0B045EB732D5A3259F77FEAEED228 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Mapbox.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetBaseDefinition_m543FF5583927A2E075DD8197D33040E94A02F57C (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshal_pinvoke(const TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0& unmarshaled, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_pinvoke& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshal_pinvoke_back(const TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_pinvoke& marshaled, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshal_pinvoke_cleanup(TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshal_com(const TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0& unmarshaled, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_com& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshal_com_back(const TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_com& marshaled, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshal_com_cleanup(TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_marshaled_com& marshaled)
{
}
// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_mAB6E1503725262F8102B0D23587B906F5E875C5A (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = __this->get__initialType_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Type_t * L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Type_t * TypeConvertKey_get_InitialType_mAB6E1503725262F8102B0D23587B906F5E875C5A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = TypeConvertKey_get_InitialType_mAB6E1503725262F8102B0D23587B906F5E875C5A(_thisAdjusted, method);
	return _returnValue;
}
// System.Type Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m6B66D0B8A49CB76EAE9A5116C6BB4CF7ADEFCF53 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = __this->get__targetType_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Type_t * L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Type_t * TypeConvertKey_get_TargetType_m6B66D0B8A49CB76EAE9A5116C6BB4CF7ADEFCF53_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = TypeConvertKey_get_TargetType_m6B66D0B8A49CB76EAE9A5116C6BB4CF7ADEFCF53(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConvertKey__ctor_mA4A1160884154D47F7775659847C749C8F86BC15 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___initialType0;
		__this->set__initialType_0(L_0);
		Type_t * L_1 = ___targetType1;
		__this->set__targetType_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TypeConvertKey__ctor_mA4A1160884154D47F7775659847C749C8F86BC15_AdjustorThunk (RuntimeObject * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *>(__this + _offset);
	TypeConvertKey__ctor_mA4A1160884154D47F7775659847C749C8F86BC15(_thisAdjusted, ___initialType0, ___targetType1, method);
}
// System.Int32 Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConvertKey_GetHashCode_m695EC44961693BBBE3E2BB2B5B951A84533A4053 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Type_t * L_0 = __this->get__initialType_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Type_t * L_2 = __this->get__targetType_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t TypeConvertKey_GetHashCode_m695EC44961693BBBE3E2BB2B5B951A84533A4053_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TypeConvertKey_GetHashCode_m695EC44961693BBBE3E2BB2B5B951A84533A4053(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_m665D7EA6B111E90047172F981FB40BA531C3DAF0 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = TypeConvertKey_Equals_mE6C59F146E78174C83AA0E721755189092900DB6((TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *)__this, ((*(TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *)((TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *)UnBox(L_2, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TypeConvertKey_Equals_m665D7EA6B111E90047172F981FB40BA531C3DAF0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TypeConvertKey_Equals_m665D7EA6B111E90047172F981FB40BA531C3DAF0(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Mapbox.Json.Utilities.ConvertUtils/TypeConvertKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mE6C59F146E78174C83AA0E721755189092900DB6 (TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * __this, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = __this->get__initialType_0();
		TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0  L_1 = ___other0;
		Type_t * L_2 = L_1.get__initialType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		Type_t * L_3 = __this->get__targetType_1();
		TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0  L_4 = ___other0;
		Type_t * L_5 = L_4.get__targetType_1();
		G_B3_0 = ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool TypeConvertKey_Equals_mE6C59F146E78174C83AA0E721755189092900DB6_AdjustorThunk (RuntimeObject * __this, TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t91174018D8876CDEA6705B42BCE3FA14D8F97AF0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TypeConvertKey_Equals_mE6C59F146E78174C83AA0E721755189092900DB6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE8A6B7A4E35CF7B14068683A68FC2B7AAA3F1C33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * L_0 = (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 *)il2cpp_codegen_object_new(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFBEFDE40B10BDAA36C9CE3A30C9559DD83DB8600(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFBEFDE40B10BDAA36C9CE3A30C9559DD83DB8600 (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver/<>c::<GetSerializableMembers>b__29_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__29_0_m90A8B0671C4D9F015759DBC419550600F8063CF6 (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ReflectionUtils_IsIndexedProperty_mF484AA37605F6D0024DD2D16BC7BC3B4F424B6AF(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver/<>c::<GetSerializableMembers>b__29_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__29_1_m26086A134DEC4D39B2C90ED9653274B2637145CC (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ReflectionUtils_IsIndexedProperty_mF484AA37605F6D0024DD2D16BC7BC3B4F424B6AF(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Mapbox.Json.Serialization.DefaultContractResolver/<>c::<GetExtensionDataMemberForType>b__32_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__32_0_m50DF353102072801CDE1D6D8B0516FC947DD9A9B (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, Type_t * ___baseType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionUtils_AddRange_TisMemberInfo_t_m772CD51D86931FCD742810D0BB192596AB8B2B3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_0 = (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *)il2cpp_codegen_object_new(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var);
		List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334(L_0, /*hidden argument*/List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		Type_t * L_2 = ___baseType0;
		NullCheck(L_2);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_3;
		L_3 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_2, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m772CD51D86931FCD742810D0BB192596AB8B2B3C(L_1, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m772CD51D86931FCD742810D0BB192596AB8B2B3C_RuntimeMethod_var);
		RuntimeObject* L_4 = V_0;
		Type_t * L_5 = ___baseType0;
		NullCheck(L_5);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_6;
		L_6 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(46 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_5, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m772CD51D86931FCD742810D0BB192596AB8B2B3C(L_4, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m772CD51D86931FCD742810D0BB192596AB8B2B3C_RuntimeMethod_var);
		RuntimeObject* L_7 = V_0;
		V_1 = (RuntimeObject*)L_7;
		goto IL_0029;
	}

IL_0029:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver/<>c::<GetExtensionDataMemberForType>b__32_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__32_1_mB8A21991C88910A21541286A593A57D29ACAE38E (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonExtensionDataAttribute_t37DB563985989488D8D1E5892070C7AD2794DC8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Type_t * V_8 = NULL;
	Type_t * V_9 = NULL;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	{
		MemberInfo_t * L_0 = ___m0;
		int32_t L_1;
		L_1 = TypeExtensions_MemberType_mFE5199B18723694EBC291BC837010AC2B9D4C19E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_3 = (bool)G_B3_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_010c;
	}

IL_0024:
	{
		MemberInfo_t * L_5 = ___m0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (JsonExtensionDataAttribute_t37DB563985989488D8D1E5892070C7AD2794DC8D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_5, L_7, (bool)0);
		V_5 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_010c;
	}

IL_0047:
	{
		MemberInfo_t * L_10 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ReflectionUtils_CanReadMemberValue_m1525D6E82EA8F2E8C58525F8132E9E61CE4514D8(L_10, (bool)1, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_13;
		L_13 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_14 = ___m0;
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultContractResolver_tB24370DFA23346392ECDE904D6C66B93043DC79D_il2cpp_TypeInfo_var)));
		String_t* L_16;
		L_16 = DefaultContractResolver_GetClrTypeFullName_mAAC0B344A16C36316C82C66FB778241F32B0648D(L_15, /*hidden argument*/NULL);
		MemberInfo_t * L_17 = ___m0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		String_t* L_19;
		L_19 = StringUtils_FormatWith_m14DFB18F790A02F82B136E3F074937B8E57A7660(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF)), L_13, L_16, L_18, /*hidden argument*/NULL);
		JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E * L_20 = (JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mE44D3597C10A10F647BDD475F46646A36F05D888(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__32_1_mB8A21991C88910A21541286A593A57D29ACAE38E_RuntimeMethod_var)));
	}

IL_007e:
	{
		MemberInfo_t * L_21 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		Type_t * L_22;
		L_22 = ReflectionUtils_GetMemberUnderlyingType_m0DF91A3239E19273BBF9DFF1772527FBD06B4888(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		Type_t * L_23 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = ReflectionUtils_ImplementsGenericDefinition_m1D9A5F6EB554C87AF348797765014837A83D4DF5(L_23, L_25, (Type_t **)(&V_2), /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00e6;
		}
	}
	{
		Type_t * L_28 = V_2;
		NullCheck(L_28);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_29;
		L_29 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_28);
		NullCheck(L_29);
		int32_t L_30 = 0;
		Type_t * L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_8 = L_31;
		Type_t * L_32 = V_2;
		NullCheck(L_32);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_33;
		L_33 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_32);
		NullCheck(L_33);
		int32_t L_34 = 1;
		Type_t * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		Type_t * L_36 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_39;
		L_39 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_36, L_38);
		if (!L_39)
		{
			goto IL_00d8;
		}
	}
	{
		Type_t * L_40 = V_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42;
		L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		bool L_43;
		L_43 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_40, L_42);
		G_B13_0 = ((int32_t)(L_43));
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B13_0 = 0;
	}

IL_00d9:
	{
		V_10 = (bool)G_B13_0;
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_00e5;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_010c;
	}

IL_00e5:
	{
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_45;
		L_45 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_46 = ___m0;
		NullCheck(L_46);
		Type_t * L_47;
		L_47 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultContractResolver_tB24370DFA23346392ECDE904D6C66B93043DC79D_il2cpp_TypeInfo_var)));
		String_t* L_48;
		L_48 = DefaultContractResolver_GetClrTypeFullName_mAAC0B344A16C36316C82C66FB778241F32B0648D(L_47, /*hidden argument*/NULL);
		MemberInfo_t * L_49 = ___m0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_49);
		String_t* L_51;
		L_51 = StringUtils_FormatWith_m14DFB18F790A02F82B136E3F074937B8E57A7660(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957)), L_45, L_48, L_50, /*hidden argument*/NULL);
		JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E * L_52 = (JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mE44D3597C10A10F647BDD475F46646A36F05D888(L_52, L_51, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__32_1_mB8A21991C88910A21541286A593A57D29ACAE38E_RuntimeMethod_var)));
	}

IL_010c:
	{
		bool L_53 = V_4;
		return L_53;
	}
}
// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver/<>c::<GetAttributeConstructor>b__35_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAttributeConstructorU3Eb__35_0_m89E2FE36CF363B5C173964A7012C587CA6B112B0 (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConstructorAttribute_tC9191EB2FEC01110F1E24CAF7A80A5BF7D9C7E65_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (JsonConstructorAttribute_tC9191EB2FEC01110F1E24CAF7A80A5BF7D9C7E65_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		return L_3;
	}
}
// System.Int32 Mapbox.Json.Serialization.DefaultContractResolver/<>c::<CreateProperties>b__59_0(Mapbox.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCreatePropertiesU3Eb__59_0_mBD8F9CE455652A1DAFB880F67E9C6A24999503AE (U3CU3Ec_tD0076DAA61DE3B2001F69C80D0AF029747468BA1 * __this, JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * L_0 = ___p0;
		NullCheck(L_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1;
		L_1 = JsonProperty_get_Order_m8AD4A3D5345A394840A5A0E828525FA96402DC33_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001a;
	}

IL_0013:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		G_B3_0 = L_3;
	}

IL_001a:
	{
		return G_B3_0;
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
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m816F6172C4E46BC37D58D1F5DD53EC5F7B7082E1 (U3CU3Ec__DisplayClass31_0_tC66C5CF320F83C6F5A4D392451377064842534C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass31_0::<CreateObjectContract>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass31_0_U3CCreateObjectContractU3Eb__0_m3944C06FF48672997364908BE0F24378D284A6BC (U3CU3Ec__DisplayClass31_0_tC66C5CF320F83C6F5A4D392451377064842534C3 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * L_0 = __this->get_namingStrategy_0();
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String Mapbox.Json.Serialization.NamingStrategy::GetDictionaryKey(System.String) */, L_0, L_1);
		return L_2;
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
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mC49044A0C57A201C733E5F4F2FC57FCB7AE99379 (U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * __this, const RuntimeMethod* method)
{
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
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_1__ctor_m9EEEFD2142CA4D098E23FC76209161E066578FA9 (U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_1::<SetExtensionDataDelegates>b__0(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_1_U3CSetExtensionDataDelegatesU3Eb__0_m33DCBAD45335BD203CB13902971F9A5B6E89B4D1 (U3CU3Ec__DisplayClass33_1_t10ABF9CEE34CB9847EFFD8CF7CA2DB867F0B85B1 * __this, RuntimeObject * ___o0, String_t* ___key1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * L_0 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_0);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_1, L_2, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_6 = __this->get_setExtensionDataDictionary_0();
		V_2 = (bool)((((RuntimeObject*)(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_8;
		L_8 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * L_9 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_9);
		MemberInfo_t * L_10 = L_9->get_member_1();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		String_t* L_12;
		L_12 = StringUtils_FormatWith_m7C77CB4C266817F10ECE6F2DF5DBEE86EA240991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7)), L_8, L_11, /*hidden argument*/NULL);
		JsonSerializationException_tB0F33B3ECD88F4270825B34D2A569CBB68150789 * L_13 = (JsonSerializationException_tB0F33B3ECD88F4270825B34D2A569CBB68150789 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_tB0F33B3ECD88F4270825B34D2A569CBB68150789_il2cpp_TypeInfo_var)));
		JsonSerializationException__ctor_m5A08BDF1D1CB3C20497F007770BD1F4EE327B7E3(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass33_1_U3CSetExtensionDataDelegatesU3Eb__0_m33DCBAD45335BD203CB13902971F9A5B6E89B4D1_RuntimeMethod_var)));
	}

IL_004f:
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_14 = __this->get_createExtensionDataDictionary_1();
		NullCheck(L_14);
		RuntimeObject * L_15;
		L_15 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_14, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		V_0 = L_15;
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_16 = __this->get_setExtensionDataDictionary_0();
		RuntimeObject * L_17 = ___o0;
		RuntimeObject * L_18 = V_0;
		NullCheck(L_16);
		Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382(L_16, L_17, L_18, /*hidden argument*/Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var);
	}

IL_006a:
	{
		MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * L_19 = __this->get_setExtensionDataDictionaryValue_2();
		RuntimeObject * L_20 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		String_t* L_23 = ___key1;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_22;
		RuntimeObject * L_25 = ___value2;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		NullCheck(L_19);
		RuntimeObject * L_26;
		L_26 = MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1(L_19, L_20, L_24, /*hidden argument*/MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
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
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_2__ctor_mD922F590A517A39CCF2F23FA7ECEB438561A0F04 (U3CU3Ec__DisplayClass33_2_t5061E14A934453867FA6BF0853EBE73BBD0532AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass33_2::<SetExtensionDataDelegates>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass33_2_U3CSetExtensionDataDelegatesU3Eb__1_mECAE5166EB5E7B128BB7770C4FBEE58565C4E1F9 (U3CU3Ec__DisplayClass33_2_t5061E14A934453867FA6BF0853EBE73BBD0532AC * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_t66B84BF904DB5E1E6D0C7C78AF9736C00B8E96A1 * L_0 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_0);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_1, L_2, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		V_2 = (RuntimeObject*)NULL;
		goto IL_003d;
	}

IL_0020:
	{
		ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * L_6 = __this->get_createEnumerableWrapper_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		NullCheck(L_6);
		RuntimeObject * L_10;
		L_10 = ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762(L_6, L_8, /*hidden argument*/ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var));
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
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
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m4687CB75905884FF820CD1727104AE7E4974F378 (U3CU3Ec__DisplayClass47_0_tAE1B2CDF55F78E68EB58B3BB9791DC4C7EE37851 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass47_0::<CreateDictionaryContract>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass47_0_U3CCreateDictionaryContractU3Eb__0_m59BABDFB3563F06A401FB8A5773484D352410B02 (U3CU3Ec__DisplayClass47_0_tAE1B2CDF55F78E68EB58B3BB9791DC4C7EE37851 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		NamingStrategy_tA57D6A6020EB2CB75FE10D51722766E8C33789C6 * L_0 = __this->get_namingStrategy_0();
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String Mapbox.Json.Serialization.NamingStrategy::GetDictionaryKey(System.String) */, L_0, L_1);
		return L_2;
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
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0__ctor_mF6825645B37ACC25E66F6B607637CA22BFDD3279 (U3CU3Ec__DisplayClass64_0_tCD6BD21BB8DB6F347075A17C4037B2C22B358A4D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0::<CreateShouldSerializeTest>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass64_0_U3CCreateShouldSerializeTestU3Eb__0_m7716AD25D9DAFF1F8E0E25A1B29A44B232FA5A63 (U3CU3Ec__DisplayClass64_0_tCD6BD21BB8DB6F347075A17C4037B2C22B358A4D * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * L_0 = __this->get_shouldSerializeCall_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_3, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
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
// System.Void Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0__ctor_mFE00B287CF040ED6AA00696A95B6937C7F579364 (U3CU3Ec__DisplayClass65_0_tCFEF6E7B92500F76CE010E043021CFC94A17DAB3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0::<SetIsSpecifiedActions>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass65_0_U3CSetIsSpecifiedActionsU3Eb__0_m2972CEFA968260B6CADFB420075A8DEDCA32CAB7 (U3CU3Ec__DisplayClass65_0_tCFEF6E7B92500F76CE010E043021CFC94A17DAB3 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_0 = __this->get_specifiedPropertyGet_0();
		RuntimeObject * L_1 = ___o0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_0, L_1, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_2, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
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
// System.Void Mapbox.Json.Utilities.EnumUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1A0BFB1DC59AE2C8B4BFE3D8D1B5957F8F31E5D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 * L_0 = (U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 *)il2cpp_codegen_object_new(U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7F8F08AE90AE4975A9221E886FB3E3968A556FA1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Utilities.EnumUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7F8F08AE90AE4975A9221E886FB3E3968A556FA1 (U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mapbox.Json.Utilities.EnumUtils/<>c::<InitializeEnumType>b__1_0(System.Runtime.Serialization.EnumMemberAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_m9D9C46BC0A3DC3949633B213DD1369D64AB3DB5D (U3CU3Ec_tC0DFA31B24039A38D90540D690BC5B7826F2D3E3 * __this, EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * ___a0, const RuntimeMethod* method)
{
	{
		EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55__ctor_mF57688D7557A2469F8BC612F3B2E5CCCCD51B7A0 (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_System_IDisposable_Dispose_m943B16F4D92B0BB1464A7E535DB3E4346C79F8A7 (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_m21C26584DAAEC9E61076FAFD1E734F5AF6FCE7BE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__55_MoveNext_mF6E42545706A22DF6E06AEB85A27FBC23C9315D1 (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_m57B78281C09276BD6A56C535E552BB62F592B6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t80C3584B0C31D30CD59AC009C306AE5E70D92439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m05C64D91D8BB7ADDD6955763E4497A74599BA0E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0016;
		}

IL_0012:
		{
			goto IL_001d;
		}

IL_0014:
		{
			goto IL_0089;
		}

IL_0016:
		{
			V_0 = (bool)0;
			goto IL_00c0;
		}

IL_001d:
		{
			__this->set_U3CU3E1__state_0((-1));
			JObject_tC0EE114B73BB38CD223B606DD8482DA29E796AB9 * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			JPropertyKeyedCollection_tE50EDEF93472C75B569810F8BE41E34454FEF79D * L_4 = L_3->get__properties_14();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Collection_1_GetEnumerator_m57B78281C09276BD6A56C535E552BB62F592B6A5(L_4, /*hidden argument*/Collection_1_GetEnumerator_m57B78281C09276BD6A56C535E552BB62F592B6A5_RuntimeMethod_var);
			__this->set_U3CU3Es__1_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0099;
		}

IL_0046:
		{
			RuntimeObject* L_6 = __this->get_U3CU3Es__1_3();
			NullCheck(L_6);
			JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Mapbox.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t80C3584B0C31D30CD59AC009C306AE5E70D92439_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CpropertyU3E5__2_4(((JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 *)CastclassClass((RuntimeObject*)L_7, JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977_il2cpp_TypeInfo_var)));
			JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 * L_8 = __this->get_U3CpropertyU3E5__2_4();
			NullCheck(L_8);
			String_t* L_9;
			L_9 = JProperty_get_Name_m5D8E59B0A742D9EBB38A6A090077A43BCB542581(L_8, /*hidden argument*/NULL);
			JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 * L_10 = __this->get_U3CpropertyU3E5__2_4();
			NullCheck(L_10);
			JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_11;
			L_11 = JProperty_get_Value_mD40BB2B91C09968377A6E540BACC0A4F5B0215C6(L_10, /*hidden argument*/NULL);
			KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  L_12;
			memset((&L_12), 0, sizeof(L_12));
			KeyValuePair_2__ctor_m05C64D91D8BB7ADDD6955763E4497A74599BA0E7((&L_12), L_9, L_11, /*hidden argument*/KeyValuePair_2__ctor_m05C64D91D8BB7ADDD6955763E4497A74599BA0E7_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_12);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00c0;
		}

IL_0089:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			__this->set_U3CpropertyU3E5__2_4((JProperty_t71ADD22AB9662923ACB53E083E88EDBC52D0E977 *)NULL);
		}

IL_0099:
		{
			RuntimeObject* L_13 = __this->get_U3CU3Es__1_3();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0046;
			}
		}

IL_00a6:
		{
			U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_m21C26584DAAEC9E61076FAFD1E734F5AF6FCE7BE(__this, /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00c0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00b8;
	}

FAULT_00b8:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__55_System_IDisposable_Dispose_m943B16F4D92B0BB1464A7E535DB3E4346C79F8A7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(184)
	} // end fault
	IL2CPP_CLEANUP(184)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c0:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_m21C26584DAAEC9E61076FAFD1E734F5AF6FCE7BE (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3Es__1_3();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3Es__1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Mapbox.Json.Linq.JToken>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  U3CGetEnumeratorU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CMapbox_Json_Linq_JTokenU3EU3E_get_Current_mBCBBC1665F6225C6F4B869086DE08CF221A20AE1 (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_mE5CA22D9A20FA44FC9AE651A2E68A1E79D6E7ECA (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_mE5CA22D9A20FA44FC9AE651A2E68A1E79D6E7ECA_RuntimeMethod_var)));
	}
}
// System.Object Mapbox.Json.Linq.JObject/<GetEnumerator>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_get_Current_mEC1C7BC8BA33D48FFA2A97635042C0EFCC95653A (U3CGetEnumeratorU3Ed__55_t60D487A7FFEBB733009772BE03F090DDC24E2331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_t26D99DA85E7C59F98EFE10D6CEC3E86B758DB7F6_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Linq.JToken> Mapbox.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_mA92609B1311FDC70B7912839BAB5EC46C7BA8E29 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * L_0 = (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__1__ctor_m9D1CA93609CC528E346E3ED25319ED80911DEB4F(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Mapbox.Json.Linq.JProperty/JPropertyList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_System_Collections_IEnumerable_GetEnumerator_m077357370D9592CAEC8961DA514F5B56C2761C22 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JPropertyList_GetEnumerator_mA92609B1311FDC70B7912839BAB5EC46C7BA8E29(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList::Add(Mapbox.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Add_mCEA8A89F6421606DE046F2C2FF117557C72BE8B0 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = ___item0;
		__this->set__token_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Clear_m8C48DAE30E7CA1095A11FDAAF0E4E04781228D1B (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, const RuntimeMethod* method)
{
	{
		__this->set__token_0((JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Linq.JProperty/JPropertyList::Contains(Mapbox.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Contains_m8C9B06F41E77B4EFC6E2AECEEC538D7C4EFA92D9 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = __this->get__token_0();
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_1 = ___item0;
		V_0 = (bool)((((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_0) == ((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList::CopyTo(Mapbox.Json.Linq.JToken[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_CopyTo_m91B361C6802828F1BD7C2DE88DC690E394A1C611 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, JTokenU5BU5D_t1719B285767938769159618B57356CD420595D0E* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = __this->get__token_0();
		V_0 = (bool)((!(((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		JTokenU5BU5D_t1719B285767938769159618B57356CD420595D0E* L_2 = ___array0;
		int32_t L_3 = ___arrayIndex1;
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_4 = __this->get__token_0();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_4);
	}

IL_0019:
	{
		return;
	}
}
// System.Boolean Mapbox.Json.Linq.JProperty/JPropertyList::Remove(Mapbox.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Remove_m8176823A4AA8BC7E71AA519B84039963A7A97977 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = __this->get__token_0();
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_1 = ___item0;
		V_0 = (bool)((((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_0) == ((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		__this->set__token_0((JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)NULL);
		V_1 = (bool)1;
		goto IL_001e;
	}

IL_001a:
	{
		V_1 = (bool)0;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Int32 Mapbox.Json.Linq.JProperty/JPropertyList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_get_Count_mF83BA44D5CDF9FB9893A8D7783F77C7884522224 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = __this->get__token_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.Json.Linq.JProperty/JPropertyList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_get_IsReadOnly_mE41071CC6FD1BEE6C6B0292834A92C8606920BFC (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Mapbox.Json.Linq.JProperty/JPropertyList::IndexOf(Mapbox.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_IndexOf_mB1F414D3DD2CADA652E4D13EE9693E55538D71A3 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = __this->get__token_0();
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_1 = ___item0;
		if ((((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_0) == ((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 0;
	}

IL_000e:
	{
		V_0 = G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList::Insert(System.Int32,Mapbox.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Insert_m13786C63D0AC576E695A49F546401D9416E3D535 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, int32_t ___index0, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___item1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_2 = ___item1;
		__this->set__token_0(L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_RemoveAt_m610C9F62EECEEAAF7AA09DB0FB5A5F9AB08D330B (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		__this->set__token_0((JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)NULL);
	}

IL_0012:
	{
		return;
	}
}
// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JProperty/JPropertyList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * JPropertyList_get_Item_m4631A4B636932E9DE4832117B0B0DC15A606E149 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * V_0 = NULL;
	JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * G_B3_0 = NULL;
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)(NULL));
		goto IL_000d;
	}

IL_0007:
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_1 = __this->get__token_0();
		G_B3_0 = L_1;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList::set_Item(System.Int32,Mapbox.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_set_Item_m7A251B666C683D9D5A45EFB733E0D3C999F33B9A (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, int32_t ___index0, JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_2 = ___value1;
		__this->set__token_0(L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList__ctor_mEB9FE369E1C93F9F98C6800000DD444248A18444 (JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * __this, const RuntimeMethod* method)
{
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
// System.Void Mapbox.Json.Linq.JToken/LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_mC97731139E3F6C8A039DFC20066058ECAEBFF14E (LineInfoAnnotation_t88AAF04DC5F01948E54CADA0AC2B7037084BB1AC * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_LineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_LinePosition_1(L_1);
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
// System.Void Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_mFA8719BE982F23711B107C67069AADE035DE4A4C (U3CU3Ec__DisplayClass58_0_t30B73B9E4D8C27B362A883257DC66C45ABDA488E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass58_0::<CreateSerializationCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CCreateSerializationCallbackU3Eb__0_m26E0CFD8470BB1860AF33C17297CE5B8F2902D22 (U3CU3Ec__DisplayClass58_0_t30B73B9E4D8C27B362A883257DC66C45ABDA488E * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_0);
		RuntimeObject * L_7;
		L_7 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m1001D92C72550B138CF71FDF8DC26909D77AE000 (U3CU3Ec__DisplayClass59_0_t7B814800836EF5A1216B7DCC8A074593C37E91DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.Json.Serialization.JsonContract/<>c__DisplayClass59_0::<CreateSerializationErrorCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext,Mapbox.Json.Serialization.ErrorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CCreateSerializationErrorCallbackU3Eb__0_mAFF97F307C3DB3173DA3C193B9617663840267E5 (U3CU3Ec__DisplayClass59_0_t7B814800836EF5A1216B7DCC8A074593C37E91DD * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89 * ___econtext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		ErrorContext_t6726B3C09D7982E8C207918637E0BC62FD0F3C89 * L_8 = ___econtext2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_0);
		RuntimeObject * L_9;
		L_9 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_7, /*hidden argument*/NULL);
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
// System.Boolean Mapbox.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_m1EEF8859CC8839FB1E1CB2E8615C074C2A6305EB (ReferenceEqualsEqualityComparer_t72B62790D7B61622CBAB790A0C8B328CAA3A1838 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___x0;
		RuntimeObject * L_1 = ___y1;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_mBEBADB14FBC7229A722CC71DFBA866A37134BD83 (ReferenceEqualsEqualityComparer_t72B62790D7B61622CBAB790A0C8B328CAA3A1838 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceEqualsEqualityComparer__ctor_m02C443D5AE48315C83B346D8CCFCF6BBACE6B561 (ReferenceEqualsEqualityComparer_t72B62790D7B61622CBAB790A0C8B328CAA3A1838 * __this, const RuntimeMethod* method)
{
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
// System.Void Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m63780E524345438C2DF1C107381B078670F9E617 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * L_0 = (U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 *)il2cpp_codegen_object_new(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2B7F359D8D8247405BA78BE6650052B206CC96A4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2B7F359D8D8247405BA78BE6650052B206CC96A4 (U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__36_0(Mapbox.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__36_0_mED3493543FA72D551BB9610BBB48A1E264C357DE (U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * __this, JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_mB4C1BB5D0E97ADBA819B89443C3692F1C6202201(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__36_2(Mapbox.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__36_2_mBA819FCDCC724B4DFD40B94AD22AD6AC8E3EE168 (U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * __this, JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_mB4C1BB5D0E97ADBA819B89443C3692F1C6202201(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Mapbox.Json.Serialization.JsonProperty Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__41_0(Mapbox.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * U3CU3Ec_U3CPopulateObjectU3Eb__41_0_m06FC6541CFA81BF3F1657C8AF1241151B05D7378 (U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * __this, JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___m0, const RuntimeMethod* method)
{
	{
		JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * L_0 = ___m0;
		return L_0;
	}
}
// Mapbox.Json.Serialization.JsonSerializerInternalReader/PropertyPresence Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__41_1(Mapbox.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPopulateObjectU3Eb__41_1_mDB38F54BE9E6247A60F114BDED95EB9EA3BEADAA (U3CU3Ec_t8595B087E81266E396589D2AE1A924745F71B133 * __this, JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * ___m0, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
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
// System.Void Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mD0E020A9E7DC1E7BA3AB93E07BE3CD387E78BFE6 (U3CU3Ec__DisplayClass36_0_t1456F7B4D6B38EDD533F45F377F3D9984C31BFFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0::<CreateObjectUsingCreatorWithParameters>b__1(Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3CCreateObjectUsingCreatorWithParametersU3Eb__1_mF7904195342EF222882109E7AC213C7895F5464B (U3CU3Ec__DisplayClass36_0_t1456F7B4D6B38EDD533F45F377F3D9984C31BFFD * __this, CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D * ___p0, const RuntimeMethod* method)
{
	{
		CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D * L_0 = ___p0;
		NullCheck(L_0);
		JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * L_1 = L_0->get_Property_1();
		JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * L_2 = __this->get_property_0();
		return (bool)((((int32_t)((((RuntimeObject*)(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 *)L_1) == ((RuntimeObject*)(JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Mapbox.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorPropertyContext__ctor_m4F2AC216F7204C5DCD387299658B6617962F941A (CreatorPropertyContext_tA2325DE47D62A691D59A5505158A8D1210270E8D * __this, const RuntimeMethod* method)
{
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
// System.Void Mapbox.Json.Serialization.JsonTypeReflector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF6B398A545515D63C4CD95C4D87DB45B845215BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * L_0 = (U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B *)il2cpp_codegen_object_new(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAE76724752287714260E4AA01364002DC2E0FB35(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE76724752287714260E4AA01364002DC2E0FB35 (U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Mapbox.Json.Serialization.JsonTypeReflector/<>c::<GetCreator>b__21_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetCreatorU3Eb__21_1_m4D7589366AEF3EB4F2341EB71E530591CAEEF529 (U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * __this, RuntimeObject * ___param0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___param0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Mapbox.Json.Serialization.JsonTypeReflector/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mD1D76B6BAE145CEA400AB37FDEDC03A9C464F276 (U3CU3Ec__DisplayClass21_0_t5819EA4DF12335755CEB83D40156C428A4510D65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Mapbox.Json.Serialization.JsonTypeReflector/<>c__DisplayClass21_0::<GetCreator>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass21_0_U3CGetCreatorU3Eb__0_mF67C6D97F56B4AAC9630E1DF297051BF4DA136A0 (U3CU3Ec__DisplayClass21_0_t5819EA4DF12335755CEB83D40156C428A4510D65 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTypeReflector_tCFB10280705A84265AA81DB62D82C1077B56E4F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetCreatorU3Eb__21_1_m4D7589366AEF3EB4F2341EB71E530591CAEEF529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_1 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_2 = NULL;
	bool V_3 = false;
	ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B4_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B3_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___parameters0;
			V_0 = (bool)((!(((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0081;
			}
		}

IL_000a:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___parameters0;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_3 = ((U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var))->get_U3CU3E9__21_1_1();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_4 = L_3;
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			if (L_4)
			{
				G_B4_0 = L_4;
				G_B4_1 = L_2;
				goto IL_002b;
			}
		}

IL_0014:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var);
			U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B * L_5 = ((U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_6 = (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *)il2cpp_codegen_object_new(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
			Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CGetCreatorU3Eb__21_1_m4D7589366AEF3EB4F2341EB71E530591CAEEF529_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_7 = L_6;
			((U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C5FCFFDB0D077D1D2DFC8DE6291FA75A389F32B_il2cpp_TypeInfo_var))->set_U3CU3E9__21_1_1(L_7);
			G_B4_0 = L_7;
			G_B4_1 = G_B3_1;
		}

IL_002b:
		{
			RuntimeObject* L_8;
			L_8 = Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258((RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9;
			L_9 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_8, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
			V_1 = L_9;
			Type_t * L_10 = __this->get_type_0();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11 = V_1;
			NullCheck(L_10);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_12;
			L_12 = Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C(L_10, L_11, /*hidden argument*/NULL);
			V_2 = L_12;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_13 = V_2;
			V_3 = (bool)((!(((RuntimeObject*)(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_14 = V_3;
			if (!L_14)
			{
				goto IL_0065;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_tCFB10280705A84265AA81DB62D82C1077B56E4F3_il2cpp_TypeInfo_var);
			ReflectionDelegateFactory_t202474BE1B3127BAD9B979C1A1079CE1BEF3025C * L_15;
			L_15 = JsonTypeReflector_get_ReflectionDelegateFactory_m9C953FB88F3F2C5E375B4A0B44887B3CFCFA1999(/*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_16 = V_2;
			NullCheck(L_15);
			ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * L_17;
			L_17 = VirtFuncInvoker1< ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 *, MethodBase_t * >::Invoke(5 /* Mapbox.Json.Serialization.ObjectConstructor`1<System.Object> Mapbox.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_15, L_16);
			V_4 = L_17;
			ObjectConstructor_1_tB1F7DFB9F0AE5A8CD8553E8509479347D6CB96E3 * L_18 = V_4;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = ___parameters0;
			NullCheck(L_18);
			RuntimeObject * L_20;
			L_20 = ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762(L_18, L_19, /*hidden argument*/ObjectConstructor_1_Invoke_mD3D3CE0594850DB6C5B706438A253F588B554762_RuntimeMethod_var);
			V_5 = L_20;
			goto IL_00db;
		}

IL_0065:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_21;
			L_21 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_22 = __this->get_type_0();
			String_t* L_23;
			L_23 = StringUtils_FormatWith_m7C77CB4C266817F10ECE6F2DF5DBEE86EA240991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23B435163284C2F25AE5E84212B0650024F0760B)), L_21, L_22, /*hidden argument*/NULL);
			JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E * L_24 = (JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E_il2cpp_TypeInfo_var)));
			JsonException__ctor_mE44D3597C10A10F647BDD475F46646A36F05D888(L_24, L_23, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CGetCreatorU3Eb__0_mF67C6D97F56B4AAC9630E1DF297051BF4DA136A0_RuntimeMethod_var)));
		}

IL_0081:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_25 = __this->get_defaultConstructor_1();
			V_6 = (bool)((((RuntimeObject*)(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_25) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_26 = V_6;
			if (!L_26)
			{
				goto IL_00ac;
			}
		}

IL_0090:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_27;
			L_27 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_28 = __this->get_type_0();
			String_t* L_29;
			L_29 = StringUtils_FormatWith_m7C77CB4C266817F10ECE6F2DF5DBEE86EA240991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184)), L_27, L_28, /*hidden argument*/NULL);
			JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E * L_30 = (JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E_il2cpp_TypeInfo_var)));
			JsonException__ctor_mE44D3597C10A10F647BDD475F46646A36F05D888(L_30, L_29, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CGetCreatorU3Eb__0_mF67C6D97F56B4AAC9630E1DF297051BF4DA136A0_RuntimeMethod_var)));
		}

IL_00ac:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_31 = __this->get_defaultConstructor_1();
			NullCheck(L_31);
			RuntimeObject * L_32;
			L_32 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_31, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
			V_5 = L_32;
			goto IL_00db;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bb;
		}
		throw e;
	}

CATCH_00bb:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_33;
		L_33 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Type_t * L_34 = __this->get_type_0();
		String_t* L_35;
		L_35 = StringUtils_FormatWith_m7C77CB4C266817F10ECE6F2DF5DBEE86EA240991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442)), L_33, L_34, /*hidden argument*/NULL);
		Exception_t * L_36 = V_7;
		JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E * L_37 = (JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t6A151BFEB4690E08C92BE4E716CBC5F1266ED14E_il2cpp_TypeInfo_var)));
		JsonException__ctor_m5C93684F98F3CE478DA3ACC20745E65879D2BB49(L_37, L_35, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CGetCreatorU3Eb__0_mF67C6D97F56B4AAC9630E1DF297051BF4DA136A0_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00db:
	{
		RuntimeObject * L_38 = V_5;
		return L_38;
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
// System.Void Mapbox.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m106EA88AFB62668320B807E4BD87843C35E99603 (U3CU3Ec__DisplayClass3_0_t881CA8384B5B697B1EB58301B8444C73A446A9A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Mapbox.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m573F7D00DDB7D83381DD85CB08AD642229FC8012 (U3CU3Ec__DisplayClass3_0_t881CA8384B5B697B1EB58301B8444C73A446A9A8 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___a0;
		V_0 = L_0;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_1 = __this->get_c_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_4 = V_1;
		return L_4;
	}
}
// System.Object Mapbox.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_mE81D19C5A61F83EA3AB751A132F1D846C86055C6 (U3CU3Ec__DisplayClass3_0_t881CA8384B5B697B1EB58301B8444C73A446A9A8 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Mapbox.Json.Utilities.PropertyNameTable/Entry::.ctor(System.String,System.Int32,Mapbox.Json.Utilities.PropertyNameTable/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m56DC46CB3203E8672E5D495727D098C38BB4D59A (Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F * __this, String_t* ___value0, int32_t ___hashCode1, Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_Value_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_tF60CE1FBAF8154FFFA2322ADEEEC49A65BAC1D1F * L_2 = ___next2;
		__this->set_Next_2(L_2);
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
// System.Void Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m1F360AABAD8B5131739CCC39EC7F22D307D16CD9 (U3CU3Ec__DisplayClass13_0_t26D5643A4AFC1DD04B5B47FBDA42A28A2AAA83BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::<Create>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_mABC0A89D1DEA395D4AA77B8BC560A9066BBD99AB (U3CU3Ec__DisplayClass13_0_t26D5643A4AFC1DD04B5B47FBDA42A28A2AAA83BF * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = __this->get_ctor_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_0, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		return L_1;
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
// System.Void Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1__ctor_m4543A158F5E8AD2F251E126F4DB7F511CA39B785 (U3CU3Ec__DisplayClass13_1_tC6A8405F5CDC42300EEEC4E846A93F3725727507 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::<Create>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_mED1875187A80A9CC2787D1DDC9D8B99851208DEC (U3CU3Ec__DisplayClass13_1_tC6A8405F5CDC42300EEEC4E846A93F3725727507 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
		return L_3;
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
// System.Void Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2__ctor_m25193683A19B87A7A0D06CE71AC8530079AF9612 (U3CU3Ec__DisplayClass13_2_t4A4CE241A27A11AE24E6DC4A2C9FF6DE469381C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::<Create>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_mDE259DF790DC01921EDFF0A8653AE6F1827482A4 (U3CU3Ec__DisplayClass13_2_t4A4CE241A27A11AE24E6DC4A2C9FF6DE469381C1 * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t2C9F82330E9126D4B88A3C4C886A5987DF575BE7 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		RuntimeObject * L_5;
		L_5 = MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1(L_0, L_1, L_3, /*hidden argument*/MethodCall_2_Invoke_mFAE1B05C5AFFD75A48EEEB70EBEF5A6D8D70E5E1_RuntimeMethod_var);
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
// System.Void Mapbox.Json.Utilities.ReflectionUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m739A3C12D6F43B1D0D48C776EA640A84B354A555 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * L_0 = (U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 *)il2cpp_codegen_object_new(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA14ED2899162ECCC84F7C6E3C685982251D764F1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA14ED2899162ECCC84F7C6E3C685982251D764F1 (U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__11_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__11_0_m46C386D071C8345D638EBE360012FF88C6F79263 (U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2;
		L_2 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Mapbox.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__30_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__30_0_mBA807738AAA9700AA7C70A6189E1FDEE818A5FF6 (U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Mapbox.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__38_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__38_0_mF04CB9DF65E1F2B31C815DEFA47F44C28E83F547 (U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__40_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__40_0_mD6B9BB9B84CF87FB1B1481A01A9B11B235DCDFE7 (U3CU3Ec_tB105751A420876D9190F97D05C760261D6D17239 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m6C7AFDD186A68F5F35DA19BFF784C3767AE97D4F (U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass43_0_U3CGetChildPrivatePropertiesU3Eb__0_mDAC5B238483A753760C2786A243818C9988FA5BA (U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass43_0_U3CGetChildPrivatePropertiesU3Eb__1_mE86E0472B027198D2587C65EB4E8A1934C4219CC (U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		G_B3_0 = ((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return (bool)G_B3_0;
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
// System.Void Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_1__ctor_m401FD5431DA366723EDF39D86961AB6C298F70F9 (U3CU3Ec__DisplayClass43_1_tCB1D9624245D943667B2106471E2C9EAACC34614 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_1::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass43_1_U3CGetChildPrivatePropertiesU3Eb__2_m3CCD0F25B15D3D6E3B02358D71678CF654E82730 (U3CU3Ec__DisplayClass43_1_tCB1D9624245D943667B2106471E2C9EAACC34614 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * G_B4_0 = NULL;
	MethodInfo_t * G_B3_0 = NULL;
	Type_t * G_B5_0 = NULL;
	Type_t * G_B7_0 = NULL;
	Type_t * G_B6_0 = NULL;
	int32_t G_B9_0 = 0;
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		U3CU3Ec__DisplayClass43_0_t615D039C9A574E264C6CBF60DC031AA955774163 * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		PropertyInfo_t * L_3 = L_2->get_subTypeProperty_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		PropertyInfo_t * L_6 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ReflectionUtils_IsVirtual_mE04A892F20A0B045EB732D5A3259F77FEAEED228(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		PropertyInfo_t * L_8 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t019B852FB26DE6A81ABAC22F066212C5E012EB7B_il2cpp_TypeInfo_var);
		MethodInfo_t * L_9;
		L_9 = ReflectionUtils_GetBaseDefinition_m543FF5583927A2E075DD8197D33040E94A02F57C(L_8, /*hidden argument*/NULL);
		MethodInfo_t * L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_0032;
		}
	}
	{
		G_B5_0 = ((Type_t *)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B4_0);
		Type_t * L_11;
		L_11 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, G_B4_0);
		G_B5_0 = L_11;
	}

IL_0037:
	{
		Type_t * L_12 = G_B5_0;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0041;
		}
	}
	{
		PropertyInfo_t * L_13 = ___p0;
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		G_B7_0 = L_14;
	}

IL_0041:
	{
		Type_t * L_15 = __this->get_subTypePropertyDeclaringType_0();
		NullCheck(G_B7_0);
		bool L_16;
		L_16 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, G_B7_0, L_15);
		G_B9_0 = ((int32_t)(L_16));
		goto IL_004f;
	}

IL_004e:
	{
		G_B9_0 = 0;
	}

IL_004f:
	{
		return (bool)G_B9_0;
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
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m9D1CA93609CC528E346E3ED25319ED80911DEB4F (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m77900913F290FE7D97C5B288C7B97248818023AE (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m59604DAE3DE889C7062216B912897DBD97E3D58E (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004d;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_4 = L_3->get__token_0();
		V_1 = (bool)((!(((RuntimeObject*)(JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		JPropertyList_t516667F5C08FE49C29B5F7E3B0B3FD355E36DB78 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_7 = L_6->get__token_0();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0055:
	{
		return (bool)0;
	}
}
// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Mapbox.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CMapbox_Json_Linq_JTokenU3E_get_Current_mD1220F6F2DCD343403A0F4401FEF65DBAFC83ABB (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * __this, const RuntimeMethod* method)
{
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m0EF54668C6553DA6794BD8B64096B88C0484680B (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m0EF54668C6553DA6794BD8B64096B88C0484680B_RuntimeMethod_var)));
	}
}
// System.Object Mapbox.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m0D3ABCFCA6D73B275DD8B6B35EF1633E97EE6267 (U3CGetEnumeratorU3Ed__1_t264426C9F679D65416EAB210AF9860617C3BB359 * __this, const RuntimeMethod* method)
{
	{
		JToken_t2AD085E3E30B36EDB23247286E5C75F881A2C08E * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_m8AD4A3D5345A394840A5A0E828525FA96402DC33_inline (JsonProperty_t0EF9C97E51721BD958D479B44458C2D024337289 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3COrderU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline (EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
