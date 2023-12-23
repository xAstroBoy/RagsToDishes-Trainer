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
	 * Function BP_CoinChest.BP_CoinChest_C.Grab
	 */
	struct ABP_CoinChest_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0P9Y[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.IsHeldByController
	 */
	struct ABP_CoinChest_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.GrabCoin
	 */
	struct ABP_CoinChest_C_GrabCoin_Params
	{
	public:
		bool                                                       CanGrab;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UY8A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Coin_C*                                          Coin;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.CleanupSpawnedCoins
	 */
	struct ABP_CoinChest_C_CleanupSpawnedCoins_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.UserConstructionScript
	 */
	struct ABP_CoinChest_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.SetMoneyStackLevel
	 */
	struct ABP_CoinChest_C_SetMoneyStackLevel_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.CloseChest
	 */
	struct ABP_CoinChest_C_CloseChest_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.OpenChest
	 */
	struct ABP_CoinChest_C_OpenChest_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.StealGems
	 */
	struct ABP_CoinChest_C_StealGems_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.ReceiveBeginPlay
	 */
	struct ABP_CoinChest_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.ResetMoneyStackLevel
	 */
	struct ABP_CoinChest_C_ResetMoneyStackLevel_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.DisableHighlight
	 */
	struct ABP_CoinChest_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.BirdTutorial
	 */
	struct ABP_CoinChest_C_BirdTutorial_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.EnableHighlight
	 */
	struct ABP_CoinChest_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.Release
	 */
	struct ABP_CoinChest_C_Release_Params
	{	};

	/**
	 * Function BP_CoinChest.BP_CoinChest_C.ExecuteUbergraph_BP_CoinChest
	 */
	struct ABP_CoinChest_C_ExecuteUbergraph_BP_CoinChest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
