#include <iostream>
#include <new>
#include <string>
using namespace std ;
void Print_array(int r , int c , int *ptr)
{
    int i , j ;
    for(i=0;i<r;i++)
    {
        cout<<"[";
        // cout<<" "<<*ptr;
        // ptr=ptr+1;
        for(j=0;j<c;j++)
        {
            cout<<" "<<*ptr;
            ptr=ptr+1;
        }
        cout<<']'<<endl;
    }
    return;
}
int main()
{
    string n;
    cout<<"Dear User Enter your name : "<<endl;
    getline(cin,n);
    int r,c ,*p;
    cout<<"Columns :";
    cin>>c;
    cout<<"Rows : ";
    cin>>r;
    p = new int [r*c]; //allocation of array dynamically
    cout<<"Enter the elements of ARRAY : "<<endl;
    int i ,j, k;
    for(int i = 0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
          cin>>k;
         *(p+i*c+j)=k;
        }
    }

    cout<<"Dear User : "<<n<<" : "<<endl; cout<<endl<<"Your Matrixx: "<<endl;
    Print_array(r,c,p);
    delete [] p;//to prevent from dangling pointer headache
    return 0;

}