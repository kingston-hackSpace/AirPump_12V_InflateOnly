# AirPump12V - Inflate Only

### DESCRIPTION

In this tutorial we will cover how to use a **12V Air Pump** to inflate small-scale projects.

WARNING!

- These pumps ***CANNOT be used to pump water!!***

- *For inflate/deflate control, please see the tutorial: AirPump_5V_InflateDeflate(upcoming)*

----
### HARDWARE

- 12V AIR PUMP MOTOR [(see reference here)](https://www.amazon.co.uk/Air-Pump-Electric-Treatment-Instrument/dp/B07DVBQJCR/ref=sr_1_23?crid=1L7NWWG8P9IBG&dib=eyJ2IjoiMSJ9.YShmAT7wrytZr1ejdHUFZgccEWtW45FyA6--uZ_O1-peFT6fYlCwbLU8E60L9ZuOim5h2tdK9T6AX9kfb2EOTjJll1_MVFBKtgFUoxjXEn1dm34siE9V3n0WUUKlXAPSL-HYU5B-NESsJanyJ0ihM18aNJAOtVrphsxrpzo5kj7ip22Pzm4reQfIs9INAFSpS-Npim9UX4pa-hKNnT8Q9HUXGe0C9R_wmI7amucx_dhVfhkNXvAnqn_c1p2Zuel0c6zng6n-E1Qa7s_RKMvjwu-Gj48slK-JQaxBjqwfEN4.EqRwtwvLa5psazKiVNd5NeGAzjCb4GxcbkWmbMlGh70&dib_tag=se&keywords=12v+air+pump&qid=1763992476&sprefix=12v+air+pump%2Caps%2C82&sr=8-23)
- SILICONE TUBING
- IRLZ44N MOSFET 
- Arduino UNO
- LED
- 12V 1A Power Supply
- Diode 1N4007
- 100 ohms resistor
- 100K ohms resistor

----
### WIRING
Reference image [here](pending)

----
### CODE

Download code [here](pending)

---
### UNDERSTANDING MOSFET CONTROL

This tutorial aims to power and control a ***12V 400mA Air Pump***, however, the Arduino Board only outputs up to 5V and ~20mA, which is far too little to drive the pump directly. 

For this reason, we need to power the pump from the 12V 1A Power Supply while Arduino only provides signal control. To achieve this, we will need an N-channel logic-level MOSFET, specifically, the ***IRLZ44N*** which can handle our desired switch voltage control. 

When we send an Arduino HIGH signal (5V) to the MOSFET'S GATE pin, the MOSFET allows the flow of electricity and the pump starts blowing air.

When we send an Arduino LOW signal (0V) to the MOSFET'S GATE pin, the MOSFET switches off and stops the current flow, turning the pump off.

### UNDERSTANDING DIODE ROLE IN OUR CIRCUIT

A diode is an electronic component that allows current to flow in only one direction.

In our circuit, we want to protect our MOSFET from voltage spikes when the pump switches off (which can damage the MOSFET and Arduino). The diode, placed across the pump terminals, provides a safe electrical path, protecting our circuit. 

