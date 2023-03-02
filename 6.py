i = 1
w = 1
k = 0
l = 0

while True:
    data = input("Enter a number (not 0): ")
    checkInput = data.strip()
    if checkInput.isdigit():
        num = int(checkInput)
        break

while True:
    dataOption = input("\nEnter 'm' for multiplication OR 's' for sum: ")
    checkOption = dataOption.strip().lower()
    if checkOption == 'm':
        while (i < num):
            print("{} x".format(i), end = " ")
            w *= i
            i += 1
        print("{} =".format(i), end = " ")
        print("{}\n".format(w * i), end = " ")
        break
    if checkOption == 's':
        while (k < num):
            print("{} +".format(k), end = " ")
            l += k
            k += 1
        print("{} =".format(k), end = " ")
        print("{}\n".format(l + k), end = " ")
        break
    else:
        print("Invalid character")
