#ifndef DARBAS3_STUDENTAS_H
#define DARBAS3_STUDENTAS_H

class Student{
    private:
        // Realizacija
        std::string name_;
        std::string surname_;
        std::vector<double> Marks_;
        double exam_;
        double average_;
        double median_;
        std::string category_;
    public:
        // Inicializuojama
        Student() : exam_(0) {}
        // Studento vardas
        void SetName(std::string);
        // Studento pavarde
        void SetSurname(std::string);
        // Studento egzamino pažymys
        void SetExam(double);
        // Namų darbų pažymys
        void AddMark(double);
        // Pažymių rūšiavimas didėjimo tvarka
        void SortMarks();
        // Balas pagal vidurkį
        void Average();
        // Balas pagal medianą
        void Median();
        // Kategorija(vargšiukai ir kietiakai)
        void Category();
        // Gražinamas vardas
        inline std::string getName() const { return name_; }
        // Gražinama pavardė
        inline std::string getSurname() const {return surname_; }
        // Grąžinami pažymiai
        inline std::vector<double> getMarks() const { return Marks_; }
        // Gražinamas egzamino pažymys
        inline double getExam() const { return exam_; }
        // Grąžinamas vidurkis
        inline double getAverage() const { return average_; }
        // Grąžinama mediana
        inline double getMedian() const { return median_; }
        // Gražinama kategorija
        inline std::string getCategory() const { return category_; }
        // Pagal varda žemiau
         bool operator< (const Student& x);
        // Pagal vardą aukščiau
        bool operator> (const Student& x);

};

#endif //DARBAS3_STUDENTAS_H
