#include <iostream>
#include <math.h>
using namespace std;

void ProblemOne() {
    for (int i = 0; i<10; i++) {
        cout << i << endl;
    }
}

void ProblemTwo() {
    int sum = 0;
    for (int i = 0; i<10; i++) {
        cout << i << endl;
        sum += i;
    }
    cout << sum << endl;
}

void ProblemThree() {
    for (int i = 1; i<101; i++) {
        if (i%5 != 0) {
            cout << i << endl;
        }
    }
}

void ProblemFour() {
    float Limit;
    cout << "Please enter upper limit: " << endl; cin >> Limit;
    int num = ceil(Limit / 10);
    for (int i = 1; i < num; i++) {
        cout << i*10 << endl;
    }
}

void ProblemFive() {
    char A = 65;
    int count = 0;
    for (int i = 0; i < 26; i++) {
        char temp = A + i;
        cout << temp << " " << endl;
        count++;
        if (count%5 == 0 && count != 0) {
            cout << "\n" << endl;
            count = 0;
        }
    }
}

#include <iostream>

using namespace std;

float ProblemSix() {
    int numClasses;
    cout << "Enter number of classes: ";
    cin >> numClasses;

    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 1; i <= numClasses; ++i) {
        float credits, gradeScale;

        cout << "Class " << i << " credits: ";
        cin >> credits;

        cout << "Grade scale for class " << i << ": ";
        cin >> gradeScale;

        totalCredits += credits;
        totalGradePoints += credits * gradeScale;
    }

    if (totalCredits > 0) {
        float gpa = totalGradePoints / totalCredits;
        cout << "Total GPA: " << gpa << endl;
        return gpa;
    } else {
        cout << "Total GPA: 0.0" << endl; // Avoid division by zero
        return 0.0;
    }
}

void ProblemSeven() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) {
            cout << "Not prime." << endl;
            return;
        }

    cout << (n < 2 ? "Not prime." : "Prime.") << endl;
}

void ProblemEight() {
    int n;
    string str;
    cout << "Enter a number: " << endl; cin >> n;
    while (n > 1) {
        int rem = n % 10;
        str = str + to_string(rem);
        n = floor(n/10);
    }
    cout << stoi(str) << endl;
}


void ProblemNine() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    cout << "Sum of the series: " << sum << endl;
}

void ProblemTen() {
    int number, maxNumber = 0;

    while (true) {
        cout << "Enter an integer (enter 0 to stop): ";
        cin >> number;

        if (number == 0) {
            break;
        }

        maxNumber = max(maxNumber, number);
    }

    cout << "Maximum number entered: " << maxNumber << endl;
}

void ProblemEleven() {
    int number, PosCount, NegCount, total = 0;
    while (true) {
        cout << "Enter an integer (enter 0 to stop): ";
        cin >> number;

        if (number == 0) {
            break;
        }
}

int main() {
    //ProblemOne();
    //ProblemTwo();
    //ProblemThree();
    //ProblemFour();
    //ProblemFive();
    //ProblemSix();
    //ProblemSeven();
    //ProblemEight();
    //ProblemNine();
    //ProblemTen();
    return 0;
}
