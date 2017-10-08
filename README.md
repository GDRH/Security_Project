# Security_Project

####		Proiectul nostru are ca scop marirea nivelului de securitate, astfel, folosind ca hardware : 
####		1. Un [senzor de distanta](https://www.robofun.ro/senzor_sharp_%20GP2Y0A21YK).
####		2. O [placa Arduino Uno](https://www.robofun.ro/arduino_uno_v3).
####		3. Un [Raspberry Pi Model B](https://www.robofun.ro/raspberry-pi-v3).
####		Si ca software :
####		1. [Nerves](http://nerves-project.org)
####		2. [Phoenix](http://phoenixframework.org)

# Ce face proiectul?

#### Pe scurt, ceea ce vrem sa realizam este notificarea utilizatorului, deocamdata, prin afisarea in browser cand un corp este detectat de senzorul atasat la Arduino, acesta urmand sa trimita informatia la Raspberry prin seriala, iar acesta afisand-o cu ajutorul unui Phoenix App.

# Updates :

### Update 1 : Am adaugat codul pentru Arduino.
#### Descriere : 
##### - Senzorul de distanta va folosi pinul analogic 0, alaturi de pinul de 5V si un ground.
##### - Ledul va folosi pinul digital 13 si un ground.
##### - Difuzorul va folosi pinul digital 8 si un ground.

##### Functionalitate -> atunci cand senzorul de distanta detecteaza un corp, ledul se aprinde iar difuzorul produce un sunet.
##### Pentru mai multe detalii, puteti citi comentariile adaugate in cod, aflat in directorul Arduino Code.


# Stare : In dezvoltare...
