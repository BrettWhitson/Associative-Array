#include <iostream>
#include "node.h"
#include "bst.h"
#include <fstream>

using namespace std;



int main()
{
  cout << "Working as Intended!" << endl;
  bst testTree;
  
  ifstream infile;
  infile.open("sherlock.txt");
  string x;
  do
    {
      infile >> x;
      testTree.insert(new node(x));
      
    } while(infile);

  testTree.print();

  testTree.find("the");
  int y = testTree["the"];
  cout << y << endl;
  testTree["the"]++;
  cout << testTree["the"] << endl;
  
  return 0;
}