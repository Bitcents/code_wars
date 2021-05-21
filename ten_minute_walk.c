#include <stdbool.h>

bool isValidWalk(const char *walk) {

    // <---- hajime!
  int displacement_x = 0;
  int displacement_y = 0;
  int time = 0;
  while(*walk != '\0'){
    displacement_x += (*walk == 'e') - (*walk == 'w');
    displacement_y += (*walk == 'n') - (*walk == 's');
    time++;
    if(time > 10) break;
    walk++;
  }
  return (time == 10 && displacement_x == 0 && displacement_y == 0);

}