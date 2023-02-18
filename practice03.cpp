#include <iostream>
#include <string>
#include <new>
using namespace std;
void initialize_array(int r, int c, int *ptr)
{
    int i, j, k;
    cout << "Enter the Elements of Array:" << endl;
    // ptr = new int[r * c]; // allocation of array dynamically
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> k;
            *(ptr + i * c + j) = k;
        }
    }
}
void print_array(int r, int c, int *ptr)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        cout << "[";
        // cout<<" "<<*ptr;
        // ptr=ptr+1;
        for (j = 0; j < c; j++)
        {
            cout << " " << *ptr;
            ptr = ptr + 1;
        }
        cout << ']' << endl;
    }
    return;
}
struct element
{
    int c, r, *p;
};
element addition_of_array(int r1, int r2, int c1, int c2, int *p3, int *p4)
{
    element matrix;
    try
    {
        if ((r1 == r2) && (c1 == c2))
        {
            cout << "Performing Addition : " << endl;
            matrix.c = c1;
            matrix.r = r1;
            matrix.p = new int[r1 * c1];

            int i, j, a, b, c;
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    a = *(p3 + i * c1 + j);
                    b = *(p4 + i * c2 + j);
                    c = a + b;
                    *(matrix.p + i * c1 + j) = c;
                }
            }
        }
        else
            throw(c1);
    }
    catch (...)
    {
        cout << "Addition is not Possible :" << endl;
        cout << "The Dimensions of the Matrix is not same !!!" << endl;
        matrix.c = 0;
        matrix.r = 0;
        matrix.p = NULL;
    }
    return matrix;
}
element subrtraction_of_array(int r1, int r2, int c1, int c2, int *p3, int *p4)
{
    element matrix;
    try
    {
        if ((r1 == r2) && (c1 == c2))
        {
            cout << "Performing Substraction : " << endl;
            matrix.c = c1;
            matrix.r = r1;
            matrix.p = new int[r1 * c1];

            int i, j, a, b, c;
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    a = *(p3 + i * c1 + j);
                    b = *(p4 + i * c2 + j);
                    c = a - b;
                    *(matrix.p + i * c1 + j) = c;
                }
            }
        }
        else
            throw(c1);
    }
    catch (...)
    {
        cout << "Substraction is not Possible :" << endl;
        cout << "The Dimensions of the Matrix is not same !!!" << endl;
        matrix.c = 0;
        matrix.r = 0;
        matrix.p = NULL;
    }
    return matrix;
}
int main()
{
    string n;
    cout << "Dear User Enter your Name : " << endl;
    getline(cin, n);
    int c, r, p, q, *p1, *p2;
    cout << "Enter Number of Rows Matrix 1 : " << endl;
    cin >> r;
    cout << "Enter Number of Columns Matrix 1 : " << endl;
    cin >> c;
    p1 = new int[r * c];
    initialize_array(r, c, p1);
    print_array(r, c, p1);

    cout << "Enter Number of Rows Matrix 2 : " << endl;
    cin >> p;
    cout << "Enter Number of Columns Matrix 2 : " << endl;
    cin >> q;
    p2 = new int[q * p];
    initialize_array(q, p, p2);
    print_array(q, p, p2);

    cout << "Dear User " << n << " your Exceptional Coding Results : " << endl;

    element matrix;
    cout << "Processing the Addition ...... " << endl;
    matrix = addition_of_array(r, c, p, q, p1, p2);
    print_array(matrix.r, matrix.c, matrix.p);

    cout << "Processing the Substraction ...... " << endl;
    matrix = subrtraction_of_array(r, c, p, q, p1, p2);
    print_array(matrix.r, matrix.c, matrix.p);
    delete[] p1;
    delete[] p2;
    return 0;
}