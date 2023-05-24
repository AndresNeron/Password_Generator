# Random Password Generator

This is a simple C program that generates long lists of randomized and customized passwords based on your requirements. 
The passwords are generated using a combination of characters from different character ranges. The generated passwords 
can be stored in a safe location, such as an open-source password manager or a secure directory.

## Prerequisites

To compile and run this program, you need:

- C compiler (e.g., GCC)
- Standard C libraries: `stdio.h`, `stdlib.h`, `time.h`, `limits.h`

## Usage

1. Clone the repository or download the source code files.
2. Compile the code using a C compiler. For example, if you are using Linux, use GCC:
	gcc main.c -o password_generator
3. Run the executable with:
	./password_generator
4. Follow the prompts to enter the password length and the total number of passwords you want to generate.
5. The generated passwords will be displayed on the console and saved in a `results.txt` file. You can change the output name modifying the code.

## Customization

You can customize the program by modifying the following aspects:

- **Password Length**: When prompted, enter the desired length of the generated passwords. The longer the length, the more complex the passwords.
- **Character Ranges**: The program uses four character ranges: symbols (#$%!), numbers (123), uppercase letters (ABC), and lowercase letters (abc). 
You can modify these ranges by changing the corresponding ASCII codes in the `Box` struct.

## Note

- Ensure you store the generated passwords securely. Consider using a password manager or a secure storage method.
- It is always recommended to follow best practices for password security.

## License

This project is licensed under the [MIT License](LICENSE).


