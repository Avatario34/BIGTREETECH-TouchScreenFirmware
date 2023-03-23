#ifndef _LANGUAGE_GR_H_
#define _LANGUAGE_GR_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_LANGUAGE               "Ελληνικά"
    #define STRING_EMULATED_M600          "Emulated M600"
    #define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
    #define STRING_EVENT_LED              "Event LED"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "Περιστροφή UI"
    #define STRING_ACK_NOTIFICATION       "ACK notification style"
    #define STRING_FILES_SORT_BY          "Sort files by"
    #define STRING_FILES_LIST_MODE        "Λειτουργία λίστας προβολής αρχείων"
    #define STRING_FILENAME_EXTENSION     "Show filename extension"
    #define STRING_FAN_SPEED_PERCENTAGE   "Fan Speed As Percentage"
    #define STRING_PERSISTENT_INFO        "Πληροφορίες μόνιμης κατάστασης"
    #define STRING_TERMINAL_ACK           "Εμφάνιση ACK στο τερματικό"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_MARLIN_FULLSCREEN      "Λειτουργία Marlin σε πλήρη οθόνη"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_MOVE_SPEED             "Ταχύτητα κίνησης(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Load Leveling"
    #define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_AUTO_SHUTDOWN       "Αυτόματη απενεργοποίηση"
    #define STRING_FIL_RUNOUT             "Αισθητήρας νήματος"
    #define STRING_PL_RECOVERY            "Power loss recovery"
    #define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "Touch sounds"
    #define STRING_TOAST_SOUND            "Toast Notifications"
    #define STRING_ALERT_SOUND            "Popups and Alerts"
    #define STRING_HEATER_SOUND           "Heater notification"
    #define STRING_LCD_BRIGHTNESS         "Φωτεινότητα"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Φωτεινότητα LCD σκοτεινή"
    #define STRING_LCD_IDLE_TIME          "Xρονομετρητής αδράνειας οθόνης"
    #define STRING_LCD_LOCK_ON_IDLE       "LCD lock on idle"
    #define STRING_LED_ALWAYS_ON          "LED always ON"
    #define STRING_KNOB_LED_COLOR         "LED περιστροφικού κουμπιού"
    #define STRING_KNOB_LED_IDLE          "Rotary Knob LED idle"
    #define STRING_START_GCODE_ENABLED    "Αρχικό Gcode προ εκτύπωσης"
    #define STRING_END_GCODE_ENABLED      "Τερματικό Gcode εφότου εκτύπωσης"
    #define STRING_CANCEL_GCODE_ENABLED   "Ματαίωση Gcode"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Βήματα ανά χιλ"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_MAXACCELERATION        "Μέγιστη επιτάχυνση"
    #define STRING_MAXFEEDRATE            "Μέγιστο ποσοστό τροφοδοσίας"
    #define STRING_ACCELERATION           "Eπιτάχυνση"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_FWRETRACT              "FW Retraction"
    #define STRING_FWRECOVER              "FW Retraction Recover"
    #define STRING_RETRACT_AUTO           "Auto Firmware Retract"
    #define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
    #define STRING_HOTEND_PID             "Hotend PID"
    #define STRING_BED_PID                "Bed PID"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_INPUT_SHAPING          "Input Shaping"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_DIAGONAL_ROD     "Diagonal Rod Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "Αντιστάθμιση Καθετήρας"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Ένταση η. ρεύ. οδηγού(mA)"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_BUMP_SENSITIVITY       "TMC ευαισθησία χτυπήματος"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Επιτάχυνση εκτύπωσης"
    #define STRING_RETRACT_ACCELERATION   "Eπιτάχυνση ανάκλησης"
    #define STRING_TRAVEL_ACCELERATION    "Επιτάχυνση ταξιδιού"
    #define STRING_RETRACT_LENGTH         "Retract length"
    #define STRING_RETRACT_SWAP_LENGTH    "Retract swap length"
    #define STRING_RETRACT_FEEDRATE       "Retract feedrate"
    #define STRING_RETRACT_Z_LIFT         "Z lift on retraction"
    #define STRING_RECOVER_LENGTH         "Extra recover length"
    #define STRING_SWAP_RECOVER_LENGTH    "Extra recover swap length"
    #define STRING_RECOVER_FEEDRATE       "Recover feedrate"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Swap recover feedrate"

    // Save / Load
    #define STRING_SAVE                   "Αποθήκευση"
    #define STRING_RESTORE                "Restore"
    #define STRING_RESET                  "Επαναφορά"
    #define STRING_EEPROM_SAVE_INFO       "Save printer settings to EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Reload settings from EEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Reset EEPROM to stock printer settings?"
    #define STRING_SETTINGS_SAVE          "Save settings"
    #define STRING_SETTINGS_RESTORE       "Restore settings"
    #define STRING_SETTINGS_RESET         "Reset default settings"
    #define STRING_SETTINGS_RESET_INFO    "Όλες οι ρυθμίσεις θα επαναφερθούν στις προεπιλεγμένες τιμές. Συνεχίσει?"
    #define STRING_SETTINGS_RESET_DONE    "Η επαναφορά όλων των ρυθμίσεων ολοκληρώθηκε με επιτυχία. \nΓια πλήρη εφαρμογή,\nπαρακάλω επανεκκινήστε τη συσκευή σας."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Σελίδα πάνω"
    #define STRING_PAGE_DOWN              "Σελίδα κάτω"
    #define STRING_UP                     "Up"
    #define STRING_DOWN                   "Down"
    #define STRING_NEXT                   "Next"
    #define STRING_BACK                   "Πίσω"

    // Value Buttons
    #define STRING_INC                    "Αύξηση"
    #define STRING_DEC                    "Μείωση"
    #define STRING_LOAD                   "Φόρτωση"
    #define STRING_UNLOAD                 "Ξεφόρτωση"
    #define STRING_ON                     "Ενεργό"
    #define STRING_OFF                    "Σβηστό"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "ΈΞΥΠΝΟ"
    #define STRING_SLOW                   "Αργά"
    #define STRING_NORMAL                 "Κανονικά"
    #define STRING_FAST                   "Γρήγορα"
    #define STRING_ZERO                   "Μηδέν"
    #define STRING_HALF                   "Μισή ταχύτητα"
    #define STRING_FULL                   "Ολοταχώς"
    #define STRING_CUSTOM                 "Τροποποιημένο"
    #define STRING_CLEAR                  "Clear"
    #define STRING_DEFAULT                "Default"

    // Action Buttons
    #define STRING_START                  "Start"
    #define STRING_STOP                   "Τερμάτιση"
    #define STRING_PAUSE                  "Παύση"
    #define STRING_RESUME                 "Ξαναρχίσει"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Αποσυνδέσει"
    #define STRING_SHUT_DOWN              "Απενεργοποίηση"
    #define STRING_FORCE_SHUT_DOWN        "Αναγκαστική απενεργοποίηση"
    #define STRING_EMERGENCYSTOP          "Σταμάτημα έκτακτης ανάγκης"
    #define STRING_PREHEAT                "Προθέρμανση"
    #define STRING_PREHEAT_BOTH           "Και τα δυο"
    #define STRING_COOLDOWN               "Κρυώσει"

    // Dialog Buttons
    #define STRING_CONFIRM                "\u088E Εντάξει" //Confirm Sign
    #define STRING_CANCEL                 "\u088F Ματαίωση" //Cancel Sign
    #define STRING_WARNING                "Προειδοποίηση"
    #define STRING_CONTINUE               "Συνέχεια"
    #define STRING_CONFIRMATION           "Are you sure?"

    // Process Status
    #define STRING_STATUS                 "ΚΑΤΑΣΤΑΣΗ"
    #define STRING_READY                  "Έτοιμο"
    #define STRING_BUSY                   "Απασχολημένη επεξεργασία, παρακάλω περιμένετε ..."
    #define STRING_LOADING                "Φόρτωση..."
    #define STRING_UNCONNECTED            "Δεν υπάρχει συνδεδεμένος εκτυπωτής!"
    #define STRING_LISTENING              "TFT in Listening Mode!"

    // Process Info
    #define STRING_INFO                   "\u0884 Πληροφορίες" //Info Sign
    #define STRING_INVALID_VALUE          "Invalid value(s)"
    #define STRING_TIMEOUT_REACHED        "Timeout reached!"
    #define STRING_DISCONNECT_INFO        "Τώρα μπορείτε να ελέγξετε τον εκτυπωτή από τον υπολογιστή σας!"
    #define STRING_SHUTTING_DOWN          "Απενεργοποίηση..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Περιμένετε για την θερμοκρασία του hotend να πέσει χαμηλότερα απο %d℃" // The length of the info line is 24 characters, so the "temperatureof" will automatically be divided into "temperature of..."
    #define STRING_POWER_FAILED           "Συνέχεια εκτύπωσης;"
    #define STRING_PROCESS_RUNNING        "Process already running!"
    #define STRING_PROCESS_COMPLETED      "Process completed!"
    #define STRING_PROCESS_ABORTED        "Process aborted!"

    // TFT Media, Onboard Media, Filament Runout Process Commands / Status / Info
    #define STRING_TFT_SD                 "TFT SD"
    #define STRING_TFT_SD_INSERTED        "Η κάρτα έχει εισαχθεί"
    #define STRING_TFT_SD_REMOVED         "Η κάρτα αφαιρέθηκε"
    #define STRING_TFT_SD_NOT_DETECTED    "No SD card detected!"
    #define STRING_TFT_SD_READ_ERROR      "Σφάλμα ανάγνωσης κάρτας SD οθόνης!"
    #define STRING_TFT_USB                "USB Δίσκος"
    #define STRING_TFT_USB_INSERTED       "Ο USB Δίσκος έχει εισαχθεί"
    #define STRING_TFT_USB_REMOVED        "Ο USB Δίσκος αφαιρέθηκε"
    #define STRING_TFT_USB_NOT_DETECTED   "No USB disk detected!"
    #define STRING_TFT_USB_READ_ERROR     "Σφάλμα ανάγνωσης USB Δίσκου!"
    #define STRING_ONBOARD_SD             "Ενσωματωμένη κάρτα SD"
    #define STRING_ONBOARD_USB            "Ενσωματωμένη κάρτα USB"
    #define STRING_ONBOARD_SD_READ_ERROR  "Σφάλμα ανάγνωσης ενσωματωμένης κάρτας SD!"
    #define STRING_FILAMENT_RUNOUT        "τελείωσε το νημά!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Disarm All"
    #define STRING_XY_UNLOCK              "Disarm XY"

    #define STRING_START_PRINT            "Start printing:\n%s?"
    #define STRING_STOP_PRINT             "Διακοπή εκτύπωσης?"
    #define STRING_IS_PAUSE               "Δεν είναι δυνατή η εξώθηση κατα τη δυάρκεια εκτύπωσης.\nΠαύση εκτύπωσης?"
    #define STRING_M0_PAUSE               "Διακόπηκε λόγω M0 εντολής"

    #define STRING_TEST                   "Δοκιμή"
    #define STRING_DEPLOY                 "Επέκταση"
    #define STRING_STOW                   "Aπόσυρση"
    #define STRING_REPEAT                 "Επανάληψη"
    #define STRING_HS_ON                  "HS: On"
    #define STRING_HS_OFF                 "HS: Off"

    // Printer Tools
    #define STRING_NOZZLE                 "Στόμιο"
    #define STRING_BED                    "Θερμή Βάση"
    #define STRING_CHAMBER                "Chamber"
    #define STRING_FAN                    "Ανεμιστήρας"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01χιλ"
    #define STRING_01_MM                  "0.1χιλ"
    #define STRING_1_MM                   "1χιλ"
    #define STRING_5_MM                   "5χιλ"
    #define STRING_10_MM                  "10χιλ"
    #define STRING_100_MM                 "100χιλ"
    #define STRING_200_MM                 "200χιλ"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 Δευτ."
    #define STRING_10_SECONDS             "10 Δευτ."
    #define STRING_30_SECONDS             "30 Δευτ."
    #define STRING_60_SECONDS             "1 Λεπτό"
    #define STRING_120_SECONDS            "2 Λεπτά"
    #define STRING_300_SECONDS            "5 Λεπτά"

    // Colors
    #define STRING_WHITE                  "Άσπρο"
    #define STRING_BLACK                  "Μάυρο"
    #define STRING_BLUE                   "Μπλέ"
    #define STRING_RED                    "Κόκκινο"
    #define STRING_GREEN                  "Πράσινο"
    #define STRING_CYAN                   "Κυανό"
    #define STRING_YELLOW                 "Κίτρινο"
    #define STRING_BROWN                  "Καφέ"
    #define STRING_GRAY                   "Γκρί"
    #define STRING_ORANGE                 "Πορτοκάλι"
    #define STRING_INDIGO                 "Ινδικό"
    #define STRING_VIOLET                 "Βιολετί"
    #define STRING_MAGENTA                "Πορφύρα"
    #define STRING_PURPLE                 "Μωβ"
    #define STRING_LIME                   "Πρασινοκίτρινο"
    #define STRING_DARKBLUE               "Σκούρο μπλε"
    #define STRING_DARKGREEN              "Σκούρο πράσινο"
    #define STRING_DARKGRAY               "Σκούρο γκρίζο"

    // Menus
    #define STRING_HEAT                   "Θέρμανση"
    #define STRING_MOVE                   "Μετακίνηση"
    #define STRING_HOME                   "Αυτο-Κατεύθυνση"
    #define STRING_ZEROING                "Zero"
    #define STRING_PROBING_Z              "Z-Probe"    
    #define STRING_PRINT                  "Εκτύπωση"
    #define STRING_EXTRUDE                "Εκβολή"
    #define STRING_SETTINGS               "Ρυθμίσεις"
    #define STRING_SCREEN_SETTINGS        "Οθόνη"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Sound"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "Μηχανήματος"
    #define STRING_PARAMETER_SETTINGS     "Ρυθμίσεις παραμέτρων"
    #define STRING_FEATURE_SETTINGS       "Χαρακτηριστικών"
    #define STRING_CONNECTION_SETTINGS    "Connection"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "BaudRate"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "Χρώμα LED"
    #define STRING_RGB_OFF                "Απενεργοποίηση LED"
    #define STRING_TERMINAL               "Τερματικό"
    #define STRING_LEVELING               "Ισοπέδωση"
    #define STRING_POINT_1                "Σημείο 1"
    #define STRING_POINT_2                "Σημείο 2"
    #define STRING_POINT_3                "Σημείο 3"
    #define STRING_POINT_4                "Σημείο 4"
    #define STRING_POINT_5                "Σημείο 5"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "Bed Leveling Complete"
    #define STRING_BL_SMART_FILL          "Missing probe points have been smart filled.\n\nNote: remember to save!"
    #define STRING_BL_ENABLE              "BL: on"
    #define STRING_BL_DISABLE             "BL: off"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
    #define STRING_ABL_SETTINGS           "Auto Bed Leveling"
    #define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Save to slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Load from slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Save the mesh to EEPROM to load after reboot?"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_LEVEL_CORNER_INFO      "Edge distance is below probe offset X/Y and some target points could be not reachable.\nDo you want to use a safe edge distance?"
    #define STRING_P_OFFSET               "Αντιστάθμιση P"
    #define STRING_H_OFFSET               "Αντιστάθμιση H"
    #define STRING_DISTANCE               "Distance"
    #define STRING_SHIM                   "Shim"
    #define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
    #define STRING_TOUCHSCREEN_ADJUST     "Προσαρμογή TOUCH"
    #define STRING_MORE                   "Περισσότερα"
    #define STRING_SCREEN_INFO            "Πληροφορίες"
    #define STRING_BG_COLOR               "Background color"
    #define STRING_FONT_COLOR             "Font color"
    #define STRING_PERCENTAGE             "Ποσοστό"
    #define STRING_PERCENTAGE_SPEED       "Ταχύτητα"
    #define STRING_PERCENTAGE_FLOW        "Ροή"
    #define STRING_BABYSTEP               "Μικροβήμα"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Βαθμονόμηση οθόνης αφής"
    #define STRING_ADJUST_INFO            "Κάντε κλικ στην κόκκινη κουκκίδα"
    #define STRING_ADJUST_OK              "Επιτυχία προσαρμογής"
    #define STRING_ADJUST_FAILED          "Η προσαρμογή απέτυχε. Δοκιμάστε ξανά"
    #define STRING_UNIFIEDMOVE            "Κίνηση"
    #define STRING_UNIFIEDHEAT            "Θέρμανση/Ανεμιστήρας"
    #define STRING_TOUCH_TO_EXIT          "Αγγίξτε οπουδήποτε για έξοδο"
    #define STRING_MAINMENU               "Μενού"
    #define STRING_TUNING                 "Tuning"
    #define STRING_MPC                    "MPC"
    #define STRING_MPC_TITLE              "MPC autotune"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID autotune"
    #define STRING_TUNE_START_INFO        "Autotune may take some time to complete.\nContinue?"
    #define STRING_TUNE_EXTRUDER          "Tune steps"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Extruder tuning | Heat"
    #define STRING_TUNE_EXT_MARK120MM     "Mark 120 mm on your fillament.\nPress '%s' when ready.\nMeasure remaining length after extruding."
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "New E-steps applied.\nDon't forget to save it in EEPROM.\nNew value: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Length remaining:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
    #define STRING_NOTIFICATIONS          "Notifications"
    #define STRING_MESH_EDITOR            "Mesh edit"
    #define STRING_MESH_TUNER             "Mesh tuner"
    #define STRING_CASE_LIGHT             "Case light"
    #define STRING_LOAD_STARTED           "Loading filament.\nPlease wait for the process to complete."  // translation needed
    #define STRING_UNLOAD_STARTED         "Unloading filament.\nPlease wait for the process to complete."  // translation needed
    #define STRING_HEATERS_ON             "Some heaters are still ON.\nDo you want to stop them?"  // translation needed
    #define STRING_PRINT_FINISHED         "   Print\n   finished"
    #define STRING_MAIN_SCREEN            "Main"
    #define STRING_PREVIOUS_PRINT_DATA    "Brief"
    #define STRING_PRINT_TIME             "Print Time: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nFilament length: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nFilament weight: %1.2fg"
    #define STRING_FILAMENT_COST          "\nFilament cost: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nFilament data not available."
    #define STRING_CLICK_FOR_MORE         "Click for summary"
    #define STRING_EXT_TEMPLOW            "Hotend temperature is below minimum temperature (%d℃)."
    #define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Hotend temperature is below\ndesired temperature (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Wait for it to heat up."
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_MACROS                 "Macros"
    #define STRING_MESH_VALID             "Mesh Validation"
    #define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
    #define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
    #define STRING_CALIBRATION            "Calibrate"

#endif
