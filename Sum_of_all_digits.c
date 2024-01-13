#include <stdio.h>

int main()
{
  int Number, Reminder, Sum=0;
  scanf("%d", &Number);
  while(Number > 0)
  {
     Reminder = Number % 10;
     Sum = Sum+ Reminder;
     Number = Number / 10;
  }
  printf("%d", Sum);
}