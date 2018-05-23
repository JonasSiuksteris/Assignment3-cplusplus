#include <fstream>

void Read(std::vector<Student>& Stud, int a)
{

    std::string row, inputs;
    int inputi;
    std::ifstream fd("Students-" + std::to_string(a) + ".txt");
    std::getline(fd, row);
    while(!fd.eof())
    {
        Student Temp;
        fd >> inputs;
        Temp.SetSurname(inputs);
        fd >> inputs;
        Temp.SetName(inputs);
        for(int i = 0; i < 5; i++){
            fd >> inputi;
            Temp.AddMark(inputi);
        }
        fd >> inputi;
        Temp.SetExam(inputi);
        Temp.Average();
        Temp.Median();
        Stud.push_back(Temp);
    }
}
