#include <stdio.h>

int main() {
    unsigned int x = 1;
    char *c = (char*)&x;
    if (*c){
        printf("Little Endian\n");}
    else
       { printf("Big Endian\n");}

    return 0; }


/*Big Endian (Humans-style) 🏰

Put the biggest number first (MSB first).

Lockers:

Locker0: 12   Locker1: 34   Locker2: 56   Locker3: 78


Read left → right, looks normal.

Think: “I’m human, I like my numbers normal.”*/

/*Put the smallest number first (LSB first).

Lockers:

Locker0: 78   Locker1: 56   Locker2: 34   Locker3: 12


Looks upside down if you read left → right.

Think: “I’m a lazy CPU, I’ll start from the back.”*/