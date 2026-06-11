#include <iostream>
#include <string>
using namespace std;

    //this function searches the current node of the specified node
    //as well as the current node of its parrent
    void search(string element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = NULL;

        while((currentNode != NULL) &&
             (currentNode->info != element))
             {
                parent = currentNode;

                if (element < currentNode->info)
                    currentNode = currentNode->leftchild;
                else
                    currentNode = currentNode->rightchild;
         }
    }

    