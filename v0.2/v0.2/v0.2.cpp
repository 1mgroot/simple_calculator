// v0.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Shunting_Yard_Algorithm.h"

extern "C" {
#include "calculator_library.h"
	extern double calculator_core(double n1, double n2, char opr);
}

using namespace std;

char output[128] = { 'a',0 };

int main()
{
	cout << output << endl;
	cout <<  calculator_core(2, 3, '+') << endl;
	cout << mid_to_reverse("2*(42 + 45) / (3 * 2)", output)<< endl;
	cout << mid_to_reverse("2+3", output) << endl;
    return 0;
}

