#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\mihan\source\repos\Project7\Project7\checkBox.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual (checkbox (999999) , 2);
			Assert::AreEqual(checkbox (-1) , 4);
			Assert::AreEqual(checkbox(100), 0);
		}
		
		TEST_METHOD(TestMethod2) {

		Assert::AreEqual(checkbox ("") , 1);
		Assert:: AreEqual(checkbox ("22") , 0);
		}
	};
}
