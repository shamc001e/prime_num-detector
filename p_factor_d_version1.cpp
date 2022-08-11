#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while(true){
            double num;
            bool p = true;
            cout << "\nenter number(1 to stop): ";
            cin >> num;
            if(num == 1){
                exit(0);
            }
            if(num == 0){
                p = false;
            }
            for(double i = 2; i <= num/2; i++){
                if(fmod(num, i) == 0){
                    p = false;
                    break;
                }
            }
            if(p){
                cout << num << " is a prime number." << endl;
            } else if(p == false){
                if(num == 0){
                    cout << num << " is not a prime number." << endl;
                }
                else if(num != 0){
                    cout << num << " is a composite number. Use my other program available in Github to find its factors for free!" << endl;
                }
            }
    }
    return 0;
}
