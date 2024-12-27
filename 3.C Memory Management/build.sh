gcc -Wall -std=c99 main.c -o main
echo mem checking ...
#valgrind --tool=memcheck ./main
echo mem checking done.
./main