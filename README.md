linked-list-c
========


### This is an example of how to create a linked list in C 


A linked list or linked list is a linear and dynamic data structure. It consists of 
cells that point to the next element in the list.To "have" a linked / linked list, 
just save its first element, and its last element points to a null cell. 
[ Wikipedia ](https://pt.wikipedia.org/wiki/Lista_ligada)

Using:
  * Initially we will create we will include in file main.c ```#include "list.h" ```,  then create an empty list called the init function.
  
  ```c
  #include <stdio.h>
  #include <stdlib.h>
  #include "list.h"
  
  int main() {
  
    List* names = init();
    return 0;
    
  }
  ```
  * With the list created Invoke the add method, passing your list and two integer values and finally invode toString to print the values.
  
   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include "list.h"
   
   int main() {
  
      List* names = init();
      add(&quart, i, i* 2);
    
      toString(quart);
      return 0;
   }
   ```
