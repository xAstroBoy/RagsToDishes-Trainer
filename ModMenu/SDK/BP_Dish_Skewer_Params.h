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
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.Grab
	 */
	struct ABP_Dish_Skewer_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EFZ1[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.SetCookedMesh
	 */
	struct ABP_Dish_Skewer_C_SetCookedMesh_Params
	{	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.SetSeasoningMesh
	 */
	struct ABP_Dish_Skewer_C_SetSeasoningMesh_Params
	{	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.Season
	 */
	struct ABP_Dish_Skewer_C_Season_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Seasoned;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.GrillSkewer
	 */
	struct ABP_Dish_Skewer_C_GrillSkewer_Params
	{	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.SetSkewerMesh
	 */
	struct ABP_Dish_Skewer_C_SetSkewerMesh_Params
	{
	public:
		class FName                                                Ingredient;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.UserConstructionScript
	 */
	struct ABP_Dish_Skewer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.ReceiveBeginPlay
	 */
	struct ABP_Dish_Skewer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.EmptyDish
	 */
	struct ABP_Dish_Skewer_C_EmptyDish_Params
	{	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.ReceiveEndPlay
	 */
	struct ABP_Dish_Skewer_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Skewer.BP_Dish_Skewer_C.ExecuteUbergraph_BP_Dish_Skewer
	 */
	struct ABP_Dish_Skewer_C_ExecuteUbergraph_BP_Dish_Skewer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
