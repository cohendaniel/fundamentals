#pragma once

#include "node.h"

class BST {
  public:
    TreeNode* root;
    int height;
 
    BST(int root_data);
    
    void set_height(int h) {height = h;}
    int get_height() {return height;}

    void bst_insert(TreeNode* node, int key);
    TreeNode* bst_search(int val);
    void bst_delete(int val);
    void bst_print(TreeNode* node);
    int bst_min(TreeNode* node);
    int bst_find(TreeNode* node, int key);
};

void generate_bst(BST* bst, int num_nodes);

