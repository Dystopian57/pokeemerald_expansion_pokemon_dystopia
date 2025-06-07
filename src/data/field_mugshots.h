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

};