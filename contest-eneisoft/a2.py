encoded = input("")

# Turn the string into a list of shorter strings.
# For example: ["8", "5", "12", "12", "15"]
# you should handle input errors here, too
encoded_list = encoded.split(' ')

# Conver the list of strings to a list of integers
# For example: [8, 5, 12, 12, 15]
encoded_numbers = [int(character) for character in encoded_list]

# Decode the numbers and turn them back into strings using chr()
# For example: ["h", "e", "l", "l", "o"]
character_list = [chr(number + 96) for number in encoded_numbers]

# Finally, turn the list of characters into a single string using
# join, then print it
print("Decoded message:")
print("".join(character_list))