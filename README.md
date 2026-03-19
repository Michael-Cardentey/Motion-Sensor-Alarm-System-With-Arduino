#  Motion Sensor System Guide

Simple motion sensor system with LED light functionality. Later down the road I want to expand upon it and add a buzzer compopnent and possibly a mini camera with a screen. I cataloged all of the steps I took to create it in case anybody wants to follow along or learn how arduino works

## Hardware requirements:
* [Arduino board](https://www.microcenter.com/product/615097/inland-nano-development-board-arduino-compatible) (I personally used a nano)
* [Mini-B USB cable](https://www.microcenter.com/product/308060/qvs-usb-20-(type-a)-male-to-usb-mini-b-5-pin-male-cable-3-ft-black) (Connect the arduino to your pc to provide it power)
* [Bread board](https://www.microcenter.com/product/618901/inland-400-tie-point-breadboard) (creates a circuit so you dont have to solder, makes prototyping a lot easier)
* [PIR motion sensor](https://www.microcenter.com/product/618776/inland-pir-motion-sensor-module) (how the arduino actually detects motion, most important part of the project) 
* [LED](https://www.microcenter.com/product/689158/leo-sales-ltd-bright-deep-red-led-5mm-10-pack) (used to indicate that motion was detected)
* [male-to-male wires](https://www.microcenter.com/product/454417/mcm-electronics-male-to-male-jumper-wires-(40-pack)) (These create an electrical connection between all the components of the project)
* [270 Ohm resistors](https://www.microcenter.com/product/689184/leo-sales-ltd-resistors-05w-270ohm-metal-oxide-10-pack) (Limits the current going through your wires, makes sure the components dont explode)
* [(Optional: Buzzer)](https://www.microcenter.com/product/662094/philmore-b814-3v-dc-miniature-buzzer)

**You can buy all of these components for cheap online or at your local micro center**

Before we start, it's important to understand how a breadboard works if you're just beginning, it'll make digesting this information a whole lot easier. The breadboard lets you prototype with your Arduino without soldering anything. 
It works by giving you tiny holes to plug components into, and underneath those holes are metal clips that connect them in a specific pattern. The middle line acts as an insulating divider and allows integrated circuits to fit onto the 
breadboard. With the letters on a breadboard facing you, the numbered rows (like row 22) all form a circuit vertically, meaning you could plug two different pins into the same row and they'd be electrically connected. So instead of 
soldering wires directly, we can simply plug our Arduino's 5V pin into a row on the breadboard using a jumper wire, then connect the other end of that wire to whatever row another component is sitting in. This creates a path for
electricity to flow between them, all without us having to solder anything.

**The 270 Ohm resistor is really important as it keeps too much current from flowing through your cables. Without it, the LED light would immediately burn out almost instantly.**

## Step 1:
Connect your arduino, light, and sensor to the breadboard, making sure to leave enough space between them to connect your male-to-male cables along the same row.

Be sure to connect the resistor on the same row as the LED's + pin (it will have two pins, the + is the longer of the two) with both pins on the same row but opposite ends of the middle gap. This creates a break in the circuits
and is what actually allows electricity to flow through it.

## Step 2: 
connect your arduino pins to these pins in the sensor 
* 5v -> v
* GND -> G
* D2 -> S
  
For the LED light
* GND -> - pin
* D3 -> + pin (this will also be on the same row as the resistor)

## Step 3:
Download the arduino IDE and copy paste the code included in the pir_sensor.ino file. You can tinker around with it however you like. From my research cheap sensors like the one I got require some time to boot up otherwise they wont be as precise so i coded in 
a 30 second delay.

## Step 4:
Be sure that by now you have your arduino connected to your computer via the mini-b USB cable. In the IDE itself, select your board and port and then click on upload to send all your code into the arduino. Now you should have a fully functional 
motion sensor system that you can customize and build on however you like!
