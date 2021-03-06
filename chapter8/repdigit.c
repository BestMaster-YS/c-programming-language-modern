#include <stdio.h>


const int TRUE = 1;
const int FALSE = 0;
typedef int Bool;


int main() {
  Bool digit_seen[10] = {0};
  int digit;
  long int n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) break;
    digit_seen[digit] = TRUE;
    n /= 10;
  }

  if (n > 0) {
    printf("Repeated digit \n\n");
  } else {
    printf("No repeated digit");
  }

  return 0;
}


