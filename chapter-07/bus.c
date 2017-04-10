int main()
{
    union {
        char a[10];
        int i;
    } w;
    int *p = (int*)&(w.a[1]);
    *p = 18;
}
