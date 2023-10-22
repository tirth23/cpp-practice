#include<iostream>
using namespace std;

// void update(int *p){
//     *p = (*p)  *  2;
// }
// int main(){
//     int i = 10;
//     update(&i);
//     cout << i << endl;
// }

// void fun(int arr[]) {
//         cout << arr[0] << " ";
//     }
// int main() {
//     int arr[] = {11, 12, 13, 14};
//     fun(arr + 1);
//     cout << arr[0] << endl;
// }

// void update(int *p){
//     *p = (*p) * (*p);
// }
// int main() {
//     int a = 70;
//     update(&a);
//     cout << a << endl;
// }

// void increment(int **p){
//         ++(**p);
//     }
// int main(){
//     int num = 110;
//     int *ptr = &num;
//     increment(&ptr);
//     cout << num << endl;
// }

// int f(int x, int *py, int **ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }
// int main() {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);
//     return 0;
// }

// void Q(int z)
// {
//     z += z;
//     cout<<z << " ";
// }
// void P(int *y) 
// {
//     int x = *y + 2;
//     Q(x);
//     *y = x - 1; 
//     cout<<x << " ";
// }
// int main()
// {
//     int x = 5;
//     P(&x);
//     cout<<x;
//     return 0;
// }