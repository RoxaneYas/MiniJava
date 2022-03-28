/*
class AddAdd {
  public static void main(String[] a) {
    {
      System.out.println(new Add().add());
      System.out.println(new Add().addI());
    }
  }
}
class Add {
  public int add() {
    int i;
    {
      i = 0;
      while (i < 10) {
        {
          System.out.println(i);
        }
        ((i)++)++;
      }
    }
    return i;
  }
  public int addI() {
    int x;
    x = 10;
    ((x)++)++;
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
struct Add;
void* Add_add(struct Add* this);
void* Add_addI(struct Add* this);
struct Add {
  void* (**vtable)();
};
void* (*Add_vtable[])() = { Add_add, Add_addI };
void* Add_add(struct Add* this) {
  int i;
  {
    i = 0;
    while ((i < 10)) {
      {
        printf("%d\n", i);
      }
      ((i)++);
    }
  }
  return (void*)(i);
}
void* Add_addI(struct Add* this) {
  int x;
  x = 10;
  ((x)++);
  return (void*)(x);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%d\n", ({ struct Add* tmp1 = ({ struct Add* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Add_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
    printf("%d\n", ({ struct Add* tmp1 = ({ struct Add* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Add_vtable; res; }); (int) tmp1->vtable[1](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
