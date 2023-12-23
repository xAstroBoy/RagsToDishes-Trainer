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
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.ReturnLid
	 */
	struct ABP_Stew_Pot_C_ReturnLid_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.SetCookedMeshes
	 */
	struct ABP_Stew_Pot_C_SetCookedMeshes_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.AddVegetable
	 */
	struct ABP_Stew_Pot_C_AddVegetable_Params
	{
	public:
		class ABP_Ingredient_C*                                    Ingredient;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.SetWaterPosition
	 */
	struct ABP_Stew_Pot_C_SetWaterPosition_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.SetStewWaterColour
	 */
	struct ABP_Stew_Pot_C_SetStewWaterColour_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.SetUpEquipment
	 */
	struct ABP_Stew_Pot_C_SetUpEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.UserConstructionScript
	 */
	struct ABP_Stew_Pot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.CookingTimeline__FinishedFunc
	 */
	struct ABP_Stew_Pot_C_CookingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.CookingTimeline__UpdateFunc
	 */
	struct ABP_Stew_Pot_C_CookingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.BurningTimeline__FinishedFunc
	 */
	struct ABP_Stew_Pot_C_BurningTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.BurningTimeline__UpdateFunc
	 */
	struct ABP_Stew_Pot_C_BurningTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.WaterAnimationTimeline__FinishedFunc
	 */
	struct ABP_Stew_Pot_C_WaterAnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.WaterAnimationTimeline__UpdateFunc
	 */
	struct ABP_Stew_Pot_C_WaterAnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.ReceiveBeginPlay
	 */
	struct ABP_Stew_Pot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Stew_Pot_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QC7I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.IngredientCheck
	 */
	struct ABP_Stew_Pot_C_IngredientCheck_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.CookStew
	 */
	struct ABP_Stew_Pot_C_CookStew_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.EmptyEquipment
	 */
	struct ABP_Stew_Pot_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.StopCooking
	 */
	struct ABP_Stew_Pot_C_StopCooking_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.ClearActorsFromPot
	 */
	struct ABP_Stew_Pot_C_ClearActorsFromPot_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.AnimateWater
	 */
	struct ABP_Stew_Pot_C_AnimateWater_Params
	{	};

	/**
	 * Function BP_Stew_Pot.BP_Stew_Pot_C.ExecuteUbergraph_BP_Stew_Pot
	 */
	struct ABP_Stew_Pot_C_ExecuteUbergraph_BP_Stew_Pot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OJS3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
