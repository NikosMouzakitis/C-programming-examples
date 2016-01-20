 #include <stdio.h>
 
  int digits(int n)
  {
          int num=n, digits;
 
          if (num < 0)
                  num *=-1 ;
          else if (num == 0)
                  digits=1;
          for (digits = 0; num > 0; digits++)
                  num /= 10;
       return digits;
  }
 
  int main(int argc, char *argv[])
  {
      int number ;
 
      printf("Calculating the digits of a given number.\n");
      printf("\n");
      scanf("%d", &number);
      printf("Digits: %d\n",digits(number) );
      return 0;
  }