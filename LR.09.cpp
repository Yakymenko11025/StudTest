#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    const int n = 5;
    int A[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) 
    {
        A[i] = rand() % (101) - 50;
        cout << setw(5) << A[i];
    }
    
    int max = 0;
    for (int i = 0; i < n; i++)
        if (A[i] > A[max]) max = i;

    cout << endl << setw(5) << A[max] << setw(5) << max;
}