class Solution {
public:
    bool isPalindrome(int x) {
        
        /*˼·��  1.���x��һ��������ֱ�ӷ���
                 2.���򣬰����ֵ�ÿһλ������ַ��������棬��Ϊ�ǻ������֣����Դ�ͷ�ʹ�β������������ԣ���һ����ͬ���ǣ�����false
                 ֱ��ѭ��������˵���ǻ�����
                 */
        
        
        if(x<0)     //�����һ������ ֱ�ӷ���false
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