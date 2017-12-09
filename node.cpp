#include "node.h"

node::node(std::string key)
{
  this->key = key;
  left = NULL;
  right = NULL;
  data = 0;
}