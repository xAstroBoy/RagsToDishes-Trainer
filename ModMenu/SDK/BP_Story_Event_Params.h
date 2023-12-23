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
	 * Function BP_Story_Event.BP_Story_Event_C.CheckTutorialDish
	 */
	struct ABP_Story_Event_C_CheckTutorialDish_Params
	{
	public:
		TArray<class FName>                                        Ingredients;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectDish;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IA1M[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.UserConstructionScript
	 */
	struct ABP_Story_Event_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.EnterTimeline__FinishedFunc
	 */
	struct ABP_Story_Event_C_EnterTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.EnterTimeline__UpdateFunc
	 */
	struct ABP_Story_Event_C_EnterTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.LeaveTimeline__FinishedFunc
	 */
	struct ABP_Story_Event_C_LeaveTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.LeaveTimeline__UpdateFunc
	 */
	struct ABP_Story_Event_C_LeaveTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.ReceiveBeginPlay
	 */
	struct ABP_Story_Event_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.ReceiveTick
	 */
	struct ABP_Story_Event_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.AnimateEnter
	 */
	struct ABP_Story_Event_C_AnimateEnter_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.AnimateLeave
	 */
	struct ABP_Story_Event_C_AnimateLeave_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.EventEnd
	 */
	struct ABP_Story_Event_C_EventEnd_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.BndEvt__CharacterBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Story_Event_C_BndEvt__CharacterBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P02Q[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.TalkEnd
	 */
	struct ABP_Story_Event_C_TalkEnd_Params
	{	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.Talk
	 */
	struct ABP_Story_Event_C_Talk_Params
	{
	public:
		bool                                                       FirstCharacter;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECutsceneList                                              Expression;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_Event.BP_Story_Event_C.ExecuteUbergraph_BP_Story_Event
	 */
	struct ABP_Story_Event_C_ExecuteUbergraph_BP_Story_Event_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
