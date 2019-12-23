import RPi.GPIO as GPIO
from time import sleep

class Servo:
    def __init__(self, pin):
        self.pin = pin
        GPIO.setup(pin, GPIO.OUT)
    
    def getPin(self):
        return self.pin
    
    def setPin(self, pin):
        self.pin = pin

    def move(self, angle):
        pwm = GPIO.PWM(self.pin, 50)
        pwm.start(0)
        duty = angle/18+2
        GPIO.output(self.pin, True)
        pwm.ChangeDutyCycle(duty)
        sleep(1)

    
