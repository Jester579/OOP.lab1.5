#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.5/Man.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Man man;

			man.Init("Maksym", 65, "Male", 60.5);

			Assert::AreEqual(std::string("Maksym"), man.getName());
			Assert::AreEqual(65, man.getAge());
			Assert::AreEqual(std::string("Male"), man.getSex());
			Assert::AreEqual(60.5, man.getWigth());
		}
	};
}
