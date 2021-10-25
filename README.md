# Christmas_Lights_System
## Introducere

Proiectul consta in realizarea unui sistem inteligent de iluminare RGB controlabil de la distanta utilizand tehnologia Bluetooth.
Sistemul va fi implementat utilizand microcontroller-ul PIC18F24Q10 de la Microchip. 
## Descrierea sistemului
Proiectul presupune comandarea unei benzi led RGB de la distanta prin intermediul unui modul Bluetooth HC-05, conexiunea cu microcontroller-ul fiind realizata prin comunicatia seriala (UART).
### Parti componente
- microcontroller PIC18F24Q10;
- modul Bluetooth HC-05 (UART);
- banda led RGB 12V (30W);
- tranzistor TIP41 (PWM);
- senzor de lumina ambientala TEMT6000 (ADC).