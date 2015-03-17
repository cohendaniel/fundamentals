#pragma once

#include <iostream>

class TreeNode {
  public:
    int data;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int d) : data(d), right(NULL), left(NULL){};
    int get_data() {return data;}
};
