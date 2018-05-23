#include "StudentH.h"

void Student::SetName(std::string a) {
    name_ = a;
}

void Student::SetSurname(std::string a) {
    surname_ = a;
}

void Student::AddMark(double x) {
    Marks_.push_back(x);
}

void Student::SetExam(double x) {
    exam_ = x;
}

void Student::SortMarks() {
    std::sort(Marks_.begin(), Marks_.end());
}

void Student::Average() {
    double sum = 0;
    for(auto &mark: Marks_)
        sum += mark;
    average_ = (sum/Marks_.size()) * 0.4 + 0.6 * this->getExam();
}

void Student::Median() {
    double median;
    this->SortMarks();
    if (Marks_.size() % 2 == 0)
        median = (Marks_[Marks_.size() / 2] + Marks_[(Marks_.size()  / 2) - 1]) / 2;
    else
        median = Marks_[(Marks_.size() / 2)];
    median_ = median * 0.4 + 0.6 * this->getExam();
}

void Student::Category() {
    if(this->getAverage() >= 5)
        category_ = "kietiakas";
    else
        category_ = "vargsiukas";
}
bool Student::operator< (const Student& x) {
    return name_ < x.name_;
}

bool Student::operator> (const Student& x) {
    return name_ > x.name_;
}