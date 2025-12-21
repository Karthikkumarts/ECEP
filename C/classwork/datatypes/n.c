#include<stdio.h>
union u{
    short  int id;

    struct s{
    char n;
    char n1;
    }q;

    struct p{
    char na;
    char na1;
    }w;

}u;

int main()
{
   
    u.q.n =0x50;
    u.w.na1 =0x60;
    printf("%x %x",u.id,u.id);
}
