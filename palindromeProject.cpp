#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

/*-
ghazi abbas cpp shs sem1 galbraith
program should be able to determine whether or not an inputed string is a palindrome
this is accomplished by comparing arrays with cstring functions

Sources:
https://cplusplus.com/doc/tutorial/ntcs/
https://cplusplus.com/reference/cstring/
https://cplusplus.com/reference/cctype/
*/



int main()
{

    char str[80];
    char str2[80];
    char str3[80];

    cout << "input your string, max of 80 characters. \n";
    cin.get(str, 80);
    int length = strlen(str);

    // Fill str3 with alphanumeric characters from str (forward)
    int x = 0;
    for (int j = 0; j < length; j++) {
        if (isalnum(str[j])) {
            str3[x++] = tolower(str[j]);
        }
    }
    str3[x] = '\0';

    // Fill str2 with alphanumeric characters from str (backward)
    int y = 0;
    for (int i = length - 1; i >= 0; i--) {
        if (isalnum(str[i])) {
            str2[y] = tolower(str[i]);
            y++;
        }
    }
    str2[y] = '\0';

    cout << "Original cstring: " << str << endl;
    cout << "c string forward: " << str3 << endl;
    cout << " cstring backward: " << str2 << endl;

    // Check if str3 and str2 are the sam
    if (strcmp(str3, str2) == 0) {
        cout << "palindrome.";
    } else {
        cout << "not a palindrome.";
    }
}




