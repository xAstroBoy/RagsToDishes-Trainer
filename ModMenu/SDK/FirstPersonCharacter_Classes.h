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
	 * BlueprintGeneratedClass FirstPersonCharacter.FirstPersonCharacter_C
	 * Size -> 0x0049 (FullSize[0x0781] - InheritedSize[0x0738])
	 */
	class AFirstPersonCharacter_C : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_C3C6[0x8];                                   // 0x0738(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    FirstPersonCamera;                                       // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GunOffset;                                               // 0x0750(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseTurnRate;                                            // 0x075C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseLookUpRate;                                          // 0x0760(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingMotionControllers;                                  // 0x0764(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2VJT[0x3];                                   // 0x0765(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Hand_C*                                          hand;                                                    // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_LoopManager_Peasants_C*                          LoopManager;                                             // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_OrderManager_Peasants_C*                         OrderManager;                                            // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MenuInteractionEnabled;                                  // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_P_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_N_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_U_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue);
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue);
		void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35(float AxisValue);
		void ReceiveBeginPlay();
		void SetMenuInteraction(bool On);
		void ExecuteUbergraph_FirstPersonCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
