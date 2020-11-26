#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1(4)/Lab_8.1(4).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab814
{
	TEST_CLASS(UnitTestLab814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char lit_r[50] = "QhkiQQSuySQQsdQSdsSQsdQQQSSSq";
			char para[] = "SQ";
			char para1[] = "QS";

			char* d = new char[strlen(lit_r) / 2 * 3 + 1];
			char* t = d;

			t = perevirka(lit_r, para, para1, d, d, 0, 0, 0, 0);
			Assert::AreEqual(t[5], '*');
		}
	};
}
