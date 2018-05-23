#include "Read.cpp"
#include "SizeName.cpp"
#include "SizeSurname.cpp"
#include "Method1.cpp"
#include "Method2.cpp"
#include "Method3.cpp"

#include <time.h>

void Strategies(int i)
{
    clock_t t1, t2, t3, t4, t5;
    std::vector<Student> Stud;

    t1 = clock();
    Read(Stud, i);
    t2 = clock();
    Method1(Stud, std::to_string(i));
    t3 = clock();
    Method2(Stud, std::to_string(i));
    t4 = clock();
    Method3(Stud, std::to_string(i));
    t5 = clock();
    std:: cout << "Using " << i << " files program takes " << std::endl;
    std::cout << "1. Without containers - "<< ((float)t3 - (float)t1)/1000 << " s" << std::endl;
    std::cout << "2. With 2 containers - " << ((float)t4 - (float)t3 + (float)t2 - (float)t1)/1000 << " s" << std::endl;
    std::cout << "3. With 1 container - " << ((float)t5 - (float)t4 + (float)t2 - (float)t1)/1000 << " s" << std::endl << std::endl;

}
