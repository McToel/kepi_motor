#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int pin_1, int pin_2)
{
	pin1 = pin_1;
	pin2 = pin_2;
}

Motor::Motor(int kepi_shield_number) {
	if (kepi_shield_number > 2)
		kepi_shield_number = 2;
	else if (kepi_shield_number < 1)
		kepi_shield_number = 1;
	pin1 = (kepi_shield_number == 1) ? 3 : 6;
	pin2 = (kepi_shield_number == 1) ? 5 : 9;
}

void Motor::attach(void)
{
	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);
}

void Motor::set(int s)
{
	speed = s;
	if (speed > 255)
		speed = 255; //Set max speed
	else if (speed < -255)
		speed = -255;

	if (speed >= 0 && speed <= 255)
	{
		digitalWrite(pin1, LOW);
		analogWrite(pin2, speed);
	}
	else if (speed < 0 && speed >= -255)
	{
		digitalWrite(pin2, LOW);
		analogWrite(pin1, -speed);
	}
}
