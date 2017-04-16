#include<stdio.h>
#include<string.h>

void encode( char *b64, char *string ) {

int i,first, second, third, fourth;

  for( i = 0; i < strlen(string); i = i + 3 ) {

    if( i + 3 > strlen(string)  ) {

        char s[4] = {0};
        int j = 0;

        while( string[i] != '\0' ) {
          s[j] = string[i];
          j++;
          i++;
        }

        j = 0;

        first = s[j] >> 2;
        second = ( ( s[j] & 0x03 ) << 4 ) + ( ( s[j+1] & 0xF0 ) >> 4 ) ;
        third = ( ( s[j+1] & 0x0F ) << 2 ) + ( ( s[j+2] & 0xC0 ) >> 6 ) ;
        fourth = ( s[j+2] & 0x3F ) ;

        printf( "%c%c%c%c" , ( (first > 0) ? b64[first] : '=' ), ( (second > 0) ? b64[second] : '=' ), ( (third > 0) ? b64[third] : '=' ), ( (fourth > 0) ? b64[fourth] : '=' ) );

    }

    else {

    first = string[i] >> 2;
    second = ( ( string [i] & 0x03 ) << 4 ) + ( ( string[i+1] & 0xF0 ) >> 4 ) ;
    third = ( ( string [i+1] & 0x0F ) << 2 ) + ( ( string[i+2] & 0xC0 ) >> 6 ) ;
    fourth = ( string [i+2] & 0x3F ) ;

    printf( "%c%c%c%c" , b64[first], b64[second], b64[third], b64[fourth] );
  }
}

}

int main() {

  char b64[64] = {0},i;
  int j = 0;

  for( i = 'A'; i <= 'Z'; i++ ) {
    b64[j] = i;
    j++;
  }

  for( i = 'a'; i <= 'z'; i++ ) {
    b64[j] = i;
    j++;
  }

  for( i = '0'; i <= '9'; i++ ) {
    b64[j] = i;
    j++;
  }

  b64[j] = '+'; j++;
  b64[j] = '/'; j++;

  char string[1000];
  gets( string );

  encode( b64, string );

}
