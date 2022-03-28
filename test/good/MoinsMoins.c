/*
class MoinsMoins {
  public static void main(String[] a) {
    {
      System.out.println(new Moins().moins());
      System.out.println(new Moins().moinsI());
    }
  }
}
class Moins {
  public int moins() {
    int i;
    {
      i = 10;
      while (0 < i) {
        {
          System.out.println(i);
        }
        ((i)--)++;
      }
    }
    return i;
  }
  public int moinsI() {
    int x;
    x = 10;
    ((x)--)++;
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
struct Moins;
void* Moins_moins(struct Moins* this);
void* Moins_moinsI(struct Moins* this);
struct Moins {
  void* (**vtable)();
};
void* (*Moins_vtable[])() = { Moins_moins, Moins_moinsI };
void* Moins_moins(struct Moins* this) {
  int i;
  {
    i = 10;
    while ((0 < i)) {
      {
        printf("%d\n", i);
      }
      ((i)--);
    }
  }
  return (void*)(i);
}
void* Moins_moinsI(struct Moins* this) {
  int x;
  x = 10;
  ((x)--);
  return (void*)(x);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%d\n", ({ struct Moins* tmp1 = ({ struct Moins* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Moins_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
    printf("%d\n", ({ struct Moins* tmp1 = ({ struct Moins* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Moins_vtable; res; }); (int) tmp1->vtable[1](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
