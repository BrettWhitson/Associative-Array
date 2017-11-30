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