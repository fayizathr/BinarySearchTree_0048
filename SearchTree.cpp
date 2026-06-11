#include <iostream>
#include <string>
using namespace std;



int main()
{
    BinaryTree obj;

    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. implement insert operation" << endl;
        cout << "2. perform inorder traversal" << endl;
        cout << "3. perform preorder traversal" << endl;
        cout << "4. perform postorder traversal" << endl;
        cout << "5. exit" << endl;
        cout << "\nEnter your choice (1-5): ";

        char ch;
        cin >> ch;

        cout << endl;

        switch (ch)
       