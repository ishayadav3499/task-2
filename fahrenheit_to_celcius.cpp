#include<iostream>
using namespace std;

int faren(int s,int e,int w){

    cout<<s<<e<<w;
    int convert;
    for(int i=s;i<=e;i=i+w){
        convert=((i-32)*(0.55));
        cout<<i<<" "<<convert<<endl;
    }



}

int main(){




    faren(s,e,w);

    /*int s,e,w;
    cin>>s>>e>>w;
    int convert;
    for(int i=s;i<=e;i=i+w){
        convert=((i-32)*(0.55));
        cout<<i<<" "<<convert<<endl;
    }*/





return 0;
}
