// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n, i,j,no;
//     cin>>n;
    
//     for(i=0;i<n;i++){
//         for(j=0;j<n-2*i;j++){
//             cout<<"#";

//         }
//         no=i+1;
//         for(j=0;j<=i;j++){
//             cout<<no;
//             no--;
            
//         }
//         for(j=1;j<=2*i-1;j++){
//             cout<<" #";
//         }
//         no=1;
//         for(j=1;j<=i;j++){
//             cout<<no;
//             no=i+1;
//             i++;
            
            
//         }cout<<endl;
//     }
//     return 0;
// }
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, n, j, no;
    cin >> n;
    for (i = 1; i <= (n + 1) / 2; i++)
    {
        for (j = 1; j <=n-(2*i-1); j++)
        {
            cout << " "
                 << " ";
        }
        no = i;
        for (j = 1; j <= i; j++)
        {
            cout << no << " ";
            no--;
        }for(j=1;j<=2*i-3;j++){
            cout<<" "<<" ";
        }no=1;
        for(j=2;j<=i+1;j++){
            cout<<no<<" ";
            no++;
        }


        cout << endl;
      
        }
    

    return 0;
}    