class CompositeEquipment: public Equipment {
    public:
        virtual ~CompositeEquipment();
        
        virtual Watt Power();
        virtual Currency NetPrice();
        virtual Currency DiscountPrice();
        
        virtual void Add(Equipment*);
        virtual void Remove(Equipment*);
        virtual Iterator* CreateIterator();
        
        Currency CompositeEquipment::NetPrice () {
            Iterator* i = CreateIterator();
            Currency total = 0;
            
            for (i -> First(); !i -> IsDone(); i -> Next()) {
                total += i -> CurrentItem() -> NetPrice();
            }
            
            delete i;
            
            return total;
        }
        
     protected:
        CompositeEquipment(const char*);
        
     private:
        List _equipment;
};
