char* encode(char* input) 
{
    char *s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/0123456789";
    int r, i, k = 0, x, y, a, b;
    char *s2;
    for(i = 0; i < strlen(input); i++)
    {
        r = i % 4;
        x = y = 0;
            if(r == 0)
            {
                a = input[i];
                x = a & 252;
                x >> 2;
            }
            else if(r == 1)
            {
                a = input[i-1];
                x = a & 3;
                x = x << 4;
                b = input[i];
                y = b & 240;
                y = y >> 4;
                x = x | y;
            }
            else if(r == 2)
            {
                a = input[i-1];
                x = a & 15;
                x = x << 2;
                b = input[i];
                y = b & 192;
                y = y >> 6;
                x = x | y;
            }
            else if(r == 3)
            {
                a = input[i];
                x = a & 63;
            }
        s2[k] = s[x];
        k++;
    }
    return s2;
}
