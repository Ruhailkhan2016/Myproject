from mimetypes import init


class DemoClass : 
    
    a = 10
    def showvalue(self):
        
        self.c = self.a * self.a 
        print(self.c)
        
    def sum(self,a, b):
        
       
        print(a+b)
        
obj = DemoClass()

obj.showvalue()
obj.sum(20, 20)
