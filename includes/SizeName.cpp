int SizeN(std::vector<Student>& M)
{
    int max = 6;
    for(int i = 0; i < M.size(); i++)
        if(M[i].getName().length() > max)
            max = M[i].getName().length();
    return max;
}
