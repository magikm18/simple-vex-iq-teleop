#define DRIVE_TYPE DRIVE_TANK
#define DRIVE_TANK_LEFT MOTOR_OUT(5) MOTOR_OUT(6)
#define DRIVE_TANK_RIGHT MOTOR_OUT(11) MOTOR_OUT(12)
#define DRIVE_TANK_INPUT_TYPE DRIVE_TANK_INPUT_COMPLEX
DRIVE_TANK_INPUT_COMPLEX_SPEED_JOYSTICK(A)
DRIVE_TANK_INPUT_COMPLEX_DIRECTION_JOYSTICK(C)
TOUCH_LED_DIRECTION_BASED(3)
TOUCH_LED_DIRECTION_BASED(4)
TOUCH_LED_CYCLE(1, 1)
TOUCH_LED_CYCLE(7, 1)
CONDITIONAL(BUTTON(RUp), SET_MOTOR(10, -127))
CONDITIONAL(BUTTON(RDown), SET_MOTOR(10, 127))
CONDITIONAL(!(BUTTON(RUp) || BUTTON(RDown)), SET_MOTOR(10, 0))
CONDITIONAL(BUTTON(RUp), SET_MOTOR(8, 127))
CONDITIONAL(BUTTON(RDown), SET_MOTOR(8, -127))
CONDITIONAL(!(BUTTON(RUp) || BUTTON(RDown)), SET_MOTOR(8, 0))
POSITION_MAINTAIN(9, 10, -)
CONDITIONAL(BUTTON(LUp), POSITION_MAINTAIN_INC(9))
CONDITIONAL(BUTTON(LDown), POSITION_MAINTAIN_DEC(9)
