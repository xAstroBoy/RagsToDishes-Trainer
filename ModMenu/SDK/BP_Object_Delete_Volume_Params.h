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
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.UserConstructionScript
	 */
	struct ABP_Object_Delete_Volume_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.MouseCollectTimeline__FinishedFunc
	 */
	struct ABP_Object_Delete_Volume_C_MouseCollectTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.MouseCollectTimeline__UpdateFunc
	 */
	struct ABP_Object_Delete_Volume_C_MouseCollectTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.MouseReturnTimeline__FinishedFunc
	 */
	struct ABP_Object_Delete_Volume_C_MouseReturnTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.MouseReturnTimeline__UpdateFunc
	 */
	struct ABP_Object_Delete_Volume_C_MouseReturnTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Object_Delete_Volume_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DDQC[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Object_Delete_Volume_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.ReceiveBeginPlay
	 */
	struct ABP_Object_Delete_Volume_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.ReceiveTick
	 */
	struct ABP_Object_Delete_Volume_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.CollectIngredient
	 */
	struct ABP_Object_Delete_Volume_C_CollectIngredient_Params
	{
	public:
		class AActor*                                              IngredientRef;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Delete_Volume.BP_Object_Delete_Volume_C.ExecuteUbergraph_BP_Object_Delete_Volume
	 */
	struct ABP_Object_Delete_Volume_C_ExecuteUbergraph_BP_Object_Delete_Volume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K2O7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
