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
		
		TEST_METHOD(exact21value2)
		{
			int value = 2;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(exact21valueNegative15)
		{
			int value = -15;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(exact21value21)
		{
			int value = 21;
			bool result = exact21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(exact21value25)
		{
			int value = 25;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(exact21value20)
		{
			int value = 20;
			bool result = exact21(value);
			Assert::IsFalse(result);
		}

	};
	TEST_CLASS(CheckValueTests)
	{
	public:
		TEST_METHOD(check21value7)
		{
			int value = 7;
			bool result = check21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(check21valueNegative9)
		{
			int value = -9;
			bool result = check21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(check21value25)
		{
			int value = 35;
			bool result = check21(value);
			Assert::IsFalse(result);
		}

		TEST_METHOD(check21value21)
		{
			int value = 21;
			bool result = check21(value);
			Assert::IsTrue(result);
		}

		TEST_METHOD(check21value20)
		{
			int value = 20;
			bool result = check21(value);
			Assert::IsTrue(result);
		}
	};
	TEST_CLASS(CheckResultTests)
	{
	public:
		TEST_METHOD(checkValuesuser20Dealer17)
		{
			int userVal = 21;
			int dealerVal = 17;
			int returnVal = result(userVal, dealerVal);
			int expected = 1;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValuesuser3Dealer19)
		{
			int userVal = 3;
			int dealerVal = 19;
			int returnVal = result(userVal, dealerVal);
			int expected = 0;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValuesuserNegative35Dealer17)
		{
			int userVal = -35;
			int dealerVal = 17;
			int returnVal = result(userVal, dealerVal);
			int expected = 0;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValuesuser20DealerNegative24)
		{
			int userVal = 21;
			int dealerVal = -24;
			int returnVal = result(userVal, dealerVal);
			int expected = 1;
			Assert::AreEqual(expected, returnVal);
		}

		TEST_METHOD(checkValuesuser15Dealer15)
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
		TEST_METHOD(checkWinUserWin)
		{
			int winVal = 1;
			bool result = win(winVal);
			Assert::IsTrue(result);
		}

		TEST_METHOD(checkWinUserLoss)
		{
			int winVal = 0;
			bool result = win(winVal);
			Assert::IsFalse(result);
		}
	};
}
