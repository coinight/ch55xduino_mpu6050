#include "MPU6050.h"
char buff[41];
int16_t data[6];
void setup() {
  while (!USBSerial()) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  MPU6050_I2C_Init();
  MPU6050_Initialize();
  sprintf(buff, "MPU6050:%s",MPU6050_TestConnection()?"OK":"FAIL");
  USBSerial_println(buff);
}

void loop() {
  MPU6050_GetRawAccelGyro(data);
  //sprintf(buff, "AX%d,AY%d,AZ%d,GX%d,GY%d,GZ%d", data[0],data[1],data[2],data[3],data[4],data[5]);
  sprintf(buff, "%d,%d,%d,%d,%d,%d", data[0],data[1],data[2],data[3],data[4],data[5]);
  USBSerial_println(buff);
}
