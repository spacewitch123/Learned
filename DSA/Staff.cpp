#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
class StaffInfo
{
private:
    string sentence1;
    string sentence2;
    string sentence3;
    string sentence4;

public:
    void mergeSort(string Array[], string Array1[], string Array2[], string Array3[], int first, int last)
    {
        if (first < last)
        {
            int mid = (first + last) / 2;
            mergeSort(Array, Array1, Array2, Array3, first, mid);
            mergeSort(Array, Array1, Array2, Array3, mid + 1, last);
            merge(Array, Array1, Array2, Array3, first, mid, last);
        }
    }
    const int MAX_SIZE = 10;
    void merge(string Array[], string Array1[], string Array2[], string Array3[], int first, int mid, int last)
    {
        string tempArray[MAX_SIZE];
        string tempArray1[MAX_SIZE];
        string tempArray2[MAX_SIZE];
        string tempArray3[MAX_SIZE];
        // temp array
        int first1 = first; // first subarray begin int last1 = mid; // end of first subarray
        int last1 = mid;
        int first2 = mid + 1;
        int last2 = last;
        int index = first1;

        for (; (first1 <= last1) && (first2 <= last2); ++index)
        {
            if (Array[first1] < Array[first2])
            {
                tempArray[index] = Array[first1];
                tempArray1[index] = Array1[first1];
                tempArray2[index] = Array2[first1];
                tempArray3[index] = Array3[first1];
                ++first1;
            }
            else
            {
                tempArray[index] = Array[first2];
                tempArray1[index] = Array1[first2];
                tempArray2[index] = Array2[first2];
                tempArray3[index] = Array3[first2];
                ++first2;
            }
        }
        for (; first1 <= last1; ++first1, ++index)
        {
            tempArray[index] = Array[first1];
            tempArray1[index] = Array1[first1];
            tempArray2[index] = Array2[first1];
            tempArray3[index] = Array3[first1];
        }
        for (; first2 <= last2; ++first2, ++index)
        {
            tempArray[index] = Array[first2];
            tempArray1[index] = Array1[first2];
            tempArray2[index] = Array2[first2];
            tempArray3[index] = Array3[first2];
        }
        for (index = first; index <= last; ++index)
        {
            Array[index] = tempArray[index];
            Array1[index] = tempArray1[index];
            Array2[index] = tempArray2[index];
            Array3[index] = tempArray3[index];
        }
    }
    int SequenceSearch(string search_key, string array[], int array_size)
    {
        int p;
        int index = -1;
        for (p = 0; p < array_size; p++)
        {
            if (search_key == array[p])
            {
            }
            index = p;
            break;
        }
        return index;
    };
};

int main()
{
    string staffic[10], staffsal[10], staffname[10], staffdur[10];
    int Totalsal;
    ifstream fin;
    ofstream fout;
    fin.open("StaffData.txt", ios::in);
    for (int n = 0; n < 10; n++)
    {
        fin >> staffname[n] >> staffic[n] >> staffdur[n] >> staffsal[n];
    }
    fin.close();

    int useropt1, useropt2, useropt3;
    cout << "WELCOME TO STAFF MANAGEMENT SYSTEM"
         << "\n"
         << endl;
    do
    {
        cout << "<<< Function Selection >>>" << endl;
        cout << "[1] Sorting" << endl;
        cout << "[2] Searching" << endl;
        cout << "[3] Exit" << endl;
        cout << "OPTION : ";
        cin >> useropt1;
        cout << "\n";
        if (useropt1 == 1)
        {
            do
            {
                cout << "<<< Sorting Process >>>" << endl;
                cout << "[1] By name" << endl;
                cout << "[2] By Staff Number" << endl;
                cout << "[3] By Duration of Employment" << endl;
                cout << "[4] By Salary" << endl;
                cout << "OPTION : ";
                cin >> useropt2;
                cout << "\n";
                if (useropt2 == 1)
                {
                    string sentence1;
                    cout << "What is the function you want to do?(e.g.Mergosort())" << endl;
                    cin >> sentence1;
                    cout << endl;
                    cout << endl;
                    cout << sentence1 << "alreday done" << endl;
                    StaffInfo StaffbyName;
                    StaffbyName.mergeSort(staffname, staffic, staffdur, staffsal, 0, 9);
                    cout << "Staff Name Ascending Result: "
                         << "\n"
                         << endl;

                    cout << "Number"
                         << " "
                         << "Staffname"
                         << " "
                         << "Staffic"
                         << " "
                         << "Staffdur"
                         << " "
                         << "Staffsal" << endl;
                    for (int i = 0; i < 10; i++)
                    {
                        cout << setw(6) << right << i + 1 << setw(11) << right << staffname[i] << " " << setw(10) << right << staffic[i] << setw(12) << right << staffname[i] << " " << setw(10) << right << staffic[i] << setw(12) << right << staffdur[i] << setw(12) << right << staffsal[i] << " " << endl;
                    }
