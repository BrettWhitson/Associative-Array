#ifndef BST_H
#define BST_H
#include "node.h"
#include <string>

class bst
{
 private:
  
 public:
  bst();
  ~bst();
  void insert(node *insert);
  int find(std::string search);
  void print();
  void min();
  void max();
  void save_file(std::string filename);
  void remove();
  void operator[](int rhs);
};

#endif