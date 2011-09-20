﻿// ARMA2
class CfgPatches {
    class VDMJ_ExtendedGUI {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"CAFonts", "CAUI"};
    };
};

class CA_Title;
class RscCombo;
class RscEdit;
class RscPicture;
class RscShortcutButton;
class RscText;
class RscXSliderH;
class RscStructuredText;
class RscToolbox;

class vdmj_RscMouseZ {
    unsigned = 1;
    acceleration[] = {1, 1, 10, .1}; // normal, Shift, Alt, Ctrl
};
class vdmj_RscMouseZTime {
    unsigned = 1;
    acceleration[] = {1, 1, 5, .5}; // normal, Shift, Alt, Ctrl
};
class vdmj_RscMouseZPlacement {
    unsigned = 1;
    acceleration[] = {50, 1, 2, .1}; // normal, Shift, Alt, Ctrl
};
class vdmj_RscMouseZAngle {
    period = 360;
    acceleration[] = {22.5, 1, 2, .1}; // normal, Shift, Alt, Ctrl
};

class RscDisplayArcadeUnit {
    onLoad = "[_this select 0, 'RscDisplayArcadeUnit'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
    class controls {
        class CA_Azimut : RscPicture {
            idc = 114;
            class MouseZ {
                reflectEvent = "CA_ValueAzimut";
            };
        };
        class CA_ValueAzimut : RscEdit {
            idc = 111;
            class MouseZ : vdmj_RscMouseZAngle {};
        };
        class CA_TextPlacement : RscText {
            idc = 1223;
            class MouseZ : vdmj_RscMouseZPlacement {};
        };
        
        class vdmj_ValueDescription_Background : RscPicture {
            x = 0.284191;
            y = 0.517161;
            w = 0.651103;
            h = 0.029412;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            colortext[] = {
                1, 1, 1, 0.6
            };
        };
        class vdmj_ValueDescription : RscEdit {
            idc = 1122;
            x = 0.284191;
            y = 0.517161;
            w = 0.651103;
            h = 0.029412;
            sizeEx = 0.03;
            text = "";
        };
    };
};
class RscDisplayArcadeGroup {
    onLoad = "[_this select 0, 'RscDisplayArcadeGroup'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
    class controls {
        class CA_ValueAzimut : RscEdit {
            class MouseZ : vdmj_RscMouseZAngle {};
        };
        class CA_Azimut : RscPicture {
            class MouseZ {
                reflectEvent = "CA_ValueAzimut";
            };
        };
    };
};
class RscDisplayArcadeWaypoint {
    onLoad = "[_this select 0, 'RscDisplayArcadeWaypoint'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
    class controls {
        class ValuePlacement : RscEdit {
            class MouseZ : vdmj_RscMouseZPlacement {};
        };
        class ValuePrecision : RscEdit {
            class MouseZ : vdmj_RscMouseZPlacement {};
        };
        class ValueTimeoutMin : RscEdit {
            class MouseZ : vdmj_RscMouseZTime {};
        };
        class ValueTimeoutMid : RscEdit {
            class MouseZ : vdmj_RscMouseZTime {};
        };
        class ValueTimeoutMax : RscEdit {
            class MouseZ : vdmj_RscMouseZTime {};
        };
    };
};
class RscDisplayArcadeMarker {
    onLoad = "[_this select 0, 'RscDisplayArcadeMarker'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
    class controls {
        class CA_ValueA : RscEdit {
            class MouseZ : vdmj_RscMouseZPlacement {};
        };
        class CA_ValueB : RscEdit {
            class MouseZ : vdmj_RscMouseZPlacement {};
        };
        class CA_ValueAngle : RscEdit {
            class MouseZ : vdmj_RscMouseZAngle {};
        };
    };
};
class RscDisplayArcadeSensor {
    onLoad = "[_this select 0, 'RscDisplayArcadeSensor'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
    class controls {
        class CA_ValueA : RscEdit {
            class MouseZ : vdmj_RscMouseZPlacement {};
        };
        class CA_ValueB : RscEdit {
            class MouseZ : vdmj_RscMouseZPlacement {};
        };
        class CA_ValueAngle : RscEdit {
            class MouseZ : vdmj_RscMouseZAngle {};
        };
        class CA_ValueTimeoutMin : RscEdit {
            class MouseZ : vdmj_RscMouseZTime {};
        };
        class CA_ValueTimeoutMid : RscEdit {
            class MouseZ : vdmj_RscMouseZTime {};
        };
        class CA_ValueTimeoutMax : RscEdit {
            class MouseZ : vdmj_RscMouseZTime {};
        };
    };
};
class RscDisplayArcadeEffects {
    onLoad = "[_this select 0, 'RscDisplayArcadeEffects'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
};

class RscDisplayArcadeModules {
    onLoad = "[_this select 0, 'RscDisplayArcadeModules'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
};

class RscDisplayIntel {
    onLoad = "[_this select 0, 'RscDisplayIntel'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
};

class RscDisplayArcadeMap {
    onLoad = "uiNamespace setVariable ['/VDMJ/ExtendedGUI/init.sqf', compile preprocessFileLineNumbers 'vdmj.ExtendedGUI\init.sqf']; [_this select 0, 'RscDisplayArcadeMap'] call (uiNamespace getVariable '/VDMJ/ExtendedGUI/init.sqf')";
    class controls {
        class vdmj_PopupHint : RscStructuredText {
            idc = 98232;
            x = -100;
            y = -100;
            text = ;
        };
        class vdmj_PopupHintBackground : RscText {
            idc = 98233;
            x = -100;
            y = -100;
            text = ;
        };
        class CA_ToolboxMode : RscToolbox {
            sizeEx = 0.03;
            h = 6 * 0.033;
            strings[] = {
                "$STR:VDMJ:DN:ARCMAP_UNITS",
                "$STR:VDMJ:DN:ARCMAP_GROUPS",
                "$STR:VDMJ:DN:ARCMAP_SENSORS",
                "$STR:VDMJ:DN:ARCMAP_WAYPOINTS",
                "$STR:VDMJ:DN:ARCMAP_SYNCHRONIZE",
                "$STR:VDMJ:DN:ARCMAP_MARKERS",
                "$STR:VDMJ:DN:ARCMAP_MODULE",
                "$STR:VDMJ:DN:ARCMAP_NOTHING"
            };
            rows = 8;
            columns = 1;
        };
    };
};