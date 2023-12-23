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
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.UserConstructionScript
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.CustomerEnterTL__FinishedFunc
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_CustomerEnterTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.CustomerEnterTL__UpdateFunc
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_CustomerEnterTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.CustomerLeaveTL__FinishedFunc
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_CustomerLeaveTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.CustomerLeaveTL__UpdateFunc
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_CustomerLeaveTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.ReceiveBeginPlay
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.ReceiveTick
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.AnimateCustomerEnter
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_AnimateCustomerEnter_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.AnimateCustomerLeave
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_AnimateCustomerLeave_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.EventEnd
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_EventEnd_Params
	{	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.BndEvt__CustomerBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_BndEvt__CustomerBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5XT6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Story_Event_Sweets_Tutorial.BP_Story_Event_Sweets_Tutorial_C.ExecuteUbergraph_BP_Story_Event_Sweets_Tutorial
	 */
	struct ABP_Story_Event_Sweets_Tutorial_C_ExecuteUbergraph_BP_Story_Event_Sweets_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
