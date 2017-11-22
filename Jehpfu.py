n = int(input())#约瑟夫环
print(int(bin(n).replace('1','0',1), 2)<<1|1)#向左循环一位