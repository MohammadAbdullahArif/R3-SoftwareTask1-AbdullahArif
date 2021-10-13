# R3-SoftwareTask1-AbdullahArif
Two 7-segment displays connected to an arduino, displaying an input from a potentiometer with the range 0-99.
![image](https://user-images.githubusercontent.com/92419884/137069023-e6051c69-9b6b-4933-ac8d-75729665dbe3.png)


This project works by:
  - Taking in an input from a potentiometer which is in the range of 0-1023, and mapping it to a range of 0-99.
  - To change the range of the potentiometer (0-99) into something the CD4511 chip can take, which is 4 binary inputs, I first code the binary values for digits 0-9, then I split the number that is from 0-99 into the first and last digits for each 7-segment display. 
  - To find the first digit of a 2 digit number I divide the value by 10, and to get the second digit of the 2 digit number I take the remainder of the number when divided by 10.
  - Then those 2 digits are sent to the CD4511 chip which can display them to the 7-segments displays because I already coded the binary values for numbers 0-9.
  ![image](https://user-images.githubusercontent.com/92419884/137098172-ff27b6b9-8a41-4c54-859e-5f66657f6444.png)
