/**
 * @file pyramid.cpp
 * Pyramid shape
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, space, row;
    cout << "How many rows: " << endl;
    cin >> row;

    for (i = 1; i <= row; i++)
    {
        for (space = 1; space <= row - i; space++)
        { 
            cout << "   "; /// 3 spaces for both side spaces near by asterisk sign
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << " * "
        }
        cout << "\n";
    }

    return 0;
}