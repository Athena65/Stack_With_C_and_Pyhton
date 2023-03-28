es=0
boyut=10
yigin=[]



def push(veri):
    global es
    if es<boyut:
        print("push girildi")
        yigin.insert(es,veri)
        es=es+1
        for x in range(0,es):
            print(yigin[x])
    else:
        print("dizi boyutuna ulasildi")
def pop():
    global es
    i=0;
    if es<=0:
        print("yigin bos")
        
    es=es-1
    
    for x in range(0,es):
        print(yigin[x])
    
     

while 1:
    islem=int(input("push =>1 pop=>0"))
    if int(islem)==1:
        a=(input("eklenecek sayiyi girin"))
        push(a)
    elif int(islem)==0:
        pop()

