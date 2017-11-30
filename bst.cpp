#include "bst.h"

bst::bst()
{
  root = NULL;
}

bst::~bst()
{
  
}

void bst::insert(node* insert)
{
  // if tree is empty
  if(root == NULL){
    root = insert;
  }
  // if at least one node
  else if(root != NULL){
    // temporary search node starting at root
    node* temp = root;
    // while both left and right aren't empty, loop
    while(temp->left != NULL && temp->right != NULL){
      if(insert-> key > temp-> key){
	// if the node to the right is empty, stop looping. Otherwise continue on
	if(temp->right == NULL)
	  break;
	temp = temp-> right;
      }
      else if(insert-> key < temp-> key){
	// if the node to the left is empty, stop looping. Otherwise continue on
	if(temp->left == NULL)
	  break;
	temp = temp-> left;
      }
    }// end while
    
  }
}

int bst::find(std::string search)
{
  
}

void bst::print()
{
    
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