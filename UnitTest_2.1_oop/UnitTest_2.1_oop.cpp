#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_2.1/Combination.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21oop
{
	TEST_CLASS(UnitTest21oop)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Combination c;
			c.set_k(3);
			Assert::AreEqual(3, c.get_k());
		}
	};
}
