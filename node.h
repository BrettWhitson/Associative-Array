#ifndef NODE_H
#define NODE_H
#include <string>

class node
{
 private:
  
  node *left, *right;
  std::string key;
  int data;

 public:

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