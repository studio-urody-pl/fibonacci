#include <iostream> // cin, cout
#include <iomanip> // setprecision
// --- program shows the n-th element or n elements of Fibonacci sequence
using namespace std;

long double fib[100000]; int n;

int main()
    {
        cout << "Which element of Fibonacci sequence should i find? : ";
        cin>>n;

        fib[0]=1;
        fib[1]=1;

        for (int i = 2; i <n; ++i)
        {
            fib[i] = (fib[i-1] + fib[i-2]);
        }
        cout<<setprecision(10000);
//----this loop generates n elements----
//        for (int i = 0; i <n; ++i)
//        {
//            cout<<endl<<"element no. "<<i+1<<": "<<fib[i];
//        }
        cout<<endl<<"element no. "<<n<<":"<<fib[n-1];

        return 0;
    }
