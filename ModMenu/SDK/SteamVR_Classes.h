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
	 * Class SteamVR.SteamVRChaperoneComponent
	 * Size -> 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
	 */
	class USteamVRChaperoneComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLeaveBounds;                                           // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReturnToBounds;                                        // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L19P[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (PADDING)

	public:
		void SteamVRChaperoneEvent__DelegateSignature();
		TArray<struct FVector> GetBounds();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamVR.SteamVRFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32_t>* OutTrackedDeviceIds);
		bool STATIC_GetTrackedDevicePositionAndOrientation(int32_t DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation);
		bool STATIC_GetHandPositionAndOrientation(int32_t ControllerIndex, EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
