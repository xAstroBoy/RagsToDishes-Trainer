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
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.Grab
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
	void ABP_Cake_Pan_Lid_C::Grab(class USceneComponent* MotionController, class UPhysicsHandleComponent* PhysicsHandle, class UPhysicsHandleComponent* AngularPhysicsHandle, EControllerHand hand, class ABP_MotionController_C* Controller, class USceneComponent* AttachPoint, class AActor** AttachedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.Grab");
		
		ABP_Cake_Pan_Lid_C_Grab_Params params {};
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
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.IsHeldByController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             MotionController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Cake_Pan_Lid_C::IsHeldByController(class USceneComponent* MotionController, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.IsHeldByController");
		
		ABP_Cake_Pan_Lid_C_IsHeldByController_Params params {};
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
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.UserConstructionScript");
		
		ABP_Cake_Pan_Lid_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.InteractDelay__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::InteractDelay__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.InteractDelay__FinishedFunc");
		
		ABP_Cake_Pan_Lid_C_InteractDelay__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.InteractDelay__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::InteractDelay__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.InteractDelay__UpdateFunc");
		
		ABP_Cake_Pan_Lid_C_InteractDelay__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.LidBurningAnimation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::LidBurningAnimation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.LidBurningAnimation__FinishedFunc");
		
		ABP_Cake_Pan_Lid_C_LidBurningAnimation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.LidBurningAnimation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::LidBurningAnimation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.LidBurningAnimation__UpdateFunc");
		
		ABP_Cake_Pan_Lid_C_LidBurningAnimation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ReceiveBeginPlay");
		
		ABP_Cake_Pan_Lid_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.AnimateLid
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cake_Pan_Lid_C::AnimateLid(float Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.AnimateLid");
		
		ABP_Cake_Pan_Lid_C_AnimateLid_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.Release
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.Release");
		
		ABP_Cake_Pan_Lid_C_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.AllowInteractAfterTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::AllowInteractAfterTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.AllowInteractAfterTime");
		
		ABP_Cake_Pan_Lid_C_AllowInteractAfterTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Cake_Pan_Lid_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ReceiveHit");
		
		ABP_Cake_Pan_Lid_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.EnableHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::EnableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.EnableHighlight");
		
		ABP_Cake_Pan_Lid_C_EnableHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.DisableHighlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::DisableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.DisableHighlight");
		
		ABP_Cake_Pan_Lid_C_DisableHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.SetCanBeGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanBeGrabbed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Cake_Pan_Lid_C::SetCanBeGrabbed(bool CanBeGrabbed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.SetCanBeGrabbed");
		
		ABP_Cake_Pan_Lid_C_SetCanBeGrabbed_Params params {};
		params.CanBeGrabbed = CanBeGrabbed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ReturnEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::ReturnEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ReturnEquipment");
		
		ABP_Cake_Pan_Lid_C_ReturnEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ForceRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Cake_Pan_Lid_C::ForceRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ForceRelease");
		
		ABP_Cake_Pan_Lid_C_ForceRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ExecuteUbergraph_BP_Cake_Pan_Lid
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cake_Pan_Lid_C::ExecuteUbergraph_BP_Cake_Pan_Lid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C.ExecuteUbergraph_BP_Cake_Pan_Lid");
		
		ABP_Cake_Pan_Lid_C_ExecuteUbergraph_BP_Cake_Pan_Lid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cake_Pan_Lid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cake_Pan_Lid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cake_Pan_Lid.BP_Cake_Pan_Lid_C");
		return ptr;
	}

}


