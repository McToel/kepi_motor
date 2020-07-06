#ifndef MOTOR_H
#define MOTOR_H

class Display;

class Motor
{
private:
	int pin1;
	int pin2;
	int nummer;
	int speed;
public:
	Motor(int kepi_shield_number);
	Motor(int pin_1, int pin_2);
	void attach(void);
	void set(int s);
};

#endif