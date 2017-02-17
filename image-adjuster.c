#include <stdio.h>

main(){

  int i, x, y, r, g, b;
//x and y are width and heighth of the pic.  r g b are the color values.
  int PPM_MAX;
  char MagicNum[2];

  for(i=0; i < 2; i++){
    scanf("%c", &MagicNum[i]);
    }

  scanf("%i %i %i", &x, &y, &PPM_MAX);


  printf("P2\n");
  printf("%i\n%i\n%i\n", x, y, 255);

  for(i=0; i < x*y; i++){
    scanf("%d %d %d", &r, &g, &b);
    int Gray_Value;
    Gray_Value = ((r*30 + g*59 + b*11) * 255) /(100*PPM_MAX);
    printf("%i\n", Gray_Value);
    }
}
