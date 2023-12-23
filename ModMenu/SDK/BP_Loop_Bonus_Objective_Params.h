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
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.DeliverAllOrdersCorrectly
	 */
	struct ABP_Loop_Bonus_Objective_C_DeliverAllOrdersCorrectly_Params
	{
	public:
		int32_t                                                    Reward;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.AllHappyCustomers
	 */
	struct ABP_Loop_Bonus_Objective_C_AllHappyCustomers_Params
	{
	public:
		int32_t                                                    Reward;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.NoAngryCustomers
	 */
	struct ABP_Loop_Bonus_Objective_C_NoAngryCustomers_Params
	{
	public:
		int32_t                                                    Reward;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.Earn_X_Money
	 */
	struct ABP_Loop_Bonus_Objective_C_Earn_X_Money_Params
	{
	public:
		int32_t                                                    Goal;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Reward;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.Serve_X_Happy_Customers
	 */
	struct ABP_Loop_Bonus_Objective_C_Serve_X_Happy_Customers_Params
	{
	public:
		int32_t                                                    Goal;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Reward;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.LoopBonus:Check
	 */
	struct ABP_Loop_Bonus_Objective_C_LoopBonusCheck_Params
	{	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.LoopBonus:Activate
	 */
	struct ABP_Loop_Bonus_Objective_C_LoopBonusActivate_Params
	{	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.UserConstructionScript
	 */
	struct ABP_Loop_Bonus_Objective_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.ReceiveBeginPlay
	 */
	struct ABP_Loop_Bonus_Objective_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Loop_Bonus_Objective.BP_Loop_Bonus_Objective_C.ExecuteUbergraph_BP_Loop_Bonus_Objective
	 */
	struct ABP_Loop_Bonus_Objective_C_ExecuteUbergraph_BP_Loop_Bonus_Objective_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLQA[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
