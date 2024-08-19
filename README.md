# Birds Aren't Real - Surveillance Bird

## Overview

This repository contains the code for an ESP32 microcontroller . The project is designed for the Surveillance Bird found at https://www.lampysecurity.com/. The complete guide can be found at the link provided.

## Contents

-   birdbrain.ino
-  ReadMe.md (this file)

## Requirements

### Hardware

-   ESP32 microcontroller
-   3D Printer (e.g., Ender 3, Prusa, etc.)
-   1 LED
-   1 Micro Servo
-  1 Power Cell

### Software

-   Arduino IDE
-   3D slicing software (Cura, PrusaSlicer, Bambu Labs)

## Instructions

### 1. Setting Up the ESP32

1.  **Clone the repository:**
    
    bash
    
    Copy code
    
    `git clone [the .git link to this repo]`
    
2.  **Open the code:**
    
    -   Open the `birdbrain.ino` file in Arduino IDE.
    - 
3.  **Configure the code:**
    
    Change any of the timing or servo movements. Otherwise leave as default
    
5.  **Upload the code to the ESP32:**
    
    Select the appropriate board and port:
    
    -   **Board:** ESP32 Dev Module (Sparkfun Pro Micro) 
    -   **Port:** Choose the COM port your ESP32 is connected to
    
    Then, upload the code.
    

### 2. 3D Printing the Parts

1.  **Download  the STL files:**
    https://www.printables.com/model/975439-birds-are-not-real-surveillance-bird
    
2.  **Slice the STL files:**
    
    Open each STL file in your preferred slicing software (Bambu Labs,Cura, etc.).
    
3.  **Recommended print settings:**
    
    -   **Material:** PLA or PETG
    -   **Layer height:** 0.2mm
    -   **Infill:** 15%
    -   **Supports:** Yes
4.  **Print the parts:**
    
    Send the sliced files to your 3D printer and print each part.
    

### 3. Assembly and Integration

1.  Once the parts are printed, assemble them according to instructions on Lampy Security.
2.  Integrate the ESP32 with the printed parts, ensuring proper connections for LED and ESP32.

## Contributing

Feel free to fork the project, create pull requests, or submit issues if you encounter any bugs or have suggestions for improvements.
