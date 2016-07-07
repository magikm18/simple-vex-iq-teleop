#define DRIVE_TYPE DRIVE_TANK
#define DRIVE_TANK_LEFT MOTOR_OUT(5) MOTOR_OUT(6)
#define DRIVE_TANK_RIGHT MOTOR_OUT(11) MOTOR_OUT(12)
#define DRIVE_TANK_INPUT_TYPE DRIVE_TANK_INPUT_COMPLEX
DRIVE_TANK_INPUT_COMPLEX_SPEED_JOYSTICK(A)
DRIVE_TANK_INPUT_COMPLEX_DIRECTION_JOYSTICK(C)
CONDITIONAL(rotation_sign, TOUCH_LED_BLINK(3, colorNone, colorGreen))
CONDITIONAL(rotation_sign, TOUCH_LED_BLINK(4, colorNone, colorGreen))
CONDITIONAL(!rotation_sign, TOUCH_LED_DIRECTION_BASED(3))
CONDITIONAL(!rotation_sign, TOUCH_LED_DIRECTION_BASED(4))
TOUCH_LED_CYCLE(1, 1)
TOUCH_LED_CYCLE(7, 1)
CONDITIONAL(BUTTON(RUp), POSITION_ADJUST(10, -30))
CONDITIONAL(BUTTON(RDown), POSITION_ADJUST(10, 30))
CONDITIONAL(BUTTON(RUp), POSITION_ADJUST(8, 30))
CONDITIONAL(BUTTON(RDown), POSITION_ADJUST(8, -30))
CONDITIONAL(BUTTON(RUp), POSITION_ADJUST(2, -30))
CONDITIONAL(BUTTON(RDown), POSITION_ADJUST(2, 30))
CONDITIONAL(BUTTON(LUp), SET_MOTOR(9, -127))
CONDITIONAL(BUTTON(LDown), SET_MOTOR(9, 127))
CONDITIONAL(!(BUTTON(LUp) || BUTTON(LDown)), SET_MOTOR(9, 0))
