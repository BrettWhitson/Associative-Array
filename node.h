#ifndef NODE_H
#define NODE_H
#include <string>

class node
{
 public:
  std::string key;
  int data;
  node *left, *right;
  node(std::string key);
};

#endif