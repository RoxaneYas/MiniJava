/*
class Test_complet {
  public static void main(String[] a) {
    {
      System.out.println(new Test().test());
    }
  }
}
class Test {
  public int test() {
    int i;
    String s;
    int j;
    i = 1;
    s = Test réussi;
    ((i)--)++;
    if (i == 0) {
      {
        j = 0;
        while (j < 5) {
          {
            ((i)++)++;
          }
          ((j)++)++;
        }
      }
    }
    else {
      
    }
    if (i == 5) {
      System.out.println(s);
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
struct Test;
void* Test_test(struct Test* this);
struct Test {
  void* (**vtable)();
};
void* (*Test_vtable[])() = { Test_test };
void* Test_test(struct Test* this) {
  int i;
  char* s;
  int j;
  i = 1;
  s = "Test réussi";
  ((i)--);
  if ((i == 0)) {
    {
      j = 0;
      while ((j < 5)) {
        {
          ((i)++);
        }
        ((j)++);
      }
    }
  }
  else {
    
  }
  if ((i == 5)) {
    printf("%s\n", s);
  }
  else {
    
  }
  return (void*)(i);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%d\n", ({ struct Test* tmp1 = ({ struct Test* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Test_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
