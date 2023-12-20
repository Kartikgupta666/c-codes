// here its a draw back of this is program is its only itrate a single no. which singly repeat like it detect this type of array : 4 3 6 9 2 4 6 9; not this : 4 2 6 4 1 5 9 3 5 4 9;
#include <iostream>
#include <conio.h>
using namespace std;

int Duplicate(int arr[] , int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                temp = arr[i];
            }
        }
    }
   cout<<"This is your repeated element :" << temp;
}

int main()
{
    system("cls");

    int i, n ;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        
            cin >> arr[i];
    }

    Duplicate(arr , n );
    

    return 0;
}
