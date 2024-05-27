#include "pch.h"
#include "CppUnitTest.h"
#include "../FinalExam/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForCount
{
	TEST_CLASS(UnitTestForCount)
	{
	public:
		
		TEST_METHOD(TestMethodForSum)
		{
			// Arrange
			double matrixTest[5][2] = { {1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5} };
			// Act
			double sum = sumPositiveNumbers(matrixTest);
			// Assert
			Assert::AreEqual(sum, 30.0);
			Assert::AreNotEqual(sum, 5.0);
		}
	};
}
