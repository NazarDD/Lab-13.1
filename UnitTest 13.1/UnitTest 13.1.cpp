#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 13.1/sum.cpp"
#include "../Lab 13.1/dod.cpp"
#include "../Lab 13.1/sum.h"
#include "../Lab 13.1/var.h"
#include "../Lab 13.1/var.cpp"
using namespace std;
using namespace nsVar;
using namespace nsSum;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.7;
			double eps = 5;

			int n = 0;
			double a = x;
			double s = a;
			sum();

			const double pi = 3.14159265358979323846;
			double expected = pi / 2 + s;

			Assert::AreEqual(expected, 2.2708, 0.0001);

		}
	};
}
