#include<iostream>
using namespace std;
int main () {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totletriplets = 0;
    int x = 12;
    for (int i=0; i<=7; i++){
        for(int j=i+1; j<=7; j++){
            for(int k=j+1; k<=7; k++){
                if (arr[i]+arr[j]+arr[k]==x){
                    totletriplets++;
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;

                }
            }
    
        }
    }
    cout<<totletriplets<<endl;

 return 0;

}