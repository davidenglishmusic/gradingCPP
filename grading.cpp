#include <iostream>
#include <string>
using namespace std;

string convertToLetterGrade(int percentage);

const int HUNDRED = 100;
const int NINETY = 90;
const int SEVENTY_THREE = 73;
const int SIXTY_SIX = 66;
const int FIFTY = 50;

int main()
{
  int percentage;
  string letterGrade;

  cout << "Enter a grade out of 100:";
  cin >> percentage;

  letterGrade = convertToLetterGrade(percentage);

  cout << "Your letter grade is " << letterGrade << ".\n";

  return 0;
}

string convertToLetterGrade(int percentage){
  string letterGrade;
  if (percentage < 0 || percentage > 100)
  {
    letterGrade = "invalid";
  }
  else if(percentage >= NINETY)
  {
    letterGrade = "A";
  }
  else if (percentage >= SEVENTY_THREE)
  {
    letterGrade = "B";
  }
  else if (percentage >= SIXTY_SIX)
  {
    letterGrade = "C";
  }
  else if (percentage >= FIFTY)
  {
    letterGrade = "D";
  }
  else
  {
    letterGrade = "F";
  }
  return letterGrade;
}
