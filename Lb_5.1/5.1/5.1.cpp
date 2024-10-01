#include "pch.h"
#include "CppUnitTest.h"
#include "../Lb_5.1/lb_5.1.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double result = h(2, 3);
            Assert::AreEqual(result, -5, 0.001);
        }
    };
}
