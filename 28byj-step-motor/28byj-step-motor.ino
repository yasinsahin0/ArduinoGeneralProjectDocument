#include <Servo.h>
Servo towerprosg5010; 
int pos = 0; 
int pers = 180;
void setup()
{
  towerprosg5010.attach(9); 
}
void loop()
{
  
  for(pos = 0; pos < pers; pos += 1)  // 0 to 180 degrees with 1 degree step
  {                                  
    towerprosg5010.write(pos);  
    delay(15);                       // time set 120 ms to reach sloooooowly
  }
  for(pos = pers; pos > 0; pos -= 1)  // 0 to 180 degrees with 1 degree step
  {                                  
    towerprosg5010.write(pos);  
    delay(15);                       // time set 120 ms to reach sloooooowly
  }
  
}
