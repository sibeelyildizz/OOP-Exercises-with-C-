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
        bool equalTime(const clockType& otherTime) const;//otherClock parametresi sabit bir referans parametresidir.Bu, equalTime i�levine yap�lan �a�r�da, otherClock parametresi, as�l parametrenin adresini al�r, ancak otherClock, as�l parametrenin de�erini de�i�tiremez.
        clockType();
        virtual ~clockType();

    protected:

    private:
        //bunlara class d���nda do�rudan eri�emezsin
        //fonksiyonlar ile eri�ebilirsin
        int hr;
        int minn;
        int sec;
};

#endif // CLOCKTYPE_H
