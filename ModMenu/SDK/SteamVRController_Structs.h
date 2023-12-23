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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SteamVRController.ESteamVRTouchDPadMapping
	 */
	enum class ESteamVRTouchDPadMapping : uint8_t
	{
		FaceButtons          = 0,
		ThumbstickDirections = 1,
		Disabled             = 2,
		MAX                  = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
