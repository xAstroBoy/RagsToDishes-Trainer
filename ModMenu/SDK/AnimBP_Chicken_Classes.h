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
	 * AnimBlueprintGeneratedClass AnimBP_Chicken.AnimBP_Chicken_C
	 * Size -> 0x029D (FullSize[0x05F5] - InheritedSize[0x0358])
	 */
	class UAnimBP_Chicken_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_CT93[0x8];                                   // 0x0358(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_F9CF5BDA48300968EDAFBDA0BB01E5B8;     // 0x0368(0x0040)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_79244A254954823CBB20B08B26D0F215; // 0x03A8(0x0128)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_F07FD2D44BFF283F4F2084B94C459225; // 0x04D0(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_854C9D204BA435D81958D2A17639F68C; // 0x0510(0x00E0)
		float                                                      Speed;                                                   // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EChickenList                                               ChickenState;                                            // 0x05F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetState(EChickenList State);
		void ExecuteUbergraph_AnimBP_Chicken(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
