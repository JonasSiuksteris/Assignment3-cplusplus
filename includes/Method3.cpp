bool ByGrade(const Student& x, const Student& y)
{
    return x.getAverage() < y.getAverage();
}

void Method3(std::vector<Student>& Stud, std::string a)
{
    int NameSize{}, SurnameSize{};
    std::vector<Student> Kiet, Stud2 = Stud;
    NameSize = SizeN(Stud2);
    SurnameSize = SizeS(Stud2);
    sort(Stud2.begin(), Stud2.end(), ByGrade);
    for(int i = Stud2.size(); i > 0; i--){
        if(Stud2[i].getAverage() >= 5){
            Kiet.push_back(Stud2[i]);
            Stud2.pop_back();
        }
    }
    sort (Kiet.begin(), Kiet.end());
    sort (Stud.begin(), Stud.end());
    std::ofstream fr("./results/ThirdMethod/Students-" + a + ".txt");
    fr << std::setw(SurnameSize+2) << std::left << "Name" << std::setw(NameSize+2) << std::left << "Surname" << std::setw(20) << std::left << "Final-Average" << std::setw(19) << std::left << "Finale-Median" << std::setw(12) << std::left << "Category" << std::endl;
    fr << std::endl << "Kietiakai : " << std::endl << std::endl;
    for(int i = 0; i < Kiet.size(); i++)
        fr << std::setw(SurnameSize+2) << std::left << Kiet[i].getSurname() << std::setw(NameSize+2) << std::left << Kiet[i].getName() << std::setw(20) << std::left << std::fixed << std::setprecision(2) << Kiet[i].getAverage() << std::setw(19) << std::left << std::fixed << std::setprecision(2) << Kiet[i].getMedian() << std::setw(12) << std::left << Kiet[i].getCategory() << std::endl;
    fr << std::endl << "Vargseliai : " << std::endl << std::endl;
    for(int i = 0; i < Stud2.size(); i++)
        fr << std::setw(SurnameSize+2) << std::left << Stud2[i].getSurname() << std::setw(NameSize+2) << std::left << Stud2[i].getName() << std::setw(20) << std::left << std::fixed << std::setprecision(2) << Stud2[i].getAverage() << std::setw(19) << std::left << std::fixed << std::setprecision(2) << Stud2[i].getMedian() << std::setw(12) << std::left << Stud2[i].getCategory() << std::endl;
    fr.close();
}
