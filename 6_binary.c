invert( int x, int p, int n)
{
    return (~(~0 << n)) << (p-1) ^ x
}

bitAnd(int x, int y)
{
    return ~(~x | ~y)
}
bitXor(int a, int b)
{
    return (~(~a & ~b)) & ~(a & b)
}
bang(int x)    // return not without using not operator
{

}
conditional(int x, int y, int z)    //if x==0 return y else z
{
    return ( ( ! ( !x << 31) ) >> 31) & y | ( ( !x << 31) >> 31) & z
}
get_bytes()
{
    input 0x 87 56 43 21
    n = 1
    return 0x 43
}
