class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //思路：1.先开辟空间，并且初始化
        //      2.在进行运算
            if(numRows==0)
           return   vector<vector<int>> ();
        size_t i=0;size_t j=0;
        vector<vector<int>> vv;     //定义二维数组
        vector<int> v;      //定义一维数组
        
    
        //开始开辟空间
        vv.resize(numRows);//   先给外层数组开空间
        for( i=0;i<numRows;i++)
        {

            vv[i].resize(i+1,0);
        }
        
        //进行初始化
        for(i=0;i<numRows;++i)
        {

            vv[i][0]=1;
            vv[i][vv[i].size()-1]=1;//等价于 vv[i][i]=1;
        }
        //计算各元素的值
           for( i=0;i<numRows;++i)      
         {
            for( j=0;j<vv[i].size();j++)
            {
                if(vv[i][j]==0)
                vv[i][j]=vv[i-1][j-1]+vv[i-1][j];
            }

        }
        return vv;
        
    }
};
