#include <iostream>
using namespace std;

string rank1(int marks)
{
    if (marks < 40)
    {
        return "F";
    }

    else if (marks > 40 and marks < 50)
    {
        return "E";
    }

    else if (marks > 50 and marks < 60)
    {
        return "D";
    }

    else if (marks > 60 and marks < 70)
    {
        return "C";
    }

    else if (marks > 70 and marks < 80)
    {
        return "B";
    }

    else if (marks > 80 and marks < 90)
    {
        return "A";
    }

    else if (marks >= 90 and marks < 101)
    {
        return "A1";
    }

    else
    {
        return "Not properly entered\nKindly recheck.";
    }
    
}

int main(int argc, char const *argv[])
{
    cout << "-------Welcome to our marks ranking system-------" << endl;
    int students;
    cout << "Enter the number of students:-"
         << "\n";
    cin >> students;

    int arr[students];
    int marks;

    cout << "Start entering the form of the respective students:-"
         << "\n";

    for (int i = 0; i < students; i++)
    {
        cout << "Enter the marks for student " << i + 1 << ": ";
        cin >> marks;
        arr[i] = marks;
    }

    cout << endl << "Ranking the needful:-" << endl << endl;

    for (int i = 0; i < students; i++)
    {
        cout << "The grade for student " << i + 1 << " is " << rank1(arr[i]) << endl;
    }

    return 0;
}
