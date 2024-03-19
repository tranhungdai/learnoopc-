
#include<iostream>
#include<math.h>

using namespace std;

void thongSo(double r ){
    cout << "Dientich=  " << r*r*3.14 << endl;
    cout << "Chuvi= " << 3.14 * 2 * r << endl;
}
int main(){
    
    double r;
    int a[100];
   cout << " Nhap gia tri cua r: ";
    cin >> r;
    // for(int i=0;i<n;i++){
    //     cin >> a[i] ;
    // }
    // for(int i=0;i<n;i++){
    // if((a[i] % 3 == 0) && (a[i] % 5 != 0)){
    // Sum += a[i];
    // }

    // }
   thongSo(r);

}

