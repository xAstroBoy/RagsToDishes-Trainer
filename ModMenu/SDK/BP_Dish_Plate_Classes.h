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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Dish_Plate.BP_Dish_Plate_C
	 * Size -> 0x0070 (FullSize[0x0530] - InheritedSize[0x04C0])
	 */
	class ABP_Dish_Plate_C : public ABP_Dish_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                PottageMesh;                                             // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FoodMesh;                                                // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PlateWaterDripParticle;                                  // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PorridgeMesh;                                            // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StewOatsMesh;                                            // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StewMeatMesh;                                            // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StewVegMesh;                                             // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PottageAnimTimeline_Morph_FC2C336D4EF303520C3AE1B9A6444B5D; // 0x0500(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         PottageAnimTimeline__Direction_FC2C336D4EF303520C3AE1B9A6444B5D; // 0x0504(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZMQT[0x3];                                   // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PottageAnimTimeline;                                     // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PottageValue;                                            // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FishSausageAdded;                                        // 0x0514(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PottageAdded;                                            // 0x0515(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FruitAdded;                                              // 0x0516(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FruitToppingAdded;                                       // 0x0517(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UStaticMeshComponent*>                        SoupMeshes;                                              // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UParticleSystem*                                     EmptyParticle_Stew;                                      // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetRuinedStewProperties(TArray<class FName>* Ingredients);
		void SetRuinedSoupProperties(TArray<class FName>* Ingredients);
		void SetFruitTopping(Enum_Serving_Spoon_Fillings Topping, bool* AddedSucessfully);
		void SetPorridgeProperties(bool* AddedSuccessfully);
		void SetStewMeshes();
		void SetStewProperties(TArray<struct FLinearColor>* Colours, TArray<class FName>* Ingredients, bool Burned);
		void SetSoupProperties(TArray<struct FLinearColor>* Colours, TArray<class FName>* Ingredients);
		void SetSoupWaterColour(TArray<struct FLinearColor>* Colours);
		void AddSoupIngredients(TArray<class FName>* Ingredients);
		void SetPottage(Enum_Pottage_Types Pottage);
		void AddIngredientToPlate(class AActor* Ingredient);
		void UserConstructionScript();
		void PottageAnimTimeline__FinishedFunc();
		void PottageAnimTimeline__UpdateFunc();
		void BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void AnimatePottage();
		void EmptyDish();
		void ExecuteUbergraph_BP_Dish_Plate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
