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
  void find(std::string key);
  void find_key(node* search, std::string key);
  void print();
  void print_inorder(node* ptr);
  void min();
  void max();
  void save_file(std::string filename);
  void remove(std::string remove);
  int& operator[](std::string rhs);
};

#endif