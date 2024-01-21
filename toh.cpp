#include <iostream>
using namespace std;

void toh(int n , int A ,int B,int C){
    if (n>0){

        toh(n-1,A,C,B);
        printf("(%d,%d)\n",A,C);
        toh(n-1,B,A,C);

    }

}

int main(){
    int n;
    int A;
    int B;
    int C;
    cout <<"Enter the number of disks\n";
    cin >>n;
    cout <<"Enter the tower ranks\n";
    cin >>A>>B>>C;
    toh(n,A,B,C);
    return 0;

}