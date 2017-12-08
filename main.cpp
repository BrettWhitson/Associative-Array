#include <iostream>
#include "node.h"
#include "bst.h"

using namespace std;

int main()
{
  cout << "Working as Intended!" << endl;
  bst test;
  node* tNode = new node("testKey");
  tNode->data = 17;
  test.insert(tNode);
  
  return 0;
}