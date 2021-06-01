#ifndef _CHAPTER_15_1_H_
#define _CHAPTEr_15_1_H_
class Tv;
class Remote;

class Tv
{
  public:
    friend class Remote;
    enum{ Off, On };
    enum{ Minval, Maxval = 20 };
    enum{ Antenna, Cable };
    enum{ TV, DVD };

    Tv( int s= Off, int mc = 125 ) : state(s),volume(5),maxchannel(mc),channel(2),mode(Cable),input(TV){}
    void onoff() { state = (state == On) ? Off:On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV; }
    void setting() const;
    void change_r_mode( Remote & r );
  private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};

class Remote
{
  private:
    friend class Tv;
    int mode;
    int r_mode;
    enum { Normal, Interact };
  public:
    Remote( int m = Tv::TV ) : mode(m) { (r_mode == Normal)?Normal:Interact; }
    bool volup(Tv & t) { return t.volup(); }
    bool voldown( Tv & t ) { return t.voldown(); }
    void onoff( Tv & t ) { t.onoff(); }
    void chanup( Tv & t ) { t.chanup(); }
    void chandown( Tv & t ) { t.chandown(); }
    void set_chan( Tv & t, int c ) { t.channel = c; }
    void set_mode( Tv & t ) { t.set_mode(); }
    void set_input( Tv & t ) { t.set_input(); }
    void show_r_mode(  );
};

#endif