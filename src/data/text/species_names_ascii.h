const u8 gSpeciesNamesAscii[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = "??????????",
    [SPECIES_BULBASAUR] = "BULBASAUR",
    [SPECIES_IVYSAUR] = "IVYSAUR",
    [SPECIES_VENUSAUR] = "VENUSAUR",
    [SPECIES_CHARMANDER] = "CHARMANDER",
    [SPECIES_CHARMELEON] = "CHARMELEON",
    [SPECIES_CHARIZARD] = "CHARIZARD",
    [SPECIES_SQUIRTLE] = "SQUIRTLE",
    [SPECIES_WARTORTLE] = "WARTORTLE",
    [SPECIES_BLASTOISE] = "BLASTOISE",
    [SPECIES_CATERPIE] = "CATERPIE",
    [SPECIES_METAPOD] = "METAPOD",
    [SPECIES_BUTTERFREE] = "BUTTERFREE",
    [SPECIES_WEEDLE] = "WEEDLE",
    [SPECIES_KAKUNA] = "KAKUNA",
    [SPECIES_BEEDRILL] = "BEEDRILL",
    [SPECIES_PIDGEY] = "PIDGEY",
    [SPECIES_PIDGEOTTO] = "PIDGEOTTO",
    [SPECIES_PIDGEOT] = "PIDGEOT",
    [SPECIES_RATTATA] = "RATTATA",
    [SPECIES_RATICATE] = "RATICATE",
    [SPECIES_SPEAROW] = "SPEAROW",
    [SPECIES_FEAROW] = "FEAROW",
    [SPECIES_EKANS] = "EKANS",
    [SPECIES_ARBOK] = "ARBOK",
    [SPECIES_PIKACHU] = "PIKACHU",
    [SPECIES_RAICHU] = "RAICHU",
    [SPECIES_SANDSHREW] = "SANDSHREW",
    [SPECIES_SANDSLASH] = "SANDSLASH",
    [SPECIES_NIDORAN_F] = "NIDORAN♀",
    [SPECIES_NIDORINA] = "NIDORINA",
    [SPECIES_NIDOQUEEN] = "NIDOQUEEN",
    [SPECIES_NIDORAN_M] = "NIDORAN♂",
    [SPECIES_NIDORINO] = "NIDORINO",
    [SPECIES_NIDOKING] = "NIDOKING",
    [SPECIES_CLEFAIRY] = "CLEFAIRY",
    [SPECIES_CLEFABLE] = "CLEFABLE",
    [SPECIES_VULPIX] = "VULPIX",
    [SPECIES_NINETALES] = "NINETALES",
    [SPECIES_JIGGLYPUFF] = "JIGGLYPUFF",
    [SPECIES_WIGGLYTUFF] = "WIGGLYTUFF",
    [SPECIES_ZUBAT] = "ZUBAT",
    [SPECIES_GOLBAT] = "GOLBAT",
    [SPECIES_ODDISH] = "ODDISH",
    [SPECIES_GLOOM] = "GLOOM",
    [SPECIES_VILEPLUME] = "VILEPLUME",
    [SPECIES_PARAS] = "PARAS",
    [SPECIES_PARASECT] = "PARASECT",
    [SPECIES_VENONAT] = "VENONAT",
    [SPECIES_VENOMOTH] = "VENOMOTH",
    [SPECIES_DIGLETT] = "DIGLETT",
    [SPECIES_DUGTRIO] = "DUGTRIO",
    [SPECIES_MEOWTH] = "MEOWTH",
    [SPECIES_PERSIAN] = "PERSIAN",
    [SPECIES_PSYDUCK] = "PSYDUCK",
    [SPECIES_GOLDUCK] = "GOLDUCK",
    [SPECIES_MANKEY] = "MANKEY",
    [SPECIES_PRIMEAPE] = "PRIMEAPE",
    [SPECIES_GROWLITHE] = "GROWLITHE",
    [SPECIES_ARCANINE] = "ARCANINE",
    [SPECIES_POLIWAG] = "POLIWAG",
    [SPECIES_POLIWHIRL] = "POLIWHIRL",
    [SPECIES_POLIWRATH] = "POLIWRATH",
    [SPECIES_ABRA] = "ABRA",
    [SPECIES_KADABRA] = "KADABRA",
    [SPECIES_ALAKAZAM] = "ALAKAZAM",
    [SPECIES_MACHOP] = "MACHOP",
    [SPECIES_MACHOKE] = "MACHOKE",
    [SPECIES_MACHAMP] = "MACHAMP",
    [SPECIES_BELLSPROUT] = "BELLSPROUT",
    [SPECIES_WEEPINBELL] = "WEEPINBELL",
    [SPECIES_VICTREEBEL] = "VICTREEBEL",
    [SPECIES_TENTACOOL] = "TENTACOOL",
    [SPECIES_TENTACRUEL] = "TENTACRUEL",
    [SPECIES_GEODUDE] = "GEODUDE",
    [SPECIES_GRAVELER] = "GRAVELER",
    [SPECIES_GOLEM] = "GOLEM",
    [SPECIES_PONYTA] = "PONYTA",
    [SPECIES_RAPIDASH] = "RAPIDASH",
    [SPECIES_SLOWPOKE] = "SLOWPOKE",
    [SPECIES_SLOWBRO] = "SLOWBRO",
    [SPECIES_MAGNEMITE] = "MAGNEMITE",
    [SPECIES_MAGNETON] = "MAGNETON",
    [SPECIES_FARFETCHD] = "FARFETCH'D",
    [SPECIES_DODUO] = "DODUO",
    [SPECIES_DODRIO] = "DODRIO",
    [SPECIES_SEEL] = "SEEL",
    [SPECIES_DEWGONG] = "DEWGONG",
    [SPECIES_GRIMER] = "GRIMER",
    [SPECIES_MUK] = "MUK",
    [SPECIES_SHELLDER] = "SHELLDER",
    [SPECIES_CLOYSTER] = "CLOYSTER",
    [SPECIES_GASTLY] = "GASTLY",
    [SPECIES_HAUNTER] = "HAUNTER",
    [SPECIES_GENGAR] = "GENGAR",
    [SPECIES_ONIX] = "ONIX",
    [SPECIES_DROWZEE] = "DROWZEE",
    [SPECIES_HYPNO] = "HYPNO",
    [SPECIES_KRABBY] = "KRABBY",
    [SPECIES_KINGLER] = "KINGLER",
    [SPECIES_VOLTORB] = "VOLTORB",
    [SPECIES_ELECTRODE] = "ELECTRODE",
    [SPECIES_EXEGGCUTE] = "EXEGGCUTE",
    [SPECIES_EXEGGUTOR] = "EXEGGUTOR",
    [SPECIES_CUBONE] = "CUBONE",
    [SPECIES_MAROWAK] = "MAROWAK",
    [SPECIES_HITMONLEE] = "HITMONLEE",
    [SPECIES_HITMONCHAN] = "HITMONCHAN",
    [SPECIES_LICKITUNG] = "LICKITUNG",
    [SPECIES_KOFFING] = "KOFFING",
    [SPECIES_WEEZING] = "WEEZING",
    [SPECIES_RHYHORN] = "RHYHORN",
    [SPECIES_RHYDON] = "RHYDON",
    [SPECIES_CHANSEY] = "CHANSEY",
    [SPECIES_TANGELA] = "TANGELA",
    [SPECIES_KANGASKHAN] = "KANGASKHAN",
    [SPECIES_HORSEA] = "HORSEA",
    [SPECIES_SEADRA] = "SEADRA",
    [SPECIES_GOLDEEN] = "GOLDEEN",
    [SPECIES_SEAKING] = "SEAKING",
    [SPECIES_STARYU] = "STARYU",
    [SPECIES_STARMIE] = "STARMIE",
    [SPECIES_MR_MIME] = "MR. MIME",
    [SPECIES_SCYTHER] = "SCYTHER",
    [SPECIES_JYNX] = "JYNX",
    [SPECIES_ELECTABUZZ] = "ELECTABUZZ",
    [SPECIES_MAGMAR] = "MAGMAR",
    [SPECIES_PINSIR] = "PINSIR",
    [SPECIES_TAUROS] = "TAUROS",
    [SPECIES_MAGIKARP] = "MAGIKARP",
    [SPECIES_GYARADOS] = "GYARADOS",
    [SPECIES_LAPRAS] = "LAPRAS",
    [SPECIES_DITTO] = "DITTO",
    [SPECIES_EEVEE] = "EEVEE",
    [SPECIES_VAPOREON] = "VAPOREON",
    [SPECIES_JOLTEON] = "JOLTEON",
    [SPECIES_FLAREON] = "FLAREON",
    [SPECIES_PORYGON] = "PORYGON",
    [SPECIES_OMANYTE] = "OMANYTE",
    [SPECIES_OMASTAR] = "OMASTAR",
    [SPECIES_KABUTO] = "KABUTO",
    [SPECIES_KABUTOPS] = "KABUTOPS",
    [SPECIES_AERODACTYL] = "AERODACTYL",
    [SPECIES_SNORLAX] = "SNORLAX",
    [SPECIES_ARTICUNO] = "ARTICUNO",
    [SPECIES_ZAPDOS] = "ZAPDOS",
    [SPECIES_MOLTRES] = "MOLTRES",
    [SPECIES_DRATINI] = "DRATINI",
    [SPECIES_DRAGONAIR] = "DRAGONAIR",
    [SPECIES_DRAGONITE] = "DRAGONITE",
    [SPECIES_MEWTWO] = "MEWTWO",
    [SPECIES_MEW] = "MEW",
    [SPECIES_CHIKORITA] = "CHIKORITA",
    [SPECIES_BAYLEEF] = "BAYLEEF",
    [SPECIES_MEGANIUM] = "MEGANIUM",
    [SPECIES_CYNDAQUIL] = "CYNDAQUIL",
    [SPECIES_QUILAVA] = "QUILAVA",
    [SPECIES_TYPHLOSION] = "TYPHLOSION",
    [SPECIES_TOTODILE] = "TOTODILE",
    [SPECIES_CROCONAW] = "CROCONAW",
    [SPECIES_FERALIGATR] = "FERALIGATR",
    [SPECIES_SENTRET] = "SENTRET",
    [SPECIES_FURRET] = "FURRET",
    [SPECIES_HOOTHOOT] = "HOOTHOOT",
    [SPECIES_NOCTOWL] = "NOCTOWL",
    [SPECIES_LEDYBA] = "LEDYBA",
    [SPECIES_LEDIAN] = "LEDIAN",
    [SPECIES_SPINARAK] = "SPINARAK",
    [SPECIES_ARIADOS] = "ARIADOS",
    [SPECIES_CROBAT] = "CROBAT",
    [SPECIES_CHINCHOU] = "CHINCHOU",
    [SPECIES_LANTURN] = "LANTURN",
    [SPECIES_PICHU] = "PICHU",
    [SPECIES_CLEFFA] = "CLEFFA",
    [SPECIES_IGGLYBUFF] = "IGGLYBUFF",
    [SPECIES_TOGEPI] = "TOGEPI",
    [SPECIES_TOGETIC] = "TOGETIC",
    [SPECIES_NATU] = "NATU",
    [SPECIES_XATU] = "XATU",
    [SPECIES_MAREEP] = "MAREEP",
    [SPECIES_FLAAFFY] = "FLAAFFY",
    [SPECIES_AMPHAROS] = "AMPHAROS",
    [SPECIES_BELLOSSOM] = "BELLOSSOM",
    [SPECIES_MARILL] = "MARILL",
    [SPECIES_AZUMARILL] = "AZUMARILL",
    [SPECIES_SUDOWOODO] = "SUDOWOODO",
    [SPECIES_POLITOED] = "POLITOED",
    [SPECIES_HOPPIP] = "HOPPIP",
    [SPECIES_SKIPLOOM] = "SKIPLOOM",
    [SPECIES_JUMPLUFF] = "JUMPLUFF",
    [SPECIES_AIPOM] = "AIPOM",
    [SPECIES_SUNKERN] = "SUNKERN",
    [SPECIES_SUNFLORA] = "SUNFLORA",
    [SPECIES_YANMA] = "YANMA",
    [SPECIES_WOOPER] = "WOOPER",
    [SPECIES_QUAGSIRE] = "QUAGSIRE",
    [SPECIES_ESPEON] = "ESPEON",
    [SPECIES_UMBREON] = "UMBREON",
    [SPECIES_MURKROW] = "MURKROW",
    [SPECIES_SLOWKING] = "SLOWKING",
    [SPECIES_MISDREAVUS] = "MISDREAVUS",
    [SPECIES_UNOWN] = "UNOWN",
    [SPECIES_WOBBUFFET] = "WOBBUFFET",
    [SPECIES_GIRAFARIG] = "GIRAFARIG",
    [SPECIES_PINECO] = "PINECO",
    [SPECIES_FORRETRESS] = "FORRETRESS",
    [SPECIES_DUNSPARCE] = "DUNSPARCE",
    [SPECIES_GLIGAR] = "GLIGAR",
    [SPECIES_STEELIX] = "STEELIX",
    [SPECIES_SNUBBULL] = "SNUBBULL",
    [SPECIES_GRANBULL] = "GRANBULL",
    [SPECIES_QWILFISH] = "QWILFISH",
    [SPECIES_SCIZOR] = "SCIZOR",
    [SPECIES_SHUCKLE] = "SHUCKLE",
    [SPECIES_HERACROSS] = "HERACROSS",
    [SPECIES_SNEASEL] = "SNEASEL",
    [SPECIES_TEDDIURSA] = "TEDDIURSA",
    [SPECIES_URSARING] = "URSARING",
    [SPECIES_SLUGMA] = "SLUGMA",
    [SPECIES_MAGCARGO] = "MAGCARGO",
    [SPECIES_SWINUB] = "SWINUB",
    [SPECIES_PILOSWINE] = "PILOSWINE",
    [SPECIES_CORSOLA] = "CORSOLA",
    [SPECIES_REMORAID] = "REMORAID",
    [SPECIES_OCTILLERY] = "OCTILLERY",
    [SPECIES_DELIBIRD] = "DELIBIRD",
    [SPECIES_MANTINE] = "MANTINE",
    [SPECIES_SKARMORY] = "SKARMORY",
    [SPECIES_HOUNDOUR] = "HOUNDOUR",
    [SPECIES_HOUNDOOM] = "HOUNDOOM",
    [SPECIES_KINGDRA] = "KINGDRA",
    [SPECIES_PHANPY] = "PHANPY",
    [SPECIES_DONPHAN] = "DONPHAN",
    [SPECIES_PORYGON2] = "PORYGON2",
    [SPECIES_STANTLER] = "STANTLER",
    [SPECIES_SMEARGLE] = "SMEARGLE",
    [SPECIES_TYROGUE] = "TYROGUE",
    [SPECIES_HITMONTOP] = "HITMONTOP",
    [SPECIES_SMOOCHUM] = "SMOOCHUM",
    [SPECIES_ELEKID] = "ELEKID",
    [SPECIES_MAGBY] = "MAGBY",
    [SPECIES_MILTANK] = "MILTANK",
    [SPECIES_BLISSEY] = "BLISSEY",
    [SPECIES_RAIKOU] = "RAIKOU",
    [SPECIES_ENTEI] = "ENTEI",
    [SPECIES_SUICUNE] = "SUICUNE",
    [SPECIES_LARVITAR] = "LARVITAR",
    [SPECIES_PUPITAR] = "PUPITAR",
    [SPECIES_TYRANITAR] = "TYRANITAR",
    [SPECIES_LUGIA] = "LUGIA",
    [SPECIES_HO_OH] = "HO-OH",
    [SPECIES_CELEBI] = "CELEBI",
    [SPECIES_OLD_UNOWN_B] = "?",
    [SPECIES_OLD_UNOWN_C] = "?",
    [SPECIES_OLD_UNOWN_D] = "?",
    [SPECIES_OLD_UNOWN_E] = "?",
    [SPECIES_OLD_UNOWN_F] = "?",
    [SPECIES_OLD_UNOWN_G] = "?",
    [SPECIES_OLD_UNOWN_H] = "?",
    [SPECIES_OLD_UNOWN_I] = "?",
    [SPECIES_OLD_UNOWN_J] = "?",
    [SPECIES_OLD_UNOWN_K] = "?",
    [SPECIES_OLD_UNOWN_L] = "?",
    [SPECIES_OLD_UNOWN_M] = "?",
    [SPECIES_OLD_UNOWN_N] = "?",
    [SPECIES_OLD_UNOWN_O] = "?",
    [SPECIES_OLD_UNOWN_P] = "?",
    [SPECIES_OLD_UNOWN_Q] = "?",
    [SPECIES_OLD_UNOWN_R] = "?",
    [SPECIES_OLD_UNOWN_S] = "?",
    [SPECIES_OLD_UNOWN_T] = "?",
    [SPECIES_OLD_UNOWN_U] = "?",
    [SPECIES_OLD_UNOWN_V] = "?",
    [SPECIES_OLD_UNOWN_W] = "?",
    [SPECIES_OLD_UNOWN_X] = "?",
    [SPECIES_OLD_UNOWN_Y] = "?",
    [SPECIES_OLD_UNOWN_Z] = "?",
    [SPECIES_TREECKO] = "TREECKO",
    [SPECIES_GROVYLE] = "GROVYLE",
    [SPECIES_SCEPTILE] = "SCEPTILE",
    [SPECIES_TORCHIC] = "TORCHIC",
    [SPECIES_COMBUSKEN] = "COMBUSKEN",
    [SPECIES_BLAZIKEN] = "BLAZIKEN",
    [SPECIES_MUDKIP] = "MUDKIP",
    [SPECIES_MARSHTOMP] = "MARSHTOMP",
    [SPECIES_SWAMPERT] = "SWAMPERT",
    [SPECIES_POOCHYENA] = "POOCHYENA",
    [SPECIES_MIGHTYENA] = "MIGHTYENA",
    [SPECIES_ZIGZAGOON] = "ZIGZAGOON",
    [SPECIES_LINOONE] = "LINOONE",
    [SPECIES_WURMPLE] = "WURMPLE",
    [SPECIES_SILCOON] = "SILCOON",
    [SPECIES_BEAUTIFLY] = "BEAUTIFLY",
    [SPECIES_CASCOON] = "CASCOON",
    [SPECIES_DUSTOX] = "DUSTOX",
    [SPECIES_LOTAD] = "LOTAD",
    [SPECIES_LOMBRE] = "LOMBRE",
    [SPECIES_LUDICOLO] = "LUDICOLO",
    [SPECIES_SEEDOT] = "SEEDOT",
    [SPECIES_NUZLEAF] = "NUZLEAF",
    [SPECIES_SHIFTRY] = "SHIFTRY",
    [SPECIES_NINCADA] = "NINCADA",
    [SPECIES_NINJASK] = "NINJASK",
    [SPECIES_SHEDINJA] = "SHEDINJA",
    [SPECIES_TAILLOW] = "TAILLOW",
    [SPECIES_SWELLOW] = "SWELLOW",
    [SPECIES_SHROOMISH] = "SHROOMISH",
    [SPECIES_BRELOOM] = "BRELOOM",
    [SPECIES_SPINDA] = "SPINDA",
    [SPECIES_WINGULL] = "WINGULL",
    [SPECIES_PELIPPER] = "PELIPPER",
    [SPECIES_SURSKIT] = "SURSKIT",
    [SPECIES_MASQUERAIN] = "MASQUERAIN",
    [SPECIES_WAILMER] = "WAILMER",
    [SPECIES_WAILORD] = "WAILORD",
    [SPECIES_SKITTY] = "SKITTY",
    [SPECIES_DELCATTY] = "DELCATTY",
    [SPECIES_KECLEON] = "KECLEON",
    [SPECIES_BALTOY] = "BALTOY",
    [SPECIES_CLAYDOL] = "CLAYDOL",
    [SPECIES_NOSEPASS] = "NOSEPASS",
    [SPECIES_TORKOAL] = "TORKOAL",
    [SPECIES_SABLEYE] = "SABLEYE",
    [SPECIES_BARBOACH] = "BARBOACH",
    [SPECIES_WHISCASH] = "WHISCASH",
    [SPECIES_LUVDISC] = "LUVDISC",
    [SPECIES_CORPHISH] = "CORPHISH",
    [SPECIES_CRAWDAUNT] = "CRAWDAUNT",
    [SPECIES_FEEBAS] = "FEEBAS",
    [SPECIES_MILOTIC] = "MILOTIC",
    [SPECIES_CARVANHA] = "CARVANHA",
    [SPECIES_SHARPEDO] = "SHARPEDO",
    [SPECIES_TRAPINCH] = "TRAPINCH",
    [SPECIES_VIBRAVA] = "VIBRAVA",
    [SPECIES_FLYGON] = "FLYGON",
    [SPECIES_MAKUHITA] = "MAKUHITA",
    [SPECIES_HARIYAMA] = "HARIYAMA",
    [SPECIES_ELECTRIKE] = "ELECTRIKE",
    [SPECIES_MANECTRIC] = "MANECTRIC",
    [SPECIES_NUMEL] = "NUMEL",
    [SPECIES_CAMERUPT] = "CAMERUPT",
    [SPECIES_SPHEAL] = "SPHEAL",
    [SPECIES_SEALEO] = "SEALEO",
    [SPECIES_WALREIN] = "WALREIN",
    [SPECIES_CACNEA] = "CACNEA",
    [SPECIES_CACTURNE] = "CACTURNE",
    [SPECIES_SNORUNT] = "SNORUNT",
    [SPECIES_GLALIE] = "GLALIE",
    [SPECIES_LUNATONE] = "LUNATONE",
    [SPECIES_SOLROCK] = "SOLROCK",
    [SPECIES_AZURILL] = "AZURILL",
    [SPECIES_SPOINK] = "SPOINK",
    [SPECIES_GRUMPIG] = "GRUMPIG",
    [SPECIES_PLUSLE] = "PLUSLE",
    [SPECIES_MINUN] = "MINUN",
    [SPECIES_MAWILE] = "MAWILE",
    [SPECIES_MEDITITE] = "MEDITITE",
    [SPECIES_MEDICHAM] = "MEDICHAM",
    [SPECIES_SWABLU] = "SWABLU",
    [SPECIES_ALTARIA] = "ALTARIA",
    [SPECIES_WYNAUT] = "WYNAUT",
    [SPECIES_DUSKULL] = "DUSKULL",
    [SPECIES_DUSCLOPS] = "DUSCLOPS",
    [SPECIES_ROSELIA] = "ROSELIA",
    [SPECIES_SLAKOTH] = "SLAKOTH",
    [SPECIES_VIGOROTH] = "VIGOROTH",
    [SPECIES_SLAKING] = "SLAKING",
    [SPECIES_GULPIN] = "GULPIN",
    [SPECIES_SWALOT] = "SWALOT",
    [SPECIES_TROPIUS] = "TROPIUS",
    [SPECIES_WHISMUR] = "WHISMUR",
    [SPECIES_LOUDRED] = "LOUDRED",
    [SPECIES_EXPLOUD] = "EXPLOUD",
    [SPECIES_CLAMPERL] = "CLAMPERL",
    [SPECIES_HUNTAIL] = "HUNTAIL",
    [SPECIES_GOREBYSS] = "GOREBYSS",
    [SPECIES_ABSOL] = "ABSOL",
    [SPECIES_SHUPPET] = "SHUPPET",
    [SPECIES_BANETTE] = "BANETTE",
    [SPECIES_SEVIPER] = "SEVIPER",
    [SPECIES_ZANGOOSE] = "ZANGOOSE",
    [SPECIES_RELICANTH] = "RELICANTH",
    [SPECIES_ARON] = "ARON",
    [SPECIES_LAIRON] = "LAIRON",
    [SPECIES_AGGRON] = "AGGRON",
    [SPECIES_CASTFORM] = "CASTFORM",
    [SPECIES_VOLBEAT] = "VOLBEAT",
    [SPECIES_ILLUMISE] = "ILLUMISE",
    [SPECIES_LILEEP] = "LILEEP",
    [SPECIES_CRADILY] = "CRADILY",
    [SPECIES_ANORITH] = "ANORITH",
    [SPECIES_ARMALDO] = "ARMALDO",
    [SPECIES_RALTS] = "RALTS",
    [SPECIES_KIRLIA] = "KIRLIA",
    [SPECIES_GARDEVOIR] = "GARDEVOIR",
    [SPECIES_BAGON] = "BAGON",
    [SPECIES_SHELGON] = "SHELGON",
    [SPECIES_SALAMENCE] = "SALAMENCE",
    [SPECIES_BELDUM] = "BELDUM",
    [SPECIES_METANG] = "METANG",
    [SPECIES_METAGROSS] = "METAGROSS",
    [SPECIES_REGIROCK] = "REGIROCK",
    [SPECIES_REGICE] = "REGICE",
    [SPECIES_REGISTEEL] = "REGISTEEL",
    [SPECIES_KYOGRE] = "KYOGRE",
    [SPECIES_GROUDON] = "GROUDON",
    [SPECIES_RAYQUAZA] = "RAYQUAZA",
    [SPECIES_LATIAS] = "LATIAS",
    [SPECIES_LATIOS] = "LATIOS",
    [SPECIES_JIRACHI] = "JIRACHI",
    [SPECIES_DEOXYS] = "DEOXYS",
    [SPECIES_CHIMECHO] = "CHIMECHO",
};
