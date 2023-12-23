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
	 * Function BP_Story_Event_Nobles_Pie_Tutorial.BP_Story_Event_Nobles_Pie_Tutorial_C.UserConstructionScript
	 */
	struct ABP_Story_Event_Nobles_Pie_Tutorial_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Story_Event_Nobles_Pie_Tutorial.BP_Story_Event_Nobles_Pie_Tutorial_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 */
	struct ABP_Story_Event_Nobles_Pie_Tutorial_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_Event_Nobles_Pie_Tutorial.BP_Story_Event_Nobles_Pie_Tutorial_C.ReceiveBeginPlay
	 */
	struct ABP_Story_Event_Nobles_Pie_Tutorial_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Story_Event_Nobles_Pie_Tutorial.BP_Story_Event_Nobles_Pie_Tutorial_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Story_Event_Nobles_Pie_Tutorial_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S253[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Story_Event_Nobles_Pie_Tutorial.BP_Story_Event_Nobles_Pie_Tutorial_C.EventEnd
	 */
	struct ABP_Story_Event_Nobles_Pie_Tutorial_C_EventEnd_Params
	{	};

	/**
	 * Function BP_Story_Event_Nobles_Pie_Tutorial.BP_Story_Event_Nobles_Pie_Tutorial_C.ExecuteUbergraph_BP_Story_Event_Nobles_Pie_Tutorial
	 */
	struct ABP_Story_Event_Nobles_Pie_Tutorial_C_ExecuteUbergraph_BP_Story_Event_Nobles_Pie_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z4ZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
