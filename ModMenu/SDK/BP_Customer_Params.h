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
	 * Function BP_Customer.BP_Customer_C.SetCustomerSpeed
	 */
	struct ABP_Customer_C_SetCustomerSpeed_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.ManageOrderTime_5M
	 */
	struct ABP_Customer_C_ManageOrderTime_5M_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.RemoveCancelledCustomer
	 */
	struct ABP_Customer_C_RemoveCancelledCustomer_Params
	{
	public:
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class ABP_Customer_C*>                              customers;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.AcceptOrderCustomer
	 */
	struct ABP_Customer_C_AcceptOrderCustomer_Params
	{
	public:
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class ABP_Customer_C*>                              customers;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.RemoveBonusCustomerTimerDeliveryBay
	 */
	struct ABP_Customer_C_RemoveBonusCustomerTimerDeliveryBay_Params
	{
	public:
		class UWidgetComponent*                                    BonusCustomer1Widget;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetComponent*                                    BonusCustomer2Widget;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetComponent*                                    BonusCustomer3Widget;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.SetupCustomerSatisfaction
	 */
	struct ABP_Customer_C_SetupCustomerSatisfaction_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.CalculateFreeSample
	 */
	struct ABP_Customer_C_CalculateFreeSample_Params
	{
	public:
		Enum_Customer_Satisfaction                                 CustomerSatisfaction;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.GenerateCharacterColours
	 */
	struct ABP_Customer_C_GenerateCharacterColours_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.ManageOrderTime
	 */
	struct ABP_Customer_C_ManageOrderTime_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.MoneyPenalty
	 */
	struct ABP_Customer_C_MoneyPenalty_Params
	{
	public:
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.DestroyCustomer
	 */
	struct ABP_Customer_C_DestroyCustomer_Params
	{
	public:
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class ABP_Customer_C*>                              customers;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.GenerateRandomBody
	 */
	struct ABP_Customer_C_GenerateRandomBody_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.CustomerSatisfaction&OrderValue
	 */
	struct ABP_Customer_C_CustomerSatisfactionOrderValue_Params
	{
	public:
		float                                                      CurrentOrderTime;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.UserConstructionScript
	 */
	struct ABP_Customer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.CustomerMovement__FinishedFunc
	 */
	struct ABP_Customer_C_CustomerMovement__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.CustomerMovement__UpdateFunc
	 */
	struct ABP_Customer_C_CustomerMovement__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.SimpleOrder_Timeline__FinishedFunc
	 */
	struct ABP_Customer_C_SimpleOrder_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.SimpleOrder_Timeline__UpdateFunc
	 */
	struct ABP_Customer_C_SimpleOrder_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.BonusTime_Timeline__FinishedFunc
	 */
	struct ABP_Customer_C_BonusTime_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.BonusTime_Timeline__UpdateFunc
	 */
	struct ABP_Customer_C_BonusTime_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.ReceiveBeginPlay
	 */
	struct ABP_Customer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.MoveCustomer
	 */
	struct ABP_Customer_C_MoveCustomer_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.ResetMovement
	 */
	struct ABP_Customer_C_ResetMovement_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.RefuseOrder
	 */
	struct ABP_Customer_C_RefuseOrder_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.ActivateBonusCustumer
	 */
	struct ABP_Customer_C_ActivateBonusCustumer_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.RemoveBonusCustomer
	 */
	struct ABP_Customer_C_RemoveBonusCustomer_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.AcceptOrder
	 */
	struct ABP_Customer_C_AcceptOrder_Params
	{
	public:
		bool                                                       Burnt;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.ActivateFreeSample
	 */
	struct ABP_Customer_C_ActivateFreeSample_Params
	{
	public:
		class ABP_Sweet_C*                                         Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.RemoveBonusTimer
	 */
	struct ABP_Customer_C_RemoveBonusTimer_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.UpdateCharacterFace
	 */
	struct ABP_Customer_C_UpdateCharacterFace_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.UpdateCustomer
	 */
	struct ABP_Customer_C_UpdateCustomer_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.BndEvt__CharacterBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Customer_C_BndEvt__CharacterBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IMAV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.CustomerTimeOut
	 */
	struct ABP_Customer_C_CustomerTimeOut_Params
	{
	public:
		bool                                                       Bonus;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       _5M;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.StartCustomerTime
	 */
	struct ABP_Customer_C_StartCustomerTime_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.AlterTime
	 */
	struct ABP_Customer_C_AlterTime_Params
	{
	public:
		float                                                      TimeBonus;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.StopOrderTimers
	 */
	struct ABP_Customer_C_StopOrderTimers_Params
	{	};

	/**
	 * Function BP_Customer.BP_Customer_C.Spawn:CustomerParticle
	 */
	struct ABP_Customer_C_SpawnCustomerParticle_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.DeliverWrongOrder:Knight
	 */
	struct ABP_Customer_C_DeliverWrongOrderKnight_Params
	{
	public:
		bool                                                       _5Minute;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Customer.BP_Customer_C.ExecuteUbergraph_BP_Customer
	 */
	struct ABP_Customer_C_ExecuteUbergraph_BP_Customer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JHME[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
