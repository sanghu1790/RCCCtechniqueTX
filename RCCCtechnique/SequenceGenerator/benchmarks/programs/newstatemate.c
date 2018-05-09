#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif
#define int int

//#define SYS_bit_get(a,b) (a)[(b)]
#define SYS_bit_clr(a,b) (a)[(b)] = 0
#define SYS_bit_set(a,b) (a)[(b)] = 1
#define SYS_bit_cpy(a1,i1,a2,i2) (a1)[(i1)] = (a2)[(i2)]


#define active_KINDERSICHERUNG_CTRL_IDX 10
#define active_KINDERSICHERUNG_CTRL_copy_IDX 11
#define active_KINDERSICHERUNG_CTRL_old_IDX 12
#define active_FH_TUERMODUL_CTRL_IDX 13
#define active_FH_TUERMODUL_CTRL_copy_IDX 14
#define active_FH_TUERMODUL_CTRL_old_IDX 15
#define active_EINKLEMMSCHUTZ_CTRL_IDX 16
#define active_EINKLEMMSCHUTZ_CTRL_copy_IDX 17
#define active_EINKLEMMSCHUTZ_CTRL_old_IDX 18
#define active_BLOCK_ERKENNUNG_CTRL_IDX 19
#define active_BLOCK_ERKENNUNG_CTRL_copy_IDX 20
#define active_BLOCK_ERKENNUNG_CTRL_old_IDX 21
#define entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX 0
#define entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_copy_IDX 1
#define entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_IDX 4
#define entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_copy_IDX 5
#define exited_BEREIT_FH_TUERMODUL_CTRL_IDX 6
#define exited_BEREIT_FH_TUERMODUL_CTRL_copy_IDX 7
#define  FH_TUERMODUL_CTRL__END_REVERS_IDX 22
#define  FH_TUERMODUL_CTRL__END_REVERS_copy_IDX 23
#define  FH_TUERMODUL__EINKLEMMUNG_IDX 24




int main(void)
{
//int SYS_bit_get [1000][1000];
char Bitlist[64];

int tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy;
int tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL;
int tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL;
int   sc_FH_TUERMODUL_CTRL_2375_2 ;
int   sc_FH_TUERMODUL_CTRL_2352_1 ;
int   sc_FH_TUERMODUL_CTRL_2329_1 ;
int FH_TUERMODUL_CTRL__N;
int FH_TUERMODUL_CTRL__N_copy;
int FH_TUERMODUL_CTRL__N_old;
int   sc_FH_TUERMODUL_CTRL_1781_10 ;
int   sc_FH_TUERMODUL_CTRL_1739_10 ;
int   FH_TUERMODUL__POSITION ;
int   FH_TUERMODUL__I_EIN ;
int FH_TUERMODUL__I_EIN_old;
int FH_DU__MFH;
int FH_DU__MFH_copy;
int   FH_DU__POSITION ;
int   FH_DU__I_EIN ;
int FH_DU__I_EIN_old;
int BLOCK_ERKENNUNG_CTRL__I_EIN_MAX;
int BLOCK_ERKENNUNG_CTRL__I_EIN_MAX_copy;
int BLOCK_ERKENNUNG_CTRL__N;
int BLOCK_ERKENNUNG_CTRL__N_copy;
int BLOCK_ERKENNUNG_CTRL__N_old;
char FH_TUERMODUL_CTRL__INREVERS2;
char FH_TUERMODUL_CTRL__INREVERS2_copy;
char FH_TUERMODUL_CTRL__INREVERS1;
char FH_TUERMODUL_CTRL__INREVERS1_copy;
char   FH_TUERMODUL_CTRL__FT ;
char   FH_TUERMODUL__SFHZ_ZENTRAL ;
char FH_TUERMODUL__SFHZ_ZENTRAL_old;
char   FH_TUERMODUL__SFHZ_MEC ;
char FH_TUERMODUL__SFHZ_MEC_old;
char   FH_TUERMODUL__SFHA_ZENTRAL ;
char FH_TUERMODUL__SFHA_ZENTRAL_old;
char   FH_TUERMODUL__SFHA_MEC ;
char FH_TUERMODUL__SFHA_MEC_old;
char   FH_TUERMODUL__KL_50 ;
char FH_TUERMODUL__BLOCK;
char FH_TUERMODUL__BLOCK_copy;
char FH_TUERMODUL__BLOCK_old;
char   FH_TUERMODUL__FT ;
char FH_TUERMODUL__SFHZ;
char FH_TUERMODUL__SFHZ_copy;
char FH_TUERMODUL__SFHZ_old;
char FH_TUERMODUL__SFHA;
char FH_TUERMODUL__SFHA_copy;
char FH_TUERMODUL__SFHA_old;
char FH_TUERMODUL__MFHZ;
char FH_TUERMODUL__MFHZ_copy;
char FH_TUERMODUL__MFHZ_old;
char FH_TUERMODUL__MFHA;
char FH_TUERMODUL__MFHA_copy;
char FH_TUERMODUL__MFHA_old;
char   FH_TUERMODUL__EKS_LEISTE_AKTIV ;
char FH_TUERMODUL__EKS_LEISTE_AKTIV_old;
char   FH_TUERMODUL__COM_OPEN ;
char   FH_TUERMODUL__COM_CLOSE ;
char   FH_DU__KL_50 ;
char FH_DU__S_FH_FTZU;
char FH_DU__S_FH_FTAUF;
char   FH_DU__FT ;
char   FH_DU__EKS_LEISTE_AKTIV ;
char FH_DU__EKS_LEISTE_AKTIV_old;
char FH_DU__S_FH_TMBFAUFCAN;
char FH_DU__S_FH_TMBFAUFCAN_copy;
char FH_DU__S_FH_TMBFAUFCAN_old;
char FH_DU__S_FH_TMBFZUCAN;
char FH_DU__S_FH_TMBFZUCAN_copy;
char FH_DU__S_FH_TMBFZUCAN_old;
char   FH_DU__S_FH_TMBFZUDISC ;
char FH_DU__S_FH_TMBFZUDISC_old;
char   FH_DU__S_FH_TMBFAUFDISC ;
char FH_DU__S_FH_TMBFAUFDISC_old;
char   FH_DU__S_FH_ZUDISC ;
char   FH_DU__S_FH_AUFDISC ;
char   FH_DU__DOOR_ID ;
char FH_DU__BLOCK;
char FH_DU__BLOCK_copy;
char FH_DU__BLOCK_old;
char FH_DU__MFHZ;
char FH_DU__MFHZ_copy;
char FH_DU__MFHZ_old;
char FH_DU__MFHA;
char FH_DU__MFHA_copy;
char FH_DU__MFHA_old;


int time;
int stable;
int step;

char NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state;  /** 2 bits **/
char ZENTRAL_KINDERSICHERUNG_CTRL_next_state;  /** 1 bits **/
char MEC_KINDERSICHERUNG_CTRL_next_state;  /** 1 bits **/
char KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state;  /** 2 bits **/
char B_FH_TUERMODUL_CTRL_next_state;  /** 2 bits **/
char A_FH_TUERMODUL_CTRL_next_state;  /** 1 bits **/
char WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state;  /** 1 bits **/
char INITIALISIERT_FH_TUERMODUL_CTRL_next_state;  /** 2 bits **/
char TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state;  /** 2 bits **/
char MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state;  /** 2 bits **/
char OEFFNEN_FH_TUERMODUL_CTRL_next_state;  /** 2 bits **/
char SCHLIESSEN_FH_TUERMODUL_CTRL_next_state;  /** 2 bits **/
char FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state;  /** 2 bits **/
char EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state;  /** 2 bits **/
char BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state;  /** 2 bits **/
char BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state;  /** 2 bits **/



int stable1 = 0;

    tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy = 0;
    tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL = 0;
    tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL = 0;
   NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 0;
   ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 0;
   MEC_KINDERSICHERUNG_CTRL_next_state = 0;
   KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 0;
   B_FH_TUERMODUL_CTRL_next_state = 0;
   A_FH_TUERMODUL_CTRL_next_state = 0;
   WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 0;
   INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 0;
   TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;
   MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;
   OEFFNEN_FH_TUERMODUL_CTRL_next_state = 0;
   SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;
   FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 0;
   EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 0;
   BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 0;
   BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 0;

 /* time = 1; */  /**SYS_get_clock()**/
/*#ifdef LLBMC
  time = __llbmc_nondef_signed_long();
  for (int i = 0; i < 64; ++i) {
    Bitlist[i] = __llbmc_nondef_char();
  }
#else*/
  klee_make_symbolic(&time, sizeof(int), "time");
  klee_make_symbolic(Bitlist, 64 * sizeof(char), "Bitlist");
//#endif

/*
 * The variables which are not made symbolic have effect on the variable
 * `stable` and as a result affecting the number of loop iterations. Our
 * experiments show that symbolizing these variables may cause the loop
 * to become unbounded.
 */

  klee_make_symbolic(&sc_FH_TUERMODUL_CTRL_2375_2, sizeof(int), "sc_FH_TUERMODUL_CTRL_2375_2");
  klee_make_symbolic(&sc_FH_TUERMODUL_CTRL_2352_1, sizeof(int), "sc_FH_TUERMODUL_CTRL_2352_1");
  klee_make_symbolic(&sc_FH_TUERMODUL_CTRL_2329_1, sizeof(int), "sc_FH_TUERMODUL_CTRL_2329_1");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__N, sizeof(int), "FH_TUERMODUL_CTRL__N");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__N_copy, sizeof(int), "FH_TUERMODUL_CTRL__N_copy");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__N_old, sizeof(int), "FH_TUERMODUL_CTRL__N_old");
  klee_make_symbolic(&sc_FH_TUERMODUL_CTRL_1781_10, sizeof(int), "sc_FH_TUERMODUL_CTRL_1781_10");
  klee_make_symbolic(&sc_FH_TUERMODUL_CTRL_1739_10, sizeof(int), "sc_FH_TUERMODUL_CTRL_1739_10");
  klee_make_symbolic(&FH_TUERMODUL__POSITION, sizeof(int), "FH_TUERMODUL__POSITION");
  klee_make_symbolic(&FH_TUERMODUL__I_EIN, sizeof(int), "FH_TUERMODUL__I_EIN");
  klee_make_symbolic(&FH_TUERMODUL__I_EIN_old, sizeof(int), "FH_TUERMODUL__I_EIN_old");
  klee_make_symbolic(&FH_DU__MFH, sizeof(int), "FH_DU__MFH");
  klee_make_symbolic(&FH_DU__MFH_copy, sizeof(int), "FH_DU__MFH_copy");
  klee_make_symbolic(&FH_DU__POSITION, sizeof(int), "FH_DU__POSITION");
  klee_make_symbolic(&FH_DU__I_EIN, sizeof(int), "FH_DU__I_EIN");
  klee_make_symbolic(&FH_DU__I_EIN_old, sizeof(int), "FH_DU__I_EIN_old");
  klee_make_symbolic(&BLOCK_ERKENNUNG_CTRL__I_EIN_MAX, sizeof(int), "BLOCK_ERKENNUNG_CTRL__I_EIN_MAX");
  klee_make_symbolic(&BLOCK_ERKENNUNG_CTRL__I_EIN_MAX_copy, sizeof(int), "BLOCK_ERKENNUNG_CTRL__I_EIN_MAX_copy");
  klee_make_symbolic(&BLOCK_ERKENNUNG_CTRL__N, sizeof(int), "BLOCK_ERKENNUNG_CTRL__N");
  klee_make_symbolic(&BLOCK_ERKENNUNG_CTRL__N_copy, sizeof(int), "BLOCK_ERKENNUNG_CTRL__N_copy");
  klee_make_symbolic(&BLOCK_ERKENNUNG_CTRL__N_old, sizeof(int), "BLOCK_ERKENNUNG_CTRL__N_old");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__INREVERS2, sizeof(char), "FH_TUERMODUL_CTRL__INREVERS2");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__INREVERS2_copy, sizeof(char), "FH_TUERMODUL_CTRL__INREVERS2_copy");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__INREVERS1, sizeof(char), "FH_TUERMODUL_CTRL__INREVERS1");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__INREVERS1_copy, sizeof(char), "FH_TUERMODUL_CTRL__INREVERS1_copy");
  klee_make_symbolic(&FH_TUERMODUL_CTRL__FT, sizeof(char), "FH_TUERMODUL_CTRL__FT");
  klee_make_symbolic(&FH_TUERMODUL__SFHZ_ZENTRAL, sizeof(char), "FH_TUERMODUL__SFHZ_ZENTRAL");
  klee_make_symbolic(&FH_TUERMODUL__SFHZ_ZENTRAL_old, sizeof(char), "FH_TUERMODUL__SFHZ_ZENTRAL_old");
  klee_make_symbolic(&FH_TUERMODUL__SFHZ_MEC, sizeof(char), "FH_TUERMODUL__SFHZ_MEC");
  klee_make_symbolic(&FH_TUERMODUL__SFHZ_MEC_old, sizeof(char), "FH_TUERMODUL__SFHZ_MEC_old");
  klee_make_symbolic(&FH_TUERMODUL__SFHA_ZENTRAL, sizeof(char), "FH_TUERMODUL__SFHA_ZENTRAL");
  klee_make_symbolic(&FH_TUERMODUL__SFHA_ZENTRAL_old, sizeof(char), "FH_TUERMODUL__SFHA_ZENTRAL_old");
  klee_make_symbolic(&FH_TUERMODUL__SFHA_MEC, sizeof(char), "FH_TUERMODUL__SFHA_MEC");
  klee_make_symbolic(&FH_TUERMODUL__SFHA_MEC_old, sizeof(char), "FH_TUERMODUL__SFHA_MEC_old");
  klee_make_symbolic(&FH_TUERMODUL__KL_50, sizeof(char), "FH_TUERMODUL__KL_50");
  klee_make_symbolic(&FH_TUERMODUL__BLOCK, sizeof(char), "FH_TUERMODUL__BLOCK");
  klee_make_symbolic(&FH_TUERMODUL__BLOCK_copy, sizeof(char), "FH_TUERMODUL__BLOCK_copy");
  klee_make_symbolic(&FH_TUERMODUL__BLOCK_old, sizeof(char), "FH_TUERMODUL__BLOCK_old");
  klee_make_symbolic(&FH_TUERMODUL__FT, sizeof(char), "FH_TUERMODUL__FT");
  klee_make_symbolic(&FH_TUERMODUL__SFHZ, sizeof(char), "FH_TUERMODUL__SFHZ");
  klee_make_symbolic(&FH_TUERMODUL__SFHZ_copy, sizeof(char), "FH_TUERMODUL__SFHZ_copy");
  klee_make_symbolic(&FH_TUERMODUL__SFHZ_old, sizeof(char), "FH_TUERMODUL__SFHZ_old");
  klee_make_symbolic(&FH_TUERMODUL__SFHA, sizeof(char), "FH_TUERMODUL__SFHA");
  klee_make_symbolic(&FH_TUERMODUL__SFHA_copy, sizeof(char), "FH_TUERMODUL__SFHA_copy");
  klee_make_symbolic(&FH_TUERMODUL__SFHA_old, sizeof(char), "FH_TUERMODUL__SFHA_old");
  klee_make_symbolic(&FH_TUERMODUL__MFHZ, sizeof(char), "FH_TUERMODUL__MFHZ");
  klee_make_symbolic(&FH_TUERMODUL__MFHZ_copy, sizeof(char), "FH_TUERMODUL__MFHZ_copy");
  klee_make_symbolic(&FH_TUERMODUL__MFHZ_old, sizeof(char), "FH_TUERMODUL__MFHZ_old");
  klee_make_symbolic(&FH_TUERMODUL__MFHA, sizeof(char), "FH_TUERMODUL__MFHA");
  klee_make_symbolic(&FH_TUERMODUL__MFHA_copy, sizeof(char), "FH_TUERMODUL__MFHA_copy");
  klee_make_symbolic(&FH_TUERMODUL__MFHA_old, sizeof(char), "FH_TUERMODUL__MFHA_old");

  klee_make_symbolic(&FH_TUERMODUL__EKS_LEISTE_AKTIV, sizeof(char), "FH_TUERMODUL__EKS_LEISTE_AKTIV");
  klee_make_symbolic(&FH_TUERMODUL__EKS_LEISTE_AKTIV_old, sizeof(char), "FH_TUERMODUL__EKS_LEISTE_AKTIV_old");
  klee_make_symbolic(&FH_TUERMODUL__COM_OPEN, sizeof(char), "FH_TUERMODUL__COM_OPEN");
  klee_make_symbolic(&FH_TUERMODUL__COM_CLOSE, sizeof(char), "FH_TUERMODUL__COM_CLOSE");
  klee_make_symbolic(&FH_DU__KL_50, sizeof(char), "FH_DU__KL_50");
/*  klee_make_symbolic(&FH_DU__S_FH_FTZU, sizeof(FH_DU__S_FH_FTZU), "FH_DU__S_FH_FTZU");*/
/*  klee_make_symbolic(&FH_DU__S_FH_FTAUF, sizeof(FH_DU__S_FH_FTAUF), "FH_DU__S_FH_FTAUF");*/
  klee_make_symbolic(&FH_DU__FT, sizeof(char), "FH_DU__FT");
  klee_make_symbolic(&FH_DU__EKS_LEISTE_AKTIV, sizeof(char), "FH_DU__EKS_LEISTE_AKTIV");
  klee_make_symbolic(&FH_DU__EKS_LEISTE_AKTIV_old, sizeof(char), "FH_DU__EKS_LEISTE_AKTIV_old");
/*  klee_make_symbolic(&FH_DU__S_FH_TMBFAUFCAN, sizeof(FH_DU__S_FH_TMBFAUFCAN), "FH_DU__S_FH_TMBFAUFCAN");*/
  klee_make_symbolic(&FH_DU__S_FH_TMBFAUFCAN_copy, sizeof(char), "FH_DU__S_FH_TMBFAUFCAN_copy");
  klee_make_symbolic(&FH_DU__S_FH_TMBFAUFCAN_old, sizeof(char), "FH_DU__S_FH_TMBFAUFCAN_old");
/*  klee_make_symbolic(&FH_DU__S_FH_TMBFZUCAN, sizeof(FH_DU__S_FH_TMBFZUCAN), "FH_DU__S_FH_TMBFZUCAN");*/
  klee_make_symbolic(&FH_DU__S_FH_TMBFZUCAN_copy, sizeof(char), "FH_DU__S_FH_TMBFZUCAN_copy");
  klee_make_symbolic(&FH_DU__S_FH_TMBFZUCAN_old, sizeof(char), "FH_DU__S_FH_TMBFZUCAN_old");
  klee_make_symbolic(&FH_DU__S_FH_TMBFZUDISC, sizeof(char), "FH_DU__S_FH_TMBFZUDISC");
  klee_make_symbolic(&FH_DU__S_FH_TMBFZUDISC_old, sizeof(char), "FH_DU__S_FH_TMBFZUDISC_old");
  klee_make_symbolic(&FH_DU__S_FH_TMBFAUFDISC, sizeof(char), "FH_DU__S_FH_TMBFAUFDISC");
  klee_make_symbolic(&FH_DU__S_FH_TMBFAUFDISC_old, sizeof(char), "FH_DU__S_FH_TMBFAUFDISC_old");
/*  klee_make_symbolic(&FH_DU__S_FH_ZUDISC, sizeof(FH_DU__S_FH_ZUDISC), "FH_DU__S_FH_ZUDISC");*/
/*  klee_make_symbolic(&FH_DU__S_FH_AUFDISC, sizeof(FH_DU__S_FH_AUFDISC), "FH_DU__S_FH_AUFDISC");*/
  klee_make_symbolic(&FH_DU__DOOR_ID, sizeof(char), "FH_DU__DOOR_ID");
  klee_make_symbolic(&FH_DU__BLOCK, sizeof(char), "FH_DU__BLOCK");
  klee_make_symbolic(&FH_DU__BLOCK_copy, sizeof(char), "FH_DU__BLOCK_copy");
  klee_make_symbolic(&FH_DU__BLOCK_old, sizeof(char), "FH_DU__BLOCK_old");
  klee_make_symbolic(&FH_DU__MFHZ, sizeof(char), "FH_DU__MFHZ");
/*  klee_make_symbolic(&FH_DU__MFHZ_copy, sizeof(FH_DU__MFHZ_copy), "FH_DU__MFHZ_copy");*/
  klee_make_symbolic(&FH_DU__MFHZ_old, sizeof(char), "FH_DU__MFHZ_old");
  klee_make_symbolic(&FH_DU__MFHA, sizeof(char), "FH_DU__MFHA");
/*  klee_make_symbolic(&FH_DU__MFHA_copy, sizeof(FH_DU__MFHA_copy), "FH_DU__MFHA_copy");*/
  klee_make_symbolic(&FH_DU__MFHA_old, sizeof(char), "FH_DU__MFHA_old");


/** init **/

   if (Bitlist [entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_IDX])
   tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL = time;
   if (Bitlist [entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_IDX] || Bitlist [exited_BEREIT_FH_TUERMODUL_CTRL_IDX])
   tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL = time;
   if ((sc_FH_TUERMODUL_CTRL_2375_2 != 0) && (time - sc_FH_TUERMODUL_CTRL_2375_2 >=5/10))
   {
      FH_TUERMODUL__MFHA_copy = 0;
      sc_FH_TUERMODUL_CTRL_2375_2 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_2352_1 != 0) && (time - sc_FH_TUERMODUL_CTRL_2352_1 >= 5/10))
   {
      FH_TUERMODUL__MFHZ_copy = 0;
      sc_FH_TUERMODUL_CTRL_2352_1 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_2329_1 != 0) && (time - sc_FH_TUERMODUL_CTRL_2329_1 >= 5/10))
   {
      FH_TUERMODUL__MFHZ_copy = 0;
      sc_FH_TUERMODUL_CTRL_2329_1 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_1781_10 != 0) && (time - sc_FH_TUERMODUL_CTRL_1781_10 >= 5/10))
   {
      sc_FH_TUERMODUL_CTRL_1781_10 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_1739_10 != 0) && (time - sc_FH_TUERMODUL_CTRL_1739_10 >= 5/10))
   {
      sc_FH_TUERMODUL_CTRL_1739_10 = 0;

   }
   if (Bitlist[entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX] || BLOCK_ERKENNUNG_CTRL__N != BLOCK_ERKENNUNG_CTRL__N_old)
   tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy = time;


/** interface **/


   time = 1;  /**SYS_get_clock()**/
   stable = 0;

   step   = 0;
   
   while (stable1<2)
   {
   
      stable = 1;
      step++;
      
         {
            if((FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state)==1)
            {
               if (!(FH_DU__MFHZ) && FH_DU__MFHZ_old)
               {
                  stable = 0;
                  FH_DU__MFH = 0;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 2;
               }
            }
            else if((FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state)==2)
            {
               if (FH_DU__MFHZ && !(FH_DU__MFHZ_old))
               {
                  stable = 0;
                  FH_DU__MFH = -100;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 1;
               }
               if ((FH_DU__MFHA && !(FH_DU__MFHA_old)))
               {
                  stable = 0;
                  FH_DU__MFH = 100;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 3;
               }

            }
            else if((FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state)==3)
            {
               if ((!(FH_DU__MFHA) && FH_DU__MFHA_old))
               {
                  stable = 0;
                  FH_DU__MFH = 0;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 2;
               }
            }
            else
            {
               stable = 0;
                FH_DU__MFH = 0;
               FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 2;

            }
         }
      
      
         
      {
         {
            if (!Bitlist[active_KINDERSICHERUNG_CTRL_IDX])
            {
               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
            }
            SYS_bit_clr(Bitlist, active_KINDERSICHERUNG_CTRL_copy_IDX);
            if (!Bitlist[active_EINKLEMMSCHUTZ_CTRL_IDX])
            {
               EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 1;
            }
            SYS_bit_clr(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);
            if (!Bitlist[active_BLOCK_ERKENNUNG_CTRL_IDX])
            {
               SYS_bit_clr (Bitlist, entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX);
               BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;
            }
            SYS_bit_clr(Bitlist, active_BLOCK_ERKENNUNG_CTRL_copy_IDX);
            if (!Bitlist[active_FH_TUERMODUL_CTRL_IDX])
            {
               SYS_bit_clr (Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_IDX);
               SYS_bit_clr (Bitlist, exited_BEREIT_FH_TUERMODUL_CTRL_IDX);
               B_FH_TUERMODUL_CTRL_next_state = 2;
                FH_TUERMODUL_CTRL__N = 0;
               A_FH_TUERMODUL_CTRL_next_state = 1;
               SYS_bit_set (Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_copy_IDX);
   //           WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
            }
            SYS_bit_clr(Bitlist, active_FH_TUERMODUL_CTRL_copy_IDX);
            SYS_bit_set(Bitlist, active_KINDERSICHERUNG_CTRL_copy_IDX);
            SYS_bit_set(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);
            SYS_bit_set(Bitlist, active_BLOCK_ERKENNUNG_CTRL_copy_IDX);
            SYS_bit_set(Bitlist, active_FH_TUERMODUL_CTRL_copy_IDX);


            if (FH_DU__S_FH_TMBFZUCAN != FH_DU__S_FH_TMBFZUCAN_old)
            {
                if ((!FH_DU__DOOR_ID))
               {
                  FH_DU__S_FH_FTZU = FH_DU__S_FH_TMBFZUCAN;

               }

            }
            if (FH_DU__S_FH_TMBFZUDISC != FH_DU__S_FH_TMBFZUDISC_old)
            {
                if (FH_DU__DOOR_ID)
               {
                  FH_DU__S_FH_TMBFZUCAN = FH_DU__S_FH_TMBFZUDISC;

               }

            }
            if (FH_DU__S_FH_TMBFAUFCAN != FH_DU__S_FH_TMBFAUFCAN_old)
            {
                if ((!FH_DU__DOOR_ID))
               {
                  FH_DU__S_FH_FTAUF = FH_DU__S_FH_TMBFAUFCAN;

               }

            }
            if (FH_DU__S_FH_TMBFAUFDISC != FH_DU__S_FH_TMBFAUFDISC_old)
            {
                if (FH_DU__DOOR_ID)
               {
                  FH_DU__S_FH_TMBFAUFCAN = FH_DU__S_FH_TMBFAUFDISC;

               }

            }

         }
      }
      
      SYS_bit_cpy(Bitlist, active_KINDERSICHERUNG_CTRL_IDX, Bitlist, active_KINDERSICHERUNG_CTRL_old_IDX);
      SYS_bit_cpy(Bitlist, active_FH_TUERMODUL_CTRL_IDX, Bitlist, active_FH_TUERMODUL_CTRL_old_IDX);
      SYS_bit_cpy(Bitlist, active_EINKLEMMSCHUTZ_CTRL_IDX, Bitlist, active_EINKLEMMSCHUTZ_CTRL_old_IDX);
      SYS_bit_cpy(Bitlist, active_BLOCK_ERKENNUNG_CTRL_IDX, Bitlist, active_BLOCK_ERKENNUNG_CTRL_old_IDX);
       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

{
   if (Bitlist[active_KINDERSICHERUNG_CTRL_IDX])
   {

      {
	  if (KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state==1)
         {
            if (!(FH_TUERMODUL__SFHA_ZENTRAL || FH_TUERMODUL__SFHZ_ZENTRAL))
            {
               stable = 0;
                FH_TUERMODUL__SFHZ_copy = 0;
                 FH_TUERMODUL__SFHA_copy = 0;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
               ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 0;

            }

            {
	        if (ZENTRAL_KINDERSICHERUNG_CTRL_next_state==1)
               {
                  if ((FH_TUERMODUL__SFHA_ZENTRAL && !(FH_TUERMODUL__SFHA_ZENTRAL_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 1;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;

                  }
                  if ((FH_TUERMODUL__SFHZ_ZENTRAL && !(FH_TUERMODUL__SFHZ_ZENTRAL_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 1;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;

                  }
                  if ((!(FH_TUERMODUL__SFHA_ZENTRAL) && FH_TUERMODUL__SFHA_ZENTRAL_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 0;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;

                  }
                  if ((!(FH_TUERMODUL__SFHZ_ZENTRAL) && FH_TUERMODUL__SFHZ_ZENTRAL_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 0;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;

                  }

               }
               else
               {
                  stable = 0;

               }
            }

         }
	  else if (KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state==2)
         {
            if (!(FH_TUERMODUL__SFHA_MEC || FH_TUERMODUL__SFHZ_MEC))
            {
               stable = 0;
                FH_TUERMODUL__SFHZ_copy = 0;
                 FH_TUERMODUL__SFHA_copy = 0;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
               MEC_KINDERSICHERUNG_CTRL_next_state = 0;

            }

            {
	        if (MEC_KINDERSICHERUNG_CTRL_next_state==1)
               {
                  if ((FH_TUERMODUL__SFHA_MEC && !(FH_TUERMODUL__SFHA_MEC_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 1;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;

                  }
                  if ((FH_TUERMODUL__SFHZ_MEC && !(FH_TUERMODUL__SFHZ_MEC_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 1;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;

                  }
                  if ((!(FH_TUERMODUL__SFHA_MEC) && FH_TUERMODUL__SFHA_MEC_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 0;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;

                  }
                  if ((!(FH_TUERMODUL__SFHZ_MEC) && FH_TUERMODUL__SFHZ_MEC_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 0;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;

                  }

               }
               else
               {
                  stable = 0;

               }
            }

         }
	  else if (KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state==3)
         {
            if ((!FH_TUERMODUL__KL_50) && (FH_TUERMODUL__SFHZ_MEC && FH_TUERMODUL__SFHA_MEC))
            {
               stable = 0;
                 FH_TUERMODUL__SFHZ_copy = 1;
                 FH_TUERMODUL__SFHA_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 2;
            }
            if ((!FH_TUERMODUL__KL_50) && (FH_TUERMODUL__SFHZ_MEC && !FH_TUERMODUL__SFHA_MEC))
            {
               stable = 0;
                 FH_TUERMODUL__SFHZ_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 2;
            }
            if ((!FH_TUERMODUL__KL_50) && (!FH_TUERMODUL__SFHZ_MEC && FH_TUERMODUL__SFHA_MEC))
            {
               stable = 0;
                 FH_TUERMODUL__SFHA_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 2;
            }
            if ((!FH_TUERMODUL__SFHZ_ZENTRAL && FH_TUERMODUL__SFHA_ZENTRAL && !FH_TUERMODUL__KL_50))
            {
               stable = 0;
                FH_TUERMODUL__SFHA_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 1;
            }
            if ((FH_TUERMODUL__SFHZ_ZENTRAL && FH_TUERMODUL__SFHA_ZENTRAL))
            {
               stable = 0;
                FH_TUERMODUL__SFHA_copy = 1;
                 FH_TUERMODUL__SFHZ_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 1;
            }
            if ((FH_TUERMODUL__SFHZ_ZENTRAL && !FH_TUERMODUL__SFHA_ZENTRAL && !FH_TUERMODUL__KL_50))
            {
               stable = 0;
                FH_TUERMODUL__SFHZ_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 1;
            }
         }
         else
         {
            stable = 0;
            KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
         }
      }
   }
}














       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

{
   if (!Bitlist[active_FH_TUERMODUL_CTRL_IDX] && Bitlist[active_FH_TUERMODUL_CTRL_old_IDX] && !Bitlist[active_FH_TUERMODUL_CTRL_copy_IDX])
   {
      SYS_bit_clr (Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_IDX);
      SYS_bit_clr (Bitlist, exited_BEREIT_FH_TUERMODUL_CTRL_IDX);
   }
   if (Bitlist[active_FH_TUERMODUL_CTRL_IDX])
   {
      if (!Bitlist[active_KINDERSICHERUNG_CTRL_IDX])
      {
         KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
      }
      SYS_bit_clr (Bitlist, active_KINDERSICHERUNG_CTRL_copy_IDX);
      if (!Bitlist[active_BLOCK_ERKENNUNG_CTRL_IDX])
      {
         SYS_bit_clr (Bitlist, entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX);
         BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;
      }
      SYS_bit_clr (Bitlist, active_BLOCK_ERKENNUNG_CTRL_copy_IDX);
      SYS_bit_set (Bitlist, active_KINDERSICHERUNG_CTRL_copy_IDX);
      SYS_bit_set (Bitlist, active_BLOCK_ERKENNUNG_CTRL_copy_IDX);

      {
	  if (B_FH_TUERMODUL_CTRL_next_state==1)
         {
            if ((FH_TUERMODUL_CTRL__N == 59 && !(FH_TUERMODUL_CTRL__N_old == 59)))
            {
               stable = 0;

               B_FH_TUERMODUL_CTRL_next_state = 3;
               INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
            }
         }
	  else if (B_FH_TUERMODUL_CTRL_next_state==2)
         {
            if (((FH_TUERMODUL__BLOCK && !(FH_TUERMODUL__BLOCK_old))) && ((FH_TUERMODUL__MFHZ)))
            {
               stable = 0;
               FH_TUERMODUL__MFHZ_copy = 0;
               sc_FH_TUERMODUL_CTRL_2329_1 = time;

               B_FH_TUERMODUL_CTRL_next_state = 3;
               INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
            }

            {
            	 if (NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state==1)
               {
                  if (!(FH_TUERMODUL__SFHZ))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHZ_copy = 0;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;

                  }

               }
            	 else if (NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state==2)
               {
                  if (!(FH_TUERMODUL__SFHA))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 0;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;

                  }

               }
            	 else if (NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state==3)
               {
                  if ((FH_TUERMODUL__SFHA))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 1;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 2;

                  }
                  if ((FH_TUERMODUL__SFHZ))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHZ_copy = 1;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 1;

                  }

               }
               else
               {
                  stable = 0;
                  NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;

               }
            }

         }
	  else if (B_FH_TUERMODUL_CTRL_next_state==3)
         {
            if (((FH_TUERMODUL_CTRL__N > 60 && !(FH_TUERMODUL_CTRL__N_old > 60))) && ((!(FH_TUERMODUL_CTRL__INREVERS1 || FH_TUERMODUL_CTRL__INREVERS2))))
            {
               stable = 0;
               FH_TUERMODUL__MFHZ_copy = 0;
               FH_TUERMODUL__MFHA_copy = 0;

               B_FH_TUERMODUL_CTRL_next_state = 1;
            }
            if (((FH_TUERMODUL__BLOCK && !(FH_TUERMODUL__BLOCK_old))) && ((FH_TUERMODUL__MFHA)))
            {
               stable = 0;
               FH_TUERMODUL__MFHA_copy = 0;
               sc_FH_TUERMODUL_CTRL_2375_2 = time;

               B_FH_TUERMODUL_CTRL_next_state = 2;
               NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;
            }
            if (((FH_TUERMODUL__BLOCK && !(FH_TUERMODUL__BLOCK_old))) && ((FH_TUERMODUL__MFHZ)))
            {
               stable = 0;
               FH_TUERMODUL__MFHZ_copy = 0;
               sc_FH_TUERMODUL_CTRL_2352_1 = time;

               B_FH_TUERMODUL_CTRL_next_state = 2;
               NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;
            }

            {
	        if (INITIALISIERT_FH_TUERMODUL_CTRL_next_state==1)

               {
                  if ((FH_TUERMODUL__POSITION >= 405))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 0;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;

                  }

                  {
                  	if (OEFFNEN_FH_TUERMODUL_CTRL_next_state==1)
                     {
                        if ((FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old)) || (FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old)))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHA_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                           OEFFNEN_FH_TUERMODUL_CTRL_next_state = 0;
                        }
                     }
                  	else if (OEFFNEN_FH_TUERMODUL_CTRL_next_state==2)
                     {
                        if ((FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old)))
                        {
                           stable = 0;

                           OEFFNEN_FH_TUERMODUL_CTRL_next_state = 1;
                        }
                        if ((!(FH_TUERMODUL__SFHA) && FH_TUERMODUL__SFHA_old))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHA_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                           OEFFNEN_FH_TUERMODUL_CTRL_next_state = 0;

                        }

                     }
                     else
                     {
                        stable = 0;
                        OEFFNEN_FH_TUERMODUL_CTRL_next_state = 2;
                     }
                  }

               }
	        if (INITIALISIERT_FH_TUERMODUL_CTRL_next_state==2)
               {
                  if ((FH_TUERMODUL__POSITION <= 0))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHZ_copy = 0;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                  }

                  {
	              if (SCHLIESSEN_FH_TUERMODUL_CTRL_next_state==1)
                     {
                        if ((FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old)) || (FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old)))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHZ_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;

                        }

                        {
                           if (TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state==1)
                           {
                              SYS_bit_clr (Bitlist, FH_TUERMODUL_CTRL__END_REVERS_copy_IDX);
                              if (Bitlist[FH_TUERMODUL_CTRL__END_REVERS_IDX])
                              {
                                 stable = 0;
                                 FH_TUERMODUL__MFHZ_copy = 1;
                                 FH_TUERMODUL_CTRL__INREVERS2_copy = 0;

                                 TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                                  FH_TUERMODUL__MFHA_copy = 0;

                                 SYS_bit_set(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);

                              }

                           }
                           else if (TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state==2)
                           {
                              if (Bitlist[FH_TUERMODUL__EINKLEMMUNG_IDX])
                              {
                                 stable = 0;
                                 FH_TUERMODUL_CTRL__INREVERS2_copy = 1;

                                 SYS_bit_set (Bitlist, FH_TUERMODUL_CTRL__END_REVERS_copy_IDX);
                                 TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 1;
                                  SYS_bit_clr(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);
                                 FH_TUERMODUL__MFHZ_copy = 0;

                                 sc_FH_TUERMODUL_CTRL_1781_10 = time;
                                 FH_TUERMODUL__MFHA_copy = 1;

                              }

                           }
                           else
                           {
                              stable = 0;
                              TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                              SYS_bit_set(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);

                           }
                        }

                     }
	              else if (SCHLIESSEN_FH_TUERMODUL_CTRL_next_state==2)
                     {
                        if ((!(FH_TUERMODUL__SFHZ) && FH_TUERMODUL__SFHZ_old))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHZ_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;

                        }

                        {
			      if (MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state==1)
                           {
                              SYS_bit_clr (Bitlist, FH_TUERMODUL_CTRL__END_REVERS_copy_IDX);
                              if (Bitlist[FH_TUERMODUL_CTRL__END_REVERS_IDX])
                              {
                                 stable = 0;
                                 FH_TUERMODUL_CTRL__INREVERS1_copy = 0;

                                 MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                                  FH_TUERMODUL__MFHA_copy = 0;

                                 SYS_bit_set(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);
                                 FH_TUERMODUL__MFHZ_copy = 1;

                              }

                           }
			      else if (MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state==2)
                           {
                              if (Bitlist[FH_TUERMODUL__EINKLEMMUNG_IDX])
                              {
                                 stable = 0;
                                 FH_TUERMODUL__MFHZ_copy = 0;
                                 FH_TUERMODUL_CTRL__INREVERS1_copy = 1;

                                 SYS_bit_set (Bitlist, FH_TUERMODUL_CTRL__END_REVERS_copy_IDX);
                                 MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 1;
                                  SYS_bit_clr(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);

                                 sc_FH_TUERMODUL_CTRL_1739_10 = time;
                                 FH_TUERMODUL__MFHA_copy = 1;

                              }
                              if ((FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old)))
                              {
                                 stable = 0;

                                 SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 1;
                                 MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;

                              }

                           }
                           else
                           {
                              stable = 0;
                              MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                              SYS_bit_set(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);
                              FH_TUERMODUL__MFHZ_copy = 1;

                           }
                        }

                     }
                     else
                     {
                        stable = 0;
                        SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                        MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                        SYS_bit_set(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);
                        FH_TUERMODUL__MFHZ_copy = 1;

                     }
                  }
               }
	        if (INITIALISIERT_FH_TUERMODUL_CTRL_next_state==3)
               {
                  if (((FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old))) && ((FH_TUERMODUL__POSITION > 0)))
                  {
                     stable = 0;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 2;
                     SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                     MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                     SYS_bit_set(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX);
                     FH_TUERMODUL__MFHZ_copy = 1;

                  }
                  if (((FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old))) && ((FH_TUERMODUL__POSITION < 405)))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 1;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 1;
                     OEFFNEN_FH_TUERMODUL_CTRL_next_state = 2;
                  }
               }
               else
               {
                  stable = 0;
                  INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;

               }
            }
         }
         else
         {
            stable = 0;
            B_FH_TUERMODUL_CTRL_next_state = 2;
         }
      }
      {
	  if (A_FH_TUERMODUL_CTRL_next_state==1)
         {
            SYS_bit_clr (Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_copy_IDX);
            if ((step == 1 && tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL != 0 && (time - tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL == 1)) && ((FH_TUERMODUL__MFHZ || FH_TUERMODUL__MFHA)))
            {
               stable = 0;
               FH_TUERMODUL_CTRL__N = FH_TUERMODUL_CTRL__N + 1;

               A_FH_TUERMODUL_CTRL_next_state = 1;
               SYS_bit_set (Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_copy_IDX);
               WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
            }

            {
	        if (WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state==1)
               {
                  if ((step == 1 && tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL != 0 && (time - tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL == 3)) && (((!(FH_TUERMODUL__MFHZ || FH_TUERMODUL__MFHA)) && FH_TUERMODUL_CTRL__N > 0)))
                  {
                     stable = 0;
                     FH_TUERMODUL_CTRL__N = FH_TUERMODUL_CTRL__N - 1;

                     WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
                  }
               }
               else
               {
                  stable = 0;
                  SYS_bit_set (Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_copy_IDX);
                  WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
               }
            }
         }
         else
         {
            stable = 0;
             FH_TUERMODUL_CTRL__N = 0;
            A_FH_TUERMODUL_CTRL_next_state = 1;
            SYS_bit_set (Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_copy_IDX);
            WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;

         }
      }
      SYS_bit_cpy(Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_copy_IDX, Bitlist, entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_IDX);
      SYS_bit_cpy (Bitlist, exited_BEREIT_FH_TUERMODUL_CTRL_copy_IDX, Bitlist, exited_BEREIT_FH_TUERMODUL_CTRL_IDX);
   }
}

       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

{
   if (Bitlist[active_EINKLEMMSCHUTZ_CTRL_IDX])
   {
      {
         if (EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state==1)
         {
            if (((FH_TUERMODUL__EKS_LEISTE_AKTIV && !(FH_TUERMODUL__EKS_LEISTE_AKTIV_old))) && ((!(FH_TUERMODUL__SFHZ && FH_TUERMODUL__SFHA))))
            {
               stable = 0;

               SYS_bit_set (Bitlist, FH_TUERMODUL__EINKLEMMUNG_IDX);
               EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 2;
            }
         }
         else if (EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state==2)
         {
            SYS_bit_clr (Bitlist, FH_TUERMODUL__EINKLEMMUNG_IDX);
            if ((!(FH_TUERMODUL__EKS_LEISTE_AKTIV) && FH_TUERMODUL__EKS_LEISTE_AKTIV_old))
            {
               stable = 0;

               EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 1;
            }
         }
	  else
         {
            stable = 0;
            EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 1;
         }
      }
   }
}


       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

{
   if (!Bitlist[active_BLOCK_ERKENNUNG_CTRL_IDX] && Bitlist[active_BLOCK_ERKENNUNG_CTRL_old_IDX] && !Bitlist[active_BLOCK_ERKENNUNG_CTRL_copy_IDX])
   {
      SYS_bit_clr (Bitlist, entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX);
   }
   if (Bitlist[active_BLOCK_ERKENNUNG_CTRL_IDX])
   {

      {
         if (BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state==1)
         {
            if ((FH_TUERMODUL__I_EIN != FH_TUERMODUL__I_EIN_old) && ((FH_TUERMODUL__I_EIN > 0)))
            {
               stable = 0;
                FH_TUERMODUL__BLOCK_copy = 0;

               BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 2;
                BLOCK_ERKENNUNG_CTRL__N = 0;
                 BLOCK_ERKENNUNG_CTRL__I_EIN_MAX = 2;
               BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 3;
               SYS_bit_set (Bitlist, entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX);

            }

         }
         else if (BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state==2)
         {
            if ((!(FH_TUERMODUL__MFHA) && FH_TUERMODUL__MFHA_old) || (!(FH_TUERMODUL__MFHZ) && FH_TUERMODUL__MFHZ_old))
            {
               stable = 0;

               BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;
               BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 0;

            }
            {
               if (BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state==1)
               {

               }
               else if (BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state==2)
               {
                  if ((FH_TUERMODUL__I_EIN > (BLOCK_ERKENNUNG_CTRL__I_EIN_MAX - 2)))
                  {
                     stable = 0;
                      FH_TUERMODUL__BLOCK_copy = 1;

                     BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 1;
                  }
               }
               else if (BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state==3)
               {
                  SYS_bit_clr (Bitlist, entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX);
                  if ((BLOCK_ERKENNUNG_CTRL__N == 11 && !(BLOCK_ERKENNUNG_CTRL__N_old == 11)))
                  {
                     stable = 0;

                     BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 2;
                  }

                  if (BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state == 3)
                       {
                          if (step == 1 && tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy != 0 && (time - tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy == 2/100))
                     {
                         BLOCK_ERKENNUNG_CTRL__N = BLOCK_ERKENNUNG_CTRL__N + 1;
                          if ((FH_TUERMODUL__I_EIN > BLOCK_ERKENNUNG_CTRL__I_EIN_MAX))
                        {
                           BLOCK_ERKENNUNG_CTRL__I_EIN_MAX = FH_TUERMODUL__I_EIN;

                        }

                     }
                  }

               }
               else
               {
                  stable = 0;
                   BLOCK_ERKENNUNG_CTRL__N = 0;
                    BLOCK_ERKENNUNG_CTRL__I_EIN_MAX = 2;
                  BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 3;
                  SYS_bit_set (Bitlist, entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRL_IDX);

               }
            }

         }
         else
         {
            stable = 0;
            BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;

         }
      }
   }
}



       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

      SYS_bit_cpy(Bitlist, active_KINDERSICHERUNG_CTRL_copy_IDX, Bitlist, active_KINDERSICHERUNG_CTRL_IDX);
      SYS_bit_cpy(Bitlist, active_FH_TUERMODUL_CTRL_copy_IDX, Bitlist, active_FH_TUERMODUL_CTRL_IDX);
      SYS_bit_cpy(Bitlist, active_EINKLEMMSCHUTZ_CTRL_copy_IDX, Bitlist, active_EINKLEMMSCHUTZ_CTRL_IDX);
      SYS_bit_cpy(Bitlist, active_BLOCK_ERKENNUNG_CTRL_copy_IDX, Bitlist, active_BLOCK_ERKENNUNG_CTRL_IDX);
      FH_TUERMODUL_CTRL__N_old = FH_TUERMODUL_CTRL__N;
      FH_TUERMODUL__I_EIN_old = FH_TUERMODUL__I_EIN;
      FH_DU__MFH = FH_DU__MFH_copy;
      FH_DU__I_EIN_old = FH_DU__I_EIN;
      BLOCK_ERKENNUNG_CTRL__N_old = BLOCK_ERKENNUNG_CTRL__N;
      FH_TUERMODUL__SFHZ_ZENTRAL_old = FH_TUERMODUL__SFHZ_ZENTRAL;
      FH_TUERMODUL__SFHZ_MEC_old = FH_TUERMODUL__SFHZ_MEC;
      FH_TUERMODUL__SFHA_ZENTRAL_old = FH_TUERMODUL__SFHA_ZENTRAL;
      FH_TUERMODUL__SFHA_MEC_old = FH_TUERMODUL__SFHA_MEC;
      FH_TUERMODUL__BLOCK = FH_TUERMODUL__BLOCK_copy;
      FH_TUERMODUL__BLOCK_old = FH_TUERMODUL__BLOCK;
      FH_TUERMODUL__SFHZ = FH_TUERMODUL__SFHZ_copy;
      
      FH_TUERMODUL__SFHZ_old = FH_TUERMODUL__SFHZ;
      FH_TUERMODUL__SFHA = FH_TUERMODUL__SFHA_copy;
      FH_TUERMODUL__SFHA_old = FH_TUERMODUL__SFHA;
      FH_TUERMODUL__MFHZ = FH_TUERMODUL__MFHZ_copy;
      FH_TUERMODUL__MFHZ_old = FH_TUERMODUL__MFHZ;
      FH_TUERMODUL__MFHA = FH_TUERMODUL__MFHA_copy;
      FH_TUERMODUL__MFHA_old = FH_TUERMODUL__MFHA;
      FH_TUERMODUL__EKS_LEISTE_AKTIV_old = FH_TUERMODUL__EKS_LEISTE_AKTIV;
      FH_DU__EKS_LEISTE_AKTIV_old = FH_DU__EKS_LEISTE_AKTIV;
      FH_DU__S_FH_TMBFAUFCAN_old = FH_DU__S_FH_TMBFAUFCAN;
      FH_DU__S_FH_TMBFZUCAN_old = FH_DU__S_FH_TMBFZUCAN;
      FH_DU__S_FH_TMBFZUDISC_old = FH_DU__S_FH_TMBFZUDISC;
      FH_DU__S_FH_TMBFAUFDISC_old = FH_DU__S_FH_TMBFAUFDISC;
      FH_DU__BLOCK = FH_DU__BLOCK_copy;
      FH_DU__BLOCK_old = FH_DU__BLOCK;
      FH_DU__MFHZ = FH_DU__MFHZ_copy;
      FH_DU__MFHZ_old = FH_DU__MFHZ;
      FH_DU__MFHA = FH_DU__MFHA_copy;
      FH_DU__MFHA_old = FH_DU__MFHA;

	stable1++;
	
       
   }

  return 0;
}
