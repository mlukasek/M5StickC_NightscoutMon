#include "M5StickC_NSconfig.h"

void readConfiguration(tConfig *cfg) {
  strlcpy(cfg->url, "adadia.herokuapp.com", 64);
  cfg->bootPic[0]=0;
  strcpy(cfg->userName, "Ada");
  cfg->timeZone = 3600;
  cfg->dst = 3600;
  cfg->show_mgdl = 0;
  cfg->show_current_time = 0;
  cfg->show_COB_IOB = 1;
  cfg->snooze_timeout = 30;
  cfg->alarm_repeat = 5;
  cfg->dev_mode = 0;
  cfg->yellow_low = 4.5;
  cfg->yellow_high = 9.0;
  cfg->red_low = 3.9;
  cfg->red_high = 9.0;
  cfg->snd_warning = 3.7;  
  cfg->snd_alarm = 3.0;
  cfg->snd_warning_high = 14.0;
  cfg->snd_alarm_high = 20.0;
  cfg->snd_no_readings = 20;
  cfg->warning_music[0]=0;
  cfg->warning_volume = 30;
  cfg->alarm_music[0]=0;
  cfg->alarm_volume = 100;
  cfg->brightness1 = 10;
  cfg->brightness2 = 15;
  cfg->brightness3 = 8;
  strlcpy(cfg->wlan1ssid, "Skr1474",32);
  strlcpy(cfg->wlan1pass, "dddddddd", 32);
  strlcpy(cfg->wlan2ssid, "wlan2ssid", 32);
  strlcpy(cfg->wlan2pass, "wlan2pass", 32);
  strlcpy(cfg->wlan3ssid, "wlan3ssid", 32);
  strlcpy(cfg->wlan3pass, "wlan3pass", 32);
}
