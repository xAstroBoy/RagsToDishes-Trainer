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
	 * BlueprintGeneratedClass BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C
	 * Size -> 0x0018 (FullSize[0x0398] - InheritedSize[0x0380])
	 */
	class ABP_Keyboard_Key_Confirm_C : public ABP_Keyboard_Key_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      AnimTL_Location_C9AF11BB4A3C92A662CE89AC2C971442;        // 0x0388(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         AnimTL__Direction_C9AF11BB4A3C92A662CE89AC2C971442;      // 0x038C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_54T4[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  AnimTL;                                                  // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Grab(class USceneComponent* MotionController, class UPhysicsHandleComponent* PhysicsHandle, class UPhysicsHandleComponent* AngularPhysicsHandle, EControllerHand hand, class ABP_MotionController_C* Controller, class USceneComponent* AttachPoint, class AActor** AttachedActor);
		void UserConstructionScript();
		void AnimTL__FinishedFunc();
		void AnimTL__UpdateFunc();
		void ReceiveBeginPlay();
		void AnimateButton();
		void ExecuteUbergraph_BP_Keyboard_Key_Confirm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
