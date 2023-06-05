/*
 * @Author: zyw_Wayne
 * @Date: 2023-06-05 17:37:26
 * @LastEditTime: 2023-06-05 17:59:26
 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

  // love heart function:(x^2+y^2-a)^3 - x^2 y^3 = 0
  double a = 0.85;
  // define bound
  double bound = 1.3 * sqrt(a);

  // x,y change step
  double step = 0.05;

  for (double y = bound; y >= -bound; y -= step)
  {
    for (double x = -bound; x <= bound; x += step / 2)
    {
      double result = pow((pow(x, 2) + pow(y, 2) - a), 3) - pow(x, 2) * pow(y, 3);
      if (result <= 0)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  cin.get();

  return 0;
}