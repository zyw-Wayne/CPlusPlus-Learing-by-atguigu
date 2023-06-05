/*
 * @Author: zyw_Wayne
 * @Date: 2023-06-05 20:36:12
 * @LastEditTime: 2023-06-05 20:48:00
 */
#include <iostream>
using namespace std;

int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  int ia[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};

  cout << "a length = " << sizeof(a) / sizeof(a[0]) << endl;

  const int iaRowCount = sizeof(ia) / sizeof(ia[0]);
  const int iaColCount = sizeof(ia[0]) / sizeof(ia[0][0]);

  cout << "ia item:" << endl;
  for (int i = 0; i < iaRowCount; i++)
  {
    for (int j = 0; j < iaColCount; j++)
    {
      cout << ia[i][j] << "\t";
    }
    cout << endl;
  }

  for (auto &row : ia)
  {
    for (auto num : row)
    {
      cout << num << "\t";
    }
    cout << endl;
  }

  cin.get();
}