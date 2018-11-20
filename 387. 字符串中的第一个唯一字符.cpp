class Solution {
public:
    int firstUniqChar(string s) {
        int HashTable[256]={0};
        for(int i=0;i<s.size();++i)
        {

            HashTable[s[i]]++;
            
        }
        for(int j=0;j<s.size();++j)
        {

            if(HashTable[s[j]]==1)
                return j;
        }
        return -1;
        
    }
};