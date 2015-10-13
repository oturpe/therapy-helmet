EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L TIP120 Q?
U 1 1 561C2C99
P 5500 4100
F 0 "Q?" H 5750 4175 50  0000 L CNN
F 1 "TIP120" H 5750 4100 50  0000 L CNN
F 2 "TO-220" H 5750 4025 50  0000 L CIN
F 3 "" H 5500 4100 50  0000 L CNN
	1    5500 4100
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 561C2D2D
P 5150 4100
F 0 "R?" V 5230 4100 50  0000 C CNN
F 1 "R" V 5150 4100 50  0000 C CNN
F 2 "" V 5080 4100 30  0000 C CNN
F 3 "" H 5150 4100 30  0000 C CNN
	1    5150 4100
	0    1    1    0   
$EndComp
$Comp
L DB15 J?
U 1 1 561C2DFE
P 3850 4400
F 0 "J?" H 3870 5250 70  0000 C CNN
F 1 "DB15" H 3800 3550 70  0000 C CNN
F 2 "" H 3850 4400 60  0000 C CNN
F 3 "" H 3850 4400 60  0000 C CNN
	1    3850 4400
	-1   0    0    1   
$EndComp
Wire Wire Line
	4900 4100 4900 4400
Wire Wire Line
	4900 4100 5000 4100
$Comp
L CONN_01X02 P?
U 1 1 561C3048
P 5800 3650
F 0 "P?" H 5800 3800 50  0000 C CNN
F 1 "CONN_01X02" V 5900 3650 50  0000 C CNN
F 2 "" H 5800 3650 60  0000 C CNN
F 3 "" H 5800 3650 60  0000 C CNN
	1    5800 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	5600 3900 5600 3700
Wire Wire Line
	4900 4400 4300 4400
Wire Wire Line
	4300 4600 4800 4600
Wire Wire Line
	4800 4600 4800 3600
Wire Wire Line
	4800 3600 5600 3600
Wire Wire Line
	4300 4500 5600 4500
Wire Wire Line
	5600 4500 5600 4300
Text Label 4350 4500 0    60   ~ 0
GND
Text Label 4350 4600 0    60   ~ 0
5V_reg
Text Label 4350 4400 0    60   ~ 0
20mA_d
$EndSCHEMATC
