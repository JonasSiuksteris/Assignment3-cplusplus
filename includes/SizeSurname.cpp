int SizeS(std::vector<Student>& Stud)
{
    int max = 7;
    for(int i = 0; i < Stud.size(); i++)
        if(Stud[i].getSurname().length() > max)
            max = Stud[i].getSurname().length();
    return max;
}
