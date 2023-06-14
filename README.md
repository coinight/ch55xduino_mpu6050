# ch55xduino_mpu6050
drive MPU6050 at ch55xduino with ch552
![image](https://github.com/coinight/ch55xduino_mpu6050/assets/32589807/a75ec76a-899b-48bb-a01c-f45a0c1f61c1)
## Pins:
&ensp;MPU6050_SCL_PIN -> P30
&ensp;MPU6050_SDA_PIN -> P31
## Functions:
&ensp;MPU6050_GetRawAccelGyro(data); -> "AccelX,AccelY,AccelZ,GyroX,GyroY,GyroZ"
## HowToUse?
### 1.init
~~~C
MPU6050_I2C_Init();
MPU6050_Initialize();
~~~
### 2.get data
~~~C
int16_t data[6];
MPU6050_GetRawAccelGyro(data);
sprintf(buff, "%d,%d,%d,%d,%d,%d", data[0],data[1],data[2],data[3],data[4],data[5]);
USBSerial_println(buff);
~~~
