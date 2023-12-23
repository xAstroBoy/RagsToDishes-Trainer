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
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SpawnCustomer
	 */
	struct ABP_Order_Manager_Royals_C_SpawnCustomer_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SplineRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8XCD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_Order                                       Order;                                                   // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		Enum_Game_Stages                                           GameStage;                                               // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6879[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUPO[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetMeal
	 */
	struct ABP_Order_Manager_Royals_C_GetMeal_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetupOrder
	 */
	struct ABP_Order_Manager_Royals_C_SetupOrder_Params
	{
	public:
		class FString                                              OrderString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OrderValue;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetOrderInDeliveryBay
	 */
	struct ABP_Order_Manager_Royals_C_SetOrderInDeliveryBay_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetOrderString
	 */
	struct ABP_Order_Manager_Royals_C_GetOrderString_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetPlatterIngredients
	 */
	struct ABP_Order_Manager_Royals_C_GetPlatterIngredients_Params
	{
	public:
		TArray<class FText>                                        Platter;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetCakeIngredients
	 */
	struct ABP_Order_Manager_Royals_C_GetCakeIngredients_Params
	{
	public:
		class FText                                                Cake;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetFruitsIngredients
	 */
	struct ABP_Order_Manager_Royals_C_GetFruitsIngredients_Params
	{
	public:
		TArray<class FText>                                        Fruits;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetOrderString_Royals
	 */
	struct ABP_Order_Manager_Royals_C_GetOrderString_Royals_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetDrink
	 */
	struct ABP_Order_Manager_Royals_C_GetDrink_Params
	{
	public:
		class FText                                                Drink;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetPieIngredients
	 */
	struct ABP_Order_Manager_Royals_C_GetPieIngredients_Params
	{
	public:
		bool                                                       NoApple;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_048C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Pie;                                                     // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UserConstructionScript
	 */
	struct ABP_Order_Manager_Royals_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockCake
	 */
	struct ABP_Order_Manager_Royals_C_UnlockCake_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockPlatters
	 */
	struct ABP_Order_Manager_Royals_C_UnlockPlatters_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockChocolate
	 */
	struct ABP_Order_Manager_Royals_C_UnlockChocolate_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockLobster
	 */
	struct ABP_Order_Manager_Royals_C_UnlockLobster_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.IncreaseOrderDifficulty
	 */
	struct ABP_Order_Manager_Royals_C_IncreaseOrderDifficulty_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.ClearStats
	 */
	struct ABP_Order_Manager_Royals_C_ClearStats_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SpawnOrders
	 */
	struct ABP_Order_Manager_Royals_C_SpawnOrders_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetCustomerWidget
	 */
	struct ABP_Order_Manager_Royals_C_SetCustomerWidget_Params
	{
	public:
		int32_t                                                    OrderIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.BonusCustomerCounter
	 */
	struct ABP_Order_Manager_Royals_C_BonusCustomerCounter_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.LoadGame
	 */
	struct ABP_Order_Manager_Royals_C_LoadGame_Params
	{	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetBonusCustomerValueAndTime
	 */
	struct ABP_Order_Manager_Royals_C_GetBonusCustomerValueAndTime_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.ExecuteUbergraph_BP_Order_Manager_Royals
	 */
	struct ABP_Order_Manager_Royals_C_ExecuteUbergraph_BP_Order_Manager_Royals_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
