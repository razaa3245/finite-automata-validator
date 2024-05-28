# Finite Automata String Validator

This project checks whether strings match the given regular expression `ed+ee+f(ddd+dd+d)*` using a deterministic finite automata (DFA) approach.

## Overview

The program reads strings from a `input.txt` file and determines if they are accepted based on the provided regular expression. It outputs whether each string is accepted or not.

## Files

- `main.cpp`: The main C++ source file that contains the DFA logic.
- `input.txt`: A text file containing strings to be checked, one per line.
- `README.md`: This file, providing an overview and instructions.
- `LICENSE`: The project license.
- `.gitignore`: Specifies files and directories to be ignored by Git.
- `JFLAP.jff`: A JFLAP file containg the DFA. Open this file in JFLAP -> (prerequisies Java Developmet Kit) 

## Getting Started

### Prerequisites

- C++ compiler (e.g., `g++`)

### Running the Program

**1. Clone the repository:**
   git clone https://github.com/razaa3245/finite-automata-validator.git
   cd finite-automata-validator
   
**2. Compile the program:**
   g++ -o validator main.cpp

**3. Prepare the input file**
   Create or edit input.txt to include strings to be checked, one per line.

**3. Run the program**
   ./validator

***********************************************************************************************************************************************

**License**
This project is licensed under the MIT License - see the LICENSE file for details.

**Contributing**
Contributions are welcome! Please open an issue or submit a pull request.

**Contact**
For any inquiries, please contact at razaa3245@gmail.com.

   



   

