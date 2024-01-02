#include <stdio.h>
#include<math.h>

int main()
{
  int Number, squr, rem, Sum;
  
  scanf("%d", &Number);

  squr = pow(Number, 2);

  for (Sum = 0; squr > 0; squr = squr / 10)
  {
    rem = squr % 10;
    Sum = Sum + rem;
  }

  if (Number == Sum)
    printf("Neon Number");
  else
    printf("Not Neon Number");
}