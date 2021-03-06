/* 
 ViewController library for tv out
*/

#include "Arduino.h"
#include "ViewController.h"
#include <TVout.h>
#include <fontALL.h>

#include "Button.h"

ViewController::ViewController() {
  int views[4];
}

ViewController::ViewController(TVout& tv) {
   _tv = tv;
}

void ViewController::add(Button& b, int viewId) {
   view[viewId];
  
}

void ViewController::test() {
  Serial.println("testing views...");
  Button b1 = Button(_tv, 10, 10, 20, 9, "rcs");
}

