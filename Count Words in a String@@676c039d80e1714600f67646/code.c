// Your code here...
def count_words(string):
    # Split the string into words using whitespace as the delimiter
    words = string.split()
    # Return the number of words
    return len(words)

# Example usage
text = "This is an example string."
word_count = count_words(text)
print(f"The number of words in the string is: {word_count}")