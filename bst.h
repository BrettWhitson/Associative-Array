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
  void print(node* root);
  void min();
  void max();
  void save_file(std::string filename);
  void remove(std::string remove);
  void operator[](int rhs);
};

#endif