#include "bst.h"
#include "node.h"
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
  // if at least one Node
  else if(root != NULL){
    // temporary search Node starting at root
    node* temp = root;
    // while both left and right aren't empty, loop
    while(temp && temp->key != insert->key){
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
	// if the node to the left is empty, stop looping. Otherwise continue on
	if(temp->left == NULL){
	  temp->left = insert;
	  break;
	}
	temp = temp-> left;
      }
    }// end while
    if(temp->key == insert->key)
      temp->data++;
    temp = NULL;
  }
}

void bst::find(std::string key)
{
  find_key(root, key);
}

void bst::find_key(node* search, std::string key)
{
  if(!search)
    return;
  find_key(search->left, key);
  if(search->key == key)
    std::cout << search->key << ": " << search->data << std::endl;
  find_key(search->right, key);
}

void bst::print()
{
  print_inorder(root);
}
void bst::print_inorder(node* ptr)
{
  if(!ptr){
    return;
  }
  print_inorder(ptr->left);
  std::cout << ptr->key << ": " << ptr->data << std::endl;
  print_inorder(ptr->right);
}

void bst::min()
{
  node* temp;
  temp = root;
  
  if(root != NULL){
    while(temp->left != NULL){
      temp = temp->left;
    }
    std::cout << "Minimum: " << temp->key << std::endl;
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
    std::cout << "Maximum: " << temp->key << std::endl;
  }
}

void bst::save_file(std::string filename)
{
  
}

void bst::remove(std::string remove)
{
  
}

int& bst::operator[](std::string rhs)
{
  int x = -1;
  // if tree is empty
  if(root == NULL)
    return x;
  
  // if root is rhs
  else if(root->key == rhs)
    return root->data;

  // traverse
  else{
    node* temp = root;
    while(temp && temp->key != rhs){
      if(rhs > temp->key){
	temp = temp->right;
      }
      else if(rhs < temp->key){
	temp = temp->left;
      }
    }// end while
    if(!temp)
      return x;
    return temp->data;
  }
}