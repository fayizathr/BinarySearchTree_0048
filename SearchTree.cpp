#include <iostream>
#include <string>
using namespace std;

{
    void postorder(Node *ptr)
    {
        // perfoms the postorder traveersal of the tree

        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }

        if (ptr != NULL)
        {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    }
};

