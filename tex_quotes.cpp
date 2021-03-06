/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>

using namespace std;

int main(){
    char c;
    int S = 0;
    while (scanf("%c", &c) == 1){
        if (c != '"') cout << c;
        else{
            if (!S){
                cout << "``"; S++;
            } 
            else{
                cout << "''"; S--;
            }            
        }
    }
    return 0;
}
