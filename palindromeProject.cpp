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
bool isPalindrome;
char str[80];
char str2[80];

cout << "input your string, max of 80 characters. \n";
cin.get(str, 80);
 int length = strlen(str); //get length
 int x = 0; //initialize variable that im gonna use to target parts of str2
 for(int i = length - 1; i >= 0; i--)
   {
     if(!ispunct(str[i]) && !isspace(str[i])) //from https://cplusplus.com/reference/cctype/ispunct/ and https://cplusplus.com/reference/cctype/isspace/
       {
       str2[x] = str[i]; //loop is filling str2 backwards with a lowercase of whatever str[i] is only if it meets the condition that str[i] is NOT a space or a punctuation mark
       }
     x++;
   }
 if(strcmp(str, str2) == 0) //function to compare cstrings and returns a value on what the result was
   {
     isPalindrome = true;
     cout << "Palindrome";
   } else {
   cout << "not a palindrome";
 }

}



