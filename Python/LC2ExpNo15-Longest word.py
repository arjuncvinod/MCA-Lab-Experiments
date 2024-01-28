words = input("Enter a list of words separated by spaces: ").split()

longest_length = 0

for word in words:
    word_length = len(word)
    if word_length > longest_length:
        longest_length = word_length

print("Length of the longest word:", longest_length)