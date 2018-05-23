#include <random>
#include <fstream>
#include <iomanip>

void Generate(int i)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 10);

    std::ofstream fd("Students-" + std::to_string(i) + ".txt");
    fd << std::left << std::setprecision(2) << std::fixed << std::setw(15) << "Surname" << std::setw(15)  << "Name" << std::setw(5) << "ND1" << std::setw(5) << "ND2" << std::setw(5) << "ND3" << std::setw(5) << "ND4" << std::setw(5) << "ND5" << std::setw(9) << "Exam" << std::endl;
    for(int j = 1; j <= i; j++){
        fd << std::left << std::setprecision(2) << std::fixed << std::setw(15) << "Surname" + std::to_string(j) << std::setw(15) << "Name"  + std::to_string(j);
        for(int l = 1; l <= 5; l++){
            fd << std::setw(5) << dist(mt);
        }
        fd << std::setw(9) << dist(mt) << std::endl;
    }
    fd.close();
}
