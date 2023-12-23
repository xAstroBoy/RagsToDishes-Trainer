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
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.Grab
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             MotionController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPhysicsHandleComponent*                     PhysicsHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPhysicsHandleComponent*                     AngularPhysicsHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MotionController_C*                      Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      AttachedActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Menu_Choice_Option_C::Grab(class USceneComponent* MotionController, class UPhysicsHandleComponent* PhysicsHandle, class UPhysicsHandleComponent* AngularPhysicsHandle, EControllerHand hand, class ABP_MotionController_C* Controller, class USceneComponent* AttachPoint, class AActor** AttachedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.Grab");
		
		ABP_Loop_Menu_Choice_Option_C_Grab_Params params {};
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
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.IsHeldByController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             MotionController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Loop_Menu_Choice_Option_C::IsHeldByController(class USceneComponent* MotionController, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.IsHeldByController");
		
		ABP_Loop_Menu_Choice_Option_C_IsHeldByController_Params params {};
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
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SetupUpgradesButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::SetupUpgradesButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SetupUpgradesButton");
		
		ABP_Loop_Menu_Choice_Option_C_SetupUpgradesButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ReturnItemEvent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::ReturnItemEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ReturnItemEvent");
		
		ABP_Loop_Menu_Choice_Option_C_ReturnItemEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.UserConstructionScript");
		
		ABP_Loop_Menu_Choice_Option_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade_Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::NewUpgrade_Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade_Timeline__FinishedFunc");
		
		ABP_Loop_Menu_Choice_Option_C_NewUpgrade_Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade_Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::NewUpgrade_Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade_Timeline__UpdateFunc");
		
		ABP_Loop_Menu_Choice_Option_C_NewUpgrade_Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SpawnAnimTL__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::SpawnAnimTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SpawnAnimTL__FinishedFunc");
		
		ABP_Loop_Menu_Choice_Option_C_SpawnAnimTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SpawnAnimTL__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::SpawnAnimTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SpawnAnimTL__UpdateFunc");
		
		ABP_Loop_Menu_Choice_Option_C_SpawnAnimTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ReceiveBeginPlay");
		
		ABP_Loop_Menu_Choice_Option_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.Release
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.Release");
		
		ABP_Loop_Menu_Choice_Option_C_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SelectMenuOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::SelectMenuOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SelectMenuOption");
		
		ABP_Loop_Menu_Choice_Option_C_SelectMenuOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.DisableSaveButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::DisableSaveButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.DisableSaveButton");
		
		ABP_Loop_Menu_Choice_Option_C_DisableSaveButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.EnableHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::EnableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.EnableHighlight");
		
		ABP_Loop_Menu_Choice_Option_C_EnableHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.DisableHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::DisableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.DisableHighlight");
		
		ABP_Loop_Menu_Choice_Option_C_DisableHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.PlayGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::PlayGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.PlayGame");
		
		ABP_Loop_Menu_Choice_Option_C_PlayGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.PauseGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::PauseGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.PauseGame");
		
		ABP_Loop_Menu_Choice_Option_C_PauseGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Menu_Choice_Option_C::NewUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade");
		
		ABP_Loop_Menu_Choice_Option_C_NewUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ExecuteUbergraph_BP_Loop_Menu_Choice_Option
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Menu_Choice_Option_C::ExecuteUbergraph_BP_Loop_Menu_Choice_Option(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ExecuteUbergraph_BP_Loop_Menu_Choice_Option");
		
		ABP_Loop_Menu_Choice_Option_C_ExecuteUbergraph_BP_Loop_Menu_Choice_Option_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Loop_Menu_Choice_Option_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Loop_Menu_Choice_Option_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C");
		return ptr;
	}

}


