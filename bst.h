#ifndef BST_H
#define BST_H
#include "Node.h"

class bst
{
 private:
  Node* root;
  
 public:
  bst();
  ~bst();
  void insert(Node *insert);
  int find(std::string search);
  void print(Node* root);
  void min();
  void max();
  void save_file(std::string filename);
  void remove(std::string remove);
  void operator[](int rhs);
};

#endif