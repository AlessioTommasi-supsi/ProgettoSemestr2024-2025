#include <Arduino.h>
#include "./controller/WiFiManager.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  
  try
  {
    WiFiManager *wifiManager = new WiFiManager();
  }
  catch(const std::exception& e)
  {
    
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}