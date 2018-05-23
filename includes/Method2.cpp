void Method2(std::vector<Student>& Stud, std::string a)
{
    int NameSize{}, SurnameSize{};
    std::vector<Student> Varg, Kiet, Stud2 = Stud;
    NameSize = SizeN(Stud2);
    SurnameSize = SizeS(Stud2);
    for(int i = 0; i < Stud2.size(); i++){
        if(Stud2[i].getAverage() >= 5)
            Kiet.push_back(Stud2[i]);
        else
            Varg.push_back(Stud2[i]);
    }
    std::sort(Kiet.begin(), Kiet.end());
    std::sort(Varg.begin(), Varg.end());
    std::ofstream fr("./results/SecondMethod/Students-" + a + ".txt");
    fr << std::setw(SurnameSize+2) << std::left << "Name" << std::setw(NameSize+2) << std::left << "Surname" << std::setw(20) << std::left << "Final-Average" << std::setw(19) << std::left << "Finale-Median" << std::setw(12) << std::left << "Category" << std::endl;
    fr << std::endl << "Kietiakai : " << std::endl << std::endl;
    for(int i = 0; i < Kiet.size(); i++)
        fr << std::setw(SurnameSize+2) << std::left << Kiet[i].getSurname() << std::setw(NameSize+2) << std::left << Kiet[i].getName() << std::setw(20) << std::left << std::fixed << std::setprecision(2) << Kiet[i].getAverage() << std::setw(19) << std::left << std::fixed << std::setprecision(2) << Kiet[i].getMedian() << std::setw(12) << std::left << Kiet[i].getCategory() << std::endl;
    fr << std::endl << "Vargseliai : " << std::endl << std::endl;
    for(int i = 0; i < Varg.size(); i++)
        fr << std::setw(SurnameSize+2) << std::left << Varg[i].getSurname() << std::setw(NameSize+2) << std::left << Varg[i].getName() << std::setw(20) << std::left << std::fixed << std::setprecision(2) << Varg[i].getAverage() << std::setw(19) << std::left << std::fixed << std::setprecision(2) << Varg[i].getMedian() << std::setw(12) << std::left << Varg[i].getCategory() << std::endl;
    fr.close();
}
