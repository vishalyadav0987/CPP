#include <bits/stdc++.h>
using namespace std;

enum CharacterType
{
    INVALID,
    CONSONANT,
    VOWEL
};
class vowelCheck
{
public:
    CharacterType check(string son)
    {
        string str = "aieouAIEOU";
        int sie = str.length();
        for (int i = 0; i < sie; i++)
        {

            if (!isalpha(son[0]))
            {
                return INVALID;
            }
            else if (son[0] == str[i])
            {
                return VOWEL;
            }
        }
        return CONSONANT;
    }
};
int main()
{
    string s;
    cin >> s;
    vowelCheck s1;
    // CharacterType result = INVALID;
    if (s1.check(s) == INVALID)
    {
        cout << "invalid";
    }
    else if (s1.check(s) == VOWEL)
    {
        cout << "vowel";
    }
    else
    {
        cout << "consonants";
    }
}