#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const char* a[] = {
    "あけ", "おめ", "こと", "よろ",
  };
  size_t i, size = sizeof(a)/sizeof(a[0]);

  srand((unsigned int) time(NULL));
  for (i = 0; i < size; i++) {
    int j = rand() % size;
    const char* t = a[i];
    a[i] = a[j];
    a[j] = t;
  }
  printf("%s%s%s%s！\n", a[0], a[1], a[2], a[3]);
  return 0;
}