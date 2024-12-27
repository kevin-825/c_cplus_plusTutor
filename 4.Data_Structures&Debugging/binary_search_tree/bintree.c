#include <stddef.h>
#include "bintree.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;
//with the constraint that the left node’s ID is less than the parent node’s ID, 
// and the right node’s ID is larger than the parent node ID. 
//No two nodes will have the same identifier. A node can have less than two children; 
// in that case, one or more of its child pointers can be NULL.

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
    node *new_node = (node *)malloc(sizeof(node));
    assert(new_node != NULL);
    new_node->id = node_id;
    new_node->payload = data;
    new_node->left = NULL;
    new_node->right = NULL;
    if (root == NULL)
    {
        root = new_node;
        return;
    } else {
        node *partn;
        for (partn = root;;){

            if (node_id > partn->id){
                if(partn->right == NULL){
                    partn->right = new_node;
                    return;
                }
                partn = partn->right;
            } else {
                if(partn->left == NULL){
                    partn->left = new_node;
                    return;
                }
                partn = partn->left;
            }
        }
    }
}

// Find the node with node_id, and return its data
int find_node_data(int node_id) {
    node *partn;
    for (partn = root;;){
        if (node_id == partn->id){
            return partn->payload;
        }
        if (node_id > partn->id){
            partn = partn->right;
        } else {
            partn = partn->left;
        }
    }
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id. 
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	
}
*/
// In-order traversal function to print the tree nodes 
void printInOrder(node* root) {
     if (root != NULL) { 
        printInOrder(root->left);// Visit left subtree 
        printf("Node ID: %d, Payload: %d\n", root->id, root->payload); // Visit root 
        printInOrder(root->right); // Visit right subtree 
    }
}
