def kuldip_saha_mugdha():
    n=int(input())
    a=list(map(int,input().split()))
    if a[n-1]%10==0:
        print("Yes")
    else:
        print("No")

if __name__ == '__main__':
    kuldip_saha_mugdha()