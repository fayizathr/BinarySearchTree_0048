#include <iostream>
#include <string>
using namespace std;

        case '1':
        {
            cout << "Enter a word: ";
            string word;
            cin >> word;
            obj.insert(word);
            break;
        }

        case '2':
        {
            obj.inorder(obj.ROOT);
            break;
        }

       