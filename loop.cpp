#include <iostream>
int main()
{
  int j;
  for (int i = 1; i < 100; i+=1) {
      j = 2;
      while (j < i) {
        if (!(i%j)) {
            printf("%d is first  divisor of %d", j, i);
            break;
        }
        j += 1;
        continue;
      }
      do {
        printf("-");
	j++;
      } while (j%i);
      printf("\n");
  }
  return 0;
}

