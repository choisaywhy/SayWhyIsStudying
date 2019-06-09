# class lion():
#     def cry(self):
#         print('어흥')

# class apple():
#     def cry(self):
#         print('사각')
# class sehwa(lion,apple):
#     def cry(self):
#         print('응애')


# a = sehwa()

# a.cry()

# sehwa.mro()
# mro == 출력순서를 알려줌

#---------------------------------------------

# class A():
#     def cry(self):
#         print('a')

# class B(A):
#     def cry(self):
#         print('b')

# class C(A):
#     def cry(self):
#         print('c')

# class D(B,C):
#     def cry(self):
#         print('d')


# a = D()

# a.cry()

#--------------------------------------------
# 부모에게 도움받기
# class A():
#     def __init__(self,name):
#         self.name=name


# class B(A):
#     def cry(self):
#         print('b')

# class C(A):
#     def cry(self):
#         print('c')

# class D(B,C):
#     def __init__(self,name):
#             super().__init__(name)

#     def cry(self):
#         print(self.name)


# a = D('hoho')

# a.cry()

#--------------------------------------------

# 메서드 타입
# 클래스 메서드는 클래스 전체에 영향을 미친다.

# class A():
#     count = 0
#     def __init__(self):
#         A.count +=1

#     @classmethod
#     def kids(cls):
#         print('A has',cls.count,'littls objects') #A.count로 접근 가능


# a1 = A()
# a2 = A()
# a2 = A()
# A.kids()

#---------------------------------------------------

class A():
    def __init__(self):
        self.__count = 1
    
    def hoho(self,__count):
        return int(self.__count)

a = A.hoho(1)
print(a())