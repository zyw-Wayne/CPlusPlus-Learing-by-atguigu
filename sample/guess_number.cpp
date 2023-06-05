#include <iostream>
#include <time.h>
using namespace std;

int main()
{
begin:
  cout << "===============guess number=================" << endl;
  cout << "Rule : enter 0-100 integers, there are 5 valid opportunities\n"
       << endl;

  // Use the current time as the random number seed to generate a pseudo-random number from 0 to 100
  srand(time(0));
  int target = rand() % 100;

  int n = 0; // number of guesses
  while (n < 5)
  {
    cout << "please input number:" << endl;
    int num;
    cin >> num;

    if (num == target)
    {
      cout << "great! your guess is right" << endl;
      break;
    }
    else if (num > target)
    {
      cout << "ops! your guess number is bigger,please guess again " << endl;
    }
    else
    {
      cout << "ops! your guess number is smaller,please guess again " << endl;
    };

    ++n;
  }

  if (n == 5)
  {
    cout << "The number of guesses exceeded 5 times, please start again" << endl;

    string again;

    cout << "do you want to rePlay?please input y/n" << endl;

    cin >> again;

    if (again == "y")
    {
      cout << "this game will rePlay, enjoy it!" << endl;
      goto begin;
    }
    else
    {
      exit(0);
    }
  }

  cin.get();
  cin.get();
  return 0;
}