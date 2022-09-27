tabla = {
  '+x' : {'+y':'+y', '-y':'-y', '+z':'+z', '-z':'-z'},
  '-x' : {'+y':'-y', '-y':'+y', '+z':'-z', '-z':'+z'},
  '+y' : {'+y':'-x', '-y':'+x', '+z':'+y', '-z':'+y'},
  '-y' : {'+y':'+x', '-y':'-x', '+z':'-y', '-z':'-y'},
  '+z' : {'+y':'+z', '-y':'+z', '+z':'-x', '-z':'+x'},
  '-z' : {'+y':'-z', '-y':'-z', '+z':'+x', '-z':'-x'}
}


while True:
    tam = int(input())
    if tam == 0:
        break

    bends = input().split()
    des = '+x'
    for i in bends:
        if i == 'No':
            continue
        else:
            des = tabla[des][i]

    print(des)