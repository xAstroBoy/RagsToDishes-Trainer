#include "pch.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"

namespace Cheats
{
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


	void CheatExecutorThread()
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
}