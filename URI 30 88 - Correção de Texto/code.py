'''
    Felipe Derkian - URI 3088 - Correção de texto
'''


def format_text(text):
    new_text = ""
    tam_text = len(text)
    
    arr = [",", "."]

    for i in range(tam_text):
        if text[i] == " " and text[i+1] in arr:
            new_text = new_text + text[i+1]
            i = i + 2
        elif text[i] in arr and text[i-1] == " ":
            continue
        else:
            new_text = new_text + text[i]
    
    return new_text




if __name__ == "__main__":
    
    while True:
        try:
            text = input()
            print("{}".format(format_text(text)))
        except EOFError:
            break    
