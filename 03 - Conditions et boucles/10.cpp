#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double grade;
    char ects_grade;

    cout << "Entrez votre note (0-6) : ";
    cin >> grade;

    if (grade < 0. || grade > 6.) {
        cout << "La note doit être dans l'interval (0-6)";
        return 1;
    }

    grade = floor(grade / .25) * .25;
    cout << "La note arrondie est : " << grade << endl;

    if (grade > 5.) {
        ects_grade = 'A';
    } else if (grade > 4.5) {
        ects_grade = 'B';
    } else if (grade > 4.25) {
        ects_grade = 'C';
    } else if (grade > 4.) {
        ects_grade = 'D';
    } else if (grade > 3.75) {
        ects_grade = 'E';
    } else {
        ects_grade = 'F';
    }

    cout << "Votre note ECTS est : " << ects_grade;

    return 0;
}
