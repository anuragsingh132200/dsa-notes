#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*//heap is basically a big storage space which we can access by using new keyword;
     int *p=new int ;
     //we created a pointer over here as new keyword gives address
     cin>>*p;

     cout <<*p;

    delete(p);//this is how we delete the data in heap as if not will lead to memory leak
    */
    /*int * arr=new int (5);
    for(int i =0 ;i < 5;i++ ){
    cin>>arr[i];
    }
    for (int i =0;i<5;i++){
    cout <<arr[i]<<endl;
    }
    delete[] arr ;*/

    // 2d array most important one

    int **arr = new int *[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int(4);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}