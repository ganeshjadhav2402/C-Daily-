#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"Sentence: ";
    cin>>s;

    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0; i<s.size(); i++)
    {
        // lower a, e, i, o, u
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            lower[s[i]-'a']++;
            s[i]='#';
        }

        // upper A, E, I, O, U
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }

    string vowel;
    // upper
    for(int i=0; i<26; i++)
    {
        char c = 'A'+i;
        while(upper[i])
        {
            vowel+=c;
            upper[i]--;
        }
    }

    //lower
    for(int i=0; i<26; i++)
    {
        char c = 'A'+i;
        while(lower[i])
        {
            vowel+=c;
            lower[i]--;
        }
    }

    int first=0, second=0; // seconf point kar rha he vowel

    while(second<vowel.size())
    {
        if(s[first]=='#')
        {
            s[first]=vowel[second];
            second++;
        }

        first++;
    }

    return s;

}