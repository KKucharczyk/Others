#include "md5.c"

int main( int argc, char *argv[] )
{
    int j,k;
    const char *msg = "Magda";
    unsigned *d = md5(msg, strlen(msg));
    WBunion u;
     
    printf("= 0x");
    for (j=0;j<4; j++){
        u.w = d[j];
        for (k=0;k<4;k++) printf("%02x",u.b[k]);
    }
    printf("\n");
     
    return 0;
}