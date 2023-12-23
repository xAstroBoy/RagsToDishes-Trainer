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
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SpawnLoopSelectionMenu
	 */
	struct ABP_5Minute_Royals_C_SpawnLoopSelectionMenu_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_InLoopMenu                                            MenuOption;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HXKI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_InLoop_Selection_Menu_C*                         Ref;                                                     // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SpawnLoopMenu
	 */
	struct ABP_5Minute_Royals_C_SpawnLoopMenu_Params
	{
	public:
		bool                                                       CanBeGrabbed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1YR9[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_Loop_Menu_Options                                     Options;                                                 // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9SPR[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Loop_Menu_Choice_Option_C*                       MenuRef;                                                 // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SpawnCustomer
	 */
	struct ABP_5Minute_Royals_C_SpawnCustomer_Params
	{
	public:
		class ACustomerSpawnPoint_C*                               SplineRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomerNumber;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBF8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_Order                                       Order;                                                   // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		Enum_Game_Stages                                           GameStage;                                               // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JOV[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IKLT[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CheckOrderSimple
	 */
	struct ABP_5Minute_Royals_C_CheckOrderSimple_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_Order                                       CorrectOrder;                                            // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       OrderCorrect;                                            // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MealPartCorrect;                                         // 0x0091(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4T3Q[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CheckMeal
	 */
	struct ABP_5Minute_Royals_C_CheckMeal_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_Order                                       CheckOrder;                                              // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FText                                                OrderDrink;                                              // 0x0080(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    OrderIndex;                                              // 0x0098(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_Dish_Types                                            DishTag;                                                 // 0x009C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OrderCorrect;                                            // 0x009D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MealPartCorrect;                                         // 0x009E(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G5BM[0x1];                                   // 0x009F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CheckPlatterOrder
	 */
	struct ABP_5Minute_Royals_C_CheckPlatterOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z324[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CheckCakeOrder
	 */
	struct ABP_5Minute_Royals_C_CheckCakeOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AR9Y[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CheckPieOrder
	 */
	struct ABP_5Minute_Royals_C_CheckPieOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGFW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CheckFruitOrder
	 */
	struct ABP_5Minute_Royals_C_CheckFruitOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8IVO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetOrderRoyalsStage
	 */
	struct ABP_5Minute_Royals_C_GetOrderRoyalsStage_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetMeal
	 */
	struct ABP_5Minute_Royals_C_GetMeal_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetPieIngredients
	 */
	struct ABP_5Minute_Royals_C_GetPieIngredients_Params
	{
	public:
		bool                                                       NoApple;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MainDish;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_52DO[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetCakeIngredients
	 */
	struct ABP_5Minute_Royals_C_GetCakeIngredients_Params
	{
	public:
		bool                                                       MainDish;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8EDH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetPlatterIngredients
	 */
	struct ABP_5Minute_Royals_C_GetPlatterIngredients_Params
	{
	public:
		bool                                                       MainDish;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R8BE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetDrink
	 */
	struct ABP_5Minute_Royals_C_GetDrink_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetFruits
	 */
	struct ABP_5Minute_Royals_C_GetFruits_Params
	{
	public:
		bool                                                       MainDish;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PE1Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.UserConstructionScript
	 */
	struct ABP_5Minute_Royals_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.ComboTimerRoyals_Timeline__FinishedFunc
	 */
	struct ABP_5Minute_Royals_C_ComboTimerRoyals_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.ComboTimerRoyals_Timeline__UpdateFunc
	 */
	struct ABP_5Minute_Royals_C_ComboTimerRoyals_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.HideDeliveryBay
	 */
	struct ABP_5Minute_Royals_C_HideDeliveryBay_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.OpenCurtain
	 */
	struct ABP_5Minute_Royals_C_OpenCurtain_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CloseCurtain
	 */
	struct ABP_5Minute_Royals_C_CloseCurtain_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.MusicTransition:Play
	 */
	struct ABP_5Minute_Royals_C_MusicTransitionPlay_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SetupLoopStart
	 */
	struct ABP_5Minute_Royals_C_SetupLoopStart_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GenerateOrderTag
	 */
	struct ABP_5Minute_Royals_C_GenerateOrderTag_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.ClearStats
	 */
	struct ABP_5Minute_Royals_C_ClearStats_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SetupCustomerUI
	 */
	struct ABP_5Minute_Royals_C_SetupCustomerUI_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SetupOrder
	 */
	struct ABP_5Minute_Royals_C_SetupOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.ComboMoneyBurstMealPart
	 */
	struct ABP_5Minute_Royals_C_ComboMoneyBurstMealPart_Params
	{
	public:
		class UStaticMeshComponent*                                MoneyStack;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SpawnCoinsWhenOrderCompleted
	 */
	struct ABP_5Minute_Royals_C_SpawnCoinsWhenOrderCompleted_Params
	{
	public:
		int32_t                                                    OrderValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7QQT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Customer_C*                                      Customer;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                CoinStack;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ParticleSpawnPoint;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.RemoveEquipment
	 */
	struct ABP_5Minute_Royals_C_RemoveEquipment_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.GetBonusCustomerValueAndTimer
	 */
	struct ABP_5Minute_Royals_C_GetBonusCustomerValueAndTimer_Params
	{
	public:
		struct FStruct_Order                                       Order;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class ABP_Customer_C*                                      Customer;                                                // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_507J[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_367I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_Royals_C_BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VCF0[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_5Minute_Royals_C_BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.DeliveryBay2_Throw
	 */
	struct ABP_5Minute_Royals_C_DeliveryBay2_Throw_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.DeliveryBay2_HandIn
	 */
	struct ABP_5Minute_Royals_C_DeliveryBay2_HandIn_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.ComboTimer:Active
	 */
	struct ABP_5Minute_Royals_C_ComboTimerActive_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SpawnEndUI
	 */
	struct ABP_5Minute_Royals_C_SpawnEndUI_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SetupLoopPanel
	 */
	struct ABP_5Minute_Royals_C_SetupLoopPanel_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.Setup:Coin Chest
	 */
	struct ABP_5Minute_Royals_C_SetupCoinChest_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SpawnBird
	 */
	struct ABP_5Minute_Royals_C_SpawnBird_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.CreateComboUI
	 */
	struct ABP_5Minute_Royals_C_CreateComboUI_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.SpawnKeyboard
	 */
	struct ABP_5Minute_Royals_C_SpawnKeyboard_Params
	{	};

	/**
	 * Function BP_5Minute_Royals.BP_5Minute_Royals_C.ExecuteUbergraph_BP_5Minute_Royals
	 */
	struct ABP_5Minute_Royals_C_ExecuteUbergraph_BP_5Minute_Royals_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
