#include <iostream>
using namespace std;
int main(){
    long int i,counter,raz,k = 0;
    long int n;
    cin >> n;
    long int o[n][2];
    for(i=1;i<=n;i++){o[i][0]=i;}
    for(i=2;i*i<=n;i=i*i){
        o[i][1]=k+1;
        k++;
    }
    o[0][1]=0;
    o[1][1]=1;
    o[2][1]=1;
    counter=2;
    for(i=3;i<=n;i++){
            raz=o[i][0]-o[counter][0];
            o[i][1]=o[counter][1]+o[raz][1];
            if (i+1==counter*2) {
                counter=(i+1)*2;
            }
    }

    for(i=1;i<=4;i++){cout<< o[i][1];}
    //cout << o[n][1];
    return 0;
}

