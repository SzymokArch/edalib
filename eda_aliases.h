// Easy Dynamic Arrays aliases file
#ifndef EDA_ALIASES_H
#define EDA_ALIASES_H

typedef char * str; 

// array structures

// struct defining char array
// len is the quantity of elements
// arr is the array pointer
// s is the string representation of the array {'a', 'b', ..., 'z'}
typedef struct array_char{
  int len;
  char * arr;
  str s;
}array_char;

// struct defining int array
// len is the quantity of elements
// arr is the array pointer
// s  is the string representation of the array {1, 2, ..., n}
typedef struct array_int{
  int len;
  int * arr;
  str s;
}array_int;

// struct defining float array
// len is the quantity of elements
// arr is the array pointer
// s is the string representation of the array {1.00, 1.50, ..., n}
typedef struct array_float{
  int len;
  float * arr;
  str s;
}array_float;

// struct defining array of strings (2D)
// len is the quantity of elements
// arr is the array pointer
// s is the string representation of the array {"abc", "cde", ..., "xyz"}
typedef struct array_str{
  int len;
  char ** arr;
  str s;
} array_str;

#endif
