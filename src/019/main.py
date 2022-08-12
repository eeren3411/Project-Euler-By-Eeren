class Date:
    def __init__(self, day, month, year):
        self.day = day
        self.month = month
        self.year = year
    
    def __str__(self): return f"{self.day} / {self.month} / {self.year}"
    def __repr__(self): return self.__str__()

    def addWeek(self):
        def getMonthDays(month, year):
            if(month < 1 or month > 12): raise KeyError
            if(month in [4, 6, 9, 11]): return 30
            if( month in [1, 3, 5, 7, 8, 10, 12]): return 31
            
            if year%400 == 0: return 29
            if year%100 == 0: return 28
            if year%4 == 0: return 29
            return 28
        
        monthDays = getMonthDays(self.month, self.year)
        self.day += 7
        if self.day > monthDays:
            self.day = self.day % monthDays
            self.month += 1
        
        if self.month > 12:
            self.month = self.month % 12
            self.year += 1

        
def main():
    sunday = Date(7, 1, 1900)
    counter = 0
    while sunday.year < 2001:
        sunday.addWeek()
        if sunday.day == 1 and sunday.year > 1900:
            counter += 1
    
    print(counter)



if __name__ == "__main__":
    main()