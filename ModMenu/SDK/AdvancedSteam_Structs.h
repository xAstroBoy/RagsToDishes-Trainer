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
	 * Enum AdvancedSteam.EAdvancedSteamErrorCode
	 */
	enum class EAdvancedSteamErrorCode : uint8_t
	{
		UNKNOWN                               = 0,
		ADVANCED_STEAM_MODULE_NOT_INITIALIZED = 1,
		STEAM_NOT_INITIALIZED                 = 2,
		STEAM_STATS_INVALID                   = 3,
		STEAM_STATS_STORE_FAILED              = 4,
		VALUE_NOT_EXIST                       = 5,
		UNSUPPORTED_TYPE                      = 6,
		INVALID_GAMEID                        = 7,
		INVALID_PLAYER_ID                     = 8,
		INVALID_PLAYER_STATE                  = 9,
		FILE_NOT_FOUND                        = 10,
		FAILED_TO_SAVE_REPLAY                 = 11,
		MAX                                   = 12
	};

	/**
	 * Enum AdvancedSteam.EStatsType
	 */
	enum class EStatsType : uint8_t
	{
		Int32 = 0,
		Float = 1,
		MAX   = 2
	};

	/**
	 * Enum AdvancedSteam.ELeaderboardUploadMethod
	 */
	enum class ELeaderboardUploadMethod : uint8_t
	{
		ELeaderboardUploadMethodKeepBest    = 0,
		ELeaderboardUploadMethodForceUpdate = 1,
		MAX                                 = 2
	};

	/**
	 * Enum AdvancedSteam.ELeaderboardRequest
	 */
	enum class ELeaderboardRequest : uint8_t
	{
		ELeaderboardRequestGlobal           = 0,
		ELeaderboardRequestGlobalAroundUser = 1,
		ELeaderboardRequestFriends          = 2,
		ELeaderboardRequestUsers            = 3,
		MAX                                 = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AdvancedSteam.SteamStats
	 * Size -> 0x0018
	 */
	struct FSteamStats
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatsType                                                 StatsType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7USG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloatValue;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int32Value;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D86Z[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSteam.SteamAchievements
	 * Size -> 0x0078
	 */
	struct FSteamAchievements
	{
	public:
		class FName                                                AchievementId;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsProgressAchievement;                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YME2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamStats                                         StatInfo;                                                // 0x0010(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsCleared;                                               // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKZD[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IconImage;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnLocked;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENQA[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Desc;                                                    // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsHidden;                                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDL0[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           UnlockTime;                                              // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AdvancedSteam.SteamLeaderboard
	 * Size -> 0x0050
	 */
	struct FSteamLeaderboard
	{
	public:
		class FName                                                PlayerName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PlayerId;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSteamStats>                                 Columns;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Details;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    IconImage;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OPY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HandleUGC;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
