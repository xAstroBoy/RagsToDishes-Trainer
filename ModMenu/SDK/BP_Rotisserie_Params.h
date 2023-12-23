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
	 * Function BP_Rotisserie.BP_Rotisserie_C.SetSizzleAudio
	 */
	struct ABP_Rotisserie_C_SetSizzleAudio_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.IsRotisserieCooking
	 */
	struct ABP_Rotisserie_C_IsRotisserieCooking_Params
	{
	public:
		bool                                                       IsCooking;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8AAO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.SetUpEquipment
	 */
	struct ABP_Rotisserie_C_SetUpEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.UserConstructionScript
	 */
	struct ABP_Rotisserie_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.RotationTimeline__FinishedFunc
	 */
	struct ABP_Rotisserie_C_RotationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.RotationTimeline__UpdateFunc
	 */
	struct ABP_Rotisserie_C_RotationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.ReceiveBeginPlay
	 */
	struct ABP_Rotisserie_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.SetUpRotisserie
	 */
	struct ABP_Rotisserie_C_SetUpRotisserie_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.EmptyEquipment
	 */
	struct ABP_Rotisserie_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Rotisserie_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XI7G[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.RemoveActorFromEquipment
	 */
	struct ABP_Rotisserie_C_RemoveActorFromEquipment_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.SlotArrayCheck
	 */
	struct ABP_Rotisserie_C_SlotArrayCheck_Params
	{	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.SetCharcoalEffect
	 */
	struct ABP_Rotisserie_C_SetCharcoalEffect_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Rotisserie.BP_Rotisserie_C.ExecuteUbergraph_BP_Rotisserie
	 */
	struct ABP_Rotisserie_C_ExecuteUbergraph_BP_Rotisserie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
