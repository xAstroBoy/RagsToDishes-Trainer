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
	 * BlueprintGeneratedClass BP_RtD_GameInstance.BP_RtD_GameInstance_C
	 * Size -> 0x010C (FullSize[0x01AC] - InheritedSize[0x00A0])
	 */
	class UBP_RtD_GameInstance_C : public UGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MusicVolumeLevel;                                        // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OneHandModeEnabled;                                      // 0x00AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Enum_Game_Stages                                           Stage;                                                   // 0x00AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZBJ0[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightValue;                                             // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SFXVolumeLevel;                                          // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SaveGameSlot;                                            // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      SaveGameSlots;                                           // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USG_Player_Options_C*                                SaveOptionsRef;                                          // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayingTutorial;                                         // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_91R8[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LevelsToLoad;                                            // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              SettingsSaveName;                                        // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      PawnRotation;                                            // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Online;                                                  // 0x010C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SMRE[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USG_RtD_Leaderboards_C*                              SG_Leaderboard;                                          // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSteamStats>                                 Temp_Stats;                                              // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FStruct_5Minute_Leaderboard>                 Leaderboard_Peasants;                                    // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              SaveSlot_Leaderboards_Online;                            // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FStruct_5Minute_Leaderboard>                 Leaderboard_Nobles;                                      // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FStruct_5Minute_Leaderboard>                 Leaderboard_Royals;                                      // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              SaveSlot_Leaderboards_Offline;                           // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		Enum_Season                                                Season;                                                  // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_Controller_Device                                     ControllerType;                                          // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2678[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ACH_Campaign_Progress;                                   // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_Peasants_Progress;                                   // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_Nobles_Progress;                                     // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_Royals_Progress;                                     // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_5Upgrades_Progress;                                  // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_PeasantsUpgrades_Progress;                           // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_NoblesUpgrades_Progress;                             // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_RoyalsUpgrades_Progress;                             // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_15LoopObjectives_Progress;                           // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_ScareBird_Progress;                                  // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_BonusCustomers_Progress;                             // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ACH_Customers_Progress;                                  // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFailure_196D6DED41848748369068A9EA8562E0(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnSuccess_196D6DED41848748369068A9EA8562E0(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnFailure_BE3FEFF0452D88845D179784C0A16715(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnSuccess_BE3FEFF0452D88845D179784C0A16715(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnFailure_3E745DAD47974D2725D57D816372BC65(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnSuccess_3E745DAD47974D2725D57D816372BC65(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnFailure_B355DDDB4D676DA43D1B989B82268407(int32_t LeaderboardValue);
		void OnSuccess_B355DDDB4D676DA43D1B989B82268407(int32_t LeaderboardValue);
		void OnFailure_33EDCD7D430E0D58A28465A486B3DD4F(int32_t LeaderboardValue);
		void OnSuccess_33EDCD7D430E0D58A28465A486B3DD4F(int32_t LeaderboardValue);
		void OnFailure_7A33CEFB4FE5EFA6906D3EA3CD63B3BB(int32_t LeaderboardValue);
		void OnSuccess_7A33CEFB4FE5EFA6906D3EA3CD63B3BB(int32_t LeaderboardValue);
		void OnFailure_A1ABCD7E4A27CA301312A48D5A3DFDBC(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnSuccess_A1ABCD7E4A27CA301312A48D5A3DFDBC(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnFailure_A3F1C5294762864ADD4907B7061471F9();
		void OnSuccess_A3F1C5294762864ADD4907B7061471F9();
		void OnFailure_778D65844E4BE22EBDE4148EDEDD40A8(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnSuccess_778D65844E4BE22EBDE4148EDEDD40A8(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnFailure_93EE85E7405A55AA7BAEF8BF65D12261(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnSuccess_93EE85E7405A55AA7BAEF8BF65D12261(EAdvancedSteamErrorCode ErrorCode, TArray<struct FSteamLeaderboard> PlayerList);
		void OnFailure_00F51E6A49E10E2741B35ABC619C4D11(int32_t LeaderboardValue);
		void OnSuccess_00F51E6A49E10E2741B35ABC619C4D11(int32_t LeaderboardValue);
		void OnFailure_3A90CDA841EB020C49DCEAB1DDF6E5B8(int32_t LeaderboardValue);
		void OnSuccess_3A90CDA841EB020C49DCEAB1DDF6E5B8(int32_t LeaderboardValue);
		void OnFailure_9709550B4DC66A110D02308C8EC2AA3E(int32_t LeaderboardValue);
		void OnSuccess_9709550B4DC66A110D02308C8EC2AA3E(int32_t LeaderboardValue);
		void OnFailure_1856E5404CDD8DD17CDCED83983EFBC9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_1856E5404CDD8DD17CDCED83983EFBC9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_09D84CA847385C1F76CC798DE4801F27(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_09D84CA847385C1F76CC798DE4801F27(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_73609FC042FB1ED9AB6D7EBB40EBB3D7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_73609FC042FB1ED9AB6D7EBB40EBB3D7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_398818C4465946E547703D9717148F84(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_398818C4465946E547703D9717148F84(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_CC9790594CAD599E8F29E5A090570E6B(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_CC9790594CAD599E8F29E5A090570E6B(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_B2695D484B35689A18DFD59FEDC5FE81(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_B2695D484B35689A18DFD59FEDC5FE81(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_7A2DAB66422BF7B8BFEFD39F2BA11406(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_7A2DAB66422BF7B8BFEFD39F2BA11406(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_9CC6416B4C582BBED133BF86AA8581B7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_9CC6416B4C582BBED133BF86AA8581B7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_BE0AE9DA43011A59D8BA03ACA24A5AEF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_BE0AE9DA43011A59D8BA03ACA24A5AEF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_ED3C82164EFC141FBB31BD8A1FD38586(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_ED3C82164EFC141FBB31BD8A1FD38586(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_DD5FC9274C69A2E30546E6881B8A56DB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_DD5FC9274C69A2E30546E6881B8A56DB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_4E5ADD5343DF55A98B06F2A909D31A72(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_4E5ADD5343DF55A98B06F2A909D31A72(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_2D54A602433E446B77947DB7A53E8AF8(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_2D54A602433E446B77947DB7A53E8AF8(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_8CDB5CC6416759210FC779B86503424C(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_8CDB5CC6416759210FC779B86503424C(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_18659FE946E0C4574B83DEA352450F44(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_18659FE946E0C4574B83DEA352450F44(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_8E7B1DED493278BFE8001383567EC6CE(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_8E7B1DED493278BFE8001383567EC6CE(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_5EE84D7A416D2DC7C35F8C9C185F5817(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_5EE84D7A416D2DC7C35F8C9C185F5817(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_CA8546F84CD9799839A74687BFBEE1CA(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_CA8546F84CD9799839A74687BFBEE1CA(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_D85BFC8044F2DDEA2285F5B5D37B01B9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_D85BFC8044F2DDEA2285F5B5D37B01B9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_D0C56B3C4B0718D60CD67588E9FB0B9B(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_D0C56B3C4B0718D60CD67588E9FB0B9B(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_2C5E73BC4CC8BA071614B6AF6358EE58(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_2C5E73BC4CC8BA071614B6AF6358EE58(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_8DE15C9B4AD18447020F9FAABAB311CF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_8DE15C9B4AD18447020F9FAABAB311CF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_DA04D36D41117387E1D88D9FAFFB02F8(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_DA04D36D41117387E1D88D9FAFFB02F8(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_0E27383E4892E7E0F840978B671D76EC(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_0E27383E4892E7E0F840978B671D76EC(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_A5625D2C4CE4BC7D4191049AED3F26CC(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_A5625D2C4CE4BC7D4191049AED3F26CC(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_D0CC08044683C0A256AC92B754468C21();
		void OnSuccess_D0CC08044683C0A256AC92B754468C21();
		void OnFailure_34D4DBF34F80062489FC86A1F752B370();
		void OnSuccess_34D4DBF34F80062489FC86A1F752B370();
		void OnFailure_FED49C754947BE6E8E21BCA685F2E56B(int32_t LeaderboardValue);
		void OnSuccess_FED49C754947BE6E8E21BCA685F2E56B(int32_t LeaderboardValue);
		void OnFailure_585C1E7943B1AE7ED5393EB441EE7406(int32_t LeaderboardValue);
		void OnSuccess_585C1E7943B1AE7ED5393EB441EE7406(int32_t LeaderboardValue);
		void OnFailure_22C63CBA4D4AAB05427171A9B9B68DBD(int32_t LeaderboardValue);
		void OnSuccess_22C63CBA4D4AAB05427171A9B9B68DBD(int32_t LeaderboardValue);
		void OnFailure_6DCA072D4CD664F854A3D5B0230C37C2(int32_t LeaderboardValue);
		void OnSuccess_6DCA072D4CD664F854A3D5B0230C37C2(int32_t LeaderboardValue);
		void OnFailure_67F3F92145BE9E36586C40AE391CE2A0(int32_t LeaderboardValue);
		void OnSuccess_67F3F92145BE9E36586C40AE391CE2A0(int32_t LeaderboardValue);
		void OnFailure_0B9BFB1D48A06E6528BE3D9021BD0835(int32_t LeaderboardValue);
		void OnSuccess_0B9BFB1D48A06E6528BE3D9021BD0835(int32_t LeaderboardValue);
		void OnFailure_4FB88D2B43A0CBA139289294F42F7005(int32_t LeaderboardValue);
		void OnSuccess_4FB88D2B43A0CBA139289294F42F7005(int32_t LeaderboardValue);
		void OnFailure_928F092A4F6E704FDDAA1EAB28615CA4(int32_t LeaderboardValue);
		void OnSuccess_928F092A4F6E704FDDAA1EAB28615CA4(int32_t LeaderboardValue);
		void OnFailure_D8676158476C1FEBAA8C50A01775EB30(int32_t LeaderboardValue);
		void OnSuccess_D8676158476C1FEBAA8C50A01775EB30(int32_t LeaderboardValue);
		void OnFailure_9D59392A4EC17DB386956A9669916844(int32_t LeaderboardValue);
		void OnSuccess_9D59392A4EC17DB386956A9669916844(int32_t LeaderboardValue);
		void OnFailure_5A6B535B4F77DE241CBC628AB40CCF2A(int32_t LeaderboardValue);
		void OnSuccess_5A6B535B4F77DE241CBC628AB40CCF2A(int32_t LeaderboardValue);
		void OnFailure_A76E682F4BF8A5C76711168BC5CFE3F7(int32_t LeaderboardValue);
		void OnSuccess_A76E682F4BF8A5C76711168BC5CFE3F7(int32_t LeaderboardValue);
		void OnFailure_56E5EB6C43C2EBBC4E6327A23BF2BF5D();
		void OnSuccess_56E5EB6C43C2EBBC4E6327A23BF2BF5D();
		void OnFailure_9C38BD7840485FF2FB1F028B05AD4B6A(int32_t LeaderboardValue);
		void OnSuccess_9C38BD7840485FF2FB1F028B05AD4B6A(int32_t LeaderboardValue);
		void UpdateHeightAdjustment(float Value, class ABP_Height_Adjustment_Actor_C* HeightActor);
		void LoadPlayerSettings(class ABP_Height_Adjustment_Actor_C* HeightActor, class AMotionControllerPawn_C* PawnRef, class ABP_Invis_Floor_C* InvisFloor);
		void SavePlayerSettings();
		void UpdateVolume();
		void InitializeLeaderboards();
		void SaveScore(Enum_Game_Stages Stage, int32_t Score);
		void SteamAchievementSimple(TArray<Enum_Achievements> Achievement);
		void SteamAchievementProgress(TArray<struct FStruct_Steam_Achievements> Achievements);
		void SteamAchievementTutorials(int32_t Progress);
		void ExecuteUbergraph_BP_RtD_GameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
