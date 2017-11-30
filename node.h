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

node::node(std::string key)
{
  this->key = key;
  left = NULL;
  right = NULL;
  data = 0;
}

#endif