#include "bst.h"
#include <iostream>

bst::bst()
{
  root = NULL;
}

bst::~bst()
{
  
}

void bst::insert(Node* insert)
{
  // if tree is empty
  if(root == NULL){
    root = insert;
  }
  // if at least one Node
  else if(root != NULL){
    // temporary search Node starting at root
    Node* temp = root;
    // while both left and right aren't empty, loop
    while(temp->left != NULL && temp->right != NULL){
      if(insert-> key > temp-> key){
	// if the Node to the right is empty, stop looping. Otherwise continue on
	if(temp->right == NULL)
	  {
	    temp->right = insert;
	    break;
	  }
	temp = temp-> right;
      }
      else if(insert-> key < temp-> key){
	// if the Node to the left is empty, stop looping. Otherwise continue on
	if(temp->left == NULL){
	  temp->left = insert;
	  break;
	}
	temp = temp-> left;
      }
    }// end while
    temp = NULL;
  }
}

int bst::find(std::string search)
{
  
}

void bst::print(Node* _Node)
{
  if(!root)
    return;
  print(_Node->left);
    std::cout << _Node->key << ": " << _Node->data << std::endl;
  print(_Node->right);
}

void bst::min()
{
  
}

void bst::max()
{
  
}

void bst::save_file(std::string filename)
{
  
}

void bst::remove(std::string remove)
{
  
}

void bst::operator[](int rhs)
{
  
}