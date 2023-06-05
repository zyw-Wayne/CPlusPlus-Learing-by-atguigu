/*
 * @Author: zyw_Wayne
 * @Date: 2023-06-03 21:56:38
 * @LastEditTime: 2023-06-03 22:00:40
 */
#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 9; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << "X" << i << "=" << i * j << "\t";
    }
    cout << endl;
  }

  cin.get();
  return 0;
}