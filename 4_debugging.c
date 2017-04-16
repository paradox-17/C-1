int main(int argc, char *argv[])
{
    printf("%s", argv[0]);
    printf("%s", argv[1]);
    char *a;
    a[3] = 5;
    return 0;
}

gcc -g filename.c
./a.out abc efg
gdb --args a.out abc xyz
b main
p argc
n
