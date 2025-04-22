#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2)
{
    // Check if lengths are different
    if (str1.length() != str2.length())
    {
        cout << "Invalid Anagrams" << endl;
        return false;
    }

    int count[26] = {0};

    // Count frequency of characters in str1
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++;
    }

    // Subtract frequency of characters in str2
    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i] - 'a'] == 0) // If a character in str2 does not match
        {
            cout << "Invalid Anagrams" << endl;
            return false;
        }
        count[str2[i] - 'a']--;
    }

    cout << "Valid Anagram" << endl;
    return true;
}

int main()
{
    string str1 = "anagam";
    string str2 = "nagaram";

    isAnagram(str1, str2);

    return 0;
}
