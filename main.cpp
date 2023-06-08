#include <iostream>

int main(){
    int rows[6][2][3] = {{{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{3, 2, 1}, {3, 2, 1}}, {{4, 3, 1}, {4, 3, 1}}};
    //Индексы проставленны так, будто стол расположен вертикально и мы считаем, стоя у его начала, напротив VIP персон.
    //Первый уровень массива означате ряды, по сути пары сидящих напротив друг друга человек, а последний ряд означает двух VIP персон, сидящих в изголовье.
    //Второй уровень означает столбец, в котором сидит человек (слева или справа от начала стола).
    //В третьем уровне массива ячейки соответственно означают количество приборов, тарелок и стульев. 
    rows[4][0][2]++; //Дама с пятого места первого ряда берёт стул для ребёнка.
    rows[2][1][0]--; //С третьего места второго ряда украли ложку.
    rows[3][1][0]++; //У кого-то стало на одну ложку больше, ведь он её украл.
    rows[5][1][0]--; //VIP гость поделился своей ложкой с жертвой грабежа.
    rows[5][1][1]--; //У этого же гостя забрали тарелку за ненадобностью.
    return 0;
}