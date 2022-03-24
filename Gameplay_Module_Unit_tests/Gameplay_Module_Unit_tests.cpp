#include "pch.h"
#include "CppUnitTest.h"

extern "C" 
{
#include "Gameplay.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameplayModuleUnittests
{
	TEST_CLASS(ExactValueUnitTests)
	{
	public:
		
		TEST_METHOD(exact21_value2_ExpectedFalse)
		{
			int value = 2;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(exact21_valueNegative21_ExpectedFalse)
		{
			int value = -21;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(exact21_value21_ExpectedTrue)
		{
			int value = 21;
			bool result = exact21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(exact21_value25_ExpectedFalse)
		{
			int value = 25;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(exact21_value20_ExpectedFalse)
		{
			int value = 20;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

	};
	TEST_CLASS(CheckValueTests)
	{
	public:
		TEST_METHOD(check21_value7_ExpectedTrue)
		{
			int value = 7;
			bool result = check21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(check21_valueNegative9_ExpectedTrue)
		{
			int value = -9;
			bool result = check21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(check21_value25_ExpectedFalse)
		{
			int value = 35;
			bool result = check21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(check21_value21_ExpectedTrue)
		{
			int value = 21;
			bool result = check21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(check21_value20_ExpectedTrue)
		{
			int value = 20;
			bool result = check21(value);
			Assert::IsTrue(result);
		}
	};
	TEST_CLASS(CheckResultTests)
	{
	public:
		TEST_METHOD(checkValues_user20Dealer17_ExpectedVal1)
		{
			int userVal = 21;
			int dealerVal = 17;
			int returnVal = result(userVal, dealerVal);
			int expected = 1;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValues_user3Dealer19_ExpectedVal0)
		{
			int userVal = 3;
			int dealerVal = 19;
			int returnVal = result(userVal, dealerVal);
			int expected = 0;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValues_userNegative35Dealer17_ExpectedVal0)
		{
			int userVal = -35;
			int dealerVal = 17;
			int returnVal = result(userVal, dealerVal);
			int expected = 0;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValues_user21DealerNegative24_ExpectedVal1)
		{
			int userVal = 21;
			int dealerVal = -24;
			int returnVal = result(userVal, dealerVal);
			int expected = 1;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValues_user15Dealer15_ExpectedVal0)
		{
			int userVal = 15;
			int dealerVal = 15;
			int returnVal = result(userVal, dealerVal);
			int expected = 0;
			Assert::AreEqual(expected, returnVal);
		}
	};

	TEST_CLASS(CheckWinTests)
	{
	public:
		TEST_METHOD(checkWin_UserWin_ExpectedTrue)
		{
			int winVal = 1;
			bool result = win(winVal);
			Assert::IsTrue(result);
		}

		TEST_METHOD(checkWin_UserLoss_ExpectedFalse)
		{
			int winVal = 0;
			bool result = win(winVal);
			Assert::IsFalse(result);
		}
	};
}
