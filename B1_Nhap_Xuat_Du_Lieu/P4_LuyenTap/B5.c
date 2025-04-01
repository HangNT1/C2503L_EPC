#include <stdio.h>

int main()
{
    
    int a = 5;
    int b = 4;
    // dang co : int
    // muon: float 
    // muon 2 kieu nay la 1 => ep kieu 
    // C1: ep kieu tuong minh : (kieu du lieu muon load)
    // C2: ep kieu ngam: nhan vs 1 so la kieu du lieu muon ep 
    // . => 1.0
    float thuong = (float)a/b;
    float thuong1 = (1.0)*a/b;
    printf("Thuong la %.3f", thuong1);
    return 0;
}