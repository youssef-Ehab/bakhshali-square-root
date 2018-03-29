#include <iostream>

using namespace std;

int main()
{

    float x;
    int perfect_square;
    int n;
    float d;
    float p;
    float a;
    cin>>x;
    for(int i=x; i>0;i-- ){
        for(int j=0; j<i;j++ ){

            if(j*j==i){
                n=j;
                perfect_square=i;
                break;
            }
        }
    if (perfect_square>0){
    break;
    }
}


    d=x-(perfect_square);
    p=d/(2*n);
    a=n+p;
    float sum=a-((p*p)/(2.0*a));
    cout<<sum;
    return 0;

  }
