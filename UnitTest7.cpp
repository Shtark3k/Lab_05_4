#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_4/Lab_05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest7)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double expected = S0(3, 4);
			double actual = 0.27604;
			double epsilon = 0.00001;
			Assert::AreEqual(expected, actual, epsilon);
		}


		TEST_METHOD(TestMethod2)
		{
			double expected = S1(3, 4, 3);
			double actual = 0.27604;
			double epsilon = 0.00001;
			Assert::AreEqual(expected, actual, epsilon);
		}


		TEST_METHOD(TestMethod3)
		{
			double expected = S2(3, 4, 4);
			double actual = 0.27604;
			double epsilon = 0.00001;
			Assert::AreEqual(expected, actual, epsilon);
		}


		TEST_METHOD(TestMethod4)
		{
			double expected = S3(3, 4, 3, 0);
			double actual = 0.27604;
			double epsilon = 0.00001;
			Assert::AreEqual(expected, actual, epsilon);
		}


		TEST_METHOD(TestMethod5)
		{
			double expected = S4(3, 4, 4, 0);
			double actual = 0.27604;
			double epsilon = 0.00001;
			Assert::AreEqual(expected, actual, epsilon);
		}
	};
}