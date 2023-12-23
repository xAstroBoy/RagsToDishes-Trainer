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
	 * Class AdvancedSteam.AdvancedSteam
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAdvancedSteam : public UObject
	{
	public:
		unsigned char                                              UnknownData_YHMF[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamAchievementClearCallbackProxy
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamAchievementClearCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBIK[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamAchievementClearCallbackProxy* STATIC_CreateProxyObjectForAchievementsClear(const class FName& AchievementId);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamAchievementQueryCallbackProxy
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PG9Q[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamAchievementQueryCallbackProxy* STATIC_CreateProxyObjectForAchievementsQuery();
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamAchievementsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetProgress(const class FName& AchievementId, const struct FSteamStats& StatInfo);
		bool STATIC_GetCachedAchievement(const class FName& AchievementId, struct FSteamAchievements* OutAchievement);
		class UTexture2D* STATIC_GetAchievementIcon(int32_t Image);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamAchievementUnlockCallbackProxy
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamAchievementUnlockCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46HG[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamAchievementUnlockCallbackProxy* STATIC_CreateProxyObjectForAchievementsUnlock(const class FName& AchievementId);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamCloudReadCallbackProxy
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamCloudReadCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FR21[0x70];                                  // 0x0048(0x0070) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamCloudReadCallbackProxy* STATIC_CreateProxyObjectForReadCloud(const class FString& UGCHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamCloudWriteCallbackProxy
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamCloudWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32VU[0x98];                                  // 0x0048(0x0098) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamCloudWriteCallbackProxy* STATIC_CreateProxyObjectForWriteCloud(const class FName& LeaderboardName, const class FName& StatName, const class FName& Filename, TArray<class FString> UploadFileList);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamGameServerStatsQueryCallbackProxy
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamGameServerStatsQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA3G[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamGameServerStatsQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(const class FString& PlayerId, TArray<struct FSteamStats> StatsArray);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamLeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WriteSteamLeaderboardInteger(ELeaderboardUploadMethod LeaderboardUploadMethod, const class FName& LeaderboardName, const class FName& StatName, int32_t StatValue, TArray<int32_t> Details);
		class UTexture2D* STATIC_GetAvatarIcon(int32_t Image);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamLeaderboardQueryCallbackProxy
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamLeaderboardQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4PL[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamLeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(const class FName& LeaboardName, const class FName& StatName);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamLeaderboardRetrieveCallbackProxy
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamLeaderboardRetrieveCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RRK[0xD0];                                  // 0x0048(0x00D0) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamLeaderboardRetrieveCallbackProxy* STATIC_CreateProxyObjectForRetrieve(const class FName& LeaboardName, const class FName& StatName, TArray<struct FSteamStats> StatsArray, ELeaderboardRequest LeaderboardRequest, int32_t RangeStart, int32_t RangeEnd, int32_t DetailCount);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamStatsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamStatsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetSteamStat(TArray<struct FSteamStats> StatsArray);
		bool STATIC_SetGameServerStat(const class FString& PlayerId, TArray<struct FSteamStats> StatsArray);
		bool STATIC_IncreaseSteamStat(TArray<struct FSteamStats> StatsArray);
		bool STATIC_IncreaseGameServerStat(const class FString& PlayerId, TArray<struct FSteamStats> StatsArray);
		bool STATIC_GetSteamId(class FString* SteamId);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteam.AdvancedSteamStatsQueryCallbackProxy
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamStatsQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAQF[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		class UAdvancedSteamStatsQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(TArray<struct FSteamStats> StatsArray);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
