# Discrete_Math_Programming
Programming for Discrete Math Concepts

## PA1 Logical_Operator 

Prompt the user to enter two truth values, x and y.

Assume the user will enter T or F.

The program displays the following and will end.
¬x                (use the ~ character)
x v y            (use the v character)
x ^ y
x → y           (use the - - > characters)

Run your program 4 times, with the following user input

T, T
T, F
F, T
F, F

![A1_FT](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA1_Logical_Operator/A1_FT.png)

## PA2 Sets Bitwise Operation
Use the bit string representa!on of sets to perform union, intersec!on, and complement operations.
Assume that the universal set U = {a, b, c, d, e, f, g, h}.
The program will prompt the user to enter two subsets of U. For example, if A = {a, b, c}, the user will enter 11100000.
If B = {c, d, e}, the user will enter 00111000.
Execution example:
Enter the bit string representa!on of A: 11100000 
Enter the bit string representa!on of B: 00111000
A union B = 11111000 
A intersect B = 00100000 
The complement of A = 00011111

![PA2_Sets_Bitwise_Operation_code2.png](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA2_Sets_Bitwise_Operation/PA2_Sets_Bitwise_Operation_code2.png)

![PA2_Sets_Bitwise_Operation_execution1.png](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA2_Sets_Bitwise_Operation/PA2_Sets_Bitwise_Operation_execution1.png)

## PA3 Binary Search
1. Prompt the user to enter the number they want to search.
2. Perform a binary search and print the subscript/index/loca!on of the integer if found, and print 0 if not found.
3. Store the data in a[1] to a[n].

```
import math
def binary_search(list, search):
    print(f'The list you entered is: \t\t {list}')
    print(f'The number you want to search is: \t {search}')
    i = 0
    j = 9 
    while i < j:
        m = math.floor((i + j) / 2)
        if search > list[m]:
            i = m + 1
        else:
            j = m
    if search == list[i]:  
        print(f"The index of the number: {i + 1}")
        return i + 1
    else:
        print(f'The searching nubmer is not in the list')
        return 0
```
![Binary search source code.png](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA3_Binary_Search/Binary%20search%20source%20code.png)


## PA4 Binary Tree Insertion and InOrderTraversal
1. Implement the Insertion procedure of Binary Search Trees Algorithm 
  - Locating an Item in or Adding an Item to a Binary Search Tree

    -  The treenode structure 
    ```
    struct tnode {
        char *word;
        struct tnode *left;
        struct tnode *right;
    };
    ```

    - Kernighan/Ritchie's addtree() function
    ```
    struct treenode *addtree(struct tnode *p, char *w)
    {
    if (p == NULL) {
        p = talloc();
        p->word = strdup(w);           /* make a new node */
        p->left = p->right = NULL;
    }
    else if (strcmp(w, p->word < 0)){   /* less than. into left subtree */
        p->left = addtree(p->left, w);
        } 
    else if (strcmp(w, p->word > 0)){    /* greater than. into right subtree */
        p->right = addtree(p->right, w);
        } 
    return p; 
    }
    ```
2. Implement Inorder Traversal Algorithm
   - Kernighan/Ritchie's treeprint() function 
   ```
   void treeprint(struct tnode *p)
   {
       if (p != NULL) {
           treeprint(p->left);
           printf(p->word);
           treeprint(p->right);
        } 
    }
   ```
![PA4_BinnaryTree_Code_integer.png](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA4_Binary_Search_Tree/PA4_BinnaryTree_Code_integer.png)
![PA4_BinnaryTree_SampleRun_integer.png](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA4_Binary_Search_Tree/PA4_BinnaryTree_SampleRun_integer.png)
![PA4_BinnaryTree_Code_string.png](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA4_Binary_Search_Tree/PA4_BinnaryTree_Code_string.png)
![PA4_BinnaryTree_SampleRun_string.png](https://github.com/CelineWW/Discrete_Math_Programming/blob/main/PA4_Binary_Search_Tree/PA4_BinnaryTree_SampleRun_string.png)