#include <TFT_eSPI.h>       // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

// Include the header files that contain the icons
#include "oneRec.h"
#include "twoRec.h"
#include "threeRec.h"
#include "finalCat.h"
#include "finalRec.h"
#include "happyCat.h"
#include "homeCat.h"
#include "nothingCat.h"
#include "sadCat.h"
#include "startRec.h"
#include "font2.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(25, INPUT_PULLUP);
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setSwapBytes(true);
  tft.pushImage(0, 0, 128,128, homeCat);
  tft.setFreeFont(&Roboto_Medium_25);
  tft.drawString("How are", 0, 165);
  tft.drawString("you?",0, 200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button1 = digitalRead(2);
  int button2 = digitalRead(15);
  int button3 = digitalRead(25);
  if(button1 == 1){
      Serial.println("button1");
      tft.init();
      tft.fillScreen(TFT_BLACK);
      tft.setSwapBytes(true);
      tft.pushImage(0, 0, 128,128, happyCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("You're", 0, 165);
      tft.drawString("Happy!",0, 200);
      delay(5000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, happyCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Tell Us", 0, 165);
      tft.drawString("Why", 0, 200);
      delay(4000); 
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, startRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Start", 0, 165);
      tft.drawString("Recording", 0, 200);
      delay(1000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, oneRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("30 sec",0 , 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, twoRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("20 sec",0 , 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, threeRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("10 sec",0, 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, finalRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Saving",0, 165);
      tft.drawString("file",0, 200);
      delay(2000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, finalCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("You're",0, 165);
      tft.drawString("Done!",0, 200);
      delay(2000);
      tft.fillScreen(TFT_BLACK);
  }
  if(button2 == 1){
      Serial.println("button1");
      tft.init();
      tft.fillScreen(TFT_BLACK);
      tft.setSwapBytes(true);
      tft.pushImage(0, 0, 128,128, nothingCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Aw that's", 0, 165);
      tft.drawString("okay...",0, 200);
      delay(5000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, nothingCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Tell Us", 0, 165);
      tft.drawString("Why", 0, 200);
      delay(4000); 
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, startRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Start", 0, 165);
      tft.drawString("Recording", 0, 200);
      delay(1000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, oneRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("30 sec",0 , 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, twoRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("20 sec",0 , 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, threeRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("10 sec",0, 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, finalRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Saving",0, 165);
      tft.drawString("file",0, 200);
      delay(2000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, finalCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("You're",0, 165);
      tft.drawString("Done!",0, 200);
      delay(2000);
      tft.fillScreen(TFT_BLACK);
  }
  if(button3 == 1){
     Serial.println("button1");
      tft.init();
      tft.fillScreen(TFT_BLACK);
      tft.setSwapBytes(true);
      tft.pushImage(0, 0, 128,128, sadCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("You're", 0, 165);
      tft.drawString("Sad :<",0, 200);
      delay(5000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, sadCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Tell Us", 0, 165);
      tft.drawString("Why", 0, 200);
      delay(4000); 
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, startRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Start", 0, 165);
      tft.drawString("Recording", 0, 200);
      delay(1000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, oneRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("30 sec",0 , 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, twoRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("20 sec",0 , 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, threeRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("10 sec",0, 165);
      tft.drawString("remaining",0, 200);
      delay(10000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, finalRec);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("Saving",0, 165);
      tft.drawString("file",0, 200);
      delay(2000);
      tft.fillScreen(TFT_BLACK);
      tft.pushImage(0, 0, 128,128, finalCat);
      tft.setFreeFont(&Roboto_Medium_25);
      tft.drawString("You're",0, 165);
      tft.drawString("Done!",0, 200);
      delay(2000);
      tft.fillScreen(TFT_BLACK);
  }
  //delay(100);
}
