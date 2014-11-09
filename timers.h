
#ifndef __TIMERS_H
    #define __TIMERS_H

    #define uchar unsigned char
    #define uint  unsigned int

    #include    "target.def"
    #include    "timers.def"

    extern uint TARGET_SMEM timers[TIMERS_COUNT];   // Definice pro obsluhu casoveho limitu
    extern void             timers_init();          // init driveru
    extern void             timers_proc();          // proces driveru

    #if SYSTEM_TIME_INCLUDE == ROUTINE_INCLUDE
    extern void  time_set_time(uchar hour, uchar min, uchar sec);
    extern void  time_set_date(uint  year, uchar month, uchar day);
    extern void  time_set_hour(uchar hour);
    extern void  time_set_minute(uchar minute);
    extern void  time_set_second(uchar second);
    extern void  time_set_year(uint year);
    extern void  time_set_month(uchar month);
    extern void  time_set_day(uchar day);
    extern char *time_string();
    extern char *date_string();
    #endif

    #if TIME_MEASURE_INCLUDE == ROUTINE_INCLUDE
    extern void timers_measure_start();
    extern void timers_measure_stop();
    extern uint timers_measure_get_value();
    #endif

    #if TIME_LOOP_MEASURE == ROUTINE_INCLUDE
    extern void              timers_loop_measure_start(uchar loop_event);
    extern ulong             timers_loop_measure_get_value();
    #endif

#endif
