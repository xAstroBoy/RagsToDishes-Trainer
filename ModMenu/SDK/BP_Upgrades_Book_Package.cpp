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
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.Grab
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             MotionController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPhysicsHandleComponent*                     PhysicsHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPhysicsHandleComponent*                     AngularPhysicsHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MotionController_C*                      Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      AttachedActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_Book_C::Grab(class USceneComponent* MotionController, class UPhysicsHandleComponent* PhysicsHandle, class UPhysicsHandleComponent* AngularPhysicsHandle, EControllerHand hand, class ABP_MotionController_C* Controller, class USceneComponent* AttachPoint, class AActor** AttachedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.Grab");
		
		ABP_Upgrades_Book_C_Grab_Params params {};
		params.MotionController = MotionController;
		params.PhysicsHandle = PhysicsHandle;
		params.AngularPhysicsHandle = AngularPhysicsHandle;
		params.hand = hand;
		params.Controller = Controller;
		params.AttachPoint = AttachPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachedActor != nullptr)
			*AttachedActor = params.AttachedActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.IsHeldByController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             MotionController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Book_C::IsHeldByController(class USceneComponent* MotionController, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.IsHeldByController");
		
		ABP_Upgrades_Book_C_IsHeldByController_Params params {};
		params.MotionController = MotionController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetPreviousUpgrade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::GetPreviousUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetPreviousUpgrade");
		
		ABP_Upgrades_Book_C_GetPreviousUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetCurrentUpgrade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::GetCurrentUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetCurrentUpgrade");
		
		ABP_Upgrades_Book_C_GetCurrentUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetNextUpgrade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::GetNextUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetNextUpgrade");
		
		ABP_Upgrades_Book_C_GetNextUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.ToggleUpgrades
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::ToggleUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.ToggleUpgrades");
		
		ABP_Upgrades_Book_C_ToggleUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.CheckAnimationPlaying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::CheckAnimationPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.CheckAnimationPlaying");
		
		ABP_Upgrades_Book_C_CheckAnimationPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.UserConstructionScript");
		
		ABP_Upgrades_Book_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.EnableHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::EnableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.EnableHighlight");
		
		ABP_Upgrades_Book_C_EnableHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.DisableHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::DisableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.DisableHighlight");
		
		ABP_Upgrades_Book_C_DisableHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.ReceiveBeginPlay");
		
		ABP_Upgrades_Book_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.Release
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.Release");
		
		ABP_Upgrades_Book_C_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.HideBook
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::HideBook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.HideBook");
		
		ABP_Upgrades_Book_C_HideBook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.ShowBook
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::ShowBook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.ShowBook");
		
		ABP_Upgrades_Book_C_ShowBook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.TogglePageForward
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::TogglePageForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.TogglePageForward");
		
		ABP_Upgrades_Book_C_TogglePageForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.TogglePageBackward
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::TogglePageBackward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.TogglePageBackward");
		
		ABP_Upgrades_Book_C_TogglePageBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.UpdateBag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::UpdateBag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.UpdateBag");
		
		ABP_Upgrades_Book_C_UpdateBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.ResetPrevious
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::ResetPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.ResetPrevious");
		
		ABP_Upgrades_Book_C_ResetPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.ResetNext
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Book_C::ResetNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.ResetNext");
		
		ABP_Upgrades_Book_C_ResetNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Book.BP_Upgrades_Book_C.ExecuteUbergraph_BP_Upgrades_Book
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_Book_C::ExecuteUbergraph_BP_Upgrades_Book(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Book.BP_Upgrades_Book_C.ExecuteUbergraph_BP_Upgrades_Book");
		
		ABP_Upgrades_Book_C_ExecuteUbergraph_BP_Upgrades_Book_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Upgrades_Book_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Upgrades_Book_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Upgrades_Book.BP_Upgrades_Book_C");
		return ptr;
	}

}


