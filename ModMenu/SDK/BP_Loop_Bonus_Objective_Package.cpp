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
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.DeliverAllOrdersCorrectly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Reward                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Bonus_Objective_C::DeliverAllOrdersCorrectly(int32_t* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.DeliverAllOrdersCorrectly");
		
		ABP_Loop_Bonus_Objective_C_DeliverAllOrdersCorrectly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.AllHappyCustomers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Reward                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Bonus_Objective_C::AllHappyCustomers(int32_t* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.AllHappyCustomers");
		
		ABP_Loop_Bonus_Objective_C_AllHappyCustomers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.NoAngryCustomers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Reward                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Bonus_Objective_C::NoAngryCustomers(int32_t* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.NoAngryCustomers");
		
		ABP_Loop_Bonus_Objective_C_NoAngryCustomers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.Earn_X_Money
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Goal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Reward                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Bonus_Objective_C::Earn_X_Money(int32_t* Goal, int32_t* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.Earn_X_Money");
		
		ABP_Loop_Bonus_Objective_C_Earn_X_Money_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Goal != nullptr)
			*Goal = params.Goal;
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.Serve_X_Happy_Customers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Goal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Reward                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Bonus_Objective_C::Serve_X_Happy_Customers(int32_t* Goal, int32_t* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.Serve_X_Happy_Customers");
		
		ABP_Loop_Bonus_Objective_C_Serve_X_Happy_Customers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Goal != nullptr)
			*Goal = params.Goal;
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.LoopBonus:Check
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Bonus_Objective_C::LoopBonusCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.LoopBonus:Check");
		
		ABP_Loop_Bonus_Objective_C_LoopBonusCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.LoopBonus:Activate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Bonus_Objective_C::LoopBonusActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.LoopBonus:Activate");
		
		ABP_Loop_Bonus_Objective_C_LoopBonusActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Loop_Bonus_Objective_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.UserConstructionScript");
		
		ABP_Loop_Bonus_Objective_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Loop_Bonus_Objective_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.ReceiveBeginPlay");
		
		ABP_Loop_Bonus_Objective_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.ExecuteUbergraph_BP_Loop_Bonus_Objective
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Loop_Bonus_Objective_C::ExecuteUbergraph_BP_Loop_Bonus_Objective(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.ExecuteUbergraph_BP_Loop_Bonus_Objective");
		
		ABP_Loop_Bonus_Objective_C_ExecuteUbergraph_BP_Loop_Bonus_Objective_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Loop_Bonus_Objective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Loop_Bonus_Objective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C");
		return ptr;
	}

}


