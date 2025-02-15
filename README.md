# Login & Registration System

## Description
This is a simple C++ console-based Login and Registration System that allows users to register, login, and recover forgotten passwords using a text file as the database.

## Features
- User registration with a username and password.
- User login authentication.
- Password recovery by entering the username.
- Data is stored in a `users.txt` file.

## How It Works
1. Users can **register** by providing a username and password. The credentials are stored in `users.txt`.
2. Users can **log in** by entering their registered credentials. The system checks if they match any stored credentials.
3. If a user forgets their password, they can **recover it** by entering their username. If found, the stored password is displayed.
4. The system runs in a loop allowing users to choose different actions until they choose to exit.

## Usage
### Compilation
To compile the program, use a C++ compiler like `g++`:
```sh
 g++ login_system.cpp -o login_system
```

### Running the Program
After compilation, run the executable:
```sh
 ./login_system
```

### Menu Options
- **1: Register** - Create a new account.
- **2: Login** - Authenticate with an existing account.
- **3: Forgot Password** - Retrieve a forgotten password.
- **4: Exit** - Close the application.

## File Storage
The program stores user credentials in `users.txt` in the following format:
```
username1 password1
username2 password2
```

## Security Considerations
- Passwords are stored in plaintext, which is insecure. Consider implementing hashing for better security.
- The system does not prevent duplicate usernames.
- No input validation is implemented (e.g., minimum password length, special character requirements).

## Future Improvements
- Encrypt stored passwords using hashing (e.g., SHA-256).
- Improve input validation.
- Implement a more secure user authentication system.

## License
This project is open-source and free to use.

