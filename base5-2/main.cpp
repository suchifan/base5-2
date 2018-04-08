//
//  main.cpp
//  base5-2
//
//  Created by suchao on 4/8/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

bool zero = true;

int IntRevsR(int n){
    if (n < 10)
        cout << n;
    else{
        int i = n / 10;
        int j = n % 10;
        if (j != 0)
            zero = false;
        if (!zero)
            cout << j;
        IntRevsR(i);
    }
    return 0;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "input n:\n";
    int n;
    cin >> n;
    IntRevsR(n);
    return 0;
}
