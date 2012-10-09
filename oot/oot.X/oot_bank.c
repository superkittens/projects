/*This is a bank of OOT Songs
 * List:
 * Minuet of Forest
 * Song of Storms
 * Bolero of Fire
 * Prelude of Light
 *
 * This could have been coded much more efficiently but oh well...It's a quick
 * hack after all.
 *
 * What's happening here is basically a brute force, hard coding every single
 * note in each song.  I won't dive into details but you can email me if you're
 * interested in how this all works.
*/

#include "oot_bank.h"
#include "midi.h"
#include <Delays.h>

#define T Delay10KTCYx(17);
#define TH Delay10KTCYx(8);


void storms(void)
{
    int i = 0;

    setTempo(190);
    setInstrument(0,21);
    setInstrument(1,21);
    setInstrument(2,73);
/*
    for(i = 0; i < 2; i++)
    {
        playNote(0,50);
        nr('q');
        playNote(1,57);
        nr('q');
        stopNote(1,57);
        playNote(1,57);
        nr('q');
        stopNote(0,50);
        stopNote(1,57);

        playNote(0,52);
        nr('q');
        playNote(1,59);
        nr('h');
        stopNote(0,52);
        stopNote(1,59);


        playNote(0,53);
        nr('q');
        playNote(1,60);
        nr('q');
        stopNote(1,60);
        playNote(1,60);
        nr('q');
        stopNote(0,53);
        stopNote(1,60);

        playNote(0,52);
        nr('q');
        playNote(1,59);
        nr('h');
        stopNote(0,52);
        stopNote(1,59);

    }
 */

  playNote(0,50);
  playNote(2,74);
  nr('e');
  stopNote(2,74);
  playNote(2,77);
  nr('e');
  stopNote(2,77);
  playNote(1,57);
  playNote(2,86);
  nr('q');
  stopNote(1,57);
  stopNote(2,86);
  playNote(1,57);
  nr('q');
  stopNote(0,50);
  stopNote(1,57);

  playNote(0,52);
  playNote(2,74);
  nr('e');
  stopNote(2,74);
  playNote(2,77);
  nr('e');
  stopNote(2,77);
  playNote(1,59);
  playNote(2,86);
  nr('h');
  stopNote(0,52);
  stopNote(1,59);
  stopNote(2,86);

  playNote(0,53);
  playNote(2,88);
  nr('q');
  playNote(1,60);
  nr('e');
  stopNote(2,88);
  playNote(2,89);
  nr('e');
  stopNote(2,89);
  stopNote(1,60);
  playNote(1,60);
  playNote(2,88);
  nr('e');
  stopNote(2,88);
  playNote(2,89);
  nr('e');
  stopNote(0,53);
  stopNote(1,60);
  stopNote(2,89);

  playNote(0,52);
  playNote(2,88);
  nr('e');
  stopNote(2,88);
  playNote(2,84);
  nr('e');
  stopNote(2,84);
  playNote(1,59);
  playNote(2,81);
  nr('h');
  stopNote(0,52);
  stopNote(1,59);
  stopNote(2,81);

  playNote(0,58);
  playNote(2,81);
  nr('q');
  stopNote(2,81);
  playNote(1,70);
  playNote(2,74);
  nr('q');
  stopNote(1,70);
  stopNote(2,74);
  playNote(1,70);
  playNote(2,77);
  nr('e');
  stopNote(2,77);
  playNote(2,79);
  nr('e');
  stopNote(0,58);
  stopNote(1,70);
  stopNote(2,79);

  playNote(0,53);
  playNote(2,81);
  nr('q');
  playNote(1,72);
  nr('q');
  stopNote(1,72);
  playNote(1,72);
  nr('q');
  stopNote(0,53);
  stopNote(1,72);
  stopNote(2,81);

  playNote(0,58);
  playNote(2,81);
  nr('q');
  stopNote(2,81);
  playNote(1,70);
  playNote(2,74);
  nr('q');
  stopNote(1,70);
  stopNote(2,74);
  playNote(1,70);
  playNote(2,77);
  nr('e');
  stopNote(2,77);
  playNote(2,79);
  nr('e');
  stopNote(0,58);
  stopNote(1,70);
  stopNote(2,79);

  playNote(0,57);
  playNote(2,76);
  nr('q');
  playNote(1,73);
  nr('h');
  stopNote(0,57);
  stopNote(1,73);
  stopNote(2,76);

  //

  
  playNote(0,50);
  playNote(2,74);
  nr('e');
  stopNote(2,74);
  playNote(2,77);
  nr('e');
  stopNote(2,77);
  playNote(1,57);
  playNote(2,86);
  nr('q');
  stopNote(1,57);
  stopNote(2,86);
  playNote(1,57);
  nr('q');
  stopNote(0,50);
  stopNote(1,57);

  playNote(0,52);
  playNote(2,74);
  nr('e');
  stopNote(2,74);
  playNote(2,77);
  nr('e');
  stopNote(2,77);
  playNote(1,59);
  playNote(2,86);
  nr('h');
  stopNote(0,52);
  stopNote(1,59);
  stopNote(2,86);

  playNote(0,53);
  playNote(2,88);
  nr('q');
  playNote(1,60);
  nr('e');
  stopNote(2,88);
  playNote(2,89);
  nr('e');
  stopNote(2,89);
  stopNote(1,60);
  playNote(1,60);
  playNote(2,88);
  nr('e');
  stopNote(2,88);
  playNote(2,89);
  nr('e');
  stopNote(0,53);
  stopNote(1,60);
  stopNote(2,89);

  playNote(0,52);
  playNote(2,88);
  nr('e');
  stopNote(2,88);
  playNote(2,84);
  nr('e');
  stopNote(2,84);
  playNote(1,59);
  playNote(2,81);
  nr('h');
  stopNote(0,52);
  stopNote(1,59);
  stopNote(2,81);

  playNote(0,58);
  playNote(2,81);
  nr('q');
  stopNote(2,81);
  playNote(1,70);
  playNote(2,74);
  nr('q');
  stopNote(1,70);
  stopNote(2,74);
  playNote(1,70);
  playNote(2,77);
  nr('e');
  stopNote(2,77);
  playNote(2,79);
  nr('e');
  stopNote(0,58);
  stopNote(1,70);
  stopNote(2,79);

  playNote(0,57);
  playNote(2,81);
  nr('q');
  playNote(1,73);
  nr('h');
  stopNote(0,57);
  stopNote(1,73);
  stopNote(2,81);

  playNote(0,50);
  playNote(1,74);
  playNote(2,74);
  nr('q');
  nr('h');
  stopNote(0,50);
  stopNote(1,74);
  stopNote(2,74);


}


void forest(void)
{
    setTempo(100);
    setInstrument(0,0);
    setInstrument(1,46);
    playNote(0,52);
    playNote(1,64);
    nr('e');
    stopNote(1,64);
    playNote(1,74);
    nr('e');
    stopNote(1,74);
    stopNote(0,52);

    playNote(0,64);
    playNote(1,71);
    nr('q');
    stopNote(0,64);
    stopNote(1,71);

    playNote(0,64);
    nr('q');
    stopNote(0,64);



    playNote(0,57);
    playNote(1,69);
    nr('e');
    stopNote(1,69);
    playNote(1,71);
    nr('e');
    stopNote(1,71);
    stopNote(0,57);

    playNote(0,61);
    playNote(1,69);
    nr('q');
    stopNote(0,61);
    stopNote(1,69);

    playNote(0,61);
    nr('q');
    stopNote(0,61);




    setInstrument(1,72);

    playNote(0,52);
    playNote(1,76);
    nr('e');
    stopNote(1,76);
    playNote(1,86);
    nr('e');
    stopNote(1,86);
    stopNote(0,52);

    playNote(0,64);
    playNote(1,83);
    nr('q');
    stopNote(0,64);
    stopNote(1,83);

    playNote(0,64);
    nr('q');
    stopNote(0,64);



    playNote(0,57);
    playNote(1,81);
    nr('e');
    stopNote(1,81);
    playNote(1,83);
    nr('e');
    stopNote(1,83);
    stopNote(0,57);

    playNote(0,61);
    playNote(1,81);
    nr('q');
    stopNote(0,61);
    stopNote(1,81);

    playNote(0,61);
    nr('q');
    stopNote(0,61);

    //  Part 2


    setInstrument(1,72);

    playNote(0,60);
    playNote(1,72);
    nr('e');
    stopNote(1,72);

    playNote(1,81);
    nr('e');
    stopNote(0,60);
    stopNote(1,81);

    playNote(0,76);
    playNote(1,79);
    nr('q');
    stopNote(0,76);
    stopNote(1,79);

    playNote(0,76);
    playNote(1,81);
    nr('q');
    stopNote(0,76);
    stopNote(1,81);

    playNote(0,62);
    playNote(1,79);
    Delay10KTCYx(20);
    stopNote(1,79);

    playNote(1,81);
    Delay10KTCYx(20);
    stopNote(1,81);

    playNote(1,79);
    Delay10KTCYx(20);
    stopNote(0,62);
    stopNote(1,79);

    playNote(0,78);
    playNote(1,78);
    nr('q');
    stopNote(0,78);

    playNote(0,78);
    nr('q');
    stopNote(0,78);
    stopNote(1,78);

    playNote(0,64);
    playNote(1,76);
    nr('w');
    stopNote(0,64);
    stopNote(1,76);


}

void bolero(void)
{
    setTempo(120);
    setInstrument(1,45);
    setVol(1,127);
    setInstrument(2,46);


    playNote(9,38);
    playNote(1,41);
    playNote(2,65);
    nr('e');
    stopNote(2,65);
    playNote(2,62);
    nr('e');
    stopNote(9,38);
    stopNote(1,41);
    stopNote(2,62);
  

    playNote(9,38);
    playNote(2,65);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,65);
    playNote(2,62);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,62);
    
    playNote(9,38);
    playNote(1,50);
    playNote(2,69);
    nr('e');
    stopNote(2,69);
    playNote(2,65);
    nr('e');
    stopNote(9,38);
    stopNote(1,50);
    stopNote(2,65);

    playNote(9,38);
    playNote(2,69);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,69);
    playNote(2,65);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,65);

    playNote(9,38);
    playNote(1,45);
    nr('q');
    stopNote(9,38);
    stopNote(1,45);

    playNote(9,38);
    nr('q');
    stopNote(9,38);


    setInstrument(2,73);


    playNote(9,38);
    playNote(1,41);
    playNote(2,77);
    nr('e');
    stopNote(2,77);
    playNote(2,74);
    nr('e');
    stopNote(9,38);
    stopNote(1,41);
    stopNote(2,74);


    playNote(9,38);
    playNote(2,77);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,77);
    playNote(2,74);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,74);

    playNote(9,38);
    playNote(1,50);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,77);
    nr('e');
    stopNote(9,38);
    stopNote(1,50);
    stopNote(2,77);

    playNote(9,38);
    playNote(2,81);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,81);
    playNote(2,77);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,77);

    playNote(9,38);
    playNote(1,45);
    T;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(1,45);

    playNote(9,38);
    T
    stopNote(9,38);
    playNote(9,38);
    T
    stopNote(9,38);
    playNote(9,38);
    T
    stopNote(9,38);


    setInstrument(2,49);


    playNote(9,38);
    playNote(1,42);
    playNote(2,67);
    nr('e');
    stopNote(2,67);
    playNote(2,64);
    nr('e');
    stopNote(9,38);
    stopNote(1,42);
    stopNote(2,64);


    playNote(9,38);
    playNote(2,67);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,67);
    playNote(2,64);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,64);

    playNote(9,38);
    playNote(1,52);
    playNote(2,70);
    nr('e');
    stopNote(2,70);
    playNote(2,67);
    nr('e');
    stopNote(9,38);
    stopNote(1,52);
    stopNote(2,67);

    playNote(9,38);
    playNote(2,70);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,70);
    playNote(2,67);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,67);

    playNote(9,38);
    playNote(1,46);
    nr('q');
    stopNote(9,38);
    stopNote(1,46);

    playNote(9,38);
    nr('q');
    stopNote(9,38);

    //

    playNote(9,38);
    playNote(1,41);
    playNote(2,69);
    nr('e');
    stopNote(2,69);
    playNote(2,65);
    nr('e');
    stopNote(9,38);
    stopNote(1,41);
    stopNote(2,65);


    playNote(9,38);
    playNote(2,69);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,69);
    playNote(2,65);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,65);

    playNote(9,38);
    playNote(1,50);
    playNote(2,74);
    nr('e');
    stopNote(2,74);
    playNote(2,69);
    nr('e');
    stopNote(9,38);
    stopNote(1,50);
    stopNote(2,69);

    playNote(9,38);
    playNote(2,74);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,74);
    playNote(2,69);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,69);

    playNote(9,38);
    playNote(1,45);
    playNote(2,77);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,77);
    playNote(2,74);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(1,45);
    stopNote(2,74);

    playNote(9,38);
    playNote(2,77);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,77);
    playNote(2,74);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,74);

    //

    playNote(9,38);
    playNote(1,40);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,76);
    nr('e');
    stopNote(9,38);
    stopNote(1,40);
    stopNote(2,76);


    playNote(9,38);
    playNote(2,81);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,81);
    playNote(2,76);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,76);

    playNote(9,38);
    playNote(1,52);
    playNote(2,79);
    nr('e');
    stopNote(2,79);
    playNote(2,73);
    nr('e');
    stopNote(9,38);
    stopNote(1,52);
    stopNote(2,73);

    playNote(9,38);
    playNote(2,79);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,79);
    playNote(2,73);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,73);

    playNote(9,38);
    playNote(1,45);
    playNote(2,77);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,77);
    playNote(2,74);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(1,45);
    stopNote(2,74);

    playNote(9,38);
    playNote(2,69);
    T;
    stopNote(9,38);
    playNote(9,38);
    TH;
    stopNote(2,69);
    playNote(2,65);
    TH;
    stopNote(9,38);
    playNote(9,38);
    T;
    stopNote(9,38);
    stopNote(2,65);

    //

    playNote(9,38);
    playNote(1,38);
    playNote(2,62);
    nr('w');
    stopNote(9,38);
    stopNote(1,38);
    stopNote(2,62);







}

void prelude(void)
{
    setInstrument(0,48);
    setInstrument(1,48);
    setInstrument(2,46);
    setTempo(110);

    playNote(0,57);
    playNote(1,62);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    nr('q');
    stopNote(2,81);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,83);
    nr('e');
    stopNote(2,83);
    playNote(2,86);
    nr('e');
    stopNote(0,57);
    stopNote(1,62);

    playNote(0,59);
    playNote(1,62);
    nr('w');
    stopNote(0,59);
    stopNote(1,62);
    stopNote(2,86);

    setInstrument(2,73);

    playNote(0,57);
    playNote(1,62);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    nr('q');
    stopNote(2,81);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,83);
    nr('e');
    stopNote(2,83);
    playNote(2,86);
    nr('e');
    stopNote(0,57);
    stopNote(1,62);

    playNote(0,59);
    playNote(1,62);
    nr('w');
    stopNote(0,59);
    stopNote(1,62);
    stopNote(2,86);

    setInstrument(2,46);

    playNote(0,62);
    playNote(1,62);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,76);
    nr('e');
    nr('q');
    stopNote(2,76);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,76);
    nr('e');
    stopNote(2,76);
    playNote(2,78);
    nr('e');
    stopNote(2,78);
    playNote(2,69);
    nr('e');
    stopNote(0,62);
    stopNote(1,62);

    playNote(0,61);
    playNote(1,61);
    nr('w');
    stopNote(0,61);
    stopNote(1,61);
    stopNote(2,69);

    setInstrument(2,73);

    playNote(0,62);
    playNote(1,64);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,76);
    nr('e');
    nr('q');
    stopNote(2,76);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,76);
    nr('e');
    stopNote(2,76);
    playNote(2,78);
    nr('e');
    stopNote(2,78);
    playNote(2,81);
    nr('e');
    stopNote(0,62);
    stopNote(1,64);

    playNote(0,61);
    playNote(1,61);
    nr('w');
    stopNote(0,61);
    stopNote(1,61);
    stopNote(2,81);

    setInstrument(2,46);

    playNote(0,57);
    playNote(1,62);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    nr('q');
    stopNote(2,81);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,83);
    nr('e');
    stopNote(2,83);
    playNote(2,86);
    nr('e');
    stopNote(0,57);
    stopNote(1,62);

    playNote(0,59);
    playNote(1,62);
    nr('w');
    stopNote(0,59);
    stopNote(1,62);
    stopNote(2,86);

    setInstrument(2,73);

    playNote(0,57);
    playNote(1,62);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    nr('q');
    stopNote(2,81);
    playNote(2,86);
    nr('e');
    stopNote(2,86);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,83);
    nr('e');
    stopNote(2,83);
    playNote(2,86);
    nr('e');
    stopNote(0,57);
    stopNote(1,62);

    playNote(0,59);
    playNote(1,62);
    nr('w');
    stopNote(0,59);
    stopNote(1,62);
    stopNote(2,86);

    setInstrument(2,46);

    playNote(0,52);
    playNote(1,62);
    nr('w');
    stopNote(0,52);
    stopNote(1,62);

    playNote(0,51);
    playNote(1,62);
    nr('w');
    stopNote(0,51);
    stopNote(1,62);

    playNote(0,50);
    playNote(1,61);
    playNote(2,50);
    nr('e');
    stopNote(2,50);
    playNote(2,54);
    nr('e');
    stopNote(2,54);
    playNote(2,57);
    nr('e');
    stopNote(2,57);
    playNote(2,62);
    nr('e');
    stopNote(2,62);
    playNote(2,66);
    nr('e');
    stopNote(2,66);
    playNote(2,69);
    nr('e');
    stopNote(2,69);
    playNote(2,74);
    nr('e');
    stopNote(2,74);
    playNote(2,78);
    nr('e');
    stopNote(2,78);
    playNote(2,81);
    nr('e');
    stopNote(2,81);
    playNote(2,85);
    nr('q');
    stopNote(2,85);
    playNote(2,86);
    nr('q');
    stopNote(2,86);
    stopNote(0,50);
    stopNote(1,61);

}



