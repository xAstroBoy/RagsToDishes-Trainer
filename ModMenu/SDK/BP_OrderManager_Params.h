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
	 * Function BP_OrderManager.BP_OrderManager_C.SetupCustomerSpawnPoints
	 */
	struct ABP_OrderManager_C_SetupCustomerSpawnPoints_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.SpawnCustomer
	 */
	struct ABP_OrderManager_C_SpawnCustomer_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SplineRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JMUL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_Order                                       Order;                                                   // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		Enum_Game_Stages                                           GameStage;                                               // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_50VM[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.SetOrderInDeliveryBay
	 */
	struct ABP_OrderManager_C_SetOrderInDeliveryBay_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.SetupOrder
	 */
	struct ABP_OrderManager_C_SetupOrder_Params
	{
	public:
		class FString                                              OrderString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OrderValue;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.SetCustomerWidget
	 */
	struct ABP_OrderManager_C_SetCustomerWidget_Params
	{
	public:
		int32_t                                                    OrderIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.LoadGame
	 */
	struct ABP_OrderManager_C_LoadGame_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.GetBonusCustomerValueAndTime
	 */
	struct ABP_OrderManager_C_GetBonusCustomerValueAndTime_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.SetOrderActive
	 */
	struct ABP_OrderManager_C_SetOrderActive_Params
	{
	public:
		int32_t                                                    OrderIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.GetCustumerSpawnPoint
	 */
	struct ABP_OrderManager_C_GetCustumerSpawnPoint_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SpawnPoint;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P15E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.GetOrderString
	 */
	struct ABP_OrderManager_C_GetOrderString_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.GenerateOrderTagWeighted
	 */
	struct ABP_OrderManager_C_GenerateOrderTagWeighted_Params
	{
	public:
		TArray<struct FStruct_OrderWeights>                        OrderWeights;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FText                                                OrderTag;                                                // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.UserConstructionScript
	 */
	struct ABP_OrderManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.GenerateOrderTag
	 */
	struct ABP_OrderManager_C_GenerateOrderTag_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.GenerateOrder
	 */
	struct ABP_OrderManager_C_GenerateOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.ClearStats
	 */
	struct ABP_OrderManager_C_ClearStats_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.ManageOrders
	 */
	struct ABP_OrderManager_C_ManageOrders_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.ReceiveBeginPlay
	 */
	struct ABP_OrderManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.StartOrders
	 */
	struct ABP_OrderManager_C_StartOrders_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.StopOrders
	 */
	struct ABP_OrderManager_C_StopOrders_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.SpawnOrders
	 */
	struct ABP_OrderManager_C_SpawnOrders_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.IncreaseOrderDifficulty
	 */
	struct ABP_OrderManager_C_IncreaseOrderDifficulty_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.BonusCustomerCounter
	 */
	struct ABP_OrderManager_C_BonusCustomerCounter_Params
	{	};

	/**
	 * Function BP_OrderManager.BP_OrderManager_C.ExecuteUbergraph_BP_OrderManager
	 */
	struct ABP_OrderManager_C_ExecuteUbergraph_BP_OrderManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
