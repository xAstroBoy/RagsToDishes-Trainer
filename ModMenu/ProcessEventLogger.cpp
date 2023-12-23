#include <algorithm>
#include <regex>
#include <vector>

#include "ConsoleUtils.h"

namespace  ProcessEventLogger
{
	bool LoggerActive = false;

	bool AllowAllFunctions = true;

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
}