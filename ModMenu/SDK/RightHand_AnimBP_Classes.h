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
	 * AnimBlueprintGeneratedClass RightHand_AnimBP.RightHand_AnimBP_C
	 * Size -> 0x06AA (FullSize[0x0A02] - InheritedSize[0x0358])
	 */
	class URightHand_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_PT9F[0x8];                                   // 0x0358(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_5AC1092F4EF0949D151F1D9EC2FBEA7D;     // 0x0368(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6A60450A405BE655DCA72B9806429DF9; // 0x03A8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11CA8C00472361259615C1B2062DDB12; // 0x03F0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E6BCE0C34BA421105333FAADF8D8D976; // 0x0438(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C46623AD4410CF6BCB511887DCC9425C; // 0x0480(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B19F119046592E38EFFDB29664418C77; // 0x04C8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7DF9EB144BEC0C0BBCEA42A89DDA106E; // 0x0510(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B4AFC69D43310DC0EF7816818A778196; // 0x0558(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0A2890EB49330EB45499729857877C2D; // 0x05A0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_C33340DD47E0AB27B749D8A6BFBAFF1A; // 0x0640(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6324C595434CEAD73746DB902C436EDA; // 0x0680(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_E9535D444BBEE6F17C9570B96E0530D3; // 0x0720(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9E7EBEFD4D42D5CFD5CCADA181586F26; // 0x0760(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_F1C9AA534378757828C3C7B3269A96D4; // 0x0800(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_75A3892843928BB9F13CFAA755913149; // 0x0840(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_D5B0FC664AB40D0BFA253E84C40C75B8; // 0x08E0(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_1470B5E54FD8AF7D789A848AD06FAE88; // 0x0920(0x00E0)
		Enum_Hand_State                                            GripState;                                               // 0x0A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanGrabObject;                                           // 0x0A01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_TransitionResult_E6BCE0C34BA421105333FAADF8D8D976();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_TransitionResult_C46623AD4410CF6BCB511887DCC9425C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_TransitionResult_B19F119046592E38EFFDB29664418C77();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_TransitionResult_7DF9EB144BEC0C0BBCEA42A89DDA106E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_TransitionResult_11CA8C00472361259615C1B2062DDB12();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_TransitionResult_B4AFC69D43310DC0EF7816818A778196();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_TransitionResult_6A60450A405BE655DCA72B9806429DF9();
		void ExecuteUbergraph_RightHand_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
