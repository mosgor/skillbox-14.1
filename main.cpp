#include <iostream>

int main(){
    int rows[6][2][3] = {{{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{4, 3, 1}, {4, 3, 1}}};
    rows[4][0][2]++;
    rows[2][1][0]--;
    rows[3][1][0]++;
    rows[5][1][0]--;
    rows[5][1][1]--; 
    return 0;
}