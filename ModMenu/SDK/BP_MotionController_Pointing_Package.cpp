/**
 * Name: RagsToDishes
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.GetActorNearHand
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NearestMesh                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MotionController_Pointing_C::GetActorNearHand(class AActor** NearestMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.GetActorNearHand");
		
		ABP_MotionController_Pointing_C_GetActorNearHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NearestMesh != nullptr)
			*NearestMesh = params.NearestMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MotionController_Pointing_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.UserConstructionScript");
		
		ABP_MotionController_Pointing_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_MotionController_Pointing_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReceiveBeginPlay");
		
		ABP_MotionController_Pointing_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MotionController_Pointing_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReceiveTick");
		
		ABP_MotionController_Pointing_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.GrabActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MotionController_Pointing_C::GrabActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.GrabActor");
		
		ABP_MotionController_Pointing_C_GrabActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReleaseActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MotionController_Pointing_C::ReleaseActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReleaseActor");
		
		ABP_MotionController_Pointing_C_ReleaseActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.EndGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MotionController_Pointing_C::EndGrab(class AActor* OverlappedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.EndGrab");
		
		ABP_MotionController_Pointing_C_EndGrab_Params params {};
		params.OverlappedActor = OverlappedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.CheckHandOverlapping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MotionController_Pointing_C::CheckHandOverlapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.CheckHandOverlapping");
		
		ABP_MotionController_Pointing_C_CheckHandOverlapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ExecuteUbergraph_BP_MotionController_Pointing
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MotionController_Pointing_C::ExecuteUbergraph_BP_MotionController_Pointing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ExecuteUbergraph_BP_MotionController_Pointing");
		
		ABP_MotionController_Pointing_C_ExecuteUbergraph_BP_MotionController_Pointing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MotionController_Pointing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MotionController_Pointing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MotionController_Pointing.BP_MotionController_Pointing_C");
		return ptr;
	}

}


