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
    cin>>n;
    int c ,*p;
    cout<<"Columns :";
    cin>>c;
    p=new int [c]; //allocation of array dynamically
    cout<<"Enter the elements of ARRAY : "<<endl;
    int i ,j, k;
    for(int i = 0 ; i<c ; i++)
    {
        cin>>k;
        *(p+i)=k;
    }

    cout<<"Dear User : "<<n<<" : "<<endl; cout<<endl<<"Your Matrixx: "<<endl;
    Print_array(1,c,p);
    delete [] p;//to prevent from dangling pointer headache
    return 0;


}