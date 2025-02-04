#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <=5; i++)
    {

        
        

        for (int j = 1; j <=5-i+1 ; j++)
        {
            cout << j << " ";
        }
        
        for (int m =2 ; m <=i; m++)
        { 
               cout << "    " ;
            
        }

         for (int k = 5-i+1; k >=1 ; k--)
        {
            cout << k << " ";
        }
        cout << endl ;
    }
    

    



    return 0;
}
