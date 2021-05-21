def namelist(names) -> str:
    #your code here
    n = len(names)
    
    string = ''
    
    if n == 0:
        return string
    if n == 1:
        return names[0]['name']
    for i in range(n-2):
        name = names[i]['name']
        string += f'{name}, '
    string += f"{names[n-2]['name']} & {names[n-1]['name']}"
    
    return string