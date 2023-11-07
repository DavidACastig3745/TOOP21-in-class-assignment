#include <iostream>
using namespace std;

class grades {
    private:
        double grade1, grade2, grade3;
    public: 
        void set_grades (double,double,double);
        double average() {return (grade1+grade2+grade3)/3;}
};

void grades::set_grades (double gradeA, double gradeB, double gradeC) {
    grade1 = gradeA;
    grade2 = gradeB;
    grade3 = gradeC;
}

int main () {
    grades Cadet1;
    grades Cadet2;

    Cadet1.set_grades(95,68,73);
    Cadet2.set_grades(84,89,83);

    cout << "Cadet1 average: " << Cadet1.average()  << "\n";
    cout << "Cadet2 average: " << Cadet2.average() << "\n";

    return 0;
}