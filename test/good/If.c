/*
class If {
  public static void main(String[] a) {
    {
      System.out.println(new Iftest().iftest());
    }
  }
}
class Iftest {
  public int iftest() {
    int i;
    i = 1;
    if (i == 1) {
      System.out.println(i);
      i = i + 1;
      if (i == 5) {
        i = 4;
        System.out.println(i);
      }
      else {
        i = 6;
        System.out.println(i);
      }
    }
    else {
      
    }
    return i;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct Iftest;
void* Iftest_iftest(struct Iftest* this);
struct Iftest {
  void* (**vtable)();
};
void* (*Iftest_vtable[])() = { Iftest_iftest };
void* Iftest_iftest(struct Iftest* this) {
  int i;
  i = 1;
  if ((i == 1)) {
    printf("%d\n", i);
    i = (i + 1);
    if ((i == 5)) {
      i = 4;
      printf("%d\n", i);
    }
    else {
      i = 6;
      printf("%d\n", i);
    }
  }
  else {
    
  }
  return (void*)(i);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%d\n", ({ struct Iftest* tmp1 = ({ struct Iftest* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Iftest_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
