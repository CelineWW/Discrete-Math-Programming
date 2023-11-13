//
//  main.cpp
//  PA4_Binary_Search_Tree
//
//  Created by Celine Wang on 11/9/23.

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// Node structure for the binary search tree
struct Tnode {
    int number;
    Tnode* left;
    Tnode* right;

    Tnode(int value) : number(value), left(NULL), right(NULL) {}
};

// Function to insert a value into the binary search tree
Tnode* addtree(Tnode *p, int value) {
    // If the tree is empty, create a new node and return it as the root
    if (p == NULL) {
        return new Tnode(value);
    }

    // Otherwise(p != NULL), recursively insert the value in the left or right subtree
    if (value < p->number) {
        p->left = addtree(p->left, value);
    }
    else if (value > p->number) {
        p->right = addtree(p->right, value);
    }
    return p;
}

// Function to perform inorder traversal of the binary search tree
void treeprint(Tnode* p) {
    if (p != NULL) {
        treeprint(p->left);
        cout << p->number << " ";
        treeprint(p->right);
    }
}

int main() {
    char choice = 'y';
    while (tolower(choice == 'y')){
        // Create an empty binary search tree
        Tnode* p = NULL;
        
        // Insert some values into the tree
        cout << "Enter tree node values sepearted by space: ";
        string input;
        getline(cin, input);
        istringstream iss(input);
        int value;
        
        while (iss >> value){
            p = addtree(p, value);
        }
        
        // Perform inorder traversal and print the elements
        cout << "Inorder Traversal: ";
        treeprint(p);
        cout << endl;
        
        // Prompt user to run again
        cout << "Run again (y/n)? ";
        cin >> choice;
        cin.ignore();
    }
    
    cout << "Bye!" << endl;
    return 0;
}
