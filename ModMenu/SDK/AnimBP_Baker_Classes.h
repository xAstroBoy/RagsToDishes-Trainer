#pragma once

/**
 * Name: RagsToDishes
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass AnimBP_Baker.AnimBP_Baker_C
	 * Size -> 0x55BA (FullSize[0x5912] - InheritedSize[0x0358])
	 */
	class UAnimBP_Baker_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_E3FJ[0x8];                                   // 0x0358(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_D018C50E440E0ED638CB65BEA9EA9CBE;     // 0x0368(0x0040)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6658570F48953C75F505C382E00758D5; // 0x03A8(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_1AC95D3E4371BDBD269CE48DFE6AA080; // 0x0480(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_694B0E1A4943F4E6AF4C51A86108FB3A; // 0x0578(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_9A897937463C219F810E67BEFB5F2010; // 0x0650(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_615F6AED423F448BC7DDA0B01EA52FA6; // 0x06C8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_CB7017544A2E4D7C5BC72887CBC4AD2E; // 0x0740(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FA2D9B954F60D1FFC18E0DA96EF07D50; // 0x0780(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5AD4F3B2453DE7CB28E9CCA7DF932F26; // 0x07C8(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_EBE1792E4C4662881615D6A51BD7150C; // 0x0810(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4C8C104941359391E9B97DAE9AECAB9A; // 0x08E8(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_30CBFA19436B01C8715E6893DE744B6D; // 0x09E0(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_534C93EC4C04C87B15F28FB78ABCEB6E; // 0x0AB8(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_DECD2F244BDF4C37354C469E26044CE8; // 0x0B30(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_F37F07E841567ABBD5929792B6DE4FC2; // 0x0BA8(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_77EF227D4F15F59EDC5345A8823ECD9F; // 0x0BE8(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_CA1ED5A64B31250DD5C7C480B9508348; // 0x0C30(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5176EC354AD164D47DC2F68F41AB15B9; // 0x0D08(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_38E4689E47E1110A769921A44D6C1B3D; // 0x0E00(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_ACB7016E429943D419231C88E4D2A13C; // 0x0ED8(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_733431294F7C865C703572A3D4DEBE0A; // 0x0F50(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_09F2319C46D9AE4ADB9ABB9FC210F794; // 0x0FC8(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5A0255F748E50A91D026ACAD21F434BA; // 0x1008(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_D33DD3AC403008C66AFCE986AE55EFF0; // 0x1050(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_1CA9EAE74D2EFF04553C16901C93B1D0; // 0x1098(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_300FF58B40E3B6A6A843A69E3933DB6F; // 0x1170(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7D08DDEC446A65D3D8F00894ECC989BA; // 0x1268(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_C69FCB664B705A65A3863D850A00074D; // 0x1340(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_044367B5433D1FBC08EA6E9D6B1105D0; // 0x13B8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_69016DA54F6E4B508F54A4A150E0DE90; // 0x1430(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5C32291943FD0E19D0D7BE8E397B3FAC; // 0x1470(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_91C414EA4EC91087482FED83D34DFDE8; // 0x14B8(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_0BE3946B48EF43A5123D88B423F3B2E4; // 0x1590(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_90BB61AF409ED48C09B4C988DE6DF09D; // 0x1688(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_EFB4A4584D74F6CBA79E7FB7DB62D97B; // 0x1760(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_1CDB1B094EF992A31C65F49F5AE5FAB8; // 0x17D8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_E3750B334E5F65E81F0ED78EC2E89523; // 0x1850(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15B13B5B45864179033C2E84303E138C; // 0x1890(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_35F104CB42B8F8BA0F2ECCA27DF39915; // 0x18D8(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2C90BEB04399C298B5B0A5AA95E24D52; // 0x19B0(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_E7A7ECCF42CB9B2AE5409FAAE912720E; // 0x1AA8(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_70037CAA4A6CF9EB432361AEEA664113; // 0x1B80(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_04509425446EC2AD4CA847B744BD12E1; // 0x1BF8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_00B683894BCFE4BB119E54958E61DCD9; // 0x1C70(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5FFAA54D4C2DD8A036FC829A2C78FF4A; // 0x1CB0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CEE3769140C30850A7077CB78AAB487B; // 0x1CF8(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D55523004AFE7581631A40947F53712F; // 0x1D40(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_C88A3259454ED9B2F5C4599846E129E8; // 0x1E18(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_BC4BA9F14D43682AFC3F5EBB10FCC17B; // 0x1F10(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_F22F86A44FAAE4E4B4FB818144D52B7B; // 0x1FE8(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_CAED3BC64FC0F6E3DBB87492344DDC76; // 0x2060(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_0C938E074183CB5470329F8DFF09E2EA; // 0x20D8(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_118B062242476D24B8FF70867E1C3B91; // 0x2118(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_07C5D6F44B2C990D8C2342AB641A559B; // 0x2160(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_A7DB646F4DBBDBAEF26C24B51530197B; // 0x21A8(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_833BF8E44A4304F1B283C8B6F5E0AC63; // 0x2280(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D398B02B49909E8853855EA4C209F874; // 0x2378(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_36F1C3F942C05FF6F7A6809628F292A5; // 0x2450(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_8B0F3EFB46CC70C9D84C708CD8AABAB9; // 0x24C8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_9DD8586342E9C1175091ED85CF6F15D0; // 0x2540(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_913B2CA44A60399418F2CAB1B787C2FE; // 0x2580(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FA44D83E4D45F071263D7E975D443A27; // 0x25C8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8C81C5E845C59CAEEDE0F1876ADE4A60; // 0x2610(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8AEA0B3F4279413871125DAC485EFDE9; // 0x2658(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_D88236114D84388C91030AA18DACAFDB; // 0x2730(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_CAA9991B4EC490CE78CEB59D60DC0A29; // 0x2828(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_958EE168483BFFFB63280D8A73DB906C; // 0x2900(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_5E4AE134427F35D2E2B73AAAFE88C7DF; // 0x2978(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_5B21D8E84BD8AAEF21186DA8C18835CF; // 0x29F0(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B82BD80445D09C1D5B8DCFAE1DDFC1BC; // 0x2A30(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_DAAD4C7A4809D6AF10094D9A41B479D5; // 0x2A78(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D84F4C4B4CDCA14ED0EB9CB3F6CA5768; // 0x2AC0(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_ED02688D4D226A9989D5AA8ADB998DA9; // 0x2B98(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_BAE9A7064AD94074931B048AE5B8A613; // 0x2C90(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_8C4E444A41CE9A4415BB538423140C3D; // 0x2D68(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_1D7140174FD8882E3380508DD8988B51; // 0x2DE0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_39882C6E4F07F134D9E732AD7D831633; // 0x2E58(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BBD2D6024311735F71840BB22E5C09CD; // 0x2E98(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_305E2C164A6451788DB19980F8A6D00C; // 0x2EE0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4744C7BC41968473D6EBC6B5C6DB4F1D; // 0x2F28(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_B9F55BB84064C9A1A0F3BEB62B540DEF; // 0x2F70(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_24DC3A264793ACCE7A44E5BA83A36220; // 0x3048(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20E7B65C4CEDC1EB6340608304F5657B; // 0x3140(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_3C298E2F4C4B686692A58AB900041EC4; // 0x3218(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_1B8B40634077F27E82D3BB9C320426B5; // 0x3290(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_1B9BEF37403F288695129EB710EA0DE0; // 0x3308(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3041EC43407AECE0B31C0DBC3B7EFCC4; // 0x3348(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_68E3009F468E40F8E22CCDA662F0599E; // 0x3390(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8CADF952440DC56EB17143A1228B8656; // 0x3468(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_ECA84FC94D7D7D2468B09F8CD20F70E9; // 0x3560(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_2924716C446118497D74A78B259B9AC1; // 0x3638(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_0158EC1048E2717A68E46CAF45C90CD5; // 0x36B0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_178550DF4D58A0F498DC6EB9099CB37C; // 0x3728(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3BD8162547C3FA9478E65784EB7F0AC7; // 0x3768(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6281FA8F4CED693E224A6BA9BDC80BE3; // 0x37B0(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_0A33F1A94523D7FCC3C991841F813538; // 0x37F8(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6B4276CC48E040A3F809AEA0B2D81D2E; // 0x38D0(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_FE215EEC4D700380455675BFC01EBE0E; // 0x39C8(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_2569BF204181567A9ADBC5A34AB59701; // 0x3AA0(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_23C505C2404F5A4AB6029F8693922583; // 0x3B18(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_AE88EE334D0CD38B452FC1BDD5B1BF3D; // 0x3B90(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B1019ACC45ADCAE7661665BFFB9A276E; // 0x3BD0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47198DCF41ADC882699FEC83C8649382; // 0x3C18(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_55836A924A0C2BD5B845CB87C3E6AFC9; // 0x3CB8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FB9CF19B4A11D6C0DF378EADE72BCB4B; // 0x3CF8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5E3677D8448064E3BCD3B88B731F1994; // 0x3D98(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_322EB4FF479B6F9E26452688AC80C182; // 0x3DD8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_BBFC552D45FCDC324A62F7B9A614DFC2; // 0x3E78(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10632E3B40479B5916AAA4A670E7C28D; // 0x3EB8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_B0C955154AC7396EA397AF93659BDCD7; // 0x3F58(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F28CD8624B08D92417B8DC814FF42BA8; // 0x3F98(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D89F72244123111FA9AFAC8F3E350C4A; // 0x3FE0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_F6C89CD149DB048E53E2FCB703C4E060; // 0x4080(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_86ED2C734BE5C6ED39108A81DF042C2F; // 0x40C0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33BACB3B4E9C8009A2F5D18CA0891AEC; // 0x4160(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BFF2A9834210FE0F57A007AB2BF499D4; // 0x41A0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2879BBEC433A18984E80E1A134B2C0A6; // 0x4240(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A380B02B4A24FACEBAFACAA986DB6EDF; // 0x4280(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21DBCFC8403714489969B9A8484FD38B; // 0x4320(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_A5567F0A4ED0B9916E954599C127D62F; // 0x4360(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11C1452543510C3CE71047B65160F362; // 0x4440(0x00D0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_DF3BF2D246EDDF317A39E28961C5CB80; // 0x4510(0x00D8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_185BCD6E48169B1BAF52D7A372B7EDB8; // 0x45E8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4084FBB44244C82A628B89BCCB24E1D8; // 0x4630(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1FFBAA2F441F9CC552E1BE848E71E010; // 0x4678(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_695E3FE342758F4160CB3EBD0FCA27C1; // 0x46C0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6C9C23A348D9088E2993E8A138C775B4; // 0x4708(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7A7CE8244046FD99C0559EAA32D41FA3; // 0x4750(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9D24F092450DEF7A0FC97895B7D28EFF; // 0x4798(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0F5B0A5B43EB9241DCF268ACF0958772; // 0x47E0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B6E82571420EF2FC6DD1C7836E1FA1C3; // 0x4828(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1997B8594182964CAE48F9B0DA1E5B94; // 0x4870(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6240E50A4EDE92E274327EADB0B7F272; // 0x48B8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0C75D1AA4CDC817A05EAFCA87D1EA431; // 0x4900(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_055F83094C39F14F3C14E9BF8C1F6532; // 0x4948(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21CBB2974E915A1936526B93DA0D2C7C; // 0x4990(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_CE33FAC542A1C2976A1E238BB8706605; // 0x49D8(0x00D8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_051DC64549D03440935650BB22332FA7; // 0x4AB0(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2D8A047046903CF8D218319C7DF767D5; // 0x4BA8(0x00D8)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_EF945D884B10B01A06ECF58B5E12180B; // 0x4C80(0x0078)
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_04E3C42C47E2F23A425BE39AEAC89C5E; // 0x4CF8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_AD098E8243608AB9D9DF818D6CFCCE52; // 0x4D70(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3F116E1B456902E8D2F00E9D14CC5BF5; // 0x4DB0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_D972084543E14E130F3227B2F48EA57F; // 0x4DF8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B76900234A5B6E7A03EB9EB5ADAA72C3; // 0x4E40(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12ED1B0E43C8097B5A2150927D1C2777; // 0x4E88(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6CD19A60439162AE0EB0288ABC102F27; // 0x4F28(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AC35360D4A814DCD5FDF69901D7CEB3D; // 0x4F68(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_916B915845594049721867AC2C4E690E; // 0x5008(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_01503E4946E3AA7E028E71A7681E5723; // 0x5048(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3E61D31345DE7B5A7837068678DE6079; // 0x50E8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5F8AB555402F5FB6E1A7668C1792284F; // 0x5128(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_E90E839445CE332FBB3518B73D62972B; // 0x51C8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2CC15CC84998FC34D36DDAACCF3F5880; // 0x5208(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29F6AD6E48D55C982EFAAD8BAFEBBDA8; // 0x52A8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2B4A29FA48747D2C6BF5C2877EB784B0; // 0x52E8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_80B4E3774AFCF29DBA658EA37976DEA3; // 0x5388(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0B3EF09044D60ED57C8BDF804AB9E9BB; // 0x53C8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_B1F4AB624902215FA425A789C89F756A; // 0x5468(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_966BB85C469CC45FF47F0986BB7ACE28; // 0x54A8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_645F9FED4EE34E2002EC71B0C7384B94; // 0x5548(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2B962DF54AAB409D9A2C95B0010D92DB; // 0x5588(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_B659D0D24CB848EF20D41AA97986D6A6; // 0x5628(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4544C61E41682D4411FB0AB8102313A7; // 0x5668(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_0A5A56D94BD00DE37C144C915BFA3AAE; // 0x56B0(0x00E0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_FB53909F4DF58E19E7FF1596032A4A96; // 0x5790(0x00D8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_B9A4FC534980F965DEB5B6B5F2CE323A; // 0x5868(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_00564A0F49EF930FDF382B82A0A537AA; // 0x58B0(0x0048)
		float                                                      Speed;                                                   // 0x58F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAngryFromHit;                                          // 0x58FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHit;                                                   // 0x58FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanIBeHit;                                               // 0x58FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2M4U[0x1];                                   // 0x58FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AnimGender;                                              // 0x5900(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanIdleEvent;                                            // 0x5904(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PNI4[0x3];                                   // 0x5905(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdleStart;                                               // 0x5908(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFaceList                                                  OveExpression;                                           // 0x590C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDelivering;                                            // 0x590D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEndOfLoop;                                             // 0x590E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsInputDelivered;                                        // 0x590F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsExtraCatch;                                            // 0x5910(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRemoving;                                              // 0x5911(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_118B062242476D24B8FF70867E1C3B91();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_ED02688D4D226A9989D5AA8ADB998DA9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_C88A3259454ED9B2F5C4599846E129E8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_24DC3A264793ACCE7A44E5BA83A36220();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_CEE3769140C30850A7077CB78AAB487B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_8CADF952440DC56EB17143A1228B8656();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_D88236114D84388C91030AA18DACAFDB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_6281FA8F4CED693E224A6BA9BDC80BE3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_6B4276CC48E040A3F809AEA0B2D81D2E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_2C90BEB04399C298B5B0A5AA95E24D52();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_0BE3946B48EF43A5123D88B423F3B2E4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_BlendListByBool_11C1452543510C3CE71047B65160F362();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_185BCD6E48169B1BAF52D7A372B7EDB8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_4084FBB44244C82A628B89BCCB24E1D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_1FFBAA2F441F9CC552E1BE848E71E010();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_695E3FE342758F4160CB3EBD0FCA27C1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_6C9C23A348D9088E2993E8A138C775B4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_7A7CE8244046FD99C0559EAA32D41FA3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_9D24F092450DEF7A0FC97895B7D28EFF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_300FF58B40E3B6A6A843A69E3933DB6F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_0F5B0A5B43EB9241DCF268ACF0958772();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_B6E82571420EF2FC6DD1C7836E1FA1C3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_1997B8594182964CAE48F9B0DA1E5B94();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_6240E50A4EDE92E274327EADB0B7F272();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_0C75D1AA4CDC817A05EAFCA87D1EA431();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_055F83094C39F14F3C14E9BF8C1F6532();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_21CBB2974E915A1936526B93DA0D2C7C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_051DC64549D03440935650BB22332FA7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_5176EC354AD164D47DC2F68F41AB15B9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_3F116E1B456902E8D2F00E9D14CC5BF5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_D972084543E14E130F3227B2F48EA57F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_4C8C104941359391E9B97DAE9AECAB9A();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BeingHit();
		void CanBeHit();
		void AnimNotify_HitStart();
		void AnimNotify_HitEnd();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TransitionResult_07C5D6F44B2C990D8C2342AB641A559B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_833BF8E44A4304F1B283C8B6F5E0AC63();
		void AnimNotify_WrongOrder();
		void FoodInput();
		void LoopEnd();
		void AnimNotify_Delivered();
		void AnimNotify_BakeInputSucess();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Baker_AnimGraphNode_TwoWayBlend_1AC95D3E4371BDBD269CE48DFE6AA080();
		void AnimNotify_ExtraCatchDone();
		void FoodOutput();
		void AnimNotify_NowFine();
		void AnimNotify_PanicEyeFix();
		void AnimNotify_PanicEyeOver();
		void ExecuteUbergraph_AnimBP_Baker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
