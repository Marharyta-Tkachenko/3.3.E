#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab3.3.E\Lab3.3.E\Car.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab3.3.E\Lab3.3.E\Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			c.setPower(540);
			int power = c.getPower();
			Assert::AreEqual(power, 540);
		}
	};
}
