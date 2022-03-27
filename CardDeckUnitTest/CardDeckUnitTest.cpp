#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "cardDeck.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CardDeckUnitTest
{
	TEST_CLASS(CardDeckUnitTest)
	{
	public:
		
		TEST_METHOD(Random_Gen_Unit_Test)//using random chance there is a small chance the test will not succed but the goal is to show that the function randomly sorts a deck
		{
			int i = 1;
			int randomArray[52] = { 1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
			int tester[52] = { 1,2,3,4,5,6,7,8,10,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0 };
			randomGen(randomArray);
			Assert::AreNotEqual(randomArray[i], tester[i]);
		}
		TEST_METHOD(card_deck_checker)//checks to see if the funtion successfully woorks without error
		{
			int checker;
			int value = 0;
			checker = settingCards();
			Assert::AreEqual(checker, value);
		}
		TEST_METHOD(random_Generator_checker)//checks to see if random checker function correctly operates
		{
			int randomArray[52] = { 1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0 };
			int checker;
			int value = 0;
			checker = randomGen(randomArray);
			Assert::AreEqual(checker, value);
		}
		TEST_METHOD(file_checker) {//checks to see if the file was read from correctly in the setting cards function
			int limit = 0;
			bool limitchecker = true;
			settingCards();
			if (standard->number < 0 || standard->number > 10)
			{
				limitchecker = false;
			}
			Assert::IsTrue(limitchecker);
		}
	};
}
