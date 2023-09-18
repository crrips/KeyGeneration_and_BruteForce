# Key Generation and Brute Force

This repository contains a C++ program that generates a random key based on the user's selection of the number of bits (8, 16, 32, 64, etc.). It then attempts to brute force the generated key and find a match, measuring the time taken for this process.

## Overview

The program offers a menu to select the number of bits for the key generation. Once the user makes a selection, it generates a random key based on the specified number of bits and attempts to brute force a matching key.

## Usage

1. Clone the repository or download the `key_generation.cpp` file.
2. Compile the code using a C++ compiler.
3. Run the compiled executable.
4. Choose the number of bits for the key generation by selecting an option from the menu.
5. The program will generate a random key and attempt to find a matching key, displaying the generated and random keys, as well as the time taken for the brute force process.

## Code Structure

The code consists of the following main functions:

- `Menu()`: Displays the menu for selecting the number of bits.
- `randKey(int x)`: Generates a random key based on the selected number of bits.
- `genANDfind(int x)`: Attempts to brute force a matching key and measures the time taken.
- `bruteForce(int x)`: Calls `randKey` and `genANDfind` to perform the key generation and brute force attempts.
- `main()`: Implements the main logic, taking user input for the number of bits and invoking the appropriate functions.
