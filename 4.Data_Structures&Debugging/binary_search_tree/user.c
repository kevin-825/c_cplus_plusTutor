#include <stdio.h>
#include "bintree.h"

int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/
    insert_node(10, 1010);
    insert_node(15, 1015);
    insert_node(8, 1008);
    insert_node(11, 1011);
    insert_node(12, 1012);
    insert_node(9, 1009);
    insert_node(7, 1007);
    insert_node(1, 1001);
    insert_node(2, 1002);
    insert_node(20, 1020);
    extern node *root;
    printInOrder(root);
    int node_id = 10;
    int node_data = find_node_data(node_id);
    printf("find id:%d finded_val:%d \n",node_id, node_data);
    return 0;
}
