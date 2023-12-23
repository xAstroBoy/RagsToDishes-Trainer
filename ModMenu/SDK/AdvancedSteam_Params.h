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
	 * Function AdvancedSteam.AdvancedSteamAchievementClearCallbackProxy.CreateProxyObjectForAchievementsClear
	 */
	struct UAdvancedSteamAchievementClearCallbackProxy_CreateProxyObjectForAchievementsClear_Params
	{
	public:
		class FName                                                AchievementId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAdvancedSteamAchievementClearCallbackProxy*         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamAchievementQueryCallbackProxy.CreateProxyObjectForAchievementsQuery
	 */
	struct UAdvancedSteamAchievementQueryCallbackProxy_CreateProxyObjectForAchievementsQuery_Params
	{
	public:
		class UAdvancedSteamAchievementQueryCallbackProxy*         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.SetProgress
	 */
	struct UAdvancedSteamAchievementsBlueprintLibrary_SetProgress_Params
	{
	public:
		class FName                                                AchievementId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamStats                                         StatInfo;                                                // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.GetCachedAchievement
	 */
	struct UAdvancedSteamAchievementsBlueprintLibrary_GetCachedAchievement_Params
	{
	public:
		class FName                                                AchievementId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamAchievements                                  OutAchievement;                                          // 0x0008(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.GetAchievementIcon
	 */
	struct UAdvancedSteamAchievementsBlueprintLibrary_GetAchievementIcon_Params
	{
	public:
		int32_t                                                    Image;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J4NF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamAchievementUnlockCallbackProxy.CreateProxyObjectForAchievementsUnlock
	 */
	struct UAdvancedSteamAchievementUnlockCallbackProxy_CreateProxyObjectForAchievementsUnlock_Params
	{
	public:
		class FName                                                AchievementId;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAdvancedSteamAchievementUnlockCallbackProxy*        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamCloudReadCallbackProxy.CreateProxyObjectForReadCloud
	 */
	struct UAdvancedSteamCloudReadCallbackProxy_CreateProxyObjectForReadCloud_Params
	{
	public:
		class FString                                              UGCHandle;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAdvancedSteamCloudReadCallbackProxy*                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamCloudWriteCallbackProxy.CreateProxyObjectForWriteCloud
	 */
	struct UAdvancedSteamCloudWriteCallbackProxy_CreateProxyObjectForWriteCloud_Params
	{
	public:
		class FName                                                LeaderboardName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Filename;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      UploadFileList;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UAdvancedSteamCloudWriteCallbackProxy*               ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamGameServerStatsQueryCallbackProxy.CreateProxyObjectForIntQuery
	 */
	struct UAdvancedSteamGameServerStatsQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamStats>                                 StatsArray;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UAdvancedSteamGameServerStatsQueryCallbackProxy*     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary.WriteSteamLeaderboardInteger
	 */
	struct UAdvancedSteamLeaderboardBlueprintLibrary_WriteSteamLeaderboardInteger_Params
	{
	public:
		ELeaderboardUploadMethod                                   LeaderboardUploadMethod;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2EDD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                LeaderboardName;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StatName;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StatValue;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O9UI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            Details;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary.GetAvatarIcon
	 */
	struct UAdvancedSteamLeaderboardBlueprintLibrary_GetAvatarIcon_Params
	{
	public:
		int32_t                                                    Image;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B61F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamLeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	 */
	struct UAdvancedSteamLeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
	{
	public:
		class FName                                                LeaboardName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAdvancedSteamLeaderboardQueryCallbackProxy*         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamLeaderboardRetrieveCallbackProxy.CreateProxyObjectForRetrieve
	 */
	struct UAdvancedSteamLeaderboardRetrieveCallbackProxy_CreateProxyObjectForRetrieve_Params
	{
	public:
		class FName                                                LeaboardName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamStats>                                 StatsArray;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		ELeaderboardRequest                                        LeaderboardRequest;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UUPO[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RangeStart;                                              // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RangeEnd;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DetailCount;                                             // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAdvancedSteamLeaderboardRetrieveCallbackProxy*      ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.SetSteamStat
	 */
	struct UAdvancedSteamStatsBlueprintLibrary_SetSteamStat_Params
	{
	public:
		TArray<struct FSteamStats>                                 StatsArray;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.SetGameServerStat
	 */
	struct UAdvancedSteamStatsBlueprintLibrary_SetGameServerStat_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamStats>                                 StatsArray;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.IncreaseSteamStat
	 */
	struct UAdvancedSteamStatsBlueprintLibrary_IncreaseSteamStat_Params
	{
	public:
		TArray<struct FSteamStats>                                 StatsArray;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.IncreaseGameServerStat
	 */
	struct UAdvancedSteamStatsBlueprintLibrary_IncreaseGameServerStat_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamStats>                                 StatsArray;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.GetSteamId
	 */
	struct UAdvancedSteamStatsBlueprintLibrary_GetSteamId_Params
	{
	public:
		class FString                                              SteamId;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteam.AdvancedSteamStatsQueryCallbackProxy.CreateProxyObjectForIntQuery
	 */
	struct UAdvancedSteamStatsQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
	{
	public:
		TArray<struct FSteamStats>                                 StatsArray;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UAdvancedSteamStatsQueryCallbackProxy*               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
