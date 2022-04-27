#include <stdio.h>
 
int main()
{
  int Number, Temp, Reminder, Sum = 0, i; 
  long Factorial;
  scanf("%d", &Number);
  Temp = Number;
  while( Temp > 0)
   {
     Factorial = 1, i = 1; 
     Reminder = Temp % 10;
     while (i <= Reminder)
     {
     	Factorial = Factorial * i;
     	i++;
     }
     Sum = Sum + Factorial;
     Temp = Temp /10;
   }
  if ( Number == Sum )
      printf("The number %d is a strong number",Number);
  else
      printf("The number %d is not a strong number",Number);
 
  return 0;
}