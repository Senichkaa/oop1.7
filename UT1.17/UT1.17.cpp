#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.7/Fraction.cpp"
#include "../oop1.7/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT117
{
	TEST_CLASS(UT117)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong g, g1;
			g.set_a(6);
			g.set_b(6);
			g1.set_a(6);
			g1.set_b(6);
			Assert::AreEqual(operator == (g, g1),true);
		}
	};
}
