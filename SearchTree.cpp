#include <iostream>
#include <string>
using namespace std;


    void preorder(Node *ptr)
    {
        if (ROOT == NULL)
        {
            cout <<"Tree is empty" <<  endl;
            return;
        }

        if (ptr != NULL)
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }

  