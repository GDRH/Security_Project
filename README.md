# Security_Project

####		Proiectul nostru are ca scop marirea nivelului de securitate, astfel, folosind ca hardware : 
####		1. Un [senzor de distanta](https://www.robofun.ro/senzor_sharp_%20GP2Y0A21YK).
####		2. O [placa Arduino Uno](https://www.robofun.ro/arduino_uno_v3).
####		3. Un [Raspberry Pi 3 Model B](https://www.robofun.ro/raspberry-pi-v3).
####		Si ca software :
####		1. [Nerves](http://nerves-project.org)
####		2. [Phoenix](http://phoenixframework.org)

# Ce face proiectul?

#### Pe scurt, ceea ce vrem sa realizam este notificarea utilizatorului, deocamdata, prin afisarea in browser cand un corp este detectat de senzorul atasat la Arduino, acesta urmand sa trimita informatia la Raspberry prin seriala, iar acesta afisand-o cu ajutorul unui Phoenix App.

# Cum il putem folosi?

### In primul rand, componentele fizice trebuie conectate, astfel senzorul, ledul si dufuzorul se vor conecta la Arduino dupa cum este descris in cod, Arduino se va conecta prin seriala la Raspberry Pi, iar acesta mai departe la internet, deocamdata prin cablu, urmand sa introducem si optiune de conexiune Wi-Fi.

### Astfel, vom incarca codul in Arduino cu programul [Arduino IDE](https://www.arduino.cc/en/Main/Software) iar in Raspberry Pi, folosind un card de memorie si introducand urmatoarele comenzi in terminal :

#### -> $ cd ~/Security_Project/firmware ( accesam directorul firmware din proiect )
#### -> $ export MIX_TARGET=rpi3 ( declaram ceea ce folosim pentru a putea incarca un software corespunzator, in cazul nostru Raspberry Pi 3 )
#### -> $ mix deps.get ( incarcam dependintele necesare pentru placuta noastra de dezvoltare )
#### -> $ mix firmware ( producem software-ul )
#### -> $ mix firmware.burn ( il incarcam pe cardul de memorie ) 

# Updates :

### Update 2 : Elixir receiver adaugat.
#### Descriere :
##### - Am adaugat cod in Elixir pentru primirea mesajelor din Arduino prin seriala.
##### - Deocamdata mesajul de urgenta este afisat in Elixir Shell-ul din Raspberry Pi

### Update 1 : Am adaugat codul pentru Arduino.
#### Descriere : 
##### - Senzorul de distanta va folosi pinul analogic 0, alaturi de pinul de 5V si un ground.
##### - Ledul va folosi pinul digital 13 si un ground.
##### - Difuzorul va folosi pinul digital 8 si un ground.

##### Functionalitate -> atunci cand senzorul de distanta detecteaza un corp, ledul se aprinde iar difuzorul produce un sunet.
##### Pentru mai multe detalii, puteti citi comentariile adaugate in cod, aflat in directorul Arduino Code.


# Stare : In dezvoltare...
