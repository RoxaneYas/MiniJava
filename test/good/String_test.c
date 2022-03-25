/*
class String_test {
  public static void main(String[] a) {
    {
      System.out.println(new Stringtest().stringtest());
    }
  }
}
class Stringtest {
  public String stringtest() {
    String s;
    s = Test reussi;
    return s;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct Stringtest;
void* Stringtest_stringtest(struct Stringtest* this);
struct Stringtest {
  void* (**vtable)();
};
void* (*Stringtest_vtable[])() = { Stringtest_stringtest };
void* Stringtest_stringtest(struct Stringtest* this) {
  char* s;
  s = "Test reussi";
  return (void*)(s);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%s\n", ({ struct Stringtest* tmp1 = ({ struct Stringtest* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = Stringtest_vtable; res; }); (char*) tmp1->vtable[0](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
