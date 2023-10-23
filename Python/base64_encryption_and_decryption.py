import base64

def bs64():
    option = int(input('''\n---( options )---

1) Endcode
2) Decode

Choose a option: '''))

    if option == 1:
        msg = input("Type your message: ")
        ascii_enc = msg.encode("ascii")
        msg_b64 = base64.b64encode(ascii_enc)
        print("YOUR ENCODED MESSAGE:",msg_b64)

    elif option == 2:
        msg_decd = input("Enter the message to decode: ")
        dec_b64 = base64.b64decode(msg_decd)
        print("YOUR DECODED MESSAGE:",dec_b64)

    else:
        print("\nChoose a correct option!!")
        bs64()
bs64()

# for running multiple times
rn_lst = ["y","yes","Y","YES","Yes"]

runagain = input("\nDo you want to run again and again (y/n) ")
if runagain in rn_lst:
    while 1:
        bs64()    


# try my base64tool that was easy to do these stuffs
# https://github.com/jopraveen/Bas3_64
