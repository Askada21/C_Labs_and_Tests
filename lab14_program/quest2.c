#include <stdio.h>

char name[] = {'R', 'o', 'b', 'e', 'r', 't'};

/*
Undefined behavior. puts() expects a null-terminated string.
Correct: 
char name[] = {'R','o','b','e','r','t','\0'};
puts(name);
1) puts(name);

Wrong argument type. %s in scanf() expects a char* pointing to memory where input will be stored.
Correct: scanf("%s", name);  
2) scanf("%s", &name);

Depends on array size. name has 6 elements, "Philip" is 6 characters + 1 null terminator = 7 bytes
Overflow. The array is too small - undefined behavior.
Correct: 
char name[10];  // Enough space
strcpy(name, "Philip");
3) strcpy(name, "Philip");

Wrong type. "a" is a string literal - type char*. *(name + 5) is a single char → cannot assign a pointer to a char.
Correct: *(name + 5) = 'a';
4) *(name + 5) = "a";

Cannot assign to array. Arrays in C are not assignable.
Correct: strcpy(name, "Philip"); 
5) name = "Philip";
*/