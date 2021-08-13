import pyttsx3
import datetime
import speech_recognition as sr
import pyaudio
import wikipedia
import webbrowser
import os
import smtplib
engine=pyttsx3.init('sapi5') #to use the inbuilt voice of the window
voices=engine.getProperty('voices')
# print(voices[0].id)
engine.setProperty('voice',voices[0].id)
def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def WishMe():
    hour=datetime.datetime.now().hour
    if hour>=0 and hour<12:
        speak("Good morning")
    elif hour>=12 and hour<18:
        speak("Good Afternoon")
    else:
        speak("Good Evening")
    speak(" Archana , Iam Jarvis. Please tell me how may I help you")

def takeCommand():
    #it takes microphone input from the user and returns sting output

    r=sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold=1 
        audio=r.listen(source)
    try:
        print('Recognising..')
        query=r.recognize_google(audio,language='en-in')#Using google for voice recognition.
        print(f"User said: {query}\n")#User query will be printed.
    except Exception as e:
        print("Say that again please") #Say that again will be printed in case of improper voice 
        return "None" #None string will be returned
    return query
    
def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.login('uppalabarchana@gmail.com', 'BMape@11124789')
    server.sendmail('uppalabarchana@gmail.com', to, content)
    server.close()


if __name__=="__main__":
    # speak('Archana is a good girl')
    WishMe()
    while True:
    #if 1:
     query=takeCommand().lower() #Converting user query into lower case

      #logic for executing tasks based on queries
     
     if 'wikipedia' in query:  #if wikipedia found in the query then this block will be executed
        speak('Searching wikipedia')
        quert=query.replace('wikipedia','')
        results=wikipedia.summary(query,sentences=2)
        speak("According to wikipedia...")
        print(results)
        speak(results)
     
     elif 'open youtube' in query:
         webbrowser.open("youtube.com")
     
     elif 'open google' in query:
         webbrowser.open("google.com")
     
     elif 'open stack overflow' in query:
         webbrowser.open("stackoverflow.com")
     
     elif 'play music' in query:
         music_dir = 'D:\\Non Critical\\songs\\Favorite Songs2'
         songs = os.listdir(music_dir)
         print(songs)    
         os.startfile(os.path.join(music_dir, songs[0]))
     
     elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")    
            speak(f"Archana, the time is {strTime}")
     
     elif 'open code' in query:
            codePath = "C:\\Users\\user\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"
            os.startfile(codePath)
     elif 'email to Archana' in query:
         try:
             speak("What should I say?" )
             content=takeCommand()
             to="uppalabarchana@gmail.com"
             sendEmail(to,content)
             speak("Email has been sent!")
         except Exception as e:
             print(e)
             speak("Sorry  Archana , Iam not able send the email at the moment ")

