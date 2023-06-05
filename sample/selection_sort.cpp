#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2, 5, 3, 1, 7, 9, 4, 6, 10, 8, 12, 14, 11, 13};

  const int arrSize = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < arrSize; i++)
  {
    for (int j = i + 1; j < arrSize; j++)
    {
      if (arr[j] < arr[i])
      {
        const int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  for (int num : arr)
  {
    cout << num << " ";
  }

  cout << endl;

  cin.get();
}