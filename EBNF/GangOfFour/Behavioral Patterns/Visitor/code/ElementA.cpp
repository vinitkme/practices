class ElementA : public Element {
    public:
        ElementA();
        
        virtual void Accept (Visitor& v) {
            v.VisitElementA(this);
        }
};
