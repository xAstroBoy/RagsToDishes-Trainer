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
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetRuinedStewProperties
	 */
	struct ABP_Dish_Plate_C_SetRuinedStewProperties_Params
	{
	public:
		TArray<class FName>                                        Ingredients;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetRuinedSoupProperties
	 */
	struct ABP_Dish_Plate_C_SetRuinedSoupProperties_Params
	{
	public:
		TArray<class FName>                                        Ingredients;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetFruitTopping
	 */
	struct ABP_Dish_Plate_C_SetFruitTopping_Params
	{
	public:
		Enum_Serving_Spoon_Fillings                                Topping;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AddedSucessfully;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_142C[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetPorridgeProperties
	 */
	struct ABP_Dish_Plate_C_SetPorridgeProperties_Params
	{
	public:
		bool                                                       AddedSuccessfully;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetStewMeshes
	 */
	struct ABP_Dish_Plate_C_SetStewMeshes_Params
	{	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetStewProperties
	 */
	struct ABP_Dish_Plate_C_SetStewProperties_Params
	{
	public:
		TArray<struct FLinearColor>                                Colours;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        Ingredients;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Burned;                                                  // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetSoupProperties
	 */
	struct ABP_Dish_Plate_C_SetSoupProperties_Params
	{
	public:
		TArray<struct FLinearColor>                                Colours;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        Ingredients;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetSoupWaterColour
	 */
	struct ABP_Dish_Plate_C_SetSoupWaterColour_Params
	{
	public:
		TArray<struct FLinearColor>                                Colours;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.AddSoupIngredients
	 */
	struct ABP_Dish_Plate_C_AddSoupIngredients_Params
	{
	public:
		TArray<class FName>                                        Ingredients;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.SetPottage
	 */
	struct ABP_Dish_Plate_C_SetPottage_Params
	{
	public:
		Enum_Pottage_Types                                         Pottage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DHOD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.AddIngredientToPlate
	 */
	struct ABP_Dish_Plate_C_AddIngredientToPlate_Params
	{
	public:
		class AActor*                                              Ingredient;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.UserConstructionScript
	 */
	struct ABP_Dish_Plate_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.PottageAnimTimeline__FinishedFunc
	 */
	struct ABP_Dish_Plate_C_PottageAnimTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.PottageAnimTimeline__UpdateFunc
	 */
	struct ABP_Dish_Plate_C_PottageAnimTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Dish_Plate_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97B7[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.AnimatePottage
	 */
	struct ABP_Dish_Plate_C_AnimatePottage_Params
	{	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.EmptyDish
	 */
	struct ABP_Dish_Plate_C_EmptyDish_Params
	{	};

	/**
	 * Function BP_Dish_Plate.BP_Dish_Plate_C.ExecuteUbergraph_BP_Dish_Plate
	 */
	struct ABP_Dish_Plate_C_ExecuteUbergraph_BP_Dish_Plate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
