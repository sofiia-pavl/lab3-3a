#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3-3a/Private.h"
#include "../lab3-3a/Fraction.h"
#include "C:\Users\Софія\source\repos\lab3-3a\lab3-3a\Fraction.cpp"
#include "C:\Users\Софія\source\repos\lab3-3a\lab3-3a\Private.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Private a(2, 4), b(1, 2);
			Private c = a - b;
			Assert::AreEqual(c.getOne(), 1);
			Assert::AreEqual(c.getTwo(), 2);
		}
	};
}
