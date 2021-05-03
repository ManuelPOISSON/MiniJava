/*
class TestEqualOp {
  public static void main(String[] args) {
    System.out.println(new Main().test());
  }
}
class Main {
  public int test() {
    int a;
    int b;
    int[] tab1;
    int[] tab2;
    a = 1;
    b = 1;
    if (a == b) {
      System.out.println(2);
    }
    
    return 0;
  }
  public int init() {
    return this.createArray(42)[3];
  }
  public int[] createArray(int n) {
    int[] a;
    int i;
    a = new int[n];
    i = 0;
    while (i < n) {
      a[i] = i;
      i = i + 1;
    }
    return a;
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
void* Main_init(struct Main* this);
void* Main_createArray(struct Main* this, int n);
struct Main {
  void* (**vtable)();
};
void* (*Main_vtable[])() = { Main_test, Main_init, Main_createArray };
void* Main_test(struct Main* this) {
  int a;
  int b;
  struct array* tab1;
  struct array* tab2;
  a = 1;
  b = 1;
  if ((a == b)) {
    printf("%d\n", 2);
  }
  
  return (void*)(0);
}
void* Main_init(struct Main* this) {
  return (void*)(({ int tmp1 = 3; struct array* tmp2 = ({ struct Main* tmp1 = this; (struct array*) tmp1->vtable[2](tmp1, 42); }); int res; if (tmp1 < 0 || tmp1 >= tmp2->length) exit(1); else res = tmp2->array[tmp1]; res; }));
}
void* Main_createArray(struct Main* this, int n) {
  struct array* a;
  int i;
  a = (void*)({ int tmp1 = n; if (tmp1 < 0) exit(1); struct array* res = tgc_alloc(({ extern tgc_t gc; &gc; }), sizeof(struct array)); res->array = (int*) tgc_calloc(({ extern tgc_t gc; &gc; }), tmp1, sizeof(int)); res->length = tmp1; res; });
  i = 0;
  while ((i < n)) {
    (a)->array[i] = i;
    i = (i + 1);
  }
  return (void*)(a);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  printf("%d\n", ({ struct Main* tmp1 = ({ struct Main* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Main_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  tgc_stop(&gc);

  return 0;
}
