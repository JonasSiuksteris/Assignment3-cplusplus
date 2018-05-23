void Method1(std::vector<Student> Stud, std::string a)
{
    int NameSize{}, SurnameSize{};
    std::vector<Student> Stud2 = Stud;
    NameSize = SizeN(Stud2);
    SurnameSize = SizeS(Stud2);
    for(int i = 0; i < Stud2.size(); i++)
        Stud2[i].Category();
    std::sort(Stud2.begin(), Stud2.end());
    std::ofstream fr("./results/MainMethod/Students-" + a + ".txt");
    fr << std::setw(SurnameSize+2) << std::left << "Name" << std::setw(NameSize+2) << std::left << "Surname" << std::setw(20) << std::left << "Final-Average" << std::setw(19) << std::left << "Finale-Median" << std::setw(12) << std::left << "Category" << std::endl;
    for(int i = 0; i < Stud2.size(); i++)
        fr << std::setw(SurnameSize+2) << std::left << Stud2[i].getSurname() << std::setw(NameSize+2) << std::left << Stud2[i].getName() << std::setw(20) << std::left << std::fixed << std::setprecision(2) << Stud2[i].getAverage() << std::setw(19) << std::left << std::fixed << std::setprecision(2) << Stud2[i].getMedian() << std::setw(12) << std::left << Stud2[i].getCategory() << std::endl;
    fr.close();
}
