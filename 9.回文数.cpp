class Solution {
public:
    bool isPalindrome(int x) {
        
        /*思路：  1.如果x是一个负数，直接返回
                 2.否则，把数字的每一位存放在字符数组里面，因为是回文数字，所以从头和从尾部便遍历都可以，有一个不同则不是，返回false
                 直到循环跳出，说明是回文数
                 */
        
        
        if(x<0)     //如果是一个负数 直接返回false
            return false;
        char a[32];
        int i=0;
        while(x)
        {

            a[i]=x%10;
            x/=10;
            i++;
        }
        for(int j=0;j<i;j++)
        {

            if(a[j]!=a[i-j-1])
                return false;
            
            
        }
        return true;
        
        
    }
};