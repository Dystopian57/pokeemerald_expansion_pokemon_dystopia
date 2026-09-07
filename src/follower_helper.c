#include "global.h"
#include "data.h"
#include "event_scripts.h"
#include "follower_helper.h"
#include "overworld.h"
#include "rtc.h"
#include "constants/battle.h"
#include "constants/followers.h"
#include "constants/metatile_behaviors.h"
#include "constants/pokemon.h"
#include "constants/region_map_sections.h"
#include "constants/songs.h"
#include "constants/weather.h"

#define TYPE_NOT_TYPE1 NUMBER_OF_MON_TYPES

// difficult conditional messages follow
static const u8 sCondMsg00[] = _("{STR_VAR_1} is looking for a power source.");
static const u8 sCondMsg01[] = _("{STR_VAR_1} is looking for food.");
static const u8* const sPurachuTexts[] = {sCondMsg00, sCondMsg01, NULL};
static const u8 sCondMsg02[] = _("{STR_VAR_1} is pretending to read a\nbook it found.");
static const u8 sCondMsg03[] = _("{STR_VAR_1} is looking at the cover\nart of a nearby book.");
static const u8 sCondMsg04[] = _("{STR_VAR_1} is using a book it found\nas an improvised hat.");
static const u8 sCondMsg05[] = _("{STR_VAR_1} is playing with a pen\nit found.");
static const u8* const sBooksTexts[] = {sCondMsg02, sCondMsg03, sCondMsg04, sCondMsg05, NULL};
static const u8 sCondMsg06[] = _("{STR_VAR_1} looks at the bomb craters\nwith worry.");
static const u8 sCondMsg07[] = _("Your POKéMON senses something amiss\nwith the crater...");
static const u8 sCondMsg08[] = _("{STR_VAR_1} looks at the messy place.");
static const u8 sCondMsg09[] = _("{STR_VAR_1} is smelling the clean floor.\nSmells of scented cleaning products.");
static const u8 sCondMsg10[] = _("{STR_VAR_1} feels soothed at the calm\natmosphere.");
static const u8* const sShopTexts[] = {sCondMsg09, sCondMsg10, NULL};
static const u8 sCondMsg11[] = _("{STR_VAR_1} just shaked off some mud!\nIt splattered some on {PLAYER}.");
static const u8 sCondMsg12[] = _("{STR_VAR_1} seems interested in the\ncrates and packaged goods.");
static const u8 sCondMsg13[] = _("{STR_VAR_1} seems instinctively scared\nof the machines...");
static const u8 sCondMsg14[] = _("{STR_VAR_1} is enjoying the sights\natop this high place.");
static const u8 sCondMsg15[] = _("{STR_VAR_1} peers into the distant horizon,\nalmost dreamingly.");
static const u8 sCondMsg16[] = _("{STR_VAR_1} doesn't want to get off\nthe boat yet!");
static const u8* const sHeightsTexts[] = {sCondMsg14, sCondMsg15, sCondMsg16, NULL};
static const u8 sCondMsg17[] = _("The sound of the machines seems to\nbe disturbing {STR_VAR_1}.");
static const u8* const sMachineTexts[] = {sCondMsg13, sCondMsg17, NULL};
static const u8 sCondMsg18[] = _("Your POKéMON suddenly splashed\nwater!");
static const u8 sCondMsg19[] = _("Your POKéMON is all covered in\nsand.");
static const u8 sCondMsg20[] = _("{STR_VAR_1} plucks a leaf of grass.\nIt has an unhealthy brown color.");
static const u8 sCondMsg21[] = _("{STR_VAR_1} is playing at\nstepping on {PLAYER}'s footprints.");
static const u8 sCondMsg22[] = _("{STR_VAR_1} grimaces from how bad the\nplace smells.");
static const u8 sCondMsg23[] = _("{STR_VAR_1} seems eager to leave this\ndirty place.");
static const u8* const sBadSmellTexts[] = {sCondMsg22, sCondMsg23, NULL};
static const u8 sCondMsg24[] = _("{STR_VAR_1} is shivering from the cold.");
static const u8 sCondMsg25[] = _("{STR_VAR_1}'s breath is visible by\nthe cold.");
static const u8 sCondMsg26[] = _("Your POKéMON is making a snowball.");
static const u8* const sColdTexts[] = {sCondMsg24, sCondMsg25, sCondMsg26, NULL};
static const u8 sCondMsg27[] = _("Your POKéMON is mesmerized by\nthe unusually green nature!");
static const u8 sCondMsg28[] = _("{STR_VAR_1} seems uneasy due to\nbeing so deep underground.");
static const u8 sCondMsg29[] = _("{STR_VAR_1} is trembling with fear.");
static const u8 sCondMsg30[] = _("{STR_VAR_1} seems somehow sad…");
static const u8* const sFearTexts[] = {sCondMsg29, sCondMsg30, NULL};
static const u8 sCondMsg31[] = _("{STR_VAR_1} approaches {PLAYER}\nto take shelter from the rain.");
static const u8 sCondMsg32[] = _("{STR_VAR_1} seems very cold.");
static const u8 sCondMsg33[] = _("{STR_VAR_1} stares with sadness at\nthe polluted sea.");
static const u8 sCondMsg34[] = _("Your POKéMON sneezes at the breeze,\nwhich smells of salt and chemicals.");
static const u8 sCondMsg35[] = _("{STR_VAR_1} does not seem eager to\ngo for a swim in the green sea.");
static const u8* const sSeaTexts[] = {sCondMsg33, sCondMsg34, sCondMsg35, NULL};
static const u8 sCondMsg36[] = _("{STR_VAR_1} is listening to the\nsound of the waterfall.");
static const u8 sCondMsg37[] = _("{STR_VAR_1} seems to be itchy by\nthe rain.");
static const u8 sCondMsg38[] = _("{STR_VAR_1} is staring at its\nreflection in the water.");
static const u8 sCondMsg39[] = _("{STR_VAR_1} seems to relax as it\nhears the sound of rustling leaves…");
static const u8 sCondMsg40[] = _("{STR_VAR_1} almost slips on the ice.");
static const u8 sCondMsg41[] = _("{STR_VAR_1} is poking the ice.");
static const u8* const sIceTexts[] = {sCondMsg26, sCondMsg40, sCondMsg41, NULL};
static const u8 sCondMsg42[] = _("{STR_VAR_1}'s burn looks painful!");
static const u8 sCondMsg43[] = _("{STR_VAR_1} seems itching to run\nhere in the outdoors.");
static const u8 sCondMsg44[] = _("{STR_VAR_1} is looking up at the\nsky.");
static const u8* const sDayTexts[] = {sCondMsg43, sCondMsg44, NULL};
static const u8 sCondMsg45[] = _("Your POKéMON seems on edge\nby the darkness all around.");
static const u8 sCondMsg46[] = _("{STR_VAR_1} is looking for\nthreats in the dark.");
static const u8* const sNightTexts[] = {sCondMsg45, sCondMsg46, NULL};
static const u8 sCondMsg50[] = _("{STR_VAR_1} seems disturbed by the\nabnormal weather!");
//static const u8 sCondMsg51[] = _("TEST.");

// See the struct definition in follower_helper.h for more info
const struct FollowerMsgInfoExtended gFollowerConditionalMessages[COND_MSG_COUNT] =
{

    [COND_MSG_PURACHU] =
    {
        .text = (u8*)sPurachuTexts,
        .textSpread = 1,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_SPECIES(SPECIES_PIKACHU_SAFE),
        },
    },
    [COND_MSG_BOOKS] = //COULD FREE
    {
        .text = (u8*)sBooksTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB),
            MATCH_MAP(MAP_BALSAM_OFFICE),
            MATCH_MAP(MAP_DLC),
        },
    },
    [COND_MSG_CRATERS] =
    {
        .text = sCondMsg06,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_SAD,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_LITTLEROOT_TOWN),
            MATCH_MAP(MAP_ROUTE101),
            MATCH_MAP(MAP_GREAT_CRATER),

        },
    },
    [COND_MSG_GREATCRATER] =
    {
        .text = sCondMsg07,
        .emotion = FOLLOWER_EMOTION_SAD,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_GREAT_CRATER),
            MATCH_MAP(MAP_GREAT_CRATER_BOTTOM),
        },
    },
    [COND_MSG_MESSY_ROOM] =
    {
        .text = sCondMsg08,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB),
            MATCH_MAP(MAP_JIMMY_EGG_STORE),
            MATCH_MUSIC(MUS_NONE),
            MATCH_MUSIC(MUS_IZUMOINDESPAIR),
            MATCH_MUSIC(MUS_SKULLKERHIDEOUT),
            //MATCH_MAP(MAP_REBEL_ROOM1),
            //MATCH_MAP(MAP_REBEL_ROOM2),


        },
    },
    [COND_MSG_DEVON_PLACE] =
    {
        .text = (u8*)sShopTexts,
        .textSpread = 1,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MUSIC(MUS_GYMNOPEDIE),
            MATCH_MUSIC(MUS_ALTRUBUILDING),
            MATCH_MUSIC(MUS_UNOVAROUTEGATE),
            MATCH_MAP(MAP_DLC),
            MATCH_MAP(MAP_PETALBURG_BEACH_CLINIC),
        },
    },
    [COND_MSG_ROUTE_103] = //COULD FREE
    {
        .text = sCondMsg11,
        .script = EventScript_FollowerHopping,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_ROUTE103),
        },
    },
    [COND_MSG_CRATES] =
    {
        .text = sCondMsg12,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_HAPPY,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_OLDALE_WAREHOUSE),
            MATCH_MAP(MAP_REBEL_HARBOUR_CARGO_BAY),
            MATCH_MAP(MAP_PET_LANDFILL_MILITARY_SHOP),
        },
    },
    [COND_MSG_MACHINES] =
    {
        .text = (u8*)sMachineTexts,
        .textSpread = 1,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_SAD,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_LITTLEROOT_LAB_BASEMENT),
            MATCH_MAP(MAP_OLDALE_WAREHOUSE_APPLIANCE_STORAGE),
            MATCH_MAP(MAP_ROUTE104DEVON_LAB_BASEMENT),
            MATCH_MAP(MAP_REBEL_BASEMENT),
        },
    },
    [COND_MSG_HEIGHTS] = //COULD FREE
    {
        .text = (u8*)sHeightsTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .orFlag = 1, // match any of these maps
        .script = EventScript_FollowerLookAround,
        .conditions =
        {
            MATCH_MAP(MAP_ROUTE104LIGHTHOUSE_2),
            MATCH_MAP(MAP_PETALBURG_PARK_CUSTOMS_ROOF),
        },
    },
    [COND_MSG_PUDDLE] =
    {
        .text = sCondMsg18,
        .script = EventScript_FollowerHopping,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_ON_MB(MB_SHALLOW_WATER, MB_PUDDLE),
        },
    },
    [COND_MSG_SAND] =
    {
        .text = sCondMsg19,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_ON_MB(MB_SAND, MB_DEEP_SAND),
        },
    },
    [COND_MSG_GRASS] =
    {
        .text = sCondMsg20,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_ON_MB(MB_TALL_GRASS, MB_LONG_GRASS),
        },
    },
    [COND_MSG_FOOTPRINTS] =
    {
        .text = sCondMsg21,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_ON_MB(MB_SAND, MB_FOOTPRINTS),
        },
    },
    [COND_MSG_BADSMELL] =
    {
        .text = (u8*)sBadSmellTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            //MATCH_NOT_TYPES(TYPE_POISON, TYPE_POISON),
            MATCH_MAP(MAP_PETALBURG_SEWERS),
            //MATCH_MAP(MAP_SEWERS_CONSPIRACY_HIDEOUT),
            //MATCH_MAP(MAP_JIMMY_EGG_STORE),
            //MATCH_MAP(MAP_PET_LANDFILL_MILITARY_SHOP),
            MATCH_MUSIC (MUS_NONE),
            MATCH_MUSIC (MUS_UNOVAROUTE10),
            MATCH_MUSIC (MUS_SPIKEMUTH),
        },

    },
    [COND_MSG_ICE_ROOM] =
    {
        .text = (u8*)sColdTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_SURPRISE,
        .conditions =
        {
            MATCH_MAP(MAP_OLDALE_WAREHOUSE_COLD_STORAGE),
            MATCH_MAP(MAP_DEWFORD_TOWN),
        },
    },
    [COND_MSG_GREENNATURE] =
    {
        .text = sCondMsg27,
        .emotion = FOLLOWER_EMOTION_SURPRISE,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_ROUTE102RALTS_SANCTUARY),
            MATCH_MAP(MAP_HERMIT_TREE),
            MATCH_MAP(MAP_PETALBURG_PARK_CUSTOMS_ROOF),
            //PETAL PARK, AZURESORT
        },
    },
    [COND_MSG_UNDERGROUND] =
    {
        .text = sCondMsg28,
        .emotion = FOLLOWER_EMOTION_SAD,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_LITTLEROOT_LAB_TUNNEL2),
            MATCH_MAP(MAP_EXCLUSION_ZONE_TUNNEL),
            MATCH_MAP(MAP_SABLEYE_LAIR),
        },
    },
    [COND_MSG_FEAR] =
    {
        .text = (u8*)sFearTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_SAD,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            //MATCH_NOT_TYPES(TYPE_GHOST, TYPE_GHOST),
            MATCH_MAP(MAP_LITTLEROOT_CEMETERY),
            MATCH_MAP(MAP_LITTLEROOT_MAUSOLEUM),
        },
    },
    [COND_MSG_FIRE_RAIN] = //COULD FREE
    {
        .text = sCondMsg31,
        .script = EventScript_FollowerCuddling,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .conditions =
        {
            MATCH_TYPES(TYPE_FIRE, TYPE_FIRE),
            MATCH_WEATHER(WEATHER_RAIN, WEATHER_RAIN_THUNDERSTORM),
        },
    },
    [COND_MSG_FROZEN] =
    {
        .text = sCondMsg32,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .conditions =
        {
           MATCH_STATUS(STATUS1_FREEZE),
        },
    },
    [COND_MSG_SEASIDE] =
    {
        .text = (u8*)sSeaTexts,
        .textSpread = 1,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_SAD,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_PETALBURG_BEACH),
            MATCH_MAP(MAP_ROUTE104),
            //MATCH_NEAR_MB(MB_OCEAN_WATER, 5),
        },
    },
    [COND_MSG_WATERFALL] =
    {
        .text = sCondMsg36,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_NEAR_MB(MB_WATERFALL, 5),
        },
    },
    [COND_MSG_RAIN] =
    {
        .text = sCondMsg37,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
        //MATCH_NOT_TYPES(TYPE_POISON, TYPE_POISON),
        MATCH_WEATHER(WEATHER_RAIN, WEATHER_RAIN_THUNDERSTORM)
    }
    },
    [COND_MSG_REFLECTION] =
    {
        .text = sCondMsg38,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_NEAR_MB(MB_POND_WATER, 1),
        },
    },
    [COND_MSG_CITY] = //RUSTBORO
    {
        .text = sCondMsg39,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAPSEC_LITTLEROOT_TOWN),
            MATCH_MAP(MAPSEC_OLDALE_TOWN),
            MATCH_MAP(MAPSEC_PETALBURG_CITY),
            MATCH_MAP(MAPSEC_DEWFORD_TOWN),
            MATCH_MAP(MAPSEC_RUSTBORO_CITY),
        },
    },
    [COND_MSG_ICE] =
    {
        .text = (u8*)sIceTexts,
        .textSpread = 1,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_NEAR_MB(MB_ICE, 1),
        },
    },
    [COND_MSG_BURN] =
    {
        .text = sCondMsg42,
        .emotion = FOLLOWER_EMOTION_SAD,
        .conditions =
        {
            MATCH_STATUS(STATUS1_BURN),
        },
    },
    [COND_MSG_DAY] =
    {
        .text = (u8*)sDayTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_TIME_OF_DAY(TIME_DAY),
        },
    },
    [COND_MSG_NIGHT] =
    {
        .text = (u8*)sNightTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .conditions =
        {
            //MATCH_NOT_TYPES(TYPE_GHOST, TYPE_DARK),
            MATCH_TIME_OF_DAY(TIME_NIGHT),
        },
    },
    [COND_MSG_ABNORMAL_WEATHER] = //COULD FREE
    {
        .text = sCondMsg50,
        .emotion = FOLLOWER_EMOTION_SURPRISE,
        .conditions =
        {
            MATCH_SPECIES(SPECIES_KYOGRE),
            MATCH_SPECIES(SPECIES_GROUDON),
            MATCH_SPECIES(SPECIES_RAYQUAZA),
        }
    },


};

// Pool of "unconditional" follower messages
const struct FollowerMessagePool gFollowerBasicMessages[FOLLOWER_EMOTION_LENGTH] =
{
    [FOLLOWER_EMOTION_HAPPY]    = {gFollowerHappyMessages,    EventScript_FollowerGeneric, FOLLOWER_HAPPY_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_NEUTRAL]  = {gFollowerNeutralMessages,  EventScript_FollowerGeneric, FOLLOWER_NEUTRAL_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_SAD]      = {gFollowerSadMessages,      EventScript_FollowerGeneric, FOLLOWER_SAD_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_UPSET]    = {gFollowerUpsetMessages,    EventScript_FollowerGeneric, FOLLOWER_UPSET_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_ANGRY]    = {gFollowerAngryMessages,    EventScript_FollowerGeneric, FOLLOWER_ANGRY_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_PENSIVE]  = {gFollowerPensiveMessages,  EventScript_FollowerGeneric, FOLLOWER_PENSIVE_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_LOVE]     = {gFollowerLoveMessages,     EventScript_FollowerGeneric, FOLLOWER_LOVE_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_SURPRISE] = {gFollowerSurpriseMessages, EventScript_FollowerGeneric, FOLLOWER_SURPRISE_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_CURIOUS]  = {gFollowerCuriousMessages,  EventScript_FollowerGeneric, FOLLOWER_CURIOUS_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_MUSIC]    = {gFollowerMusicMessages,    EventScript_FollowerGeneric, FOLLOWER_MUSIC_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_POISONED] = {gFollowerPoisonedMessages, EventScript_FollowerGeneric, FOLLOWER_POISONED_MESSAGE_COUNT},
};
