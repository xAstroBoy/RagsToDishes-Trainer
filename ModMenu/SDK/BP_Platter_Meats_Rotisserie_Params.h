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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.Grab
	 */
	struct ABP_Platter_Meats_Rotisserie_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XIAE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.IsHeldByController
	 */
	struct ABP_Platter_Meats_Rotisserie_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.UpgradeEquipment
	 */
	struct ABP_Platter_Meats_Rotisserie_C_UpgradeEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MaxLevel;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_68TC[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.UserConstructionScript
	 */
	struct ABP_Platter_Meats_Rotisserie_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.ButtonAnimationTimeline__FinishedFunc
	 */
	struct ABP_Platter_Meats_Rotisserie_C_ButtonAnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.ButtonAnimationTimeline__UpdateFunc
	 */
	struct ABP_Platter_Meats_Rotisserie_C_ButtonAnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.GrillingTimeline__FinishedFunc
	 */
	struct ABP_Platter_Meats_Rotisserie_C_GrillingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.GrillingTimeline__UpdateFunc
	 */
	struct ABP_Platter_Meats_Rotisserie_C_GrillingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.AnimateButton
	 */
	struct ABP_Platter_Meats_Rotisserie_C_AnimateButton_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.CookMeat
	 */
	struct ABP_Platter_Meats_Rotisserie_C_CookMeat_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.Release
	 */
	struct ABP_Platter_Meats_Rotisserie_C_Release_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.RemoveActorFromEquipment
	 */
	struct ABP_Platter_Meats_Rotisserie_C_RemoveActorFromEquipment_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.BndEvt__ButtonBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Platter_Meats_Rotisserie_C_BndEvt__ButtonBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K6T0[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Platter_Meats_Rotisserie_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7JOU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.SetUpEquipment
	 */
	struct ABP_Platter_Meats_Rotisserie_C_SetUpEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.DisableHighlight
	 */
	struct ABP_Platter_Meats_Rotisserie_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.EnableHighlight
	 */
	struct ABP_Platter_Meats_Rotisserie_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.EmptyEquipment
	 */
	struct ABP_Platter_Meats_Rotisserie_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.ExecuteUbergraph_BP_Platter_Meats_Rotisserie
	 */
	struct ABP_Platter_Meats_Rotisserie_C_ExecuteUbergraph_BP_Platter_Meats_Rotisserie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Platter_Meats_Rotisserie.BP_Platter_Meats_Rotisserie_C.MeatGrilled__DelegateSignature
	 */
	struct ABP_Platter_Meats_Rotisserie_C_MeatGrilled__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
