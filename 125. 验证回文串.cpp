class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int count=0,j=0;
        for(i=0;i<s.size();i++)
        {
            count=0;
          for(j=i;j<s.size();j++)
            {
                
                if(!((s[j]<='9'&&s[j]>='0')||(s[j]<='Z'&&s[j]>='A')||(s[j]<='z'&&s[j]>='a')))
              count++;
                else break;

            }
            s.erase(i,count); 
        }
         for(i=0;i<s.size();i++)
        {
 
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=32;
        }        
       
        cout<<s;
        for(int j=0;j<s.size()/2;++j)
        {

            if(s[j]!=s[s.size()-1-j])
                return false;
        }
        return true;
    }
};