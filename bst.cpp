#include "bst.h"
#include <iostream>

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
	  {
	    temp->right = insert;
	    break;
	  }
	temp = temp-> right;
      }
      else if(insert-> key < temp-> key){
	// if the node to the left is empty, stop looping. Otherwise continue on
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

void bst::print()
{
    
}

void bst::min()
{
  node* temp;
  temp = root;
  
  if(root != NULL){
    while(temp->left != NULL){
      temp = temp->left;
    }
    cout << "Minimum: " << temp->key << endl;
  }
}

void bst::max()
{
  node* temp;
  temp = root;
  
  if(root != NULL){
    while(temp->right != NULL){
      temp = temp->right;
    }
    cout << "Maximum: " << temp->key << endl;
  }
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
