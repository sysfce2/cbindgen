#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

enum C {
  X = 2,
  Y,
};
typedef uint32_t C;

typedef struct A {
  int32_t _0;
} A;

typedef struct B {
  int32_t x;
  float y;
} B;

typedef struct D {
  uint8_t List;
  uintptr_t Of;
  B Things;
} D;

enum F_Tag {
  Foo,
  Bar,
  Baz,
};
typedef uint8_t F_Tag;

typedef struct Foo_Body {
  F_Tag tag;
  int16_t _0;
} Foo_Body;

typedef struct Bar_Body {
  F_Tag tag;
  uint8_t x;
  int16_t y;
} Bar_Body;

typedef union F {
  F_Tag tag;
  Foo_Body foo;
  Bar_Body bar;
} F;

void root(A a, B b, C c, D d, F f);
