#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

#include "includes\Student.cpp"
#include "includes\StudentH.h"
#include "includes\Generate.cpp"
#include "includes\Strategies.cpp"


int main()
{
    for(int i = 10; i <= 100000; i *= 10){
        Generate(i);
        Strategies(i);
    }
}
