#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int *a, N;
  N = argc - 1;
  a = (int *)malloc(sizeof(int) * N);
  int *prime = (int *)malloc(sizeof(int) * N);
  int i, j = 0;
  for (i = 0; i < N; i++) {
    a[i] = atoi(argv[i + 1]);
    if (Isprime(a[i])) {
      prime[j] = a[i];
      j++;
    }
  }
  if (N == 0)
    printf("No prime\n");
  else {
    N = j;
    display(prime, N);
    bubbleSort(prime, N);
    // insertion(a,N);

    // selectionSort(a,N);
    display(prime, N);
  }
  return 0;
}
