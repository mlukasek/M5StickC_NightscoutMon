#include "M5StickC_NSconfig.h"

// here write YOUR NIGHTSCOUT configuration data (do not edit M5StickC_NSconfig.h file)

void readConfiguration(tConfig *cfg) {
  strlcpy(cfg->url, "username.herokuapp.com", 64); // Nightscout URL
  strlcpy(cfg->token, "", 32); // security token
  cfg->bootPic[0]=0;
  strcpy(cfg->userName, "User");
  cfg->timeZone = 3600; // time zone shift in second (1 hour = 3600 seconds)
  cfg->dst = 3600; // daylight shift in seconds
  cfg->show_mgdl = 0; // 0 for mmol/L, 1 for mg/dL
  cfg->sgv_only = 0; // 1 = filter only SGV values
  cfg->show_current_time = 0; // not used currently
  cfg->show_COB_IOB = 1; // show COB and IOB
  cfg->snooze_timeout = 30; // not used currently
  cfg->alarm_repeat = 5; // not used currently
  cfg->power_on_wifi_delay = 0; // delay between power on and searching for WiFi SSID
  cfg->dev_mode = 0; // only for developer purposes
  cfg->yellow_low = 4.4; // show glycemia value yellow under this value (always in mmol/L)
  cfg->yellow_high = 9.0; // show glycemia value yellow over this value (always in mmol/L)
  cfg->red_low = 3.9; // show glycemia value red under this value (always in mmol/L)
  cfg->red_high = 11.0; // show glycemia value red over this value (always in mmol/L)
  cfg->snd_warning = 3.7; // LED alarm under this value
  cfg->snd_alarm = 3.0; // LED alarm under this value
  cfg->snd_warning_high = 14.0; // LED alarm over this value
  cfg->snd_alarm_high = 20.0; // LED alarm over this value
  cfg->snd_no_readings = 20; // LED alarm if no date more then this minutes
  cfg->warning_music[0]=0; // not used currently
  cfg->warning_volume = 50; // not used currently
  cfg->alarm_music[0]=0; // not used currently
  cfg->alarm_volume = 100; // not used currently
  cfg->brightness1 = 10; // default display brightness (0-15, but reasonable values are 7-15)
  cfg->brightness2 = 15; // the second level of display brightness (0-15, but reasonable values are 7-15)
  cfg->brightness3 = 8; // the third level of display brightness (0-15, but reasonable values are 7-15)
  cfg->display_rotation = 3;
  strlcpy(cfg->wlan1ssid, "wlan1ssid",32);
  strlcpy(cfg->wlan1pass, "wlan1pass", 63);
  strlcpy(cfg->wlan2ssid, "wlan2ssid", 32);
  strlcpy(cfg->wlan2pass, "wlan2pass", 63);
  strlcpy(cfg->wlan3ssid, "wlan3ssid", 32);
  strlcpy(cfg->wlan3pass, "wlan3pass", 63);
}
