/*
class TestForLoop {
  public static void main(String[] args) {
    System.out.println(new Main().test());
  }
}
class Main {
  public int test() {
    int i;
    {
      i = 0;
    }
    System.out.println(i);
    {
      i = i - 5;
    }
    System.out.println(i);
    return 0;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct Main;
void* Main_test(struct Main* this);
struct Main {
  void* (**vtable)();
};
void* (*Main_vtable[])() = { Main_test };
void* Main_test(struct Main* this) {
  int i;
  {
    i = 0;
  }
  printf("%d\n", i);
  {
    i = (i - 5);
  }
  printf("%d\n", i);
  return (void*)(0);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  printf("%d\n", ({ struct Main* tmp1 = ({ struct Main* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Main_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  tgc_stop(&gc);

  return 0;
}
