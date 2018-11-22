class Solution
{
public:
    int numSquares(int n)
    {
        queue<pair<int,int>> q;
        q.push(make_pair(n,0));
        //������飬��ֹ�ڵ��ظ���ӣ��������ʱ
        vector<bool> visited(n+1,false);
        visited[n]=true;
        while(!q.empty())
        {
            int num=q.front().first;
            int step=q.front().second;
            q.pop();
            for(int i=1; ; i++)
            {
                int temp=num-i*i;
                if(temp<0)
                    break;
                if(temp==0)
                    return step+1;
                if(!visited[temp])��
                {
                    q.push(make_pair(temp,step+1));
                    visited[temp] = true;
                }
            }
        }
    }
};