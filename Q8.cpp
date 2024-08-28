#include <iostream>
using namespace std;

struct student
{
    string studentName;
    string rollNO;
    float totalMarks;

    void acceptRecord()
    {
        cout << "Enter the name : ";
        cin >> this->studentName;
        cout << "Enter the rollNo : ";
        cin >> this->rollNO;
        cout << "Enter the totalMarks : ";
        cin >> this->totalMarks;
    }
    void printRecord()
    {
        cout << "Name        :   " << this->studentName << endl;
        cout << "rollNo      :   " << this->rollNO << endl;
        cout << "totalMarks  :   " << this->totalMarks << endl;
    }
};

int main()
{
    student s1;
    s1.acceptRecord();
    s1.printRecord();

    return 0;
}