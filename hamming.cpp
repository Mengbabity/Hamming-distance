class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> xv,yv;
        int res=0;
        int i=0,j=0;
        int f1=0,f2=0;
        
        while(x)
        {
            i=x%2;
            x/=2;
            xv.push_back(i);
        }
        
        while(y)
        {
            j=y%2;
            y/=2;
            yv.push_back(j);
        }
        
        if(xv.size()!=yv.size())
        {
            while(xv.size()<yv.size())
            {
               xv.push_back(0);
            }
            while(xv.size()>yv.size())
            {
               yv.push_back(0);
            }
        }
        
        while(f1<xv.size() && f2<yv.size())
        {
            if(xv[f1]!=yv[f2])
            {
                res++;
            }
            f1++;
            f2++;
        }
 
        return res;
    }
};
