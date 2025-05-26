"""
MP 09 AA 0001

MP 09 BO 1234
MP 09 BO 1235
MP 09 BO 1236
MP 09 BO 1237
MP 09 BO 1238
MP 09 BO 1239
MP 09 BO 1240
MP 09 BO 1241
MP 09 BO 1242
MP 09 BO 1243

MP 09 BO 9999
MP 09 BP 0001

MP 09 BZ 9999
MP 09 CA 0001

MP 09 ZZ 9997
MP 09 ZZ 9998

MP 09 ZZ 9999
Closed"""

userInput = input("Enter Vehicle number input:")

alphaInput = userInput[6:8]
print(alphaInput)

numericInput = userInput[9:13]
print(numericInput)

for x in alphaInput:
    if x in range('AA', 'ZZ'):
        x++
       