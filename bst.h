#ifndef BST_H
#define BST_H
#include "node.h"

class bst
{
 private:
  node* root;
  
 public:
  bst();
  ~bst();
  void insert(node *insert);
  int find(std::string search);
  void print();
  void print_inorder(node* root);
  void min();
  void max();
  void save_file(std::string filename);
  void remove(std::string remove);
  int operator[](std::string rhs);
  node* getRoot();
};

#endif