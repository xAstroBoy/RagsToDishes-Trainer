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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteam.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteam::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteam");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003038A0
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamAchievementClearCallbackProxy.CreateProxyObjectForAchievementsClear
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AchievementId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamAchievementClearCallbackProxy* UAdvancedSteamAchievementClearCallbackProxy::STATIC_CreateProxyObjectForAchievementsClear(const class FName& AchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamAchievementClearCallbackProxy.CreateProxyObjectForAchievementsClear");
		
		UAdvancedSteamAchievementClearCallbackProxy_CreateProxyObjectForAchievementsClear_Params params {};
		params.AchievementId = AchievementId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamAchievementClearCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamAchievementClearCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamAchievementClearCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00303920
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamAchievementQueryCallbackProxy.CreateProxyObjectForAchievementsQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UAdvancedSteamAchievementQueryCallbackProxy* UAdvancedSteamAchievementQueryCallbackProxy::STATIC_CreateProxyObjectForAchievementsQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamAchievementQueryCallbackProxy.CreateProxyObjectForAchievementsQuery");
		
		UAdvancedSteamAchievementQueryCallbackProxy_CreateProxyObjectForAchievementsQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamAchievementQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamAchievementQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamAchievementQueryCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304980
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.SetProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AchievementId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamStats                                 StatInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamAchievementsBlueprintLibrary::STATIC_SetProgress(const class FName& AchievementId, const struct FSteamStats& StatInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.SetProgress");
		
		UAdvancedSteamAchievementsBlueprintLibrary_SetProgress_Params params {};
		params.AchievementId = AchievementId;
		params.StatInfo = StatInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304390
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.GetCachedAchievement
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AchievementId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamAchievements                          OutAchievement                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamAchievementsBlueprintLibrary::STATIC_GetCachedAchievement(const class FName& AchievementId, struct FSteamAchievements* OutAchievement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.GetCachedAchievement");
		
		UAdvancedSteamAchievementsBlueprintLibrary_GetCachedAchievement_Params params {};
		params.AchievementId = AchievementId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAchievement != nullptr)
			*OutAchievement = params.OutAchievement;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304290
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.GetAchievementIcon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UAdvancedSteamAchievementsBlueprintLibrary::STATIC_GetAchievementIcon(int32_t Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary.GetAchievementIcon");
		
		UAdvancedSteamAchievementsBlueprintLibrary_GetAchievementIcon_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamAchievementsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamAchievementsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamAchievementsBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00303950
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamAchievementUnlockCallbackProxy.CreateProxyObjectForAchievementsUnlock
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AchievementId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamAchievementUnlockCallbackProxy* UAdvancedSteamAchievementUnlockCallbackProxy::STATIC_CreateProxyObjectForAchievementsUnlock(const class FName& AchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamAchievementUnlockCallbackProxy.CreateProxyObjectForAchievementsUnlock");
		
		UAdvancedSteamAchievementUnlockCallbackProxy_CreateProxyObjectForAchievementsUnlock_Params params {};
		params.AchievementId = AchievementId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamAchievementUnlockCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamAchievementUnlockCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamAchievementUnlockCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00303D10
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamCloudReadCallbackProxy.CreateProxyObjectForReadCloud
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UGCHandle                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamCloudReadCallbackProxy* UAdvancedSteamCloudReadCallbackProxy::STATIC_CreateProxyObjectForReadCloud(const class FString& UGCHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamCloudReadCallbackProxy.CreateProxyObjectForReadCloud");
		
		UAdvancedSteamCloudReadCallbackProxy_CreateProxyObjectForReadCloud_Params params {};
		params.UGCHandle = UGCHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamCloudReadCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamCloudReadCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamCloudReadCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304070
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamCloudWriteCallbackProxy.CreateProxyObjectForWriteCloud
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        LeaderboardName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Filename                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UploadFileList                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamCloudWriteCallbackProxy* UAdvancedSteamCloudWriteCallbackProxy::STATIC_CreateProxyObjectForWriteCloud(const class FName& LeaderboardName, const class FName& StatName, const class FName& Filename, TArray<class FString> UploadFileList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamCloudWriteCallbackProxy.CreateProxyObjectForWriteCloud");
		
		UAdvancedSteamCloudWriteCallbackProxy_CreateProxyObjectForWriteCloud_Params params {};
		params.LeaderboardName = LeaderboardName;
		params.StatName = StatName;
		params.Filename = Filename;
		params.UploadFileList = UploadFileList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamCloudWriteCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamCloudWriteCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamCloudWriteCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003039D0
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamGameServerStatsQueryCallbackProxy.CreateProxyObjectForIntQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamStats>                         StatsArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamGameServerStatsQueryCallbackProxy* UAdvancedSteamGameServerStatsQueryCallbackProxy::STATIC_CreateProxyObjectForIntQuery(const class FString& PlayerId, TArray<struct FSteamStats> StatsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamGameServerStatsQueryCallbackProxy.CreateProxyObjectForIntQuery");
		
		UAdvancedSteamGameServerStatsQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params {};
		params.PlayerId = PlayerId;
		params.StatsArray = StatsArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamGameServerStatsQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamGameServerStatsQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamGameServerStatsQueryCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304B90
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary.WriteSteamLeaderboardInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELeaderboardUploadMethod                           LeaderboardUploadMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        LeaderboardName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StatValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Details                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamLeaderboardBlueprintLibrary::STATIC_WriteSteamLeaderboardInteger(ELeaderboardUploadMethod LeaderboardUploadMethod, const class FName& LeaderboardName, const class FName& StatName, int32_t StatValue, TArray<int32_t> Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary.WriteSteamLeaderboardInteger");
		
		UAdvancedSteamLeaderboardBlueprintLibrary_WriteSteamLeaderboardInteger_Params params {};
		params.LeaderboardUploadMethod = LeaderboardUploadMethod;
		params.LeaderboardName = LeaderboardName;
		params.StatName = StatName;
		params.StatValue = StatValue;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304310
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary.GetAvatarIcon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UAdvancedSteamLeaderboardBlueprintLibrary::STATIC_GetAvatarIcon(int32_t Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary.GetAvatarIcon");
		
		UAdvancedSteamLeaderboardBlueprintLibrary_GetAvatarIcon_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamLeaderboardBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamLeaderboardBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamLeaderboardBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00303B40
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamLeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        LeaboardName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamLeaderboardQueryCallbackProxy* UAdvancedSteamLeaderboardQueryCallbackProxy::STATIC_CreateProxyObjectForIntQuery(const class FName& LeaboardName, const class FName& StatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamLeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");
		
		UAdvancedSteamLeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params {};
		params.LeaboardName = LeaboardName;
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamLeaderboardQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamLeaderboardQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamLeaderboardQueryCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00303E00
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamLeaderboardRetrieveCallbackProxy.CreateProxyObjectForRetrieve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        LeaboardName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamStats>                         StatsArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ELeaderboardRequest                                LeaderboardRequest                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DetailCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamLeaderboardRetrieveCallbackProxy* UAdvancedSteamLeaderboardRetrieveCallbackProxy::STATIC_CreateProxyObjectForRetrieve(const class FName& LeaboardName, const class FName& StatName, TArray<struct FSteamStats> StatsArray, ELeaderboardRequest LeaderboardRequest, int32_t RangeStart, int32_t RangeEnd, int32_t DetailCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamLeaderboardRetrieveCallbackProxy.CreateProxyObjectForRetrieve");
		
		UAdvancedSteamLeaderboardRetrieveCallbackProxy_CreateProxyObjectForRetrieve_Params params {};
		params.LeaboardName = LeaboardName;
		params.StatName = StatName;
		params.StatsArray = StatsArray;
		params.LeaderboardRequest = LeaderboardRequest;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		params.DetailCount = DetailCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamLeaderboardRetrieveCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamLeaderboardRetrieveCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamLeaderboardRetrieveCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304A80
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.SetSteamStat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSteamStats>                         StatsArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamStatsBlueprintLibrary::STATIC_SetSteamStat(TArray<struct FSteamStats> StatsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.SetSteamStat");
		
		UAdvancedSteamStatsBlueprintLibrary_SetSteamStat_Params params {};
		params.StatsArray = StatsArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304820
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.SetGameServerStat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamStats>                         StatsArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamStatsBlueprintLibrary::STATIC_SetGameServerStat(const class FString& PlayerId, TArray<struct FSteamStats> StatsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.SetGameServerStat");
		
		UAdvancedSteamStatsBlueprintLibrary_SetGameServerStat_Params params {};
		params.PlayerId = PlayerId;
		params.StatsArray = StatsArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304710
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.IncreaseSteamStat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSteamStats>                         StatsArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamStatsBlueprintLibrary::STATIC_IncreaseSteamStat(TArray<struct FSteamStats> StatsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.IncreaseSteamStat");
		
		UAdvancedSteamStatsBlueprintLibrary_IncreaseSteamStat_Params params {};
		params.StatsArray = StatsArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003045B0
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.IncreaseGameServerStat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamStats>                         StatsArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamStatsBlueprintLibrary::STATIC_IncreaseGameServerStat(const class FString& PlayerId, TArray<struct FSteamStats> StatsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.IncreaseGameServerStat");
		
		UAdvancedSteamStatsBlueprintLibrary_IncreaseGameServerStat_Params params {};
		params.PlayerId = PlayerId;
		params.StatsArray = StatsArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00304500
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.GetSteamId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SteamId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamStatsBlueprintLibrary::STATIC_GetSteamId(class FString* SteamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamStatsBlueprintLibrary.GetSteamId");
		
		UAdvancedSteamStatsBlueprintLibrary_GetSteamId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamId != nullptr)
			*SteamId = params.SteamId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamStatsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamStatsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamStatsBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00303C00
	 * 		Name   -> Function AdvancedSteam.AdvancedSteamStatsQueryCallbackProxy.CreateProxyObjectForIntQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSteamStats>                         StatsArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UAdvancedSteamStatsQueryCallbackProxy* UAdvancedSteamStatsQueryCallbackProxy::STATIC_CreateProxyObjectForIntQuery(TArray<struct FSteamStats> StatsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteam.AdvancedSteamStatsQueryCallbackProxy.CreateProxyObjectForIntQuery");
		
		UAdvancedSteamStatsQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params {};
		params.StatsArray = StatsArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamStatsQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamStatsQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteam.AdvancedSteamStatsQueryCallbackProxy");
		return ptr;
	}

}


