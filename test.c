#include <stdlib.h>
#include <stdio.h>

void sample_state() {}

void example_func() {
  int i;
  for(i=0; i<8; ++i) {
    int* p=(int*)malloc(128*1024 + (i%2 ? 1 : -1));
    p[1]=5;
  }
}

void another_func() {
  malloc(1024*1024);
}

int main() {
  example_func();
  sample_state();
  another_func();
  sample_state();
}
