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
	 * Function BP_CrowdMember.BP_CrowdMember_C.GenerateCharacterColours
	 */
	struct ABP_CrowdMember_C_GenerateCharacterColours_Params
	{	};

	/**
	 * Function BP_CrowdMember.BP_CrowdMember_C.GenerateRandomBody
	 */
	struct ABP_CrowdMember_C_GenerateRandomBody_Params
	{	};

	/**
	 * Function BP_CrowdMember.BP_CrowdMember_C.UserConstructionScript
	 */
	struct ABP_CrowdMember_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_CrowdMember.BP_CrowdMember_C.ReceiveBeginPlay
	 */
	struct ABP_CrowdMember_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CrowdMember.BP_CrowdMember_C.ReceiveTick
	 */
	struct ABP_CrowdMember_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CrowdMember.BP_CrowdMember_C.BndEvt__CharacterBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_CrowdMember_C_BndEvt__CharacterBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_168F[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_CrowdMember.BP_CrowdMember_C.ExecuteUbergraph_BP_CrowdMember
	 */
	struct ABP_CrowdMember_C_ExecuteUbergraph_BP_CrowdMember_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
