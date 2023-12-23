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
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SpawnLoopSelectionMenu
	 */
	struct ABP_5Minute_Nobles_C_SpawnLoopSelectionMenu_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_InLoopMenu                                            MenuOption;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GWPE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_InLoop_Selection_Menu_C*                         Ref;                                                     // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SpawnLoopMenu
	 */
	struct ABP_5Minute_Nobles_C_SpawnLoopMenu_Params
	{
	public:
		bool                                                       CanBeGrabbed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P4E3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_Loop_Menu_Options                                     Options;                                                 // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C8IL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Loop_Menu_Choice_Option_C*                       MenuRef;                                                 // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SpawnCustomer
	 */
	struct ABP_5Minute_Nobles_C_SpawnCustomer_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SplineRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7HJE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_Order                                       Order;                                                   // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		Enum_Game_Stages                                           GameStage;                                               // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HBQO[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_THDO[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CheckFoodBurned
	 */
	struct ABP_5Minute_Nobles_C_CheckFoodBurned_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OrderNewValue;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Burnt;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HI9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CheckOrderSimple
	 */
	struct ABP_5Minute_Nobles_C_CheckOrderSimple_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_Order                                       CorrectOrder;                                            // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       OrderCorrect;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MealPartCorrect;                                         // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O8RN[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CheckStewOrder
	 */
	struct ABP_5Minute_Nobles_C_CheckStewOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAH5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CheckPieOrder
	 */
	struct ABP_5Minute_Nobles_C_CheckPieOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9Y9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CheckSkewerOrder
	 */
	struct ABP_5Minute_Nobles_C_CheckSkewerOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q90B[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetPieIngredients
	 */
	struct ABP_5Minute_Nobles_C_GetPieIngredients_Params
	{
	public:
		class FText                                                Pie;                                                     // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetStewIngredients
	 */
	struct ABP_5Minute_Nobles_C_GetStewIngredients_Params
	{
	public:
		TArray<class FText>                                        StewOrder;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetSkewerIngredients
	 */
	struct ABP_5Minute_Nobles_C_GetSkewerIngredients_Params
	{
	public:
		TArray<class FText>                                        Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CheckMeal
	 */
	struct ABP_5Minute_Nobles_C_CheckMeal_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_Order                                       CheckOrder;                                              // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0080(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_Dish_Types                                            DishTag;                                                 // 0x0084(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OrderCorrect;                                            // 0x0085(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MealPartCorrect;                                         // 0x0086(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GSTZ[0x1];                                   // 0x0087(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetOrderNoblesStage
	 */
	struct ABP_5Minute_Nobles_C_GetOrderNoblesStage_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetMeal
	 */
	struct ABP_5Minute_Nobles_C_GetMeal_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetDrink
	 */
	struct ABP_5Minute_Nobles_C_GetDrink_Params
	{
	public:
		class FText                                                Drink;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetBread
	 */
	struct ABP_5Minute_Nobles_C_GetBread_Params
	{
	public:
		class FText                                                BreadType;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.UserConstructionScript
	 */
	struct ABP_5Minute_Nobles_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SetupLoopStart
	 */
	struct ABP_5Minute_Nobles_C_SetupLoopStart_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GenerateOrderTag
	 */
	struct ABP_5Minute_Nobles_C_GenerateOrderTag_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.ClearStats
	 */
	struct ABP_5Minute_Nobles_C_ClearStats_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SetupOrder
	 */
	struct ABP_5Minute_Nobles_C_SetupOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SetupCustomerUI
	 */
	struct ABP_5Minute_Nobles_C_SetupCustomerUI_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.GetBonusCustomerValueAndTimer
	 */
	struct ABP_5Minute_Nobles_C_GetBonusCustomerValueAndTimer_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SpawnCoinsWhenOrderCompleted
	 */
	struct ABP_5Minute_Nobles_C_SpawnCoinsWhenOrderCompleted_Params
	{
	public:
		int32_t                                                    OrderValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SPAD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                CoinStack;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ParticleSpawnPoint;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.ComboMoneyBurstMealPart
	 */
	struct ABP_5Minute_Nobles_C_ComboMoneyBurstMealPart_Params
	{
	public:
		class UStaticMeshComponent*                                MoneyStack;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.HideDeliveryBay
	 */
	struct ABP_5Minute_Nobles_C_HideDeliveryBay_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.OpenCurtain
	 */
	struct ABP_5Minute_Nobles_C_OpenCurtain_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CloseCurtain
	 */
	struct ABP_5Minute_Nobles_C_CloseCurtain_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.RemoveEquipment
	 */
	struct ABP_5Minute_Nobles_C_RemoveEquipment_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.MusicTransition:Play
	 */
	struct ABP_5Minute_Nobles_C_MusicTransitionPlay_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SpawnEndUI
	 */
	struct ABP_5Minute_Nobles_C_SpawnEndUI_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SetupLoopPanel
	 */
	struct ABP_5Minute_Nobles_C_SetupLoopPanel_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.Setup:Coin Chest
	 */
	struct ABP_5Minute_Nobles_C_SetupCoinChest_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SpawnBird
	 */
	struct ABP_5Minute_Nobles_C_SpawnBird_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.CreateComboUI
	 */
	struct ABP_5Minute_Nobles_C_CreateComboUI_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.SpawnKeyboard
	 */
	struct ABP_5Minute_Nobles_C_SpawnKeyboard_Params
	{	};

	/**
	 * Function BP_5Minute_Nobles.BP_5Minute_Nobles_C.ExecuteUbergraph_BP_5Minute_Nobles
	 */
	struct ABP_5Minute_Nobles_C_ExecuteUbergraph_BP_5Minute_Nobles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
