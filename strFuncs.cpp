#include "strFuncs.h"
#include <cctype>

using namespace std;


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *
 * Palindromes are NOT case-sensitive - "RaCecaR" is a valid palindrome
 *
 *You should provide a recursive solution*/
bool isPalindrome(const string s1, int start = 0, int end = -1){
    //STUB: Replace the following with the correct code.
    if (end == -1) {
        end = s1.length() - 1;
    }
    if (start >= end) {
        return true;
    }
    if (tolower(s1[start])!=tolower(s1[end])){
    return false;
    }
    return isPalindrome(s1, start + 1, end - 1);
}
