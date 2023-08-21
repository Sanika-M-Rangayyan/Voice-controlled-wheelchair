import serial
from serial import Serial
import time
import speech_recognition as sr
import pyttsx3
serialcomm=serial.Serial('COM3',9600)
serialcomm.timeout=1

r=sr.Recognizer()

while True:
    command=""
    with sr.Microphone() as source2:
        r.adjust_for_ambient_noise(source2,duration=2)
        print("speak::")
        audio2=r.listen(source2)
        try:
            MyText=r.recognize_google(audio2)
            MyText=MyText.lower()
            print(MyText)
            if MyText=="front":
                command="f"
            elif MyText=="back":
                command="b"
            elif MyText=="right":
                command="r"
            elif MyText=="left":
                command="l"
            elif MyText=="stop":
                command="s"
            if(MyText=="front"):
                serialcomm.write(command.encode())
                time.sleep(0.5)
                print(serialcomm.readline().decode('ascii'))
            elif(MyText=="back"):
                serialcomm.write(command.encode())
                time.sleep(0.5)
                print(serialcomm.readline().decode('ascii'))
            elif(MyText=="stop"):
                serialcomm.write(command.encode())
                time.sleep(0.5)
                print(serialcomm.readline().decode('ascii'))
            elif(MyText=="right"):
                serialcomm.write(command.encode())
                time.sleep(0.5)
                print(serialcomm.readline().decode('ascii'))
            elif(MyText=="left"):
                serialcomm.write(command.encode())
                time.sleep(0.5)
                print(serialcomm.readline().decode('ascii'))
        except:
            print("No command found")
serialcomm.close()
         



