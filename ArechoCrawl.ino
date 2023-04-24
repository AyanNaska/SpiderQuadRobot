#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver srituhobby = Adafruit_PWMServoDriver();

#define servoMIN 350
#define servoMAX 600

void setup() {
  Serial.begin(9600);
  srituhobby.begin();
  srituhobby.setPWMFreq(60);
}

void loop() 
{
  //1st move
    srituhobby.setPWM(4, 0, 500);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 300);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 370);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 500);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 500);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 300);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 370);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 500);
    srituhobby.setPWM(11, 0, 500);
    delay(500);
    srituhobby.setPWM(4, 0, 500);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 300);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 370);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 350);
    srituhobby.setPWM(11, 0, 500);
    delay(700);
    srituhobby.setPWM(4, 0, 500);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 300);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 370);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 350);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 425);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 325);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 425);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 425);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 425);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 325);
    srituhobby.setPWM(9, 0, 480);
    srituhobby.setPWM(6, 0, 425);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 425);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 425);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 350);
    srituhobby.setPWM(9, 0, 480);
    srituhobby.setPWM(6, 0, 425);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 425);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 425);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 350);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 425);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 425);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 425);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 350);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 425);
    srituhobby.setPWM(10, 0, 200);
    srituhobby.setPWM(7, 0, 425);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 425);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 350);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 480);
    srituhobby.setPWM(10, 0, 200);
    srituhobby.setPWM(7, 0, 425);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
    srituhobby.setPWM(4, 0, 425);
    srituhobby.setPWM(8, 0, 200);
    srituhobby.setPWM(5, 0, 350);
    srituhobby.setPWM(9, 0, 430);
    srituhobby.setPWM(6, 0, 480);
    srituhobby.setPWM(10, 0, 250);
    srituhobby.setPWM(7, 0, 425);
    srituhobby.setPWM(11, 0, 450);
    delay(500);
}
