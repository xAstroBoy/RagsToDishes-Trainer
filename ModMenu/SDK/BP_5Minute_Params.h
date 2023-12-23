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
	 * Function BP_5Minute.BP_5Minute_C.CalculateTimeBonus
	 */
	struct ABP_5Minute_C_CalculateTimeBonus_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SavePersonalBest_Offline
	 */
	struct ABP_5Minute_C_SavePersonalBest_Offline_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SavePersonalBest_Online
	 */
	struct ABP_5Minute_C_SavePersonalBest_Online_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckIfHighScore_Online
	 */
	struct ABP_5Minute_C_CheckIfHighScore_Online_Params
	{
	public:
		bool                                                       HighScore;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U2YU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SpawnKeyboard
	 */
	struct ABP_5Minute_C_SpawnKeyboard_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CreateComboUI
	 */
	struct ABP_5Minute_C_CreateComboUI_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SpawnBird
	 */
	struct ABP_5Minute_C_SpawnBird_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SpawnLoopSelectionMenu
	 */
	struct ABP_5Minute_C_SpawnLoopSelectionMenu_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_InLoopMenu                                            MenuOption;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WQY1[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_InLoop_Selection_Menu_C*                         Ref;                                                     // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SpawnLoopMenu
	 */
	struct ABP_5Minute_C_SpawnLoopMenu_Params
	{
	public:
		bool                                                       CanBeGrabbed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N9Y2[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_Loop_Menu_Options                                     Options;                                                 // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AC31[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Loop_Menu_Choice_Option_C*                       MenuRef;                                                 // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.MealDelivered
	 */
	struct ABP_5Minute_C_MealDelivered_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0080(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Main;                                                    // 0x0084(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OrderCorrect;                                            // 0x0085(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MealPartCorrect;                                         // 0x0086(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P9IN[0x1];                                   // 0x0087(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SpawnCustomer
	 */
	struct ABP_5Minute_C_SpawnCustomer_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SplineRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WBRD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_Order                                       Order;                                                   // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		Enum_Game_Stages                                           GameStage;                                               // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IIUU[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.DeliveryBay2_HandIn
	 */
	struct ABP_5Minute_C_DeliveryBay2_HandIn_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.DeliveryBay2_Throw
	 */
	struct ABP_5Minute_C_DeliveryBay2_Throw_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckIfHighScore
	 */
	struct ABP_5Minute_C_CheckIfHighScore_Params
	{
	public:
		bool                                                       HighScore;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4F68[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.OrderCorrect
	 */
	struct ABP_5Minute_C_OrderCorrect_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHTG[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                CoinStack;                                               // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ParticleEffectSpawnPoint;                                // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Burnt;                                                   // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ComboMoneyBurstMealPart
	 */
	struct ABP_5Minute_C_ComboMoneyBurstMealPart_Params
	{
	public:
		class UStaticMeshComponent*                                MoneyStack;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ActivateComboEffects
	 */
	struct ABP_5Minute_C_ActivateComboEffects_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckCombo
	 */
	struct ABP_5Minute_C_CheckCombo_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.AcceptOrder
	 */
	struct ABP_5Minute_C_AcceptOrder_Params
	{
	public:
		struct FStruct_Order                                       CheckOrder;                                              // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    CheckIndex;                                              // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Burnt;                                                   // 0x007C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QA42[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckFoodBurned
	 */
	struct ABP_5Minute_C_CheckFoodBurned_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OrderNewValue;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Burnt;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckDeliveryPitch
	 */
	struct ABP_5Minute_C_CheckDeliveryPitch_Params
	{
	public:
		bool                                                       Bonus;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y2TW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GetCustomerOrderIndex
	 */
	struct ABP_5Minute_C_GetCustomerOrderIndex_Params
	{
	public:
		int32_t                                                    Bay;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SpawnCoinsWhenOrderCompleted
	 */
	struct ABP_5Minute_C_SpawnCoinsWhenOrderCompleted_Params
	{
	public:
		int32_t                                                    OrderValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_48R3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                CoinStack;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ParticleSpawnPoint;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.FixForHand
	 */
	struct ABP_5Minute_C_FixForHand_Params
	{
	public:
		class ABP_Dish_C*                                          CheckOrder;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ShowOrderValueOnUI
	 */
	struct ABP_5Minute_C_ShowOrderValueOnUI_Params
	{
	public:
		int32_t                                                    CheckIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CheckValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BonusCustomer;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3J4W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Tag;                                                     // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		Enum_Customer_Satisfaction                                 CheckSatisfaction;                                       // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0D86[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.OrderCorrectWorkoutMoney
	 */
	struct ABP_5Minute_C_OrderCorrectWorkoutMoney_Params
	{
	public:
		int32_t                                                    CheckValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_Customer_Satisfaction                                 CheckSatisfaction;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SCAI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UpdatedOrderValue;                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckOrderDeliveryBay3
	 */
	struct ABP_5Minute_C_CheckOrderDeliveryBay3_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckOrderDeliveryBay2
	 */
	struct ABP_5Minute_C_CheckOrderDeliveryBay2_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ActivateCombo
	 */
	struct ABP_5Minute_C_ActivateCombo_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckOrderDeliveryBay1
	 */
	struct ABP_5Minute_C_CheckOrderDeliveryBay1_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckOrderSimple
	 */
	struct ABP_5Minute_C_CheckOrderSimple_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_Order                                       CorrectOrder;                                            // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       OrderCorrect;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MealPartCorrect;                                         // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckCustomerExists&OrderActive
	 */
	struct ABP_5Minute_C_CheckCustomerExistsOrderActive_Params
	{
	public:
		int32_t                                                    BayNumber;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BayActive;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.UpdateScore
	 */
	struct ABP_5Minute_C_UpdateScore_Params
	{
	public:
		int32_t                                                    OrderValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TimeBonus;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_Customer_Satisfaction                                 Satisfaction;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_81DY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetOrderActive
	 */
	struct ABP_5Minute_C_SetOrderActive_Params
	{
	public:
		int32_t                                                    OrderIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GenerateOrderTagWeighted
	 */
	struct ABP_5Minute_C_GenerateOrderTagWeighted_Params
	{
	public:
		TArray<struct FStruct_OrderWeights>                        OrderWeights;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FText                                                OrderTag;                                                // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GetBonusCustomerValueAndTimer
	 */
	struct ABP_5Minute_C_GetBonusCustomerValueAndTimer_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GetCustomerSpawnPoint
	 */
	struct ABP_5Minute_C_GetCustomerSpawnPoint_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SpawnPoint;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_70R1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupBonusCustomer
	 */
	struct ABP_5Minute_C_SetupBonusCustomer_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupBird
	 */
	struct ABP_5Minute_C_SetupBird_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupLoopStart
	 */
	struct ABP_5Minute_C_SetupLoopStart_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.RemoveEquipment
	 */
	struct ABP_5Minute_C_RemoveEquipment_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GeneratePseudoTime
	 */
	struct ABP_5Minute_C_GeneratePseudoTime_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckNewEntryCanBeSaved
	 */
	struct ABP_5Minute_C_CheckNewEntryCanBeSaved_Params
	{
	public:
		bool                                                       SaveScore;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YPBQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SortLeaderboard
	 */
	struct ABP_5Minute_C_SortLeaderboard_Params
	{
	public:
		TArray<struct FStruct_5Minute_Leaderboard>                 Leaderboard;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SaveNewEntry
	 */
	struct ABP_5Minute_C_SaveNewEntry_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SaveGame
	 */
	struct ABP_5Minute_C_SaveGame_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ClearStats
	 */
	struct ABP_5Minute_C_ClearStats_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetValues
	 */
	struct ABP_5Minute_C_ResetValues_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupBeginPlay
	 */
	struct ABP_5Minute_C_SetupBeginPlay_Params
	{
	public:
		Enum_Game_Stages                                           Stage;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.UserConstructionScript
	 */
	struct ABP_5Minute_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ComboTimer_Timeline__FinishedFunc
	 */
	struct ABP_5Minute_C_ComboTimer_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ComboTimer_Timeline__UpdateFunc
	 */
	struct ABP_5Minute_C_ComboTimer_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Increment_Loop_Score__FinishedFunc
	 */
	struct ABP_5Minute_C_Increment_Loop_Score__FinishedFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Increment_Loop_Score__UpdateFunc
	 */
	struct ABP_5Minute_C_Increment_Loop_Score__UpdateFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Timeline_7__FinishedFunc
	 */
	struct ABP_5Minute_C_Timeline_7__FinishedFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Timeline_7__UpdateFunc
	 */
	struct ABP_5Minute_C_Timeline_7__UpdateFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Timeline_8__FinishedFunc
	 */
	struct ABP_5Minute_C_Timeline_8__FinishedFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Timeline_8__UpdateFunc
	 */
	struct ABP_5Minute_C_Timeline_8__UpdateFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Timeline_9__FinishedFunc
	 */
	struct ABP_5Minute_C_Timeline_9__FinishedFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Timeline_9__UpdateFunc
	 */
	struct ABP_5Minute_C_Timeline_9__UpdateFunc_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct ABP_5Minute_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.MusicTransition
	 */
	struct ABP_5Minute_C_MusicTransition_Params
	{
	public:
		Enum_Music                                                 To;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.PauseGame-Activate
	 */
	struct ABP_5Minute_C_PauseGameActivate_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.PauseGame-Deactivate
	 */
	struct ABP_5Minute_C_PauseGameDeactivate_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupStartOfLoop
	 */
	struct ABP_5Minute_C_SetupStartOfLoop_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.StopGameSystems
	 */
	struct ABP_5Minute_C_StopGameSystems_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.StartGameSystems
	 */
	struct ABP_5Minute_C_StartGameSystems_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.RushHourEffect
	 */
	struct ABP_5Minute_C_RushHourEffect_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Spawn:SaveScore
	 */
	struct ABP_5Minute_C_SpawnSaveScore_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SaveScore
	 */
	struct ABP_5Minute_C_SaveScore_Params
	{
	public:
		class ABP_Keyboard_Arcade_C*                               Keyboard;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckLoopComplete
	 */
	struct ABP_5Minute_C_CheckLoopComplete_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetPlayLoop
	 */
	struct ABP_5Minute_C_ResetPlayLoop_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.EndOfLoopUI
	 */
	struct ABP_5Minute_C_EndOfLoopUI_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.EndOfLoop
	 */
	struct ABP_5Minute_C_EndOfLoop_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Spawn:EndOfLoopStats
	 */
	struct ABP_5Minute_C_SpawnEndOfLoopStats_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.PlayLoop
	 */
	struct ABP_5Minute_C_PlayLoop_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Event:Tick
	 */
	struct ABP_5Minute_C_EventTick_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GenerateOrderTag
	 */
	struct ABP_5Minute_C_GenerateOrderTag_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetDeliveryBay
	 */
	struct ABP_5Minute_C_ResetDeliveryBay_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GenerateOrder:SpawnCustomer
	 */
	struct ABP_5Minute_C_GenerateOrderSpawnCustomer_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupCustomerUI
	 */
	struct ABP_5Minute_C_SetupCustomerUI_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.UpdateCustomerSatisfaction
	 */
	struct ABP_5Minute_C_UpdateCustomerSatisfaction_Params
	{
	public:
		Enum_Customer_Satisfaction                                 Satisfaction;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ComboTimer:Active
	 */
	struct ABP_5Minute_C_ComboTimerActive_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay3Collision_Throw_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay3Collision_Throw_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_832H[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay3Collision_Throw_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay3Collision_Throw_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay1Collision_HandIn_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay1Collision_HandIn_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_58WF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay1Collision_HandIn_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay1Collision_HandIn_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DM2P[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay2Collision_HandIn_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay2Collision_HandIn_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXAC[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay2Collision_HandIn_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay2Collision_HandIn_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay2Collision_Throw_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay2Collision_Throw_K2Node_ComponentBoundEvent_13_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PBF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay2Collision_Throw_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay2Collision_Throw_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay3Collision_HandIn_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay3Collision_HandIn_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X2OC[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BndEvt__DeliveryBay3Collision_HandIn_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_C_BndEvt__DeliveryBay3Collision_HandIn_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CancelledCustomer:Score
	 */
	struct ABP_5Minute_C_CancelledCustomerScore_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GetUIScore
	 */
	struct ABP_5Minute_C_GetUIScore_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetBay1-Simple
	 */
	struct ABP_5Minute_C_ResetBay1Simple_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetBay1-Meal
	 */
	struct ABP_5Minute_C_ResetBay1Meal_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetBay2-Simple
	 */
	struct ABP_5Minute_C_ResetBay2Simple_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetBay2-Meal
	 */
	struct ABP_5Minute_C_ResetBay2Meal_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetBay3-Simple
	 */
	struct ABP_5Minute_C_ResetBay3Simple_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetBay3-Meal
	 */
	struct ABP_5Minute_C_ResetBay3Meal_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CheckOrderDelivered
	 */
	struct ABP_5Minute_C_CheckOrderDelivered_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ResetCustomerTimeBetweenOrders
	 */
	struct ABP_5Minute_C_ResetCustomerTimeBetweenOrders_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupLoopPanel
	 */
	struct ABP_5Minute_C_SetupLoopPanel_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.GenerateOrder
	 */
	struct ABP_5Minute_C_GenerateOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SetupOrder
	 */
	struct ABP_5Minute_C_SetupOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.HideDeliveryBay
	 */
	struct ABP_5Minute_C_HideDeliveryBay_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CloseCurtain
	 */
	struct ABP_5Minute_C_CloseCurtain_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.OpenCurtain
	 */
	struct ABP_5Minute_C_OpenCurtain_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.MusicTransition:Play
	 */
	struct ABP_5Minute_C_MusicTransitionPlay_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Retry
	 */
	struct ABP_5Minute_C_Retry_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.SpawnEndUI
	 */
	struct ABP_5Minute_C_SpawnEndUI_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.Setup:Coin Chest
	 */
	struct ABP_5Minute_C_SetupCoinChest_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.StopCombo
	 */
	struct ABP_5Minute_C_StopCombo_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CreateStartUIWidget
	 */
	struct ABP_5Minute_C_CreateStartUIWidget_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.LoadPlayerInLevel
	 */
	struct ABP_5Minute_C_LoadPlayerInLevel_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.BirdSteal:Score
	 */
	struct ABP_5Minute_C_BirdStealScore_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CustomerHit:Score
	 */
	struct ABP_5Minute_C_CustomerHitScore_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CustomerWrongOrder:Score
	 */
	struct ABP_5Minute_C_CustomerWrongOrderScore_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.CustomerTimeout:Score
	 */
	struct ABP_5Minute_C_CustomerTimeoutScore_Params
	{	};

	/**
	 * Function BP_5Minute.BP_5Minute_C.ExecuteUbergraph_BP_5Minute
	 */
	struct ABP_5Minute_C_ExecuteUbergraph_BP_5Minute_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
