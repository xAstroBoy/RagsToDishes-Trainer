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
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.AddPhysicsSausage
	 */
	struct ABP_Ingredient_Sausage_C_AddPhysicsSausage_Params
	{	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.Grab
	 */
	struct ABP_Ingredient_Sausage_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CA8L[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.RemovePhysicsSausage
	 */
	struct ABP_Ingredient_Sausage_C_RemovePhysicsSausage_Params
	{	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.UserConstructionScript
	 */
	struct ABP_Ingredient_Sausage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.ReceiveBeginPlay
	 */
	struct ABP_Ingredient_Sausage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.BurnIngredient
	 */
	struct ABP_Ingredient_Sausage_C_BurnIngredient_Params
	{	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.CookIngredient
	 */
	struct ABP_Ingredient_Sausage_C_CookIngredient_Params
	{	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.CookAndBurnIngredient
	 */
	struct ABP_Ingredient_Sausage_C_CookAndBurnIngredient_Params
	{	};

	/**
	 * Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.ExecuteUbergraph_BP_Ingredient_Sausage
	 */
	struct ABP_Ingredient_Sausage_C_ExecuteUbergraph_BP_Ingredient_Sausage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
