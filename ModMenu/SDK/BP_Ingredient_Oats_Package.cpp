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
	 * 		Name   -> Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.Grab
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
	void ABP_Ingredient_Oats_C::Grab(class USceneComponent* MotionController, class UPhysicsHandleComponent* PhysicsHandle, class UPhysicsHandleComponent* AngularPhysicsHandle, EControllerHand hand, class ABP_MotionController_C* Controller, class USceneComponent* AttachPoint, class AActor** AttachedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.Grab");
		
		ABP_Ingredient_Oats_C_Grab_Params params {};
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
	 * 		Name   -> Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Ingredient_Oats_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.UserConstructionScript");
		
		ABP_Ingredient_Oats_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.ForceRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Ingredient_Oats_C::ForceRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.ForceRelease");
		
		ABP_Ingredient_Oats_C_ForceRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.Release
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Ingredient_Oats_C::Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.Release");
		
		ABP_Ingredient_Oats_C_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.ExecuteUbergraph_BP_Ingredient_Oats
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ingredient_Oats_C::ExecuteUbergraph_BP_Ingredient_Oats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ingredient_Oats.BP_Ingredient_Oats_C.ExecuteUbergraph_BP_Ingredient_Oats");
		
		ABP_Ingredient_Oats_C_ExecuteUbergraph_BP_Ingredient_Oats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Ingredient_Oats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ingredient_Oats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ingredient_Oats.BP_Ingredient_Oats_C");
		return ptr;
	}

}


