from time import sleep
import RPi.GPIO as GPIO
import Servo

GPIO.setmode(GPIO.BOARD)

servo11 = Servo(11)
servo13 = Servo(13)
servo15 = Servo(15)
servo31 = Servo(31)
servo29 = Servo(29)

while True:
    servo11.move(110)
    servo13.move(80)
    servo15.move(45)
    servo29.move(80)
    servo15.move(90)
    servo11.move(0)
    servo15.move(45)
    servo29.move(45)
