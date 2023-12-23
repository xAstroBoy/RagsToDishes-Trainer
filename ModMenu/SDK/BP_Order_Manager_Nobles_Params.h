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
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SpawnCustomer
	 */
	struct ABP_Order_Manager_Nobles_C_SpawnCustomer_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SplineRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXV9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_Order                                       Order;                                                   // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		Enum_Game_Stages                                           GameStage;                                               // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MCKH[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CNA[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetupOrder
	 */
	struct ABP_Order_Manager_Nobles_C_SetupOrder_Params
	{
	public:
		class FString                                              OrderString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OrderValue;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetOrderInDeliveryBay
	 */
	struct ABP_Order_Manager_Nobles_C_SetOrderInDeliveryBay_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetOrderString
	 */
	struct ABP_Order_Manager_Nobles_C_GetOrderString_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetOrderString_Nobles
	 */
	struct ABP_Order_Manager_Nobles_C_GetOrderString_Nobles_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetMeal
	 */
	struct ABP_Order_Manager_Nobles_C_GetMeal_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetStewIngredients
	 */
	struct ABP_Order_Manager_Nobles_C_GetStewIngredients_Params
	{
	public:
		TArray<class FText>                                        StewOrder;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetPieIngredients
	 */
	struct ABP_Order_Manager_Nobles_C_GetPieIngredients_Params
	{
	public:
		class FText                                                Pie;                                                     // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetSkewerIngredients
	 */
	struct ABP_Order_Manager_Nobles_C_GetSkewerIngredients_Params
	{
	public:
		TArray<class FText>                                        Skewer;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetDrink
	 */
	struct ABP_Order_Manager_Nobles_C_GetDrink_Params
	{
	public:
		class FText                                                Drink;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetBread
	 */
	struct ABP_Order_Manager_Nobles_C_GetBread_Params
	{
	public:
		class FText                                                BreadType;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.UserConstructionScript
	 */
	struct ABP_Order_Manager_Nobles_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.ClearStats
	 */
	struct ABP_Order_Manager_Nobles_C_ClearStats_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Pie
	 */
	struct ABP_Order_Manager_Nobles_C_UnlockPie_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Wine
	 */
	struct ABP_Order_Manager_Nobles_C_UnlockWine_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Stew
	 */
	struct ABP_Order_Manager_Nobles_C_UnlockStew_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:SeasoningLevel1
	 */
	struct ABP_Order_Manager_Nobles_C_UnlockSeasoningLevel1_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Fish
	 */
	struct ABP_Order_Manager_Nobles_C_UnlockFish_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:SeasoningLevel2
	 */
	struct ABP_Order_Manager_Nobles_C_UnlockSeasoningLevel2_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SpawnOrders
	 */
	struct ABP_Order_Manager_Nobles_C_SpawnOrders_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.IncreaseOrderDifficulty
	 */
	struct ABP_Order_Manager_Nobles_C_IncreaseOrderDifficulty_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetBonusCustomerValueAndTime
	 */
	struct ABP_Order_Manager_Nobles_C_GetBonusCustomerValueAndTime_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetCustomerWidget
	 */
	struct ABP_Order_Manager_Nobles_C_SetCustomerWidget_Params
	{
	public:
		int32_t                                                    OrderIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.BonusCustomerCounter
	 */
	struct ABP_Order_Manager_Nobles_C_BonusCustomerCounter_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.LoadGame
	 */
	struct ABP_Order_Manager_Nobles_C_LoadGame_Params
	{	};

	/**
	 * Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.ExecuteUbergraph_BP_Order_Manager_Nobles
	 */
	struct ABP_Order_Manager_Nobles_C_ExecuteUbergraph_BP_Order_Manager_Nobles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
