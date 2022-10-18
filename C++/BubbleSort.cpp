// Bubble Sort

#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    int round, i;
    for (round = 0; round < n - 1; round++)
    {
        int flag = 0; // for modification of time complexity. This is not a part of actual algorithm.
        for (i = 0; i < n - 1 - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = 1;
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        if (flag == 0)
            return;
    }
}
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    int i, j;
    cout << "Enter the elements of the array :" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    BubbleSort(arr, n);
    cout << "After sorting the array in accending order by Bubble sorting algorithm, we get : " << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

/*
Output:
Enter array size : 5
Enter the elements of the array :
10 59 39 85 57
After sorting the array in accending order by Bubble sorting algorithm, we get : 
10 39 57 59 85
*/
