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
	 * BlueprintGeneratedClass BP_DeliveryBay_Knight.BP_DeliveryBay_Knight_C
	 * Size -> 0x0004 (FullSize[0x033C] - InheritedSize[0x0338])
	 */
	class ABP_DeliveryBay_Knight_C : public AStaticMeshActor
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
