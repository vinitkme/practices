class Visitor {
    public:
        // ...
        //void VisitMyType(MyType*);
        //void VisitYourType(YourType*);
        virtual void VisitElementA(ElementA*);
        virtual void VisitElementB(ElementB*);
        
    protected:
        Visitor();
};
