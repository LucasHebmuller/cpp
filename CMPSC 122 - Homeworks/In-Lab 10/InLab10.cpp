#include <iostream>
#include <list>
using namespace std;


int Find(list<double> & targetList, double itemToFind)
{
    // Find the first index of itemToFind in targetList
    int firstIndex = -1;
    list<double>::iterator iter = targetList.begin();
    while (iter != targetList.end())
    {
        firstIndex++;
        if (*iter == itemToFind) {
        break;
        }
        iter++;

    }
    if (iter == targetList.end())
    {
    return -1;
    }
    else
    {
    return firstIndex;
    }
}


int Count(list<double> & targetList, double itemToCount)
{
    int itemCount = 0;

    list<double>::iterator iter = targetList.begin();
    while ( iter != targetList.end() )
    {
        if ( *iter == itemToCount )
            itemCount++;
        iter++;
    }

    return itemCount;
}


void Shuffle(list<double> & targetList)
{
    list<double>::iterator iter = targetList.begin();
    while ( iter != targetList.end() )
    {
        double temp = *iter;
       iter++;
       double temp2 = *iter;

       *iter = temp;
       iter--;
       *iter = temp2;

       iter++;
       iter++;
    }

}


///////////////////////////////////////////////////////////////////////////////
// Functions for testing. Do not modify. But adding more test cases is fine.
///////////////////////////////////////////////////////////////////////////////


template <typename T>
void DisplayList(list<T> & targetList)
{
    typename list<T>::iterator iter = targetList.begin();
    while (iter != targetList.end())
    {
    cout << *iter << " ";
    iter++;
    }
}


template <typename T>
void RunTestCase(list<T>& targetList, int testCaseNumber, T itemToFind)
{
    cout << "Test Case #" << testCaseNumber << "." << endl;
    DisplayList<double>(targetList);
    cout << endl;
    int firstIndex = Find(targetList, itemToFind);

    if (firstIndex < 0)
    {
    cout << "The item " << itemToFind << " cannot be found in the list." <<
    endl;
    }
    else
    {
    cout << "The item " << itemToFind << " first appears at index " <<
    firstIndex << endl;
    }

    int itemCount = Count(targetList, itemToFind);
    cout << "The item " << itemToFind << " appears " << itemCount << " times in the list." << endl;

    Shuffle(targetList);
    cout << "The list after shuffling." << endl;
    DisplayList<double>(targetList);

    cout << endl;
    cout << endl;
}


int main()
{
    // Test case 1, a double STL list with 8 elements { 5.5, 7.5, 4, 2, 60, 75.5,4, 3 }
    double darr1[] = { 5.5, 7.5, 4, 2, 60, 75.5, 4, 3 };
    list<double> dlist(darr1, darr1 + 8);
    RunTestCase<double>(dlist, 1, 4);

    double darr2[] = { 1, 3, 2, 1, 5, 0.5, -3, 1, 9, 1 };
    list<double> dlist2(darr2, darr2 + 10);
    RunTestCase<double>(dlist2, 2, 1);

    double darr3[] = { -5, 4, 2.5, 6, 2, 13, 8, 9.9, 20, 26, 14, 3 };
    list<double> dlist3(darr3, darr3 + 12);
    RunTestCase<double>(dlist3, 3, -20);
}
