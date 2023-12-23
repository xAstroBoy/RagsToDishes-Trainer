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
	 * Function BP_Background_Character.BP_Background_Character_C.GenerateRandomColours
	 */
	struct ABP_Background_Character_C_GenerateRandomColours_Params
	{	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.GenerateRandomBody
	 */
	struct ABP_Background_Character_C_GenerateRandomBody_Params
	{	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.UserConstructionScript
	 */
	struct ABP_Background_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.WalkAnimTL__FinishedFunc
	 */
	struct ABP_Background_Character_C_WalkAnimTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.WalkAnimTL__UpdateFunc
	 */
	struct ABP_Background_Character_C_WalkAnimTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.ReceiveBeginPlay
	 */
	struct ABP_Background_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.ReceiveTick
	 */
	struct ABP_Background_Character_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.AnimateWalk
	 */
	struct ABP_Background_Character_C_AnimateWalk_Params
	{	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.BndEvt__Body_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Background_Character_C_BndEvt__Body_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8MFW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Background_Character.BP_Background_Character_C.ExecuteUbergraph_BP_Background_Character
	 */
	struct ABP_Background_Character_C_ExecuteUbergraph_BP_Background_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
