from pwn import *

# Path to your binary
binary_path = "./your_binary"

# Create a process to interact with the binary
p = process(binary_path)

# Convert the hex array to bytes
hex_array = [
    0xe3, 0xfb, 0x94, 0x73, 0x28, 0xa3, 0xbd, 0xd9,
    0x21, 0x6f, 0x63, 0x7a, 0x14, 0xef, 0xbe, 0x6b,
    0x75, 0x10, 0xe9, 0xad, 0x79, 0x65, 0x74, 0x93,
    0xc1, 0x1b, 0x1
]
byte_array = bytes(hex_array)

# Send the byte array to the binary's stdin
p.send(byte_array)

# If you expect output, you can receive it
response = p.recv()

# Print the response from the binary
print(response)

# Close the process
p.close()
