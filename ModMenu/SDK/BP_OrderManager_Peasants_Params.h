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
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SpawnCustomer
	 */
	struct ABP_OrderManager_Peasants_C_SpawnCustomer_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SplineRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8EIV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_Order                                       Order;                                                   // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		Enum_Game_Stages                                           GameStage;                                               // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U1S1[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A8T0[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetupOrder
	 */
	struct ABP_OrderManager_Peasants_C_SetupOrder_Params
	{
	public:
		class FString                                              OrderString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OrderValue;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetOrderInDeliveryBay
	 */
	struct ABP_OrderManager_Peasants_C_SetOrderInDeliveryBay_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetOrderString
	 */
	struct ABP_OrderManager_Peasants_C_GetOrderString_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetOrderString_Peasants
	 */
	struct ABP_OrderManager_Peasants_C_GetOrderString_Peasants_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetMeal
	 */
	struct ABP_OrderManager_Peasants_C_GetMeal_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetBread
	 */
	struct ABP_OrderManager_Peasants_C_GetBread_Params
	{
	public:
		class FText                                                BreadType;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetDrink
	 */
	struct ABP_OrderManager_Peasants_C_GetDrink_Params
	{
	public:
		bool                                                       Meal;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJ9L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Drink;                                                   // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetPlateMain
	 */
	struct ABP_OrderManager_Peasants_C_GetPlateMain_Params
	{
	public:
		class FText                                                Plate;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetPottage
	 */
	struct ABP_OrderManager_Peasants_C_GetPottage_Params
	{
	public:
		class FText                                                Pottage;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetSoup
	 */
	struct ABP_OrderManager_Peasants_C_GetSoup_Params
	{
	public:
		TArray<class FText>                                        SoupOrder;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UserConstructionScript
	 */
	struct ABP_OrderManager_Peasants_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockOatmeal
	 */
	struct ABP_OrderManager_Peasants_C_UnlockOatmeal_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockCheese
	 */
	struct ABP_OrderManager_Peasants_C_UnlockCheese_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockPottage:Pea
	 */
	struct ABP_OrderManager_Peasants_C_UnlockPottagePea_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockSoup
	 */
	struct ABP_OrderManager_Peasants_C_UnlockSoup_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockMeals
	 */
	struct ABP_OrderManager_Peasants_C_UnlockMeals_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockAle
	 */
	struct ABP_OrderManager_Peasants_C_UnlockAle_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockPottage:Bean
	 */
	struct ABP_OrderManager_Peasants_C_UnlockPottageBean_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockSoupIngredients
	 */
	struct ABP_OrderManager_Peasants_C_UnlockSoupIngredients_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SpawnOrders
	 */
	struct ABP_OrderManager_Peasants_C_SpawnOrders_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.ClearStats
	 */
	struct ABP_OrderManager_Peasants_C_ClearStats_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.IncreaseOrderDifficulty
	 */
	struct ABP_OrderManager_Peasants_C_IncreaseOrderDifficulty_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetBonusCustomerValueAndTime
	 */
	struct ABP_OrderManager_Peasants_C_GetBonusCustomerValueAndTime_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetCustomerWidget
	 */
	struct ABP_OrderManager_Peasants_C_SetCustomerWidget_Params
	{
	public:
		int32_t                                                    OrderIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.BonusCustomerCounter
	 */
	struct ABP_OrderManager_Peasants_C_BonusCustomerCounter_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.LoadGame
	 */
	struct ABP_OrderManager_Peasants_C_LoadGame_Params
	{	};

	/**
	 * Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.ExecuteUbergraph_BP_OrderManager_Peasants
	 */
	struct ABP_OrderManager_Peasants_C_ExecuteUbergraph_BP_OrderManager_Peasants_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TXH6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
