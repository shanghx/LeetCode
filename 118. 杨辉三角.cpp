class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //˼·��1.�ȿ��ٿռ䣬���ҳ�ʼ��
        //      2.�ڽ�������
            if(numRows==0)
           return   vector<vector<int>> ();
        size_t i=0;size_t j=0;
        vector<vector<int>> vv;     //�����ά����
        vector<int> v;      //����һά����
        
    
        //��ʼ���ٿռ�
        vv.resize(numRows);//   �ȸ�������鿪�ռ�
        for( i=0;i<numRows;i++)
        {

            vv[i].resize(i+1,0);
        }
        
        //���г�ʼ��
        for(i=0;i<numRows;++i)
        {

            vv[i][0]=1;
            vv[i][vv[i].size()-1]=1;//�ȼ��� vv[i][i]=1;
        }
        //�����Ԫ�ص�ֵ
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
