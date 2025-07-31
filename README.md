
#This is a fork of the original project created by @asstaut, to which I contributed


# FEDS(File Encryption Decryption System)

"FEDS" refers to the file encryption and decryption system, which is a program to encrypt and decrypt text files.
The encryption part of the program uses Vigenère Cipher and Rail Fence Cipher as the means of encoding the data. It will encode the files according to the key/depth given by the user. 
For the development of FEDS, C++ shall be used for the back end and Qt for the designing the front-end.


## Development
For the development of FEDS,


| Backend | Frontend   |
| :-------- | :------- | 
| **C++**  | **Qt Creator 14.0.1** |

## Prerequisites
To run this project

| OS                  | Compiler          |    Software            |
| :--------         | :-------             | :------------------------- |
| `Windows 7 or higher` | `G++ as Compiler` | **Qt Creator 14.0.1** or higher|



**This Project can only operate with .txt files for now!**

## Deployment
Release **FEDSv1"** already has deployed exe folder

#### If the exe file doesn't run

```bash
  FEDSv1>debug folder>copy encdec.exe>create new folder(exe)>paste encdec.exe

  Open Qt(MinGW)cmd> cd <file location for the exe folder>
  windeployqt.exe>windeployqt.exe . >exit

  Open exe folder > run encdec.exe
```



## Demo



![demo](https://github.com/user-attachments/assets/79d48bfa-bf4e-4c4c-86e8-08689baf442f)


