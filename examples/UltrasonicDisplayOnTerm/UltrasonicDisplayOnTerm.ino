// 使用Grove_Ultrasonic_Ranger测量距离

#include <Grove_Ultrasonic_Ranger.h>

Grove_Ultrasonic_Ranger Grove_Ultrasonic_Ranger(D0);

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    long RangeInInches;
    long RangeInCentimeters;

    Serial.println("The distance to obstacles in front is: ");
    RangeInInches = Grove_Ultrasonic_Ranger.MeasureInInches();
    Serial.print(RangeInInches);  //0~157英寸
    Serial.println(" inch");
    delay(250);

    RangeInCentimeters = Grove_Ultrasonic_Ranger.MeasureInCentimeters(); // 两次测量的时候需要相隔一定时间
    Serial.print(RangeInCentimeters);//0~400厘米
    Serial.println(" cm");
    delay(250);
}
