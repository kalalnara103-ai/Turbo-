#include "EAXReverb.h"

void EAXReverb::SetReverbPreset(int preset)
{
	switch (preset)
	{
	case 0:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_GENERIC;
		break;
	case 1:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PADDEDCELL;
		break;
	case 2:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ROOM;
		break;
	case 3:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_BATHROOM;
		break;
	case 4:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_LIVINGROOM;
		break;
	case 5:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_STONEROOM;
		break;
	case 6:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_AUDITORIUM;
		break;
	case 7:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CONCERTHALL;
		break;
	case 8:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CAVE;
		break;
	case 9:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ARENA;
		break;
	case 10:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_HANGAR;
		break;
	case 11:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CARPETEDHALLWAY;
		break;
	case 12:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_HALLWAY;
		break;
	case 13:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_STONECORRIDOR;
		break;
	case 14:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ALLEY;
		break;
	case 15:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FOREST;
		break;
	case 16:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CITY;
		break;
	case 17:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_MOUNTAINS;
		break;
	case 18:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_QUARRY;
		break;
	case 19:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PLAIN;
		break;
	case 20:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PARKINGLOT;
		break;
	case 21:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SEWERPIPE;
		break;
	case 22:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_UNDERWATER;
		break;
	case 23:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRUGGED;
		break;
	case 24:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DIZZY;
		break;
	case 25:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PSYCHOTIC;
		break;
	case 26:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_SMALLROOM;
		break;
	case 27:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_SHORTPASSAGE;
		break;
	case 28:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_MEDIUMROOM;
		break;
	case 29:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_LARGEROOM;
		break;
	case 30:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_LONGPASSAGE;
		break;
	case 31:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_HALL;
		break;
	case 32:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_CUPBOARD;
		break;
	case 33:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_COURTYARD;
		break;
	case 34:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CASTLE_ALCOVE;
		break;
	case 35:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_SMALLROOM;
		break;
	case 36:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_SHORTPASSAGE;
		break;
	case 37:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_MEDIUMROOM;
		break;
	case 38:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_LARGEROOM;
		break;
	case 39:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_LONGPASSAGE;
		break;
	case 40:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_HALL;
		break;
	case 41:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_CUPBOARD;
		break;
	case 42:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_COURTYARD;
		break;
	case 43:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_FACTORY_ALCOVE;
		break;
	case 44:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_SMALLROOM;
		break;
	case 45:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_SHORTPASSAGE;
		break;
	case 46:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_MEDIUMROOM;
		break;
	case 47:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_LARGEROOM;
		break;
	case 48:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_LONGPASSAGE;
		break;
	case 49:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_HALL;
		break;
	case 50:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_CUPBOARD;
		break;
	case 51:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_COURTYARD;
		break;
	case 52:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_ICEPALACE_ALCOVE;
		break;
	case 53:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_SMALLROOM;
		break;
	case 54:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_SHORTPASSAGE;
		break;
	case 55:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_MEDIUMROOM;
		break;
	case 56:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_LARGEROOM;
		break;
	case 57:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_LONGPASSAGE;
		break;
	case 58:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_HALL;
		break;
	case 59:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_CUPBOARD;
		break;
	case 60:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPACESTATION_ALCOVE;
		break;
	case 61:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_SMALLROOM;
		break;
	case 62:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_SHORTPASSAGE;
		break;
	case 63:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_MEDIUMROOM;
		break;
	case 64:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_LARGEROOM;
		break;
	case 65:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_LONGPASSAGE;
		break;
	case 66:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_HALL;
		break;
	case 67:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_CUPBOARD;
		break;
	case 68:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_COURTYARD;
		break;
	case 69:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_WOODEN_ALCOVE;
		break;
	case 70:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPORT_EMPTYSTADIUM;
		break;
	case 71:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPORT_SQUASHCOURT;
		break;
	case 72:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPORT_SMALLSWIMMINGPOOL;
		break;
	case 73:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPORT_LARGESWIMMINGPOOL;
		break;
	case 74:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPORT_GYMNASIUM;
		break;
	case 75:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPORT_FULLSTADIUM;
		break;
	case 76:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SPORT_STADIUMTANNOY;
		break;
	case 77:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PREFAB_WORKSHOP;
		break;
	case 78:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PREFAB_SCHOOLROOM;
		break;
	case 79:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PREFAB_PRACTISEROOM;
		break;
	case 80:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PREFAB_OUTHOUSE;
		break;
	case 81:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PREFAB_CARAVAN;
		break;
	case 82:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DOME_TOMB;
		break;
	case 83:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PIPE_SMALL;
		break;
	case 84:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DOME_SAINTPAULS;
		break;
	case 85:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PIPE_LONGTHIN;
		break;
	case 86:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PIPE_LARGE;
		break;
	case 87:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_PIPE_RESONANT;
		break;
	case 88:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_OUTDOORS_BACKYARD;
		break;
	case 89:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_OUTDOORS_ROLLINGPLAINS;
		break;
	case 90:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_OUTDOORS_DEEPCANYON;
		break;
	case 91:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_OUTDOORS_CREEK;
		break;
	case 92:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_OUTDOORS_VALLEY;
		break;
	case 93:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_MOOD_HEAVEN;
		break;
	case 94:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_MOOD_HELL;
		break;
	case 95:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_MOOD_MEMORY;
		break;
	case 96:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_COMMENTATOR;
		break;
	case 97:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_PITGARAGE;
		break;
	case 98:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_INCAR_RACER;
		break;
	case 99:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_INCAR_SPORTS;
		break;
	case 100:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_INCAR_LUXURY;
		break;
	case 101:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_FULLGRANDSTAND;
		break;
	case 102:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_EMPTYGRANDSTAND;
		break;
	case 103:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DRIVING_TUNNEL;
		break;
	case 104:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CITY_STREETS;
		break;
	case 105:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CITY_SUBWAY;
		break;
	case 106:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CITY_MUSEUM;
		break;
	case 107:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CITY_LIBRARY;
		break;
	case 108:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CITY_UNDERPASS;
		break;
	case 109:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CITY_ABANDONED;
		break;
	case 110:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_DUSTYROOM;
		break;
	case 111:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_CHAPEL;
		break;
	case 112:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_SMALLWATERROOM;
		break;
	default:
		programs[curProgram].properties = (EFXEAXREVERBPROPERTIES)EFX_REVERB_PRESET_GENERIC;
		break;
	}
}

char *EAXReverb::GetPresetName(int preset)
{
	switch (preset)
	{
	case 0:
		return "GENERIC";
	case 1:
		return "PADDEDCELL";
	case 2:
		return "ROOM";
	case 3:
		return "BATHROOM";
	case 4:
		return "LIVINGROOM";
	case 5:
		return "STONEROOM";
	case 6:
		return "AUDITORIUM";
	case 7:
		return "CONCERTHALL";
	case 8:
		return "CAVE";
	case 9:
		return "ARENA";
	case 10:
		return "HANGAR";
	case 11:
		return "CARPETEDHALLWAY";
	case 12:
		return "HALLWAY";
	case 13:
		return "STONECORRIDOR";
	case 14:
		return "ALLEY";
	case 15:
		return "FOREST";
	case 16:
		return "CITY";
	case 17:
		return "MOUNTAINS";
	case 18:
		return "QUARRY";
	case 19:
		return "PLAIN";
	case 20:
		return "PARKINGLOT";
	case 21:
		return "SEWERPIPE";
	case 22:
		return "UNDERWATER";
	case 23:
		return "DRUGGED";
	case 24:
		return "DIZZY";
	case 25:
		return "PSYCHOTIC";
	case 26:
		return "CASTLE_SMALLROOM";
	case 27:
		return "CASTLE_SHORTPASSAGE";
	case 28:
		return "CASTLE_MEDIUMROOM";
	case 29:
		return "CASTLE_LARGEROOM";
	case 30:
		return "CASTLE_LONGPASSAGE";
	case 31:
		return "CASTLE_HALL";
	case 32:
		return "CASTLE_CUPBOARD";
	case 33:
		return "CASTLE_COURTYARD";
	case 34:
		return "CASTLE_ALCOVE";
	case 35:
		return "FACTORY_SMALLROOM";
	case 36:
		return "FACTORY_SHORTPASSAGE";
	case 37:
		return "FACTORY_MEDIUMROOM";
	case 38:
		return "FACTORY_LARGEROOM";
	case 39:
		return "FACTORY_LONGPASSAGE";
	case 40:
		return "FACTORY_HALL";
	case 41:
		return "FACTORY_CUPBOARD";
	case 42:
		return "FACTORY_COURTYARD";
	case 43:
		return "FACTORY_ALCOVE";
	case 44:
		return "ICEPALACE_SMALLROOM";
	case 45:
		return "ICEPALACE_SHORTPASSAGE";
	case 46:
		return "ICEPALACE_MEDIUMROOM";
	case 47:
		return "ICEPALACE_LARGEROOM";
	case 48:
		return "ICEPALACE_LONGPASSAGE";
	case 49:
		return "ICEPALACE_HALL";
	case 50:
		return "ICEPALACE_CUPBOARD";
	case 51:
		return "ICEPALACE_COURTYARD";
	case 52:
		return "ICEPALACE_ALCOVE";
	case 53:
		return "SPACESTATION_SMALLROOM";
	case 54:
		return "SPACESTATION_SHORTPASSAGE";
	case 55:
		return "SPACESTATION_MEDIUMROOM";
	case 56:
		return "SPACESTATION_LARGEROOM";
	case 57:
		return "SPACESTATION_LONGPASSAGE";
	case 58:
		return "SPACESTATION_HALL";
	case 59:
		return "SPACESTATION_CUPBOARD";
	case 60:
		return "SPACESTATION_ALCOVE";
	case 61:
		return "WOODEN_SMALLROOM";
	case 62:
		return "WOODEN_SHORTPASSAGE";
	case 63:
		return "WOODEN_MEDIUMROOM";
	case 64:
		return "WOODEN_LARGEROOM";
	case 65:
		return "WOODEN_LONGPASSAGE";
	case 66:
		return "WOODEN_HALL";
	case 67:
		return "WOODEN_CUPBOARD";
	case 68:
		return "WOODEN_COURTYARD";
	case 69:
		return "WOODEN_ALCOVE";
	case 70:
		return "SPORT_EMPTYSTADIUM";
	case 71:
		return "SPORT_SQUASHCOURT";
	case 72:
		return "SPORT_SMALLSWIMMINGPOOL";
	case 73:
		return "SPORT_LARGESWIMMINGPOOL";
	case 74:
		return "SPORT_GYMNASIUM";
	case 75:
		return "SPORT_FULLSTADIUM";
	case 76:
		return "SPORT_STADIUMTANNOY";
	case 77:
		return "PREFAB_WORKSHOP";
	case 78:
		return "PREFAB_SCHOOLROOM";
	case 79:
		return "PREFAB_PRACTISEROOM";
	case 80:
		return "PREFAB_OUTHOUSE";
	case 81:
		return "PREFAB_CARAVAN";
	case 82:
		return "DOME_TOMB";
	case 83:
		return "PIPE_SMALL";
	case 84:
		return "DOME_SAINTPAULS";
	case 85:
		return "PIPE_LONGTHIN";
	case 86:
		return "PIPE_LARGE";
	case 87:
		return "PIPE_RESONANT";
	case 88:
		return "OUTDOORS_BACKYARD";
	case 89:
		return "OUTDOORS_ROLLINGPLAINS";
	case 90:
		return "OUTDOORS_DEEPCANYON";
	case 91:
		return "OUTDOORS_CREEK";
	case 92:
		return "OUTDOORS_VALLEY";
	case 93:
		return "MOOD_HEAVEN";
	case 94:
		return "MOOD_HELL";
	case 95:
		return "MOOD_MEMORY";
	case 96:
		return "DRIVING_COMMENTATOR";
	case 97:
		return "DRIVING_PITGARAGE";
	case 98:
		return "DRIVING_INCAR_RACER";
	case 99:
		return "DRIVING_INCAR_SPORTS";
	case 100:
		return "DRIVING_INCAR_LUXURY";
	case 101:
		return "DRIVING_FULLGRANDSTAND";
	case 102:
		return "DRIVING_EMPTYGRANDSTAND";
	case 103:
		return "DRIVING_TUNNEL";
	case 104:
		return "CITY_STREETS";
	case 105:
		return "CITY_SUBWAY";
	case 106:
		return "CITY_MUSEUM";
	case 107:
		return "CITY_LIBRARY";
	case 108:
		return "CITY_UNDERPASS";
	case 109:
		return "CITY_ABANDONED";
	case 110:
		return "DUSTYROOM";
	case 111:
		return "CHAPEL";
	case 112:
		return "SMALLWATERROOM";
	default:
		return "GENERIC";
	}
}
