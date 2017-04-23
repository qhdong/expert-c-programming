void my_func_1(int fruit[2][3][5]) {}
void my_func_2(int fruit[][3][5]) {}
void my_func_3(int (*fruit)[3][5]) {}

int main() {
    int apricot[2][3][5];

    my_func_1(apricot);
    my_func_2(apricot);
    my_func_3(apricot);

    int (*p)[3][5] = apricot;

    my_func_1(p);
    my_func_2(p);
    my_func_3(p);

    int (*q)[2][3][5] = &apricot;

    my_func_1(*q);
    my_func_2(*q);
    my_func_3(*q);
}
