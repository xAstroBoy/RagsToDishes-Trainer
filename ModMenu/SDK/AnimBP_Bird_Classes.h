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
	 * AnimBlueprintGeneratedClass AnimBP_Bird.AnimBP_Bird_C
	 * Size -> 0x070B (FullSize[0x0A63] - InheritedSize[0x0358])
	 */
	class UAnimBP_Bird_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_O32E[0x8];                                   // 0x0358(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_EA997E884D3D49C42065E18C8BBC9A0E;     // 0x0368(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B46D6B9E41D9F80D790100A52E1DA958; // 0x03A8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CB01673F4DE4DDF08336D59F90B7E1F4; // 0x03F0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E7704919409E1FD4AD13599FA67C66AC; // 0x0438(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F480DCE14470E3B7242AE8B6773044F7; // 0x0480(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B727F7874FF95EB23AC7E9A752703C78; // 0x04C8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_A7E5451F49B5E477720B2591CD5455AB; // 0x0568(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_163E41274201FECBC1C12087A2343828; // 0x05A8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4186ED104514B1BDCA79E0868233B16A; // 0x0648(0x0040)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_989945094509287124E6F9AEA1FDED17; // 0x0688(0x0128)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_CFC393224D183E46487906AE3F2A396F; // 0x07B0(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_E1A41FF149E6D2EB7FA77CA9A7C50E1E; // 0x07F0(0x00E0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_17EE7B81411130100F1743A1A1FAE35E;     // 0x08D0(0x0068)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_0A62EB2A48DB09E903BE92BE6B74EE2A; // 0x0938(0x00D8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25D9EC484A07374FEC4752AFBB32F72A; // 0x0A10(0x0048)
		float                                                      Speed;                                                   // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x0A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFlying;                                                // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAtChest;                                               // 0x0A61(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SuccessfulSteal;                                         // 0x0A62(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_0132B2704C8EC0B934E98CAAC137177A(const class FName& NotifyName);
		void OnNotifyBegin_0132B2704C8EC0B934E98CAAC137177A(const class FName& NotifyName);
		void OnInterrupted_0132B2704C8EC0B934E98CAAC137177A(const class FName& NotifyName);
		void OnBlendOut_0132B2704C8EC0B934E98CAAC137177A(const class FName& NotifyName);
		void OnCompleted_0132B2704C8EC0B934E98CAAC137177A(const class FName& NotifyName);
		void OnNotifyEnd_5458517D48268FD134F87392FE1E94FF(const class FName& NotifyName);
		void OnNotifyBegin_5458517D48268FD134F87392FE1E94FF(const class FName& NotifyName);
		void OnInterrupted_5458517D48268FD134F87392FE1E94FF(const class FName& NotifyName);
		void OnBlendOut_5458517D48268FD134F87392FE1E94FF(const class FName& NotifyName);
		void OnCompleted_5458517D48268FD134F87392FE1E94FF(const class FName& NotifyName);
		void OnNotifyEnd_400CF66149D2DD62B47AA88BBAFE002A(const class FName& NotifyName);
		void OnNotifyBegin_400CF66149D2DD62B47AA88BBAFE002A(const class FName& NotifyName);
		void OnInterrupted_400CF66149D2DD62B47AA88BBAFE002A(const class FName& NotifyName);
		void OnBlendOut_400CF66149D2DD62B47AA88BBAFE002A(const class FName& NotifyName);
		void OnCompleted_400CF66149D2DD62B47AA88BBAFE002A(const class FName& NotifyName);
		void OnNotifyEnd_A21FD9E841A4C7566910BB85B971CE85(const class FName& NotifyName);
		void OnNotifyBegin_A21FD9E841A4C7566910BB85B971CE85(const class FName& NotifyName);
		void OnInterrupted_A21FD9E841A4C7566910BB85B971CE85(const class FName& NotifyName);
		void OnBlendOut_A21FD9E841A4C7566910BB85B971CE85(const class FName& NotifyName);
		void OnCompleted_A21FD9E841A4C7566910BB85B971CE85(const class FName& NotifyName);
		void OnNotifyEnd_9BF24A324DD5BDDCB31785B2A3ACACDA(const class FName& NotifyName);
		void OnNotifyBegin_9BF24A324DD5BDDCB31785B2A3ACACDA(const class FName& NotifyName);
		void OnInterrupted_9BF24A324DD5BDDCB31785B2A3ACACDA(const class FName& NotifyName);
		void OnBlendOut_9BF24A324DD5BDDCB31785B2A3ACACDA(const class FName& NotifyName);
		void OnCompleted_9BF24A324DD5BDDCB31785B2A3ACACDA(const class FName& NotifyName);
		void Returned();
		void AtChest();
		void Hit();
		void Squark();
		void Flying();
		void TakeOff();
		void ExecuteUbergraph_AnimBP_Bird(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
