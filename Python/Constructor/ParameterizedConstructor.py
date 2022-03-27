class DemoClass:
    
    # Parameterized constructor
    
    def __init__(self, name, id):
        
        print("This is Parameterized Construtor")

        self.name = name
        self.id = id
        
    def show(self):
        print("Hello", self.name, self.id)
        
obj = DemoClass("Ruhail","8958")
obj.show()