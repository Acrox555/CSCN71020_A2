#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getArea(int*, int*);
extern "C" int getPerimeter(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(perimeter_test1)
		{
			int result, l = 2, w = 2;
			result = getPerimeter(&l, &w);//perimeter=2(length+width)=8
			Assert::AreEqual(8, result);
		}
		TEST_METHOD(area_test1)
		{
			int result = 0, l = 2, w = 2;
			result = getArea(&l, &w);//area =lenght*width=4
			Assert::AreEqual(4, result);
		}
		TEST_METHOD(length_test1)
		{
			// value between 0 and 99
			int Result = 0, user_input = 8;
			setLength(user_input, &Result);
			Assert::AreEqual(user_input, Result);
         }

		TEST_METHOD(length_test2)
		{
			// value is less the lower limit
			int Result = 0, user_input = -6;
			setLength(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}
		TEST_METHOD(length_test3)
		{
         // value is greater than the upper limit
			int Result = 0, user_input = 110;
			setLength(user_input, &Result);
			Assert::AreEqual(user_input, Result);
		}
		TEST_METHOD(width_test1)
		{
			// assiging value between 0 and 99
			int Result = 0, user_input = 45;
			setWidth(user_input, &Result);
			Assert::AreEqual(user_input, Result);


		}
		TEST_METHOD(width_test2)
		{ // assiging value is less the lower limit
			int Result = 0, user_input = -8;
			setWidth(user_input, &Result);
			Assert::AreEqual(user_input, Result);


		}
		TEST_METHOD(width_test3)
		{ // assiging value  greater than the upper limit
			int Result = 0, user_input = 120;
			setWidth(user_input, &Result);
			Assert::AreEqual(user_input, Result);
			

		}

	};
}
