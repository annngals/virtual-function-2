
#include "pch.h"
#include <iostream>
#include "virtual_function2.h"

using namespace std;

int main()
{
	Base base_obj;
	first_d first_obj;
	second_d first_obj;
	show_who(base_obj);
	show_who(first_obj);
	show_who(second_obj);
}