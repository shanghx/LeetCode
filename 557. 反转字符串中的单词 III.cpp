class Solution
{
    public:
        string reverseWords(string s)
        {
            string result;
            string tmp;

            for(auto c:s)
            {
                if(c!=' ')
                {
                    tmp += c;
                }
                else
                {
                    reverse(tmp.begin(),tmp.end());
                    result.append(tmp);
                    result += ' ';
                    tmp.clear();
                }
            }
            reverse(tmp.begin(),tmp.end());
            result.append(tmp);
            return result;
        }
};
