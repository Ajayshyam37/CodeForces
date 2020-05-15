#include <iostream>
using namespace std;

int main() {
    int res,t,maxcost;
    int b,p,f;
    int h,c;
    cin>>t;
    while(t--){
        cin>>b>>p>>f;
        cin>>h>>c;
        maxcost=max(h,c);
        b=b/2;
        int maxprofit=0;
        if(b>(p+f))
        {
            maxprofit=p*h+f*c;
        }else{
            if(b<1)
            {
                maxprofit=0;
            }else{
                while(b--)
                {
                    if(maxcost==c )
                    {
                        if(f>0)
                        {
                        maxprofit=maxprofit+c;
                        f--;
                        }else if(p>0){
                            maxprofit=maxprofit+h;
                            p--;
                        }
                    }else if(maxcost==h ){
                        if(p>0)
                        {
                        maxprofit=maxprofit+h;
                        p--;
                        }else if(f>0){
                            maxprofit=maxprofit+c;
                            f--;
                        }
                    }
                }
            }
        }
        
        cout<<maxprofit<<endl;
    }
	return 0;
}
