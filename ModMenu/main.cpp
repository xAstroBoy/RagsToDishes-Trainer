#include <regex>

#include "pch.h"
#include "CheatsCode.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>
#pragma once
#pragma warning(disable: 4717)
#pragma warning(disable: 4806)
#pragma warning(disable: 305)

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "mem.h"
#include <limits>
#include <exception>
#include <typeinfo>
#include <stdexcept>
#include <thread>
#include <algorithm> // For std::transform
#include <cctype>    // For std::tolower
#include <future>
#include <regex>     // For std::regex_search
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>


typedef void(__thiscall* ProcessEvent)(CG::UObject*, CG::UFunction*, void*);
ProcessEvent oProcessEvent;

std::string bool_as_text(bool b)
{
	std::stringstream converter;
	converter << std::boolalpha << b;   // flag boolalpha calls converter.setf(std::ios_base::boolalpha)
	return converter.str();
}

const std::vector<std::string> ClassNames = {
};
const std::vector<std::string> FilterList = {
	"BlueprintUpdateCamera",
	"BlueprintModifyCamera",
	"K2_DestroyActor",
	"BlueprintModifyPostProcess",
	"ReceiveTick",
	"OnMotionControllerUpdated",
	"BlueprintUpdateAnimation",
	"UpdateFunc",
	"OnMoveCompleted",
	"BlueprintUpdateAnimation",
	"OnDeactivate",
	"ReceiveDeactivationAI",
	"OnMotionControllerUpdated",
	"GetCombatStateES",
	"ReceiveTick",
	"OnAudioEnvelopeValueCb",
	"BlueprintUpdateAnimation",
	"OnMovementModeChanged",
	"OnMotionControllerUpdated",
	"BlueprintPostEvaluateAnimation",
	"BlueprintModifyCamera",
	"PerformConditionCheckAI",
	"ReceiveExecuteAI",
	"ReceiveActivationAI",
	"OnActivate",
	"UpdateSpawnManager",
	"RegisterFlashlight",
	"BlueprintModifyCamera",
	"BlueprintModifyPostProcess",
	"UpdateFadeProxy",
	"OnMotionControllerUpdated",
	"OnMovementModeChanged",
	"ReadyToEndMatch",
	"Tick",
	"ReceiveTickAI",
	"PerformConditionCheckAI",
	"OnTick",
	"BlueprintUpdateAnimation",
	"ReceiveTick",
	"AnimGraphNode",
	"OnBuffsReset",
	"ValidateGameProgression",
	"ReceiveInit",
	"OnSynchronizeProperties",
	"PreConstruct",
	"Construct",
	"Destruct",
	"InitializeHUDForPlayer",
	"ReceiveInitCheatManager",
	"EnableCheats",
	"CheatAllowAutoSaving",
	"CheatSetNoDurabilityLoss",
	"ClientSetHUD",
	"ClientVoiceHandshakeComplete",
	"ClientEnableNetworkVoice",
	"ClientCapBandwidth",
	"HandleStartingNewPlayer",
	"ReadyToStartMatch",
	"PlayerCanRestart",
	"FindPlayerStart",
	"ChoosePlayerStart",
	"MustSpectate",
	"SpawnDefaultPawnFor",
	"SpawnDefaultPawnAtTransform",
	"GetDefaultPawnClassForController",
	"PawnAttached",
	"PlayerControllerAttached",
	"Initialize",
	"InitStartSpot",
	"ReceivePossessed",
	"PreApplySkin",
	"PostApplySkin",
	"ClientRestart",
	"OnPawnChanged",
	"ServerAcknowledgePossession",
	"OnApplyGameUserSettings",
	"SetPauseWidgetComponentProgress",
	"OnApplyCheatModes",
	"ClientSetRotation",
	"GetPossibleSkins",
	"GetCorpseCleanupSpawnWalkerClass",
	"InitializeAIByGameMode",
	"UpdateSkinReplicationData",
	"PhysicsVolumeChanged",
	"OnReturnedToPool",
	"ServerReleaseGrapple",
	"SignificanceChange",
	"PawnReturnedToPool",
	"StopLogic",
	"ClearCurrentTarget",
	"OnUpdateValidState",
	"IsPlayerControlled",
	"GetDesiredArchetypeBlueprint",
	"AddInventoryItemList",
	"GetSkinComponentBP",
	"Retune",
	"ResetTuning",
	"TuneObject",
	"OnSetupSection",
	"OnPopulatePage",
	"AddInventoryItemListEntry",
	"AddInventoryItem",
	"BlueprintInitializeAnimation",
	"BlueprintLinkedAnimationLayersInitialized",
	"UserConstructionScript",
	"BlueprintBeginPlay",
	"OnInitialized",
	"ReceiveBeginPlay",
	"OnInventoryAdded",
	"GivenTo",
	"ReturnToInventory",
	"OnCountChanged",
	"OnRep_bRepInsideInventory",
	"GetInventoryOfType",
	"ExecuteUbergraph",
	"OnBuffsReset",
	"OnBuffsReset",
	"GetInventoryAttachPoint",
	"GetInventorySlotGripTransform",
	"InventoryAllowed",
	"AttachInventory",
	"OnAnimationStarted",
	"SetupMaterialParameterCollectionValues",
	"OnMeshHighlightedChanged",
	"ServerShortTimeout",
	"Start Landing Recovery",
	"OnInventoryRemoved",
	"PawnDetached",
	"PlayerControllerDetached",
	"OnNewInventoryItem",
	"OnPlayerDestroyed",
	"ReceiveUnpossessed",
	"OnOwnerEndPlay",
	"ReceiveEndPlay",
	"OnPerceptionStimuliSourceEndPlay",
	"ReceiveDestroyed",
	"SetCurrentInventory",
	"Init",
	"ClientSetCinematicMode",
	"UpdateHandHidden",
	"InitSpawnManager",
	"CE_FullNightMode",
	"ReadyForPlay",
	"RestartLogic",
	"StartLogoMusic",
	"HandWasTeleported",
	"InputDeviceChanged",
	"EndPrePrologue",
	"StartFrontEndMusic",
	"OnSignificanceBinChanged",
	"GetTextValue",
	"Get_Instructions_Text_Text_1",
	"GetValue",
	"Get_Calibration_Image_Brush_1",
	"OnRecenter",
	"OnHMDRecentered",
	"AdvanceBootUp",
	"OnMouseEnter",
	"OnAnimationFinished",
	"SpawnTimerComplete",
	"OnPreviewMouseButtonDown",
	"OnBuffAdded",
	"OnAddedToFocusPath",
	"IsInteractable",
	"OnMouseMove",
	"OnMouseLeave",
	"GetFootstepSound",
	"GetAkComponentByEnum",
	"Received_Notify",
	"CheckPlayerOrientation",
	"OnAIEndPlay",
	"Start",
	"K2_Update",
	"OnInventorySlotContentChanged",
	"OnBackpackContentChanged",
	"OnInventoryCountChanged",
	"SetDurability",
	"OnComponentCollisionSettingsChanged",
	"GetSheathedInventoryMaterial",
	"OnHealthUpdated",
	"OnDoorShut",
	"GetDoorComponent",
	"OnAlarmTimerChanged",
	"AnimNotify_InNoneState",
	"AnimNotify_EnteredBaseAnimState",
	"AnimNotify_EnteredIdleState",
	"ReceivePossess",
	"OnDialogWidgetIsEnabledCallback",
	"ServerAddWeaponAttachment",
	"SetWeaponOwner",
	"WeaponOwnerUpdated",
	"AttachToWeapon",
	"WeaponAttachmentAttached",
	"ModeStoppedFiring",
	"GrabFromInventory",
	"GetGripPoint",
	"PlayGrabbedEffects",
	"ServerUpdateLevelVisibility",
	"BP_StartAnimationRedraw",
	"GetGrappleStateEnumValues",
	"OnPhysicsComponentSleep",
	"OnPhysicsComponentWake",
	"ClientUpdateLevelStreamingStatus",
	"GetGuardPointLocation",
	"IsDefaultBehaviorPatrol",
	"SetPercent",
	"OnMontageStartedEx",
	"GetFireMode",
	"OnLanded",
	"UpdateAvailability",
	"OnCharacterPostSignificance",
	"OnHitReactEnd",
	"OnShoveActorHit",
	"OnOwnerActorHit",
	"OnActorHitCustomThrowPhysics",
	"OnWeaponActorHit",
	"OnComponentHitCustomThrowPhysics",
	"OnComponentHit",
	"CanHitComponentApplyDamage",
	"ServerSetHeldBy_IFC",
	"GetCurrency",
	"OnWeaponClassChanged",
	"Grab",
	"GetInteractionHighlights",
	"OnInteractionHighlightChanged",
	"OnLoaded",
	"BP_FinishAnimationRedraw",
	"AddInteractionHighlight",
	"GetHighlightFeedback",
	"SetIsGrappleMontagePlayingFullyBlended",
	"PreActorSpawn",
	"SetIsGrappleMontagePlaying",
	"OnMontageEndedEx",
	"Hide Notify",
	"BP_HideHealthStamTimer",
	"OnAbort",
	"OnHandBeginOverlap",
	"StopAnimationAction",
	"ReceiveDeactivation",
	"ReceiveActivation",
	"RemoveInteractionHighlight",
	"OnHandEndOverlap",
	"PingOutLight",
	"IsValidInteractionHighlight",
	"GetHighlightHandPoseInfo",
	"GetHighlightHandPose",
	"GetInteractTriggerResistanceCurve",
	"GetBodyMountedInteractLocation",
	"OnSuccess",
	"OnFail_",
	"UpdateHighlight",
	"AnimNotify_IsCompleteIdleFidget",
	"OnInteractPress",
	"OnGripPress",
	"RegisterAnimInteractable_Internal",
	"GetGripFeedback",
	"GetDescription",
	"GetFlavorText",
	"GetInventoryEffectInfo",
	"FormatSalvageEntry",
	"GetDurabilityText",
	"GetDurabilityIndex",
	"UpdateItemInfo",
	"HitReactEnd",
	"PlayAnimationAction",
	"IsValidInventory",
	"AddImpulse",
	"AddAngularImpulseInRadians",
	"GetDisplayName",
	"CanBeLoaded",
	"IsClipEjectedOrChamberOpen",
	"OnInventoryPutInSlotFailed",
	"OnGripRelease",
	"GetThrowInfo",
	"ServerClearHeldBy_IFC",
	"Dropped",
	"OnHandHeldActorChange",
	"OnHeldActorDropped",
	"UnregisterAnimInteractable_Internal",
	"SendInteractPresses_Internal",
	"SetMaxCurveValues_Internal (Finger)",
	"SendMaxCurveValues_Internal",
	"HeldActorChanged",
	"OnHitByPhysicsActor",
	"OnActorBump",
	"OnMeshComponentHit",
	"ResetHitReactCanInterrupt",
	"SearchAnimationBlendOut",
	"ShowHighlight",
	"GetHighlightType",
	"GetHighlightTransform",
	"UpdateHighlightActor",
	"ReceiveActorBeginOverlap",
	"ReceiveActorEndOverlap",
	"K2_OnEndViewTarget",
	"K2_OnBecomeViewTarget",
	"K2_PostLogin",
	"Reveal Timer Return",
	"OnPlayerStay",
	"ReceiveHit",
	"SetGameTimeRemaining",
	"GetBallReturn",
	"GetReturnTrack",
	"ComponentEndOverlapSignature",
	"ComponentBoundEvent",
	"ComponentBeginOverlapSignature",
	"OnInputFocusReceived",
	"Focus Recieved PauseEvent",
	"GetActiveLane",
	"InputAxisEvent",
	"MotionControllerTrigger",
	"CustomEvent",
	"WidgetInteraction",
	"DestroyAfterHit",
	"SetRenderTransform",
	"ReloadTasks",
	"InputKeyEvent",
};
const std::vector<std::string> EndingFilterList = {
		"UpdateFunc",
		"FinishedFunc",
		"ReceiveHit",
		"TimePass",
		"UpdateTime",
};

bool DoNotLogEvent(const std::string& funcname)
{
	std::regex FuncExample1(R"(Function\s([A-Za-z0-9]+(_[A-Za-z0-9]+)+)\.([A-Za-z0-9]+(_[A-Za-z0-9]+)+)\.)");
	auto PurgeStepOne = std::regex_replace(funcname, FuncExample1, "");

	std::regex FuncExample2(R"(Function\s[A-Za-z0-9]+\.[A-Za-z0-9]+\.)");
	auto PurgeStepTwo = std::regex_replace(PurgeStepOne, FuncExample2, "");

	std::regex FuncExample3(R"(Function\s[A-Za-z0-9]+\.[A-Za-z0-9]+_[A-Za-z0-9]+\.)");
	auto Purged = std::regex_replace(PurgeStepTwo, FuncExample3, "");
	std::string PurgedToLower = Purged;
	std::transform(PurgedToLower.begin(), PurgedToLower.end(), PurgedToLower.begin(), ::tolower);

	for (auto filter : FilterList)
	{
		std::string lowerFilter = filter;
		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);
		if (PurgedToLower.find(lowerFilter) != std::string::npos)
		{
			return true;
		}
	}
	if (PurgedToLower.find("motioncontrollertrigger") != std::string::npos)
	{
		return true;
	}

	//for (auto filter : FilterList)
	//{
	//	std::regex Anywhere(filter, std::regex_constants::icase);
	//	if (std::regex_search(Purged.begin(), Purged.end(), Anywhere, std::regex_constants::match_any)) {
	//		return true;
	//	}
	//}
	for (auto filter : EndingFilterList)
	{
		std::string lowerFilter = filter;

		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);

		if (PurgedToLower.find(lowerFilter) != std::string::npos)
		{
			return true;
		}
	}

	return false;
}
bool LoggerActive = false;

bool AllowAllFunctions = true;
void ReportCustomEvent(const std::string& funcname) {
	if (!LoggerActive) return;

	auto BlockLogging = DoNotLogEvent(funcname);
	if (BlockLogging) return;

	// If AllowAllFunctions is true, we report all events.
	// Otherwise, we proceed to check if the remaining string contains any of the specified class names.
	if (AllowAllFunctions) {
		ConsoleTools::ConsoleWrite(funcname);
		return;
	}

	// Strip the function name from the input string
	std::string eventNameWithoutFunction = funcname.substr(0, funcname.find("("));

	// Check if the remaining string matches any of the specified class names
	for (const auto& ClassName : ClassNames) {
		if (eventNameWithoutFunction.find(ClassName) != std::string::npos) {
			ConsoleTools::ConsoleWrite(funcname);
			return;
		}
	}
}

CG::AWorldSettings* GetWorldSettings()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr)
	{
		if (world->PersistentLevel != nullptr)
		{
			return world->PersistentLevel->WorldSettings;
		}
	}
	return nullptr;
}

CG::ULocalPlayer* GetActiveLocalPlayer()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr && world->OwningGameInstance != nullptr && world->OwningGameInstance->LocalPlayers.Count() > 0)
	{
		auto localPlayer = world->OwningGameInstance->LocalPlayers[0];
		if (localPlayer != nullptr && localPlayer->PlayerController != nullptr)
		{
			return localPlayer;
		}
	}
	return nullptr;
}

CG::APlayerController* GetActivePlayerController()
{
	auto LocalPlayer = GetActiveLocalPlayer();
	if (LocalPlayer != nullptr)
	{
		return LocalPlayer->PlayerController;
	}
	return nullptr;
}

void SpawnCheatManager(CG::APlayerController* Pc)
{
	if (Pc != nullptr)
	{
		if (Pc->CheatManager == nullptr)
		{
			if (CG::UCheatManager* Cm = static_cast<CG::UCheatManager*>(Pc->CheatClass->CreateDefaultObject()))
			{
				if (Cm != nullptr)
				{
					Cm->Outer = Pc;
					Pc->CheatManager = Cm;
					//Cm->ReceiveInitCheatManager();
					//Pc->EnableCheats();
					ConsoleTools::ConsoleWrite("Spawned " + Cm->GetFullName() + " !");
					//SpawnConsole();
				}
			}
		}
	}
}
void FuckBossTimer()
{
	auto instances = CG::UObject::FindObjects<CG::ABP_EndOfStage_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				if (mods->BossVoice != nullptr)
				{
					/*mods->Round1Timer = 999999999;
					mods->Round2Timer = 999999999;
					mods->Round3Timer = 999999999;*/
					mods->RoundTimer_Active_Current = static_cast<float>(999999999);
					mods->RoundTimer_Active = static_cast<float>(999999999);
				}
			}
		}
	}
}


void UnlimitedPorridge()
{
	auto instances = CG::UObject::FindObjects<CG::ABP_Porridge_Pot_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				if (mods->WaterMesh != nullptr)
				{
					if (mods->StirValue < 150)
					{
						mods->StirValue = 150;
					}
					if (mods->Servings < 999999999)
					{
						mods->Servings = 999999999;
					}
				}
			}
		}
	}
}

void SetMoneyCollected(int32_t money)
{
	auto instances = CG::UObject::FindObjects<CG::ABP_LoopManager_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				mods->MoneyCollected = money;
				mods->MoneyCollectedLoop = money;
			}
		}
	}
}



void UnlockAllPeasantsUpgrades()
{
	auto instances = CG::UObject::FindObjects<CG::ABP_LoopManager_Peasants_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				if (mods->Kitchen_BP != nullptr)
				{
					mods->UnlockOatmeal();
					mods->UnlockCheese();
					mods->UnlockSoup();
					mods->UnlockPottage();
					mods->UpgradeDough();
					mods->UnlockAle();
					mods->UpgradeOven1();
					mods->UpgradeGrill1();
					mods->UpgradeSoupPot1();
					mods->UpgradeOatmealPot1();
					mods->UnlockSoup2();
					mods->UnlockPottage2();
					mods->UpgradeOven2();
					mods->UpgradeOatmealPot2();
					mods->UpgradeGrill2();
					mods->UpgradeSoupPot2();
					mods->UpgradeKitchenDecorations1();
					mods->UpgradeKitchenDecorations2();
					SetMoneyCollected(0);

				}
			}
		}
	}
}




void UnlockAllNoblesUpgrades()
{
	auto instances = CG::UObject::FindObjects<CG::ABP_LoopManager_Nobles_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				if (mods->Kitchen_BP != nullptr)
				{
					mods->UnlockPie();
					mods->UnlockWine();
					mods->UnlockSalt();
					mods->UnlockStew();
					mods->UnlockFish();
					mods->UpgradeOven1();
					mods->UpgradeOven2();
					mods->UpgradeRotisserie1();
					mods->UpgradeStewPot1();
					mods->UpgradeStewPot2();
					mods->UpgradePieDish1();
					mods->UpgradePieDish2();
					mods->UpgradeDrinkBarrels();
					mods->UpgradeKnife();
					mods->UpgradeSeasoning2();
					mods->UpgradeKitchenDecorations1();
					mods->UpgradeKitchenDecorations2();
					mods->UpgradeFreeSample();
					mods->UpgradeCustomerPatience();
					SetMoneyCollected(0);
				}
			}
		}
	}
}
void UnlockAllRoyalsUpgrades()
{
	auto instances = CG::UObject::FindObjects<CG::ABP_LoopManager_Royals_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				if (mods->Kitchen_BP != nullptr)
				{
					mods->UpgradeOven1();
					mods->UpgradePieDish();
					mods->UpgradeDrinkBarrels();
					mods->UnlockCake();
					mods->UnlockPlatters();
					mods->UnlockChocolate();
					mods->UnlockLobster();
					mods->UpgradeCleanFruits();
					mods->UpgradeMeatStation1();
					mods->UpgradeCakeLid();
					mods->UpgradeKitchenDecorations1();
					mods->UpgradeRushHourBonus();
					mods->UpgradeBonusFrequencyPatience();
					mods->UpgradeKitchenDecorations2();
					mods->UpgradeBonusValuePatience();
					mods->UpgradeFreeSamples();
					SetMoneyCollected(0);

				}
			}
		}
	}
}


void FastOvens()
{
	auto Peasants = CG::UObject::FindObjects<CG::ABP_Oven_C>();
	if (!Peasants.empty())
	{
		for (auto& mods : Peasants)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}
	auto Nobles = CG::UObject::FindObjects<CG::ABP_Oven_Nobles_Wall_C>();
	if (!Nobles.empty())
	{
		for (auto& mods : Nobles)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}
	auto Royals = CG::UObject::FindObjects<CG::ABP_Royals_Oven_C>();
	if (!Royals.empty())
	{
		for (auto& mods : Royals)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}

}

void FastSoups()
{
	auto soups = CG::UObject::FindObjects<CG::ABP_Soup_Pot_C>();
	if (!soups.empty())
	{
		for (auto& mods : soups)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}
	auto Stews = CG::UObject::FindObjects<CG::ABP_Stew_Pot_C>();
	if (!Stews.empty())
	{
		for (auto& mods : Stews)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}

}
void FastGrill()
{
	auto Grill = CG::UObject::FindObjects<CG::ABP_Grill_C>();
	if (!Grill.empty())
	{
		for (auto& mods : Grill)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}
	auto GrillUpgraded = CG::UObject::FindObjects<CG::ABP_Upgraded_Grill_C>();
	if (!GrillUpgraded.empty())
	{
		for (auto& mods : GrillUpgraded)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}
	auto Rotisseries = CG::UObject::FindObjects<CG::ABP_Rotisserie_C>();
	if (!Rotisseries.empty())
	{
		for (auto& mods : Rotisseries)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}

}
void FastCakePan()
{
	auto CakePan = CG::UObject::FindObjects<CG::ABP_Cake_Pan_C>();
	if (!CakePan.empty())
	{
		for (auto& mods : CakePan)
		{
			if (mods != nullptr)
			{
				mods->Speed = static_cast<float>(0.01);
			}
		}
	}

}

void CustomerWaitHolyshitWTF()
{
	auto Customer = CG::UObject::FindObjects<CG::ABP_OrderManager_C>();
	if (!Customer.empty())
	{
		for (auto& mods : Customer)
		{
			if (mods != nullptr)
			{
				if (mods->CustomerWaitTimeBetweenOrders_Normal == 0)
				{
					mods->CustomerWaitTimeBetweenOrders_Normal = static_cast<float>(200);
					//ConsoleTools::ConsoleWrite("Fixed Order Timer in Normal Mode");

				}
				if (mods->CustomerWaitTimeBetweenOrders_RushHour = 0)
				{
					mods->CustomerWaitTimeBetweenOrders_RushHour = static_cast<float>(200);
					//ConsoleTools::ConsoleWrite("Fixed Order Timer in Rush Hours");

				}
			}
		}
	}
	//auto Customer2 = CG::UObject::FindObjects<CG::ABP_5Minute_C>();
	//if (!Customer2.empty())
	//{
	//	for (auto& mods : Customer2)
	//	{
	//		if (mods != nullptr)
	//		{
	//			if (mods->CustomerWaitTimeBetweenOrders = 0)
	//			{
	//				mods->CustomerWaitTimeBetweenOrders = static_cast<float>(200);
	//				ConsoleTools::ConsoleWrite("Fixed Order Timer in 5 Minute Challenge");
	//			}
	//		}
	//	}
	//}
}

void ExecutorThread()
{
	while (true)
	{
		try {
			UnlimitedPorridge();
			FastOvens();
			FastSoups();
			FastGrill();
			FastCakePan();

		}
		catch (...) {}
	}
}

void ConsoleInput()
{
	ConsoleTools::ConsoleWrite("ModConsole Commands:  ");
	std::string input;
	std::cin >> input;
	// Bug : if input is "" it will loop forever and crash the game
	if (input == "")
	{
		ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
		ConsoleInput();
	}
	if (input == "help")
	{
		ConsoleTools::ConsoleWrite("Mod Console Available commands:");
		ConsoleTools::ConsoleWrite("help - Shows this help menu.");
		ConsoleTools::ConsoleWrite("unlockall - Unlocks all Accessories.");
		ConsoleTools::ConsoleWrite("fastcook - Speeds cooking a lot .");
		ConsoleTools::ConsoleWrite("fixcustomers - Fix customers waiting time .");

		ConsoleInput();
	}
	if (input == "unlockall")
	{
		UnlockAllPeasantsUpgrades();
		UnlockAllNoblesUpgrades();
		UnlockAllRoyalsUpgrades();
		ConsoleInput();
	}
	if (input == "fastcook")
	{
		FastOvens();
		FastSoups();
		FastGrill();
		FastCakePan();
	}
	if (input == "fixcustomers")
	{
		CustomerWaitHolyshitWTF();
	}

	else
	{
		ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
		// empty input
		input = "";
		ConsoleInput();
	}
}
bool ends_with(const std::string& mainStr, const std::string& toMatch)
{
	if (mainStr.size() >= toMatch.size() &&
		mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
		return true;
	else
		return false;
}

void HkProcessEvent(CG::UObject* thiz, CG::UFunction* function, void* parms)
{
	auto maxFloatValue = static_cast<float>(9999999999);
	if (!thiz || !function) {
		// Either thiz or function is null, so exit early
		return;
	}

	if (!thiz->Class) {
		// Internal class is null, so exit early
		return;
	}
	const std::string func = function->GetFullName();

	if (func == "Function BP_EndOfStage.BP_EndOfStage_C.OrderTimer_Timeline__UpdateFunc") return;
	if (func == "Function BP_EndOfStage.BP_EndOfStage_C.OrderTimer_Timeline__FinishedFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.SimpleOrder_Timeline__UpdateFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.SimpleOrder_Timeline__FinishedFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.BonusTime_Timeline__UpdateFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.BonusTime_Timeline__FinishedFunc") return;
	if (func == "Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__UpdateFunc") return;
	if (func == "Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__FinishedFunc") return;

	if(func == "Function BP_Stew_Pot.BP_Stew_Pot_C.BurningTimeline__UpdateFunc")
	if (func == "Function BP_Stew_Pot.BP_Stew_Pot_C.BurningTimeline__FinishedFunc") return;

	if (func == "Function BP_Ingredient_Fish.BP_Ingredient_Fish_C.BurnIngredient") return;
	if (func == "Function BP_Ingredient_Fish.BP_Ingredient_Fish_C.CookAndBurnIngredient") return;

	if (func == "Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.BurnIngredient") return;
	if (func == "Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.CookAndBurnIngredient") return;


	if (func == "Function BP_Ingredient.BP_Ingredient_C.BurnIngredient")
	{
		auto instance = static_cast<CG::ABP_Ingredient_C*>(thiz);
		if (instance != nullptr)
		{
			instance->Burned = false;
			instance->CookIngredient();
			return;
		}

	}
	if (func == "Function BP_Ingredient.BP_Ingredient_C.CookAndBurnIngredient")
	{
		auto instance = static_cast<CG::ABP_Ingredient_C*>(thiz);
		if (instance != nullptr)
		{
			instance->Burned = false;
			instance->CookIngredient();
			return;
		}
	}

	ReportCustomEvent(func);

	try {
		oProcessEvent(thiz, function, parms);
	}
	catch (...) {}
}

uintptr_t GetBaseAddress(const std::wstring& moduleName)
{
	return  reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
}

uintptr_t GetBaseAddress()
{
	return GetBaseAddress(L"RagsToDishes-Win64-Shipping.exe");
}

void StartProcessEventHook()
{
	uintptr_t mBaseAddress = GetBaseAddress();
	uintptr_t ProcessEventOffset = 0x7598D0;
	uintptr_t ProcessEventAddress = mBaseAddress + ProcessEventOffset;

	auto peFunc = reinterpret_cast<ProcessEvent>(ProcessEventAddress);
	bool processEventHooked = MH_CreateHook(peFunc, reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<void**>(&oProcessEvent)) == MH_OK && MH_EnableHook(peFunc) == MH_OK;
	if (processEventHooked)
	{
		ConsoleTools::ConsoleWrite("Hooked Process Event!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Failed to Hook Process Event!");
	}
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	if (!CG::InitSdk())
	{
		// TODO: Should handle that
		return FALSE;
	}

	// Console (Used Mainly for Debug Purpose) (not needed)
	ConsoleTools::ShowConsole();

	bool init_hook = false;
	do
	{
		std::thread executor(ExecutorThread);
		executor.detach();

		std::thread ProcessEventHookThread(StartProcessEventHook);
		ProcessEventHookThread.detach();

		init_hook = true;
	} while (!init_hook);

	ConsoleInput();
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		MH_Initialize();
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		//kiero::shutdown();
		break;
	}
	return TRUE;
}