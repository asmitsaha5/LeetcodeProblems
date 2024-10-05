class Solution
{
public:
    bool isValid(string s)
    {
        if (s.empty())
            return true;
        std::stack<char> mystack{};

        for (const auto &element : s)
        {
            if (element == '(' or element == '[' or element == '{')
                mystack.push(element);
            else if (element == ')')
            {
                if (mystack.empty())
                    return false;
                else if (mystack.top() != '(')
                    return false;
                else
                    mystack.pop();
            }
            else if (element == '}')
            {
                if (mystack.empty())
                    return false;
                else if (mystack.top() != '{')
                    return false;
                else
                    mystack.pop();
            }
            else if (element == ']')
            {
                if (mystack.empty())
                    return false;
                else if (mystack.top() != '[')
                    return false;
                else
                    mystack.pop();
            }
        }

        if (mystack.empty())
            return true;
        else
            return false;

        return true;
    }
};