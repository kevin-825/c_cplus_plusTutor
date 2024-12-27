gcc -Wall -std=c99 -g user.c bintree.c -o bintree
echo mem checking ...
valgrind --tool=memcheck ./bintree
echo mem checking done.
#gdb ./bintree
./bintree