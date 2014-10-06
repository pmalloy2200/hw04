/* 
Non-Recursive Function to calculate Fibonacci Numbers
Patrick Malloy
Physics 2200
9/29/2014
*/

#include <stdio.h>
      #include <time.h>
      #define N  45
      long fibonacci(int);
      int main(void)
      {
int i; long l;
          clock_t begin, end;
          double time_spent;
          begin = clock();
          for (i = 0; i < N; i++)
          {
              l = fibonacci(i);
              printf("%4d  %20ld\n", i, l);
          }
          end = clock();
          time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
          printf("%f sec\n", time_spent);
return 0; }

      long fibonacci(i)
        {
        long a = 0;
        long b = 1;
        int n;
        long c;
        for (n = 0; n <=i; n++)
          {
          c = a + b;
          a = b;
          b = c;
          }
        return c;
          }
        
