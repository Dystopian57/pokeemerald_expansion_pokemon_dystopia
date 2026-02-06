#include "constants/abilities.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
    .affineAnims = gDummySpriteAffineAnimTable,                                                                                         \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    [SPECIES_PIKACHU_SAFE] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Purachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU_SAFE,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "It sleeps virtually all day and night long.\n"
            "It doesn't change its nest its entire life,\n"
            "but it sometimes travels great distances\n"
            "by swimming in rivers."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pikachu_Safe,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 25,
        .backPic = gMonBackPic_Pikachu_Safe,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Pikachu_Safe,    
        .shinyPalette = gMonShinyPalette_Pikachu_Safe,
        .iconSprite = gMonIcon_Pikachu_Safe,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Pikachu_Safe,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_Pikachu_Safe,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_Pikachu_Safe,
        .iconPalIndexFemale = 1,
    #endif //P_CUSTOM_GENDER_DIFF_ICONS
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 5, SHADOW_SIZE_M)
        OVERWORLD(
            sPicTable_Pikachu_Safe,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pikachu_Safe,
            gShinyOverworldPalette_Pikachu_Safe
        )
        OVERWORLD_FEMALE(
            sPicTable_Pikachu_Safe,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
    },

    [SPECIES_BULBASYNTH] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 49,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bulbasynth"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_BULBASYNTH,
        .categoryName = _("Seed"),
        .height = 7,
        .weight = 69,
        .description = COMPOUND_STRING(
            "Bulbasaur can be seen napping in bright\n"
            "sunlight. There is a seed on its back.\n"
            "By soaking up the sun's rays, the seed\n"
            "grows progressively larger."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bulbasynth,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Bulbasynth,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,    
        .palette = gMonPalette_Bulbasynth,
        .shinyPalette = gMonShinyPalette_Bulbasynth,
        .iconSprite = gMonIcon_Bulbasynth,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Bulbasaur)
        OVERWORLD(
            sPicTable_Bulbasynth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bulbasynth,
            gShinyOverworldPalette_Bulbasynth
        )
        .levelUpLearnset = sBulbasaurLevelUpLearnset,
        .teachableLearnset = sBulbasaurTeachableLearnset,
        .eggMoveLearnset = sBulbasaurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_IVYSAUR}),
    },

    [SPECIES_SMOTHQUIL] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Smothquil"),
        .cryId = CRY_CYNDAQUIL,
        .natDexNum = NATIONAL_DEX_SMOTHQUIL,
        .categoryName = _("Fire Mouse"),
        .height = 5,
        .weight = 79,
        .description = COMPOUND_STRING(
            "It flares flames from its back to protect\n"
            "itself. The fire burns vigorously if the\n"
            "Pokémon is angry. When it is tired,\n"
            "it sputters with incomplete combustion."),
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Smothquil,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Smothquil,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Smothquil,
        .shinyPalette = gMonShinyPalette_Smothquil,
        .iconSprite = gMonIcon_Smothquil,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Cyndaquil)
        OVERWORLD(
            sPicTable_Smothquil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Smothquil,
            gShinyOverworldPalette_Smothquil
        )
        .levelUpLearnset = sSmothquilLevelUpLearnset,
        .teachableLearnset = sCyndaquilTeachableLearnset,
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_QUILAVA}),
    },

    [SPECIES_WARABBIT] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Warabbit"),
        .cryId = CRY_SCORBUNNY,
        .natDexNum = NATIONAL_DEX_WARABBIT,
        .categoryName = _("Mud Fish"),
        .height = 4,
        .weight = 76,
        .description = COMPOUND_STRING(
            "On land, it can powerfully lift large\n"
            "boulders by planting its four feet and\n"
            "heaving. It sleeps by burying itself in soil\n"
            "at the water's edge."),
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Warabbit,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 13),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 13),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Warabbit,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Warabbit,
        .shinyPalette = gMonShinyPalette_Warabbit,
        .iconSprite = gMonIcon_Warabbit,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mudkip)
        OVERWORLD(
            sPicTable_Warabbit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Warabbit,
            gShinyOverworldPalette_Warabbit
        )
        .levelUpLearnset = sMudkipLevelUpLearnset,
        .teachableLearnset = sMudkipTeachableLearnset,
        .eggMoveLearnset = sMudkipEggMoveLearnset,
    },

    [SPECIES_NINKABURI] =
    {
        .baseHP        = 31,
        .baseAttack    = 45,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG, TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 65,
        .evYield_Defense = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ninkaburi"),
        .cryId = CRY_NINCADA,
        .natDexNum = NATIONAL_DEX_NINKABURI,
        .categoryName = _("Trainee"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "It makes its nest at the roots of a mighty\n"
            "tree. Using its whiskerlike antennae, it\n"
            "probes its surroundings in the\n"
            "pitch-black darkness of soil."),
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ninkaburi,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Ninkaburi,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Ninkaburi,
        .shinyPalette = gMonShinyPalette_Ninkaburi,
        .iconSprite = gMonIcon_Ninkaburi,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, -3, SHADOW_SIZE_M)
        FOOTPRINT(Nincada)
        OVERWORLD(
            sPicTable_Ninkaburi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Ninkaburi,
            gShinyOverworldPalette_Ninkaburi
        )
        .levelUpLearnset = sNincadaLevelUpLearnset,
        .teachableLearnset = sNincadaTeachableLearnset,
        .eggMoveLearnset = sNincadaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_NINJASK},
                            #if P_SHEDINJA_BALL >= GEN_4
                                {EVO_SPLIT_FROM_EVO, SPECIES_NINJASK, SPECIES_SHEDINJA, CONDITIONS({IF_BAG_ITEM_COUNT, ITEM_POKE_BALL, 1})}),
                            #else
                                {EVO_SPLIT_FROM_EVO, SPECIES_NINJASK, SPECIES_SHEDINJA}),
                            #endif
    },

     [SPECIES_CHEERORB] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 103,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Cheerorb"),
        .cryId = CRY_VOLTORB,
        .natDexNum = NATIONAL_DEX_CHEERORB,
        .categoryName = _("Ball"),
        .height = 5,
        .weight = 104,
        .description = COMPOUND_STRING(
            "It bears an uncanny and unexplained\n"
            "resemblance to a Poké Ball. Because it\n"
            "explodes at the slightest shock, even\n"
            "veteran Trainers treat it with caution."),
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cheerorb,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_TUMBLING_FRONT_FLIP,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 10 : 0,
        .backPic = gMonBackPic_Cheerorb,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Cheerorb,
        .shinyPalette = gMonShinyPalette_Cheerorb,
        .iconSprite = gMonIcon_Cheerorb,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Voltorb)
        OVERWORLD(
            sPicTable_Cheerorb,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Cheerorb,
            gShinyOverworldPalette_Cheerorb
        )
        .levelUpLearnset = sVoltorbLevelUpLearnset,
        .teachableLearnset = sVoltorbTeachableLearnset,
        .formSpeciesIdTable = sVoltorbFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTRODE}),
    },

     [SPECIES_POOCHAIN] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 56,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 44,
    #else
        .expYield = 55,
    #endif
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_RUN_AWAY, ABILITY_QUICK_FEET, ABILITY_RATTLED },
    #else
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_RATTLED },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Poochain"),
        .cryId = CRY_POOCHYENA,
        .natDexNum = NATIONAL_DEX_POOCHAIN,
        .categoryName = _("Bite"),
        .height = 5,
        .weight = 136,
        .description = COMPOUND_STRING(
            "It savagely threatens foes with bared\n"
            "fangs. It chases after fleeing targets\n"
            "tenaciously. It turns tail and runs,\n"
            "however, if the foe strikes back."),
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poochain,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_BACK,
        .backPic = gMonBackPic_Poochain,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Poochain,
        .shinyPalette = gMonShinyPalette_Poochain,
        .iconSprite = gMonIcon_Poochain,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Poochyena)
        OVERWORLD(
            sPicTable_Poochain,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Poochain,
            gShinyOverworldPalette_Poochain
        )
        .levelUpLearnset = sPoochyenaLevelUpLearnset,
        .teachableLearnset = sPoochyenaTeachableLearnset,
        .eggMoveLearnset = sPoochyenaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_MIGHTYENA}),
    },

     [SPECIES_SHIITAKO] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 65,
        .evYield_HP = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_QUICK_FEET },
    #else
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shiitako"),
        .cryId = CRY_SHROOMISH,
        .natDexNum = NATIONAL_DEX_SHIITAKO,
        .categoryName = _("Mushroom"),
        .height = 4,
        .weight = 45,
        .description = COMPOUND_STRING(
            "It loves to eat damp, composted soil in\n"
            "forests. If you enter a forest after a\n"
            "long rain, you can see many Shroomish\n"
            "feasting on composted soil."),
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shiitako,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_H_SHAKE_FAST,
        .backPic = gMonBackPic_Shiitako,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Shiitako,
        .shinyPalette = gMonShinyPalette_Shiitako,
        .iconSprite = gMonIcon_Shiitako,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Shroomish)
        OVERWORLD(
            sPicTable_Shiitako,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shiitako,
            gShinyOverworldPalette_Shiitako
        )
        .levelUpLearnset = sShroomishLevelUpLearnset,
        .teachableLearnset = sShroomishTeachableLearnset,
        .eggMoveLearnset = sShroomishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_BRELOOM}),
    },

     [SPECIES_LOADTAD] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER, TYPE_GRASS),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 74,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Loadtad"),
        .cryId = CRY_LOTAD,
        .natDexNum = NATIONAL_DEX_LOADTAD,
        .categoryName = _("Water Weed"),
        .height = 5,
        .weight = 26,
        .description = COMPOUND_STRING(
            "This Pokémon lives in ponds with clean\n"
            "water. It is known to ferry small Pokémon\n"
            "across ponds by carrying them on the\n"
            "broad leaf on its head."),
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Loadtad,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_V_STRETCH_BOTH_ENDS_SLOW,
        .backPic = gMonBackPic_Loadtad,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Loadtad,
        .shinyPalette = gMonShinyPalette_Loadtad,
        .iconSprite = gMonIcon_Loadtad,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Lotad)
        OVERWORLD(
            sPicTable_Loadtad,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Loadtad,
            gShinyOverworldPalette_Loadtad
        )
        .levelUpLearnset = sLotadLevelUpLearnset,
        .teachableLearnset = sLotadTeachableLearnset,
        .eggMoveLearnset = sLotadEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_LOMBRE}),
    },


  [SPECIES_MANCHINE] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 180,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 61,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 75,
    #else
        .expYield = 88,
    #endif
        .evYield_Attack = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Manchine"),
        .cryId = CRY_MACHOP,
        .natDexNum = NATIONAL_DEX_MANCHINE,
        .categoryName = _("Superpower"),
        .height = 8,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It continually undertakes strenuous\n"
            "training to master all forms of martial\n"
            "arts. Its strength lets it easily hoist\n"
            "a sumo wrestler onto its shoulders."),
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Manchine,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_CONCAVE_ARC_SMALL_TWICE,
        .backPic = gMonBackPic_Manchine,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Manchine,
        .shinyPalette = gMonShinyPalette_Manchine,
        .iconSprite = gMonIcon_Manchine,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Machop)
        OVERWORLD(
            sPicTable_Manchine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Manchine,
            gShinyOverworldPalette_Manchine
        )
        .levelUpLearnset = sMachopLevelUpLearnset,
        .teachableLearnset = sMachopTeachableLearnset,
        .eggMoveLearnset = sMachopEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MACHOKE}),
    },

    [SPECIES_HELIPIP] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFILTRATOR },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Helipip"),
        .cryId = CRY_HOPPIP,
        .natDexNum = NATIONAL_DEX_HELIPIP,
        .categoryName = _("Cottonweed"),
        .height = 4,
        .weight = 5,
        .description = COMPOUND_STRING(
            "This Pokémon drifts and floats with the\n"
            "wind. If it senses the approach of strong\n"
            "winds, a Hoppip links leaves with others\n"
            "to prepare against being blown away."),
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Helipip,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .backPic = gMonBackPic_Helipip,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Helipip,
        .shinyPalette = gMonShinyPalette_Helipip,
        .iconSprite = gMonIcon_Helipip,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Hoppip)
        OVERWORLD(
            sPicTable_Helipip,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Helipip,
            gShinyOverworldPalette_Helipip
        )
        .levelUpLearnset = sHoppipLevelUpLearnset,
        .teachableLearnset = sHoppipTeachableLearnset,
        .eggMoveLearnset = sHoppipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_SKIPLOOM}),
    },

     [SPECIES_MUDDER] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 50 : 40,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mudder"),
        .cryId = CRY_GRIMER,
        .natDexNum = NATIONAL_DEX_MUDDER,
        .categoryName = _("Sludge"),
        .height = 9,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Born from polluted sludge in the sea,\n"
            "Grimer's favorite food is anything filthy.\n"
            "They feed on wastewater pumped out from\n"
            "factories."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mudder,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mudder,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Mudder,
        .shinyPalette = gMonShinyPalette_Mudder,
        .iconSprite = gMonIcon_Mudder,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 3, SHADOW_SIZE_M)
        FOOTPRINT(Grimer)
        OVERWORLD(
            sPicTable_Mudder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Mudder,
            gShinyOverworldPalette_Mudder
        )
        .levelUpLearnset = sGrimerLevelUpLearnset,
        .teachableLearnset = sGrimerTeachableLearnset,
        .eggMoveLearnset = sGrimerEggMoveLearnset,
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK}),
    },

     [SPECIES_FOOMING] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 45 : 60,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 68 : 114,
        .evYield_Defense = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_8
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH },
    #else
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Fooming"),
        .cryId = CRY_KOFFING,
        .natDexNum = NATIONAL_DEX_FOOMING,
        .categoryName = _("Poison Gas"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Getting up close to a Koffing will give\n"
            "you a chance to observe, through its thin\n"
            "skin, the toxic gases swirling inside. It\n"
            "blows up at the slightest stimulation."),
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fooming,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_TIP_HOP_FORWARD,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 14,
        .backPic = gMonBackPic_Fooming,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Fooming,
        .shinyPalette = gMonShinyPalette_Fooming,
        .iconSprite = gMonIcon_Fooming,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Koffing)
        OVERWORLD(
            sPicTable_Fooming,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Fooming,
            gShinyOverworldPalette_Fooming
        )
        .levelUpLearnset = sKoffingLevelUpLearnset,
        .teachableLearnset = sKoffingTeachableLearnset,
        .eggMoveLearnset = sKoffingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_WEEZING},
                                {EVO_NONE, 0, SPECIES_WEEZING_GALAR}),
    },

     [SPECIES_GEOSLUG] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 78,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Geoslug"),
        .cryId = CRY_SLUGMA,
        .natDexNum = NATIONAL_DEX_GEOSLUG,
        .categoryName = _("Lava"),
        .height = 7,
        .weight = 350,
        .description = COMPOUND_STRING(
            "It is a species of Pokémon that lives in\n"
            "volcanic areas. If its body cools, its skin\n"
            "hardens and immobilizes it. To avoid that,\n"
            "it sleeps near magma."),
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Geoslug,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Geoslug,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Geoslug,
        .shinyPalette = gMonShinyPalette_Geoslug,
        .iconSprite = gMonIcon_Geoslug,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Slugma)
        OVERWORLD(
            sPicTable_Geoslug,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Geoslug,
            gShinyOverworldPalette_Geoslug
        )
        .levelUpLearnset = sSlugmaLevelUpLearnset,
        .teachableLearnset = sSlugmaTeachableLearnset,
        .eggMoveLearnset = sSlugmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MAGCARGO}),
    },


    [SPECIES_TUMBELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 40 : 100,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 87 : 166,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_REGENERATOR },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tumbela"),
        .cryId = CRY_TANGELA,
        .natDexNum = NATIONAL_DEX_TANGELA,
        .categoryName = _("Vine"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING(
            "Its vines snap off easily and painlessly\n"
            "if they are grabbed, allowing it to make a\n"
            "quick getaway. The lost vines are replaced\n"
            "by new growth the very next day."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tumbela,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 40),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Tumbela,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Tumbela,
        .shinyPalette = gMonShinyPalette_Tumbela,
        .iconSprite = gMonIcon_Tumbela,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Tangela)
        OVERWORLD(
            sPicTable_Tumbela,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tumbela,
            gShinyOverworldPalette_Tumbela
        )
        .levelUpLearnset = sTangelaLevelUpLearnset,
        .teachableLearnset = sTangelaTeachableLearnset,
        .eggMoveLearnset = sTangelaEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_TANGROWTH, CONDITIONS({IF_KNOWS_MOVE, MOVE_ANCIENT_POWER})}),
    #endif
    },

 [SPECIES_DOUNO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 96,
        .evYield_Attack = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Douno"),
        .cryId = CRY_DODUO,
        .natDexNum = NATIONAL_DEX_DODUO,
        .categoryName = _("Twin Bird"),
        .height = 14,
        .weight = 392,
        .description = COMPOUND_STRING(
            "Even while eating or sleeping, one of the\n"
            "heads remains always vigilant for any sign\n"
            "of danger. When threatened, it flees at\n"
            "over 60 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Douno,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
        ),
        .frontAnimId = ANIM_H_VIBRATE_FASTEST,
        .backPic = gMonBackPic_Douno,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,  
        .palette = gMonPalette_Douno,
        .shinyPalette = gMonShinyPalette_Douno,
        .iconSprite = gMonIcon_Douno,
        .iconPalIndex = 2,

    #if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Douno,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_Douno,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES

        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 5, SHADOW_SIZE_M)
        FOOTPRINT(Doduo)
        OVERWORLD(
            sPicTable_Douno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Douno,
            gShinyOverworldPalette_Douno
        )

            OVERWORLD_FEMALE(
            sPicTable_Douno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sDoduoLevelUpLearnset,
        .teachableLearnset = sDoduoTeachableLearnset,
        .eggMoveLearnset = sDoduoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_DODRIO}),
    },

    [SPECIES_PANSELIA] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 140 : 152,
        .evYield_SpAttack = (P_UPDATED_EVS >= GEN_4) ? 2 : 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Panselia"),
        .cryId = CRY_ROSELIA,
        .natDexNum = NATIONAL_DEX_PANSELIA,
        .categoryName = _("Thorn"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "A Roselia that drinks nutritionally rich\n"
            "springwater blooms with lovely flowers.\n"
            "The fragrance of its flowers has the\n"
            "effect of making its foes careless."),
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Panselia,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE_SLOW,
        .backPic = gMonBackPic_Panselia,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Panselia,
        .shinyPalette = gMonShinyPalette_Panselia,
        .iconSprite = gMonIcon_Panselia,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Panselia,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_Panselia,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Roselia)
        OVERWORLD(
            sPicTable_Panselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Panselia,
            gShinyOverworldPalette_Panselia
        )
        OVERWORLD_FEMALE(
            sPicTable_Panselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRoseliaLevelUpLearnset,
        .teachableLearnset = sRoseliaTeachableLearnset,
        .eggMoveLearnset = sRoseliaEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}),
    #endif
    },

    [SPECIES_VERIWOODO] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 65,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 135,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Veriwoodo"),
        .cryId = CRY_SUDOWOODO,
        .natDexNum = NATIONAL_DEX_VERIWOODO,
        .categoryName = _("Imitation"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It mimics a tree to avoid being attacked\n"
            "by enemies. But since its forelegs\n"
            "remain green throughout the year, it is\n"
            "easily identified as a fake in the winter."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Veriwoodo,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Veriwoodo,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Veriwoodo,
        .shinyPalette = gMonShinyPalette_Veriwoodo,
        .iconSprite = gMonIcon_Veriwoodo,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Veriwoodo,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_Veriwoodo,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Sudowoodo)
        OVERWORLD(
            sPicTable_Veriwoodo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Veriwoodo,
            gShinyOverworldPalette_Veriwoodo
        )
        OVERWORLD_FEMALE(
            sPicTable_Veriwoodo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sSudowoodoLevelUpLearnset,
        .teachableLearnset = sSudowoodoTeachableLearnset,
        .eggMoveLearnset = sSudowoodoEggMoveLearnset,
    },

     [SPECIES_NIDORAN_I] =
    {
        .baseHP        = 55,
        .baseAttack    = 47,
        .baseDefense   = 52,
        .baseSpeed     = 41,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 55 : 59,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_HUSTLE },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Nidoran♀♂"),
        .cryId = CRY_NIDORAN_F,
        .natDexNum = NATIONAL_DEX_NIDORAN_I,
        .categoryName = _("Poison Pin"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Its highly toxic barbs are thought to have\n"
            "developed as protection for this small-\n"
            "bodied Pokémon. When enraged, it releases\n"
            "a horrible toxin from its horn."),
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidoran_I,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .frontAnimDelay = 28,
        .backPic = gMonBackPic_Nidoran_I,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Nidoran_I,
        .shinyPalette = gMonShinyPalette_Nidoran_I,
        .iconSprite = gMonIcon_Nidoran_I,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(NidoranF)
        OVERWORLD(
            sPicTable_Nidoran_I,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nidoran_I,
            gShinyOverworldPalette_Nidoran_I
        )
        .levelUpLearnset = sNidoranFLevelUpLearnset,
        .teachableLearnset = sNidoranFTeachableLearnset,
        .eggMoveLearnset = sNidoranFEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINA}),
    },

     [SPECIES_GUMMIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 43,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 43,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 75,
        .evYield_HP = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Gummin"),
        .cryId = CRY_GULPIN,
        .natDexNum = NATIONAL_DEX_GUMMIN,
        .categoryName = _("Stomach"),
        .height = 4,
        .weight = 103,
        .description = COMPOUND_STRING(
            "This Pokémon's stomach fluid can even\n"
            "digest scrap iron. In one gulp, it can\n"
            "swallow something that is as large as\n"
            "itself."),
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gummin,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Gummin,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Gummin,
        .shinyPalette = gMonShinyPalette_Gummin,
        .iconSprite = gMonIcon_Gummin,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Gummin,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_Gummin,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Gulpin)
        OVERWORLD(
            sPicTable_Gummin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Gummin,
            gShinyOverworldPalette_Gummin
        )
        OVERWORLD_FEMALE(
            sPicTable_Gummin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sGulpinLevelUpLearnset,
        .teachableLearnset = sGulpinTeachableLearnset,
        .eggMoveLearnset = sGulpinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_SWALOT}),
    },

 [SPECIES_TRASHEAL] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 62,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed = 1,
        .itemRare = ITEM_SILK_SCARF,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Trasheal"),
        .cryId = CRY_TRUBBISH,
        .natDexNum = NATIONAL_DEX_TRASHEAL,
        .categoryName = _("Trash Bag"),
        .height = 6,
        .weight = 310,
        .description = COMPOUND_STRING(
            "It gorges on trash until its stomach\n"
            "is full. Then it belches toxic gas.\n"
            "An unlucky whiff of this gas will put\n"
            "a person in the hospital."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trasheal,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Trasheal,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Trasheal,
        .shinyPalette = gMonShinyPalette_Trasheal,
        .iconSprite = gMonIcon_Trasheal,
        .iconPalIndex = 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Trubbish)
        OVERWORLD(
            sPicTable_Trasheal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trasheal,
            gShinyOverworldPalette_Trasheal
        )
        .levelUpLearnset = sTrubbishLevelUpLearnset,
        .teachableLearnset = sTrubbishTeachableLearnset,
        .eggMoveLearnset = sTrubbishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GARBODOR}),
    },

     [SPECIES_GRIMANE] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_STEEL, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_STEEL),
    #endif
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 133 : 98,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_IRON_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_INTIMIDATE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Grimane"),
        .cryId = CRY_MAWILE,
        .natDexNum = NATIONAL_DEX_GRIMANE,
        .categoryName = _("Deceiver"),
        .height = 6,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Its giant jaws are actually steel horns\n"
            "that transformed. It fools foes into\n"
            "complacency with its adorable gestures,\n"
            "then chomps them with its huge jaws."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grimane,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_BACK,
        .backPic = gMonBackPic_Grimane,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Grimane,
        .shinyPalette = gMonShinyPalette_Grimane,
        .iconSprite = gMonIcon_Grimane,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 4, SHADOW_SIZE_L)
        FOOTPRINT(Mawile)
        OVERWORLD(
            sPicTable_Grimane,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grimane,
            gShinyOverworldPalette_Grimane
        )
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
    },

     [SPECIES_KANGASKID] =
    {
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 80 : 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 175,
        .evYield_HP = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_SCRAPPY, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kangaskid"),
        .cryId = CRY_KANGASKHAN,
        .natDexNum = NATIONAL_DEX_KANGASKID,
        .categoryName = _("Kid"),
        .height = 22,
        .weight = 800,
        .description = COMPOUND_STRING(
            "If you come across a young Kangaskhan\n"
            "playing by itself, never try to catch it.\n"
            "The baby's parent is sure to be in the area,\n"
            "and it will become violently enraged."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Kangaskid,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Kangaskid,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Kangaskid,
        .shinyPalette = gMonShinyPalette_Kangaskid,
        .iconSprite = gMonIcon_Kangaskid,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kangaskhan)
        OVERWORLD(
            sPicTable_Kangaskid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kangaskid,
            gShinyOverworldPalette_Kangaskid
        )
        .levelUpLearnset = sKangaskhanLevelUpLearnset,
        .teachableLearnset = sKangaskhanTeachableLearnset,
        .eggMoveLearnset = sKangaskhanEggMoveLearnset,
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,
        .formChangeTable = sKangaskhanFormChangeTable,
    },

     [SPECIES_TAMARAKKU] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 65,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = MON_TYPES(TOGEPI_FAMILY_TYPE1),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 49 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tamarakku"),
        .cryId = CRY_TOGEPI,
        .natDexNum = NATIONAL_DEX_TAMARAKKU,
        .categoryName = _("Spike Ball"),
        .height = 3,
        .weight = 15,
        .description = COMPOUND_STRING(
            "As its energy, it uses the feelings of\n"
            "compassion and pleasure exuded by\n"
            "people and Pokémon. It stores up happy\n"
            "feelings in its shell, then shares them out."),
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tamarakku,
        .frontPicSize = MON_COORDS_SIZE(24, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Tamarakku,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Tamarakku,
        .shinyPalette = gMonShinyPalette_Tamarakku,
        .iconSprite = gMonIcon_Tamarakku,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Togepi)
        OVERWORLD(
            sPicTable_Tamarakku,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tamarakku,
            gShinyOverworldPalette_Tamarakku
        )
        .levelUpLearnset = sTogepiLevelUpLearnset,
        .teachableLearnset = sTogepiTeachableLearnset,
        .eggMoveLearnset = sTogepiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_TOGETIC, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD})}),
    },

     [SPECIES_GACHAPOD] =
    {
        .baseHP        = 48,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 48,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 35,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 101 : 61,
        .evYield_HP = 1,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DITTO),
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_IMPOSTER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gachapod"),
        .cryId = CRY_DITTO,
        .natDexNum = NATIONAL_DEX_GACHAPOD,
        .categoryName = _("Transform"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "A Ditto rearranges its cell structure to\n"
            "transform itself. However, if it tries to\n"
            "change based on its memory, it will get\n"
            "details wrong."),
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gachapod,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE_SLOW,
        .backPic = gMonBackPic_Gachapod,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Gachapod,
        .shinyPalette = gMonShinyPalette_Gachapod,
        .iconSprite = gMonIcon_Gachapod,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Ditto)
        OVERWORLD(
            sPicTable_Gachapod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Gachapod,
            gShinyOverworldPalette_Gachapod
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sDittoLevelUpLearnset,
        .teachableLearnset = sDittoTeachableLearnset,
    },

      [SPECIES_KAMOKEN] =
    {
        .baseHP        = 52,
        .baseAttack    = P_UPDATED_STATS >= GEN_7 ? 90 : 65,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 58,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 62 : 58,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 132,
        .evYield_Attack = 1,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kamoken"),
        .cryId = CRY_FARFETCHD,
        .natDexNum = NATIONAL_DEX_KAMOKEN,
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "It is always seen with a stick from a plant.\n"
            "Apparently, there are good sticks and bad\n"
            "sticks. This Pokémon occasionally fights\n"
            "with others over choice sticks."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Kamoken,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Kamoken, 
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Kamoken,
        .shinyPalette = gMonShinyPalette_Kamoken,
        .iconSprite = gMonIcon_Kamoken,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Farfetchd)
        OVERWORLD(
            sPicTable_Kamoken,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Kamoken,
            gShinyOverworldPalette_Kamoken
        )
        .levelUpLearnset = sFarfetchdLevelUpLearnset,
        .teachableLearnset = sFarfetchdTeachableLearnset,
        .eggMoveLearnset = sFarfetchdEggMoveLearnset,
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable,
    },

     [SPECIES_WARTZ] =
    {
        .baseHP        = 28,
        .baseAttack    = 25,
        .baseDefense   = 25,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_PSYCHIC, RALTS_FAMILY_TYPE2),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 70,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wartz"),
        .cryId = CRY_RALTS,
        .natDexNum = NATIONAL_DEX_WARTZ,
        .categoryName = _("Feeling"),
        .height = 4,
        .weight = 66,
        .description = COMPOUND_STRING(
            "A Ralts has the power to sense the\n"
            "emotions of people and Pokémon with the\n"
            "horns on its head. It takes cover if it\n"
            "senses any hostility."),
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wartz,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .backPic = gMonBackPic_Wartz,
        .backPicSize = MON_COORDS_SIZE(32, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Wartz,
        .shinyPalette = gMonShinyPalette_Wartz,
        .iconSprite = gMonIcon_Wartz,
        .iconPalIndex = 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Ralts)
        OVERWORLD(
            sPicTable_Wartz,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wartz,
            gShinyOverworldPalette_Wartz
        )
        .levelUpLearnset = sRaltsLevelUpLearnset,
        .teachableLearnset = sRaltsTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_KIRLIA}),
    },

 [SPECIES_DELIBIN] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ICE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 116 : 183,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_HUSTLE, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delibin"),
        .cryId = CRY_DELIBIRD,
        .natDexNum = NATIONAL_DEX_DELIBIN,
        .categoryName = _("Delivery"),
        .height = 9,
        .weight = 160,
        .description = COMPOUND_STRING(
            "It carries food bundled up in its tail.\n"
            "There was a famous explorer who\n"
            "managed to scale Mt. Everest thanks\n"
            "to a Delibird sharing its food."),
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delibin,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Delibin,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Delibin,
        .shinyPalette = gMonShinyPalette_Delibin,
        .iconSprite = gMonIcon_Delibin,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Delibird)
        OVERWORLD(
            sPicTable_Delibin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Delibin,
            gShinyOverworldPalette_Delibin
        )
        .levelUpLearnset = sDelibirdLevelUpLearnset,
        .teachableLearnset = sDelibirdTeachableLearnset,
        .eggMoveLearnset = sDelibirdEggMoveLearnset,
    },

 [SPECIES_ROLLOON] =
    {
        .baseHP        = 90,
        .baseAttack    = 50,
        .baseDefense   = 34,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FLYING),
        .catchRate = 125,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 127,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Rolloon"),
        .cryId = CRY_DRIFLOON,
        .natDexNum = NATIONAL_DEX_ROLLOON,
        .categoryName = _("Rolloon"),
        .height = 4,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Because of the way it floats aimlessly,\n"
            "an old folktale calls it a “Signpost for\n"
            "Wandering Spirits.” Children holding\n"
            "them sometimes vanish."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rolloon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Rolloon,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Rolloon,
        .shinyPalette = gMonShinyPalette_Rolloon,
        .iconSprite = gMonIcon_Rolloon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Drifloon)
        OVERWORLD(
            sPicTable_Rolloon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rolloon,
            gShinyOverworldPalette_Rolloon
        )
        .levelUpLearnset = sDrifloonLevelUpLearnset,
        .teachableLearnset = sDrifloonTeachableLearnset,
        .eggMoveLearnset = sDrifloonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_DRIFBLIM}),
    },


     [SPECIES_ROTOM_MONITOR] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_WATER),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Ronitor"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM_MONITOR,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "It enjoys coming up with water-based\n"
            "pranks. The model of washing machine that\n"
            "Rotom can inspirit has been discontinued,\n"
            "so they are now traded at high prices."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rotom_M,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_BACK,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Rotom_M,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Rotom_M,
        .shinyPalette = gMonShinyPalette_Rotom_M,
        .iconSprite = gMonIcon_Rotom_M,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_Rotom_M,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rotom_M,
            gShinyOverworldPalette_Rotom_M
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
    },

 [SPECIES_MIMIYURUI] =
    {
        .baseHP        = 44,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 33,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 97,
        .evYield_Attack = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_CURSED_BODY },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mimiyurui"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIYURUI,
        .categoryName = _("Puppet"),
        .height = 6,
        .weight = 23,
        .description = COMPOUND_STRING(
            "This Pokémon roams about deep in the\n"
            "night seeking such negative emotions as\n"
            "grudges and envy. It retreats to its nest\n"
            "when the sun begins to rise."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mimiyurui,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .backPic = gMonBackPic_Mimiyurui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Mimiyurui,
        .shinyPalette = gMonShinyPalette_Mimiyurui,
        .iconSprite = gMonIcon_Mimiyurui,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Shuppet)
        OVERWORLD(
            sPicTable_Mimiyurui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Mimiyurui,
            gShinyOverworldPalette_Mimiyurui
        )
        .levelUpLearnset = sShuppetLevelUpLearnset,
        .teachableLearnset = sShuppetTeachableLearnset,
        .eggMoveLearnset = sShuppetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BANETTE}),
    },

};
