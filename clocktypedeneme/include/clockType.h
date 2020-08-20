#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H


class clockType
{
    public:

        void setTime(int,int,int);
        void getTime(int&,int&,int&);
        void printTime()const;
        void incrementSeconds();
        void incrementMinutes();
        void incremenetHours();
        bool equalTime(const clockType& otherTime) const;//otherClock parametresi sabit bir referans parametresidir.Bu, equalTime iþlevine yapýlan çaðrýda, otherClock parametresi, asýl parametrenin adresini alýr, ancak otherClock, asýl parametrenin deðerini deðiþtiremez.
        clockType();
        virtual ~clockType();

    protected:

    private:
        //bunlara class dýþýnda doðrudan eriþemezsin
        //fonksiyonlar ile eriþebilirsin
        int hr;
        int minn;
        int sec;
};

#endif // CLOCKTYPE_H
