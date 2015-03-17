#include "bst.h"
#include <stdlib.h>
#include <time.h>

BST::BST(int root_data) : root(new TreeNode(root_data)) {
    BST::set_height(1);
};

void BST::bst_insert(TreeNode* node, int key) {
    if (key <= node->data) {
        if (node->left == NULL) {
            node->left = new TreeNode(key);
        }
        else {
            bst_insert(node->left, key);
        }
    }
    else {
        if (node->right == NULL) {
            node->right = new TreeNode(key);
        }
        else {
            bst_insert(node->right, key);
        }
    }
}

int BST::bst_find(TreeNode* node, int key) {
    if (key == node->data) {
        return 1;
    } 
    if (key < node->data) {
        if (node->left == NULL) {
            return 0;
        }
        else {
            bst_find(node->left, key);
        }
    }
    else {
        if (node->right == NULL) {
            return 0;
        }
        else {
            bst_find(node->right, key);
        }
    }
}

void BST::bst_print(TreeNode* node) {
    if (node) {
        bst_print(node->left);
        std::cout << node->data << std::endl;
        bst_print(node->right);
    }
}

int BST::bst_min(TreeNode* node) {
    int min_val = -1;
    while (node) {
        min_val = node->data;
        node = node->left;
    }
    return min_val;

}

void generate_bst(BST* bst, int num_nodes) {
    for (int i = 0; i < num_nodes; i++) {
        bst->bst_insert(bst->root, rand() % (num_nodes*2));
    }
}


int main() {
srand(time(NULL));

BST bst(10);
generate_bst(&bst, 20);
bst.bst_print(bst.root);
std::cout << "The min is: " << bst.bst_min(bst.root) << std::endl;
int num = 20;
std::cout << "Number " << num << " found? " << bst.bst_find(bst.root, 20) << std::endl;

}
