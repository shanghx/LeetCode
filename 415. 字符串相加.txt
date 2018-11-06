class Solution {
public:
	string addStrings(string num1, string num2) {
          //思路：1.现将两个字符串反转，之后相加就是按照从左往右的方式
        //     2.反转后的字符串，长的字符串补一个字符‘0’，短的字符串一直补字符‘0’，直到和长的字符串长度相等
        //     3.设置进位flag，开始相加，直到循环退出，相加后的结果保存在另外一个字符串中
         //    4.循环退出后，最后一个字符如果是‘0’，说明没有进位，则把他删掉；若最后一位是1,则不做操作。
         //    5.将处理后的字符串再次逆转，就得到正确的结果
        
		if(num1==""||num2=="")
			return num1;
        
		if(num1=="0"||num2=="0")
		{
			if(num1=="0")
				return num2;
			else return num1;
		}
      
        int j = 0;string num;
        
		 int size1=num1.size();
		 int size2=num2.size(); 
        
        reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
	
		 int maxsize = size1 > size2 ? size1 : size2;
        
		 for ( j = num1.size(); j <= maxsize; ++j)
		 {
			 num1.push_back('0');
		 }
        
		 for ( j = num2.size(); j <=maxsize; ++j)
		 {
			 num2.push_back('0');
		 }
		
		int i = 0;j = 0;
		int count1 = 0, count2 = 0;
	
		int flag = 0;

		while (num1[i] != 0 && num2[i] != 0)
		{
                count1 = num1[i] - '0';
                count2 = num2[i] - '0';

            if (flag == 1)
            {
                if (count1 + count2 + 1 >= 10)
                {
                    num.push_back(('0' + count1 +1+ count2 - 10));

                    flag = 1;
                }
                else
                {
                    num.push_back(('0' + count1 + 1 + count2 ));
                    flag = 0;

                }

            }
            else
            {

                if (count1 + count2  >= 10)
                {
                    num.push_back(('0' + count1  + count2 - 10));

                    flag = 1;
                }
                else
                {
                    num.push_back(('0' + count1  + count2));
                    flag = 0;
                }
            }
			i++;
		}
        
        if(num[num.size()-1]!='1')
            num.erase(num.size()-1);
        reverse(num.begin(), num.end());
		return num;
	}
};