#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool sortcol( const vector<int>& v1,const vector<int>& v2 ) {

        




    return v1[0] < v2[0];
}


    vector<vector<int>> threeSum(vector<int>& nums) {

vector<vector<int>> nu;
int i=0,j=1,k=2;
int leng = nums.size() - 1;
int m=0;
int arr[3];
while(i<=leng-2  && j<=leng-1 && k<=leng){
    cout<<"here"<<endl;
cout<<nums[i]<<nums[j]<<nums[k];
cout<<""<<endl;
if((nums[i] + nums[j] + nums[k]) == 0 ){


arr[0] = nums[i];
arr[1] = nums[j];
arr[2] = nums[k];
int f=0;
for(int g=0;g<3;g++){

f = arr[g];

for(int h=g;h<3;h++){

if(arr[h]<arr[g]){
int y = arr[h];
arr[h] = arr[g];
arr[g] = y;



}

}



}
cout<<"arr"<<arr[0]<<arr[1]<<endl;

int flag = 1;
for(int o=0;o<nu.size();o++){

cout<<"inside"<<endl;
if(nu[o][0] == arr[0] && nu[o][1]==arr[1] && nu[o][2]==arr[2]){


flag=0;
break;

};



}
cout<<"hurray"<<flag<<endl;

if(flag==1){

vector<int> v1;

v1.push_back(arr[0]);
v1.push_back(arr[1]);
v1.push_back(arr[2]);

    // nu[m][0] = arr[0];
    //  nu[m][1] = arr[1];
    //   nu[m][2] = arr[2]; 
nu.push_back(v1);




}
// cout<<nu[m][0]<<endl;


}


if(k== leng){

if(j<(leng-1) && k<=leng){
j=j+1;
k = j;
}

else{

if(i<leng-2){
i=i+1;
j=i+1;
k = j;
}
else{


    break;
}

}




}




k++;
}

return nu;




        
    }



int main(){


vector<int> j;
vector<vector<int>> g;
int arr[4]={1,2,3,4};
j.push_back(-1);
j.push_back(0);
j.push_back(1);
j.push_back(2);
j.push_back(-1);
j.push_back(-4);
j.push_back(-2);
j.push_back(-3);
j.push_back(3);
j.push_back(0);
j.push_back(4);



vector<vector<int>> k ;

 k=threeSum(j);








 sort(k.begin(), k.end());









for(int i=0;i<k.size();i++){
for(int l=0;l<3;l++){


cout<< k[i][l]<<",";

}

cout<<""<<endl;


}










}