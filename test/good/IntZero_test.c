/*
class IntZero_test {
  public static void main(String[] a) {
    {
      System.out.println(new IntZero().intZero());
    }
  }
}
class IntZero {
  public int intZero() {
    int x;
    x = 77;
    return x;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct IntZero;
void* IntZero_intZero(struct IntZero* this);
struct IntZero {
  void* (**vtable)();
};
void* (*IntZero_vtable[])() = { IntZero_intZero };
void* IntZero_intZero(struct IntZero* this) {
  int x;
  x = 77;
  return (void*)(x);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%d\n", ({ struct IntZero* tmp1 = ({ struct IntZero* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = IntZero_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
