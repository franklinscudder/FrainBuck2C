/* AUTO TRANSPILED BRAINFUCK -> C USING FrainBuck2C.py
by Tom Findlay {findlaytel@gmail.com} */

int main(int argc, char *argv[]) {
char array[30000] = {0}; char *ptr = array;
*ptr += 13;
while (*ptr) {
--*ptr;
++ptr;
*ptr += 2;
ptr += 3;
*ptr += 5;
++ptr;
*ptr += 2;
++ptr;
++*ptr;
ptr -= 6;
}
ptr += 5;
*ptr += 6;
++ptr;
*ptr -= 3;
ptr += 10;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
++*ptr;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
while (*ptr) {
ptr += 8;
*ptr = 0;
++ptr;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 8;
*ptr = 0;
++*ptr;
ptr -= 7;
*ptr += 5;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 7;
++*ptr;
ptr += 27;
++*ptr;
ptr -= 17;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
while (*ptr) {
ptr += 6;
while (*ptr) {
ptr += 7;
*ptr = 0;
ptr += 2;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 7;
*ptr = 0;
++*ptr;
ptr -= 6;
*ptr += 4;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 6;
++*ptr;
ptr -= 6;
*ptr += 7;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 6;
++*ptr;
ptr -= 16;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
while (*ptr) {
*ptr = 0;
ptr += 6;
while (*ptr) {
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 6;
++*ptr;
ptr -= 2;
++*ptr;
ptr -= 3;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 2;
++*ptr;
ptr -= 3;
++*ptr;
ptr -= 2;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 2;
++*ptr;
ptr -= 5;
}
ptr += 9;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
++*ptr;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
while (*ptr) {
++ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr += 2;
++*ptr;
ptr -= 4;
}
++*ptr;
ptr += 9;
}
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 10;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
--ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 4;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
--*ptr;
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
++ptr;
++*ptr;
ptr -= 4;
}
++*ptr;
ptr += 9;
}
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
ptr += 2;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 11;
}
ptr += 2;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 2;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 4;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 36;
++*ptr;
ptr += 36;
}
ptr += 5;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
ptr -= 9;
--*ptr;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
ptr += 21;
++*ptr;
ptr -= 3;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
--*ptr;
ptr += 3;
}
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
++ptr;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 13;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
++ptr;
++*ptr;
--ptr;
}
}
++*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
--*ptr;
ptr += 4;
}
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
--ptr;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 12;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
ptr += 6;
while (*ptr) {
ptr += 9;
}
++ptr;
*ptr = 0;
++*ptr;
--ptr;
}
}
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 8;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr -= 7;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
ptr += 3;
--*ptr;
ptr -= 4;
}
ptr += 9;
*ptr += 40;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 2;
*ptr = 0;
ptr -= 2;
}
ptr += 2;
while (*ptr) {
ptr -= 7;
++*ptr;
--ptr;
while (*ptr) {
--*ptr;
--ptr;
++*ptr;
ptr += 4;
++*ptr;
ptr -= 2;
*ptr = 0;
}
++ptr;
while (*ptr) {
--*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
ptr += 3;
--*ptr;
ptr -= 4;
}
ptr += 3;
}
ptr += 13;
while (*ptr) {
ptr += 2;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 5;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
ptr += 6;
while (*ptr) {
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 3;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 9;
++*ptr;
ptr += 9;
}
ptr += 7;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
++*ptr;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
while (*ptr) {
++ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
--*ptr;
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
++ptr;
++*ptr;
ptr -= 3;
}
++*ptr;
ptr += 9;
}
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 10;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
--ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 3;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 6;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 4;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
--*ptr;
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr += 2;
++*ptr;
ptr -= 4;
}
++*ptr;
ptr += 9;
}
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 10;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
--ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 4;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 36;
++*ptr;
ptr += 36;
}
ptr += 5;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 36;
++*ptr;
ptr += 36;
}
ptr += 6;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
ptr -= 9;
--*ptr;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
while (*ptr) {
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 6;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 6;
*ptr = 0;
ptr += 3;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
--*ptr;
ptr -= 4;
++*ptr;
ptr += 5;
}
++ptr;
while (*ptr) {
--*ptr;
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
--ptr;
*ptr += 2;
ptr -= 4;
}
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
--ptr;
--*ptr;
++ptr;
++*ptr;
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 5;
}
ptr += 6;
*ptr = 0;
ptr -= 6;
++*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
--*ptr;
ptr += 4;
}
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
ptr += 5;
while (*ptr) {
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr += 2;
}
++*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
--*ptr;
++ptr;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 12;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
ptr += 6;
while (*ptr) {
ptr += 9;
}
++ptr;
++*ptr;
--ptr;
}
}
++*ptr;
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
--*ptr;
ptr += 3;
}
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
--ptr;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 11;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
++ptr;
*ptr = 0;
++*ptr;
--ptr;
}
}
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 8;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr += 5;
while (*ptr) {
++ptr;
++*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr += 8;
}
ptr -= 8;
++*ptr;
--ptr;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 11;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 11;
}
ptr -= 2;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 11;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
ptr -= 12;
}
ptr += 4;
*ptr = 0;
ptr -= 4;
}
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr += 6;
while (*ptr) {
++ptr;
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
--*ptr;
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 8;
++*ptr;
--ptr;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 10;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 4;
}
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 10;
}
--ptr;
}
ptr += 2;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 10;
}
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 4;
}
ptr -= 11;
}
ptr += 6;
++*ptr;
ptr -= 6;
}
}
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 11;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 11;
}
ptr -= 2;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 14;
++*ptr;
ptr += 11;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
ptr -= 12;
}
}
++ptr;
*ptr = 0;
ptr += 2;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 5;
while (*ptr) {
ptr += 2;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 6;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 3;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
++*ptr;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
while (*ptr) {
++ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
++ptr;
++*ptr;
ptr -= 3;
}
++*ptr;
ptr += 9;
}
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 10;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
--ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 3;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 36;
++*ptr;
ptr += 36;
}
ptr += 6;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 5;
*ptr = 0;
ptr += 4;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
ptr -= 9;
--*ptr;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
while (*ptr) {
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
--*ptr;
ptr += 3;
}
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
++ptr;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 13;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
++ptr;
++*ptr;
--ptr;
}
}
++*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
--*ptr;
ptr += 4;
}
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
--ptr;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 12;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
ptr += 6;
while (*ptr) {
ptr += 9;
}
++ptr;
*ptr = 0;
++*ptr;
--ptr;
}
}
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 8;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr += 6;
while (*ptr) {
++ptr;
++*ptr;
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
--*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
ptr += 8;
}
ptr -= 8;
++*ptr;
--ptr;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
--*ptr;
ptr -= 10;
++*ptr;
ptr += 12;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr -= 10;
++*ptr;
ptr += 12;
}
ptr -= 3;
}
ptr += 2;
while (*ptr) {
--*ptr;
--ptr;
++*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr -= 10;
++*ptr;
ptr += 12;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 13;
}
}
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr += 5;
while (*ptr) {
++ptr;
++*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr += 8;
}
ptr -= 8;
++*ptr;
--ptr;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr -= 10;
++*ptr;
ptr += 11;
while (*ptr) {
--*ptr;
--ptr;
++*ptr;
++ptr;
}
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
--ptr;
--*ptr;
ptr -= 10;
++*ptr;
ptr += 11;
}
ptr -= 2;
}
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
--*ptr;
ptr -= 10;
++*ptr;
ptr += 11;
}
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
--ptr;
++*ptr;
++ptr;
}
ptr -= 12;
}
ptr += 5;
++*ptr;
ptr -= 5;
}
ptr += 9;
while (*ptr) {
ptr += 3;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 4;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 5;
while (*ptr) {
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 6;
++*ptr;
ptr -= 4;
++*ptr;
ptr -= 2;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
--*ptr;
ptr -= 4;
++*ptr;
ptr += 5;
}
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
--ptr;
*ptr += 2;
ptr -= 4;
}
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
--ptr;
--*ptr;
++ptr;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 5;
}
++*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
--*ptr;
ptr += 4;
}
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
ptr += 5;
while (*ptr) {
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
--*ptr;
ptr += 3;
}
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
--ptr;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 11;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
++ptr;
++*ptr;
--ptr;
}
}
++*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr += 2;
}
++*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
--*ptr;
++ptr;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 12;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
ptr += 6;
while (*ptr) {
ptr += 9;
}
++ptr;
*ptr = 0;
++*ptr;
--ptr;
}
}
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 8;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr += 6;
while (*ptr) {
++ptr;
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
--*ptr;
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 8;
++*ptr;
--ptr;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 10;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 10;
}
--ptr;
}
ptr += 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 10;
}
++ptr;
}
--ptr;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
ptr -= 11;
}
ptr += 5;
*ptr = 0;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 2;
++*ptr;
ptr -= 5;
}
}
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr += 5;
while (*ptr) {
++ptr;
++*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
--*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr += 8;
}
ptr -= 8;
++*ptr;
--ptr;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 11;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 2;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 11;
}
ptr -= 2;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 11;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr -= 12;
}
}
ptr += 4;
*ptr = 0;
ptr -= 4;
}
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
++ptr;
*ptr = 0;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 2;
++*ptr;
ptr -= 5;
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 11;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 2;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 11;
}
ptr -= 2;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
--*ptr;
ptr -= 13;
++*ptr;
ptr += 11;
}
--ptr;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr -= 12;
}
}
ptr += 9;
while (*ptr) {
ptr += 2;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 6;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 5;
while (*ptr) {
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 3;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 6;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 3;
++*ptr;
ptr -= 2;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
++*ptr;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
while (*ptr) {
++ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
ptr -= 2;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr += 2;
++*ptr;
ptr -= 4;
}
++*ptr;
ptr += 9;
}
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 10;
}
++ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
--ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 4;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
++ptr;
--*ptr;
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
++ptr;
++*ptr;
ptr -= 4;
}
++*ptr;
ptr += 9;
}
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
ptr += 2;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 11;
}
ptr += 2;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr -= 2;
++*ptr;
ptr += 8;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 4;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 3;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 36;
++*ptr;
ptr += 36;
}
ptr += 5;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
*ptr += 15;
while (*ptr) {
while (*ptr) {
ptr += 9;
}
ptr -= 9;
--*ptr;
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
--*ptr;
}
++*ptr;
ptr += 21;
++*ptr;
ptr -= 3;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 3;
while (*ptr) {
--*ptr;
ptr -= 3;
--*ptr;
ptr += 3;
}
++*ptr;
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
--*ptr;
++ptr;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 13;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
++ptr;
++*ptr;
--ptr;
}
}
++*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
--*ptr;
ptr += 4;
}
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
--ptr;
while (*ptr) {
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
ptr -= 3;
while (*ptr) {
--*ptr;
ptr += 3;
++*ptr;
ptr -= 12;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
ptr += 6;
while (*ptr) {
ptr += 9;
}
++ptr;
*ptr = 0;
++*ptr;
--ptr;
}
}
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 8;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 2;
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 4;
++*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 2;
*ptr = 0;
ptr -= 2;
}
ptr += 2;
}
ptr -= 2;
++*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
--*ptr;
ptr += 4;
}
++*ptr;
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
--*ptr;
ptr -= 6;
putchar(*ptr);
ptr += 2;
}
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 7;
putchar(*ptr);
ptr += 7;
}
ptr -= 3;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 3;
while (*ptr) {
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
++ptr;
*ptr = 0;
ptr += 3;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 5;
*ptr = 0;
ptr += 4;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
++ptr;
*ptr += 12;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 4;
++*ptr;
ptr += 9;
++*ptr;
ptr -= 14;
while (*ptr) {
ptr -= 9;
}
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
*ptr = 0;
ptr += 2;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 6;
++*ptr;
ptr -= 7;
while (*ptr) {
ptr -= 9;
}
ptr += 7;
*ptr = 0;
++*ptr;
ptr += 3;
}
ptr -= 10;
}
}
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr += 2;
while (*ptr) {
++ptr;
++*ptr;
ptr += 4;
while (*ptr) {
--*ptr;
ptr -= 4;
--*ptr;
ptr += 4;
}
ptr -= 4;
while (*ptr) {
--*ptr;
ptr += 4;
++*ptr;
ptr -= 4;
}
ptr += 8;
}
ptr -= 2;
++*ptr;
ptr -= 7;
while (*ptr) {
ptr += 5;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr -= 14;
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 7;
}
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 6;
++*ptr;
ptr -= 6;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 7;
--*ptr;
ptr -= 4;
*ptr = 0;
++*ptr;
ptr -= 3;
}
++*ptr;
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 7;
--*ptr;
ptr += 7;
}
++*ptr;
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
--*ptr;
ptr += 2;
while (*ptr) {
ptr += 5;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr += 4;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 3;
++*ptr;
ptr += 3;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 7;
}
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 6;
++*ptr;
ptr -= 6;
}
--ptr;
++*ptr;
ptr -= 9;
}
++ptr;
*ptr += 5;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 4;
++*ptr;
ptr -= 5;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
--*ptr;
ptr += 5;
}
++*ptr;
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 16;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
++ptr;
++*ptr;
--ptr;
}
}
++*ptr;
ptr += 7;
while (*ptr) {
--*ptr;
ptr -= 7;
--*ptr;
ptr += 7;
}
++*ptr;
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
--*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
ptr -= 5;
++*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 14;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
ptr += 6;
while (*ptr) {
ptr += 9;
}
++ptr;
*ptr = 0;
++*ptr;
--ptr;
}
}
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 8;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
ptr -= 3;
*ptr += 5;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 4;
--*ptr;
ptr -= 5;
while (*ptr) {
ptr -= 9;
}
}
ptr += 3;
}
ptr -= 4;
putchar(*ptr);
ptr += 10;
while (*ptr) {
ptr += 6;
*ptr = 0;
ptr += 3;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
++ptr;
*ptr += 11;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 5;
++*ptr;
ptr += 9;
++*ptr;
ptr -= 15;
while (*ptr) {
ptr -= 9;
}
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 8;
++*ptr;
ptr += 8;
}
ptr -= 8;
while (*ptr) {
--*ptr;
ptr += 8;
++*ptr;
*ptr = 0;
++ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 7;
++*ptr;
ptr += 7;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 8;
while (*ptr) {
ptr -= 9;
}
ptr += 8;
*ptr = 0;
++*ptr;
ptr += 2;
}
ptr -= 10;
}
}
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 8;
++*ptr;
ptr += 8;
}
ptr -= 8;
while (*ptr) {
--*ptr;
ptr += 8;
++*ptr;
++ptr;
while (*ptr) {
++ptr;
++*ptr;
ptr += 5;
while (*ptr) {
--*ptr;
ptr -= 5;
--*ptr;
ptr += 5;
}
ptr -= 5;
while (*ptr) {
--*ptr;
ptr += 5;
++*ptr;
ptr -= 5;
}
ptr += 8;
}
--ptr;
++*ptr;
ptr -= 8;
while (*ptr) {
ptr += 6;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr -= 15;
}
ptr += 9;
while (*ptr) {
ptr += 9;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 8;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 7;
}
--ptr;
++*ptr;
ptr -= 9;
}
ptr += 8;
--*ptr;
ptr -= 5;
*ptr = 0;
++*ptr;
ptr -= 3;
}
++*ptr;
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 8;
--*ptr;
ptr += 8;
}
++*ptr;
ptr -= 8;
while (*ptr) {
--*ptr;
ptr += 8;
--*ptr;
++ptr;
while (*ptr) {
ptr += 6;
while (*ptr) {
--*ptr;
ptr += 2;
++*ptr;
ptr -= 2;
}
ptr += 3;
}
ptr -= 9;
while (*ptr) {
++ptr;
*ptr = 0;
--ptr;
--*ptr;
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 8;
++*ptr;
++ptr;
while (*ptr) {
--ptr;
--*ptr;
++ptr;
--*ptr;
ptr -= 2;
++*ptr;
ptr += 2;
}
--ptr;
while (*ptr) {
--*ptr;
++ptr;
++*ptr;
--ptr;
}
ptr += 8;
}
ptr -= 7;
while (*ptr) {
--*ptr;
ptr += 7;
++*ptr;
ptr -= 7;
}
--ptr;
++*ptr;
ptr -= 9;
}
++ptr;
*ptr += 5;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 5;
++*ptr;
ptr += 27;
++*ptr;
ptr -= 6;
while (*ptr) {
ptr -= 9;
}
ptr += 9;
while (*ptr) {
ptr += 6;
while (*ptr) {
--*ptr;
ptr -= 6;
--*ptr;
ptr += 6;
}
++*ptr;
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 6;
--*ptr;
ptr += 2;
while (*ptr) {
--*ptr;
ptr -= 8;
++*ptr;
ptr += 8;
}
ptr -= 8;
while (*ptr) {
--*ptr;
ptr += 8;
++*ptr;
ptr -= 17;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
++*ptr;
ptr += 5;
while (*ptr) {
ptr += 9;
}
++ptr;
++*ptr;
--ptr;
}
}
++*ptr;
ptr += 8;
while (*ptr) {
--*ptr;
ptr -= 8;
--*ptr;
ptr += 8;
}
++*ptr;
ptr -= 8;
while (*ptr) {
--*ptr;
ptr += 8;
--*ptr;
ptr -= 2;
while (*ptr) {
--*ptr;
ptr -= 6;
++*ptr;
ptr += 6;
}
ptr -= 6;
while (*ptr) {
--*ptr;
ptr += 6;
++*ptr;
ptr -= 15;
while (*ptr) {
ptr -= 9;
}
ptr += 3;
*ptr = 0;
++*ptr;
ptr += 6;
while (*ptr) {
ptr += 9;
}
++ptr;
*ptr = 0;
++*ptr;
--ptr;
}
}
++*ptr;
++ptr;
while (*ptr) {
--*ptr;
--ptr;
while (*ptr) {
ptr += 9;
}
ptr -= 8;
}
ptr += 8;
}
ptr -= 9;
while (*ptr) {
ptr -= 9;
}
ptr += 4;
*ptr = 0;
ptr -= 3;
*ptr += 5;
while (*ptr) {
--*ptr;
while (*ptr) {
--*ptr;
ptr += 9;
++*ptr;
ptr -= 9;
}
ptr += 9;
}
ptr += 5;
--*ptr;
ptr += 27;
--*ptr;
ptr -= 6;
while (*ptr) {
ptr -= 9;
}
}
ptr += 3;
}
return 0;}
