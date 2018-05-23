#include<bits/stdc++.h>
using namespace std;
string firstLetterWord(string str)
{
    string result = "";
    bool r = true;
    for (int i=0; i<str.length(); i++)
    {
        if (str[i] == ' ')
         r = true;
 
       else if (str[i] != ' ' && r== true)
        {
           result.push_back(str[i]);
            r = false;
        }
    }
    return result;
}
int main()
{
    string str = "fun start";
    cout << firstLetterWord(str);
    return 0;
}
