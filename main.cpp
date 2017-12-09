#include <iostream>
#include "node.h"
#include "bst.h"

using namespace std;

int main()
{
  cout << "Working as Intended!" << endl;
  bst test;
  node* testNode = new node("TestKey");
  test.insert(testNode);

  
  return 0;
}