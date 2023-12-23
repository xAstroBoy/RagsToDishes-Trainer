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
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.Grab
	 */
	struct ABP_Recipe_Book_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WPTJ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.IsHeldByController
	 */
	struct ABP_Recipe_Book_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.UpdateBackPage
	 */
	struct ABP_Recipe_Book_C_UpdateBackPage_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.GetCurrentPage
	 */
	struct ABP_Recipe_Book_C_GetCurrentPage_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.CheckCurrentIndex
	 */
	struct ABP_Recipe_Book_C_CheckCurrentIndex_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.GetPreviousPage
	 */
	struct ABP_Recipe_Book_C_GetPreviousPage_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.GetNextPage
	 */
	struct ABP_Recipe_Book_C_GetNextPage_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.CheckAnimPlaying
	 */
	struct ABP_Recipe_Book_C_CheckAnimPlaying_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.UserConstructionScript
	 */
	struct ABP_Recipe_Book_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.SpawnTL__FinishedFunc
	 */
	struct ABP_Recipe_Book_C_SpawnTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.SpawnTL__UpdateFunc
	 */
	struct ABP_Recipe_Book_C_SpawnTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.ReceiveBeginPlay
	 */
	struct ABP_Recipe_Book_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.Release
	 */
	struct ABP_Recipe_Book_C_Release_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.SpawnHat
	 */
	struct ABP_Recipe_Book_C_SpawnHat_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.StartTutorial
	 */
	struct ABP_Recipe_Book_C_StartTutorial_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.EnableHighlight
	 */
	struct ABP_Recipe_Book_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.DisableHighlight
	 */
	struct ABP_Recipe_Book_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.DisablePage
	 */
	struct ABP_Recipe_Book_C_DisablePage_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.EnablePage
	 */
	struct ABP_Recipe_Book_C_EnablePage_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.BndEvt__RightPageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Recipe_Book_C_BndEvt__RightPageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6AX[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.BndEvt__LeftPageBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Recipe_Book_C_BndEvt__LeftPageBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6N1B[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.SpawnAnimation
	 */
	struct ABP_Recipe_Book_C_SpawnAnimation_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.LoadTutorials
	 */
	struct ABP_Recipe_Book_C_LoadTutorials_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.UpdateBookAnim
	 */
	struct ABP_Recipe_Book_C_UpdateBookAnim_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.ResetNext
	 */
	struct ABP_Recipe_Book_C_ResetNext_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.ResetPrevious
	 */
	struct ABP_Recipe_Book_C_ResetPrevious_Params
	{	};

	/**
	 * Function BP_Recipe_Book.BP_Recipe_Book_C.ExecuteUbergraph_BP_Recipe_Book
	 */
	struct ABP_Recipe_Book_C_ExecuteUbergraph_BP_Recipe_Book_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KQ8Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
