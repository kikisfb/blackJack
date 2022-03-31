#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
 #include "../BlackJack/Scroing.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace scoringunitTests
{
	TEST_CLASS(scoringunitTests)
	{
	public:
		
		TEST_METHOD(winStreakTest_winningCondition)
		{
			int a = 5;
			a = winStreak(true, a);
			int expected = 6;
			Assert::AreEqual(a, expected);
			
		}
		
		TEST_METHOD(winStreakTest_LosingCondition)
		{
			int a = 5;
			a = winStreak(false, a);
			int expected = 0;
			Assert::AreEqual(a, expected);

		}
		TEST_METHOD(LoseStreakTest_winningCondition)
		{
			int a = 5;
			a = loseStreak(true, a);
			int expected = 0;
			Assert::AreEqual(a, expected);

		}
		TEST_METHOD(LoseStreakTest_losingCondition)
		{
			int a = 5;
			a = loseStreak(false, a);
			int expected = 6;
			Assert::AreEqual(a, expected);
		}
		TEST_METHOD(numberOfLosesTest_winningCondition)
		{
			int a = 5;
			a = numOfLoses(true, a);
			int expected = 5;
			Assert::AreEqual(a, expected);

		}
		TEST_METHOD(numberOfLosesTest_LosingCondition)
		{
			int a = 5;
			a = numOfLoses(false, a);
			int expected = 6;
			Assert::AreEqual(a, expected);

		}
		TEST_METHOD(numberOfWinsTest_WinningCondition)
		{
			int a = 5;
			a = numOfWins(true, a);
			int expected = 6;
			Assert::AreEqual(a, expected);

		}
		TEST_METHOD(numberOfWinsTest_LosingCondition)
		{
			int a = 5;
			a = numOfWins(false, a);
			int expected = 5;
			Assert::AreEqual(a, expected);

		}

	};
}
