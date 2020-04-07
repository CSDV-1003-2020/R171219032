class Box{
    private:
    int l, b, h;
    public:
    Box(){   // Default Constructor
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height){      //Paramerized Constructor
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& B){       // Copy Constructor
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLenght(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h;
    }

  // Functions added by Shivansh
  friend bool operator < ( Box&A,Box& B){
        if( (A.l < B.l)  ((A.b < B.b) && (A.l == B.l))  ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };

    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};
