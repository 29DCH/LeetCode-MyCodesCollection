class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                stack.push(s[i]);
            else
            {
                if(stack.size()==0)
                    return false;
                char c = stack.top();
                stack.pop();
                char match;
                switch(s[i])
                {
                case ')':
                    match = '(';
                    break;
                case ']':
                    match='[';
                    break;
                case '}':
                        match='{';
                    break;
                }
                if(c!=match)
                    return false;
            }
        }
        if(stack.size()!=0)
            return false;
        return true;
    }
};

/**
#include<iostream>
#include<string>
#include<stack>
typedef long long LL;
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                stack.push(s[i]);
            else
            {
                if(stack.size()==0)
                    return false;
                char c = stack.top();
                stack.pop();
                char match;
                switch(s[i])
                {
                case ')':
                    match = '(';
                    break;
                case ']':
                    match='[';
                    break;
                case '}':
                        match='{';
                    break;
                }
                if(c!=match)
                    return false;
            }
        }
        if(stack.size()!=0)
            return false;
        return true;
    }
};
int main()
{
    string str;
    while(cin>>str)
    {
    if(Solution().isValid(str))
       cout<<"合法字符串！"<<endl;
    else
       cout<<"非法字符串！"<<endl;
    }
    return 0;
}
*/
