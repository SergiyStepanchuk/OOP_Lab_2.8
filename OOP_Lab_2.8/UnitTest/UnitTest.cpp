#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/Bill.h"
#include "../Program/Bill.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest17)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Bill B1;
			B1.SetSurname("Stepanchuk");
			Assert::AreEqual("Stepanchuk", B1.GetSurname().c_str());
		}
	};
}
