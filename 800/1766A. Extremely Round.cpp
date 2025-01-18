#include <iostream>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int ans=0;
        for(int i=1; i<=n;){
            string a=to_string(i);
            ans++;
            if(a.size()==1){
                i++;
            }
            else if(a.size()==2){
                i=i+10;
            }
            else if(a.size()==3){
                i=i+100;
            }
            else if(a.size()==4){
                i=i+1000;
            }
            else if(a.size()==5){
                i=i+10000;
            }
            else if(a.size()==6){
                i=i+100000;
            }
            else if(a.size()==7){
                i=i+1000000;
            }
            else if(a.size()==8){
                i=i+10000000;
            }
            else if(a.size()==9){
                i=i+100000000;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
