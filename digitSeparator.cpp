// Programmer: Rueil Manzambi
// MST Username: rnm8cm
// Instructor:  Johnathan Dunker
// Section:     301
// Date:        02/02/2021
// File:        lab3.cpp
// Description: Separate the input digits from least to most significant digit and print them in separate lines.



#include <iostream>
#include <cmath>
using namespace std;



int main()

{
  int user_input;
  int digit; // single digit to print

  do // only get a nonpositive input from user
  {
    cout << "Input a nonzero positive number: ";
    cin >> user_input;
    if ( user_input <= 0 )
    {
      cout << "The value is invalid, please try again!"<< endl;
    }
  } while ( user_input <= 0);

  cout << "The digits are: "<< endl;
  while (user_input > 0) // checking if the remaining number after the least digit computation is more than 0 to continue the operation
  {
    digit = user_input % 10; // isolating the last digit
    if ((digit % 2) == 0) // for even digits if true
    {  
      digit -= 7;
      if (digit < 0)
      {  
        digit = pow(digit, 2);

        if (digit > 9)
        {
          digit /= 10;
          cout << digit << endl;
        }
        else
        {
          cout << digit << endl;
        }
      }
      else
      {
        cout << digit << endl;
      }  
    }
    else // for odd digits
    {
      digit += 4;
      if (digit >= 10)
      {
        digit %= 10;
        cout << digit << endl;
      }
      else
      {
        cout << digit << endl;
      }
    }
    user_input /= 10; // taking the last digit out
  }

  return 0;

}

