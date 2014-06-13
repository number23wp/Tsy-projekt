#include <CS_MQ7.h>

CS_MQ7 MQ7(12, 13);  // 12 = digital Pin connected to "tog" from sensor board
                     // 13 = digital Pin connected to LED Power Indicator



void mq7(){

  MQ7.CoPwrCycler();   
  
}

