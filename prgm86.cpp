
#include &lt;bits/stdc++.h&gt;
using namespace std;
string is_isogram(string str)
{
    int len = str.length();
    for (int a = 0; a &lt; len; a++)
        str[a] = tolower(str[a]);
    sort(str.begin(), str.end());
    for (int a = 0; a &lt; len; a++) {
        if (str[a] == str[a + 1])
            return &quot;False&quot;;
    }
    return &quot;True&quot;;
}
int main()
{
    string str1 = &quot;Machine&quot;;
    cout &lt;&lt; is_isogram(str1) &lt;&lt; endl;
    
    string str2 = &quot;isogram&quot;;
    cout &lt;&lt; is_isogram(str2) &lt;&lt; endl;
 
    string str3 = &quot;GeeksforGeeks&quot;;
    cout &lt;&lt; is_isogram(str3) &lt;&lt; endl;
 
    string str4 = &quot;Alphabet&quot;;
    cout &lt;&lt; is_isogram(str4) &lt;&lt; endl;
 
    return 0;
}
