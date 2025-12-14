static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");
// Balsam
static const u32 sFieldMugshotGfx_BalsamNormal[] = INCBIN_U32("graphics/field_mugshots/balsam/normal.4bpp.lz");
static const u16 sFieldMugshotPal_BalsamNormal[] = INCBIN_U16("graphics/field_mugshots/balsam/normal.gbapal");
static const u32 sFieldMugshotGfx_BalsamHappy[] = INCBIN_U32("graphics/field_mugshots/balsam/happy.4bpp.lz");
static const u16 sFieldMugshotPal_BalsamHappy[] = INCBIN_U16("graphics/field_mugshots/balsam/happy.gbapal");
static const u32 sFieldMugshotGfx_BalsamAngry[] = INCBIN_U32("graphics/field_mugshots/balsam/angry.4bpp.lz");
static const u16 sFieldMugshotPal_BalsamAngry[] = INCBIN_U16("graphics/field_mugshots/balsam/angry.gbapal");
static const u32 sFieldMugshotGfx_BalsamConfused[] = INCBIN_U32("graphics/field_mugshots/balsam/confused.4bpp.lz");
static const u16 sFieldMugshotPal_BalsamConfused[] = INCBIN_U16("graphics/field_mugshots/balsam/confused.gbapal");
static const u32 sFieldMugshotGfx_BalsamMenacing[] = INCBIN_U32("graphics/field_mugshots/balsam/menacing.4bpp.lz");
static const u16 sFieldMugshotPal_BalsamMenacing[] = INCBIN_U16("graphics/field_mugshots/balsam/menacing.gbapal");
//Aidee
static const u32 sFieldMugshotGfx_AideeNormal[] = INCBIN_U32("graphics/field_mugshots/aidee/normal.4bpp.lz");
static const u16 sFieldMugshotPal_AideeNormal[] = INCBIN_U16("graphics/field_mugshots/aidee/normal.gbapal");
static const u32 sFieldMugshotGfx_AideeHappy[] = INCBIN_U32("graphics/field_mugshots/aidee/happy.4bpp.lz");
static const u16 sFieldMugshotPal_AideeHappy[] = INCBIN_U16("graphics/field_mugshots/aidee/happy.gbapal");
static const u32 sFieldMugshotGfx_AideeTalk[] = INCBIN_U32("graphics/field_mugshots/aidee/talk.4bpp.lz");
static const u16 sFieldMugshotPal_AideeTalk[] = INCBIN_U16("graphics/field_mugshots/aidee/talk.gbapal");
static const u32 sFieldMugshotGfx_AideePokeball[] = INCBIN_U32("graphics/field_mugshots/aidee/pokeball.4bpp.lz");
static const u16 sFieldMugshotPal_AideePokeball[] = INCBIN_U16("graphics/field_mugshots/aidee/pokeball.gbapal");
//Birch
static const u32 sFieldMugshotGfx_BirchNormal[] = INCBIN_U32("graphics/field_mugshots/birch/normal.4bpp.lz");
static const u16 sFieldMugshotPal_BirchNormal[] = INCBIN_U16("graphics/field_mugshots/birch/normal.gbapal");
//Male Player
static const u32 sFieldMugshotGfx_MplayerNormal[] = INCBIN_U32("graphics/field_mugshots/mplayer/normal.4bpp.lz");
static const u16 sFieldMugshotPal_MplayerNormal[] = INCBIN_U16("graphics/field_mugshots/mplayer/normal.gbapal");
static const u32 sFieldMugshotGfx_MplayerSad[] = INCBIN_U32("graphics/field_mugshots/mplayer/sad.4bpp.lz");
static const u16 sFieldMugshotPal_MplayerSad[] = INCBIN_U16("graphics/field_mugshots/mplayer/sad.gbapal");
static const u32 sFieldMugshotGfx_MplayerAngry[] = INCBIN_U32("graphics/field_mugshots/mplayer/angry.4bpp.lz");
static const u16 sFieldMugshotPal_MplayerAngry[] = INCBIN_U16("graphics/field_mugshots/mplayer/angry.gbapal");
//Female Player
//Male Player
static const u32 sFieldMugshotGfx_FplayerNormal[] = INCBIN_U32("graphics/field_mugshots/fplayer/normal.4bpp.lz");
static const u16 sFieldMugshotPal_FplayerNormal[] = INCBIN_U16("graphics/field_mugshots/fplayer/normal.gbapal");
static const u32 sFieldMugshotGfx_FplayerSad[] = INCBIN_U32("graphics/field_mugshots/fplayer/sad.4bpp.lz");
static const u16 sFieldMugshotPal_FplayerSad[] = INCBIN_U16("graphics/field_mugshots/fplayer/sad.gbapal");
static const u32 sFieldMugshotGfx_FplayerAngry[] = INCBIN_U32("graphics/field_mugshots/fplayer/angry.4bpp.lz");
static const u16 sFieldMugshotPal_FplayerAngry[] = INCBIN_U16("graphics/field_mugshots/fplayer/angry.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{


    [MUGSHOT_BALSAM] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BalsamNormal,
            .pal = sFieldMugshotPal_BalsamNormal,
        },

        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_BalsamHappy,
            .pal = sFieldMugshotPal_BalsamHappy,
        },

         [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_BalsamAngry,
            .pal = sFieldMugshotPal_BalsamAngry,
        },

        [EMOTE_CONFUSED] =
        {
            .gfx = sFieldMugshotGfx_BalsamConfused,
            .pal = sFieldMugshotPal_BalsamConfused,
        },

        [EMOTE_MENACING] =
        {
            .gfx = sFieldMugshotGfx_BalsamMenacing,
            .pal = sFieldMugshotPal_BalsamMenacing,
        },
    },

    [MUGSHOT_AIDEE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_AideeNormal,
            .pal = sFieldMugshotPal_AideeNormal,
        },

        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_AideeHappy,
            .pal = sFieldMugshotPal_AideeHappy,
        },

         [EMOTE_TALK] =
        {
            .gfx = sFieldMugshotGfx_AideeTalk,
            .pal = sFieldMugshotPal_AideeTalk,
        },

        [EMOTE_POKEBALL] =
        {
            .gfx = sFieldMugshotGfx_AideePokeball,
            .pal = sFieldMugshotPal_AideePokeball,
        },

    },

    [MUGSHOT_BIRCH] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BirchNormal,
            .pal = sFieldMugshotPal_BirchNormal,
        },
            },

    [MUGSHOT_MPLAYER] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_MplayerNormal,
            .pal = sFieldMugshotPal_MplayerNormal,
        },

        [EMOTE_SAD] =
        {
            .gfx = sFieldMugshotGfx_MplayerSad,
            .pal = sFieldMugshotPal_MplayerSad,
        },

         [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_MplayerAngry,
            .pal = sFieldMugshotPal_MplayerAngry,
        },

    },

       [MUGSHOT_FPLAYER] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_FplayerNormal,
            .pal = sFieldMugshotPal_FplayerNormal,
        },

        [EMOTE_SAD] =
        {
            .gfx = sFieldMugshotGfx_FplayerSad,
            .pal = sFieldMugshotPal_FplayerSad,
        },

         [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_FplayerAngry,
            .pal = sFieldMugshotPal_FplayerAngry,
        },

    },

    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },
            },

};