#include "unicode_tables.h"

char* value_names[1040] = {
    "No",
    "Yes",
    "Left_To_Right",
    "Arabic_Letter",
    "Arabic_Number",
    "Boundary_Neutral",
    "Common_Separator",
    "European_Number",
    "European_Separator",
    "European_Terminator",
    "First_Strong_Isolate",
    "Left_To_Right_Embedding",
    "Left_To_Right_Isolate",
    "Left_To_Right_Override",
    "Nonspacing_Mark",
    "Other_Neutral",
    "Paragraph_Separator",
    "Pop_Directional_Format",
    "Pop_Directional_Isolate",
    "Right_To_Left",
    "Right_To_Left_Embedding",
    "Right_To_Left_Isolate",
    "Right_To_Left_Override",
    "Segment_Separator",
    "White_Space",
    "No_Block",
    "Adlam",
    "Aegean_Numbers",
    "Ahom",
    "Alchemical_Symbols",
    "Alphabetic_Presentation_Forms",
    "Anatolian_Hieroglyphs",
    "Ancient_Greek_Musical_Notation",
    "Ancient_Greek_Numbers",
    "Ancient_Symbols",
    "Arabic",
    "Arabic_Extended_A",
    "Arabic_Extended_B",
    "Arabic_Mathematical_Alphabetic_Symbols",
    "Arabic_Presentation_Forms_A",
    "Arabic_Presentation_Forms_B",
    "Arabic_Supplement",
    "Armenian",
    "Arrows",
    "Avestan",
    "Balinese",
    "Bamum",
    "Bamum_Supplement",
    "Basic_Latin",
    "Bassa_Vah",
    "Batak",
    "Bengali",
    "Bhaiksuki",
    "Block_Elements",
    "Bopomofo",
    "Bopomofo_Extended",
    "Box_Drawing",
    "Brahmi",
    "Braille_Patterns",
    "Buginese",
    "Buhid",
    "Byzantine_Musical_Symbols",
    "Carian",
    "Caucasian_Albanian",
    "Chakma",
    "Cham",
    "Cherokee",
    "Cherokee_Supplement",
    "Chess_Symbols",
    "Chorasmian",
    "CJK_Compatibility",
    "CJK_Compatibility_Forms",
    "CJK_Compatibility_Ideographs",
    "CJK_Compatibility_Ideographs_Supplement",
    "CJK_Radicals_Supplement",
    "CJK_Strokes",
    "CJK_Symbols_And_Punctuation",
    "CJK_Unified_Ideographs",
    "CJK_Unified_Ideographs_Extension_A",
    "CJK_Unified_Ideographs_Extension_B",
    "CJK_Unified_Ideographs_Extension_C",
    "CJK_Unified_Ideographs_Extension_D",
    "CJK_Unified_Ideographs_Extension_E",
    "CJK_Unified_Ideographs_Extension_F",
    "CJK_Unified_Ideographs_Extension_G",
    "Combining_Diacritical_Marks",
    "Combining_Diacritical_Marks_Extended",
    "Combining_Diacritical_Marks_For_Symbols",
    "Combining_Diacritical_Marks_Supplement",
    "Combining_Half_Marks",
    "Common_Indic_Number_Forms",
    "Control_Pictures",
    "Coptic",
    "Coptic_Epact_Numbers",
    "Counting_Rod_Numerals",
    "Cuneiform",
    "Cuneiform_Numbers_And_Punctuation",
    "Currency_Symbols",
    "Cypriot_Syllabary",
    "Cypro_Minoan",
    "Cyrillic",
    "Cyrillic_Extended_A",
    "Cyrillic_Extended_B",
    "Cyrillic_Extended_C",
    "Cyrillic_Supplement",
    "Deseret",
    "Devanagari",
    "Devanagari_Extended",
    "Dingbats",
    "Dives_Akuru",
    "Dogra",
    "Domino_Tiles",
    "Duployan",
    "Early_Dynastic_Cuneiform",
    "Egyptian_Hieroglyph_Format_Controls",
    "Egyptian_Hieroglyphs",
    "Elbasan",
    "Elymaic",
    "Emoticons",
    "Enclosed_Alphanumerics",
    "Enclosed_Alphanumeric_Supplement",
    "Enclosed_CJK_Letters_And_Months",
    "Enclosed_Ideographic_Supplement",
    "Ethiopic",
    "Ethiopic_Extended",
    "Ethiopic_Extended_A",
    "Ethiopic_Extended_B",
    "Ethiopic_Supplement",
    "General_Punctuation",
    "Geometric_Shapes",
    "Geometric_Shapes_Extended",
    "Georgian",
    "Georgian_Extended",
    "Georgian_Supplement",
    "Glagolitic",
    "Glagolitic_Supplement",
    "Gothic",
    "Grantha",
    "Greek_And_Coptic",
    "Greek_Extended",
    "Gujarati",
    "Gunjala_Gondi",
    "Gurmukhi",
    "Halfwidth_And_Fullwidth_Forms",
    "Hangul_Compatibility_Jamo",
    "Hangul_Jamo",
    "Hangul_Jamo_Extended_A",
    "Hangul_Jamo_Extended_B",
    "Hangul_Syllables",
    "Hanifi_Rohingya",
    "Hanunoo",
    "Hatran",
    "Hebrew",
    "High_Private_Use_Surrogates",
    "High_Surrogates",
    "Hiragana",
    "Ideographic_Description_Characters",
    "Ideographic_Symbols_And_Punctuation",
    "Imperial_Aramaic",
    "Indic_Siyaq_Numbers",
    "Inscriptional_Pahlavi",
    "Inscriptional_Parthian",
    "IPA_Extensions",
    "Javanese",
    "Kaithi",
    "Kana_Extended_A",
    "Kana_Extended_B",
    "Kana_Supplement",
    "Kanbun",
    "Kangxi_Radicals",
    "Kannada",
    "Katakana",
    "Katakana_Phonetic_Extensions",
    "Kayah_Li",
    "Kharoshthi",
    "Khitan_Small_Script",
    "Khmer",
    "Khmer_Symbols",
    "Khojki",
    "Khudawadi",
    "Lao",
    "Latin_1_Supplement",
    "Latin_Extended_A",
    "Latin_Extended_Additional",
    "Latin_Extended_B",
    "Latin_Extended_C",
    "Latin_Extended_D",
    "Latin_Extended_E",
    "Latin_Extended_F",
    "Latin_Extended_G",
    "Lepcha",
    "Letterlike_Symbols",
    "Limbu",
    "Linear_A",
    "Linear_B_Ideograms",
    "Linear_B_Syllabary",
    "Lisu",
    "Lisu_Supplement",
    "Low_Surrogates",
    "Lycian",
    "Lydian",
    "Mahajani",
    "Mahjong_Tiles",
    "Makasar",
    "Malayalam",
    "Mandaic",
    "Manichaean",
    "Marchen",
    "Masaram_Gondi",
    "Mathematical_Alphanumeric_Symbols",
    "Mathematical_Operators",
    "Mayan_Numerals",
    "Medefaidrin",
    "Meetei_Mayek",
    "Meetei_Mayek_Extensions",
    "Mende_Kikakui",
    "Meroitic_Cursive",
    "Meroitic_Hieroglyphs",
    "Miao",
    "Miscellaneous_Mathematical_Symbols_A",
    "Miscellaneous_Mathematical_Symbols_B",
    "Miscellaneous_Symbols",
    "Miscellaneous_Symbols_And_Arrows",
    "Miscellaneous_Symbols_And_Pictographs",
    "Miscellaneous_Technical",
    "Modi",
    "Modifier_Tone_Letters",
    "Mongolian",
    "Mongolian_Supplement",
    "Mro",
    "Multani",
    "Musical_Symbols",
    "Myanmar",
    "Myanmar_Extended_A",
    "Myanmar_Extended_B",
    "Nabataean",
    "Nandinagari",
    "Newa",
    "New_Tai_Lue",
    "NKo",
    "Number_Forms",
    "Nushu",
    "Nyiakeng_Puachue_Hmong",
    "Ogham",
    "Ol_Chiki",
    "Old_Hungarian",
    "Old_Italic",
    "Old_North_Arabian",
    "Old_Permic",
    "Old_Persian",
    "Old_Sogdian",
    "Old_South_Arabian",
    "Old_Turkic",
    "Old_Uyghur",
    "Optical_Character_Recognition",
    "Oriya",
    "Ornamental_Dingbats",
    "Osage",
    "Osmanya",
    "Ottoman_Siyaq_Numbers",
    "Pahawh_Hmong",
    "Palmyrene",
    "Pau_Cin_Hau",
    "Phags_Pa",
    "Phaistos_Disc",
    "Phoenician",
    "Phonetic_Extensions",
    "Phonetic_Extensions_Supplement",
    "Playing_Cards",
    "Private_Use_Area",
    "Psalter_Pahlavi",
    "Rejang",
    "Rumi_Numeral_Symbols",
    "Runic",
    "Samaritan",
    "Saurashtra",
    "Sharada",
    "Shavian",
    "Shorthand_Format_Controls",
    "Siddham",
    "Sinhala",
    "Sinhala_Archaic_Numbers",
    "Small_Form_Variants",
    "Small_Kana_Extension",
    "Sogdian",
    "Sora_Sompeng",
    "Soyombo",
    "Spacing_Modifier_Letters",
    "Specials",
    "Sundanese",
    "Sundanese_Supplement",
    "Superscripts_And_Subscripts",
    "Supplemental_Arrows_A",
    "Supplemental_Arrows_B",
    "Supplemental_Arrows_C",
    "Supplemental_Mathematical_Operators",
    "Supplemental_Punctuation",
    "Supplemental_Symbols_And_Pictographs",
    "Supplementary_Private_Use_Area_A",
    "Supplementary_Private_Use_Area_B",
    "Sutton_SignWriting",
    "Syloti_Nagri",
    "Symbols_And_Pictographs_Extended_A",
    "Symbols_For_Legacy_Computing",
    "Syriac",
    "Syriac_Supplement",
    "Tagalog",
    "Tagbanwa",
    "Tags",
    "Tai_Le",
    "Tai_Tham",
    "Tai_Viet",
    "Tai_Xuan_Jing_Symbols",
    "Takri",
    "Tamil",
    "Tamil_Supplement",
    "Tangsa",
    "Tangut",
    "Tangut_Components",
    "Tangut_Supplement",
    "Telugu",
    "Thaana",
    "Thai",
    "Tibetan",
    "Tifinagh",
    "Tirhuta",
    "Toto",
    "Transport_And_Map_Symbols",
    "Ugaritic",
    "Unified_Canadian_Aboriginal_Syllabics",
    "Unified_Canadian_Aboriginal_Syllabics_Extended",
    "Unified_Canadian_Aboriginal_Syllabics_Extended_A",
    "Vai",
    "Variation_Selectors",
    "Variation_Selectors_Supplement",
    "Vedic_Extensions",
    "Vertical_Forms",
    "Vithkuqi",
    "Wancho",
    "Warang_Citi",
    "Yezidi",
    "Yijing_Hexagram_Symbols",
    "Yi_Radicals",
    "Yi_Syllables",
    "Zanabazar_Square",
    "Znamenny_Musical_Notation",
    "Not_Reordered",
    "Above",
    "Above_Left",
    "Above_Right",
    "Attached_Above",
    "Attached_Above_Right",
    "Attached_Below",
    "Attached_Below_Left",
    "Below",
    "Below_Left",
    "Below_Right",
    "CCC10",
    "CCC103",
    "CCC107",
    "CCC11",
    "CCC118",
    "CCC12",
    "CCC122",
    "CCC129",
    "CCC13",
    "CCC130",
    "CCC132",
    "CCC133",
    "CCC14",
    "CCC15",
    "CCC16",
    "CCC17",
    "CCC18",
    "CCC19",
    "CCC20",
    "CCC21",
    "CCC22",
    "CCC23",
    "CCC24",
    "CCC25",
    "CCC26",
    "CCC27",
    "CCC28",
    "CCC29",
    "CCC30",
    "CCC31",
    "CCC32",
    "CCC33",
    "CCC34",
    "CCC35",
    "CCC36",
    "CCC84",
    "CCC91",
    "Double_Above",
    "Double_Below",
    "Han_Reading",
    "Iota_Subscript",
    "Kana_Voicing",
    "Left",
    "Nukta",
    "Overlay",
    "Right",
    "Virama",
    "None",
    "Canonical",
    "Circle",
    "Compat",
    "Final",
    "Font",
    "Fraction",
    "Initial",
    "Isolated",
    "Medial",
    "Narrow",
    "Nobreak",
    "Small",
    "Square",
    "Sub",
    "Super",
    "Vertical",
    "Wide",
    "Neutral",
    "Ambiguous",
    "Fullwidth",
    "Halfwidth",
    "Narrow",
    "Wide",
    "Unassigned",
    "Close_Punctuation",
    "Connector_Punctuation",
    "Control",
    "Currency_Symbol",
    "Dash_Punctuation",
    "Decimal_Number",
    "Enclosing_Mark",
    "Final_Punctuation",
    "Format",
    "Initial_Punctuation",
    "Letter_Number",
    "Line_Separator",
    "Lowercase_Letter",
    "Math_Symbol",
    "Modifier_Letter",
    "Modifier_Symbol",
    "Nonspacing_Mark",
    "Open_Punctuation",
    "Other_Letter",
    "Other_Number",
    "Other_Punctuation",
    "Other_Symbol",
    "Paragraph_Separator",
    "Private_Use",
    "Space_Separator",
    "Spacing_Mark",
    "Surrogate",
    "Titlecase_Letter",
    "Uppercase_Letter",
    "Other",
    "Control",
    "CR",
    "E_Base",
    "E_Base_GAZ",
    "E_Modifier",
    "Extend",
    "Glue_After_Zwj",
    "L",
    "LF",
    "LV",
    "LVT",
    "Prepend",
    "Regional_Indicator",
    "SpacingMark",
    "T",
    "V",
    "ZWJ",
    "Not_Applicable",
    "Leading_Jamo",
    "LV_Syllable",
    "LVT_Syllable",
    "Trailing_Jamo",
    "Vowel_Jamo",
    "NA",
    "Bottom",
    "Bottom_And_Left",
    "Bottom_And_Right",
    "Left",
    "Left_And_Right",
    "Overstruck",
    "Right",
    "Top",
    "Top_And_Bottom",
    "Top_And_Bottom_And_Left",
    "Top_And_Bottom_And_Right",
    "Top_And_Left",
    "Top_And_Left_And_Right",
    "Top_And_Right",
    "Visual_Order_Left",
    "Other",
    "Avagraha",
    "Bindu",
    "Brahmi_Joining_Number",
    "Cantillation_Mark",
    "Consonant",
    "Consonant_Dead",
    "Consonant_Final",
    "Consonant_Head_Letter",
    "Consonant_Initial_Postfixed",
    "Consonant_Killer",
    "Consonant_Medial",
    "Consonant_Placeholder",
    "Consonant_Preceding_Repha",
    "Consonant_Prefixed",
    "Consonant_Subjoined",
    "Consonant_Succeeding_Repha",
    "Consonant_With_Stacker",
    "Gemination_Mark",
    "Invisible_Stacker",
    "Joiner",
    "Modifying_Letter",
    "Non_Joiner",
    "Nukta",
    "Number",
    "Number_Joiner",
    "Pure_Killer",
    "Register_Shifter",
    "Syllable_Modifier",
    "Tone_Letter",
    "Tone_Mark",
    "Virama",
    "Visarga",
    "Vowel",
    "Vowel_Dependent",
    "Vowel_Independent",
    "No_Joining_Group",
    "African_Feh",
    "African_Noon",
    "African_Qaf",
    "Ain",
    "Alaph",
    "Alef",
    "Beh",
    "Beth",
    "Burushaski_Yeh_Barree",
    "Dal",
    "Dalath_Rish",
    "E",
    "Farsi_Yeh",
    "Fe",
    "Feh",
    "Final_Semkath",
    "Gaf",
    "Gamal",
    "Hah",
    "Hamza_On_Heh_Goal",
    "Hanifi_Rohingya_Kinna_Ya",
    "Hanifi_Rohingya_Pa",
    "He",
    "Heh",
    "Heh_Goal",
    "Heth",
    "Kaf",
    "Kaph",
    "Khaph",
    "Knotted_Heh",
    "Lam",
    "Lamadh",
    "Malayalam_Bha",
    "Malayalam_Ja",
    "Malayalam_Lla",
    "Malayalam_Llla",
    "Malayalam_Nga",
    "Malayalam_Nna",
    "Malayalam_Nnna",
    "Malayalam_Nya",
    "Malayalam_Ra",
    "Malayalam_Ssa",
    "Malayalam_Tta",
    "Manichaean_Aleph",
    "Manichaean_Ayin",
    "Manichaean_Beth",
    "Manichaean_Daleth",
    "Manichaean_Dhamedh",
    "Manichaean_Five",
    "Manichaean_Gimel",
    "Manichaean_Heth",
    "Manichaean_Hundred",
    "Manichaean_Kaph",
    "Manichaean_Lamedh",
    "Manichaean_Mem",
    "Manichaean_Nun",
    "Manichaean_One",
    "Manichaean_Pe",
    "Manichaean_Qoph",
    "Manichaean_Resh",
    "Manichaean_Sadhe",
    "Manichaean_Samekh",
    "Manichaean_Taw",
    "Manichaean_Ten",
    "Manichaean_Teth",
    "Manichaean_Thamedh",
    "Manichaean_Twenty",
    "Manichaean_Waw",
    "Manichaean_Yodh",
    "Manichaean_Zayin",
    "Meem",
    "Mim",
    "Noon",
    "Nun",
    "Nya",
    "Pe",
    "Qaf",
    "Qaph",
    "Reh",
    "Reversed_Pe",
    "Rohingya_Yeh",
    "Sad",
    "Sadhe",
    "Seen",
    "Semkath",
    "Shin",
    "Straight_Waw",
    "Swash_Kaf",
    "Syriac_Waw",
    "Tah",
    "Taw",
    "Teh_Marbuta",
    "Teth",
    "Thin_Yeh",
    "Vertical_Tail",
    "Waw",
    "Yeh",
    "Yeh_Barree",
    "Yeh_With_Tail",
    "Yudh",
    "Yudh_He",
    "Zain",
    "Zhain",
    "Non_Joining",
    "Dual_Joining",
    "Join_Causing",
    "Left_Joining",
    "Right_Joining",
    "Transparent",
    "Unknown",
    "Alphabetic",
    "Ambiguous",
    "Break_After",
    "Break_Before",
    "Break_Both",
    "Break_Symbols",
    "Carriage_Return",
    "Close_Parenthesis",
    "Close_Punctuation",
    "Combining_Mark",
    "Complex_Context",
    "Conditional_Japanese_Starter",
    "Contingent_Break",
    "E_Base",
    "E_Modifier",
    "Exclamation",
    "Glue",
    "H2",
    "H3",
    "Hebrew_Letter",
    "Hyphen",
    "Ideographic",
    "Infix_Numeric",
    "Inseparable",
    "JL",
    "JT",
    "JV",
    "Line_Feed",
    "Mandatory_Break",
    "Next_Line",
    "Nonstarter",
    "Numeric",
    "Open_Punctuation",
    "Postfix_Numeric",
    "Prefix_Numeric",
    "Quotation",
    "Regional_Indicator",
    "Space",
    "Surrogate",
    "Word_Joiner",
    "ZWJ",
    "ZWSpace",
    "Yes",
    "Maybe",
    "No",
    "Yes",
    "No",
    "None",
    "Decimal",
    "Digit",
    "Numeric",
    "NaN",
    "-1/2",
    "0",
    "1",
    "1/10",
    "1/12",
    "1/16",
    "1/160",
    "1/2",
    "1/20",
    "1/3",
    "1/32",
    "1/320",
    "1/4",
    "1/40",
    "1/5",
    "1/6",
    "1/64",
    "1/7",
    "1/8",
    "1/80",
    "1/9",
    "10",
    "100",
    "1000",
    "10000",
    "100000",
    "1000000",
    "10000000",
    "100000000",
    "10000000000",
    "1000000000000",
    "11",
    "11/12",
    "11/2",
    "12",
    "13",
    "13/2",
    "14",
    "15",
    "15/2",
    "16",
    "17",
    "17/2",
    "18",
    "19",
    "2",
    "2/3",
    "2/5",
    "20",
    "200",
    "2000",
    "20000",
    "200000",
    "20000000",
    "21",
    "216000",
    "22",
    "23",
    "24",
    "25",
    "26",
    "27",
    "28",
    "29",
    "3",
    "3/16",
    "3/2",
    "3/20",
    "3/4",
    "3/5",
    "3/64",
    "3/8",
    "3/80",
    "30",
    "300",
    "3000",
    "30000",
    "300000",
    "31",
    "32",
    "33",
    "34",
    "35",
    "36",
    "37",
    "38",
    "39",
    "4",
    "4/5",
    "40",
    "400",
    "4000",
    "40000",
    "400000",
    "41",
    "42",
    "43",
    "432000",
    "44",
    "45",
    "46",
    "47",
    "48",
    "49",
    "5",
    "5/12",
    "5/2",
    "5/6",
    "5/8",
    "50",
    "500",
    "5000",
    "50000",
    "500000",
    "6",
    "60",
    "600",
    "6000",
    "60000",
    "600000",
    "7",
    "7/12",
    "7/2",
    "7/8",
    "70",
    "700",
    "7000",
    "70000",
    "700000",
    "8",
    "80",
    "800",
    "8000",
    "80000",
    "800000",
    "9",
    "9/2",
    "90",
    "900",
    "9000",
    "90000",
    "900000",
    "Unknown",
    "Adlam",
    "Ahom",
    "Anatolian_Hieroglyphs",
    "Arabic",
    "Armenian",
    "Avestan",
    "Balinese",
    "Bamum",
    "Bassa_Vah",
    "Batak",
    "Bengali",
    "Bhaiksuki",
    "Bopomofo",
    "Brahmi",
    "Braille",
    "Buginese",
    "Buhid",
    "Canadian_Aboriginal",
    "Carian",
    "Caucasian_Albanian",
    "Chakma",
    "Cham",
    "Cherokee",
    "Chorasmian",
    "Common",
    "Coptic",
    "Cuneiform",
    "Cypriot",
    "Cypro_Minoan",
    "Cyrillic",
    "Deseret",
    "Devanagari",
    "Dives_Akuru",
    "Dogra",
    "Duployan",
    "Egyptian_Hieroglyphs",
    "Elbasan",
    "Elymaic",
    "Ethiopic",
    "Georgian",
    "Glagolitic",
    "Gothic",
    "Grantha",
    "Greek",
    "Gujarati",
    "Gunjala_Gondi",
    "Gurmukhi",
    "Han",
    "Hangul",
    "Hanifi_Rohingya",
    "Hanunoo",
    "Hatran",
    "Hebrew",
    "Hiragana",
    "Imperial_Aramaic",
    "Inherited",
    "Inscriptional_Pahlavi",
    "Inscriptional_Parthian",
    "Javanese",
    "Kaithi",
    "Kannada",
    "Katakana",
    "Katakana_Or_Hiragana",
    "Kayah_Li",
    "Kharoshthi",
    "Khitan_Small_Script",
    "Khmer",
    "Khojki",
    "Khudawadi",
    "Lao",
    "Latin",
    "Lepcha",
    "Limbu",
    "Linear_A",
    "Linear_B",
    "Lisu",
    "Lycian",
    "Lydian",
    "Mahajani",
    "Makasar",
    "Malayalam",
    "Mandaic",
    "Manichaean",
    "Marchen",
    "Masaram_Gondi",
    "Medefaidrin",
    "Meetei_Mayek",
    "Mende_Kikakui",
    "Meroitic_Cursive",
    "Meroitic_Hieroglyphs",
    "Miao",
    "Modi",
    "Mongolian",
    "Mro",
    "Multani",
    "Myanmar",
    "Nabataean",
    "Nandinagari",
    "Newa",
    "New_Tai_Lue",
    "Nko",
    "Nushu",
    "Nyiakeng_Puachue_Hmong",
    "Ogham",
    "Ol_Chiki",
    "Old_Hungarian",
    "Old_Italic",
    "Old_North_Arabian",
    "Old_Permic",
    "Old_Persian",
    "Old_Sogdian",
    "Old_South_Arabian",
    "Old_Turkic",
    "Old_Uyghur",
    "Oriya",
    "Osage",
    "Osmanya",
    "Pahawh_Hmong",
    "Palmyrene",
    "Pau_Cin_Hau",
    "Phags_Pa",
    "Phoenician",
    "Psalter_Pahlavi",
    "Rejang",
    "Runic",
    "Samaritan",
    "Saurashtra",
    "Sharada",
    "Shavian",
    "Siddham",
    "SignWriting",
    "Sinhala",
    "Sogdian",
    "Sora_Sompeng",
    "Soyombo",
    "Sundanese",
    "Syloti_Nagri",
    "Syriac",
    "Tagalog",
    "Tagbanwa",
    "Tai_Le",
    "Tai_Tham",
    "Tai_Viet",
    "Takri",
    "Tamil",
    "Tangsa",
    "Tangut",
    "Telugu",
    "Thaana",
    "Thai",
    "Tibetan",
    "Tifinagh",
    "Tirhuta",
    "Toto",
    "Ugaritic",
    "Vai",
    "Vithkuqi",
    "Wancho",
    "Warang_Citi",
    "Yezidi",
    "Yi",
    "Zanabazar_Square",
    "Other",
    "ATerm",
    "Close",
    "CR",
    "Extend",
    "Format",
    "LF",
    "Lower",
    "Numeric",
    "OLetter",
    "SContinue",
    "Sep",
    "Sp",
    "STerm",
    "Upper",
    "Other",
    "ALetter",
    "CR",
    "Double_Quote",
    "E_Base",
    "E_Base_GAZ",
    "E_Modifier",
    "Extend",
    "ExtendNumLet",
    "Format",
    "Glue_After_Zwj",
    "Hebrew_Letter",
    "Katakana",
    "LF",
    "MidLetter",
    "MidNum",
    "MidNumLet",
    "Newline",
    "Numeric",
    "Regional_Indicator",
    "Single_Quote",
    "WSegSpace",
    "ZWJ"
};

/* The tables and function for Alphabetic. */

static UINT8 alphabetic_table_1[446] = {
      0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255, 195, 255,
      3,   0,  31,  80,  32,   0, 223, 188,  64, 215, 251, 255, 191, 255,   3, 252,
    127,   2, 255,   1, 255, 191, 182,   0, 255, 135,   7,   0, 255, 254,   0, 192,
    239,  31, 254, 225,   0, 156,   0, 224,   0, 252,  48,   4, 255, 252, 255,  31,
    255, 126, 255,   3, 240, 255, 248,   3, 255, 239, 255, 223, 225, 255,  15,   0,
    239, 159, 249, 255, 255, 253, 197, 227, 159,  89, 128, 176,   3,  16, 238, 135,
    109, 195, 135,  25,   2,  94,  63,   0, 238, 191, 237, 227, 191,  27,   1,   0,
      0,  30, 238, 159, 159,  25, 192, 176,   2,   0, 236, 199,  61, 214,  24, 199,
    255, 195, 199,  29, 129,   0, 239, 223, 253, 255, 255, 227, 223,  29,  96,  39,
    239, 227,  96,  96,   6,   0, 255, 231, 223,  93, 240, 128, 238, 255, 127, 252,
    251,  47, 127, 128,  95, 255,  12,   0, 127,  32, 214, 247, 175, 255, 255,  59,
     95,  32,   0, 240,   3, 255, 127, 249,   0,  60, 191,  32, 255, 247, 255,  61,
    127,  61,  61, 127,  61, 255,  63,  63, 255, 159, 255, 199,  15, 128,  13,   0,
    207, 255, 128,  16, 255, 127, 255,  15, 255,  63,  31,   0, 128,   0,   0, 128,
      1, 112, 239, 255, 255, 243, 127,   0,   0, 222, 111,   4, 128, 255, 255, 170,
    223,  95, 220,  31, 207,  15,   2, 128, 132, 252,  47,  62,  80, 189, 224,  67,
    192, 255,  31, 120, 255, 128, 127, 127, 224,   0, 254,   3,  62,  31, 127, 224,
    224, 255,   0,  12, 240, 143, 252, 255, 255, 249, 235,   3, 255,   0,  47,   0,
    252, 232, 247, 255,   0, 124,   5,   0,   0,  56,  60,   0, 126, 126, 126,   0,
    127, 248, 248, 224, 127,  95, 219, 255, 248, 255, 223, 255, 252, 252, 252,  28,
    255, 183,  15, 255,  62,   0, 183, 255, 251,  27, 253,   7,  63, 253, 191, 145,
     55,   0, 255, 192, 111, 240, 239, 254, 255,  27,   4,   0, 240,   0,  71,   0,
     30, 192,   0,  20, 159,  64, 127, 189, 129, 224, 187,   7, 179,   0,  63, 127,
      0,  63,  17,   0,  63,   1, 127, 242, 111, 255, 191, 153,  26,   0, 231, 127,
    255,  32, 127, 251, 127, 180, 203,   0, 191, 253, 123,   1, 255, 224,  11,   0,
    239, 111, 255,  67, 100, 222, 255, 235, 191, 231, 223, 223, 255, 123,  95, 252,
     63, 255, 247,  15, 219,   7, 128,  63,   0,  64, 127, 111, 143,   8, 150, 254,
    247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 238, 251
};

static UINT8 alphabetic_table_2[1904] = {
      0,   0,   0,   0,   1,   2,   1,   2,   0,   0,   3,   4,   5,   6,   5,   6,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   7,   8,   9,   0,
      0,   0,   0,   0,  10,   0,   0,  11,  12,   5,  13,   5,   5,   5,   5,  14,
      5,   5,   5,   5,   5,   5,   5,   5,  15,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   1,   5,  16,   5,   5,  17,   0,   0,  18,  19,   5,  20,  21,
      0,   2,   5,   5,   5,  22,  23,   5,   5,   5,   5,   5,   5,  24,  25,  26,
      0,   5,   5,   5,  27,   5,   5,   5,   5,   5,   5,   8,  28,   5,   2,  29,
      5,  30,  31,   0,   5,  17,   2,   5,  32,   0,   5,   5,  33,  34,  35,   5,
      5,   5,   5,  36,  37,  38,  39,   1,  40,  41,  42,  43,  44,  45,  39,  46,
     47,  41,  42,  48,  49,  50,   0,  51,  52,  13,  42,  53,  54,  55,  39,  56,
     57,  41,  42,  53,  58,  59,  39,  60,  61,  62,  63,  64,  65,  66,   0,   0,
     67,  68,  42,  69,  70,  71,  39,   0,  67,  68,  42,  72,  70,  73,  39,  74,
     37,  68,   5,  75,  76,  77,  39,  28,  78,  79,   5,  80,  81,  82,   0,  83,
      1,   5,   5,   2,  84,   0,   0,   0,  85,   5,  86,  87,  88,  89,   0,   0,
     55,   0,   0,   0,  22,   5,  31,   1,  90,  22,   5,  31,   0,   0,   0,   0,
      5,   5,   5,  91,   0,   5,   5,   5,   5,  92,   5,   5,  93,   5,   5,  94,
      5,   5,   5,   5,  95,  96,   5,   5,  95,   5,   5,  97,  98,   6,   5,   5,
      5,  98,   5,   5,   5,   2,   0,   0,   5,   0,   5,   5,   5,   5,   5,  99,
      1,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5, 100,   5,   1,   2,   5,   5,   5,   5, 101,  17,
      5, 102,   5,  39,   5,  39,  37, 103,   5,   5,   5, 104,  17, 105,   0,   0,
      0,   0,   5,   5,   5,   5,   5,  17,   5,   5,   2,   5,   5,   5,   5,  51,
      5, 106, 107,  17,   0,   5, 108, 109,   5,   5, 107,   5,  33,   0,   0,   0,
      5, 107,   5,   5,   5, 106,   1, 109,   0,   0, 110, 111, 112,   0,   0,   0,
      5,   5,   5, 113,  24,   0,   0,   0,   5,   5, 114,  28,   5,   5,  14,   8,
      5,   5,   5, 115,  27,  28,   5, 108,  17,   5,   5,  75,   0,   0, 116, 117,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0, 118, 109,
      5,  99,   5,   5,  99, 119,   5, 108,   5,   5,   5, 120, 121, 122,  31, 121,
      0,   0,   0,   0,   0,   0,   0, 123,   0,  31,   0,   0,   0,   0,   0,   0,
    124, 125, 126, 114, 127,   0,   5,   5,  17,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   5,   5,  33,   0,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5, 129,  83,
      5,   5,  93,   5,   5,   5, 130,   0,   5, 115, 131, 131, 131, 131,   5,   5,
      0,   0, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    132,   0, 133, 134,   1,   5,   5,   5,   5, 135,   1,   5,   5,   5,   5,  94,
    136,   5,   5,   1,   5,   5,   5,   5, 106,   0,   5,   5,   0,   0,   0,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   5,   5,  31,   0,   0,   0,   0,   5,   5, 108,
     31,   5, 137,   0,   5,   5, 106, 138,   5,   5,   5,   5,   5,   5,   5,   0,
      0, 118, 139,   5,   5,   5,   5,   5, 140,   5,   5,   5,   2, 141,   0, 139,
     14,   5, 142,   0,   5,   5,   5,  39,   5,   5,   5,   5, 143,   0,   0, 144,
     28,   5,   2,   5,   5,  21,   5,  31,   5,   5,   5, 145, 111,   0,   5, 146,
      5,   5,   5, 115, 108,   0,   5,  79,   5,   5,   5, 106, 147, 148,   5, 149,
    150, 151, 131,   5,   5,  94,  33,   5,   5,   5,   5,   5,   5,   5,   2,   0,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  39,   5, 152,   5,   5, 107,
      5,   5,   5,   5,   5,   5, 108,   5,   5,   5,   5,   5,   5,  33,   0,   0,
    115, 153,  42, 154, 155,   5,   5,   5,   5,   5,   5,   8,   0, 156,   5,   5,
      5,   5,   5, 108,   0,   5,   5,   5,   5, 139,   5,   5, 142,   0,   0, 107,
      0,   0,   0,   0,   0,   0,   0, 157,   5,   5,   5,   5,   5,   5,   5,  31,
      0,   0,   1,   2,   1,   2, 128,   5,   5,   5,   5, 106, 158, 159,   0,   0,
     36,   5,   6, 160, 108, 108,   0,   0,   5,   5,   5,   5,   5,   5,   5,   2,
      0,   0,   0,   0,   5,   5,   5, 109,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   5,  31,   5,   5,   5,  55,   0,   0,
      5,   5,  27,   5,   2,   5,   5,   2,   5, 108,   5,   5, 161, 162,   0,   0,
      5,   5,   5,   5,   5,   5,   5,   5,   5, 108,   0,   5,   5, 161,   5, 107,
      5,   5, 142,   5,   5,   5,  39,  94,  94, 163,  13, 164,   0,   0,   0,   0,
      5,   5,   5, 115,   5,  51, 142,   0,  14,   5,   5, 165,   0,   0,   0,   0,
    166,   5,   5, 167,   5,  51,   5, 115,   5, 106,   0,   0,   0,   0,   5, 168,
      5,  51,   5,  33,   0,   0,   0,   0,   5,   5,   5, 169,   0,   0,   0,   0,
    170, 171,   5,  51,   0,   0,   5,  31,   5,  31,   0,   0,  22,   5, 109,   0,
      5,   5,   5,  51,   5,  51,   5,  21,   5,   8,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,  17,   0,   0,   0,   5,   5,   5,  21,   5,   5,   5,  21,
      5,   5, 142,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   5,   5, 172,   8,   0,   0,   0,   0,
      5,  31, 110,   5,  51,   0,   0,   5,   8,   0,   0,   5, 109,   0,   5, 115,
      5,   5,   5,   5,  51,   0,   0, 162, 139,   5,   5,  17, 173,   5,  17,   0,
      5,   5,   5,  21, 174,   5,   5, 175,   5,   5,   5,   5, 176, 177,   0,   0,
      5,  13,   5, 178,   0,   0,   0,   0, 179,  18,  17,   5,   5,   5,  17,   0,
     40,  41,  42,  53,  58, 180,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5, 181, 111,   8,   0,   5,   5,   5,   5, 182,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   5,   5,   5, 183,   0, 184,   0,   0,
      5,   5,   5, 106, 185,   0,   0,   0,   5,   5,   5, 186,   0,   0,   0,   0,
      5,  75,   2,   0, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,  17,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,   0, 111,
    187, 188,   5, 189,  21,   0,   0,   0,   0,   0,  30,   5,   5,  30, 190,   0,
      5,   5,   5, 191,   0,   5,   5,   5,   5, 192,   0,   5,   5,   5,   5,  17,
     42,   5,   5, 131,  55,   0,   0, 139,   5, 139,  22, 115,   0,   0,   0,   0,
    193,   5,   5, 194, 195,   0, 196,   5, 106, 197,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5, 115,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   5,   5,   5,  33,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   5,   5, 106,   0,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,   5,   5,  55,
      5,   5, 106,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,  17,   5, 106,   0,   5,   5,   5,   5, 106,   0,   5, 108,   0,
      5,   5,   5,   0,  39,   0, 156, 198,   5,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   5,   5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,  20,   5,   5,   5, 130,   5,   0,   0,   0,   0, 199,   8,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5, 142,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  51,   0,   0,
     17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 200,
      5,   5,  21,   0,   0,  21, 174,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5, 107,
      5,   5,   5,   5,   5,   5,   2,  31,  17, 201,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   5, 157,   5,   5,   5,  37, 202, 203, 113,   5,   5,   5,
    204, 205,   5, 206, 207,  68,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5, 208,   5,  68,  94,   5,  94,
      5, 157,   5, 157, 106,   5, 106,   5,  42,   5,  42,   5, 209,   0,   0,   0,
      5, 106,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6, 140, 210,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,  31, 211, 212,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   5, 108,   0,   5,   5, 107,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 213, 106,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5, 109,   0,   0,   0,
      5,   5,   5,   5, 214,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    113,   5, 215, 216, 217, 218, 219, 220, 221, 107, 222, 107,   0,   0,   0,   0,
      0,   0,   0,   5,  33,   5,  33,   5,  33,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,
      5,   5,   5,  17,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5, 108,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   8,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  55,   0,
      5, 108,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 alphabetic_table_3[448] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  39,   1,  40,  41,  42,  43,  44,  45,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  46,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  47,  48,   1,  49,  50,  51,
     52,  53,  54,  55,  56,  57,   1,  58,  59,  60,  61,  62,  63,  64,  65,  66,
     67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  31,  78,  79,  80,  81,
      1,   1,   1,  82,  83,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  85,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  95,
      1,  96,  97,  31,  31,  31,  31,  31,  31,  31,  31,  31,  98,  31,  31,  31,
     31,  31,  31,  31,  99, 100, 101, 102,  31,  31,  31,  31,  31,  31,  31, 103,
    104, 105, 106,  31,  31,  31,  31, 107, 108, 109,  31,  31,  31,  31, 110,  31,
     31, 111,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 112,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 113, 114,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 115,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 116,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 117,  31,  31,  31,  31,  31,
      1,   1,   1, 118,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 alphabetic_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,   8,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_alphabetic(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = alphabetic_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = alphabetic_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0xF;
    block = alphabetic_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = alphabetic_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Alphanumeric. */

static UINT8 alphanumeric_table_1[436] = {
      0,   0, 255,   3, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    195, 255,   3,   0,  31,  80,  32,   0, 223, 188,  64, 215, 251, 255, 191, 255,
      3, 252, 127,   2, 255,   1, 255, 191, 182,   0, 255, 135,   7,   0, 255, 254,
    255, 195, 239,  31, 254, 225, 255, 159,   0, 224,  48,   4, 255, 252, 255,  31,
    255, 126, 240, 255, 248,   3, 255, 239, 255, 223, 225, 255, 207, 255, 239, 159,
    249, 255, 255, 253, 197, 227, 159,  89, 128, 176,   3,  16, 238, 135, 109, 195,
    135,  25,   2,  94, 192, 255,  63,   0, 238, 191, 237, 227, 191,  27,   1,   0,
      0,  30, 238, 159, 159,  25, 192, 176,   2,   0, 236, 199,  61, 214,  24, 199,
    199,  29, 129,   0, 239, 223, 253, 255, 255, 227, 223,  29,  96,  39, 239, 227,
     96,  96,   6,   0, 255, 231, 223,  93, 240, 128,   0, 252, 238, 255, 127, 252,
    251,  47, 127, 128,  95, 255,  12,   0, 127,  32, 214, 247, 175, 255, 255,  59,
     95,  32, 255, 243,   3, 255, 127, 249, 255,  63, 191,  32, 255, 247, 255,  61,
    127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  15, 128,  15,   0,  13,   0,
    128,  16, 255, 127, 255,  15,  31,   0, 128,   0,   0, 128,   1, 112, 239, 255,
    127,   0,   0, 222, 111,   4, 128, 255, 255, 170, 223,  95, 220,  31, 207,  15,
      2, 128, 132, 252,  47,  62,  80, 189, 224,  67,  31, 120, 255, 128, 127, 127,
    224,   0, 254,   3,  62,  31, 127, 224, 224, 255, 240, 143, 252, 255, 255, 249,
    235,   3, 255,   0,  47,   0, 252, 232, 247, 255,   5,   0,   0,  56,  60,   0,
    126, 126, 126,   0, 127, 248, 248, 224, 127,  95, 219, 255, 248, 255, 223, 255,
    252, 252, 252,  28, 255, 183,  15, 255,  62,   0, 183, 255, 251,  27, 253,   7,
     63, 253, 191, 145,  55,   0, 255, 192, 111, 240, 239, 254, 255,  27,   4,   0,
    199, 255, 240,   0,  71,   0,  30, 192, 255,  23, 159,  64, 127, 189, 129, 224,
    187,   7, 255, 131, 179,   0,  63, 127,   0,  63,  17,   0,  63,   1, 127, 242,
    111, 255, 191, 153,  26,   0, 231, 127, 255,  32, 127, 251, 127, 180, 203,   0,
    191, 253, 123,   1, 255, 224,  11,   0, 239, 111, 255,  67, 100, 222, 255, 235,
    191, 231, 223, 223, 255, 123,  95, 252,  63, 255, 247, 207, 219,   7, 128,  63,
    127, 111, 143,   8, 150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94,
    255, 251, 238, 251
};

static UINT8 alphanumeric_table_2[1920] = {
      0,   0,   0,   1,   2,   3,   2,   3,   0,   0,   4,   5,   6,   7,   6,   7,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   8,   9,  10,   0,
      0,   0,   0,   0,  11,   0,   0,  12,  13,   6,  14,   6,   6,   6,   6,  15,
      6,   6,   6,   6,   6,   6,   6,   6,  16,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   2,   6,  17,   6,   6,  18,   0,   0,  19,  20,   6,  21,  22,
      0,   3,   6,   6,   6,  23,  24,   6,   6,   6,   6,   6,   6,  25,  26,  27,
      0,   6,   6,   6,  28,   6,   6,   6,   6,   6,   6,   9,   6,   6,   3,  29,
      6,  30,  31,   0,   6,  18,   3,   6,  32,   0,   6,   6,   1,  33,  34,   6,
      6,   6,   6,  35,  36,  37,  38,   2,  39,  40,  41,  42,  43,  44,  38,  45,
     46,  40,  41,  47,  48,  49,  50,  51,  52,  14,  41,  53,  54,  55,  38,  56,
     57,  40,  41,  53,  58,  59,  38,  60,  61,  62,  63,  24,  64,  65,  50,   0,
     66,  67,  41,  68,  69,  70,  38,   0,  66,  67,  41,  71,  69,  72,  38,  73,
     36,  67,   6,  74,  75,  76,  38,  77,  78,  79,   6,  80,  81,  82,  50,  83,
      2,   6,   6,   3,  84,   1,   0,   0,  85,   6,  86,  87,  88,  89,   0,   0,
     55,   0,   1,   0,  23,   6,  31,   2,  90,  23,   6,  31,   0,   0,   0,   0,
      6,   6,   6,  91,   1,   6,   6,   6,   6,  92,   6,   6,  93,   6,   6,  94,
      6,   6,   6,   6,  95,  96,   6,   6,  95,   6,   6,  97,  98,   7,   6,   6,
      6,  98,   6,   6,   6,   3,   0,   0,   6,   0,   6,   6,   6,   6,   6,  99,
      2,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,  27,   6,   2,   3,   6,   6,   6,   6, 100,  18,
      6, 101,   6, 102,   6, 102,  36, 103,   6,   6,   6,  38,  18, 104,   1,   0,
      0,   1,   6,   6,   6,   6,   6,  18,   6,   6,   3,   6,   6,   6,   6,  51,
      6, 105, 106,  18,  50,   6,  92, 107,   6,   6, 106,   6,   1,   1,   0,   0,
      6, 106,   6,   6,   6, 105,   2, 107,   1,   1, 108, 109, 110,   0,   0,   0,
      6,   6,   6, 111,  25,   1,   0,   0,   6,   6,  89,   6,   6,   6,  15,   9,
      6,   6,   6, 112,  68,   6,   6,  92,  18,   6,   6,  74,   0,   0, 113, 114,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0, 115, 107,
      6,  99,   6,   6,  99, 116,   6,  92,   6,   6,   6, 117, 118, 119,  31, 118,
      0,   0,   0,   0,   0,   0,   0, 120,   0,  31,   0,   0,   0,   0,   0,   0,
    121, 122, 123,  89, 124,   0,   6,   6,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50,   6,   6,   1,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 125,  83,
      6,   6,  93,   6,   6,   6, 126,   0,   6, 112, 127, 127, 127, 127,   6,   6,
      0,   0, 109,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    128,   0, 129, 130,   2,   6,   6,   6,   6, 131,   2,   6,   6,   6,   6,  94,
    132,   6,   6,   2,   6,   6,   6,   6, 105,   0,   6,   6,   0,   0,   0,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,  31,   0,   0,   0,   0,   6,   6,  92,
     31,   6, 106,   0,   6,   6, 105, 133,   6,   6,   6,   6,   6,   6,   6,   0,
      0, 115, 134,   6,   6,   6,   6,   6, 135,   6,   6,   6,   3, 136,   0, 134,
     15,   6, 137,   0,   6,   6,   6, 102,   6,   6,   6,   6, 138,   1,   0, 139,
      6,   6,   3,   6,   6,  22,   6,  31,   6,   6,   6, 140, 109,   1,   6, 105,
      6,   6,   6, 112,  92,   1,   6,  79,   6,   6,   6, 105, 141, 142,   6, 143,
    144, 145, 127,   6,   6,  94,   1,   6,   6,   6,   6,   6,   6,   6,   3,   1,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 102,   6, 146,   6,   6, 106,
      6,   6,   6,   6,   6,   6,  92,   6,   6,   6,   6,   6,   6,   1,   0,   0,
    112, 147,  41, 148, 149,   6,   6,   6,   6,   6,   6,   9,   0, 150,   6,   6,
      6,   6,   6,  92,   0,   6,   6,   6,   6, 134,   6,   6, 137,   0,   0, 106,
      0,   0,   0,   0,   0,   0,   0, 151,   6,   6,   6,   6,   6,   6,   6,  31,
      0,   1,   2,   3,   2,   3,  50,   6,   6,   6,   6, 105, 152, 153,   0,   0,
     35,   6,   7, 154,  92,  92,   0,   0,   6,   6,   6,   6,   6,   6,   6,   3,
      0,   0,   0,   0,   6,   6,   6, 107,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,  31,   6,   6,   6,  55,   0,   0,
      6,   6,  28,   6,   3,   6,   6,   3,   6,  92,   6,   6, 155, 156,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,  92,   1,   6,   6, 155,   6, 106,
      6,   6, 137,   6,   6,   6, 102,  94,  94, 157,  14, 158,   0,   0,   0,   0,
      6,   6,   6, 112,   6,  51, 137,   0,  15,   6,   6, 159,   0,   0,   0,   0,
    160,   6,   6, 161,   6,  51,   6, 112,   6, 105,   0,   0,   0,   0,   6, 162,
      6,  51,   6,   1,   0,   0,   0,   0,   6,   6,   6, 163,   0,   0,   0,   0,
    164, 165,   6,  51,   0,   0,   6,  31,   6,  31,   0,   0,  23,   6, 107,   0,
      6,   6,   6,  51,   6,  51,   6,  22,   6,   9,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,  18,   0,   0,   0,   6,   6,   6,  22,   6,   6,   6,  22,
      6,   6, 137,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,   6, 166,   9,   0,   0,   0,   0,
      6,  31, 108,   6,  51,   0,   0,   6,   9,   0,   0,   6, 107,   0,   6, 112,
      6,   6,   6,   6,  51,   0,  50, 156, 134,   6,   6,  18, 167,   6,  18,   1,
      6,   6,   6, 168, 169,   6,   6, 170,   6,   6,   6,   6, 171, 172,   0,   0,
      6,  14,   6, 173,   0,   0,   0,   0, 174,  19,  18,   6,   6,   6,  18,   1,
     39,  40,  41,  53,  58, 175, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6, 176, 177,   9,   0,   6,   6,   6,   6, 178,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,   6,   6, 179,   0, 180,   0,   0,
      6,   6,   6, 105, 181,   1,   0,   0,   6,   6,   6, 182,   1,   0,   0,   0,
      6,  74,   3,   1, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,  18,   0,   0,   0,   0,   0,   0,   6,   6,   6,   6,   1, 109,
    183, 184,   6, 185,  22,   1,   0,   0,   0,   0,  30,   6,   6,  30, 186,   0,
      6,   6,   6, 187,   0,   6,   6,   6,   6, 188,   0,   6,   6,   6,   6,  18,
     41,   6,   6, 127,  55,   1,   0, 134,   6, 134,  23, 112,   0,   0,   0,   0,
    189,   6,   6, 190, 191,   1, 192,   6, 105, 193,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6, 112,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   1,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6, 105,   0,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   6,   6,   6,   6,   6,  55,
      6,   6, 105,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,  18,   6, 105,   1,   6,   6,   6,   6, 105,   1,   6,  92,   0,
      6,   6,   6,   0, 102,   1, 150, 194,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   6,   6,   6,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,  21,   6,   6,   6, 126,   6,   0,   0,   0,   0, 195,   9,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 137,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  51,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 196,
      6,   6,  22,   0,   0,  22, 169,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 106,
      6,   6,   6,   6,   6,   6,   3,  31,  18, 197,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6, 151,   6,   6,   6,  36, 198, 199, 111,   6,   6,   6,
    200, 201,   6, 202, 203,  67,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 204,   6,  67,  94,   6,  94,
      6, 151,   6, 151, 105,   6, 105,   6,  41,   6,  41,   6, 205,   6,   6,   6,
      6, 105,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7, 135, 206,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,  31, 207, 197,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  92,   0,   6,   6, 106,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 208, 105,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 107,   0,   0,   0,
      6,   6,   6,   6, 209,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    111,   6, 210, 211, 212, 213, 214, 215, 216, 106, 217, 106,   0,   0,   0,   0,
      0,   0,   0,   6,   1,   6,   1,   6,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,
      6,   6,   6,  18,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,  92,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   9,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  55,   0,
      6,  92,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 alphanumeric_table_3[448] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  39,   1,  40,  41,  42,  43,  44,  45,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  46,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  47,  48,   1,  49,  50,  51,
     52,  53,  54,  55,  56,  57,   1,  58,  59,  60,  61,  62,  63,  64,  65,  66,
     67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  31,  78,  79,  80,  81,
      1,   1,   1,  82,  83,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  85,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  95,
      1,  96,  97,  31,  31,  31,  31,  31,  31,  31,  31,  31,  98,  31,  31,  31,
     31,  31,  31,  31,  99, 100, 101, 102,  31,  31,  31,  31,  31,  31,  31, 103,
    104, 105, 106,  31,  31,  31,  31, 107, 108, 109,  31,  31,  31,  31, 110,  31,
     31, 111,  31,  31,  31,  31,  31,  31,  31,  31,  31, 112,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 113,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 114, 115,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 116,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 117,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 118,  31,  31,  31,  31,  31,
      1,   1,   1, 119,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 alphanumeric_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,   8,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_alphanumeric(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = alphanumeric_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = alphanumeric_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0xF;
    block = alphanumeric_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = alphanumeric_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Any. */

static UINT8 any_table_1[16] = {
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};

static UINT8 any_table_2[16] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 any_table_3[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 any_table_4[17] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0
};

UINT32 lookup_any(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 16;
    block = any_table_4[block];
    offset = (codepoint >> 11) & 0x1F;
    block = any_table_3[(block << 5) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = any_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = any_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for ASCII_Hex_Digit. */

static UINT8 ascii_hex_digit_table_1[32] = {
      0,   0,   0,   0,   0,   0, 255,   3, 126,   0,   0,   0, 126,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 ascii_hex_digit_table_2[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 ascii_hex_digit_table_3[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 ascii_hex_digit_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_ascii_hex_digit(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = ascii_hex_digit_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = ascii_hex_digit_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = ascii_hex_digit_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = ascii_hex_digit_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Bidi_Class. */

static UINT8 bidi_class_table_1[1880] = {
      3,   3,   3,   3,   3,   3,   3,   3,   3,  21,  14,  21,  22,  14,   3,   3,
      3,   3,   3,   3,  14,  14,  14,  21,  22,  13,  13,   7,   7,   7,  13,  13,
     13,  13,  13,   6,   4,   6,   4,   4,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   4,  13,  13,  13,  13,  13,  13,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  13,  13,  13,  13,
      0,   0,   0,  13,  13,  13,  13,   3,   3,   3,   3,   3,   3,  14,   3,   3,
      4,  13,   7,   7,   7,   7,  13,  13,  13,  13,   0,  13,  13,   3,  13,  13,
      7,   7,   5,   5,  13,   0,  13,  13,  13,   5,   0,  13,  13,  13,  13,  13,
      0,   0,   0,   0,   0,   0,   0,  13,   0,  13,  13,   0,   0,   0,   0,   0,
      0,   0,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
      0,   0,   0,   0,   0,  13,  13,  13,  13,  13,  13,  13,  13,  13,   0,  13,
     12,  12,  12,  12,  12,  12,  12,  12,   0,   0,   0,   0,  13,  13,   0,   0,
      0,   0,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,  13,  13,   0,  13,
      0,   0,   0,  12,  12,  12,  12,  12,  12,  12,   0,   0,   0,   0,   0,   0,
      0,   0,  13,   0,   0,  13,  13,   7,  17,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  17,  12,  17,  12,  12,  17,  12,  12,  17,  12,
     17,  17,  17,  17,  17,  17,  17,  17,   2,   2,   2,   2,   2,   2,  13,  13,
      1,   7,   7,   1,   4,   1,  13,  13,  12,  12,  12,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  12,  12,  12,  12,  12,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   7,   2,   2,   1,   1,   1,
     12,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  12,  12,
     12,  12,  12,  12,  12,   2,  13,  12,  12,  12,  12,  12,  12,   1,   1,  12,
     12,  13,  12,  12,  12,  12,   1,   1,   5,   5,   1,   1,   1,   1,   1,   1,
      1,  12,   1,   1,   1,   1,   1,   1,  17,  17,  17,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  17,  17,  13,  13,  13,  13,  17,  17,  17,  12,  17,  17,
     17,  17,  17,  17,  17,  17,  12,  12,  12,  12,  17,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  17,  12,  12,  12,  17,  12,  12,  12,  12,  12,  17,  17,
     17,  12,  12,  12,  17,  17,  17,  17,   2,   2,   1,   1,   1,   1,   1,   1,
      1,   1,  12,  12,  12,  12,  12,  12,  12,  12,   2,  12,  12,  12,  12,  12,
     12,  12,  12,   0,   0,   0,   0,   0,   0,   0,  12,   0,  12,   0,   0,   0,
      0,  12,  12,  12,  12,  12,  12,  12,  12,   0,   0,   0,   0,  12,   0,   0,
      0,   0,  12,  12,   0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  12,   0,   0,   0,   0,  12,  12,  12,  12,   0,   0,   0,
      0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   7,   7,   0,   0,   0,   0,
      0,   0,   0,   7,   0,   0,  12,   0,   0,  12,  12,   0,   0,   0,   0,   0,
      0,  12,  12,   0,   0,   0,   0,  12,  12,   0,   0,  12,  12,  12,   0,   0,
     12,  12,   0,   0,   0,  12,   0,   0,   0,  12,  12,  12,  12,  12,   0,  12,
      0,   7,   0,   0,   0,   0,   0,   0,   0,   0,  12,  12,  12,  12,  12,  12,
      0,   0,   0,   0,  12,   0,   0,  12,   0,   0,   0,   0,   0,  12,  12,   0,
      0,   0,  12,   0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,
     13,   7,  13,   0,   0,   0,   0,   0,  12,   0,   0,   0,  12,   0,   0,   0,
      0,   0,   0,   0,  12,   0,  12,  12,  12,   0,   0,   0,   0,   0,  12,  12,
     12,   0,  12,  12,  12,  12,   0,   0,  13,  13,  13,  13,  13,  13,  13,   0,
      0,   0,   0,   0,  12,  12,   0,   0,   0,   0,   0,  12,  12,   0,   0,   0,
      0,   0,  12,  12,  12,   0,  12,   0,   0,  12,   0,   0,  12,  12,  12,  12,
     12,  12,  12,   0,   0,   0,   0,   7,   0,   0,   0,   0,   0,   0,   0,  12,
     12,  12,  12,  12,  12,  12,  12,   0,  12,  12,  12,  12,  12,   0,   0,   0,
     12,  12,  12,  12,  12,  12,   0,   0,   0,   0,   0,   0,   0,  12,   0,  12,
      0,  12,  13,  13,  13,  13,   0,   0,  12,  12,  12,  12,  12,   0,  12,  12,
      0,   0,   0,   0,   0,  12,  12,  12,   0,   0,   0,   0,   0,   0,  12,   0,
     12,   0,  12,  12,  12,  12,  12,  12,   0,  12,  12,   0,   0,  12,  12,   0,
     12,  12,   0,   0,   0,   0,  12,  12,   0,   0,  12,   0,   0,  12,  12,   0,
     13,  13,   0,   0,   0,   0,   0,   0,  22,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  13,  13,   0,   0,   0,   0,   0,  12,  12,  12,   0,   0,   0,
      0,   0,   0,   0,  12,  12,   0,  12,  12,  12,  12,  12,   0,   0,   0,   0,
      0,   0,   0,   7,   0,  12,   0,   0,  13,  13,  13,  12,  12,  12,   3,  12,
     12,  12,  12,   0,   0,   0,   0,  12,   0,  12,  12,  12,   0,   0,   0,   0,
     13,   0,   0,   0,  13,  13,   0,   0,   0,   0,   0,   0,   0,   0,  13,  13,
     12,   0,   0,  12,   0,   0,   0,   0,  12,   0,  12,   0,   0,  12,  12,  12,
     12,  12,  12,  12,  12,   0,   0,  12,  12,  12,  12,   0,  12,   0,   0,   0,
      0,   0,  12,  12,  12,  12,   0,   0,  12,  12,   0,  12,  12,  12,   0,   0,
     12,  12,   0,   0,   0,  12,   0,  12,   0,   0,   0,   0,  12,  12,  12,  12,
     12,  12,  12,  12,   0,   0,  12,  12,  12,  12,  12,   0,  12,  12,  12,  12,
      0,   0,   0,   0,   0,  13,   0,  13,   0,   0,   0,   0,   0,  13,  13,   0,
     22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,   3,   3,   3,   0,  17,
     22,  14,   9,  18,  15,  11,  20,   4,   7,   7,   7,   7,   7,  13,  13,  13,
     13,  13,  13,  13,   4,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  22,
      3,   3,   3,   3,   3,   3,  10,  19,   8,  16,   3,   3,   3,   3,   3,   3,
      5,   0,   0,   0,   5,   5,   5,   5,   5,   5,   6,   6,  13,  13,  13,   0,
      7,   7,   7,   7,   7,   7,   7,   7,  13,  13,   0,  13,  13,  13,  13,   0,
      0,   0,   0,   0,  13,   0,  13,  13,  13,   0,   0,   0,   0,   0,  13,  13,
     13,  13,  13,  13,   0,  13,   0,  13,   0,  13,   0,   0,   0,   0,   7,   0,
      0,   0,  13,  13,   0,   0,   0,   0,  13,  13,  13,  13,  13,   0,   0,   0,
      0,   0,  13,  13,  13,  13,   0,   0,   0,  13,  13,  13,   0,   0,   0,   0,
     13,  13,   6,   7,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,   0,   0,
     13,  13,  13,  13,  13,   0,  13,  13,  13,  13,  13,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   0,   0,   0,   0,  13,  13,  13,  13,   0,  13,  13,  13,
     13,  13,  13,  13,   0,   0,  13,  13,  13,  13,  13,   0,   0,   0,   0,  12,
      0,  13,  13,  13,  13,  13,  13,  13,  13,  13,   0,  13,  13,  13,  13,  13,
     13,  13,  13,  13,   0,   0,   0,   0,  22,  13,  13,  13,  13,   0,   0,   0,
      0,  12,  12,  13,  13,   0,   0,   0,   0,   0,   0,  13,   0,   0,   0,   0,
      0,   0,   0,   0,  13,  13,  13,   0,   0,   0,   0,   0,  13,  13,  13,  13,
     12,  12,  12,  13,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  13,  13,
      0,   0,   0,   0,   0,   0,  12,  12,   0,   0,  12,   0,   0,   0,  12,   0,
      0,   0,   0,  12,   0,   0,   0,   0,  13,  13,  13,  13,  12,   0,   0,   0,
      7,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,   0,   0,  12,  12,
     12,  12,   0,   0,  12,  12,   0,   0,   0,  12,  12,  12,  12,  12,  12,   0,
     12,   0,  12,  12,  12,   0,   0,  12,   0,   0,   0,   0,   0,  17,  12,  17,
     17,   6,  17,  17,  17,  17,  17,  17,   1,   1,   1,   1,   1,   1,  13,  13,
      1,   1,   1,   1,   1,   1,   1,  13,   1,   1,   1,   1,   1,  13,  13,  13,
      4,  13,   4,   0,  13,   4,  13,  13,  13,  13,  13,  13,  13,  13,  13,   7,
     13,  13,   6,   6,  13,  13,  13,   0,  13,   7,   7,  13,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   1,   3,   0,  13,  13,   7,   7,   7,  13,  13,
      7,   7,  13,  13,  13,   7,   7,   0,   3,  13,  13,  13,  13,  13,   3,   3,
      0,  13,   0,   0,   0,   0,   0,   0,  12,   5,   5,   5,   5,   5,   5,   5,
     17,  17,  17,  17,  17,  17,  17,  13,  17,  12,  12,  12,  17,  12,  12,  17,
     17,  17,  17,  17,  12,  12,  12,  12,  12,  12,  12,  17,  17,  17,  17,  12,
     17,  17,  17,  17,  17,  12,  12,  17,  17,  13,  13,  13,  13,  13,  13,  13,
      1,   1,   1,   1,  12,  12,  12,  12,   2,   2,   2,   2,   2,   2,   2,  17,
     17,  17,  17,  12,  12,  17,  17,  17,  17,  17,  12,  12,  12,  12,  17,  17,
     12,   0,   0,  12,  12,   0,   0,   0,   0,   0,   0,  12,  12,  12,  12,   0,
     12,  12,  12,  12,   0,  12,  12,  12,   0,  12,  12,  12,  12,   0,   0,  12,
     12,  12,   0,   0,  12,   0,  12,  12,  12,   0,  12,   0,   0,   0,   0,  12,
     12,   0,  12,  12,   0,   0,   0,   0,  12,  12,  12,   0,   0,  12,   0,  12,
      0,   0,   0,  12,   0,  12,   0,   0,  12,  12,  12,  12,  12,  12,   0,  12,
      0,   0,  12,  12,  12,  12,   0,  12,   0,   0,   0,  12,  12,   0,  12,   0,
     12,   0,   0,  12,  12,  12,  12,   0,  12,   0,  12,  12,   0,  12,  12,   0,
      0,   0,  12,   0,  12,  12,   0,  12,  13,  13,  13,  13,  13,   7,   7,   7,
      7,  13,  13,  13,  13,  13,  13,  13,   0,   0,  13,   0,  12,   0,   0,   0,
      3,   3,   3,   3,   0,   0,   0,   0,   0,   0,   0,   3,   3,   3,   3,   3,
      3,   3,   3,  12,  12,  12,  12,  12,  12,  12,  12,   0,   0,  12,  12,  12,
     13,  13,  12,  12,  12,  13,   0,   0,   0,   0,   0,   0,   0,  13,   0,   0,
      0,   0,   0,   0,   0,   0,   5,   5,  12,   0,   0,  12,  12,  12,  12,  12,
     12,  12,   0,  12,  12,   0,  12,  12,   0,   0,   0,   0,   0,   0,   0,   7,
     12,  12,  12,  12,  12,  12,  12,  17,  12,  12,  12,  17,  17,  17,  17,  17,
     13,  13,   1,   1,   1,   1,   1,   1,   5,   5,   5,  13,  13,  13,  13,  13,
     13,  13,  13,   0,  13,  13,  13,  13,   5,   5,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3,   3
};

static UINT8 bidi_class_table_2[1968] = {
      0,   1,   0,   2,   3,   4,   5,   6,   7,   8,   8,   9,   7,   8,   8,  10,
     11,   0,   0,   0,  12,  13,  14,  15,   8,   8,  16,   8,   8,   8,  16,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  17,
     18,  19,  18,  19,  20,  21,  19,  19,  22,  22,  22,  22,  22,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  23,  24,  25,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  24,   8,  26,  27,   8,   8,   8,   8,   8,   8,
      8,  28,  29,  22,  22,  22,  22,  30,  31,  32,  32,  32,  32,  32,  32,  32,
     33,  34,  22,  35,  36,  36,  36,  36,  36,  37,  22,  22,  38,  39,  40,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,  42,  43,  44,   5,  45,
     36,  36,  46,  36,  36,  36,  22,  22,  22,  35,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  41,  22,  40,  36,  32,  32,  32,  32,  32,  47,  48,  49,
     32,  32,  50,  51,  52,  53,  32,  32,  32,  32,  32,  54,  36,  36,  36,  36,
     36,  36,  55,  22,  36,  36,  36,  36,  36,  56,  22,  22,  57,  22,  22,  22,
     58,   8,   8,   8,   8,   8,   8,  59,  60,  61,  60,   8,  62,   8,   8,   8,
     63,   8,   8,   8,   8,   8,   8,  64,  65,  66,   8,   8,  62,   8,  67,  68,
     69,   8,   8,   8,   8,   8,   8,  64,  70,  71,  63,   8,   8,   8,  72,   8,
     73,  61,   8,   8,  62,   8,  74,  75,  63,   8,   8,   8,   8,   8,   8,  76,
     65,  66,  77,   8,  62,   8,   8,   8,  78,   8,   8,   8,   8,   8,   8,   8,
     79,  66,   8,   8,   8,   8,   9,  80,  81,   8,   8,   8,   8,   8,   8,  82,
     83,  84,  77,   8,  62,   8,   8,  85,   8,  86,   8,   8,  62,   8,   8,   8,
     27,   8,   8,   8,   8,   8,   8,  87,  65,  66,   8,   8,  62,   8,   8,   8,
     63,   8,   8,   8,   8,   8,   8,   8,   8,  78,  88,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  89,  90,  91,  92,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  89,  93,   8,  94,   8,   8,   8,   8,   8,   8,
      8,   8,   8,  27,   8,   8,  95,  96,   8,   8,   8,   8,   8,   8,  60,  92,
     97,  98,  22,  60,  22,  22,  22,  93,  99,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,  98, 100, 101,   8,   8,   8, 102,  79,   8,  65,   8,
    103,  66,   8,  66,   8,   8,   8,   8,   8,   8,   8,  98,   8,   8,   8,   8,
      8,   8,  19, 104,   8,   8,   8,   8,   7,   8,   8,   8,   8,   8,   8,   8,
    105,   8,   8, 106,   8,   8,   8,   8,   8,   8, 107,   8,   8,   8,  62,   8,
      8,   8,  62,   8,   8,   8,  62,   8,   8,   8,   8,   8,   8,   8, 108,  94,
     99,  60, 109, 110,   8,   8,  19, 104,  19, 111,   8,   8,   8,   8,   8,   8,
     77,   8,   8,   8,   8,  63,   8,   8,   8,   8,   8,   8, 112,  79,  78, 113,
    114,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8, 115,  19,  19,  19,  19,
      8,   8,  91, 116,   8,   8,   8,   8,   8,   8,  99,  92, 117,  93,  26, 118,
      8,   8,   8,   8,   8,   8,  22,  22,  22,  92,   8,   8,   8,   8,   8,   8,
    109,   8,   8,   8,   8,   8,  82, 119,  78,   8,   8,   8,   8,  26, 109,   8,
     27,   8,   8,   8, 120, 121,   8,   8,   8,   8,   8,   8,  99, 122,  27,   8,
      8,   8,   8,   8,   8, 123, 124,   8,   8,   8, 125,  22, 100,  61,  64,  27,
      8,   8,   8,   8,   8,   8,   8, 126, 104,  20,   8,  20,   8,  20,   8, 127,
    128, 129,  19,  19,  19, 130, 131,  19, 132,  19,  19, 133, 134, 135, 136, 137,
      5, 137,   8,   8, 138, 138, 138, 138, 138, 138,  22,  22,  22,  22,  79,   8,
    139, 104, 140, 141, 142, 143,   8, 144, 145, 146,  19,  19,   8,   8,   8,   8,
      8, 147,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,
     19,  19, 148,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19, 149,   8,
      8,   8,   8,   8,   8,   8,   8,   9,  19,  19, 150,  19,  19,  19,  19,  19,
     19,  19,  19,  19,  85,   8,   8,   8,  19, 151,   8,   8,  19,  19,  19,  19,
     19,   5,   5, 152,   8,   8,   8,   8,   8,   8,   8,   8,   8,  18,  19,  19,
     19,  19,  19,  19,  19, 153,  19,  19,  19,  19,  19,  19,  19,  19, 154,  19,
     19,  19,  21,  19,  19,  19,  19,  19,   8,   8,   8,   8,  20, 155,  27, 156,
      8,   8,   8,   8,   8,   8,   8,  91,   8,   8,   8,   8,  22,  22,  22,  22,
     19,  19,  19, 149,   8,   8,   8,   8,  19,  19,  19, 157,  19,  19,  19,  19,
     19,  19,  19,  19,  19,  19, 158,   8,  19,  19, 149,   8,   8,   8,  19, 158,
    159,  19,  19,  19,   7, 120, 141,  20,   8,   8,   8, 160,   7,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8, 161,  19,  19,  19,  19, 158,   8,   8,   8,
      8,   8,   8, 127,   8,   8,   8,   8,   8,   8,  19,  19,   8,   8,   8, 162,
      8,   8,   8,   8,   8,   8, 156,  19,   8, 163,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  16, 151,   8,   8,   8, 115,   8,   8,   8,  16,
      8,   8,  19,  19,  19,  19,  19,  19,  85,   8,   8,   8,   8,   8,   8,   8,
      8,  20,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  91, 164, 165,
      8,   8,   8, 166,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  27,   8,
     19,  19,  19,  19, 104,   8,   8,   8,   8,   7,   8,   8,   8,   8,   8,   8,
    167, 168,   8,   8,  77, 169,   8, 170,   8,   8,   8,   8,   8,   8, 163,   8,
     86,   8,   8,   8,  22,  22,  27,  91,   8,   8,   8,   8, 166,  94,   8,   8,
     91,  22,  27,   8,   8,   8,   8,   8,  58,   8,   8,   8,   8,   8, 171, 172,
      8,   8,   8,   8,  66,   8,   8,   8,   8,   8,   8,   8,   8, 173, 101,   8,
    168,  64,   8,   8,   8,   8,   8,  64,   8,   8,   8,   8,   8,   8, 174,  83,
     63,   8,   8,   8,   8,  86,  99,   8,   8,   8,   8,   8,   8, 144,   8,   8,
      8,   8,   8,   8,  66,  61,   8,   8,   8,   8,   8, 175,  32, 176,  32,  32,
     32,  32,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 177,
     19,  19,  36,  36,  36,  36,  36,  36,  36, 178,   0,   0,   0,   0,  36, 179,
     22,  22,  19, 104,  22,  22,  19,  19,  19,  19, 180, 181, 182, 183,  36,  36,
     36,  36,  36,  36,  36,  36,  36, 184, 185,   4,   5,   6,   7,   8,   8,   9,
      7,   8,   8,   9, 149,   8,   8,   8,   8,   8,   8,   8, 186,  85,   0, 187,
    188,   8,   8,   8,   8,   8,   8,   8,  19, 145,  19, 145,   7,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,  66,   8,   8,   8,   8, 189,   5,   5, 152,
      8,   8,   8,   8,   8,   8, 166,  58,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32, 190,  32,  32,  32,  32, 191, 192,  32,  32,  32,  32,  32, 193,
     32,  32,  32,  32, 194,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 195,
     36,  36,  36,  36, 196,  36,  38,  55,  32,  32,  32,  32,  38,  38,  38, 197,
     32,  32,  32,  32,  32, 198,  32,  32,  32,  32,  32,  32,  32,  32,  36,  36,
     41,  22,  40,  36,  36,  36,  32,  32, 199,  32,  32,  32,  32,  32,  32,  32,
     63,   8,   8,   8,   8,   8,   8,  22,  92,   8,  18,  19, 149,   8, 200,  91,
     27,   8,   8,   8,   8,   8, 201,  69,  58,   8,   8,   8,  91, 202,  93,   8,
      8,   8,   8,   8,   8,   8, 168,   8,  27,   8,   8,   8,   8,   8, 166,  92,
      8, 203,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  91, 204,  99,
      8,   8,   8,  91,  26,  58,   8,   8,  79,   8,   8,   8, 166,  93,  93,   8,
      8,   8,   8,   8,   8,   8,   8,  22,  88,   8,   8,  99,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  26, 205, 206,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8, 120, 108,  79,   8,   8,  86,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  26, 207,  79,   8,   8,   8,  19, 145,   8,   8,
      8,   8,   8,   8,   8, 208, 209,   8,   8,   8,   8,  98, 210, 109,   8,   8,
      8,   8,   8,   8,   8,  91,  22,  69,   8,   8,   8,   8,   8,   8,   8, 211,
    168,   8,   8,   8,   8,   8,   8,   8,   8,   8, 123,  62,  79,   8,   8,   8,
    173,  69,   8,   8,   8,   8,  26, 212,  91,   8, 173, 113,   8,   8,   8,   8,
      8,  75,  92,  27,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  92,  94,
      8,   8,  75,  22,  22,  75, 213,   8,   8,   8,   8,   8,   8,   8, 173, 214,
    209,   8,   8,   8,   8,   8,   8,   8,   8,   8, 122,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  87,   8,   8,   8,  20, 215, 216,  19, 104,   8,
      8,   8,   8,   8,   8,   8,  93,   8,   8,   8,   8,   8,   8,   8,  92,   8,
      8,  91,   8,   8,   8,   8,   8,   8,   8,  91,  58,   8,   8,   8,   8,   8,
      8,   8,   8,   8, 217,   8,   8,   8,   8,   8,   8,  77, 218,   8,   8,   8,
     22,  22,  22,  22,  22,  94,  22,  22,  92,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,  91,  27, 219, 220, 221, 109,   8,   8,   8, 120,   8,   8,
      8,   8,   8,   8,   8,  17,   8,   8, 222,   8,   8,   8,   8,   8,   8,   8,
     19,  19,  85,   8,   8,   8,   8,   8,   8,   8,   8, 161,   8,   8,   8,   8,
      8,   8, 223,   8,   8,   8,   8,   8,   8,  16,   8,   8,   8,   8,   8,   8,
      8, 188,   8,   8,   8,   8,   8,   8, 161, 224,   5,   5,   5,   5,   5,   5,
     22,  22,  22,  22,  22,  22,  92,  26,  22,  22,  22,  22,  22,  93,  66,   8,
     64,   8,   8,  26,  60,  22,   8,   8,  92,  22,  22, 225, 226,  58,   8,   8,
      8,   8,   8,   8,   8,  99,   8,   8,   8,   8,   8,   8,   8, 123,   8, 227,
     32,  32, 228,  32,  32,  32,  32,  32, 192, 229,  32,  32,  32,  32,  32,  32,
     36,  36,  32,  32,  32,  32,  32,  32,  36,  36,  36,  36,  36,  36, 230,  36,
     19,  19,  19,  19,  19, 158,  19,  19,  19,  19, 158,   8,  19,  85, 156,  19,
    156,  19, 156,  19,  19,  19, 149,   8,   5, 231,   8,   8,   8,  16,   8,   8,
      8,   8,   8,   8,   8,  18,   8,   8,   8,   8,   8,   8,   8, 223,   8,   8,
      8,   8,   8,   8, 149,   8,   8,   8,  19,  19,  19,  20,  19, 145,  19, 145,
     19,  19,  19,   7,  19, 158,   7,   8,  19, 158,  19,  19,  19,  19,  19,  19,
     19,   8,  19, 104,  19,  19,  19,  19,  19,   8,  19,  19,  19, 149, 104,   8,
     19,  19, 158,   8,  19, 149, 145, 145,  85,   8,  19,  19,  19, 145,  19, 151,
    149,   8,  19, 104,  19,   8,  85,   8,  19,  19, 232,  19,  19,  19,  19,  19,
     19, 151,   8,   8,   8,   8,   5, 233,   8,   8,   8,   8,   8,   8,   8, 234,
      0,   0,   0,   0,   0,   0,   0,   0,  22,  22,  22,  22,  22,  22,   0,   0
};

static UINT8 bidi_class_table_3[1152] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   6,   7,   8,   9,  10,
      4,   4,  11,   4,   4,   4,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,
     22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  30,  32,  33,  34,  35,  36,
     37,  38,  28,  39,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,
     52,  53,  54,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  55,  56,   4,
     57,   4,   4,   4,   4,   4,   4,   4,   4,   4,  58,   4,  59,  60,  61,  62,
     63,   4,  64,   4,  65,  66,   4,  67,  68,  69,  70,  71,  72,  73,  74,  75,
     76,   4,   4,  77,   4,   4,   4,   7,   4,   4,   4,   4,   4,   4,  78,  79,
     80,  81,  82,  83,  84,  85,  86,  87,  88,  87,  87,  87,  89,  90,  91,  87,
     92,  93,  94,  95,  87,  87,  87,  87,  87,  87,  96,  87,  87,  87,  87,  87,
      4,   4,   4,   4,  87,  87,  87,  87,  87,  87,  87,  87,  87,  97,  98,  87,
      4,   4,   4,  99,   4, 100,   4, 101,  87, 102, 103, 104,  87,  87,  87, 105,
    106,   4, 107, 108,   4,   4,   4, 109, 110, 111, 112, 113,   4, 114,   4, 115,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,  87,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4, 116, 117,   4,   4,   4,   4, 118, 119, 120, 121, 122,   4, 123,   4,
    124, 125,   4, 126, 127, 128, 129, 130, 131, 132, 133, 134,   4, 135,   4, 136,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 137, 138,  16,  16,
     16,  16,  16,  16, 139, 140,  16, 141, 142, 143,  16, 144, 145, 146,   4, 147,
      4,   4,   4,   4, 148,  87, 149, 150,   4,   4,   4, 151,   4, 152,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
    153, 153, 153, 153, 154, 153, 153, 153, 155, 153, 153, 156, 157, 153, 153, 153,
    153, 153, 153, 153, 158, 153, 153, 153, 153, 159, 160, 153, 161, 162, 163, 153,
    164, 165, 166,  35, 167, 168, 169, 170, 171,   4,   4, 172,  40, 173,   4,   4,
    174, 175, 176, 177,   4,   4, 178, 179, 180, 181, 182,   4, 183,   4,   4,   4,
    184,   4,   4,   4, 185, 186,   4, 187, 188, 189, 190,   4,   4,   4,   4,   4,
    191,   4, 192,   4, 193, 194, 195,   4,   4,   4,   4, 196,   4,   4,   4, 197,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 198, 199,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 200, 201, 202,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4, 203,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 204, 205,   4,   4,
      4,   4,   4,   4,   4, 206, 207, 208,  87, 209,   4,   4,  87, 210,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 211, 212, 213, 214, 215,
      4,   4,   4,   4,   4,   4,   4,   4, 216, 217, 218,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
    219,   4,   4,   4, 199,   4,   4,   4,   4,   4, 220, 221,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
    153, 153, 153, 222, 153, 223, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153,
    153, 161,  16, 153,  16, 224, 153, 153,  16,  16,  16, 225, 153, 153, 153, 153,
    226,  87, 227, 228, 229, 230, 231,   4,   4, 232,   4,   4,  87,  87,  87,  87,
     87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87, 233,  87, 104,  87, 234,
    235, 236, 237,   4,  87,  87,  87,  87,  87, 238, 239, 240,  87,  87, 241, 242,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 243,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 243,
    244, 244, 244, 244,   7,   7,   7, 245, 244, 244, 244, 244, 244, 244, 244, 244,
    244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244,
    244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244,
    244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244
};

static UINT8 bidi_class_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   5,   5,   7,
      8,   9,   5,   5,   5,   5,  10,   5,   5,   5,   5,  11,  12,  13,  14,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
     17,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16
};

UINT32 lookup_bidi_class(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = bidi_class_table_4[block];
    offset = (codepoint >> 6) & 0x3F;
    block = bidi_class_table_3[(block << 6) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = bidi_class_table_2[(block << 3) + offset];
    offset = codepoint & 0x7;
    value = bidi_class_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Bidi_Control. */

static UINT8 bidi_control_table_1[48] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 192,   0,   0,   0, 124,   0,   0,   0,   0,   0,   0, 192,   3,   0,   0
};

static UINT8 bidi_control_table_2[48] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 bidi_control_table_3[32] = {
      0,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 bidi_control_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_bidi_control(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = bidi_control_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = bidi_control_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = bidi_control_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = bidi_control_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Bidi_Mirrored. */

static UINT8 bidi_mirrored_table_1[280] = {
      0,   0,   0,   0,   0,   3,   0,  80,   0,   0,   0,  40,   0,   0,   0,  40,
      0,   0,   0,   0,   0,   8,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  60,   0,   0,   0,  24,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   6,  96,   0,   0,   0,   0,   0,   0,  96,
      0,  96,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
     30,  63,  98, 188,  87, 248,  15, 250, 255,  31,  60, 128, 245, 207, 255, 255,
    255, 159,   7,   1, 204, 255, 255, 193,   0,  62, 195, 255, 255,  63, 255, 255,
      0,  15,   0,   0,   3,   6,   0,   0,   0,   0,   0,   0,   0, 255,  63,   0,
    121,  59, 120, 112, 252, 255,   0,   0, 248, 255, 255, 249, 253, 255,   0,   1,
     63, 194,  55,  31,  58,   3, 240,  51,   0, 252, 255, 223,  83, 122,  48, 112,
      0,   0, 128,   1,  48, 188,  25, 254, 255, 255, 255, 255, 207, 191, 255, 255,
    255, 255, 127,  80, 124, 112, 136,  47,   0,   0,   0,   0,   0,   0,   0,  64,
     60,  54,   0,  48, 255,   3,   0,   0,   0,   0, 224,  31,   0,   0,   0,   0,
      0, 255, 243,  15,   0,   0,   0,   0,   0,   0,   0, 126,  48,   0,   0,   0,
      0,   3,   0,  80,   0,   0,   0,  40,   0,   0,   0, 168,  13,   0,   0,   0,
      0,   0,   0,   8,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,
      0, 128,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,
      8,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 bidi_mirrored_table_2[104] = {
      0,   1,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   4,   3,   3,   3,   3,   3,   5,   3,   3,   3,   3,   3,
      6,   7,   8,   3,   3,   9,   3,   3,  10,  11,  12,  13,  14,   3,   3,   3,
      3,   3,   3,   3,   3,  15,   3,  16,   3,   3,   3,   3,   3,   3,  17,  18,
     19,  20,  21,  22,   3,   3,   3,  23,  24,  25,   3,   3,   3,   3,   3,   3,
     26,   3,   3,   3,   3,   3,   3,   3,   3,  27,   3,   3,  28,  29,   3,   3,
      3,   3,   3,  30,  31,  32,  33,  34
};

static UINT8 bidi_mirrored_table_3[128] = {
      0,   1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   3,   1,   1,   1,   1,
      4,   5,   1,   6,   7,   8,   1,   9,  10,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  11,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  12,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 bidi_mirrored_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_bidi_mirrored(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = bidi_mirrored_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = bidi_mirrored_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = bidi_mirrored_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = bidi_mirrored_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Blank. */

static UINT8 blank_table_1[80] = {
      0,   2,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255,   7,   0,   0,   0, 128,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0
};

static UINT8 blank_table_2[40] = {
      0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   3,   2,   2,   4,   2,   2,   2,   2,   2,   2,   2,
      3,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 blank_table_3[64] = {
      0,   1,   1,   1,   1,   2,   1,   1,   3,   1,   1,   1,   4,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 blank_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_blank(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = blank_table_4[block];
    offset = (codepoint >> 10) & 0x1F;
    block = blank_table_3[(block << 5) + offset];
    offset = (codepoint >> 7) & 0x7;
    block = blank_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = blank_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Block. */

static UINT16 block_table_1[2568] = {
     23,  23,  23,  23,  23,  23,  23,  23, 156, 156, 156, 156, 156, 156, 156, 156,
    157, 157, 157, 157, 157, 157, 157, 157, 159, 159, 159, 159, 159, 159, 159, 159,
    137, 137, 137, 137, 137, 137, 137, 137, 262, 262, 262, 262, 262, 262, 262, 262,
     60,  60,  60,  60,  60,  60,  60,  60, 113, 113, 113, 113, 113, 113, 113, 113,
     75,  75,  75,  75,  75,  75,  75,  75,  79,  79,  79,  79,  79,  79,  79,  79,
     17,  17,  17,  17,  17,  17,  17,  17, 127, 127, 127, 127, 127, 127, 127, 127,
     10,  10,  10,  10,  10,  10,  10,  10, 279, 279, 279, 279, 279, 279, 279, 279,
     16,  16,  16,  16,  16,  16,  16,  16, 296, 296, 296, 296, 296, 296, 296, 296,
    214, 214, 214, 214, 214, 214, 214, 214, 249, 249, 249, 249, 249, 249, 249, 249,
    180, 180, 180, 180, 180, 180, 180, 180, 280, 280, 280, 280, 280, 280, 280, 280,
     12,  12,  12,  12,  12,  12,  12,  12,  11,  11,  11,  11,  11,  11,  11,  11,
     81,  81,  81,  81,  81,  81,  81,  81,  26,  26,  26,  26,  26,  26,  26,  26,
    117, 117, 117, 117, 117, 117, 117, 117, 115, 115, 115, 115, 115, 115, 115, 115,
    230, 230, 230, 230, 230, 230, 230, 230, 289, 289, 289, 289, 289, 289, 289, 289,
    295, 295, 295, 295, 295, 295, 295, 295, 145, 145, 145, 145, 145, 145, 145, 145,
    179, 179, 179, 179, 179, 179, 179, 179, 255, 255, 255, 255, 255, 255, 255, 255,
    297, 297, 297, 297, 297, 297, 297, 297, 155, 155, 155, 155, 155, 155, 155, 155,
    298, 298, 298, 298, 298, 298, 298, 298, 207, 207, 207, 207, 207, 207, 207, 207,
    106, 106, 106, 106, 106, 106, 106, 106, 120, 120, 120, 120, 120, 120, 120, 120,
     98,  98,  98,  98,  98,  98,  98,  98, 102, 102, 102, 102, 102, 102, 102, 102,
     41,  41,  41,  41,  41,  41,  41,  41, 304, 304, 304, 304, 304, 304, 304, 304,
    218, 218, 218, 218, 218, 218, 218, 218, 248, 248, 248, 248, 248, 248, 248, 248,
    281, 281, 281, 281, 281, 281, 281, 281, 125, 125, 125, 125, 125, 125, 125, 125,
     35,  35,  35,  35,  35,  35,  35,  35, 282, 282, 282, 282, 282, 282, 282, 282,
    151, 151, 151, 151, 151, 151, 151, 151, 202, 202, 202, 202, 202, 202, 202, 202,
    305, 305, 305, 305, 305, 305, 305, 305, 167, 167, 167, 167, 167, 167, 167, 167,
    284, 284, 284, 284, 284, 284, 284, 284, 213, 213, 213, 213, 213, 213, 213, 213,
    152, 152, 152, 152, 152, 152, 152, 152,  34,  34,  34,  34,  34,  34,  34,  34,
    285, 285, 285, 285, 285, 285, 285, 285,  61,  61,  61,  61,  61,  61,  61,  61,
     20,  20,  20,  20,  20,  20,  20,  20, 264, 264, 264, 264, 264, 264, 264, 264,
     25,  25,  25,  25,  25,  25,  25,  25, 165, 165, 165, 165, 165, 165, 165, 165,
    219, 219, 219, 219, 219, 219, 219, 219,  78,  78,  78,  78,  78,  78,  78,  78,
    107, 107, 107, 107, 107, 107, 107, 107, 265, 265, 265, 265, 265, 265, 265, 265,
    310, 310, 310, 310, 310, 310, 310, 310, 241, 241, 241, 241, 241, 241, 241, 241,
    242, 242, 242, 242, 242, 242, 242, 242,  63,  63,  63,  63,  63,  63,  63,  63,
    158, 158, 158, 158, 158, 158, 158, 158, 114, 114, 114, 114, 114, 114, 114, 114,
    103, 103, 103, 103, 103, 103, 103, 103, 266, 266, 266, 266, 266, 266, 266, 266,
     72,  72,  72,  72,  72,  72,  72,  72,  62,  62,  62,  62,  62,  62,  62,  62,
    166, 166, 166, 166, 166, 166, 166, 166, 215, 215, 215, 215, 215, 215, 215, 215,
     18,  18,  18,  18,  18,  18,  18,  18, 185, 185, 185, 185, 185, 185, 185, 185,
    199, 199, 199, 199, 199, 199, 199, 199,  66,  66,  66,  66,  66,  66,  66,  66,
    229, 229, 229, 229, 229, 229, 229, 229,  94,  94,  94,  94,  94,  94,  94,  94,
     31,  31,  31,  31,  31,  31,  31,  31,  28,  28,  28,  28,  28,  28,  28,  28,
    104, 104, 104, 104, 104, 104, 104, 104, 196, 196, 196, 196, 196, 196, 196, 196,
     83,  83,  83,  83,  83,  83,  83,  83, 194, 194, 194, 194, 194, 194, 194, 194,
    267, 267, 267, 267, 267, 267, 267, 267,  33,  33,  33,  33,  33,  33,  33,  33,
    268, 268, 268, 268, 268, 268, 268, 268, 195, 195, 195, 195, 195, 195, 195, 195,
    270, 270, 270, 270, 270, 270, 270, 270, 197, 197, 197, 197, 197, 197, 197, 197,
    109, 109, 109, 109, 109, 109, 109, 109, 160, 160, 160, 160, 160, 160, 160, 160,
     67,  67,  67,  67,  67,  67,  67,  67, 108, 108, 108, 108, 108, 108, 108, 108,
    299, 299, 299, 299, 299, 299, 299, 299,  99,  99,  99,  99,  99,  99,  99,  99,
     76,  76,  76,  76,  76,  76,  76,  76, 271, 271, 271, 271, 271, 271, 271, 271,
     49,  49,  49,  49,  49,  49,  49,  49, 144, 144, 144, 144, 144, 144, 144, 144,
      0,   0,   0,   0,   0,   0,   0,   0, 131, 131, 131, 131, 131, 131, 131, 131,
     51,  51,  51,  51,  51,  51,  51,  51, 130, 130, 130, 130, 130, 130, 130, 130,
    146, 146, 146, 146, 146, 146, 146, 146,  29,  29,  29,  29,  29,  29,  29,  29,
    119, 119, 119, 119, 119, 119, 119, 119, 143, 143, 143, 143, 143, 143, 143, 143,
     30,  30,  30,  30,  30,  30,  30,  30,  50,  50,  50,  50,  50,  50,  50,  50,
    147, 147, 147, 147, 147, 147, 147, 147,  96,  96,  96,  96,  96,  96,  96,  96,
     45,  45,  45,  45,  45,  45,  45,  45,  53,  53,  53,  53,  53,  53,  53,  53,
    316, 316, 316, 316, 316, 316, 316, 316,  52,  52,  52,  52,  52,  52,  52,  52,
    318, 318, 318, 318, 318, 318, 318, 318, 317, 317, 317, 317, 317, 317, 317, 317,
    171, 171, 171, 171, 171, 171, 171, 171, 307, 307, 307, 307, 307, 307, 307, 307,
     77,  77,  77,  77,  77,  77,  77,  77,  21,  21,  21,  21,  21,  21,  21,  21,
    201, 201, 201, 201, 201, 201, 201, 201, 161, 161, 161, 161, 161, 161, 161, 161,
    276, 276, 276, 276, 276, 276, 276, 276,  65,  65,  65,  65,  65,  65,  65,  65,
    238, 238, 238, 238, 238, 238, 238, 238, 250, 250, 250, 250, 250, 250, 250, 250,
     82,  82,  82,  82,  82,  82,  82,  82, 148, 148, 148, 148, 148, 148, 148, 148,
    246, 246, 246, 246, 246, 246, 246, 246, 121, 121, 121, 121, 121, 121, 121, 121,
    138, 138, 138, 138, 138, 138, 138, 138, 209, 209, 209, 209, 209, 209, 209, 209,
     40,  40,  40,  40,  40,  40,  40,  40, 208, 208, 208, 208, 208, 208, 208, 208,
    286, 286, 286, 286, 286, 286, 286, 286, 189, 189, 189, 189, 189, 189, 189, 189,
    100, 100, 100, 100, 100, 100, 100, 100, 162, 162, 162, 162, 162, 162, 162, 162,
     42,  42,  42,  42,  42,  42,  42,  42, 188, 188, 188, 188, 188, 188, 188, 188,
    123, 123, 123, 123, 123, 123, 123, 123, 122, 122, 122, 122, 122, 122, 122, 122,
    129, 129, 129, 129, 129, 129, 129, 129, 128, 128, 128, 128, 128, 128, 128, 128,
    173, 173, 173, 173, 173, 173, 173, 173, 244, 244, 244, 244, 244, 244, 244, 244,
     47,  47,  47,  47,  47,  47,  47,  47,   5,   5,   5,   5,   5,   5,   5,   5,
     14,  14,  14,  14,  14,  14,  14,  14, 308, 308, 308, 308, 308, 308, 308, 308,
    311, 311, 311, 311, 311, 311, 311, 311,  64,  64,  64,  64,  64,  64,  64,  64,
     46,  46,  46,  46,  46,  46,  46,  46, 257, 257, 257, 257, 257, 257, 257, 257,
     15,  15,  15,  15,  15,  15,  15,  15, 118, 118, 118, 118, 118, 118, 118, 118,
    263, 263, 263, 263, 263, 263, 263, 263, 170, 170, 170, 170, 170, 170, 170, 170,
    169, 169, 169, 169, 169, 169, 169, 169,   2,   2,   2,   2,   2,   2,   2,   2,
      8,   8,   8,   8,   8,   8,   8,   8,   9,   9,   9,   9,   9,   9,   9,   9,
    239, 239, 239, 239, 239, 239, 239, 239, 174, 174, 174, 174, 174, 174, 174, 174,
     37,  37,  37,  37,  37,  37,  37,  37,  68,  68,  68,  68,  68,  68,  68,  68,
    221, 221, 221, 221, 221, 221, 221, 221, 111, 111, 111, 111, 111, 111, 111, 111,
    223, 223, 223, 223, 223, 223, 223, 223, 303, 303, 303, 303, 303, 303, 303, 303,
    224, 224, 224, 224, 224, 224, 224, 224,  80,  80,  80,  80,  80,  80,  80,  80,
    252, 252, 252, 252, 252, 252, 252, 252, 233, 233, 233, 233, 233, 233, 233, 233,
    232, 232, 232, 232, 232, 232, 232, 232,  91,  91,  91,  91,  91,  91,  91,  91,
     38,  38,  38,  38,  38,  38,  38,  38, 312, 312, 312, 312, 312, 312, 312, 312,
    168, 168, 168, 168, 168, 168, 168, 168, 163, 163, 163, 163, 163, 163, 163, 163,
     73,  73,  73,  73,  73,  73,  73,  73, 133, 133, 133, 133, 133, 133, 133, 133,
    236, 236, 236, 236, 236, 236, 236, 236, 210, 210, 210, 210, 210, 210, 210, 210,
    126, 126, 126, 126, 126, 126, 126, 126, 240, 240, 240, 240, 240, 240, 240, 240,
    175, 175, 175, 175, 175, 175, 175, 175, 192, 192, 192, 192, 192, 192, 192, 192,
    191, 191, 191, 191, 191, 191, 191, 191, 149, 149, 149, 149, 149, 149, 149, 149,
    226, 226, 226, 226, 226, 226, 226, 226, 222, 222, 222, 222, 222, 222, 222, 222,
    181, 181, 181, 181, 181, 181, 181, 181,  19,  19,  19,  19,  19,  19,  19,  19,
    136, 136, 136, 136, 136, 136, 136, 136, 135, 135, 135, 135, 135, 135, 135, 135,
    245, 245, 245, 245, 245, 245, 245, 245, 227, 227, 227, 227, 227, 227, 227, 227,
    220, 220, 220, 220, 220, 220, 220, 220, 124, 124, 124, 124, 124, 124, 124, 124,
    247, 247, 247, 247, 247, 247, 247, 247, 315, 315, 315, 315, 315, 315, 315, 315,
    225, 225, 225, 225, 225, 225, 225, 225, 259, 259, 259, 259, 259, 259, 259, 259,
    228, 228, 228, 228, 228, 228, 228, 228,  44,  44,  44,  44,  44,  44,  44,  44,
     92,  92,  92,  92,  92,  92,  92,  92,  32,  32,  32,  32,  32,  32,  32,  32,
    139, 139, 139, 139, 139, 139, 139, 139, 260, 260, 260, 260, 260, 260, 260, 260,
     39,  39,  39,  39,  39,  39,  39,  39, 176, 176, 176, 176, 176, 176, 176, 176,
    251, 251, 251, 251, 251, 251, 251, 251, 256, 256, 256, 256, 256, 256, 256, 256,
    153, 153, 153, 153, 153, 153, 153, 153, 205, 205, 205, 205, 205, 205, 205, 205,
    154, 154, 154, 154, 154, 154, 154, 154, 112, 112, 112, 112, 112, 112, 112, 112,
    212, 212, 212, 212, 212, 212, 212, 212, 300, 300, 300, 300, 300, 300, 300, 300,
    254, 254, 254, 254, 254, 254, 254, 254, 200, 200, 200, 200, 200, 200, 200, 200,
    203, 203, 203, 203, 203, 203, 203, 203, 288, 288, 288, 288, 288, 288, 288, 288,
      3,   3,   3,   3,   3,   3,   3,   3,  85,  85,  85,  85,  85,  85,  85,  85,
    314, 314, 314, 314, 314, 314, 314, 314,  84,  84,  84,  84,  84,  84,  84,  84,
    211, 211, 211, 211, 211, 211, 211, 211, 319, 319, 319, 319, 319, 319, 319, 319,
    261, 261, 261, 261, 261, 261, 261, 261, 306, 306, 306, 306, 306, 306, 306, 306,
    237, 237, 237, 237, 237, 237, 237, 237,  27,  27,  27,  27,  27,  27,  27,  27,
    182, 182, 182, 182, 182, 182, 182, 182, 183, 183, 183, 183, 183, 183, 183, 183,
    116, 116, 116, 116, 116, 116, 116, 116, 178, 178, 178, 178, 178, 178, 178, 178,
    172, 172, 172, 172, 172, 172, 172, 172, 290, 290, 290, 290, 290, 290, 290, 290,
     70,  70,  70,  70,  70,  70,  70,  70,  71,  71,  71,  71,  71,  71,  71,  71,
     88,  88,  88,  88,  88,  88,  88,  88,  74,  74,  74,  74,  74,  74,  74,  74,
     90,  90,  90,  90,  90,  90,  90,  90,  89,  89,  89,  89,  89,  89,  89,  89,
      6,   6,   6,   6,   6,   6,   6,   6,  22,  22,  22,  22,  22,  22,  22,  22,
    204, 204, 204, 204, 204, 204, 204, 204, 291, 291, 291, 291, 291, 291, 291, 291,
     24,  24,  24,  24,  24,  24,  24,  24, 235, 235, 235, 235, 235, 235, 235, 235,
    187, 187, 187, 187, 187, 187, 187, 187, 193, 193, 193, 193, 193, 193, 193, 193,
    132, 132, 132, 132, 132, 132, 132, 132, 292, 292, 292, 292, 292, 292, 292, 292,
    293, 293, 293, 293, 293, 293, 293, 293, 150, 150, 150, 150, 150, 150, 150, 150,
    294, 294, 294, 294, 294, 294, 294, 294, 141, 141, 141, 141, 141, 141, 141, 141,
    142, 142, 142, 142, 142, 142, 142, 142, 140, 140, 140, 140, 140, 140, 140, 140,
    258, 258, 258, 258, 258, 258, 258, 258, 216, 216, 216, 216, 216, 216, 216, 216,
     87,  87,  87,  87,  87,  87,  87,  87, 253, 253, 253, 253, 253, 253, 253, 253,
    320, 320, 320, 320, 320, 320, 320, 320,  36,  36,  36,  36,  36,  36,  36,  36,
    206, 206, 206, 206, 206, 206, 206, 206,   7,   7,   7,   7,   7,   7,   7,   7,
    186, 186, 186, 186, 186, 186, 186, 186, 287, 287, 287, 287, 287, 287, 287, 287,
     69,  69,  69,  69,  69,  69,  69,  69, 184, 184, 184, 184, 184, 184, 184, 184,
    275, 275, 275, 275, 275, 275, 275, 275, 164, 164, 164, 164, 164, 164, 164, 164,
    110, 110, 110, 110, 110, 110, 110, 110, 217, 217, 217, 217, 217, 217, 217, 217,
    301, 301, 301, 301, 301, 301, 301, 301, 313, 313, 313, 313, 313, 313, 313, 313,
    101, 101, 101, 101, 101, 101, 101, 101, 190, 190, 190, 190, 190, 190, 190, 190,
      1,   1,   1,   1,   1,   1,   1,   1, 134, 134, 134, 134, 134, 134, 134, 134,
    234, 234, 234, 234, 234, 234, 234, 234,  13,  13,  13,  13,  13,  13,  13,  13,
    177, 177, 177, 177, 177, 177, 177, 177,  86,  86,  86,  86,  86,  86,  86,  86,
    243, 243, 243, 243, 243, 243, 243, 243,  95,  95,  95,  95,  95,  95,  95,  95,
     97,  97,  97,  97,  97,  97,  97,  97, 198, 198, 198, 198, 198, 198, 198, 198,
     93,  93,  93,  93,  93,  93,  93,  93, 231, 231, 231, 231, 231, 231, 231, 231,
    302, 302, 302, 302, 302, 302, 302, 302,   4,   4,   4,   4,   4,   4,   4,   4,
    105, 105, 105, 105, 105, 105, 105, 105, 269, 269, 269, 269, 269, 269, 269, 269,
    272, 272, 272, 272, 272, 272, 272, 272,  43,  43,  43,  43,  43,  43,  43,  43,
    277, 277, 277, 277, 277, 277, 277, 277, 278, 278, 278, 278, 278, 278, 278, 278,
     54,  54,  54,  54,  54,  54,  54,  54,  55,  55,  55,  55,  55,  55,  55,  55,
     56,  56,  56,  56,  56,  56,  56,  56,  57,  57,  57,  57,  57,  57,  57,  57,
     58,  58,  58,  58,  58,  58,  58,  58,  48,  48,  48,  48,  48,  48,  48,  48,
     59,  59,  59,  59,  59,  59,  59,  59, 283, 283, 283, 283, 283, 283, 283, 283,
    309, 309, 309, 309, 309, 309, 309, 309, 273, 273, 273, 273, 273, 273, 273, 273,
    274, 274, 274, 274, 274, 274, 274, 274
};

static UINT16 block_table_2[1552] = {
      0,   0,   0,   0,   1,   1,   1,   1,   2,   2,   2,   2,   3,   3,   3,   3,
      3,   3,   4,   4,   4,   4,   4,   4,   4,   4,   5,   5,   5,   5,   5,   5,
      6,   6,   6,   6,   6,   6,   7,   7,   7,   7,   7,   7,   8,   8,   8,   8,
      9,   9,   9,   9,   9,   9,  10,  10,  10,  10,  10,  10,  10,  10,  11,  11,
     11,  11,  11,  11,  12,  12,  12,  12,  13,  13,  13,  13,  13,  13,  14,  14,
     14,  14,  14,  14,  15,  15,  15,  15,  16,  16,  16,  16,  17,  17,  17,  17,
     18,  18,  18,  18,  19,  19,  20,  20,  20,  20,  20,  20,  21,  21,  21,  21,
     22,  22,  22,  22,  23,  23,  23,  23,  24,  24,  24,  24,  25,  25,  25,  25,
     26,  26,  26,  26,  27,  27,  27,  27,  28,  28,  28,  28,  29,  29,  29,  29,
     30,  30,  30,  30,  31,  31,  31,  31,  32,  32,  32,  32,  33,  33,  33,  33,
     34,  34,  34,  34,  35,  35,  35,  35,  36,  36,  36,  36,  37,  37,  37,  37,
     38,  38,  38,  38,  39,  39,  39,  39,  40,  40,  40,  40,  41,  41,  41,  41,
     42,  42,  42,  42,  43,  43,  43,  43,  44,  44,  44,  44,  45,  45,  45,  45,
     46,  46,  46,  46,  47,  47,  47,  47,  48,  48,  48,  48,  49,  49,  49,  49,
     49,  49,  50,  50,  50,  50,  50,  50,  51,  51,  51,  51,  51,  51,  52,  52,
     52,  52,  52,  52,  53,  53,  53,  53,  54,  54,  54,  54,  55,  55,  55,  55,
     56,  56,  56,  56,  56,  56,  57,  57,  57,  57,  57,  57,  58,  58,  58,  58,
     59,  59,  59,  59,  60,  60,  60,  60,  61,  61,  61,  61,  61,  61,  62,  62,
     62,  62,  62,  62,  63,  63,  64,  64,  64,  64,  64,  64,  65,  65,  66,  66,
     66,  66,  66,  66,  67,  67,  67,  67,  68,  68,  68,  68,  69,  69,  69,  69,
     70,  70,  70,  70,  71,  71,  71,  71,  72,  72,  72,  72,  72,  72,  73,  73,
     73,  73,  73,  73,  74,  74,  74,  74,  74,  74,  75,  75,  75,  75,  75,  75,
     76,  76,  76,  76,  76,  76,  77,  77,  77,  77,  77,  77,  77,  77,  78,  78,
     78,  78,  78,  78,  79,  79,  79,  79,  80,  80,  80,  80,  81,  81,  81,  81,
     82,  82,  82,  82,  83,  83,  83,  83,  84,  84,  84,  84,  85,  85,  85,  85,
     86,  86,  86,  86,  87,  87,  87,  87,  88,  88,  88,  88,  89,  89,  89,  89,
     89,  89,  90,  90,  91,  91,  91,  91,  92,  92,  92,  92,  93,  93,  93,  93,
     94,  94,  94,  94,  95,  95,  95,  95,  96,  96,  96,  96,  97,  97,  97,  97,
     98,  98,  98,  98,  99,  99,  99,  99,  99,  99, 100, 100, 100, 100, 100, 100,
    101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 103, 104, 104, 104, 104,
    105, 105, 105, 105, 106, 106, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109,
    110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 112, 112, 112, 112, 112, 112,
    112, 112, 113, 113, 114, 114, 114, 114, 115, 115, 115, 115, 115, 115, 116, 116,
    117, 117, 117, 117, 118, 118, 118, 118, 119, 119, 119, 119, 120, 120, 120, 120,
    121, 121, 121, 121, 122, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 123,
    123, 123, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 126, 126, 126, 126,
    127, 127, 127, 127, 128, 128, 128, 128, 129, 129, 129, 129, 130, 130, 130, 130,
    130, 130, 131, 131, 132, 132, 132, 132, 133, 133, 133, 133, 134, 134, 134, 134,
    135, 135, 135, 135, 135, 135, 136, 136, 136, 136, 136, 136, 137, 137, 137, 137,
    138, 138, 138, 138, 139, 139, 139, 139, 140, 140, 140, 140, 141, 141, 141, 141,
    142, 142, 142, 142, 143, 143, 143, 143, 144, 144, 144, 144, 144, 144, 145, 145,
    145, 145, 145, 145, 145, 145, 146, 146, 146, 146, 146, 146, 147, 147, 147, 147,
    148, 148, 148, 148, 148, 148, 149, 149, 149, 149, 149, 149, 150, 150, 150, 150,
    151, 151, 151, 151, 152, 152, 152, 152, 153, 153, 153, 153, 154, 154, 154, 154,
    155, 155, 155, 155, 155, 155, 156, 156, 156, 156, 156, 156, 157, 157, 158, 158,
    159, 159, 160, 160, 160, 160, 161, 161, 161, 161, 162, 162, 162, 162, 162, 162,
    163, 163, 163, 163, 163, 163, 164, 164, 165, 165, 165, 165, 166, 166, 166, 166,
    167, 167, 167, 167, 168, 168, 168, 168, 168, 168, 169, 169, 169, 169, 169, 169,
    169, 169, 170, 170, 170, 170, 170, 170, 106, 106, 106, 106, 171, 171, 171, 171,
    172, 172, 172, 172, 173, 173, 173, 173, 174, 174, 174, 174, 174, 174, 175, 175,
    175, 175, 176, 176, 176, 176, 176, 176, 177, 177, 177, 177, 178, 178, 178, 178,
    179, 179, 179, 179, 179, 179, 180, 180, 180, 180, 180, 180, 181, 181, 181, 181,
    181, 181, 182, 182, 182, 182, 182, 182, 183, 183, 183, 183, 183, 183, 184, 184,
    184, 184, 184, 184, 184, 184, 185, 185, 185, 185, 185, 185, 186, 186, 186, 186,
    187, 187, 187, 187, 188, 188, 188, 188, 189, 189, 189, 189, 190, 190, 190, 190,
    191, 191, 191, 191, 191, 191, 106, 106, 192, 192, 192, 192, 193, 193, 193, 193,
    194, 194, 194, 194, 195, 195, 195, 195, 196, 196, 196, 196, 197, 197, 197, 197,
    198, 198, 198, 198, 199, 199, 199, 199, 200, 200, 200, 200, 201, 201, 201, 201,
    202, 202, 202, 202, 203, 203, 203, 203, 204, 204, 204, 204, 204, 204, 106, 106,
    205, 205, 205, 205, 205, 205, 106, 106, 206, 206, 206, 206, 207, 207, 207, 207,
    208, 208, 208, 208, 209, 209, 209, 209, 210, 210, 210, 210, 210, 210, 211, 211,
    211, 211, 211, 211, 211, 211, 212, 212, 212, 212, 212, 212, 212, 212, 213, 213,
    213, 213, 213, 213, 214, 214, 214, 214, 215, 215, 215, 215, 216, 216, 216, 216,
    216, 216, 217, 217, 217, 217, 217, 217, 218, 218, 218, 218, 218, 218, 219, 219,
    219, 219, 219, 219, 220, 220, 220, 220, 221, 221, 221, 221, 222, 222, 222, 222,
    222, 222, 106, 106, 223, 223, 223, 223, 223, 223, 224, 224, 224, 224, 224, 224,
    225, 225, 225, 225, 226, 226, 226, 226, 227, 227, 227, 227, 228, 228, 228, 228,
    229, 229, 229, 229, 230, 230, 230, 230, 231, 231, 231, 231, 231, 231, 106, 106,
    232, 232, 232, 232, 232, 232, 106, 106, 233, 233, 233, 233, 233, 233, 106, 106,
    234, 234, 234, 234, 235, 235, 235, 235, 236, 236, 236, 236, 237, 237, 237, 237,
    237, 237, 238, 238, 238, 238, 238, 238, 238, 238, 239, 239, 240, 240, 240, 240,
    241, 241, 241, 241, 241, 241, 242, 242, 242, 242, 242, 242, 243, 243, 243, 243,
    244, 244, 244, 244, 244, 244, 106, 106, 245, 245, 245, 245, 106, 106, 246, 246,
    247, 247, 247, 247, 248, 248, 248, 248, 249, 249, 249, 249, 250, 250, 250, 250,
    250, 250, 106, 106, 106, 106, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252,
    252, 252, 253, 253, 254, 254, 254, 254, 255, 255, 255, 255, 256, 256, 256, 256,
    256, 256, 257, 257, 257, 257, 257, 257, 257, 257, 258, 258, 258, 258, 258, 258,
    259, 259, 259, 259, 259, 259, 106, 106, 260, 260, 260, 260, 261, 261, 261, 261,
    262, 262, 262, 262, 263, 263, 263, 263, 264, 264, 264, 264, 265, 265, 265, 265,
    266, 266, 266, 266, 106, 106, 267, 267, 268, 268, 268, 268, 269, 269, 269, 269,
    269, 269, 270, 270, 270, 270, 270, 270, 270, 270, 271, 271, 271, 271, 271, 271,
    272, 272, 272, 272, 273, 273, 106, 106, 274, 274, 274, 274, 274, 274, 106, 106,
    275, 275, 275, 275, 276, 276, 276, 276, 277, 277, 277, 277, 277, 277, 106, 106,
    278, 278, 278, 278, 279, 279, 279, 279, 280, 280, 280, 280, 281, 281, 281, 281,
    282, 282, 282, 282, 282, 282, 106, 106, 283, 283, 283, 283, 284, 284, 284, 284,
    284, 284, 106, 106, 285, 285, 285, 285, 285, 285, 106, 106, 106, 106, 286, 286,
    286, 286, 286, 286, 287, 287, 287, 287, 288, 288, 288, 288, 289, 289, 289, 289,
    290, 290, 290, 290, 106, 106, 291, 291, 291, 291, 291, 291, 292, 292, 292, 292,
    292, 292, 106, 106, 293, 293, 293, 293, 294, 294, 294, 294, 294, 294, 295, 295,
    295, 295, 295, 295, 296, 296, 296, 296, 297, 297, 297, 297, 298, 298, 298, 298,
    299, 299, 299, 299, 300, 300, 300, 300, 300, 300, 301, 301, 301, 301, 301, 301,
    302, 302, 302, 302, 303, 303, 303, 303, 304, 304, 304, 304, 305, 305, 305, 305,
    306, 306, 306, 306, 307, 307, 307, 307, 307, 307, 308, 308, 308, 308, 308, 308,
    309, 309, 309, 309, 310, 310, 310, 310, 311, 311, 311, 311, 312, 312, 312, 312,
    313, 313, 313, 313, 313, 313, 314, 314, 314, 314, 314, 314, 314, 314, 106, 106,
    315, 315, 315, 315, 316, 316, 316, 316, 316, 316, 106, 106, 317, 317, 317, 317,
    318, 318, 318, 318, 318, 318, 106, 106, 319, 319, 319, 319, 320, 320, 320, 320
};

static UINT16 block_table_3[1824] = {
      0,   0,   0,   0,   1,   1,   1,   1,   2,   2,   2,   2,   3,   3,   3,   3,
      3,   3,   4,   5,   5,   6,   7,   7,   8,   8,   8,   9,  10,  10,  10,  10,
     11,  11,  11,  11,  11,  11,  11,  11,  12,  13,  14,  14,  15,  16,  16,  16,
     17,  17,  17,  17,  17,  17,  17,  17,  18,  18,  19,  20,  21,  21,  22,  22,
     23,  23,  24,  25,  26,  27,  27,  27,  28,  28,  28,  28,  29,  29,  29,  29,
     30,  30,  30,  30,  31,  31,  31,  31,  32,  32,  32,  32,  33,  33,  33,  33,
     34,  34,  34,  34,  35,  35,  35,  35,  36,  36,  36,  36,  37,  37,  37,  37,
     38,  38,  38,  38,  39,  39,  39,  39,  40,  40,  40,  40,  40,  40,  40,  40,
     41,  41,  41,  41,  41,  42,  42,  42,  43,  43,  43,  43,  43,  43,  43,  43,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  45,  46,  46,  46,
     47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,
     47,  47,  47,  47,  48,  49,  49,  49,  50,  51,  52,  53,  54,  54,  54,  54,
     55,  55,  55,  55,  55,  56,  57,  57,  58,  58,  59,  60,  61,  61,  61,  62,
     63,  64,  64,  64,  64,  65,  66,  66,  67,  67,  67,  67,  68,  68,  69,  69,
     70,  70,  71,  72,  73,  74,  75,  76,  77,  77,  77,  77,  78,  78,  79,  79,
     80,  80,  80,  80,  80,  80,  80,  80,  81,  81,  81,  81,  81,  81,  81,  81,
     82,  82,  82,  83,  84,  85,  86,  87,  88,  88,  89,  90,  91,  92,  92,  92,
     93,  93,  93,  93,  93,  93,  93,  93,  94,  94,  94,  94,  94,  94,  94,  94,
     95,  95,  96,  97,  97,  97,  97,  97,  98,  98,  98,  98,  99, 100, 100, 100,
    101, 101, 101, 101, 101, 101, 101, 101, 102, 102, 102, 102, 102, 102, 103, 104,
    105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107,
    108, 108, 108, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109,
    110, 110, 110, 111, 112, 112, 112, 112, 113, 114, 115, 115, 116, 116, 116, 117,
    118, 118, 118, 118, 119, 119, 119, 119, 120, 120, 120, 120, 120, 120, 120, 121,
    122, 122, 123, 123, 123, 124, 124, 124, 125, 126, 127, 127, 128, 129, 130, 131,
    132, 132, 132, 132, 132, 132, 132, 132, 133, 133, 133, 133, 133, 133, 133, 133,
    134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
    134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 135, 135,
    136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
    137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137,
    137, 137, 137, 137, 138, 139, 140, 141, 142, 142, 142, 142, 142, 142, 142, 142,
    142, 142, 143, 143, 143, 144, 144, 144, 145, 146, 146, 146, 146, 146, 146, 146,
    147, 148, 149, 149, 150, 150, 150, 151, 152, 153, 154, 155, 156, 156, 156, 157,
    158, 158, 158, 159, 160, 160, 160, 161, 162, 163, 164, 165, 166, 166, 167, 167,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 169, 170, 170,
    171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171,
    171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 172, 172, 172, 172,
    173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
    174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174,
    174, 174, 174, 174, 174, 174, 174, 174, 175, 175, 175, 175, 175, 175, 175, 175,
    175, 175, 175, 175, 175, 175, 175, 175, 176, 176, 177, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
    179, 180, 181, 182, 183, 183, 183, 183, 184, 184, 184, 184, 184, 184, 184, 185,
    186, 186, 186, 186, 187, 187, 187, 187, 188, 188, 189, 189, 190, 191, 192, 193,
    194, 194, 194, 194, 195, 196, 196, 197, 198, 199, 200, 201, 202, 203, 203, 194,
    204, 204, 205, 206, 207, 208, 209, 209, 210, 211, 212, 213, 214, 214, 194, 194,
    215, 215, 215, 215, 215, 215, 215, 215, 215, 215, 215, 215, 216, 216, 194, 194,
    217, 217, 218, 219, 220, 221, 194, 222, 223, 224, 194, 194, 225, 226, 226, 226,
    227, 227, 227, 228, 229, 194, 230, 230, 231, 231, 232, 233, 234, 235, 194, 194,
    236, 236, 237, 194, 238, 238, 238, 238, 239, 239, 194, 194, 194, 194, 194, 194,
    194, 194, 194, 240, 241, 241, 194, 194, 242, 243, 244, 245, 246, 247, 248, 249,
    250, 250, 250, 250, 251, 251, 252, 253, 254, 254, 255, 256, 257, 257, 257, 258,
    259, 259, 260, 194, 261, 262, 263, 263, 264, 264, 264, 264, 194, 194, 194, 194,
    265, 265, 265, 265, 266, 266, 266, 194, 194, 194, 194, 194, 267, 267, 267, 267,
    268, 268, 268, 269, 270, 270, 271, 194, 272, 272, 273, 194, 194, 194, 194, 194,
    274, 274, 275, 194, 194, 276, 276, 276, 277, 277, 277, 194, 194, 278, 278, 278,
    279, 279, 280, 281, 281, 282, 283, 283, 194, 194, 194, 194, 194, 194, 194, 194,
    284, 284, 284, 285, 286, 286, 194, 194, 287, 287, 287, 288, 288, 289, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 290, 194, 194, 194, 194, 194, 291, 292, 292,
    293, 293, 293, 293, 293, 293, 293, 293, 293, 293, 293, 293, 293, 293, 293, 293,
    294, 294, 294, 294, 295, 295, 295, 295, 295, 295, 296, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 297, 298, 298, 298,
    299, 299, 299, 299, 299, 299, 299, 299, 299, 299, 299, 299, 299, 299, 299, 299,
    299, 300, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,
    301, 301, 301, 301, 301, 301, 301, 301, 301, 301, 301, 301, 301, 301, 301, 301,
    301, 301, 301, 301, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,
    302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302,
    302, 302, 303, 304, 305, 305, 306, 307, 308, 308, 308, 308, 309, 194, 194, 194,
    194, 194, 310, 310, 310, 194, 194, 194, 311, 311, 311, 311, 311, 194, 194, 312,
    313, 313, 313, 313, 313, 313, 313, 313, 313, 313, 313, 313, 313, 313, 313, 313,
    314, 314, 314, 314, 314, 314, 314, 314, 314, 314, 314, 314, 314, 314, 314, 314,
    314, 314, 314, 314, 314, 314, 314, 314, 315, 315, 315, 315, 315, 315, 315, 315,
    315, 315, 315, 315, 315, 315, 315, 315, 316, 316, 316, 316, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 317,
    318, 318, 318, 318, 318, 318, 318, 318, 319, 320, 321, 322, 323, 323, 323, 323,
    323, 323, 323, 323, 323, 323, 323, 323, 194, 194, 194, 194, 194, 194, 194, 194,
    324, 324, 324, 324, 324, 325, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 326, 326, 326, 326, 326, 326, 327, 194,
    328, 328, 328, 328, 328, 328, 328, 328, 329, 329, 329, 329, 329, 329, 329, 329,
    330, 330, 331, 194, 194, 194, 194, 332, 333, 333, 333, 334, 194, 194, 194, 194,
    335, 335, 335, 335, 335, 335, 335, 335, 335, 335, 335, 335, 335, 335, 335, 335,
    336, 336, 336, 336, 336, 336, 336, 336, 336, 336, 336, 336, 336, 336, 336, 336,
    336, 336, 336, 336, 336, 337, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 338, 338, 338, 338, 338, 338, 338, 338,
    339, 340, 194, 194, 194, 194, 194, 194, 341, 341, 342, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 343, 344, 345, 345, 194, 194, 194, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 346,
    347, 347, 347, 347, 347, 347, 347, 194, 348, 348, 348, 194, 194, 194, 194, 194,
    194, 194, 194, 349, 350, 350, 194, 194, 351, 351, 352, 194, 194, 194, 194, 194,
    353, 353, 353, 353, 353, 353, 353, 353, 194, 194, 194, 194, 194, 194, 194, 194,
    354, 355, 356, 356, 356, 357, 357, 357, 358, 358, 358, 358, 358, 358, 358, 358,
    359, 359, 359, 359, 359, 359, 359, 359, 360, 360, 360, 360, 360, 360, 360, 360,
    360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
    361, 361, 362, 363, 364, 364, 364, 364, 365, 365, 365, 365, 366, 366, 366, 366,
    367, 367, 367, 367, 367, 367, 367, 367, 368, 368, 368, 368, 368, 368, 368, 368,
    369, 369, 369, 370, 371, 371, 371, 371, 372, 372, 372, 372, 372, 372, 372, 372,
    373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373,
    373, 373, 373, 373, 373, 373, 373, 194, 374, 374, 374, 374, 374, 374, 374, 374,
    374, 374, 374, 374, 374, 374, 374, 374, 374, 374, 374, 374, 374, 374, 374, 374,
    374, 374, 374, 374, 374, 374, 374, 374, 374, 374, 375, 375, 375, 375, 375, 375,
    375, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376,
    376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376, 376,
    376, 376, 376, 376, 376, 377, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378,
    378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378,
    378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 378, 379,
    380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380,
    380, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,
    381, 381, 381, 381, 381, 381, 381, 381, 381, 381, 381, 381, 381, 381, 381, 381,
    381, 381, 381, 381, 381, 381, 381, 381, 381, 381, 382, 194, 194, 194, 194, 194,
    383, 383, 383, 383, 194, 194, 194, 194, 384, 384, 384, 384, 384, 384, 384, 385,
    386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
    387, 387, 387, 387, 387, 387, 387, 387, 387, 387, 387, 387, 387, 387, 387, 387
};

static UINT8 block_table_4[2176] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  27,  28,  28,  28,  28,  28,  28,  28,  28,  28,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,
     29,  29,  30,  31,  32,  33,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  35,  36,  37,  38,  38,
     39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  39,  40,  41,  42,  43,
     44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  60,  61,  62,  62,  62,  62,  63,  64,  64,  65,  62,  62,  62,  62,  62,
     62,  62,  66,  67,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  68,  69,  62,  70,  71,  71,  71,  71,  71,  71,  71,  71,
     71,  71,  71,  71,  72,  73,  74,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  75,  76,  77,  62,  62,  62,  62,  78,  62,
     62,  62,  62,  62,  62,  62,  62,  79,  80,  81,  82,  82,  83,  84,  62,  85,
     86,  87,  62,  88,  89,  62,  90,  91,  92,  93,  94,  95,  96,  97,  62,  62,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  99, 100, 100, 100, 100, 100, 100, 100, 101, 102, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 104, 105, 105, 105, 105, 105, 105, 105, 105,
    105, 105, 105, 105, 105, 106,  62,  62,  62,  62,  62,  62, 107, 108,  62,  62,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 110,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
    111,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113
};

UINT32 lookup_block(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 9;
    block = block_table_4[block];
    offset = (codepoint >> 5) & 0xF;
    block = block_table_3[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = block_table_2[(block << 2) + offset];
    offset = codepoint & 0x7;
    value = block_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Canonical_Combining_Class. */

static UINT8 canonical_combining_class_table_1[1232] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   3,   8,   8,   8,   8,   3,   5,   8,   8,   8,   8,
      8,   6,   6,   8,   8,   8,   8,   6,   6,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,  55,  55,  55,  55,  55,   8,   8,   8,   8,   1,   1,   1,
      1,   1,   1,   1,   1,  51,   1,   8,   8,   8,   1,   1,   1,   8,   8,   0,
      1,   1,   1,   8,   8,   8,   8,   1,   3,   8,   8,   1,  49,  48,  48,  49,
     48,  48,  49,   1,   1,   1,   1,   1,   0,   0,   0,   1,   1,   1,   1,   1,
      0,   8,   1,   1,   1,   1,   8,   1,   1,   1,  10,   8,   1,   1,   1,   1,
      1,   1,   8,   8,   8,   8,   8,   8,   1,   1,   8,   1,   1,  10,   2,   1,
     11,  14,  16,  19,  23,  24,  25,  26,  27,  28,  28,  29,  30,  31,   0,  32,
      0,  33,  34,   0,   1,   8,   0,  27,  39,  40,  41,   0,   0,   0,   0,   0,
      0,   0,   0,  36,  37,  38,  39,  40,  41,  42,  43,   1,   1,   8,   8,   1,
      1,   1,   1,   1,   8,   1,   1,   8,  44,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   0,   0,   1,
      1,   1,   1,   8,   1,   0,   0,   1,   1,   0,   8,   1,   1,   8,   0,   0,
      0,  45,   0,   0,   0,   0,   0,   0,   1,   8,   1,   1,   8,   1,   1,   8,
      8,   8,   1,   8,   8,   1,   8,   1,   1,   1,   8,   1,   8,   1,   8,   1,
      8,   1,   1,   0,   0,   0,   0,   0,   1,   1,   8,   1,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   8,   0,   0,   1,   1,   0,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   0,   1,   1,   1,   0,   1,   1,   1,   1,   1,   0,   0,
      0,   8,   8,   8,   0,   0,   0,   0,   1,   8,   8,   8,   1,   1,   1,   1,
      0,   0,   1,   1,   1,   1,   1,   8,   8,   8,   8,   8,   1,   1,   1,   1,
      1,   1,   0,   8,   1,   1,   8,   1,   1,   8,   1,   1,   1,   8,   8,   8,
     36,  37,  38,   1,   1,   1,   8,   1,   1,   8,   8,   1,   1,   1,   1,   1,
      0,   0,   0,   0,  54,   0,   0,   0,   0,   0,   0,   0,   0,  57,   0,   0,
      0,   1,   8,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
      0,   0,   0,   0,   0,  46,  47,   0,   0,   0,   0,  57,  57,   0,   0,   0,
      0,   0,  57,   0,   0,   0,   0,   0,  12,  12,  57,   0,   0,   0,   0,   0,
     13,  13,  13,  13,   0,   0,   0,   0,  15,  15,  57,   0,   0,   0,   0,   0,
     17,  17,  17,  17,   0,   0,   0,   0,   8,   8,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   8,   0,   8,   0,   5,   0,   0,   0,   0,   0,   0,
      0,  18,  20,   0,  21,   0,   0,   0,   0,   0,  20,  20,  20,  20,   0,   0,
     20,   0,   1,   1,  57,   0,   1,   1,   0,   0,   0,   0,   0,   0,   8,   0,
      0,   0,   0,   0,   0,   0,   0,  54,   0,  57,  57,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   1,   1,   1,   0,   0,   0,   0,  57,  57,   0,   0,
      0,   0,   0,   0,  57,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,
      0,   2,   0,   0,   0,   0,   0,   0,   0,  10,   1,   8,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   1,   8,   0,   0,   0,   0,   0,   0,   0,
     57,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   0,   0,   8,
      1,   1,   1,   1,   1,   8,   8,   8,   8,   8,   8,   1,   1,   8,   0,   8,
      8,   1,   1,   8,   8,   1,   1,   1,   1,   1,   8,   1,   1,   1,   1,   0,
      0,   0,   0,   1,   8,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,
      0,   0,  57,  57,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54,   0,
      1,   1,   1,   0,  55,   8,   8,   8,   8,   8,   1,   1,   8,   8,   8,   8,
      1,   0,  55,  55,  55,  55,  55,  55,  55,   0,   0,   0,   0,   8,   0,   0,
      0,   0,   0,   0,   1,   0,   0,   0,   1,   1,   0,   0,   0,   0,   0,   0,
      1,   1,   8,   1,   1,   1,   1,   1,   1,   1,   8,   1,   1,  48,   4,   8,
      6,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   2,
      2,   8,   9,   1,  49,   8,   1,   8,   1,   1,  55,  55,   1,   1,   1,   1,
     55,  55,  55,   1,   1,   0,   0,   0,   0,   1,   0,   0,   0,  55,  55,   1,
      8,   1,  55,  55,   8,   8,   8,   8,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  57,   0,   0,   9,   2,   3,  10,  53,  53,
      0,  52,  52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,  57,   0,
      0,   0,   0,   8,   8,   8,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0,
      0,   0,   0,  54,   0,   0,   0,   0,   1,   0,   1,   1,   8,   0,   0,   1,
      1,   0,   0,   0,   0,   0,   1,   1,   0,   1,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  35,   0,   1,   1,   1,   1,   1,   1,   1,   8,
      8,   8,   8,   8,   8,   8,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   8,   0,   1,   1,  55,   8,   0,   0,   0,   0,  57,
      0,   0,   0,   0,   0,   1,   8,   0,   0,   0,   0,   1,   1,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   8,   8,   1,   1,   1,   8,   1,   8,   8,   8,
      0,   0,   1,   8,   1,   8,   0,   0,   0,  57,  54,   0,   0,   0,   0,   0,
      0,   0,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,  54,   0,
      0,  54,  57,   0,   0,   0,   0,   0,   0,   0,   0,  54,  54,   0,   0,   0,
      1,   1,   1,   1,   1,   0,   0,   0,   0,   0,  57,   0,   0,   0,  54,   0,
      0,   0,  57,  54,   0,   0,   0,   0,  54,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  57,  54,   0,   0,   0,   0,   0,  57,  57,   0,
      0,  57,   0,   0,   0,   0,   0,   0,   0,   0,  54,   0,  57,  57,   0,   0,
     55,  55,  55,  55,  55,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   0,
     50,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,   0,
      0,   0,   0,   0,   0,   5,   5,  55,  55,  55,   0,   0,   0,  56,   5,   5,
      5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   0,   8,   8,   8,   8,   8,
      8,   8,   8,   0,   0,   1,   1,   1,   1,   1,   8,   8,   0,   0,   0,   0,
      0,   0,   1,   1,   1,   1,   0,   0,   0,   0,   1,   1,   1,   0,   0,   0,
      1,   0,   0,   1,   1,   1,   1,   1,   1,   1,   0,   1,   1,   0,   1,   1,
      8,   8,   8,   8,   8,   8,   8,   0,   1,   1,  54,   0,   0,   0,   0,   0
};

static UINT8 canonical_combining_class_table_2[888] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   2,   3,   4,   5,   6,   7,
      8,   9,  10,  11,  12,   1,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  14,  15,  16,  17,  18,  19,  20,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   1,  21,   0,   0,   0,   0,   0,  22,  23,  24,   0,   0,  25,   0,
      0,   0,  26,  27,  28,  29,   0,   0,   0,   0,  30,   0,   0,   0,  31,  32,
     33,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  35,  36,
      0,   0,  26,  37,  38,  39,   0,   0,   0,   0,   0,  40,   0,   0,   0,   0,
      0,   0,   0,  41,   0,   0,   0,   0,   0,  42,  43,   1,  44,  45,  46,  47,
      0,   0,   0,   0,   0,   0,   0,  48,   0,  49,  50,   0,   0,   0,   0,   0,
      0,  49,   0,   0,   0,   0,   0,  51,   0,  49,   0,   0,   0,   0,   0,   0,
      0,  49,  52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53,
      0,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,
      0,  56,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,
      0,  58,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59,   0,   0,  60,  61,
      0,   0,   0,   0,   0,   0,  62,  63,  64,   0,   0,   0,   0,   0,   0,   0,
     65,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66,  67,
      0,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,  68,   0,   0,   0,   0,
      0,   0,  69,   0,   0,   0,  70,   0,   0,   0,  54,  71,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,  73,
      0,   0,  74,  75,   0,   0,   0,   0,   0,   0,   0,   0,  76,   0,  68,  77,
      0,   0,   0,   0,   0,   0,  78,  79,  80,  81,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  48,   0,  70,   0,   0,   0,   0,  82,  83,   0,
      0,   0,   0,   0,   0,  84,   0,   0,   0,   0,   0,   0,  85,   0,  84,   0,
      0,   0,   0,   0,   0,   0,  66,   0,   0,   0,  86,  87,  88,  89,  90,  91,
     92,  93,  94,   1,   1,   1,  95,  96,   0,   0,  97,  98,  99, 100, 101,   0,
      0,   0,   0,   0,   0,  74,  91,   0,   0,   0,   0,   0,   0,   0,   0, 102,
      0,   0,   0,   0,   1,   1,   1,   1,   0,   0,   0,   0,   0, 103,   0,   0,
      0,   0,   0, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,  74, 105, 106,
      0,   0,   0,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  91,   0,
    107,   0,   0,   0,   0,  70,   0,   0,  70,   0,   0,   0,   1,   1,  91,   0,
      0,   0,   0,   0,   0, 108,   0,   0,   0,   0, 109,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 110,   0,  76,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 111, 112, 113,   0,   0,   0,   0,   0, 107,   0,
      0,   0,   0,   0,   0,  49,   0,   0,   0,   0,   0, 114,   0,   0,   0,   0,
      0,   0,   0,   0, 115, 116,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,
      0,   0,   0,   0,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26, 117,
      0, 118,   0,   0,   0,   0,   0, 119,   0,   0,   0,   0, 120,   0,   0,   0,
      0,   0,   0,   0, 105,   0,   0,   0,   0,   0,   0,   0,   0, 121,   0,   0,
    122, 123,  75,   0,   0,   0,   0,   0, 124,   0,   0,   0,   0,   0,   0,   0,
    107,   0,   0,   0,   0,   0,  76, 102,   0,   0,   0,   0,   0,   0,   0, 125,
    117,   0,   0,   0,   0,   0,  53,   0,  76, 126,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 127,   0,   0,   0,   0,   0,   0, 128,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 129,   0,  49,   0,   0,  26, 130, 130,   0,
    131,   0,   0,  51,   0,   0,   0,   0, 132,   0,   0,   0,   0,   0,   0,   0,
    133,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 134,   0,
      0,   0,   0,   0,   0, 109,   0,   0,   0,   0,   0,   0,   0,   0,   0, 135,
    110,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  76,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  70,   0, 102,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 136,   0,   0,   0,   0, 137,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 138,   0,
      0,   0,   0,   0,   0,   0, 139,   0,   0,   0,   0,   0,   0,   0, 140,   0,
      0,   0,   0, 141,   0,   0,   0,   0,   0,   0,   0,   0, 142, 143, 144, 145,
    146, 147,   0,   0,   0, 148,   0,   0, 149,   0,   0,   0,   0,   0,   0,   0,
    139,   1,   1, 150, 151, 117,   0,   0,   0,   0,   0,   0,   0,  51,   0,   0,
      0,   0,   0,   0,   0, 105,   0,   0,   0,   0, 152,   0,   0,   0,   0,   0,
    105, 153,   0,   0,   0,   0,   0,   0
};

static UINT8 canonical_combining_class_table_3[832] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   0,   0,
      0,   0,   3,   0,   0,   0,   4,   5,   6,   7,   0,   8,   9,  10,   0,  11,
     12,  13,  14,  15,  16,  17,  16,  18,  16,  19,  16,  19,  16,  19,   0,  19,
     16,  20,  16,  19,  21,  19,   0,  22,  23,  24,  25,  26,  27,  28,  29,  30,
     31,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34,   0,   0,  35,
      0,   0,  36,   0,  37,   0,   0,   0,  38,  39,  40,  41,  42,  43,  44,  45,
     46,   0,   0,  47,   0,   0,   0,  48,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  50,   0,  51,   0,  52,   0,   0,   0,   0,   0,   0,   0,   0,
     53,   0,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  55,  56,  57,   0,   0,   0,   0,
     58,   0,   0,  59,  60,  61,  62,  63,   0,   0,  64,  65,   0,   0,   0,  66,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  68,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  69,   0,   0,   0,  70,   0,  71,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  72,   0,   0,  73,   0,   0,   0,   0,
      0,   0,   0,   0,  74,   0,   0,   0,   0,   0,  75,   0,   0,  76,  77,   0,
      0,  78,  79,   0,  80,  62,   0,  81,  82,   0,   0,  83,  84,  85,   0,   0,
      0,  86,   0,  87,   0,   0,  51,  88,  51,   0,  89,   0,  90,   0,   0,   0,
     79,   0,   0,   0,  91,  92,   0,  93,  94,  95,  96,   0,   0,   0,   0,   0,
     51,   0,   0,   0,   0,  97,  98,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  99, 100,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 101,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 103, 104,   0,   0, 105,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    106,   0,   0,   0, 100,   0,   0,   0,   0,   0, 107, 108,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 109,   0, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 canonical_combining_class_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   4,   4,   4,   4,   6,
      7,   8,   4,   4,   4,   4,   9,   4,   4,   4,   4,  10,   4,  11,  12,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
};

UINT32 lookup_canonical_combining_class(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = canonical_combining_class_table_4[block];
    offset = (codepoint >> 6) & 0x3F;
    block = canonical_combining_class_table_3[(block << 6) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = canonical_combining_class_table_2[(block << 3) + offset];
    offset = codepoint & 0x7;
    value = canonical_combining_class_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Cased. */

static UINT8 cased_table_1[280] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    255, 255, 255, 255, 255, 255, 255, 247, 240, 255, 255, 255, 255, 255, 239, 255,
    255, 255, 255,   1,   3,   0,   0,   0,  31,   0,   0,   0,  32,   0,   0,   0,
      0,   0, 207, 188,  64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,
      3, 252, 255, 255, 255, 255, 254, 255, 255, 255, 127,   0, 255,   1,   0,   0,
    191,  32, 255, 255, 255, 255, 255, 231, 255, 255,  63,  63, 255,   1, 255, 255,
     63,  63, 255, 170, 255, 255, 255,  63, 255, 255, 223,  95, 220,  31, 207,  15,
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  62,
     80, 189,  31, 242, 224,  67,   0,   0,  24,   0,   0,   0,   0,   0, 192, 255,
    255,   3,   0,   0,  31, 120,  12,   0, 191,  32,   0,   0, 255,  63,   0,   0,
    252, 255, 255, 255, 255, 120, 255, 255, 255,   7, 235,   3,   0,   0,  96,   7,
      0,   0, 255, 255, 127,   0, 248,   0, 255, 255,   0,   0, 255, 255,  15, 255,
    255, 255, 255,  15,   0,   0, 255, 247, 255, 247, 183, 255, 251, 255, 251,  27,
    185, 255, 255, 255, 255, 255, 253,   7, 255, 255,   7,   0, 255, 255, 223, 255,
    255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223,
    255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255, 253, 255, 255, 247,
    255, 127, 255, 255, 255, 253, 255, 255, 247,  15,   0,   0, 255, 251, 255, 127,
     15,   0,   0,   0, 255,   3, 255, 255
};

static UINT8 cased_table_2[400] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   5,   6,   4,
      4,   4,   4,   4,   7,   8,   9,  10,   0,   0,  11,  12,  13,  14,   4,  15,
      4,   4,   4,   4,  16,   4,   4,   4,   4,  17,  18,   4,  19,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,  20,  21,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   4,  22,
      0,   0,   0,   0,  23,  21,   0,   0,   4,   4,   4,   4,   4,   4,   0,   0,
      4,   4,   4,   4,   4,   4,   4,   4,  22,   4,  24,  25,   4,  26,  27,  28,
      0,   0,   0,  29,  30,   0,   0,   0,  31,  32,  33,   4,  34,   0,   0,   0,
      0,   0,   0,   0,   0,  35,   4,  36,   0,   0,   0,   0,   0,   0,   0,   0,
      4,   4,   4,   4,   4,   4,   4,  37,   4,  38,   0,   0,   0,   0,   0,   0,
      0,   0,   4,  39,  25,   0,   0,   0,   0,  40,   4,   4,  41,   4,  42,  43,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  44,   5,  23,   4,   4,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  45,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   0,
      4,   4,  46,   0,   0,  44,  47,  48,   0,   0,   0,  49,  50,  51,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  52,  53,   0,   0,
      0,   0,   0,   0,   4,  54,   4,  54,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      4,   4,  55,   4,  56,  57,  58,   4,  59,  60,  61,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,  62,  63,   5,  55,  55,  64,  64,  65,  65,  66,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  67,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   4,   4,  68,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  44,  69,  69,  36,   0,   0,   0
};

static UINT8 cased_table_3[144] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,  12,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  13,   3,  14,
      3,   3,  15,  16,   3,   3,  17,   3,   3,   3,   3,   3,  18,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  19,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  20,  21,   3,   3,   3,  22,
      3,   3,   3,   3,  23,   3,   3,   3,  24,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 cased_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   7,   8,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_cased(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = cased_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = cased_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = cased_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = cased_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Case_Ignorable. */

static UINT8 case_ignorable_table_1[816] = {
      0,   0,   0,   0, 128,  64,   0,   4,   0,   0,   0,  64,   1,   0,   0,   0,
      0, 161, 144,   1,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,  48,   4,
    176,   0,   0,   0, 248,   3,   0,   0,   0,   0,   0, 130,   0,   0, 254, 255,
    255, 255, 255, 191, 182,   0,   0,   0,   0,   0,  16,   0,  63,   0, 255,  23,
      1, 248, 255, 255,   0,   0,   1,   0,   0,   0, 192, 191, 255,  61,   0,   0,
      0, 128,   2,   0, 255,   7,   0,   0, 192, 255,   1,   0,   0, 248,  63,  36,
      0,   0, 192, 255, 255,  63,   0,   0,   0,   0,   0,  14,   0,   1,   3, 255,
      0, 254, 255, 255,   7,   0,   0,   0,   0,   0,   0,  20, 254,  33, 254,   0,
     12,   0,   2,   0,   2,   0,   0,   0,   0,   0,   0,  16,  30,  32,   0,   0,
     12,   0,   0,  64,   6,   0,   0,   0, 134,  57,   2,   0,   0,   0,  35,   0,
    190,  33,   0,   0,  12,   0,   0, 252,   0,   0,   0, 144,  30,  32,  96,   0,
     12,   0,   0,   0,   4,   0,   0,   0,   1,  32,   0,   0,  17,   0,   0,   0,
      0,   0,   0, 208, 193,  61,  96,   0,  64,  48,   0,   0,   3,   0,   0,   0,
      0,   0,   0,  24,   0,   4,  92,   0,   0,   0, 242,   7, 192, 127,   0,   0,
      0,   0, 242,  31,  64,  63,   0,   0,   0,   0,   0,   3,   0,   0, 160,   2,
      0,   0, 254, 127, 223, 224, 255, 254, 255, 255, 255,  31,  64,   0,   0,   0,
      0, 224, 253, 102,   0,   0,   0, 195,   1,   0,  30,   0, 100,  32,   0,  32,
      0,   0,   0, 224,   0,   0,  28,   0,   0,   0,  12,   0,   0,   0, 176,  63,
     64, 254, 143,  32,   0, 248,   0,   0,   8,   0,   0,   0,  96,   0,   0,   0,
      0,   2,   0,   0, 135,   1,   4,  14,   0,   0, 128,   9,   0,   0,  64, 127,
    229,  31, 248, 159, 128,   0, 255, 255, 255, 127,   0,   0,  15,   0,   0,   0,
      0,   0, 208,  23,   0, 248,  15,   0,  60,  59,   0,   0,  64, 163,   3,   0,
      0, 240, 207,   0,   0,   0,   0,  63,   0,   0, 247, 255, 253,  33,  16,   3,
      0, 240, 255, 255, 255,   7,   0,   1,   0,   0,   0, 248,   0,   0,   0, 160,
      3, 224,   0, 224,   0, 224,   0,  96,   0, 248,   0,   3, 144, 124,   0,   0,
    223, 255,   2, 128,   0,   0, 255,  31, 255, 255,   1,   0,   0,   0,   0,  48,
      0, 128,   3,   0,   0, 128,   0, 128,   0, 128,   0,   0,  32,   0,   0,   0,
      0,  60,  62,   8,   0,   0,   0, 126,   0,   0,   0, 112,   0,   0,  32,   0,
      0,  16,   0,   0,   0, 128, 247, 191,   0,   0,   0, 240,   0,   0,   3,   0,
      0,   7,   0,   0,   0,   0,  28,   3,  68,   8,   0,   0,  96,  16,   0,   0,
     48,   0,   0,   0, 255, 255,   3, 128, 192,  63,   0,   0, 128, 255,   3,   0,
      0,   0, 200,  51,   0, 126, 102,   0,   8,  16,   0,   0,   0,   0,   1,  16,
      0,   0, 157, 193,   2,   0,   0,  32,   0,  48,  88,   0,   0,  14,   0,   0,
     32,  33,   0,   0,   0,   0, 252, 255, 255, 255,   8,   0, 255, 255,   0,   0,
      0,   0,  36,   0,   0,   0,   0, 128,   0,   0,   0, 192,   8,   0,   0,  14,
      0,   0,   0,  32,   0,   0, 192,   7, 191, 255, 255, 255, 255, 255, 253,   7,
    110, 240,   0,   0,   0,   0,   0, 135, 240,   0,   0,   0,   0,  24,   0,   0,
     60,   0,   0,   0,   0,   0,   0, 255, 127,   0,   0,   0,   0,   0,  25, 128,
      0,   0, 120,  38,   4,  32,   0,   0, 128, 239,  31,   0,   0,   0,   8,   0,
      0,   0, 192, 127,   0, 158,   0,   0,   0, 128, 211,  64, 248,   7,   0,   0,
    192,  31,  31,   0,  92,   0,   0,  64,   0,   0, 248, 133,  13,   0,   0,   0,
      0,   0,  60, 176,   1,   0,   0,  48,   0,   0, 248, 167,   0,  40, 191,   0,
    188,  15,   0,   0,   0, 128, 255,   6,   0,   0,   0,  88,   0,   0, 240,  12,
    254,   7,   0,   0,   0,   0, 248, 121, 128,   0, 126,  14,   0, 252, 127,   3,
      0,   0, 127, 191, 255, 252, 109,   0,   0,   0, 126, 180, 191,   0,   0,   0,
      0,   0, 163,   0,   0,   0,  24,   0,   0,   0, 255,   1,   0,   0,  31,   0,
      0,   0, 127,   0,   0, 128, 255, 255,  27,   0,   0,   0,   0,   0, 239, 111,
      0,   0,   0,  96, 255,  63, 255, 255, 128,   3, 248, 255, 231,  15,   0,   0,
      0,  60,   0,   0,  28,   0,   0,   0, 255, 255, 127, 248, 255,  31,  32,   0,
     16,   0,   0, 248, 254, 255,   0,   0, 127, 255, 255, 249, 219,   7,   0,   0,
      0,   0, 255,  63,   0,  64,   0,   0,   0, 240,   0,   0, 240,  15,   0,   0
};

static UINT8 case_ignorable_table_2[656] = {
      0,   1,   2,   3,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   5,   6,   6,   6,   6,   6,   7,   8,   0,   0,   0,
      0,   0,   0,   0,   9,   0,   0,   0,   0,   0,  10,   0,  11,  12,  13,  14,
     15,   0,  16,  17,   0,   0,  18,  19,  20,   5,  21,   0,   0,  22,   0,  23,
     24,  25,  26,   0,  27,   0,  28,   6,  29,  30,  31,  32,  33,  34,  35,  36,
     37,  34,  38,  39,  37,  34,  40,  41,  33,  42,  43,  44,  45,   0,  46,   0,
     47,  48,  49,  44,  33,  42,  50,  44,  51,  52,  35,  44,  33,   0,  53,   0,
      0,  54,  55,   0,   0,  56,  57,   0,  58,  59,   0,  60,  61,  62,  63,   0,
      0,  64,  65,  66,  67,   0,   0,  34,   0,   0,  68,   0,   0,   0,   0,   0,
     69,  70,  70,  70,   0,  71,  72,   0,  73,   0,  74,   0,  75,  76,   0,   0,
      0,  77,   0,   0,   0,   0,   0,   0,  78,   0,  79,  80,   0,  81,  82,   0,
     83,  84,  45,  85,  51,  86,   0,  87,   0,  88,   0,  89,   0,   0,  90,  91,
      0,  92,   6,  93,  94,   6,   6,   6,   0,   0,   0,   0,   0,  95,  96,  97,
     98,  99,   0, 100, 101,   0,   5, 102,   0,   0,   0, 103,   0,   0,   0, 104,
      0,   0,   0, 105,   0,   0,   0,   6,   0, 106,   0,   0,   0,   0,   0,   0,
    107, 108,   0,   0, 109,   0,   0, 110, 111,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  89, 112,   0,   0, 113, 114,   0,   0, 115,
      6,  51,   0,  17, 116,   0,   0, 117, 118, 119,   0,   0,   0,   0, 120, 121,
      0, 122, 123,   0,  29, 124, 106,  75,   0, 125, 126, 127,   0, 128, 129, 130,
      0,   0,  94, 131,   0,   0,   0, 132,   2,   0,   0,   0,   0, 133,  29,   0,
    134, 135, 136,   0,   0,   0,   0, 137,   1,   2,   3,  17, 138,   0,   0, 139,
      0,   0,   0,   0,   0,   0,   0, 140,   0,   0,   0,   0,   0,   0,   0,   3,
      0,   0,   0, 141,   0,   0,   0,   0,   0,   0,   0,   0, 142, 143,   0,   0,
    144, 145,   0,   0,   0,   0,   0,  75,   0, 146,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 147,   0,   0,   0,   0,  22,   0, 148,   0,   0,   0,
     33, 149, 150, 151,  51, 152, 153,   0,  29, 154,   0, 155,  51, 156, 157,   0,
      0, 158,   0,   0,   0,   0, 137, 159,  51,  52,   3, 160,   0,   0,   0,   0,
      0, 149, 161,   0,   0, 162, 163,   0,   0,   0,   0,   0,   0, 164, 165,   0,
      0, 166,   3,   0,   0, 167,   0,   0,  68, 168,   0,   0,   0,   0,   0,   0,
      0, 169,   0,   0,   0,   0,   0,   0,   0, 170,  74,   0,   0,   0, 171,   3,
    172, 173, 174,   0, 175,   0,   0,   0,   0, 176,   0,   0, 133, 177,   0,   0,
      0, 178, 179,   0, 180,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 181,
      0, 182,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 183,
      0, 184,  83,   0,   0,   0,   0,   0,   0,   0, 106,   0, 185,   0,   0, 186,
      0,   0,   0,   0,   0,   0,   0, 187,   0,   0,   0,   0, 188,  83,   0,   0,
      6, 189, 150,   0,   0,   0,   0,   0,   0,   0,   0, 190, 191, 192,   0,   0,
      0,   0, 193,   0,   0,   0,   0,   0,   6, 194,   6, 195, 196, 197,   0,   0,
    198, 199,   0,   0,   0,   0,   0,   0,   0, 200,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 201,   0, 202,   0,   0,   0,   0,   0,   0, 184,   0,
      0,   0, 203,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  94,
     33,   6,   6,   6,   0,   0,   0,   0,   6,   6,   6,   6,   6,   6,   6, 135
};

static UINT8 case_ignorable_table_3[384] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,   1,  17,   1,   1,   1,  18,  19,  20,  21,  22,  23,  24,   1,  25,
     26,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  27,  28,  29,   1,
     30,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     31,   1,   1,   1,  32,   1,  33,  34,  35,  36,  37,  38,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  39,   1,   1,  40,  41,
      1,  42,  43,  44,   1,   1,   1,  45,   1,   1,  46,   1,   1,  47,  48,  49,
     50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,   1,  61,  62,  63,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  64,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  65,  66,   1,   1,   1,  67,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  68,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  69,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  70,
      1,  71,  72,   1,   1,   1,   1,   1,   1,   1,  73,   1,   1,   1,   1,   1,
     74,  75,  76,   1,   1,   1,   1,   1,  77,  78,   1,   1,   1,   1,   1,   1,
      1,   1,   1,  79,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     80,  81,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 case_ignorable_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   6,   2,   7,   2,   8,   9,  10,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
     11,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_case_ignorable(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = case_ignorable_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = case_ignorable_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = case_ignorable_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = case_ignorable_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Changes_When_Casefolded. */

static UINT8 changes_when_casefolded_table_1[236] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0, 255, 255, 127, 255,
     85,  85,  85,  85,  85,  85,  85, 170, 170,  86,  85,  85,  85,  85,  85, 171,
    214, 206, 219, 177, 213, 210, 174,  17, 176, 173, 170,  74,  85,  85, 214,  85,
     85,  85,   5, 108, 122,  85,   0,   0,  32,   0,   0,   0,   0,   0,  69, 128,
     64, 215, 254, 255, 251,  15,   0,   0,   4, 128,  99,  85,  85,  85, 179, 230,
    255, 255, 255, 255, 255, 255,   0,   0,   1,  84,  85,  85, 171,  42,  85,  85,
     85,  85, 254, 255, 255, 255, 127,   0, 128,   0,   0,   0, 191,  32,   0,   0,
      0,   0,   0,  63, 255,   1, 255, 255, 255, 255, 255, 231,  85,  85,  21,  76,
      0, 255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 170,   0, 255,   0,   0,
    255, 255, 156,  31, 156,  31,   0,  15,   0,  31, 156,  31,  64,  12,   4,   0,
      8,   0,   0,   0,   0,   0, 192, 255, 157, 234,  37, 192,   5,  40,   4,   0,
     85,  21,   0,   0,  85,  85,  85,   5,  84,  85,  84,  85,  85,  85,   0, 106,
     85,  40,  69,  85,  85, 125,  95,  85, 245,   2,  65,   1,   0,   0, 255, 255,
    127,   0, 248,   0, 255,   0,   0,   0, 255, 255,  15,   0,   0,   0, 255, 247,
    255, 247,  55,   0, 255, 255,   7,   0,   3,   0,   0,   0
};

static UINT8 changes_when_casefolded_table_2[320] = {
      0,   0,   1,   0,   0,   2,   3,   0,   4,   5,   6,   7,   8,   9,  10,  11,
      4,  12,  13,   0,   0,   0,   0,   0,   0,   0,  14,  15,  16,  17,  18,  19,
     20,  21,   0,   4,  22,   4,  23,   4,   4,  24,  25,   0,  26,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  20,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28,
      0,   0,   0,   0,  29,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      4,   4,   4,   4,  31,   4,   4,   4,  32,  33,  34,  35,  20,  36,  37,  38,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  39,   0,  21,  40,   0,   0,   0,
      0,   0,   0,   0,   0,  41,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     20,  21,   0,  42,   4,   4,   4,  43,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   4,  44,  45,   0,   0,   0,   0,  46,   4,  47,  48,  49,  50,   2,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51,  20,  20,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  52,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
     20,  53,   0,   0,   0,  51,  54,   0,   0,   0,   0,  55,  56,   0,   0,   0,
      0,   0,   0,   0,  20,  57,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  20,  58,   0,   0,   0,   0,   0,   0
};

static UINT8 changes_when_casefolded_table_3[128] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,  12,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  13,   3,  14,
      3,   3,  15,   3,   3,   3,  16,   3,   3,   3,   3,   3,  17,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  18,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,  19,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 changes_when_casefolded_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   2,   7,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_changes_when_casefolded(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = changes_when_casefolded_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = changes_when_casefolded_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = changes_when_casefolded_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = changes_when_casefolded_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Changes_When_Casemapped. */

static UINT8 changes_when_casemapped_table_1[244] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0, 255, 255, 127, 255,
    255, 255, 255, 255, 255, 255, 255, 254, 255, 223, 255, 247, 255, 243, 255, 179,
    240, 255, 255, 255, 253, 255,  15, 252, 255, 255, 223,  26, 107, 159,  38,  32,
    141,  31,   4,  96,  32,   0,   0,   0,   0,   0, 207, 184,  64, 215, 255, 255,
    251, 255, 255, 255, 255, 255, 227, 255, 255, 255, 191, 239,   3, 252, 255, 255,
    255, 255, 254, 255, 255, 255, 127,   0, 254, 255, 255, 255, 255,   0,   0,   0,
    191,  32, 255, 255, 255, 255, 255, 231, 255, 255,  63,  63, 255,   1, 255, 255,
      0,   0,   0,  34,   0,  64,   0,   0, 255, 255, 255,  79,  63,  63, 255, 170,
    255, 255, 255,  63, 255, 255, 223,  95, 220,  31, 207,  15, 255,  31, 220,  31,
     64,  12,   4,   0,  24,   0,   0,   0,   0,   0, 192, 255, 255,   3,   0,   0,
    255, 255, 109, 192,  15, 120,  12,   0, 191,  32,   0,   0, 255,  63,   0,   0,
    255, 255, 255,  15, 252, 255, 252, 255, 255, 255,   0, 254, 255,  56, 223, 255,
    255, 127, 255, 255, 255,   7, 195,   3,   0,   0,  96,   0,   0,   0,   8,   0,
      0,   0, 255, 255, 127,   0, 248,   0, 255, 255,   0,   0, 255, 255,  15, 255,
      0,   0, 255, 247, 255, 247, 183, 255, 251, 255, 251,  27, 255, 255,   7,   0,
     15,   0,   0,   0
};

static UINT8 changes_when_casemapped_table_2[320] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   5,   4,   4,   6,   7,   8,   4,
      4,   9,  10,  11,  12,   0,   0,   0,   0,   0,  13,  14,  15,  16,  17,  18,
      4,   4,   4,   4,  19,   4,   4,   4,   4,  20,  21,  22,  23,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,  24,  25,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   4,  26,
      0,   0,   0,   0,  27,  25,   0,   0,   0,   0,   0,  28,  29,   0,   0,   0,
      4,   4,   4,   4,  30,   4,   4,   4,  26,   4,  31,  32,   4,  33,  34,  35,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  29,   4,  37,   0,   0,   0,
      0,   0,   0,   0,   0,  38,   4,  39,   0,   0,   0,   0,   0,   0,   0,   0,
      4,   4,   4,  40,   4,   4,   4,  41,   4,  42,   0,   0,   0,   0,   0,   0,
      0,   0,   4,  43,  44,   0,   0,   0,   0,  45,   4,  46,  47,  48,  49,  50,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51,  52,   4,   4,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  53,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   0,
      4,   4,  54,   0,   0,  52,  55,  44,   0,   0,   0,  56,  57,  58,   0,   0,
      0,   0,   0,   0,   4,  59,   4,  59,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   4,   4,  60,   0,   0,   0,   0,   0
};

static UINT8 changes_when_casemapped_table_3[128] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,  12,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  13,   3,  14,
      3,   3,  15,   3,   3,   3,  16,   3,   3,   3,   3,   3,  17,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  18,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,  19,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 changes_when_casemapped_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   2,   7,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_changes_when_casemapped(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = changes_when_casemapped_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = changes_when_casemapped_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = changes_when_casemapped_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = changes_when_casemapped_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Changes_When_Lowercased. */

static UINT8 changes_when_lowercased_table_1[220] = {
      0,   0,   0,   0, 254, 255, 255,   7, 255, 255, 127, 127,  85,  85,  85,  85,
     85,  85,  85, 170, 170,  84,  85,  85,  85,  85,  85,  43, 214, 206, 219, 177,
    213, 210, 174,  17, 176, 173, 170,  74,  85,  85, 214,  85,  85,  85,   5, 108,
    122,  85,   0,   0,   0,   0,  69, 128,  64, 215, 254, 255, 251,  15,   0,   0,
      0, 128,   0,  85,  85,  85, 144, 230, 255, 255, 255, 255, 255, 255,   0,   0,
      1,  84,  85,  85, 171,  42,  85,  85,  85,  85, 254, 255, 255, 255, 127,   0,
    191,  32,   0,   0, 255, 255,  63,   0,   0,   0, 255, 255, 255, 255, 255, 231,
     85,  85,  21,  64,   0, 255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 170,
      0, 255,   0,   0,   0, 255,   0,  31,   0,  31,   0,  15,   0,  31,   0,  31,
     64,  12,   4,   0,   8,   0,   0,   0,   0,   0, 192, 255, 157, 234,  37, 192,
      5,  40,   4,   0,  85,  21,   0,   0,  85,  85,  85,   5,  84,  85,  84,  85,
     85,  85,   0, 106,  85,  40,  69,  85,  85, 125,  95,  85, 245,   2,  65,   1,
      0,   0,  32,   0, 255,   0,   0,   0, 255, 255,  15,   0,   0,   0, 255, 247,
    255, 247,  55,   0, 255, 255,   7,   0,   3,   0,   0,   0
};

static UINT8 changes_when_lowercased_table_2[288] = {
      0,   0,   1,   0,   0,   0,   2,   0,   3,   4,   5,   6,   7,   8,   9,  10,
      3,  11,  12,   0,   0,   0,   0,   0,   0,   0,   0,  13,  14,  15,  16,  17,
     18,  19,   0,   3,  20,   3,  21,   3,   3,  22,  23,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  18,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  18,  25,
      0,   0,   0,   0,  26,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      3,   3,   3,   3,  28,   3,   3,   3,  29,  30,  31,  32,  30,  33,  34,  35,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  36,   0,  19,  37,   0,   0,   0,
      0,   0,   0,   0,   0,  38,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     18,  19,   0,  39,   3,   3,   3,  40,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   3,  41,  42,   0,   0,   0,   0,  43,   3,  44,  45,  46,  47,  48,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
     18,  49,   0,   0,   0,  26,  50,   0,   0,   0,   0,  51,  52,   0,   0,   0,
      0,   0,   0,   0,  18,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  18,  54,   0,   0,   0,   0,   0,   0
};

static UINT8 changes_when_lowercased_table_3[128] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  12,
      3,   3,  13,   3,   3,   3,  14,   3,   3,   3,   3,   3,  15,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  16,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,  17,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 changes_when_lowercased_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   2,   7,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_changes_when_lowercased(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = changes_when_lowercased_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = changes_when_lowercased_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = changes_when_lowercased_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = changes_when_lowercased_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Changes_When_Titlecased. */

static UINT8 changes_when_titlecased_table_1[264] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0,   0,   0,   0, 128,
    255, 255, 127, 255, 170, 170, 170, 170, 170, 170, 170,  84,  85, 171, 170, 170,
    170, 170, 170, 212,  41,  17,  36,  70,  42,  33,  81, 162, 208,  86,  85, 181,
    170, 170,  43, 170, 168, 170,  10, 144, 133, 170, 223,  26, 107, 159,  38,  32,
    141,  31,   4,  96,  32,   0,   0,   0,   0,   0, 138,  56,   0,   0,   1,   0,
      0, 240, 255, 255, 255, 127, 227, 170, 170, 170,  47,   9,   0,   0, 255, 255,
    255, 255, 255, 255,   2, 168, 170, 170,  84, 213, 170, 170, 170, 170,   0,   0,
    254, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,  63, 255,   1,   0,   0,
      0,   0,   0,  34,   0,  64,   0,   0, 170, 170, 234,  15, 255,   0,  63,   0,
    255,   0, 255,   0,  63,   0, 255,   0, 255,   0, 255,  63, 255,   0, 223,  64,
    220,   0, 207,   0, 255,   0, 220,   0,  16,   0,   0,   0, 255,   3,   0,   0,
     98,  21,  72,   0,  10,  80,   8,   0, 191,  32,   0,   0, 170,  42,   0,   0,
    170, 170, 170,  10, 168, 170, 168, 170, 170, 170,   0, 148, 170,  16, 154, 170,
    170,   2, 160, 170,  10,   5, 130,   2,   0,   0,  64,   0,   0,   0,   8,   0,
    127,   0, 248,   0,   0, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0, 255,
    255, 255, 255,  15,   0,   0, 128, 255, 251, 255, 251,  27, 255, 255,   7,   0,
    252, 255, 255, 255,  15,   0,   0,   0
};

static UINT8 changes_when_titlecased_table_2[304] = {
      0,   0,   0,   1,   0,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,
      5,  13,  14,  15,  16,   0,   0,   0,   0,   0,  17,  18,  19,  20,  21,  22,
      0,  23,  24,   5,  25,   5,  26,   5,   5,  27,   0,  28,  29,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30,
      0,   0,   0,   0,  31,   0,   0,   0,   0,   0,   0,  32,  33,   0,   0,   0,
      5,   5,   5,   5,  34,   5,   5,   5,  35,  36,  37,  38,  36,  39,  40,  41,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,  23,  42,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  23,  43,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  23,  24,  44,   5,   5,   5,  45,  24,  46,   0,   0,   0,   0,   0,   0,
      0,   0,   5,  47,  48,   0,   0,   0,   0,  49,   5,  50,  51,  52,  53,  54,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,  23,  24,  24,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  56,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,  57,  58,   0,   0,   0,  59,  60,   0,   0,   0,   0,  61,  62,   0,   0,
      0,   0,   0,   0,   0,   0,  24,  63,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  64,  65,   0,   0,   0,   0,   0
};

static UINT8 changes_when_titlecased_table_3[128] = {
      0,   1,   2,   3,   3,   3,   3,   3,   3,   4,   3,   3,   3,   3,   5,   6,
      7,   3,   8,   3,   3,   3,   9,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  10,   3,  11,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  12,   3,  13,
      3,   3,  14,   3,   3,   3,  15,   3,   3,   3,   3,   3,  16,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  17,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,  18,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 changes_when_titlecased_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   2,   7,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_changes_when_titlecased(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = changes_when_titlecased_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = changes_when_titlecased_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = changes_when_titlecased_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = changes_when_titlecased_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Changes_When_Uppercased. */

static UINT8 changes_when_uppercased_table_1[268] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   0,  32,   0,   0,   0,   0, 128,
    255, 255, 127, 255, 170, 170, 170, 170, 170, 170, 170,  84,  85, 171, 170, 170,
    170, 170, 170, 212,  41,  17,  36,  70,  42,  33,  81, 162,  96,  91,  85, 181,
    170, 170,  45, 170, 168, 170,  10, 144, 133, 170, 223,  26, 107, 159,  38,  32,
    141,  31,   4,  96,  32,   0,   0,   0,   0,   0, 138,  56,   0,   0,   1,   0,
      0, 240, 255, 255, 255, 127, 227, 170, 170, 170,  47,   9,   0,   0, 255, 255,
    255, 255, 255, 255,   2, 168, 170, 170,  84, 213, 170, 170, 170, 170,   0,   0,
    254, 255, 255, 255, 255,   0,   0,   0, 255, 255, 255, 231,   0,   0,   0,  63,
    255,   1,   0,   0,   0,   0,   0,  34,   0,  64,   0,   0, 170, 170, 234,  15,
    255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 255,   0, 255,   0, 255,  63,
    255, 255, 223,  80, 220,  16, 207,   0, 255,   0, 220,  16,  16,   0,   0,   0,
    255,   3,   0,   0,  98,  21,  72,   0,  10,  80,   8,   0, 191,  32,   0,   0,
    170,  42,   0,   0, 170, 170, 170,  10, 168, 170, 168, 170, 170, 170,   0, 148,
    170,  16, 154, 170, 170,   2, 160, 170,  10,   5, 130,   2,   0,   0,  64,   0,
      0,   0,   8,   0, 127,   0, 248,   0,   0, 255, 255, 255, 255, 255,   0,   0,
      0,   0,   0, 255, 255, 255, 255,  15,   0,   0, 128, 255, 251, 255, 251,  27,
    255, 255,   7,   0, 252, 255, 255, 255,  15,   0,   0,   0
};

static UINT8 changes_when_uppercased_table_2[320] = {
      0,   0,   0,   1,   0,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,
      5,  13,  14,  15,  16,   0,   0,   0,   0,   0,  17,  18,  19,  20,  21,  22,
      0,  23,  24,   5,  25,   5,  26,   5,   5,  27,   0,  28,  29,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  23,  30,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31,
      0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,  33,  34,   0,   0,   0,
      5,   5,   5,   5,  35,   5,   5,   5,  36,  37,  38,  39,  24,  40,  41,  42,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34,  23,  43,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  23,  44,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  23,  24,  45,   5,   5,   5,  46,  24,  47,   0,   0,   0,   0,   0,   0,
      0,   0,   5,  48,  49,   0,   0,   0,   0,  50,   5,  51,  52,  53,  54,  55,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  56,  23,  24,  24,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,  58,  59,   0,   0,   0,  60,  61,   0,   0,   0,   0,  62,  63,   0,   0,
      0,   0,   0,   0,   0,   0,  24,  64,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  65,  66,   0,   0,   0,   0,   0
};

static UINT8 changes_when_uppercased_table_3[128] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,  12,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  13,   3,  14,
      3,   3,  15,   3,   3,   3,  16,   3,   3,   3,   3,   3,  17,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  18,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,  19,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 changes_when_uppercased_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   2,   7,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_changes_when_uppercased(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = changes_when_uppercased_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = changes_when_uppercased_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = changes_when_uppercased_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = changes_when_uppercased_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Cntrl. */

static UINT8 cntrl_table_1[64] = {
    255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,
    255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 cntrl_table_2[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 cntrl_table_3[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 cntrl_table_4[17] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1
};

UINT32 lookup_cntrl(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 16;
    block = cntrl_table_4[block];
    offset = (codepoint >> 12) & 0xF;
    block = cntrl_table_3[(block << 4) + offset];
    offset = (codepoint >> 8) & 0xF;
    block = cntrl_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x1F;
    block = cntrl_table_1[(block << 5) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Dash. */

static UINT8 dash_table_1[128] = {
      0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   4,   0,   0,   0,   0,   0,  64,   1,   0,   0,   0,   0,   0,   0,   0,
     64,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,
      0,   0,   8,   0,   0,   0,   0,   8,   0,   8,   0,   0,   0,   0,   0,   0,
      0,   0,   4,   0,   0,   0,   0,   0,   0,   0, 128,   4,   0,   0,   0,  12,
      1,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   1,   0,
      0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   0,
      0,   0,   0,   1,   8,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0
};

static UINT8 dash_table_2[88] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   2,   1,   3,   1,   1,   1,   1,   1,   1,   1,
      4,   1,   1,   1,   1,   1,   1,   1,   5,   6,   7,   1,   1,   1,   1,   1,
      8,   1,   1,   1,   1,   1,   1,   1,   9,  10,   1,   1,   1,   1,   1,   1,
     11,   1,  12,   1,   1,   1,   1,   1,  13,  14,   1,   1,  15,   1,   1,   1,
      1,   1,   0,   1,   1,   1,   1,   1
};

static UINT8 dash_table_3[128] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   3,   1,   4,   1,   1,   1,
      5,   6,   1,   1,   1,   1,   1,   7,   8,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   9,
      1,   1,   1,   1,   1,   1,   1,  10,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 dash_table_4[68] = {
      0,   1,   1,   2,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_dash(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = dash_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = dash_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = dash_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = dash_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Decomposition_Type. */

static UINT8 decomposition_type_table_1[616] = {
      0,   0,   0,   0,  11,   0,   0,   0,   3,   0,  15,   0,   0,   0,   0,   3,
      0,   0,  15,  15,   3,   3,   0,   0,   3,  15,  15,   0,   6,   6,   6,   0,
      1,   1,   1,   1,   1,   1,   0,   1,   0,   1,   1,   1,   1,   1,   1,   0,
      1,   1,   0,   0,   0,   0,   1,   1,   1,   0,   3,   3,   1,   1,   1,   3,
      3,   0,   0,   1,   1,   3,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,
      3,   3,   3,   3,   3,   1,   1,   1,   1,   0,   1,   1,   1,   3,   3,   3,
     15,  15,  15,  15,  15,   0,   0,   0,   0,   0,   3,   0,   0,   0,   1,   0,
      3,   3,   3,   1,   1,   3,   3,   0,   3,   3,   3,   0,   0,   3,   0,   0,
      0,   1,   0,   0,   0,   1,   1,   0,   0,   3,   3,   3,   3,   0,   0,   0,
      1,   0,   1,   0,   1,   0,   0,   1,   0,   1,   1,   3,  15,  15,  15,   0,
     15,  15,   0,  15,  15,  15,  14,  14,  14,  14,  14,  14,  14,  14,  14,   0,
      0,   0,   0,  15,   1,   1,   3,   1,   0,   1,   0,   1,   1,   3,   1,   3,
      1,   1,   3,   0,   1,   1,   3,   3,   3,   3,   3,  11,   0,  11,   0,   0,
      0,   0,   0,  11,   3,   0,   3,   3,   3,   0,   3,   0,  15,  15,   0,   0,
     14,   0,   0,   0,   3,   3,   5,   3,   0,   3,   5,   5,   5,   5,   5,   5,
      0,   5,   3,   0,   0,   5,   5,   5,   5,   5,   0,   0,  15,   3,  15,   0,
      5,   0,   1,   0,   5,   0,   1,   1,   5,   5,   0,   5,   5,   3,   3,   3,
      3,   5,   0,   3,   5,   0,   0,   0,   6,   6,   6,   6,   0,   6,   0,   0,
      3,   3,   0,   3,   2,   2,   2,   2,   3,   3,   2,   2,   2,   2,   2,   0,
     14,  15,   0,   0,  17,   0,   0,   0,   3,   0,   1,  16,   0,   0,   1,  16,
     13,   2,   2,   2,  13,  13,  13,  13,   2,   2,   2,  13,   3,  13,  13,  13,
      3,   3,   3,  13,   0,  15,   0,   0,   5,   5,   1,   1,   8,   4,   8,   4,
      7,   9,   8,   4,   8,   4,   7,   9,   8,   4,   0,   0,   0,   0,   0,   8,
      4,   7,   9,   8,   4,   8,   4,   8,   4,   8,   8,   4,   7,   8,   4,   7,
      8,   8,   8,   8,   4,   4,   4,   4,   4,   4,   4,   7,   7,   7,   7,   7,
      7,   7,   7,   9,   9,   9,   9,   9,   9,   8,   8,   8,   8,   4,   4,   4,
      4,   7,   7,   7,   4,   8,   0,   0,   7,   4,   7,   7,   4,   7,   4,   4,
      7,   7,   4,   4,   7,   7,   4,   7,   7,   4,   4,   7,   4,   4,   7,   4,
      7,   7,   7,   4,   0,   0,   7,   7,   7,   4,   4,   4,   7,   4,   7,   4,
      8,   0,   0,   0,  16,  16,  16,  16,  16,  16,   0,   0,  16,   0,   0,  16,
     16,   3,   3,   3,  12,  12,  12,   0,  12,  12,  12,  12,   8,   9,   8,   0,
      8,   0,   8,   9,   8,   9,   8,   9,   8,   8,   4,   8,   4,   8,   4,   7,
      9,   8,   4,   8,   9,   8,   4,   7,   4,   0,   0,   0,   0,  17,  17,  17,
     17,  17,  17,  17,  17,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,   0,
      0,   0,  10,  10,  10,   0,   0,   0,  17,  17,  17,   0,   0,  15,  15,  15,
     15,   0,  15,  15,   5,   0,   5,   5,   0,   0,   5,   0,   0,   5,   5,   0,
      5,   5,   5,   0,   5,   0,   5,   0,   0,   0,   5,   5,   5,   0,   0,   5,
      0,   5,   0,   5,   0,   0,   0,   5,   3,   3,   3,   2,  13,   0,   0,   0,
     13,  13,  13,   0,   2,   2,   0,   0
};

static UINT8 decomposition_type_table_2[2272] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   2,   3,   4,   5,   6,   7,
      8,   9,   8,   8,  10,  11,  10,  12,   8,   9,   8,   8,  10,  11,  10,   9,
      8,   8,   8,   8,  13,   8,   8,   8,   8,  12,   8,   8,  14,   8,  10,  15,
     16,   8,  17,   8,  12,   8,   8,   8,   8,  12,   8,   8,   8,   8,   8,  15,
      0,   0,   0,   0,   0,   0,   0,   0,  12,   0,   0,  18,  19,   0,   0,   0,
      0,  20,  20,  21,   8,   8,   8,  22,   8,  13,   8,   8,  23,  12,   8,   8,
      8,   8,   8,   8,   8,   8,   8,  13,   0,  13,   8,   8,   8,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24,  24,  25,   0,
      0,   0,   0,   0,   0,   0,  20,   5,  24,  25,   0,   0,   0,   0,   0,   0,
      9,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,  26,  27,
      0,  21,  11,  22,  19,   0,   0,   0,   0,   0,  13,   8,  19,   0,   0,   0,
      0,   0,  13,  11,  28,  29,   0,   0,   0,   0,   0,   0,  30,   5,  31,   0,
      9,  18,   0,  11,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,  32,   0,
      0,   0,   0,   0,   9,  18,   0,  11,   0,   0,   0,   0,   0,  13,   0,   0,
     33,   0,   0,   0,   8,  13,  13,   8,  13,   8,  13,   8,   8,  12,  12,   0,
      0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  13,  11,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34,  35,   0,
     36,   0,   0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,  32,  19,   0,   0,
      0,   0,   0,   0,   0,   0,   8,   8,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  18,  19,   0,   0,   0,   9,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  27,   0,   0,
      0,   0,   0,   0,   0,   0,  10,  27,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  37,  19,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  13,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     19,  18,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  27,  11,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     18,   0,   0,  32,  27,  18,   0,  19,   0,   0,  32,   0,  18,  38,  17,   0,
     32,   0,   0,   0,  18,   0,   0,  32,  27,  18,   0,  19,   0,   0,  32,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  27,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,
      0,  27,  36,  36,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  32,
      9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39,  24,  24,  39,  24,
     24,  24,  24,  40,  24,  24,  24,  24,  41,  42,  43,   0,   0,   0,  25,   0,
      0,   0,   0,   0,   0,   0,  44,  24,  24,  24,  24,  24,  24,  24,  24,  24,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  45,   0,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  12,   0,
      8,   8,   8,   8,   8,  12,   8,  12,   8,   8,   8,   8,   8,   8,   8,   8,
      8,  12,   8,  12,   8,   8,  46,  46,   8,   8,   8,   8,   8,   8,   8,  12,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  22,   8,  47,
     21,  22,   8,   8,   8,  13,   8,  10,   8,   8,   8,   8,  13,  22,   8,  48,
     49,  50,  30,   0,  51,   3,   0,   0,   0,  30,   0,  52,   3,  53,   0,  54,
      0,   3,   5,   0,   0,   3,   0,   3,   0,   0,   0,   0,  55,  24,  24,  24,
     42,  42,  42,  43,  42,  42,  42,  56,   0,   0,  35,   0,   0,   0,   0,   0,
     57,  34,  58,  59,  59,  60,  61,  62,  63,  64,  65,  66,  66,  67,  68,  59,
     69,  61,  62,   0,  70,  70,  70,  70,  20,  20,  20,  20,  20,  20,  20,  20,
      0,   0,  71,   0,   0,   0,  13,   0,   0,   0,   0,  27,   0,   0,   0,   0,
      0,   0,   0,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  19,  32,  19,   0,   0,   0,   0,   0,  36,   0,  72,  35,   0,   0,   0,
     32,  37,  32,   0,   0,   0,   0,   0,  36,   0,   0,  10,  12,  12,  12,   0,
     12,  12,  12,   0,   0,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   8,   0,  13,  12,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  73,  73,  73,  73,  73,  20,  20,  20,
     20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  74,  73,  73,
     73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  75,   0,   0,   0,   0,   0,
      0,   0,   0,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  19,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  76,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,
     20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,
     20,  20,  20,  20,  20,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  30,   0,
      0,   0,   0,  36,  36,  36,  36,  36,  36,  46,  32,   0,   9,  22,  33,  12,
      0,   0,   0,   0,   0,  19,   3,  78,   0,   0,   0,  36,  36,  36,  36,  36,
     36,  46,  32,   0,   9,  22,  33,  12,   0,   0,   0,   0,   0,  37,  11,  79,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34,  20,  20,  20,
     20,  20,  20,  30,   4,  24,  24,  24,   0,   0,   0,   0,   0,   0,   0,   0,
     20,  20,  20,  20,  20,  20,  20,  30,  20,  20,  20,  20,  20,  20,  20,  20,
     20,  73,   0,   0,  80,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  75,
     73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,
     20,  20,  20,  81,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  82,
     81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  81,  81,  20,  20,  20,  20,  20,  20,  83,  81,  81,  81,
     81,  81,  81,  81,  81,  81,  81,  81,  20,  20,  20,  20,  20,  20,  20,  84,
      0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  25,  55,   0,
      0,   0,   0,   0,   0,   0,   0,  24,   0,   0,  85,   0,   0,   0,   0,   0,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   0,   0,   0,   0,   0,   0,   0,
      8,   8,   8,  12,  36,  10,   8,  11,  36,  33,  13,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  12,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     20,  30,   0,   0,   3,  20,   0,  46,  59,  59,  86,   8,   8,  11,   8,  36,
      9,  22,   8,  15,  87,  88,  88,  88,  88,  88,  88,  88,  88,  88,  88,  88,
     88,  87,  87,  87,  88,  88,  88,  88,  89,  87,  88,  88,  90,   0,   0,   0,
      0,   0,   0,   0,  91,  92,  93,  94,  87,  89,  88,  87,  87,  87,  95,  89,
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,
     96,  96,  96,  96,  96,  96,  96,  96,  96,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  98,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,
     99,  99,  99,  99,  99,  99,  99, 100, 101, 101, 101, 101, 101, 102,  96,  96,
     96,  96,  96,  96, 103,  97,  97,  97,  97,  97,  97, 104,  99, 101, 101, 105,
      0,   0,   0,   0, 106,  99, 107, 108, 109, 107, 110, 107, 106,  98,  97, 107,
     98, 111, 112,  99, 113, 108, 114, 107,  97,  97,  97,  97,  97, 108, 115,  97,
     98, 108,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  96,  96,  96, 116,
      0,   0,   0,   0, 117, 117, 118,   0,   0,   0,   0,   0, 117, 117, 117, 117,
    117, 119, 120,  20, 121, 122, 122, 122, 122, 121, 122,   0, 123, 124, 125, 125,
    126,  93, 127, 128,  92, 127, 129, 129, 129, 129, 128,  93, 127, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 128, 127, 128,  93, 130,
    131, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132,
    132, 132, 132, 132, 132, 132, 132, 132, 133, 134, 134, 134, 134, 134, 134, 134,
    134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 135,
    136, 134, 136, 134, 136, 134, 136, 137, 132, 138, 134, 135,   0,   0,   0,   0,
    139,  40,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24, 140,  24,  39,   0,
      0,   0,   0,   0,   0,   0,  27,  19,   0,   0,  18,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,   0,   0,   0,   0,
      0,   0,  18,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  36,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,   0,
      0,   0,   0,   0,   0,   0,   0,  13,   8,  19,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,   8,
     19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59, 141,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59, 141, 142, 143,  61, 141,  59,  59,  66,  61,
     59,  61,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  66, 144,  61,  59, 141,  59, 141,  59,  59,  59,  59,  59,  59,  66, 144,
     59, 145, 146,  59, 141,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  62,  59,  59,  59,  59,  59,  59,
     59,  59,  59, 146,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  61,  59,  59,  59,  59,  59,  59, 143, 147,  61,  59, 144,  59, 148,   0,
    142, 149, 148,  61, 143, 147, 148, 148, 143, 147, 144,  59, 144,  59,  61, 145,
     59,  59,  66,  59,  59,  59,  59,   0,  61,  61,  66,  59,  59,  59,  59,   0,
     20,  20,  30,   0,  20,  20,  20,  20,  20,  20, 150,  75,  81,  81,  81,  81,
     81,  81,  81,  81,   0,   0,   0,   0,   0,   0,   4,  25,   0,   0,   0,   0,
      0,   0,   0,   0, 151,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    152,   0,   0,   0,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,   0,
     20,  20,  35,   0, 153,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59,  59,  62,   0,
      8,   8,   8,   8,   8,   8,   8,  12,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 decomposition_type_table_3[672] = {
      0,   0,   1,   2,   3,   4,   5,   6,   7,   0,   8,   9,   0,  10,  11,  12,
     13,  14,   0,  15,   0,   0,  16,   0,  17,  18,   0,  19,   0,   0,   0,   0,
      0,   0,   0,   0,  20,  21,   0,  22,  23,  24,   0,   0,   0,  25,  26,  27,
      0,  28,   0,  29,   0,  27,   0,  30,  31,   0,  31,  32,  33,  34,  35,   0,
     36,   0,   0,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38,  39,   0,   0,
      0,   0,   0,   0,  40,  41,  42,   0,  43,  43,  44,  45,  46,  47,  48,  49,
     50,  51,  52,   0,  53,  54,  55,  56,  57,  58,  59,  60,  61,   0,   0,   0,
      0,  62,  63,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  65,  66,   0,  67,   0,   0,   0,   0,
      0,  68,   0,   0,   0,  69,   0,   0,   0,   0,  70,  31,  71,  71,  71,  72,
     73,  74,  75,  76,  77,  71,  78,   0,  79,  80,  81,  82,  83,  84,  83,  85,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  86,   0,   0,  87,   0,  88,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  89,   0,   0,
     43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,
     43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,
     43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,
     43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,
     43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  90,   0,
      0,   0,   0,   0,  43,  43,  43,  43,  91,  92,  43,  93,  94,  95,  96,  97,
     98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 114,   0,
      0,   0, 115,   0, 116,   0,   0,   0,   0,   0,   0,   0,   0, 117,   0,   0,
      0,   0, 118,   0,   0,   0, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 120,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 121, 122, 123,   0,   0,   0,   0,   0,   0,   0,   0,
    124, 125, 126, 127, 128, 129, 124, 124, 124, 124, 130, 124, 124, 124, 124, 131,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 132, 133, 134,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 135, 136, 137,   0, 138, 139,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 140,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     43,  43,  43,  43,  43,  43,  43,  43, 141,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 decomposition_type_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   8,   9,  10,  10,  10,  10,  11,   7,   7,   7,   7,  12,
     13,   7,  14,  15,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  16,   7,   7,  17,  18,  19,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  20,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7
};

UINT32 lookup_decomposition_type(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = decomposition_type_table_4[block];
    offset = (codepoint >> 6) & 0x1F;
    block = decomposition_type_table_3[(block << 5) + offset];
    offset = (codepoint >> 2) & 0xF;
    block = decomposition_type_table_2[(block << 4) + offset];
    offset = codepoint & 0x3;
    value = decomposition_type_table_1[(block << 2) + offset];

    return value;
}

/* The tables and function for Default_Ignorable_Code_Point. */

static UINT8 default_ignorable_code_point_table_1[136] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,
      0, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,
      0,   0,   0, 128,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,   0,
      0, 248,   0,   0,   0,   0,   0,   0,   0, 248,   0,   0,   0, 124,   0,   0,
      0,   0,   0,   0, 255, 255,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,
    255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,
      0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255,   1,
      0,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0, 248,   7,
    255, 255, 255, 255, 255, 255, 255, 255
};

static UINT8 default_ignorable_code_point_table_2[104] = {
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,
      6,   0,   0,   0,   0,   0,   0,   0,   7,   8,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   9,   0,   0,  10,   0,   0,  11,   0,   0,  12,  13,
      0,   0,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15,   0,   0,
     16,  16,  16,  16,  16,  16,  16,  16
};

static UINT8 default_ignorable_code_point_table_3[112] = {
      0,   1,   2,   3,   2,   2,   2,   2,   4,   2,   2,   5,   6,   2,   2,   2,
      7,   2,   2,   2,   2,   2,   2,   2,   8,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   9,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  10,   2,
      2,   2,   2,   2,   2,   2,   2,   2,  11,   2,   2,   2,   2,   2,   2,   2,
     12,  12,  12,  12,  12,  12,  12,  12,   2,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 default_ignorable_code_point_table_4[136] = {
      0,   1,   2,   2,   2,   2,   2,   3,   2,   2,   2,   2,   2,   4,   5,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      6,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_default_ignorable_code_point(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = default_ignorable_code_point_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = default_ignorable_code_point_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = default_ignorable_code_point_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = default_ignorable_code_point_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Deprecated. */

static UINT8 deprecated_table_1[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   0, 128,   2,
      0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0, 252,   0,   0,
      0,   0,   0,   0,   0,   6,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 deprecated_table_2[64] = {
      0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,
      0,   0,   0,   0,   0,   0,   4,   0,   0,   5,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   0,   0,   0,   7,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 deprecated_table_3[96] = {
      0,   1,   1,   2,   1,   1,   1,   3,   1,   1,   1,   4,   1,   1,   1,   1,
      5,   6,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      7,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 deprecated_table_4[68] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_deprecated(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = deprecated_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = deprecated_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = deprecated_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = deprecated_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Diacritic. */

static UINT8 diacritic_table_1[452] = {
      0,   0,   0,   0,   0,   0,   0,  64,   1,   0,   0,   0,   0, 129, 144,   1,
      0,   0, 255, 255, 255, 255, 255, 255, 255, 127, 255, 224,   7,   0,  48,   4,
     48,   0,   0,   0, 248,   0,   0,   0,   0,   0,   0,   2,   0,   0, 254, 255,
    251, 255, 255, 191,  22,   0,   0,   0,   0, 248, 135,   1,   0,   0,   0, 128,
     97,  28,   0,   0, 255,   7,   0,   0, 192, 255,   1,   0,   0, 248,  63,   0,
      0,   0,   0,   3,   0,   0,   0, 255,   0, 254,   7,   0, 248, 255, 255, 127,
      0,   0,   0,  16,   0,  32,  30,   0,   0,   0,   2,   0,   0,  32,   0,   0,
      0,   0,   0, 224,   0,  32,  32,   0,   0,   0,   0,  24,   0,   4,   0,   0,
    128,  95,   0,   0,   0,   0,   0,   4,   0,  31,   0,   0,   0,   0, 160, 194,
    220,   0,   0,   0,  64,   0,   0,   0,   0,   0, 128,   6,  24,  62,   0,   0,
    128, 191,   0,  12,   0,   0,  48,   0,   0, 254,  15,  32,   0,   0,   0,  14,
      0,   0, 224, 159,   0,   0, 255, 127, 254,  15,   0,   0,   0,   0,  16,   0,
     16,   0,   0,   0,   0, 248,  15,   0,   0,  12,   0,   0,   0,   0, 192,   0,
      0,   0,   0,  63, 255,  33, 144,   3,   0, 240, 255, 255, 240, 255,   0,   0,
      0,   0, 224, 255,   0,   0,   0, 160,   3, 224,   0, 224,   0, 224,   0,  96,
      0, 128,   3,   0,   0, 128,   0,   0,   0, 252,   0,   0,   0,   0,   0,  30,
      0, 128,   0, 176,   0,   0,   0,  48,   0,   0,   3,   0,   3,   0,   0,   0,
      0,   7,   0,   0, 255, 255,   3,   0,   0, 120,   0,   0,   0,   0,   8,   0,
     32,   0,   0,   0,   0,   0,   0,  56,   7,   0,   0,   0,   0,   0,  64,   0,
      0,   0,   0, 248,   0,  14,   0,   0,   0,  48,   0,   0, 255, 255,   0,   0,
      0,   0,   1,   0,   0,   0,   0, 192,   8,   0,   0,   0, 191, 255, 255, 255,
    255, 255, 253,   7,  96,   0,   0,   0, 252,   0,   0,   0,  60,   0,   0,   0,
      0,   0,   0,   6,   0,   0,  24,   0,   1,  28,   0,   0,   0,   0,  96,   0,
      0,   6,   0,   0, 192,  31,  31,   0,  68,   0,   0,   0,  12,   0,   0,   0,
      0,   8,   0,   0,   0,   0,   0,  96, 128,   0,   0,   0,  52,   0,   0,   0,
      0,   0, 128,   0,   0,   0,  31,   0,   0,   0, 127,   0,   0, 128, 255, 255,
      0,   0, 239, 111, 255,  63, 255, 255, 127,   0,   0,   0, 128, 227,   7, 248,
    231,  15,   0,   0,   0,  60,   0,   0,   0,  64,   0,   0,   0, 240,   0,   0,
    112,   7,   0,   0
};

static UINT8 diacritic_table_2[512] = {
      0,   0,   1,   2,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,   5,   5,   5,   5,   6,   7,   8,   0,   0,   0,
      0,   0,   0,   0,   9,   0,   0,   0,   0,   0,  10,   0,  11,  12,  13,   0,
      0,   0,  14,   0,   0,   0,  15,  16,   0,   4,  17,   0,   0,  18,   0,  19,
     20,   0,   0,   0,  21,   0,  22,  23,   0,  24,  25,  26,   0,  24,  27,   0,
      0,  24,  27,   0,   0,  24,  27,  28,   0,  24,  29,   0,   0,   0,  27,   0,
      0,  24,  27,   0,   0,  24,  27,   0,   0,  30,  27,   0,   0,   0,  31,   0,
      0,   0,  32,   0,   0,  33,  34,   0,  20,  35,   0,   0,  36,   0,  37,   0,
      0,  38,   0,  39,  40,   0,   0,   0,   0,   0,  28,   0,   0,   0,   0,   0,
     41,   0,   0,   0,   0,   0,  42,   0,   0,  43,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  44,   0,  45,  46,   0,   0,  47,  48,  49,   0,  50,   0,   0,
      0,  51,   0,  52,   0,   0,   4,  53,   0,  54,   5,  17,   0,   0,  55,  56,
      0,   0,   0,   0,   0,  57,  58,  59,   0,   0,   0,   0,   0,   0,   0,  60,
      0,  61,   0,   0,   0,   0,   0,   0,   0,  62,   0,   0,  63,   0,   0,  24,
      0,   0,   0,  64,  65,   0,   0,  66,   5,  67,   0,   0,  68,   0,   0,  20,
      0,   0,   0,   0,   0,   0,  48,  69,   0,  70,  71,   0,   0,  71,   2,  72,
      0,   0,   0,  73,   0,  15,  74,  75,   0,   0,  76,  77,   0,   0,   0,  78,
      1,   0,   0,   0,   0,   0,   0,   0,   0,  79,   0,   0,   0,   0,   0,   0,
      0,   1,   2,  80,  81,   0,   0,  82,   0,   0,   0,   0,   0,   0,   0,   2,
      0,   0,   0,   0,  83,  84,   0,   0,   0,   0,   0,   0,   0,   0,   0,  85,
      0,  86,   0,   0,   0,   0,   0,   0,   0,   0,  18,   0,  87,   0,   0,   0,
      0,   0,  37,  80,   0,  88,   0,   0,   0,  89,   0,  71,   0,   0,  90,   0,
      0,  91,   0,   0,   0,   0,   0,  92,   0,  24,  27,  93,   0,   0,   0,   0,
      0,   0,  94,   0,   0,   0,  95,   0,   0,   0,   0,   0,   0,  15,   2,   0,
      0,  15,   0,   0,   0,  51,   0,   0,   0,  96,   0,   0,   0,   0,   0,   0,
      0,  88,   0,   0,   0,   0,   0,   0,   0,  97,  82,   0,   0,   0,   0,   2,
      0,  47,  98,   0,  10,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,
      0,   0,  99,   0, 100,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 101,
      0, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 103,   0,   0,  66,
      0,   0,   0,   0,   0,   0,   0, 104,   5, 105, 106,   0,   0,   0,   0,   0,
      0,   0,   0, 107, 108, 109,   0,   0,   0,   0,   0,   0,   0, 110,   0, 111,
      0,   0,   0,   0,   0,   0, 102,   0,   0,   0, 112,   0,   0,   0,   0,   0
};

static UINT8 diacritic_table_3[320] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,   1,  17,   1,   1,   1,  18,   1,  19,  20,  21,  22,  23,   1,  24,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  25,   1,  26,   1,
     27,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,  28,  29,  30,  31,  32,  33,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  34,   1,   1,  35,  36,
      1,   1,  37,   1,   1,   1,   1,  38,   1,   1,  39,   1,   1,  40,   1,  41,
     42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,   1,  53,  54,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  55,  56,   1,   1,   1,  57,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  58,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  59,
      1,  60,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  56,  61,   1,   1,   1,   1,   1,  62,  63,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 diacritic_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   7,   8,   9,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_diacritic(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = diacritic_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = diacritic_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = diacritic_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = diacritic_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Digit. */

static UINT8 digit_table_1[88] = {
      0,   0,   0,   0,   0,   0, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 255,   3,   0,   0, 255,   3,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 192, 255,   0,   0,   0,   0, 255,   3,   0,   0,   0,   0,
    192, 255,   0,   0,   0,   0,   0,   0, 255,   3, 255,   3,   0,   0,   0,   0,
      0,   0, 255,   3,   0,   0, 255,   3,   0,   0,   0,   0,   0,   0, 192, 255,
      0, 192, 255, 255, 255, 255, 255, 255
};

static UINT8 digit_table_2[224] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   2,   1,   0,   1,   1,   1,   3,   1,   1,   1,   1,   1,   4,   1,   4,
      1,   4,   1,   4,   1,   4,   1,   4,   1,   5,   1,   5,   2,   1,   1,   1,
      1,   3,   5,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   2,
      5,   1,   1,   1,   1,   6,   1,   5,   1,   1,   7,   1,   1,   5,   0,   1,
      1,   7,   1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   5,   3,   1,   1,   8,   1,   5,   1,   1,   1,   1,   1,   0,
      1,   1,   1,   1,   5,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   0,   1,   1,   1,   1,   4,   1,   0,   9,   1,   1,   5,
      1,   1,   1,   0,   1,   1,   1,   1,   1,   5,   1,   5,   1,   1,   1,   1,
      1,   5,   1,   3,   0,   1,   1,   1,   1,   1,   1,   2,   1,   5,   1,   1,
      1,   5,   1,   1,   1,   5,   2,   1,   1,   2,   1,   3,   1,   5,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  10,   1,   1,   1,   1,   1,   3,   1,   1,
      1,   1,   1,   1,   1,   5,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0
};

static UINT8 digit_table_3[128] = {
      0,   1,   1,   2,   3,   4,   4,   5,   6,   1,   1,   7,   8,   9,  10,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,  11,  12,  13,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  14,
      1,   1,  15,   1,   1,   1,  16,   1,  17,  18,  19,  20,  21,   1,  22,   1,
      1,   1,   1,   1,   1,  23,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  24,   1,   1,   1,   1,
     25,  18,   1,   1,  26,   1,   1,   1,   1,   1,   1,   1,   1,  27,   1,   1
};

static UINT8 digit_table_4[136] = {
      0,   1,   1,   1,   1,   2,   1,   3,   4,   1,   1,   5,   1,   1,   6,   7,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1
};

UINT32 lookup_digit(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = digit_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = digit_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = digit_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = digit_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for East_Asian_Width. */

static UINT8 east_asian_width_table_1[1056] = {
      0,   0,   0,   0,   0,   0,   0,   0,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   0,   0,   1,   4,   4,   1,   4,   4,   1,
      1,   0,   1,   0,   4,   1,   1,   4,   1,   1,   1,   1,   1,   0,   1,   1,
      1,   1,   1,   0,   1,   1,   1,   1,   0,   0,   0,   0,   0,   0,   1,   0,
      1,   0,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   0,   1,   1,
      1,   1,   0,   0,   0,   0,   1,   0,   1,   1,   1,   0,   1,   1,   0,   0,
      1,   0,   1,   1,   0,   0,   0,   1,   1,   1,   1,   0,   1,   0,   1,   0,
      0,   1,   0,   0,   0,   0,   0,   0,   0,   1,   0,   1,   0,   0,   0,   0,
      0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,
      0,   1,   1,   1,   0,   0,   0,   0,   1,   1,   1,   0,   1,   0,   0,   0,
      1,   1,   1,   1,   0,   1,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,
      1,   0,   1,   0,   1,   0,   1,   0,   1,   0,   1,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   1,   0,   0,   1,   0,   1,   1,   1,   0,   1,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   0,   1,   0,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   0,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   5,   5,   1,   0,   0,   1,   1,   1,   1,   0,
      1,   1,   0,   0,   1,   1,   0,   0,   1,   0,   1,   1,   0,   1,   0,   0,
      0,   0,   0,   1,   0,   0,   1,   0,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   1,   0,   1,   1,   1,   1,   0,   0,   0,
      0,   3,   0,   0,   1,   0,   0,   0,   0,   0,   0,   1,   0,   1,   0,   0,
      0,   1,   1,   0,   0,   0,   1,   0,   0,   0,   0,   1,   1,   0,   0,   0,
      0,   0,   0,   1,   1,   1,   1,   0,   1,   1,   1,   1,   0,   0,   0,   0,
      0,   0,   1,   0,   1,   0,   0,   0,   1,   0,   0,   1,   0,   0,   0,   1,
      0,   1,   0,   0,   0,   1,   0,   0,   0,   0,   1,   0,   0,   1,   1,   1,
      1,   0,   0,   1,   0,   1,   0,   1,   1,   1,   1,   1,   1,   0,   1,   0,
      0,   0,   0,   0,   1,   1,   1,   1,   0,   0,   0,   0,   1,   1,   0,   0,
      1,   0,   0,   0,   1,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      1,   1,   0,   0,   1,   1,   1,   1,   0,   0,   1,   1,   0,   0,   1,   1,
      0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   5,   5,   0,   0,   0,   0,
      0,   5,   5,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,   0,   0,   0,
      5,   0,   0,   5,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   0,   0,
      1,   1,   0,   0,   0,   0,   1,   1,   1,   0,   0,   1,   0,   0,   1,   1,
      0,   0,   0,   0,   0,   5,   5,   0,   0,   0,   0,   0,   0,   1,   1,   0,
      0,   1,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   5,   5,   0,   0,
      0,   0,   0,   0,   1,   0,   1,   0,   1,   0,   1,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   0,   0,   0,   0,   1,   1,   0,   1,   1,   1,   0,   1,
      1,   1,   1,   0,   1,   1,   0,   1,   0,   0,   0,   0,   0,   0,   0,   5,
      0,   0,   0,   5,   0,   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   5,   5,   1,   0,   0,   0,   0,   5,   5,   1,   1,
      1,   1,   1,   1,   1,   1,   5,   1,   1,   1,   1,   1,   5,   1,   1,   1,
      1,   1,   0,   1,   0,   0,   0,   0,   1,   1,   5,   1,   1,   1,   1,   1,
      1,   1,   5,   5,   1,   5,   1,   1,   1,   1,   5,   1,   1,   5,   1,   1,
      0,   0,   0,   0,   0,   5,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   5,   0,   5,   0,   0,   0,   0,   5,   5,   5,   0,   5,
      0,   0,   0,   0,   0,   5,   5,   5,   0,   0,   0,   0,   0,   0,   4,   4,
      4,   4,   4,   4,   4,   4,   0,   0,   0,   0,   0,   0,   0,   4,   4,   0,
      0,   0,   0,   5,   5,   0,   0,   0,   5,   0,   0,   0,   0,   5,   1,   1,
      5,   5,   0,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,
      2,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,
      0,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   0,
      5,   5,   0,   0,   0,   0,   0,   0,   5,   5,   5,   0,   5,   5,   5,   5,
      0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   0,   0,   0,   3,   3,   3,   3,   3,   3,
      0,   0,   3,   3,   3,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   0,
      5,   5,   5,   5,   0,   5,   5,   5,   5,   5,   5,   5,   0,   5,   5,   0,
      5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,
      0,   0,   0,   0,   5,   0,   0,   0,   1,   1,   1,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   0,   0,   1,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   0,   5,   5,   5,   5,   5,   5,   0,   5,   5,
      5,   5,   5,   0,   0,   0,   0,   5,   5,   0,   0,   0,   5,   0,   0,   0,
      5,   0,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   5,
      0,   0,   0,   5,   5,   5,   5,   0,   0,   0,   5,   0,   0,   0,   0,   0,
      0,   0,   0,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   5,   5,   5
};

static UINT8 east_asian_width_table_2[1136] = {
      0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   2,
      0,   0,   0,   0,   3,   4,   5,   6,   7,   0,   8,   9,  10,  11,  12,  13,
     14,   0,  15,  16,  17,  16,  18,   8,  19,  20,  21,   0,  17,  16,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  22,  23,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,   0,  14,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  24,  25,  26,  27,   0,   0,   0,   0,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,   0,   0,
      0,   0,  29,  28,  30,  31,  29,  28,  30,  31,   0,   0,   0,   0,   0,   0,
     14,   0,  28,  28,  28,  28,  28,  28,  28,  28,  14,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,   0,   0,   0,   0,
      0,   0,  33,  34,   6,   0,  35,  36,   0,   0,   0,   0,   0,   0,  37,  38,
     39,   0,   0,   0,   0,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     41,  14,  36,   0,  42,  16,   0,   0,   0,   0,  43,  44,  28,  45,  28,  31,
      0,  14,  28,  31,   0,   0,   0,  31,   0,   0,  46,   0,  38,   0,   0,   0,
     12,  47,  48,  49,  50,  51,  52,  53,   0,  54,  55,   0,  56,  57,   0,   0,
     57,   0,  58,  14,  58,   0,   0,  38,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  55,  59,   0,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  61,  62,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28,  28,  28,  28,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  30,  28,  28,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  45,  28,  28,  28,  28,  45,   0,
     28,  28,  63,   0,  30,  31,  57,  53,  64,  65,  31,   0,  63,  38,   0,  66,
     67,  68,  69,  70,   0,   0,   0,   0,  71,  32,  72,   0,  73,  74,   0,  75,
      0,   0,  76,  17,  77,  59,   0,  78,  79,  80,  81,  28,  82,  83,  84,  85,
     86,  59,   0,   0,   0,  87,   0,  58,   0,  88,  89,   0,   0,   0,  17,  28,
      0,   0,  90,   0,   0,   0,  87,  75,   0,   0,   0,   0,  91,  92,   0,   0,
     93,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  94,   0,   0,   0,   0,   0,   0,  95,  31,   0,   0,   0,   0,
     32,  32,  32,  96,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  72,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  97,   0,   0,   0,  32,  72,
     98,  32,  32,  32,  32,  32,  32,  99, 100,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  99, 100,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
     90,  32,  32,  32,  32,  32, 100,  32,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  99,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  72,   0,  32,  32,
     32,  32,  32,  99,  32,  32,  32,  32,  32,  28,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,   0,   0,   0,   0,   0,   0,   0,   0,
     32, 101,  32,  32,  32,  32,  32,  32,  99,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,  32,  32, 101,
     32,  32,  32,  32,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,
     28,  28,  32, 102,   0,   0,  32,  32,  32,  32, 103,  32,  99,  72,   0,   0,
    104, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 107, 107, 107,
    107, 107, 107, 107, 107, 107, 107, 108, 109, 109, 109, 110, 111, 108,   0,  58,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 101,   0, 102,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  97,   0,   0,   0,   0,   0,
     32,  87,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 112, 113,
     32,  32,  32,  32, 114,   0,   0,   0,   0,   0, 114,   0, 115,   0,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  72,
    116,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  75,   0,   0,   0,   0,   0,   0,
     28, 117,  28,  28,  28, 118,  28,  28,  28,  28,  28,  28,  28,  31,  28,  28,
     28,  80, 119, 120,  28, 121,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    114,   0,  32,  32,  32,  32,  32,  72,  32,  87, 102,   0,  97,   0,   0,   0,
     32,  32,  32,  32,  87,  90, 122,  32,  32,  32,  32,  32,  32,  32,  32, 123,
     32,  32,  72,   0,  32,  32,  32,  32,  32, 124,  72,   0,  32,  32, 125,  32,
     32,  32,  32,  32,  32,  32,  32,  99, 126,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 127,
     32,  32,  32,  32,  32,  32,  32,  97,   0, 128,  32,  32,  32,   0,   0, 129,
      0,   0,  66,   0, 116,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 130,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,   0,   0,   0,   0,   0,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  97, 116, 131,  90,   0,  94, 115, 101,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,  72,  87,   0,
      0, 115,  32,  32,  32,  32,  32, 103, 122,  32,  32,  32,  32,  32,  32,  32,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 101, 101,
     99,   0,  32,  32,  32, 101,  32, 114,  97,   0,  32, 102,  32,   0,  99,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  97,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28, 118
};

static UINT8 east_asian_width_table_3[608] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  10,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,
      9,   9,   9,  27,   9,   9,  28,   9,   9,   9,   9,   9,   9,  29,  30,  31,
     32,  33,  34,  35,  36,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  37,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  38,   9,   9,   9,   9,   9,   9,
      9,   9,  39,   9,   9,   9,   9,   9,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  40,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,
     41,  41,  30,  30,  30,  30,   9,   9,   9,   9,   9,   9,  42,   9,  43,  44,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  45,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  46,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  47,  48,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  49,
     30,  30,  50,  30,  30,  51,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     52,  53,  54,  55,  56,   9,  57,  58,  59,  60,  61,  62,  63,  64,   9,  65,
      9,   9,  66,  30,  67,  68,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  69,
      9,   9,  41,   6,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  70
};

static UINT8 east_asian_width_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  10,  10,  10,  10,  10,  11,   5,  12,  10,  13,  14,  10,  10,  10,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  16,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     17,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  18,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  18
};

UINT32 lookup_east_asian_width(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = east_asian_width_table_4[block];
    offset = (codepoint >> 7) & 0x1F;
    block = east_asian_width_table_3[(block << 5) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = east_asian_width_table_2[(block << 4) + offset];
    offset = codepoint & 0x7;
    value = east_asian_width_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Extender. */

static UINT8 extender_table_1[216] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,
      0,   0,   3,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   4,   0,   0,  32,   0,   0,   0,   0,   0,
     64,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,
      8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0,   8,
     32,   0,   0,   0,   0,   0,  62,   0,   0,   0,   0,  96,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 112,   0,  16,   0,   0,   0,   0,   0,   0,
      0, 128,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
      0,   0,   0,  32,   0,   0,  24,   0,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  32,   0,   0,   0,   0, 192,   1,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   1,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,
    112,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 extender_table_2[184] = {
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   4,
      0,   0,   0,   0,   0,   5,   0,   0,   0,   6,   0,   6,   0,   0,   0,   0,
      7,   8,   0,   0,   0,   0,   0,   0,   0,   0,   9,   0,   0,   0,   0,   0,
     10,  11,   0,   0,   0,   0,   0,   0,  12,   0,  13,  14,   0,   0,   0,   0,
      5,   0,   0,   0,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  16,   0,  17,   0,  18,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  17,   0,   0,   0,   0,   0,   0,   0,   0,  19,   0,
      0,   0,   0,   0,   0,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21,
      0,   0,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,  25,   0,   0,   0,
      0,   0,   0,   0,   0,  26,   0,   0
};

static UINT8 extender_table_3[128] = {
      0,   1,   2,   3,   2,   4,   2,   5,   2,   2,   2,   2,   6,   7,   8,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   9,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
     10,   2,   2,  11,  12,  13,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  14,
      2,   2,   2,  15,   2,   2,   2,   2,   2,  16,  17,   2,   2,  18,   2,   2,
      2,   2,   2,   2,   2,  19,   2,  20,   2,   2,   2,   2,   2,   2,   2,   2,
     21,   2,   2,   2,  22,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 extender_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   2,   7,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_extender(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = extender_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = extender_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = extender_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = extender_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for General_Category. */

static UINT8 general_category_table_1[378] = {
      3,   3,  25,  21,  21,  21,   4,  21,  18,   1,  21,  14,  21,   5,   6,   6,
     14,  14,  14,  21,  21,  29,  29,  29,  29,  18,  21,   1,  16,   2,  16,  13,
     13,  13,  13,  18,  14,   1,  14,   3,   4,   4,  22,  21,  16,  22,  19,  10,
     14,   9,  22,  16,  22,  14,  20,  20,  16,  20,  19,   8,  20,  21,  29,  14,
     29,  13,  13,  14,  13,  29,  13,  19,  19,  19,  29,  28,  28,  13,  19,  13,
     15,  15,  16,  16,  15,  16,  17,  17,   0,   0,  15,  13,  29,  21,  29,   0,
      0,  29,  14,  29,  22,  17,   7,   7,   0,  15,  13,  21,   5,   0,   0,  22,
     22,   4,   0,  17,   5,  17,  21,  17,  17,  21,  19,   0,   0,  19,  19,  21,
     21,   0,   9,   9,  21,   4,  22,  22,   9,  21,  15,  19,  19,  17,  17,  19,
     21,  19,  17,   9,  17,  15,  15,  17,  17,  22,  19,  22,  22,  19,   0,   9,
     17,   0,  15,   0,  16,  19,  19,  15,   9,  17,  17,  26,  26,  26,  26,  17,
     21,  15,   0,  26,  26,   0,  20,  22,  22,   0,   0,  21,  19,  26,  20,  19,
      0,   4,  21,  22,  26,  19,  21,  20,  20,   0,   5,  19,  25,  19,  19,  18,
      1,   0,  11,  11,  11,  19,  26,  21,   5,  21,   7,  17,  13,   0,  13,  15,
     28,  28,  28,  16,  13,  16,   0,  16,  29,  16,  16,   0,  25,  25,  25,   9,
      5,   5,  10,   8,  18,  10,  12,  23,   9,  25,  21,  10,   8,  21,  21,   2,
      2,  21,  14,  18,   1,  21,  21,  25,   9,   0,  20,  15,   1,  15,   4,   0,
     17,   7,  29,  22,  22,  29,  22,  13,  13,  22,  11,  29,  13,  11,  11,  20,
     14,  22,  22,  18,   1,  22,   1,  14,   1,  18,  13,  17,   0,  13,  18,  21,
     21,  18,   1,   5,  22,  15,  19,  11,   5,  18,   1,   1,  22,  11,   5,  15,
     11,  15,  17,  16,  16,  15,  22,  20,  15,  21,   7,  21,  16,  29,  15,  29,
      4,  22,  15,  26,  27,  27,  24,  24,  19,  14,   5,   2,   2,  18,   2,   2,
     14,   5,  14,   0,  14,  16,   0,  20,  17,  20,  11,   0,  21,  11,  19,  20,
     17,   5,  21,   9,  22,  26,  26,   9,   4,  20
};

static UINT8 general_category_table_2[5360] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   2,   4,   5,   6,   2,
      7,   7,   7,   7,   7,   2,   8,   9,  10,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  12,  13,  14,  15,  16,  16,  16,  16,  16,  16,  16,
     16,  16,  16,  16,  16,  17,  18,  19,   1,  20,  20,  21,  22,  23,  24,  25,
     26,  27,  15,   2,  28,  29,  27,  30,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  31,  11,  11,  11,  32,  16,  16,  16,  16,  16,  16,  16,  16,
     16,  16,  16,  33,  16,  16,  16,  16,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  34,  34,  34,  34,  34,  34,  34,  34,  16,  32,  32,  32,
     32,  32,  32,  32,  11,  34,  34,  16,  34,  32,  32,  11,  34,  11,  16,  11,
     11,  34,  32,  11,  32,  16,  11,  34,  32,  32,  32,  11,  34,  16,  32,  11,
     34,  11,  34,  34,  32,  35,  32,  16,  36,  36,  37,  34,  38,  37,  34,  34,
     34,  34,  34,  34,  34,  34,  16,  32,  34,  38,  32,  11,  32,  32,  32,  32,
     32,  32,  16,  16,  16,  11,  34,  32,  34,  34,  11,  32,  32,  32,  32,  32,
     16,  16,  39,  16,  16,  16,  16,  16,  40,  40,  40,  40,  40,  40,  40,  40,
     40,  41,  41,  40,  40,  40,  40,  40,  40,  41,  41,  41,  41,  41,  41,  41,
     40,  40,  42,  41,  41,  41,  42,  42,  41,  41,  41,  41,  41,  41,  41,  41,
     43,  43,  43,  43,  43,  43,  43,  43,  32,  32,  42,  32,  44,  45,  16,  10,
     44,  44,  41,  46,  11,  47,  47,  11,  34,  11,  11,  11,  11,  11,  11,  11,
     11,  48,  11,  11,  11,  11,  16,  16,  16,  16,  16,  16,  16,  16,  16,  34,
     16,  11,  32,  16,  32,  32,  32,  32,  16,  16,  32,  49,  34,  32,  34,  11,
     32,  50,  43,  43,  51,  32,  32,  32,  11,  34,  34,  34,  34,  34,  34,  16,
     48,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  47,  52,   2,   2,   2,
     16,  16,  16,  16,  53,  54,  55,  56,  57,  43,  43,  43,  43,  43,  43,  43,
     43,  43,  43,  43,  43,  43,  43,  58,  59,  60,  43,  59,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  44,  62,
     36,  63,  64,  44,  44,  44,  44,  44,  65,  65,  65,   8,   9,  66,   2,  67,
     43,  43,  43,  43,  43,  60,  68,   2,  69,  36,  36,  36,  36,  70,  43,  43,
      7,   7,   7,   7,   7,   2,   2,  36,  71,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  72,  43,  43,  43,  73,  50,  43,  43,  74,  75,  76,  43,  43,  36,
      7,   7,   7,   7,   7,  36,  77,  78,   2,   2,   2,   2,   2,   2,   2,  79,
     70,  36,  36,  36,  36,  36,  36,  36,  43,  43,  43,  43,  43,  80,  62,  36,
     36,  36,  36,  43,  43,  43,  43,  43,  71,  44,  44,  44,  44,  44,  44,  44,
      7,   7,   7,   7,   7,  36,  36,  36,  36,  36,  36,  36,  36,  70,  43,  43,
     43,  43,  40,  21,   2,  81,  57,  20,  36,  36,  36,  43,  43,  75,  43,  43,
     43,  43,  75,  43,  75,  43,  43,  44,   2,   2,   2,   2,   2,   2,   2,  64,
     36,  36,  36,  36,  70,  43,  44,  64,  36,  36,  36,  36,  36,  61,  44,  44,
     36,  36,  36,  36,  82,  36,  36,  61,  65,  44,  44,  44,  43,  43,  43,  43,
     36,  36,  36,  36,  83,  43,  43,  43,  43,  84,  43,  43,  43,  43,  43,  43,
     43,  85,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  85,  71,  86,
     87,  43,  43,  43,  85,  86,  87,  86,  70,  43,  43,  43,  36,  36,  36,  36,
     36,  43,   2,   7,   7,   7,   7,   7,  88,  36,  36,  36,  36,  36,  36,  36,
     70,  86,  62,  36,  36,  36,  61,  62,  61,  62,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  61,  36,  36,  36,  61,  61,  44,  36,  36,  44,  71,  86,
     87,  43,  80,  89,  90,  89,  87,  61,  44,  44,  44,  89,  44,  44,  36,  62,
     36,  43,  44,   7,   7,   7,   7,   7,  36,  20,  27,  27,  27,  56,  63,  80,
     57,  85,  62,  36,  36,  61,  44,  62,  61,  36,  62,  61,  36,  44,  80,  86,
     87,  80,  44,  57,  80,  57,  43,  44,  57,  44,  44,  44,  62,  36,  61,  61,
     44,  44,  44,   7,   7,   7,   7,   7,  43,  36,  70,  64,  44,  44,  44,  44,
     57,  85,  62,  36,  36,  36,  36,  62,  36,  62,  36,  36,  36,  36,  36,  36,
     61,  36,  62,  36,  36,  44,  71,  86,  87,  43,  43,  57,  85,  89,  87,  44,
     61,  44,  44,  44,  44,  44,  44,  44,  66,  44,  44,  44,  62,  43,  43,  43,
     57,  86,  62,  36,  36,  36,  61,  62,  61,  36,  62,  36,  36,  44,  71,  87,
     87,  43,  80,  89,  90,  89,  87,  44,  44,  44,  57,  85,  44,  44,  36,  62,
     78,  27,  27,  27,  44,  44,  44,  44,  44,  71,  62,  36,  36,  61,  44,  36,
     61,  36,  36,  44,  62,  61,  61,  36,  44,  62,  61,  44,  36,  61,  44,  36,
     36,  36,  36,  36,  36,  44,  44,  86,  85,  90,  44,  86,  90,  86,  87,  44,
     61,  44,  44,  89,  44,  44,  44,  44,  27,  91,  67,  67,  56,  92,  44,  44,
     85,  86,  71,  36,  36,  36,  61,  36,  61,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  44,  71,  43,  85,  86,  90,  43,  80,  43,  43,  44,
     44,  44,  57,  80,  36,  61,  62,  44,  44,  44,  44,  93,  27,  27,  27,  91,
     70,  86,  72,  36,  36,  36,  61,  36,  36,  36,  62,  36,  36,  44,  71,  87,
     86,  86,  90,  85,  90,  86,  43,  44,  44,  44,  89,  90,  44,  44,  62,  61,
     62,  61,  44,  44,  44,  44,  44,  44,  43,  86,  36,  36,  36,  36,  61,  36,
     36,  36,  36,  36,  36,  70,  71,  86,  87,  43,  80,  86,  90,  86,  87,  77,
     44,  44,  36,  94,  27,  27,  27,  95,  27,  27,  27,  27,  91,  36,  36,  36,
     57,  86,  62,  36,  36,  36,  36,  36,  36,  36,  36,  61,  44,  36,  36,  36,
     36,  62,  36,  36,  36,  36,  62,  44,  36,  36,  36,  61,  44,  80,  44,  89,
     86,  43,  80,  80,  86,  86,  86,  86,  44,  86,  64,  44,  44,  44,  44,  44,
     62,  36,  36,  36,  36,  36,  36,  36,  70,  36,  43,  43,  43,  80,  44,  96,
     36,  36,  36,  75,  43,  43,  43,  60,   7,   7,   7,   7,   7,   2,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  62,  61,  61,  36,  36,  61,  36,  36,
     36,  36,  62,  62,  36,  36,  36,  36,  70,  36,  43,  43,  43,  43,  71,  44,
     36,  36,  61,  81,  43,  43,  43,  44,   7,   7,   7,   7,   7,  44,  36,  36,
     77,  67,   2,   2,   2,   2,   2,   2,   2,  97,  97,  67,  43,  67,  67,  67,
      7,   7,   7,   7,   7,  27,  27,  27,  27,  27,  50,  50,  50,   4,   4,  86,
     36,  36,  36,  36,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  44,
     57,  43,  43,  43,  43,  43,  43,  85,  43,  43,  60,  43,  36,  36,  70,  43,
     43,  43,  43,  43,  57,  43,  43,  43,  43,  43,  43,  43,  43,  43,  80,  67,
     67,  67,  67,  76,  67,  67,  92,  67,   2,   2,  97,  67,  21,  64,  44,  44,
     36,  36,  36,  36,  36,  94,  87,  43,  85,  43,  43,  43,  87,  85,  87,  71,
      7,   7,   7,   7,   7,   2,   2,   2,  36,  36,  36,  86,  43,  36,  36,  43,
     71,  86,  98,  94,  86,  86,  86,  36,  70,  43,  71,  36,  36,  36,  36,  36,
     36,  85,  87,  85,  86,  86,  87,  94,   7,   7,   7,   7,   7,  86,  87,  67,
     11,  11,  11,  48,  44,  44,  48,  44,  16,  16,  16,  16,  16,  53,  45,  16,
     36,  36,  36,  36,  61,  36,  36,  44,  36,  36,  36,  61,  61,  36,  36,  44,
     61,  36,  36,  44,  36,  36,  36,  61,  61,  36,  36,  44,  36,  36,  36,  36,
     36,  36,  36,  61,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  57,  43,
      2,   2,   2,   2,  99,  27,  27,  27,  27,  27,  27,  27,  27,  27, 100,  44,
     67,  67,  67,  67,  67,  44,  44,  44,  11,  11,  11,  44,  16,  16,  16,  44,
    101,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  77,  72,
    102,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 103, 104,  44,
     36,  36,  36,  36,  36,  63,   2, 105, 106,  36,  36,  36,  61,  44,  44,  44,
     36,  43,  85,  44,  44,  44,  44,  62,  36,  43, 107,  64,  44,  44,  44,  44,
     36,  43,  44,  44,  44,  44,  44,  44,  36,  36,  36,  36,  36,  36,  61,  36,
     61,  43,  44,  44,  44,  44,  44,  44,  36,  36,  43,  87,  43,  43,  43,  86,
     86,  86,  86,  85,  87,  43,  43,  43,  43,  43,   2,  88,   2,  66,  70,  44,
      7,   7,   7,   7,   7,  44,  44,  44,  27,  27,  27,  27,  27,  44,  44,  44,
      2,   2,   2, 108,   2,  59,  43,  84,  36,  83,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  61,  44,  44,  44,  36,  36,  70,  71,  36,  36,  36,  36,
     36,  36,  36,  36,  70,  61,  44,  44,  36,  36,  36,  44,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  36,  61,  43,  85,  86,  87,  85,  86,  44,  44,
     86,  85,  86,  86,  87,  43,  44,  44,  92,  44,   2,   7,   7,   7,   7,   7,
     36,  36,  36,  36,  36,  36,  36,  44,  36,  36,  61,  44,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  44,  44,  36,  36,  36,  36,  36,  44,  44,  44,
      7,   7,   7,   7,   7, 100,  44,  67,  67,  67,  67,  67,  67,  67,  67,  67,
     36,  36,  36,  70,  85,  87,  44,   2,  36,  36,  94,  85,  43,  43,  43,  80,
     85,  85,  87,  43,  43,  43,  85,  86,  86,  87,  43,  43,  43,  43,  80,  57,
      2,   2,   2,  88,   2,   2,   2,  44,  43,  43,  43,  43,  43,  43,  43, 109,
     43,  43,  43,  43,  43,  43,  43,  80,  43,  43,  98,  36,  36,  36,  36,  36,
     36,  36,  85,  43,  43,  85,  85,  86,  86,  85,  98,  36,  36,  36,  61,  44,
     97,  67,  67,  67,  67,  50,  43,  43,  43,  43,  67,  67,  67,  67,  21,  64,
     43,  98,  36,  36,  36,  36,  36,  36,  94,  43,  43,  86,  43,  87,  43,  36,
     36,  36,  36,  85,  43,  86,  87,  87,  43,  86,  44,  44,  44,  44,   2,   2,
     36,  36,  86,  86,  86,  86,  43,  43,  43,  43,  86,  43,  44,  93,   2,   2,
      7,   7,   7,   7,   7,  44,  62,  36,  36,  36,  36,  36,  40,  40,  40,   2,
     16,  16,  16,  16, 110,  44,  44,  44,  11,  11,  11,  11,  11,  47,  48,  11,
      2,   2,   2,   2,  44,  44,  44,  44,  43,  60,  43,  43,  43,  43,  43,  43,
     85,  43,  43,  43,  71,  36,  70,  36,  36,  36,  71,  94,  43,  61,  44,  44,
     16,  16,  16,  16,  16,  16,  40,  40,  40,  40,  40,  40,  40,  45,  16,  16,
     16,  16,  16,  16,  45,  16,  16,  16,  16,  16,  16,  16,  16, 111,  40,  40,
     32,  32,  32,  16,  16,  16,  16,  32,  16,  16,  16,  16,  11,  11,  11,  11,
     16,  16,  16,  44,  11,  11,  11,  44,  16,  16,  16,  16,  48,  48,  48,  48,
     16,  16,  16,  16,  16,  16,  16,  44,  16,  16,  16,  16, 112, 112, 112, 112,
     16,  16, 110,  16,  11,  11, 113, 114,  41,  16, 110,  16,  11,  11, 113,  41,
     16,  16,  44,  16,  11,  11, 115,  41,  16,  16,  16,  16,  11,  11, 116,  41,
     44,  16, 110,  16,  11,  11, 113, 117, 118, 118, 118, 118, 118, 119,  65,  65,
    120, 120, 120,   2, 121, 122, 121, 122,   2,   2,   2,   2, 123,  65,  65, 124,
      2,   2,   2,   2, 125, 126,   2, 127, 128,   2, 129, 130,   2,   2,   2,   2,
      2,   9, 128,   2,   2,   2,   2, 131,  65,  65, 132,  65,  65,  65,  65,  65,
    133,  44,  27,  27,  27,   8, 129, 134,  27,  27,  27,  27,  27,   8, 129, 104,
     40,  40,  40,  40,  40,  40,  81,  44,  20,  20,  20,  20,  20,  20,  20,  20,
    135,  44,  44,  44,  44,  44,  44,  44,  43,  43,  43,  43,  43,  43, 136,  51,
    109,  51, 109,  43,  43,  43,  43,  43,  80,  44,  44,  44,  44,  44,  44,  44,
     67, 137,  67, 138,  67,  34,  11,  16,  11,  32, 138,  67,  49,  11,  11,  67,
     67,  67, 137, 137, 137,  11,  11, 139,  11,  11,  35,  36,  39,  67,  16,  11,
      8,   8,  49,  16,  16,  26,  67, 140,  27,  27,  27,  27,  27,  27,  27,  27,
    105, 105, 105, 105, 105, 105, 105, 105, 105, 141, 142, 105, 143,  67,  44,  44,
      8,   8, 144,  67,  67,   8,  67,  67, 144,  26,  67, 144,  67,  67,  67, 144,
     67,  67,  67,  67,  67,  67,  67,   8,  67, 144, 144,  67,  67,  67,  67,  67,
     67,  67,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
     67,  67,  67,  67,   4,   4,  67,  67,   8,  67,  67,  67, 145, 146,  67,  67,
     67,  67,  67,  67,  67,  67, 144,  67,  67,  67,  67,  67,  67,  26,   8,   8,
      8,   8,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,   8,   8,
      8,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  92,  44,  44,  44,  44,
     67,  67,  67,  67,  67,  92,  44,  44,  27,  27,  27,  27,  27,  27,  67,  67,
     67,  67,  67,  67,  67,  27,  27,  27,  67,  67,  67,  26,  67,  67,  67,  67,
     26,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,   8,   8,   8,   8,
     67,  67,  67,  67,  67,  67,  67,  26,  67,  67,  67,  67,   4,   4,   4,   4,
      4,   4,   4,  27,  27,  27,  27,  27,  27,  27,  67,  67,  67,  67,  67,  67,
      8,   8, 129, 147,   8,   8,   8,   8,   8,   8,   8,   4,   4,   4,   4,   4,
      8, 129, 148, 148, 148, 148, 148, 148, 148, 148, 148, 148, 147,   8,   8,   8,
      8,   8,   8,   8,   4,   4,   8,   8,   8,   8,   8,   8,   8,   8,   4,   8,
      8,   8, 144,  26,   8,   8, 144,  67,  67,  67,  44,  67,  67,  67,  67,  67,
     67,  67,  67,  55,  67,  67,  67,  67,  32,  11,  32,  34,  34,  34,  34,  11,
     32,  32,  34,  16,  16,  16,  40,  11,  32,  32, 140,  67,  67, 138,  34, 149,
     43,  32,  44,  44,  93,   2,  99,   2,  16,  16,  16, 150,  44,  44, 150,  44,
     36,  36,  36,  36,  44,  44,  44,  52,  64,  44,  44,  44,  44,  44,  44,  57,
     36,  36,  36,  61,  44,  44,  44,  44,  36,  36,  36,  61,  36,  36,  36,  61,
      2, 121, 121,   2, 125, 126, 121,   2,   2,   2,   2,   6,   2, 108, 121,   2,
    121,   4,   4,   4,   4,   2,   2,  88,   2,   2,   2,   2,   2, 120,   2,   2,
    108, 151,   2,   2,   2,   2,   2,   2,  67,   2, 152, 148, 148, 148, 153,  44,
     67,  67,  67,  67,  67,  55,  67,  67,  67,  67,  44,  44,  44,  44,  44,  44,
     67,  67,  67,  44,  44,  44,  44,  44,  67,  67,  67,  67,  67,  67,  44,  44,
      1,   2, 154, 155,   4,   4,   4,   4,   4,  67,   4,   4,   4,   4, 156, 157,
    158, 105, 105, 105, 105,  43,  43,  86, 159,  40,  40,  67, 105, 160,  63,  67,
     36,  36,  36,  61,  57, 161, 162,  69,  36,  36,  36,  36,  36,  63,  40,  69,
     44,  44,  62,  36,  36,  36,  36,  36,  67,  27,  27,  67,  67,  67,  67,  67,
     67,  67,  67,  67,  67,  67,  67,  92,  27,  27,  27,  27,  27,  67,  67,  67,
     67,  67,  67,  67,  27,  27,  27,  27, 163,  27,  27,  27,  27,  27,  27,  27,
     36,  36,  83,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 164,   2,
      7,   7,   7,   7,   7,  36,  44,  44,  32,  32,  32,  32,  32,  32,  32,  70,
     51, 165,  43,  43,  43,  43,  43,  88,  32,  32,  32,  32,  32,  32,  40,  43,
     36,  36,  36, 105, 105, 105, 105, 105,  43,   2,   2,   2,  44,  44,  44,  44,
     41,  41,  41, 162,  40,  40,  40,  40,  41,  32,  32,  32,  32,  32,  32,  32,
     16,  32,  32,  32,  32,  32,  32,  32,  45,  16,  16,  16,  34,  34,  34,  32,
     32,  32,  32,  32,  42, 166,  34,  35,  32,  32,  16,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  11,  11,  32,  11,  11,  32,  32,  32,  32,  32,  32,
     32,  32,  11,  11,  34, 110,  44,  44,  32, 150, 150,  32,  32,  44,  44,  44,
     44,  40, 167,  35,  40,  35,  36,  36,  36,  71,  36,  71,  36,  70,  36,  36,
     36,  94,  87,  85,  67,  67,  80,  44,  27,  27,  27,  67, 168,  44,  44,  44,
     36,  36,   2,   2,  44,  44,  44,  44,  86,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  86,  86,  86,  86,  86,  86,  86,  86,  43,  44,  44,  44,  44,   2,
     43,  36,  36,  36,   2,  72,  72,  70,  36,  36,  36,  43,  43,  43,  43,   2,
     36,  36,  36,  70,  43,  43,  43,  43,  43,  86,  44,  44,  44,  44,  44,  93,
     36,  70,  86,  43,  43,  86,  43,  86, 107,   2,   2,   2,   2,   2,   2,  52,
      7,   7,   7,   7,   7,  44,  44,   2,  36,  36,  70,  69,  36,  36,  36,  36,
      7,   7,   7,   7,   7,  36,  36,  61,  36,  36,  36,  36,  70,  43,  43,  85,
     87,  85,  87,  80,  44,  44,  44,  44,  36,  70,  36,  36,  36,  36,  85,  44,
      7,   7,   7,   7,   7,  44,   2,   2,  69,  36,  36,  77,  67,  94,  85,  36,
     71,  43,  71,  70,  71,  36,  36,  43,  70,  61,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  62,  83,   2,  36,  36,  36,  36,  36,  94,  43,  86,
      2,  83, 169,  80,  44,  44,  44,  44,  62,  36,  36,  61,  62,  36,  36,  61,
     62,  36,  36,  61,  44,  44,  44,  44,  16,  16,  16,  16,  16, 114,  40,  40,
     16,  16,  16,  16, 111,  41,  44,  44,  36,  94,  87,  86,  85, 107,  87,  44,
     36,  36,  44,  44,  44,  44,  44,  44,  36,  36,  36,  61,  44,  62,  36,  36,
    170, 170, 170, 170, 170, 170, 170, 170, 171, 171, 171, 171, 171, 171, 171, 171,
     16,  16,  16, 110,  44,  44,  44,  44,  44, 150,  16,  16,  44,  44,  62,  71,
     36,  36,  36,  36, 172,  36,  36,  36,  36,  36,  36,  61,  36,  36,  61,  61,
     36,  62,  61,  36,  36,  36,  36,  36,  36,  41,  41,  41,  41,  41,  41,  41,
     41, 117,  44,  44,  44,  44,  44,  44,  44,  62,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36, 148,  44,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  44,  44,  44,  55,  36,  36,  36,  36,  36,  36, 168,  67,
      2,   2,   2, 152, 130,  44,  44,  44,   6, 173, 174, 148, 148, 148, 148, 148,
    148, 148, 130, 152, 130,   2, 127, 175,   2,  64,   2,   2, 156, 148, 148, 130,
      2, 176,   8, 177,  66,   2,  44,  44,  36,  36,  61,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  61,  79,  93,   2,   3,   2,   4,   5,   6,   2,
     16,  16,  16,  16,  16,  17,  18, 129, 130,   4,   2,  36,  36,  36,  36,  36,
     69,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  40,
     44,  36,  36,  36,  44,  36,  36,  36,  44,  36,  36,  36,  44,  36,  61,  44,
     20, 178,  56, 135,  26,   8, 144,  92,  44,  44,  44,  44,  79,  65,  67,  44,
     36,  36,  36,  36,  36,  36,  62,  36,  36,  36,  36,  36,  36,  61,  36,  62,
      2,  64,  44, 179,  27,  27,  27,  27,  27,  27,  44,  55,  67,  67,  67,  67,
    105, 105, 143,  27,  91,  67,  67,  67,  67,  67,  67,  67,  67,  27,  67,  92,
     67,  67,  67,  67,  67,  67,  92,  44,  92,  44,  44,  44,  44,  44,  44,  44,
     67,  67,  67,  67,  67,  67,  50,  44, 180,  27,  27,  27,  27,  27,  27,  27,
     27,  27,  27,  27,  27,  27,  44,  44,  27,  27,  44,  44,  44,  44,  62,  36,
    155,  36,  36,  36,  36, 181,  44,  44,  36,  36,  36,  43,  43,  80,  44,  44,
     36,  36,  36,  36,  36,  36,  36,  93,  36,  36,  44,  44,  36,  36,  36,  36,
    182, 105, 105,  44,  44,  44,  44,  44,  11,  11,  11,  11,  16,  16,  16,  16,
     11,  11,  44,  44,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  44,  44,
     36,  36,  36,  36,  44,  44,  44,  44,  36,  36,  44,  44,  44,  44,  44,  93,
     11,  11,  11,  11,  11,  47,  11,  11,  11,  47,  11, 150,  16,  16,  16,  16,
     16, 150,  16,  16,  16,  16,  16,  16,  16, 150,  16,  16,  16, 150, 110,  44,
     40,  40,  40,  52,  40,  40,  40,  40,  81,  40,  40,  40,  40,  81,  44,  44,
     36,  36,  36,  44,  61,  36,  36,  36,  36,  36,  36,  62,  61,  44,  61,  62,
     36,  36,  36,  93,  27,  27,  27,  27,  36,  36,  36,  77, 163,  27,  27,  27,
     44,  44,  44, 179,  27,  27,  27,  27,  36,  61,  36,  44,  44, 179,  27,  27,
     36,  36,  36,  27,  27,  27,  44,  93,  36,  36,  36,  36,  36,  44,  44,  93,
     36,  36,  36,  36,  44,  44,  27,  36,  44,  27,  27,  27,  27,  27,  27,  27,
     70,  43,  57,  80,  44,  44,  43,  43,  36,  36,  62,  36,  62,  36,  36,  36,
     36,  36,  36,  44,  43,  80,  44,  57,  27,  27,  27,  27, 100,  44,  44,  44,
      2,   2,   2,   2,  64,  44,  44,  44,  36,  36,  36,  36,  36,  36, 183,  30,
     36,  36,  36,  36,  36,  36, 183,  27,  36,  36,  36,  36,  78,  36,  36,  36,
     36,  36,  70,  80,  44, 179,  27,  27,   2,   2,   2,  64,  44,  44,  44,  44,
     36,  36,  36,  44,  93,   2,   2,   2,  36,  36,  36,  44,  27,  27,  27,  27,
     36,  61,  44,  44,  27,  27,  27,  27,  36,  44,  44,  44,  93,   2,  64,  44,
     44,  44,  44,  44, 179,  27,  27,  27,  11,  47,  44,  44,  44,  44,  44,  44,
     16, 110,  44,  44,  44,  27,  27,  27,  36,  36,  43,  43,  44,  44,  44,  44,
     27,  27,  27,  27,  27,  27,  27, 100,  36,  36,  36,  36,  36,  57, 184,  44,
     36,  44,  44,  44,  44,  44,  44,  44,  27,  27,  27,  95,  44,  44,  44,  44,
    180,  27,  30,   2,   2,  44,  44,  44,  36,  43,  43,   2,   2,  44,  44,  44,
     36,  36, 183,  27,  27,  27,  44,  44,  87,  98,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  43,  43,  43,  43,  43,  43,  43,  60,   2,   2,   2,  44,
     27,  27,  27,   7,   7,   7,   7,   7,  71,  70,  71,  44,  44,  44,  44,  57,
     86,  87,  43,  85,  87,  60, 185,   2,   2,  80,  44,  44,  44,  44,  79,  44,
     43,  71,  36,  36,  36,  36,  36,  36,  36,  36,  36,  70,  43,  43,  87,  43,
     43,  43,  80,   7,   7,   7,   7,   7,   2,   2,  94,  98,  44,  44,  44,  44,
     36,  70,   2,  61,  44,  44,  44,  44,  36,  94,  86,  43,  43,  43,  43,  85,
     98,  36,  63,   2,  59,  43,  60,  87,   7,   7,   7,   7,   7,  63,  63,   2,
    179,  27,  27,  27,  27,  27,  27,  27,  27,  27, 100,  44,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  86,  87,  43,  86,  85,  43,   2,   2,   2,  80,
     36,  36,  36,  61,  61,  36,  36,  62,  36,  36,  36,  36,  36,  36,  36,  62,
     36,  36,  36,  36,  63,  44,  44,  44,  36,  36,  36,  36,  36,  36,  36,  70,
     86,  87,  43,  43,  43,  80,  44,  44,  43,  86,  62,  36,  36,  36,  61,  62,
     61,  36,  62,  36,  36,  57,  71,  86,  85,  86,  90,  89,  90,  89,  86,  44,
     61,  44,  44,  89,  44,  44,  62,  36,  36,  86,  44,  43,  43,  43,  80,  44,
     43,  43,  80,  44,  44,  44,  44,  44,  36,  36,  94,  86,  43,  43,  43,  43,
     86,  43,  85,  71,  36,  63,   2,   2,   7,   7,   7,   7,   7,   2,  93,  71,
     86,  87,  43,  43,  85,  85,  86,  87,  85,  43,  36,  72,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  36,  94,  86,  43,  43,  44,  86,  86,  43,  87,
     60,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  36,  36,  43,  44,
     86,  87,  43,  43,  43,  85,  87,  87,  60,   2,  61,  44,  44,  44,  44,  44,
      2,   2,   2,   2,   2,   2,  64,  44,  36,  36,  36,  36,  36,  70,  87,  86,
     43,  43,  43,  87,  63,  44,  44,  44,  86,  43,  43,  87,  43,  43,  44,  44,
      7,   7,   7,   7,   7,  27,   2,  97,  43,  43,  43,  43,  87,  60,  44,  44,
     27, 100,  44,  44,  44,  44,  44,  62,  36,  36,  36,  61,  62,  44,  36,  36,
     36,  36,  62,  61,  36,  36,  36,  36,  86,  86,  86,  89,  90,  57,  85,  71,
     98,  87,   2,  64,  44,  44,  44,  44,  36,  36,  36,  36,  44,  36,  36,  36,
     94,  86,  43,  43,  44,  43,  86,  86,  71,  72,  90,  44,  44,  44,  44,  44,
     70,  43,  43,  43,  43,  71,  36,  36,  36,  70,  43,  43,  85,  70,  43,  60,
      2,   2,   2,  59,  44,  44,  44,  44,  70,  43,  43,  85,  87,  43,  36,  36,
     36,  36,  36,  36,  36,  43,  43,  43,  43,  43,  43,  85,  43,   2,  72,   2,
      2,  64,  44,  44,  44,  44,  44,  44,  43,  43,  43,  80,  43,  43,  43,  87,
     63,   2,   2,  44,  44,  44,  44,  44,   2,  36,  36,  36,  36,  36,  36,  36,
     44,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  89,  43,  43,  43,
     85,  43,  87,  80,  44,  44,  44,  44,  36,  36,  36,  61,  36,  62,  36,  36,
     70,  43,  43,  80,  44,  80,  43,  57,  43,  43,  43,  70,  44,  44,  44,  44,
     36,  36,  36,  62,  61,  36,  36,  36,  36,  36,  36,  36,  36,  86,  86,  90,
     43,  89,  87,  87,  61,  44,  44,  44,  36,  70,  85, 107,  64,  44,  44,  44,
     27,  27,  91,  67,  67,  67,  56,  20, 168,  67,  67,  67,  67,  67,  67,  67,
     67,  44,  44,  44,  44,  44,  44,  93, 105, 105, 105, 105, 105, 105, 105, 181,
      2,   2,  64,  44,  44,  44,  44,  44,  63,  64,  44,  44,  44,  44,  44,  44,
     65,  65,  65,  65, 132,  44,  44,  44,  43,  43,  60,  44,  44,  44,  44,  44,
     43,  43,  43,  60,   2,   2,  67,  67,  40,  40,  97,  44,  44,  44,  44,  44,
      7,   7,   7,   7,   7, 179,  27,  27,  27,  62,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  44,  44,  62,  36,  27,  27,  27,  30,   2,  64,  44,  44,
     36,  36,  36,  36,  36,  61,  44,  57,  94,  86,  86,  86,  86,  86,  86,  86,
     86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  44,  44,  44,  57,
     43,  74,  40,  40,  40,  40,  40,  40,  40,  88,  80,  44,  44,  44,  44,  44,
     86,  44,  44,  44,  44,  44,  44,  44,  40,  40,  52,  40,  40,  40,  52,  81,
     36,  61,  44,  44,  44,  44,  44,  44,  44,  44,  36,  36,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  44,  50,  60,  65,  65,  44,  44,  44,  44,  44,  44,
     43,  43,  43,  43,  43,  43,  43,  44,  43,  43,  43,  80,  44,  44,  44,  44,
     67,  67,  67,  92,  55,  67,  67,  67,  67,  67, 186,  87,  43,  67, 186,  86,
     86, 187,  65,  65,  65,  84,  43,  43,  43,  76,  50,  43,  43,  43,  67,  67,
     67,  67,  67,  67,  67,  43,  43,  67,  67,  43,  76,  44,  44,  44,  44,  44,
     27,  27,  44,  44,  44,  44,  44,  44,  11,  11,  11,  11,  11,  16,  16,  16,
     16,  16,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  16,
     16,  16, 110,  16,  16,  16,  16,  16,  11,  16,  16,  16,  16,  16,  16,  16,
     16,  16,  16,  16,  16,  16,  47,  11,  44,  47,  48,  47,  48,  11,  47,  11,
     11,  11,  11,  16,  16, 150, 150,  16,  16,  16, 150,  16,  16,  16,  16,  16,
     16,  16,  11,  48,  11,  47,  48,  11,  11,  11,  47,  11,  11,  11,  47,  16,
     16,  16,  16,  16,  11,  48,  11,  47,  11,  11,  47,  47,  44,  11,  11,  11,
     47,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  11,  11,
     11,  11,  11,  16,  16,  16,  16,  16,  16,  16,  16,  44,  11,  11,  11,  11,
     31,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  33,  16,  16,
     16,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  31,  16,  16,
     16,  16,  33,  16,  16,  16,  11,  11,  11,  11,  31,  16,  16,  16,  16,  16,
     16,  16,  16,  16,  16,  16,  16,  33,  16,  16,  16,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  31,  16,  16,  16,  16,  33,  16,  16,  16,
     11,  11,  11,  11,  31,  16,  16,  16,  16,  33,  16,  16,  16,  32,  44,   7,
      7,   7,   7,   7,   7,   7,   7,   7,  43,  43,  43,  76,  67,  50,  43,  43,
     43,  43,  43,  43,  43,  43,  76,  67,  67,  67,  50,  67,  67,  67,  67,  67,
     67,  67,  76,  21,   2,   2,  44,  44,  44,  44,  44,  44,  44,  57,  43,  43,
     16,  16,  16,  16,  16,  39,  16,  16,  16,  16,  16,  16,  16,  16,  16, 110,
     43,  43,  43,  80,  43,  43,  43,  43,  43,  43,  43,  43,  80,  57,  43,  43,
     43,  57,  80,  43,  43,  80,  44,  44,  43,  43,  43,  74,  40,  40,  40,  44,
      7,   7,   7,   7,   7,  44,  44,  77,  36,  36,  36,  36,  36,  36,  36,  80,
     36,  36,  36,  36,  36,  36,  43,  43,   7,   7,   7,   7,   7,  44,  44,  96,
     36,  36,  36,  61,  36,  36,  62,  61,  36,  36,  61, 179,  27,  27,  27,  27,
     16,  16,  43,  43,  43,  74,  44,  44,  27,  27,  27,  27,  27,  27, 163,  27,
    188,  27, 100,  44,  44,  44,  44,  44,  27,  27,  27,  27,  27,  27,  27, 163,
     27,  27,  27,  27,  27,  27,  27,  44,  36,  36,  62,  36,  36,  36,  36,  36,
     62,  61,  61,  62,  62,  36,  36,  36,  36,  61,  36,  36,  62,  62,  44,  44,
     44,  61,  44,  62,  62,  62,  62,  36,  62,  61,  61,  62,  62,  62,  62,  62,
     62,  61,  61,  62,  36,  61,  36,  36,  36,  61,  36,  36,  62,  36,  61,  61,
     36,  36,  36,  36,  36,  62,  36,  36,  62,  36,  62,  36,  36,  62,  36,  36,
      8,  44,  44,  44,  44,  44,  44,  44,  55,  67,  67,  67,  67,  67,  67,  67,
     27,  27,  27,  27,  27,  27,  91,  67,  67,  67,  67,  67,  67,  67,  67,  44,
     44,  44,  44,  67,  67,  67,  67,  67,  67,  92,  44,  44,  44,  44,  44,  44,
     67,  67,  67,  67,  92,  44,  44,  44,  67,  44,  44,  44,  44,  44,  44,  44,
     67,  67,  67,  67,  67,  25,  41,  41,  67,  67,  67,  67,  44,  44,  55,  67,
     67,  67,  67,  67,  44,  44,  44,  44,  67,  67,  92,  44,  67,  67,  92,  44,
     67,  92,  67,  67,  67,  67,  67,  67,  79,  44,  44,  44,  44,  44,  44,  44,
     65,  65,  65,  65,  65,  65,  65,  65, 171, 171, 171, 171, 171, 171, 171,  44
};

static UINT16 general_category_table_3[3136] = {
      0,   0,   1,   2,   3,   4,   5,   6,   0,   0,   7,   8,   9,  10,  11,  12,
     13,  13,  13,  14,  15,  13,  13,  16,  17,  18,  19,  20,  21,  22,  13,  23,
     13,  13,  13,  24,  25,  11,  11,  11,  11,  26,  11,  27,  28,  29,  30,  31,
     32,  32,  32,  32,  32,  32,  32,  33,  34,  35,  36,  11,  37,  38,  13,  39,
      9,   9,   9,  11,  11,  11,  13,  13,  40,  13,  13,  13,  41,  13,  13,  13,
     13,  13,  13,  42,   9,  43,  11,  11,  44,  45,  32,  46,  47,  48,  49,  50,
     51,  52,  48,  48,  53,  32,  54,  55,  48,  48,  48,  48,  48,  56,  57,  58,
     59,  60,  48,  32,  61,  48,  48,  48,  48,  48,  62,  63,  64,  48,  65,  66,
     48,  67,  68,  69,  48,  70,  71,  48,  72,  73,  48,  48,  74,  32,  75,  32,
     76,  48,  48,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,
     90,  83,  84,  91,  92,  93,  94,  95,  96,  97,  84,  98,  99, 100,  88, 101,
    102,  83,  84, 103, 104, 105,  88, 106, 107, 108, 109, 110, 111, 112,  94, 113,
    114, 115,  84, 116, 117, 118,  88, 119, 120, 115,  84, 121, 122, 123,  88, 124,
    125, 115,  48, 126, 127, 128,  88, 129, 130, 131,  48, 132, 133, 134,  94, 135,
    136,  48,  48, 137, 138, 139, 140, 140, 141,  48, 142, 143, 144, 145, 140, 140,
    146, 147, 148, 149, 150,  48, 151, 152, 153, 154,  32, 155, 156, 157, 140, 140,
     48,  48, 158, 159, 160, 161, 162, 163, 164, 165,   9,   9, 166,  11,  11, 167,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48, 168, 169,  48,  48, 168,  48,  48, 170, 171, 172,  48,  48,
     48, 171,  48,  48,  48, 173, 174, 175,  48, 176,   9,   9,   9,   9,   9, 177,
    178,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48, 179,  48, 180, 181,  48,  48,  48,  48, 182, 183,
     48, 184,  48, 185,  48, 186, 187, 188,  48,  48,  48, 189, 190, 191, 192, 193,
    194, 192,  48,  48, 195,  48,  48, 196, 197,  48, 198,  48,  48,  48,  48, 199,
     48, 200, 201, 202, 203,  48, 204, 205,  48,  48, 206,  48, 207, 208, 209, 209,
     48, 210,  48,  48,  48, 211, 212, 213, 192, 192, 214, 215, 216, 140, 140, 140,
    217,  48,  48, 218, 219, 160, 220, 221, 222,  48, 223,  64,  48,  48, 224, 225,
     48,  48, 226, 227, 228,  64,  48, 229, 230,   9,   9, 231, 232, 233, 234, 235,
     11,  11, 236,  27,  27,  27, 237, 238,  11, 239,  27,  27,  32,  32,  32,  32,
     13,  13,  13,  13,  13,  13,  13,  13,  13, 240,  13,  13,  13,  13,  13,  13,
    241, 242, 241, 241, 242, 243, 241, 244, 245, 245, 245, 246, 247, 248, 249, 250,
    251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 261, 262, 263, 264, 265,
    266, 267, 268, 269, 270, 271, 272, 272, 273, 274, 275, 209, 276, 277, 209, 278,
    279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279,
    280, 209, 281, 209, 209, 209, 209, 282, 209, 283, 279, 284, 209, 285, 286, 209,
    209, 209, 287, 140, 288, 140, 271, 271, 271, 289, 209, 209, 209, 209, 290, 271,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 291, 292, 209, 209, 293,
    209, 209, 209, 209, 209, 209, 294, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    209, 209, 209, 209, 209, 209, 295, 296, 271, 297, 209, 209, 298, 279, 299, 279,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    279, 279, 279, 279, 279, 279, 279, 279, 300, 301, 279, 279, 279, 302, 279, 303,
    279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279, 279,
    209, 209, 209, 279, 304, 209, 209, 305, 209, 306, 209, 209, 209, 209, 209, 209,
      9,   9,   9,  11,  11,  11, 307, 308,  13,  13,  13,  13,  13,  13, 309, 310,
     11,  11, 311,  48,  48,  48, 312, 313,  48, 314, 315, 315, 315, 315,  32,  32,
    316, 317, 318, 319, 320, 321, 140, 140, 209, 322, 209, 209, 209, 209, 209, 323,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 324, 140, 325,
    326, 327, 328, 329, 136,  48,  48,  48,  48, 330, 178,  48,  48,  48,  48, 331,
    332,  48,  48, 136,  48,  48,  48,  48, 200, 333,  48,  48, 209, 209, 323,  48,
    209, 334, 335, 209, 336, 337, 209, 209, 335, 209, 209, 337, 209, 209, 209, 209,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 209, 209, 209, 209,
     48, 338,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48, 151, 209, 209, 209, 287,  48,  48, 229,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
    339,  48, 340, 140,  13,  13, 341, 342,  13, 343,  48,  48,  48,  48, 344, 345,
     31, 346, 347, 348,  13,  13,  13, 349, 350, 351, 352, 353, 354, 355, 140, 356,
    357,  48, 358, 359,  48,  48,  48, 360, 361,  48,  48, 362, 363, 192,  32, 364,
     64,  48, 365,  48, 366, 367,  48, 151,  76,  48,  48, 368, 369, 370, 371, 372,
     48,  48, 373, 374, 375, 376,  48, 377,  48,  48,  48, 378, 379, 380, 381, 382,
    383, 384, 315,  11,  11, 385, 386,  11,  11,  11,  11,  11,  48,  48, 387, 192,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 388,  48, 389,  48,  48, 206,
    390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390,
    390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48, 204,  48,  48,  48,  48,  48,  48, 207, 140, 140,
    392, 393, 394, 395, 396,  48,  48,  48,  48,  48,  48, 397, 398, 399,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48, 400, 209,  48,  48,  48,  48, 401,  48,  48, 402, 140, 140, 403,
     32, 404,  32, 405, 406, 407, 408, 409,  48,  48,  48,  48,  48,  48,  48, 410,
    411,   2,   3,   4,   5, 412, 413, 414,  48, 415,  48, 200, 416, 417, 418, 419,
    420,  48, 172, 421, 204, 204, 140, 140,  48,  48,  48,  48,  48,  48,  48,  71,
    422, 271, 271, 423, 272, 272, 272, 424, 425, 426, 427, 140, 140, 209, 209, 428,
    140, 140, 140, 140, 140, 140, 140, 140,  48, 151,  48,  48,  48, 100, 429, 430,
     48,  48, 431,  48, 432,  48,  48, 433,  48, 434,  48,  48, 435, 436, 140, 140,
      9,   9, 437,  11,  11,  48,  48,  48,  48, 204, 192,   9,   9, 438,  11, 439,
     48,  48, 440,  48,  48,  48, 441, 442, 442, 443, 444, 445, 140, 140, 140, 140,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48, 314,  48, 199, 440, 140, 446,  27,  27, 447, 140, 140, 140, 140,
    448,  48,  48, 449,  48, 450,  48, 451,  48, 200, 452, 140, 140, 140,  48, 453,
     48, 454,  48, 455, 140, 140, 140, 140,  48,  48,  48, 456, 271, 457, 271, 271,
    458, 459,  48, 460, 461, 462,  48, 463,  48, 464, 140, 140, 465,  48, 466, 467,
     48,  48,  48, 468,  48, 469,  48, 470,  48, 471, 472, 140, 140, 140, 140, 140,
     48,  48,  48,  48, 196, 140, 140, 140,   9,   9,   9, 473,  11,  11,  11, 474,
     48,  48, 475, 192, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 271, 476,  48,  48, 477, 478, 140, 140, 140, 140,
     48, 464, 479,  48,  62, 480, 140,  48, 481, 140, 140,  48, 482, 140,  48, 314,
    483,  48,  48, 484, 485, 457, 486, 487, 222,  48,  48, 488, 489,  48, 196, 192,
    490,  48, 491, 492, 493,  48,  48, 494, 222,  48,  48, 495, 496, 497, 498, 499,
     48,  97, 500, 501, 140, 140, 140, 140, 502, 503, 504,  48,  48, 505, 506, 192,
    507,  83,  84, 508, 509, 510, 511, 512, 140, 140, 140, 140, 140, 140, 140, 140,
     48,  48,  48, 513, 514, 515, 478, 140,  48,  48,  48, 516, 517, 192, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140,  48,  48, 518, 519, 520, 521, 140, 140,
     48,  48,  48, 522, 523, 192, 524, 140,  48,  48, 525, 526, 192, 140, 140, 140,
     48, 173, 527, 528, 314, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     48,  48, 500, 529, 140, 140, 140, 140, 140, 140,   9,   9,  11,  11, 148, 530,
    531, 532,  48, 533, 534, 192, 140, 140, 140, 140, 535,  48,  48, 536, 537, 140,
    538,  48,  48, 539, 540, 541,  48,  48, 542, 543, 544,  48,  48,  48,  48, 196,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     84,  48, 518, 545, 546, 148, 175, 547,  48, 548, 549, 550, 140, 140, 140, 140,
    551,  48,  48, 552, 553, 192, 554,  48, 555, 556, 192, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,  48, 557,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 100, 271, 558, 559, 560,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48, 207, 140, 140, 140, 140, 140, 140,
    272, 272, 272, 272, 272, 272, 561, 562,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48, 388, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140,  48,  48,  48,  48,  48,  48, 563,
     48,  48, 200, 564, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     48,  48,  48,  48, 314, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     48,  48,  48, 196,  48, 200, 370,  48,  48,  48,  48, 200, 192,  48, 204, 565,
     48,  48,  48, 566, 567, 568, 569, 570,  48, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140,   9,   9,  11,  11, 271, 571, 140, 140, 140, 140, 140, 140,
     48,  48,  48,  48, 572, 573, 574, 574, 575, 576, 140, 140, 140, 140, 577, 578,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 440,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 199, 140, 140,
    196, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 579,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48, 580, 140, 140, 580, 581,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 206,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     48,  48,  48,  48,  48,  48,  71, 151, 196, 582, 583, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     32,  32, 584,  32, 585, 209, 209, 209, 209, 209, 209, 209, 323, 140, 140, 140,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 324,
    209, 209, 586, 209, 209, 209, 587, 588, 589, 209, 590, 209, 209, 209, 288, 140,
    209, 209, 209, 209, 591, 140, 140, 140, 140, 140, 140, 140, 140, 140, 271, 592,
    209, 209, 209, 209, 209, 287, 271, 461, 140, 140, 140, 140, 140, 140, 140, 140,
      9, 593,  11, 594, 595, 596, 241,   9, 597, 598, 599, 600, 601,   9, 593,  11,
    602, 603,  11, 604, 605, 606, 607,   9, 608,  11,   9, 593,  11, 594, 595,  11,
    241,   9, 597, 607,   9, 608,  11,   9, 593,  11, 609,   9, 610, 611, 612, 613,
     11, 614,   9, 615, 616, 617, 618,  11, 619,   9, 620,  11, 621, 622, 622, 622,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
     32,  32,  32, 623,  32,  32, 624, 625, 626, 627,  45, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    628, 629, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    630, 631, 632, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     48,  48, 151, 633, 634, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140,  48, 635, 140,  48,  48, 636, 637,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 638, 200,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 639, 585, 140, 140,
      9,   9, 597,  11, 640, 370, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 498, 271, 271, 641, 642, 140, 140, 140, 140,
    498, 271, 643, 644, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    645,  48, 646, 647, 648, 649, 650, 651, 652, 206, 653, 206, 140, 140, 140, 654,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    209, 209, 325, 209, 209, 209, 209, 209, 209, 323, 334, 655, 655, 655, 209, 324,
    656, 209, 209, 209, 209, 209, 209, 209, 209, 209, 657, 140, 140, 140, 658, 209,
    659, 209, 209, 325, 660, 661, 324, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 662,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 663, 426, 426,
    209, 209, 209, 209, 209, 209, 209, 323, 209, 209, 209, 209, 209, 660, 325, 427,
    325, 209, 209, 209, 664, 176, 209, 209, 664, 209, 657, 661, 140, 140, 140, 140,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    209, 209, 209, 209, 209, 323, 657, 665, 287, 209, 426, 288, 324, 176, 664, 287,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 666, 209, 209, 288, 140, 140, 192,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 140, 140,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48, 196,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48, 204,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 478,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 100, 140,
     48, 204, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  71, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,
    667, 140, 668, 668, 668, 668, 668, 668, 140, 140, 140, 140, 140, 140, 140, 140,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 140,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 669
};

static UINT8 general_category_table_4[2176] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  27,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     28,  26,  29,  30,  31,  32,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  33,  34,  34,  34,  34,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  36,  37,  38,  39,
     40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,
     26,  56,  57,  58,  58,  58,  58,  59,  26,  26,  60,  58,  58,  58,  58,  58,
     58,  58,  26,  61,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  26,  62,  58,  63,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  64,  26,  26,  65,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  66,  67,  68,  58,  58,  58,  58,  69,  58,
     58,  58,  58,  58,  58,  58,  58,  70,  71,  72,  73,  74,  75,  76,  58,  77,
     78,  79,  58,  80,  81,  58,  82,  83,  84,  85,  75,  86,  87,  88,  58,  58,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  89,  26,  26,  26,  26,  26,  26,  26,  90,  91,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  92,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  93,  58,  58,  58,  58,  58,  58,  26,  94,  58,  58,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  95,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     96,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  97,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  97
};

UINT32 lookup_general_category(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 9;
    block = general_category_table_4[block];
    offset = (codepoint >> 4) & 0x1F;
    block = general_category_table_3[(block << 5) + offset];
    offset = (codepoint >> 1) & 0x7;
    block = general_category_table_2[(block << 3) + offset];
    offset = codepoint & 0x1;
    value = general_category_table_1[(block << 1) + offset];

    return value;
}

/* The tables and function for Graph. */

static UINT8 graph_table_1[362] = {
      0,   0, 254, 255, 255, 255, 255, 127, 255, 252, 240, 215, 251, 255, 127, 254,
    255, 231, 255,   0, 255, 135,  31,   0, 255, 191,   3,   0, 255,  63, 255,  79,
    255,   7,   3, 255, 239, 159, 249, 255, 255, 253, 197, 243, 159, 121, 128, 176,
    207, 255, 238, 135, 109, 211, 135,  57,   2,  94, 192, 255, 127,   0, 238, 191,
    237, 243, 191,  59,   1,   0,   3, 254, 238, 159, 159,  57, 224, 176, 236, 199,
     61, 214,  24, 199, 255, 195, 199,  61, 129,   0, 255, 223, 253, 255, 255, 243,
    223,  61,  96,  39, 128, 255, 239, 243,  96,  96,   6,   0, 223, 253, 240, 255,
    238, 255, 127, 252, 251,  47, 127, 132,  95, 255,  28,   0, 255,  15, 214, 247,
    175, 255,  95,  63, 255, 254, 255,  31, 191,  32, 255,  61, 127,  61,  61, 127,
     61, 255, 127, 255, 255,   3,  63,  63, 255,   1,  63, 128,  15,   0,  13,   0,
     63,   0, 241, 255, 255, 199, 255, 207, 255, 159,  15, 240, 255, 248, 255, 227,
    255, 170, 223, 255, 207, 239, 220, 127, 243, 255, 191, 255,  15, 254, 255, 128,
      1, 128, 127, 127, 255, 251, 224, 255, 235,   3, 252, 255,  63, 192,  15, 128,
      7,   0,   0, 248, 126, 126, 126,   0, 127, 248, 248, 224, 127,  95, 219, 255,
    248, 255, 247, 255, 127,  15, 252, 252, 252,  28,   0,  62, 255, 239, 255, 183,
    135, 255, 143, 255,  15, 224,  15, 255, 255, 247, 183, 255, 251,  27, 253,   7,
     63, 253, 191, 145,  55, 248, 255, 143, 255, 131, 255, 240, 111, 240, 239, 254,
     63, 135,  63, 254,  63, 255,   7, 255,   3,  30,   0, 254,   7, 252, 255,  59,
      7,  32, 127, 189, 237, 251, 129, 224, 207,  31,   7, 128, 127, 242, 111, 255,
    191, 249, 127, 251, 127, 180, 191, 253, 251,   1,   3, 128, 255, 224, 239, 111,
    240,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223, 255, 123,  95, 252,
    255, 249, 219,   7, 127, 111, 159, 255, 150, 254, 247,  10, 132, 234, 150, 170,
    150, 247, 247,  94, 238, 251,  31,  31,   2,   0
};

static UINT8 graph_table_2[1632] = {
      0,   0,   1,   2,   2,   2,   2,   3,   0,   0,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   4,
      5,   2,   6,   2,   2,   2,   2,   2,   2,   2,   2,   1,   2,   7,   2,   2,
      8,   1,   2,   2,   9,   2,  10,  11,  12,   2,   2,   2,   8,   2,   2,   2,
      2,   2,   2,  13,   2,   2,   2,   8,   2,   2,  14,   3,   2,  15,  16,   2,
      3,  17,   2,   2,   2,   2,   2,   2,  18,  19,  20,  21,  22,  23,  24,   3,
     25,  19,  20,  26,  27,  28,  29,  30,  31,   6,  20,  32,  33,  34,  24,  35,
     36,  19,  20,  32,  37,  38,  24,   9,  39,  40,  41,  42,  43,  44,  29,  16,
     45,  46,  20,  47,  48,  49,  24,  50,  45,  46,  20,  51,  48,  52,  24,  53,
     45,  46,   2,   2,  54,  55,  24,   2,  56,  57,   2,  58,  59,  60,  29,  61,
      1,   2,   2,  10,   2,  62,   0,   0,  63,   2,  64,  14,  65,  47,   0,   0,
      2,   2,   2,   2,  66,   2,  67,   1,   2,  66,   2,  45,  45,  16,   0,   0,
      2,   2,   2,   2,  68,   2,   2,   2,   2,   2,   2,   2,  69,  70,   2,   2,
     69,   2,   2,  71,  72,  73,   2,   2,   2,  72,   2,   2,   2,   8,   2,  67,
      2,  74,   2,   2,   2,   2,   2,  75,   2,  67,   2,   2,   2,   2,   2,  76,
      2,  77,   2,  30,   2,  78,  45,  79,   2,   2,   2,   2,   2,  14,  74,  74,
      2,  74,   2,   2,   2,   2,   2,  76,   2,   2,  16,   2,   2,   2,   2,  80,
      2,   3,  62,  62,  81,   2,  14,  11,   2,   2,  62,   2,  74,  82,   2,   2,
      2,  83,   2,   2,   2,   3,   2,  84,  74,  74,  14,   2,   3,   0,   0,   0,
      2,   2,   2,   2,  67,   2,   2,   3,   2,   2,   2,   2,   2,   2,   2,  85,
      2,   2,   2,  86,  87,   2,   2,   2,  76,   2,   2,   8,   9,   2,   2,  16,
      2,  75,   2,   2,  75,  88,   2,  14,   2,   2,   2,  89,  89,  90,   2,  91,
      2,   2,   2,   2,   2,   2,  89,  92,   3,  67,   2,   2,  34,   2,   2,  34,
     62,   2,   2,   2,   2,   2,   2,   2,   2,   2,  30,   0,  16,   0,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  24,   2,  93,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  94,   2,   2,  68,   2,   2,   2,  95,  96,
      2,  30,  97,  97,  97,  97,   2,   2,   2,   2,   2,   2,   2,  14,   0,   0,
      2,  98,   2,   2,   2,   2,   2,  78,   2,   2,   2,   2,   2,  80,   0,  62,
      2,   2,   2,   2,   1,   2,   2,   2,   2,   7,   2,   2,   2,   2,   2,   2,
     99,   2,   2,   1,   2,   2,   2,   2,   3,   2,   2,   2,   2,   2,  78,   2,
      2,   3,   2,   2,   2,   2,   2,   2,  67,   2,   2,   2,  30,   2,   2,   2,
      2,   2,  62,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   9,
      2,   2,   2,   2,  16, 100,   0, 101,   2,   2,  67,  74,   2,   2,   2,   9,
      2,   2,   2,   2, 102,  74,   2,   2,   2,   2,   2,   2,   2, 103,   2,  67,
      2,   2,   2,   2,  12,  42,   2,   3,   2,   2,   2,  30,  14,  47,   2,   2,
      2,   2,   2,   2, 104, 105,   2,  30, 106, 107,  97,   2,   2,   2,  62,   2,
      2,   2,   2,   2,   2,   2,  14,  74,   2,   2,  78,   2, 108,   2,   2,  62,
      0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,  14,   2,
      2,   2,   2,   2,   2,  74,   0,   0,  30, 109,   2, 110, 111,   2,   2,   2,
      2,   2,   2,   2, 104, 112,   2,   2,   2, 101,   2,   2,  95,   0,   0,   2,
      2,  74,   2,   2,   2, 113, 114,  89,   2,   2,   2,   2,   2,   2,   2,  84,
      1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3, 115, 116,  97, 117,
    118,   2,  73, 119,  14,  14,   0,   0,   2,   2,   2,   2,   2,   2,   2,  16,
    120,   2,   2, 121,   2,   2,   2,   2,   3,  67,  34,   0,   0,   2,   2,  14,
      2,  67,   2,   2,   2,  34,   2,  62,   2,   2, 122,   2,  16,   2,   2,  16,
      2,  12,   2,   2, 123,  80,   0,   0,   2,  14,  74,   2,   2, 123,   2,  62,
      2,   2,   9,   2,   2,   2, 103, 124, 124, 125,   6, 126,   0,   0,   0,   0,
      2,   2,   2,  30,   2,  80,   9,   0,  93,   2,   2, 127,   0,   0,   0,   0,
    128,   2,   2, 129,   2,  93,   2,   2,   2,   3,  50,   0,   0,   0,   2, 130,
      2, 131,   2, 132,   0,   0,   0,   0,   2,   2,   2, 133,   2, 101,   2,   2,
    134, 135,   2, 136,  76,  76,   2,   2,   2,   2,   0,   0,   2,   2, 108,  30,
      2,   2,   2, 137,   2, 138,   2, 139,   2, 140, 141,   0,   0,   0,   0,   0,
      2,   2,   2,   2,  76,   0,   0,   0,   2,   2,   2, 104,   2,   2,   2, 142,
      2,   2,   9,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   3,
      2,   2, 143,  13,   0,   0,   0,   0,   2,   2,   9,   2,   2,  74,   0,   2,
     74,   0,   0,   2,  62,   0,   2,  30,   2,   2,   2,   2,  14, 101,   2,  77,
      2,   2,   2,   2, 144,   2,  76,  74,   2,   2,   2,  89,   9,   2,   2,  30,
      2,   2,   2,   2,   2,   2,   1,  11,   2,   6,   2,   3,   0,   0,   0,   0,
    145,  12,  74,   2,   2,   2,  16,  74,  18,  19,  20, 146,  37, 147, 148,  11,
      2,   2,   2,   2,   2, 118,  13,   0,   2,   2,   2,   2,   9,  74,   0,   0,
      2,   2,   2, 138,   2,  14,   0,   0,   2,   2,   2,   2,  11,  74,  67,   0,
      2,   2,   2,  74,  74,   0,   0,   0,   2,   8,  62,   2,  30,   0,   0,   0,
      2,   2,   2,  62,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2, 149,
    150, 151,   2, 152,  30,  74,   0,   0,   0,   0,   4,   2,   2,   4,  11,   0,
      2,   2,   2,   2,   9,   2,   2,   2,   2,   2, 104,   2,   2,   2,   2,  76,
     20,   2,   2,  73,  80,   2,  67,   2,   2, 101,  66,  30,   0,   0,   0,   0,
    153,   2,   2, 154,   9,  74, 155,   2,   3, 156,  74,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   2,  76,   0,   0,   0,  34,   2,   2,   2, 157,
      2,  74,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   3,  11,
      2,   2,   2,   2,  78,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2, 104,
      2,   2,   3,  76,   0,   0,   0,   0,   2,   2,   2,   2,  30,   0,   0,   0,
      2,   2,   2,  76,   2,   3,  42,   2,   2,   2,   2,   3,  74,   2,  14,  80,
      2,   2,   2,   2,  80,  98,   6, 158,   2,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   2,   2,   2,   2,   2,  16,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,  10,   2,   2,   2,  95,   2,   0,   0,   0,   0,  11,  13,
      2,   2,   2,   2,   2,  80,   0,   0,  76,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 159,   2,   2, 104,   0,   0, 104, 160,   2,
      2,   2,   2,   2,   2,   2,   2,  62,   2,   2,   2,   2,   2,   2,  16,  67,
     76,  47,  78,   0,   0,   0,   0,   0,   2,   2,  14,   2,  30,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  80,   2,   2,   7,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  16,   0,   2,   2,   2,   2,  80,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   2,  78,   2,   2,   2,   2,   2,  30,   2,  76,
      2,   2,   2,   2,   2,  89,   2,   2,   2,  45, 161, 162, 163,   2,   2,   2,
    164, 165,   2, 166, 167,  46,   2,   2,   2,   2, 138,   2,   2,   2,   2,   2,
      2,   2,   2,   2,  83,   2,   2,   2,  62, 105,   1,   0,   0,   0,   0,   0,
      2,   3,   0,   0,   0,   0,   0,   0,  73, 168, 169,   0,   0,   0,   0,   0,
      2,   2,  67,  14,  42,   0,   0,   0,   0,   2,   3,   0,   2,   2,   2, 132,
      0,   0,   0,   0,   0,   0, 170,   3,   2,   2,   2,   2, 171,  30,   0,   0,
      2,   2,   2,   2,  62,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      2,   2,   2,  11,   0,   0,   0,   0,   1,   2,   2,  14,   0,   0,   0,   0,
    163,   2, 172, 173, 174, 175, 176, 177,  98,  62, 178,  62,   0,   0,   0,  13,
      2,   2,  62,   2,   2,   2,   2,   2,   2,  78,   3,   1,   1,   1,   2,  80,
      2,   2,  14,   0,   0,   0,  29,   2, 104,   2,   2,  62,  76,  13,  80,   0,
      2,   2,   2,   2,   2, 158,  67,  67,   2,   2,   2,   2,   2,   2,   2,  78,
      2,   2,   2,   2,   2,  76,  62,  34,  62,   2,   2,   2,   9,  74,   2,   2,
      9,   2,  14,  13,   0,   0,   0,   0,   2,   2,   2,   2,   2,  78,  14, 179,
     30,   2,  67,  16,  80,  74,   9,  30,   2, 113,   2,   2,  16,   0,   0,  74,
      2,   2,   2,   2,   2,   2,   0,   0,   2,   2,   2,  76,   2,   2,   2,   2,
      2,  14,   2,   2,   2,   2,   2,   2,   2,   2,  13,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  34,   0,   2,  14,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,  16,   0,   0,   0, 180,   0,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   0,   2,   2,   2,   2,   2,   2,   2,  14
};

static UINT8 graph_table_3[688] = {
      0,   1,   2,   2,   2,   2,   3,   4,   2,   2,   5,   6,   2,   2,   7,   8,
      9,  10,   2,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,
      2,  24,   2,   2,  25,  26,  27,  28,   2,   2,   2,   2,   2,  29,  30,  31,
     32,  33,  34,  35,  36,  37,  38,  39,  40,  41,   2,   2,   2,   2,  42,  43,
     44,  45,   2,  46,   2,   2,   2,   2,  47,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  48,  49,   2,  50,  51,  52,  53,  54,   2,  55,
     56,  57,  58,  59,  60,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  61,   2,   2,  62,  63,   2,  64,
     65,  66,  67,  68,  69,  70,  71,  72,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  73,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,  75,  76,  77,  78,   2,   2,   2,  79,  80,  81,  82,  83,
     84,  85,  86,  87,  74,  88,  89,  90,   2,  91,  92,  93,   2,   2,  94,  95,
     96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,  74, 107, 108, 109, 110,
    111, 112, 113, 114, 115, 116, 117,  74, 118, 119,  74, 120, 121, 122, 123,  74,
    124, 125, 126, 127, 128, 129,  74,  74, 130, 131, 132, 133,  74, 134,  74, 135,
      2,   2,   2,   2,   2,   2,   2, 136, 137,   2, 138,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74, 139,
      2,   2,   2,   2,   2,   2,   2,   2, 140,  74,  74,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,   2,   2,   2,   2, 141,  74,  74,  74,
      2,   2,   2,   2, 142, 143, 144, 145,  74,  74,  74,  74, 146, 147, 148, 149,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  63,
      2,   2,   2,   2,   2,   2,   2,   2,   2, 150, 151,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74, 152,
      2,   2, 153,   2,   2, 154,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74, 155, 156,  74,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74, 157, 138,
      2, 158, 159, 160, 161, 162, 163,  74, 164, 165, 166,   2,   2, 167,   2, 168,
      2,   2,   2,   2,   2, 169,  74,  74,  74,  74,  74,  74,  74,  74, 170,  74,
    171,  74, 172,  74,  74, 173,  74,  74,  74,  74,  74,  74,  74,  74,  74, 174,
      2, 175, 176,  74,  74,  74,  74,  74, 177, 178, 179,  74, 180, 181,  74,  74,
    182, 183,   2, 184, 185,  74,   2,   2,   2,   2,   2,   2,   2, 186, 187, 188,
    189, 190,   2,   2, 191, 192,   2, 193,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 194,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 195,   2,
    196,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 197,   2,   2,
      2,   2,   2,   2,   2,   2,   2, 198,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2, 199,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,   2,   2, 200,  74,  74,  74,  74,  74,  74,  74,  74,  74,
    201,  74,   2, 202,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 203
};

static UINT8 graph_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   8,   9,   7,   7,   7,   7,  10,  11,   7,   7,   7,  12,
     13,  14,  15,  16,  17,  18,  19,  11,  20,  11,  11,  11,  11,  21,   7,   7,
     22,  23,  11,  11,  11,  24,  25,  26,  11,  27,  28,  29,  30,  31,  32,  33,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  34,   7,  35,  36,   7,  37,   7,   7,   7,  38,  11,  39,
      7,   7,  40,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     41,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  42,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  42
};

UINT32 lookup_graph(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = graph_table_4[block];
    offset = (codepoint >> 7) & 0xF;
    block = graph_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0x7;
    block = graph_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = graph_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Grapheme_Base. */

static UINT8 grapheme_base_table_1[3328] = {
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 127,
      0,   0,   0,   0, 255, 223, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 252,
    240, 215, 255, 255, 251, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
      7, 252, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 127, 254, 255, 255, 255, 255,
    255, 231,   0,   0,   0,   0,   0,  64,  73,   0, 255, 255, 255, 135,  31,   0,
    192, 255,   0, 232, 255, 255, 255, 255, 255,   7,   0,   0, 255, 255, 254, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,  64,  96, 194, 255, 255,
    255,  63, 253, 255, 255, 255,   0,   0,   0, 224, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255,  63,   0,   2,   0, 255, 255, 255, 255, 255,   7, 240, 199,
    255, 255,  63,   4,  16,   1, 255, 127, 255, 255, 255,  65, 255,   7, 255, 255,
    255, 127,   0,   0, 255, 255, 255, 255, 255,   3,   0,   0,   0,   0,   0,   0,
    248, 255, 255, 255, 255, 255, 255, 235,   1, 222,   1, 255, 243, 255, 255, 255,
    237, 159, 249, 255, 255, 253, 197, 163, 129,  89,   0, 176, 195, 255, 255,  63,
    232, 135, 249, 255, 255, 253, 109, 195,   1,   0,   0,  94, 192, 255,  92,   0,
    232, 191, 251, 255, 255, 253, 237, 227,   1,  26,   1,   0, 195, 255,   3,   2,
    236, 159, 249, 255, 255, 253, 237,  35, 129,  25,   0, 176, 195, 255, 255,   0,
    232, 199,  61, 214,  24, 199, 255, 131, 198,  29,   1,   0, 192, 255, 255,   7,
    238, 223, 253, 255, 255, 253, 255,  35,  30,   0,   0,  39, 195, 255, 128, 255,
    253, 223, 253, 255, 255, 253, 239,  99, 155,  13,   0,  96, 195, 255,   6,   0,
    252, 223, 253, 255, 255, 255, 255, 167, 193, 221, 112, 255, 195, 255, 255, 255,
    236, 255, 127, 252, 255, 255, 251,  47, 127,   0,   3, 127, 192, 255,  28,   0,
    254, 255, 255, 255, 255, 255,  13, 128, 127, 128, 255,  15,   0,   0,   0,   0,
    214, 247, 255, 255, 175, 255,  13,  32,  95,   0, 255, 243,   0,   0,   0,   0,
    255, 255, 255, 252, 255, 255,  95, 253, 255, 254, 255, 255, 255,  31,   0, 128,
     32,  31,   0,   0,   0,   0,   0, 192, 191, 223, 255,   7,   0,   0,   0,   0,
    255, 255, 255, 255, 255,  31,   2, 153, 255, 255, 255,  60, 254, 255, 225, 255,
    155, 223, 255, 223, 255, 255, 255, 255, 191,  32, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255,  61, 127,  61, 255, 255, 255, 255,
    255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 255, 255, 255, 255,
    255, 255,  61, 255, 255, 255, 255, 255, 255, 255, 255,   7, 255, 255, 255,  31,
    255, 255, 255,   3, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,  63,
    255, 255, 255,  31, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1,
    255, 255,  35, 128, 255, 255, 115,   0, 255, 255,   3,   0, 255, 223,   1,   0,
    255, 255, 255, 255, 255, 255,  79, 192, 191,   1, 240,  31, 255,   3, 255,   3,
    255,   7, 255,   3, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1,
    159, 255, 255, 255, 255,   5, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 127, 120,  14, 251,   1, 241, 255, 255, 255, 255,  63,  31,   0,
    255, 255, 255, 255, 255,  15, 255, 255, 255,   3, 255, 199, 255, 255, 255, 255,
    255, 255, 127, 198, 255, 255, 255, 255, 255, 255, 191,   0,  26, 224,   7,   0,
    255,   3, 255,   3, 255,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    240, 255, 255, 255, 255, 255,  15, 232, 251,  31, 255, 255, 255,   7, 240, 127,
    252, 255, 255, 255, 195, 196, 255, 255, 255, 255, 255, 255, 191,  92,  12, 240,
    255, 255, 255, 255, 255,  15,  48, 248, 255, 227, 255, 255, 255, 255, 255, 255,
    255,   1, 255, 255, 255, 255, 255, 231, 255,   0,   8,   0,   2, 222, 239,   4,
    255, 255, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255,  63,  63, 255, 255, 255, 255,  63,  63, 255, 170, 255, 255, 255,  63,
    255, 255, 255, 255, 255, 255, 223, 255, 223, 255, 207, 239, 255, 255, 220, 127,
    255,   7, 255, 255, 255, 128, 255, 255, 255, 255, 255, 255,   0,   0, 243, 255,
    255, 127, 255,  31, 255, 255, 255, 255,   1,   0,   0,   0,   0,   0,   0,   0,
    255,  15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 127,   0,   0,   0, 255,   7,   0,   0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 207, 255,
    255, 255, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 127,  12, 254,
    255, 255, 255, 255, 191,  32, 255, 255, 255, 255, 255, 255, 255, 128,   1,   0,
    255, 255, 127,   0, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0,   0,
    255, 255, 255, 251, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0, 255,  15,
    255, 255, 255, 255, 255,   3, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 127, 248, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    224, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 127, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0, 255, 255,
    255, 255, 255, 127, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255,  31, 255, 255, 255, 255, 255, 255, 127,   0, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255,  15,   0,   0, 255, 255, 255, 255, 255, 127,   8, 192,
    255, 255, 255,  63, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 252,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255,   7, 235,   3,   0,   0, 252, 255,
    187, 247, 255, 255, 159,  15, 255,   3, 255, 255, 255, 255, 255, 255, 255,   0,
    255, 255, 255, 255, 255, 255, 255, 255,  15, 192, 255,   3,   0,   0, 252, 127,
    255, 255, 255, 255,  63, 192, 255, 255, 127,   0,  12, 128, 255, 255, 255,  31,
    248, 255, 255, 255, 255, 255,  55, 204, 255, 191, 255, 195, 223, 255, 255, 127,
    255, 255, 255, 255, 255, 129,  25,   0, 247,  47, 255, 243, 255, 255, 255, 239,
    255, 255, 255, 255, 255, 255,  98,  62,   5,   0,   0, 248, 255, 207,  63,   0,
    126, 126, 126,   0, 127, 127, 255, 255, 255, 255, 255, 255, 255,  15, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 223,  30, 255,   3,
    255, 255, 255, 255,  15,   0, 255, 255, 127, 248, 255, 255, 255, 255, 255,  15,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   3,   0,   0,   0,   0,
    127,   0, 248, 160, 255, 255, 127,  95, 219, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255,   7,   0, 248, 255, 255, 255, 255, 255,
    255, 255, 252, 255, 255, 255, 255, 255, 255, 128,   0,   0,   0,   0, 255, 255,
      0,   0, 255,   3,   0,   0, 255, 255, 255, 255, 247, 255, 127,  15, 223, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  31,
    254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255,  63, 255, 255, 255, 127, 252, 252, 252,  28, 127, 127,   0,  48,
    255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   7,
    135, 255, 255, 255, 255, 255, 143, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 127, 255,  31,   1,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255,  31,
    255, 255, 255,  31, 255, 255, 255, 255, 255, 255,   1,   0, 254, 255, 255,  15,
    255, 255, 255, 255,  15, 224, 255, 255, 255,   7, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 191, 255, 255, 255, 255,  15, 255,  63,   0,   0,   0,   0,   0,
    255, 255, 255,  63, 255,   3, 255, 255, 255, 255,  15, 255, 255, 255, 255,  15,
    255, 255, 255, 255, 255,   0, 255, 255, 255, 255, 255, 255,  15, 128, 255, 247,
    255, 247, 183, 255, 251, 255, 251,  27,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 127,   0, 255, 255,  63,   0, 255,   0,   0,   0,
    191, 255, 255, 255, 255, 255, 253,   7,   0,   0,   0,   0,   0,   0,   0,   0,
     63, 253, 255, 255, 255, 255, 191, 145, 255, 255, 191, 255, 255, 255, 255, 255,
    255, 255, 255, 127, 128, 255,   0,   0,   0,   0,   0,   0, 255, 255,  55, 248,
    255, 255, 255, 143, 255, 255, 255, 131,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 240, 255, 255, 252, 255, 255, 255, 255, 255,
      1,   0, 239, 254, 255, 255,  63,   0, 255,   1, 255,   1, 255, 255, 255, 255,
    255, 255, 255, 255,   0,   0,   0,   0, 255, 255, 255, 255,  31, 248, 127,   0,
    255, 255, 255, 255, 255, 255,  63, 254, 255, 255,  63, 255, 255, 255,   7, 255,
    255, 255,   3,  30,   0, 254,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255,   1,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255,   7,   0, 255, 255, 255, 255, 255, 255,   7, 252,
    255, 255, 255, 255,  15,   0, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 127,
    255, 255, 255, 255, 255,  35,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255,   0, 255, 255,  63,   0, 254,   3,   0,   0, 255, 255,
    195,   3,   0,   0,   0,   0, 255, 255, 255,  15,   0,   0, 255, 255, 127,   0,
    253, 255, 255, 255, 255, 255, 255,   0, 128,  63, 252, 255, 255, 255,  38,   0,
    252, 255, 255, 255, 255, 255, 135, 217,   3,   0, 255, 255, 255,   1, 255,   3,
    248, 255, 255, 255, 127,  16, 192, 255, 255,   0, 255, 255, 255, 255, 119,   0,
    252, 255, 255, 255, 255, 255,  63, 128, 255,  97, 255, 255, 254, 255,  31,   0,
    255, 255, 251, 255, 255, 127,  44,  63,   0,   0,   0,   0,   0,   0,   0,   0,
    127, 189, 255, 191, 255,   3, 255, 255, 255, 255, 255, 127,   7,   0, 255,   3,
    236, 159, 249, 255, 255, 253, 237, 163, 158,  57,   1, 224,  15,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255,   0, 163, 255, 255, 175,   3,   0,   0,   0,
    255, 255, 255, 255, 255, 255,   6,  90, 242,   0, 255,   3,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 127,   3,  79, 254, 255, 255,  15,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255,   7,  88,  30,   0, 255,   3, 255,  31,   0,   0,
    255, 255, 255, 255, 255, 215,  64,   3, 255,   3,   0,   0,   0,   0,   0,   0,
    255, 255, 255,   7,  67,   0, 255, 255, 127,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 127,   0,   9,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   7, 128,
    127, 242, 111, 255, 255, 255, 190, 161, 119,   0, 255,   3,   0,   0,   0,   0,
      0,   0,   0,   0, 255, 252, 255, 255, 255, 255,  15, 240,  30,   0,   0,   0,
      1, 248, 255, 255, 255, 255,   7, 134, 127,   0, 129, 241, 255, 255, 255, 255,
    255,   3, 128, 252,   7,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1,
    255, 253, 255, 255, 255, 255,   0,  64,  63,   0, 255, 255, 255,  31, 255, 255,
    255, 255,   0,   0,   0,   2,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    127, 251, 255, 255, 255, 255,   1,   0,  64,   0, 255,   3, 191, 253, 255, 255,
    255, 127,  88,   1, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 231,   1,
      0,   0,   0,   0,   0,   0,   1,   0, 255, 255, 255, 255, 255, 255,   3, 128,
    255, 255, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 127,  31,   0,
    255, 255, 255, 255, 255, 255, 255, 255,  15,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   7,   0,
    255, 255, 255, 255, 255, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 127,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255,   1, 255, 255, 255, 127, 255, 195, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 127, 255,   3, 255, 255, 255,  63,  32,   0,
    255, 255, 255, 255, 255, 255, 128, 255,  63,   0, 255, 251, 251, 255, 255, 224,
    255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255,   7, 255, 255, 255, 255, 255, 255,
    255,   0, 248, 255,   0,   0,   0,   0,   0,   0,   0,   0,  15,   0,   3,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0,   0,   0,
    255,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 239, 111,
    255, 255, 255, 255,   7,   0,   0,   0,   0,   0,   7,   0, 240,   0, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   7, 255,  31,
    255,   1, 255, 147,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 255, 127, 254, 255, 255, 255, 255, 255, 255,  95,  60,   0,   0,
     24, 240, 255, 255, 255, 195, 255, 255, 255, 255, 255, 255, 255,   7,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255,  35,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255,  15,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 127,   0, 255, 255, 255,   1,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 223, 255, 255, 255, 255, 255,
    255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 255, 255, 255, 255,
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255, 255, 255, 255, 255,
    255, 255, 255, 255,  63, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 207, 255, 255, 255, 255, 255, 255,
      0,   0,   0,   0,   0,   0, 128,   7,   0,   0,   0,   0,   0, 224, 223, 255,
    239,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255,  31, 128,  63, 255, 195,   0,   0,   0,   0,   0,   0,
      0,   0, 255, 255, 255,  63,   0,   0, 255, 255, 255, 255, 255,  15, 255, 131,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 111, 255, 127,
    255, 255, 255, 255, 255, 255, 255, 255, 159, 255,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255,  15,   8, 255, 195,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 254, 255,
    255, 255, 255, 255, 255, 255,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    254, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0,   0,   0,   0,   0,   0,
    239, 255, 255, 255, 150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94,
    255, 251, 255,  15, 238, 251, 255,  15,   0,   0,   0,   0,   0,   0,   3,   0,
    255, 255, 255, 255, 255,  15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255,  15,   0, 255, 127, 254, 255, 254, 255, 254, 255, 255, 255,  63,   0,
    255, 255, 255, 255, 255,  63,   0,   0,   0,   0,   0,   0, 192, 255, 255, 255,
      7,   0, 255, 255, 255, 255, 255,  15, 255,   1,   3,   0,  63,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 224, 255,  31, 255,  31,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1, 255,  15,   1,   0,
    255,  15, 255, 255, 255, 255, 255, 255, 255,   0, 255,   3, 255, 255, 255, 255,
    255,   0, 255, 255, 255,  63,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0, 255,  63,  31,  31,
    127,   0, 255, 255, 255,  31, 255,   7,  63,   0, 255,   3, 255,   0, 127,   0,
    255, 255, 247, 255, 255, 255, 255, 255, 255,   7,   0,   0,   0,   0, 255,   3,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255,   1, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255,  63, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255,   3,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1,   0,   0,   0,
    255, 255, 255,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255,   7,   0,   0,   0,   0,   0,   0
};

static UINT8 grapheme_base_table_2[472] = {
      0,   1,   2,   2,   2,   2,   3,   4,   2,   5,   6,   7,   8,   9,  10,  11,
     12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,
     28,  29,   2,   2,  30,  31,  32,  33,   2,   2,   2,   2,   2,  34,  35,  36,
     37,  38,  39,  40,  41,  42,  43,  44,  45,  46,   2,  47,   2,   2,  48,  49,
     50,  51,   2,  52,   2,   2,   2,   2,  53,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  54,  55,   2,  56,  57,  58,  59,  60,   2,  61,
     62,  63,  64,  65,  66,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,  67,   2,   2,  68,  69,   2,  70,  71,  72,  73,  74,  75,  76,  77,  78,
      2,   2,   2,   2,   2,   2,   2,  79,  80,  80,  80,  80,  80,  80,  80,  80,
     80,  80,   2,   2,  81,  82,  83,  84,   2,   2,   2,  85,  86,  87,  88,  89,
     90,  91,  92,  93,  80,  94,  95,  96,   2,  97,  98,  99,   2,   2, 100, 101,
    102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,  80, 113, 114, 115, 116,
    117, 118, 119, 120, 121, 122, 123,  80, 124, 125,  80, 126, 127, 128, 129,  80,
    130, 131, 132, 133, 134, 135,  80,  80, 136, 137, 138, 139,  80, 140,  80, 141,
      2,   2,   2,   2,   2,   2,   2, 142, 143,   2, 144,  80,  80,  80,  80,  80,
     80,  80,  80,  80,  80,  80,  80, 145, 146,  80,  80,  80,  80,  80,  80,  80,
      2,   2,   2,   2, 147,  80,  80,  80,   2,   2,   2,   2, 148, 149, 150, 151,
     80,  80,  80,  80, 152, 153, 154, 155,   2,   2,   2,   2,   2,   2,   2, 156,
      2, 157, 158,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80, 159,
      2,   2, 160,   2,   2, 161,  80,  80, 162, 163,  80,  80,  80,  80,  80,  80,
     80,  80,  80,  80,  80,  80, 164, 144,   2, 165, 166, 167, 168, 169, 170,  80,
    171, 172, 173,   2,   2, 174,   2, 175,   2,   2,   2,   2, 176, 177,  80,  80,
     80,  80,  80,  80,  80,  80, 178,  80,  80,  80, 179,  80,  80, 180,  80,  80,
     80,  80,  80,  80,  80,  80,  80, 181,   2, 182, 183,  80,  80,  80,  80,  80,
    184, 185, 186,  80, 187, 188,  80,  80, 189, 190,   2, 191, 192,  80,   2,   2,
      2,   2,   2,   2,   2, 193, 194, 195, 196, 197,   2,   2, 198, 199,   2, 200,
      2,   2,   2,   2,   2, 201,   2,   2,   2,   2,   2,   2,   2,   2, 202,   2,
    203,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 204,   2,   2,
      2,   2,   2,   2,   2,   2,   2, 205,   2,   2,   2,   2, 206,  80,  80,  80,
      2,   2,   2,   2,   2,   2, 207,  80
};

static UINT8 grapheme_base_table_3[192] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  14,  15,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  16,  17,  17,  17,  17,  17,  17,  17,  17,  18,  19,
     20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  17,  30,  13,  31,  17,  17,
     17,  32,  17,  17,  17,  17,  17,  17,  17,  17,  33,  34,  13,  13,  13,  13,
     13,  35,  13,  36,  17,  17,  17,  17,  17,  17,  17,  37,  38,  17,  17,  39,
     17,  17,  17,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  17,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  52,  13,  13,  13,  53,  54,  13,
     13,  13,  13,  55,  13,  13,  13,  13,  13,  13,  56,  17,  17,  17,  57,  17,
     13,  13,  13,  13,  58,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17
};

static UINT8 grapheme_base_table_4[68] = {
      0,   1,   2,   3,   4,   5,   6,   7,   1,   1,   8,   9,  10,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11
};

UINT32 lookup_grapheme_base(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = grapheme_base_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = grapheme_base_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0x7;
    block = grapheme_base_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = grapheme_base_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Grapheme_Cluster_Break. */

static UINT8 grapheme_cluster_break_table_1[392] = {
      1,   1,   1,   1,   1,   1,   9,   1,   1,   2,   1,   1,   0,   0,   0,   0,
      0,   0,   0,   1,   0,   1,   0,   0,   6,   6,   6,   6,   0,   0,   0,   6,
      6,   6,   0,   0,   0,   6,   6,   6,   6,   6,   0,   6,   0,   6,   6,   0,
     12,  12,  12,  12,  12,  12,   0,   0,   6,   6,   6,   0,   1,   0,   0,   0,
      6,   0,   0,   0,   0,   0,   6,   6,   6,  12,   0,   6,   6,   0,   0,   6,
      6,   0,   6,   6,   0,   0,   0,  12,   0,   6,   0,   0,   6,   6,  12,   6,
      6,   6,   6,  14,   0,   0,   6,  14,   6,   0,  14,  14,  14,   6,   6,   6,
      6,  14,  14,  14,  14,   6,  14,  14,   0,   6,  14,  14,   6,   0,   6,  14,
      6,   0,   0,  14,  14,   0,   0,  14,  14,   6,   0,   0,   0,   0,   6,   0,
      0,   6,   6,  14,  14,   6,   6,   0,   6,  14,   0,  14,   6,  14,  14,   0,
      0,   0,  14,  14,  14,   0,  14,  14,  14,   0,   6,   6,   6,   0,  14,   6,
     14,  14,   6,  14,  14,   0,   6,  14,   6,   6,  14,  14,  14,   6,  12,   0,
     14,  14,   6,   6,   6,   0,   6,   0,  14,  14,  14,  14,  14,  14,  14,   6,
      0,   6,   0,  14,   0,   6,   0,   6,   6,  14,   6,   6,   8,   8,   8,   8,
     16,  16,  16,  16,  15,  15,  15,  15,   6,  14,   0,   0,  14,   0,   0,   0,
      6,   6,  14,   6,   6,   6,   1,   6,   6,  14,  14,   6,   0,  14,   6,  14,
      6,   6,  14,   0,   0,  14,   6,   6,  14,   6,  14,   6,   6,  17,   1,   1,
      1,   1,   1,   0,   0,   0,   0,  14,  14,   6,   6,  14,  14,  14,   0,   0,
      8,   0,   0,   0,   0,  14,   6,   0,  10,  11,  11,  11,  11,  11,  11,  11,
     16,  16,  16,   0,   0,   0,   0,  15,  14,   6,  14,   0,   0,  12,   0,   0,
      0,  14,  14,   0,  14,   0,  12,  12,   0,  14,  14,  14,   6,  14,   6,   0,
      6,  14,   6,  14,  14,  14,   0,  14,  14,   0,   0,   6,   6,  14,   6,  12,
     14,  12,  14,   6,   6,  14,  12,   6,  12,  12,   6,   6,  14,  14,  14,   0,
      6,   6,   0,  14,   0,   6,  14,   6,   6,   6,   6,   1,   1,   1,   1,   6,
      0,   0,  13,  13,  13,  13,  13,  13
};

static UINT8 grapheme_cluster_break_table_2[1712] = {
      0,   0,   1,   2,   0,   0,   0,   0,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   4,   0,   0,   0,   0,   0,   0,   0,   0,
      3,   3,   3,   5,   3,   3,   3,   3,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   3,   3,   3,   3,   7,   6,   8,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   9,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  10,
     11,  10,   3,   3,   3,   3,   3,   3,  12,  13,   3,   3,   6,   6,  14,  15,
      3,   3,   7,   6,   6,   6,   6,   6,   3,   3,   3,   3,  16,   3,   3,   3,
      3,   3,   3,   3,   3,  17,   6,  18,   6,  19,  20,   8,   3,   3,   3,   3,
      3,   3,   3,  21,  22,   3,   3,   3,   3,   3,   3,   3,   6,   6,   6,   6,
      6,   6,  14,   3,   3,   3,   3,   3,   3,  17,   6,   6,  16,   3,   3,   3,
      3,   3,   7,   6,   6,   3,   3,  22,   3,   3,   3,   3,   3,  17,  10,   6,
      6,   9,   9,   8,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   9,   3,
      3,   3,   3,   3,  13,   3,   6,   6,   3,   3,  17,   6,   6,   6,   6,   6,
     23,   6,   6,   6,   6,   6,   6,   6,  24,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,  25,  26,  27,   6,  28,  29,   9,   6,   3,   3,
     17,   3,   3,   3,   3,   3,   3,   3,  30,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  31,  27,  32,  33,  34,   3,   7,   3,   3,
     17,   3,   3,   3,   3,   3,   3,  35,  36,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  26,  37,   7,  19,   8,  22,   3,   3,   3,
      3,   3,   3,   3,   8,  22,   3,   3,  27,  10,  38,  34,   3,   3,   3,   3,
     17,   3,   3,   3,   3,   3,  17,   6,   3,   3,   3,   3,   3,   3,   3,  20,
     27,  32,  33,  34,   3,   9,   3,   3,  35,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  25,  39,  40,  41,  34,   3,   7,   3,   3,
     28,  16,   3,   3,   3,   3,   3,   3,  28,  42,  20,   8,   3,  11,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  43,  44,  45,  41,   8,   3,  11,   3,   3,
     46,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   7,  31,
     27,  26,  41,  47,   3,   7,   3,   3,   3,   3,  35,   7,  48,  49,  50,  51,
      3,   3,   3,   3,  40,   3,   3,   3,   3,   3,   3,   3,  52,   6,  14,   3,
      3,   7,   6,  14,   3,   3,   3,   3,   3,   3,   3,   3,  52,   6,   6,  16,
      3,   3,   6,   8,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   8,   3,
      3,   3,   3,   3,   3,  53,  22,  40,   3,   3,   3,   3,   9,   6,   6,  24,
      6,  20,   3,   9,   6,   6,   9,   6,   6,   6,   6,   6,   6,   6,   6,  16,
      3,  35,   3,   3,   3,   3,   3,   3,   3,   3,   3,   9,  54,   6,  36,  37,
      3,   3,   3,   3,   3,  40,   8,  17,  16,   3,   3,   3,   9,  16,   3,   3,
     35,  37,   3,  22,   3,   3,   3,  22,  55,  55,  55,  55,  55,  55,  55,  55,
     56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,   3,   3,   3,   3,   3,   3,   3,   9,
      3,   3,   3,   3,  17,  58,   3,   3,   3,   3,   3,   3,  17,  59,   3,   3,
      3,   3,   3,   3,  17,   3,   3,   3,   3,   3,   3,   3,   3,  60,   6,  46,
     50,  44,  27,   6,   6,   3,   3,  22,   3,   3,   7,  61,   3,   3,   3,   3,
      3,  11,   3,   3,   3,   3,   3,   3,   3,   3,  22,   3,   3,   3,   3,   3,
     24,  51,  28,   3,  44,  50,  27,   3,   3,   3,   3,   3,   3,   7,  62,   3,
      3,   3,   3,   3,   3,  63,   6,  14,  49,   9,   6,  28,  51,   6,   6,  19,
      6,   6,   6,  14,   3,   3,   3,   3,   6,  59,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   6,  24,  28,  44,  59,   3,   3,   3,   3,   3,   3,
      3,   3,   7,   6,   6,   3,   3,   3,  64,   3,   3,   3,   3,   3,   3,   3,
     65,  46,  60,   8,   3,   3,   3,   3,   3,  25,  46,  66,  46,   3,   3,   3,
      3,  50,  50,   6,   6,  48,   3,   3,   3,   3,   3,   3,  14,   6,   6,   6,
     54,   6,  16,  22,   3,  32,   8,   3,   3,   3,   4,  67,   3,   3,   3,   3,
      3,   3,   0,  68,   3,   3,   3,   3,   0,   0,   0,   0,   3,   3,   3,   3,
      6,   6,   6,   6,  16,   3,   3,   3,   3,   3,   3,   7,   8,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   7,   3,   3,  17,   6,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,  11,   3,   3,   3,   3,   7,  14,   6,   6,   8,
      3,   3,   3,   3,   3,   3,   3,  17,   3,   3,   3,   3,   8,   3,   3,   3,
     35,  35,   7,   3,   3,   3,   3,   3,  69,  70,   3,  16,   3,   3,   3,   3,
     71,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  50,  50,  50,
     50,   8,   3,   3,   3,   3,   3,   3,   6,   6,   6,   6,   8,   3,   3,   7,
      3,  17,   6,   8,   3,   3,   3,   3,   3,   7,   6,   6,  46,   3,   3,   3,
     55,  55,  55,  55,  55,  55,  55,  72,   3,   3,   3,   3,   7,  48,  46,  46,
     59,   3,   3,   3,   3,   3,   3,   3,   3,  22,   3,   3,   3,   3,   3,   3,
      3,   3,   9,  24,  70,  37,   3,   3,   7,   3,   3,  58,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  16,   3,   3,   3,   3,  20,  19,  16,  17,
     22,   3,   3,   3,   3,   3,   3,   3,   3,   3,  69,  46,   3,  73,   3,   3,
     69,  29,  39,  34,   3,   3,   3,   3,  74,  75,  75,  75,  75,  75,  75,  74,
     75,  75,  75,  75,  75,  75,  74,  75,  75,  75,  75,  75,  75,  74,  75,  75,
     75,  75,  75,  75,  74,  75,  75,  75,  75,  75,  75,  74,  75,  75,  75,  75,
     75,  75,  74,  75,  75,  75,  75,  75,  75,  74,  75,  75,  75,  75,  75,  75,
     75,   3,   3,   3,  56,  56,  56,  56,  56,  76,  77,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,   3,   3,   3,   3,   3,   3,   3,   3,  35,
      3,   3,   3,   3,   0,   0,   0,   3,   3,   3,   3,   3,   3,   3,   3,  22,
     16,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  17,  14,   3,
      9,  11,   3,   6,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  14,   7,
      3,   6,   3,   3,   3,   3,   3,   3,   3,   3,   7,  16,   3,   3,   3,   3,
     17,   8,   3,   3,   3,   3,   3,   3,  78,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   6,   6,   6,  14,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,  19,  16,   3,   7,   3,   3,   3,   3,  51,  24,  37,  79,
     35,   3,   3,  79,   3,   3,   3,   3,  14,   3,   3,   3,   3,   3,   3,   3,
      3,   7,   6,  27,   6,  16,   3,   3,   3,  80,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   7,   3,   3,   3,   3,   3,   3,   3,  69,  48,   6,  24,
     81,   3,   9,  43,   3,   3,   3,   3,   3,   3,   3,  51,  46,  54,   3,  35,
     51,   6,  14,   3,   3,   3,   3,   3,  28,  33,  33,  71,   3,   7,   3,   3,
     40,  17,   6,  16,   6,  16,   3,   3,   3,   3,   3,   3,   3,  82,   6,   6,
     48,  83,   3,   3,   3,   3,   3,  35,   3,   3,   3,   3,  62,   6,  84,  66,
     54,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   7,  48,   8,  50,  60,
     16,   3,   3,   3,   3,   3,   3,   8,   3,   3,   3,   3,  51,   6,  24,  66,
      3,   3,   7,  29,   6,  60,   3,   3,  17,  60,   6,   3,   3,   3,   3,   3,
      3,   3,   3,  51,   6,   6,  37,   3,   3,   3,   3,   3,  28,  85,  86,  87,
     88,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  82,   6,  17,  50,
     16,  59,   3,   3,   3,   3,   3,   3,   9,   6,  14,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   7,   6,  89,  14,   3,   7,   3,   3,   9,  24,  27,   3,
      3,  12,  90,   6,   6,  24,   8,   3,   3,   3,   3,  69,   6,  14,   6,  60,
      3,   3,   3,   3,  17,   6,   6,   6,   6,   6,  65,   6,  54,  37,   3,   3,
      3,   3,   3,   3,   9,  14,  35,  10,   6,  23,   3,   3,   3,   3,   3,   3,
      3,   3,  40,  91,  92,  66,   3,   3,   3,   3,   3,   3,   7,  39,   3,   3,
      3,   3,   3,   3,   0,   0,  15,   3,   3,   3,   3,   3,   6,  16,   3,   3,
      3,   3,   3,   3,   6,  14,   3,   3,   3,   3,   3,   7,  82,  50,  50,  50,
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,   3,   7,  14,   3,   3,   3,
      3,  16,   3,   3,  71,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  11,
      0,   3,   3,   3,   3,   3,   3,   3,   6,   6,   6,   8,   6,   6,   6,   6,
      3,  93,   8,  65,  94,   0,  95,   6,  14,   9,   6,   3,   3,   3,   3,   3,
      3,   3,  17,   8,   3,   3,   3,   3,  17,  16,   3,   3,   3,   3,   3,   3,
      6,   6,   6,   6,   6,  14,   7,   6,   6,   6,   6,  16,   3,  22,   3,   3,
      3,  16,   3,   3,   3,   3,   7,   6,   9,   6,   6,   6,   3,   3,   3,   3,
      6,  14,   6,   6,   6,   6,  19,   6,  10,  20,  14,   3,   3,   3,   3,   3,
      3,   3,   3,  35,   3,   3,   3,   3,   3,   3,   3,   6,   3,   3,   3,   3,
      3,   6,  14,   3,   3,   3,   3,   3,   3,  96,  97,  97,  97,  97,  97,  97,
      3,   3,   3,   3,   3,   3,   7,   6,   6,   6,   6,   6,   0,   0,   0,   0
};

static UINT8 grapheme_cluster_break_table_3[1376] = {
      0,   1,   1,   2,   3,   4,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   5,   5,   5,   6,   1,   1,   1,   1,
      1,   1,   1,   1,   7,   1,   1,   1,   1,   1,   1,   1,   8,   9,  10,   1,
     11,   1,  12,  13,   1,   1,  14,  15,  16,  17,  18,   1,   1,  19,   1,  20,
     21,  22,  23,   1,  24,   1,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,
     35,  36,  37,  38,  35,  36,  39,  40,  31,  41,  42,  30,  43,  44,  45,   1,
     46,  41,  47,  30,  31,  48,  49,  30,  50,  51,  52,  30,  31,   1,  53,  54,
      1,  55,  56,   1,   1,  57,  58,   1,  59,  60,   1,  61,  62,  63,  64,   1,
      1,  65,  66,  67,  68,   1,   1,   1,  69,  69,  69,  70,  70,  71,  72,  72,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  73,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,  74,  75,  76,  76,   1,  77,  78,   1,
     79,   1,   1,   1,  80,  81,   1,   1,   1,  82,   1,   1,   1,   1,   1,   1,
     83,   1,  84,  85,   1,  17,  86,   1,  87,  88,  89,  90,  91,  92,   1,  93,
      1,  94,   1,   1,   1,   1,  95,  96,   1,   1,   1,   1,   1,   1,   5,   5,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     97,  98,   1,  99,   1,   1,  17, 100,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 101,   1,   1,   1, 102,   1,   1,   1,   5,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1, 103,   1,   1, 104,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1, 105, 106,   1,   1, 107,   1,   1,   1,   1,   1,   1,   1,   1,
    108, 109,   1,   1, 110, 111, 112, 113,   1, 114, 115, 116,  27, 117, 118, 119,
      1, 120, 121, 122,   1, 123, 124, 125,   1,   1,   1,   1,   1,   1,   1, 126,
    127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128,
    129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130,
    131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132,
    133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127,
    128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129,
    130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131,
    132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133,
    127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128,
    129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130,
    131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132,
    133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127,
    128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129,
    130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131,
    132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133,
    132, 133, 127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 133,
    127, 128, 129, 130, 131, 132, 133, 127, 128, 129, 130, 131, 132, 134, 135, 136,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1, 137,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      6,   6,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1, 106,   1,   1, 138,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 139,
      1,   1,   1,   1,   1,   1,   1, 140,   1,   1,   1, 141,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    142, 143,   1,   1,   1,   1,   1,  80,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1, 144,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1, 145,   1,   1,   1,   1,  19,   1, 146,   1,   1,   1,
    147, 148, 149, 150,  91, 151, 152,   1, 153, 154, 155, 156,  91, 157, 158,   1,
      1, 159,   1,   1,   1,   1, 102, 160,  50,  51, 161, 162,   1,   1,   1,   1,
      1, 163, 164,   1,   1, 165, 166,   1,   1,   1,   1,   1,   1, 167, 168,   1,
      1, 169, 140,   1,   1, 170,   1,   1,  73, 171,   1,   1,   1,   1,   1,   1,
      1, 172,   1,   1,   1,   1,   1,   1,   1, 173, 174,   1,   1,   1, 175, 176,
    177, 178, 179,   1, 180,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1, 181,   1,   1, 182, 183,   1,   1,   1, 184, 185,   1, 186,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 187,   1,   1,   1,   1,   1,   1,   1,   1,
      1, 188,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 189,   1, 190,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 191, 192, 193,   1,   1, 194,
      1,   1,   1,   1, 195, 196,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   5, 197, 149,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 198, 199, 200,   1,   1,
      1,   1, 201,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      5, 202,   5, 203, 204, 205,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    206, 207,   1,   1,   1,   1,   1,   1,   1, 190,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1, 208,   1, 209,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1, 190,   1,   1,   1, 210,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 211,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 212,
      3,   5,   5,   5,   3,   3,   3,   3,   5,   5,   5,   5,   5,   5,   5, 213,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 grapheme_cluster_break_table_4[1088] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   9,  10,  11,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  12,  13,  14,  15,  16,  17,  18,
     19,  20,  14,  15,  16,  21,   9,   9,   9,   9,   9,   9,   9,   9,  22,  23,
     24,   9,  25,  26,  27,  28,  29,  30,   9,   9,   9,   9,   9,  31,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  32,  33,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  34,
      9,   9,   9,  35,  36,   9,  37,   9,  38,   9,  39,   9,  40,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     41,  42,  42,  42,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
};

UINT32 lookup_grapheme_cluster_break(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 10;
    block = grapheme_cluster_break_table_4[block];
    offset = (codepoint >> 5) & 0x1F;
    block = grapheme_cluster_break_table_3[(block << 5) + offset];
    offset = (codepoint >> 2) & 0x7;
    block = grapheme_cluster_break_table_2[(block << 3) + offset];
    offset = codepoint & 0x3;
    value = grapheme_cluster_break_table_1[(block << 2) + offset];

    return value;
}

/* The tables and function for Grapheme_Extend. */

static UINT8 grapheme_extend_table_1[672] = {
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255,   0,   0, 248,   3,   0,   0,
      0,   0, 254, 255, 255, 255, 255, 191, 182,   0,   0,   0,   0,   0, 255,   7,
      0, 248, 255, 255,   0,   0,   1,   0,   0,   0, 192, 159, 159,  61,   0,   0,
      0,   0,   2,   0,   0,   0, 255, 255, 255,   7,   0,   0, 192, 255,   1,   0,
      0, 248,  15,  32,   0,   0, 192, 251, 239,  62,   0,   0,   0,   0,   0,  14,
      0,   0,   0, 255,   0, 252, 255, 255, 251, 255, 255, 255,   7,   0,   0,   0,
      0,   0,   0,  20, 254,  33, 254,   0,  12,   0,   0,   0,   2,   0,   0,   0,
      0,   0,   0,  80,  30,  32, 128,   0,  12,   0,   0,  64,   6,   0,   0,   0,
      0,   0,   0,  16, 134,  57,   2,   0,   0,   0,  35,   0, 190,  33,   0,   0,
     12,   0,   0, 252,   0,   0,   0, 208,  30,  32, 224,   0,   4,   0,   0,   0,
      0,   0,   0,  64,   1,  32, 128,   0,  17,   0,   0,   0, 193,  61,  96,   0,
      0,   0,   0, 144,  68,  48,  96,   0,   3,   0,   0,   0,   0,   0,   0,  88,
      0, 132,  92, 128,   0,   0, 242,   7, 128, 127,   0,   0,   0,   0, 242,  31,
      0,  63,   0,   0,   0,   0,   0,   3,   0,   0, 160,   2,   0,   0, 254, 127,
    223, 224, 255, 254, 255, 255, 255,  31,  64,   0,   0,   0,   0, 224, 253, 102,
      0,   0,   0, 195,   1,   0,  30,   0, 100,  32,   0,  32,   0,   0,   0, 224,
      0,   0,  28,   0,   0,   0,  12,   0,   0,   0, 176,  63,  64, 254,  15,  32,
      0, 184,   0,   0,  96,   0,   0,   0,   0,   2,   0,   0, 135,   1,   4,  14,
      0,   0, 128,   9,   0,   0,  64, 127, 229,  31, 248, 159, 255, 127,   0,   0,
     15,   0,   0,   0,   0,   0, 240,  23,   0, 248,  15,   0,  60,  59,   0,   0,
     64, 163,   3,   0,   0, 240, 207,   0,   0,   0, 247, 255, 253,  33,  16,   3,
      0,  16,   0,   0, 255, 255,   1,   0,   0, 128,   3,   0,   0,   0,   0, 128,
      0, 252,   0,   0,   0,   0,   0,   6,   0, 128, 247,  63,   0,   0,   0, 192,
      0,   0,   3,   0,  68,   8,   0,   0,  96,  16,   0,   0,  48,   0,   0,   0,
    255, 255,   3, 128, 192,  63,   0,   0, 128, 255,   3,   0,   0,   0, 200,  51,
     32,   0,   0,   0,   0, 126, 102,   0,   8,  16,   0,   0,   0,   0, 157, 193,
      0,  48,  64,   0,  32,  33,   0,   0,   0,   0,   0,  32,   1,   0,   0,   0,
      0,   0, 192,   7, 110, 240,   0,   0,   0,   0,   0, 135, 240,   0,   0,   0,
      0,  24,   0,   0,  60,   0,   0,   0, 127,   0,   0,   0,   0,   0,  25, 128,
      0,   0, 120,   6, 128, 239,  31,   0,   0,   0,   8,   0,   0,   0, 192, 127,
      0, 158,   0,   0,   0, 128, 211,  64, 248,   7,   0,   0,   1,   0, 128,   0,
    192,  31,  31,   0,  92,   0,   0,  64,   0,   0, 249, 165,  13,   0,   0,   0,
      0, 128,  60, 176,   1,   0,   0,  48,   0,   0, 248, 167,   0,  40, 191,   0,
    188,  15,   0,   0,   0, 128, 255,   6,   0,   0,   1,  88,   8,   0,   0,   0,
      0,   0, 240,  12, 254,   7,   0,   0,   0,   0, 248, 121, 128,   0, 126,  14,
      0, 252, 127,   3,   0,   0, 127, 191,   0,   0, 252, 255, 255, 252, 109,   0,
      0,   0, 126, 180, 191,   0,   0,   0,   0,   0, 163,   0,   0,   0,  24,   0,
      0,   0,  31,   0,   0,   0, 127,   0,   0, 128,   0,   0,   0, 128,   7,   0,
     16,   0,   0,   0,   0,   0,   0,  96, 255,  63, 255, 255, 160, 195,   7, 248,
    231,  15,   0,   0,   0,  60,   0,   0,  28,   0,   0,   0, 255, 255, 127, 248,
    255,  31,  32,   0,  16,   0,   0, 248, 254, 255,   0,   0, 127, 255, 255, 249,
    219,   7,   0,   0,   0,  64,   0,   0,   0, 240,   0,   0, 240,   7,   0,   0
};

static UINT8 grapheme_extend_table_2[560] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   4,   5,   6,   0,
      7,   0,   8,   9,   0,   0,  10,  11,  12,  13,  14,   0,   0,  15,   0,  16,
     17,  18,  19,   0,  20,   0,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,
     31,  32,  33,  34,  31,  32,  35,  36,  27,  37,  38,  26,  39,  40,  41,   0,
     42,  37,  43,  26,  27,  44,  45,  26,  46,  47,  29,  26,  27,   0,  48,   0,
      0,  49,  50,   0,   0,  51,  52,   0,  53,  54,   0,  55,  56,  57,  58,   0,
      0,  59,  60,  61,  62,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,
     64,  65,  65,  65,   0,  66,  67,   0,  68,   0,   0,   0,  69,  70,   0,   0,
      0,  71,   0,   0,   0,   0,   0,   0,  72,   0,  73,  74,   0,  13,  75,   0,
     76,  77,  39,  78,  46,  79,   0,  80,   0,  81,   0,   0,   0,   0,  82,  83,
      0,   0,   0,   0,   0,   0,   1,   1,  84,   0,   0,   0,   0,   0,  13,  85,
      0,   0,   0,   0,   0,   0,   0,  86,   0,   0,   0,  87,   0,   0,   0,   1,
      0,  88,   0,   0,  89,   0,   0,   0,   0,   0,   0,  90,  91,   0,   0,  92,
     93,  94,   0,   0,   0,   0,  95,  96,   0,  97,  98,   0,  23,  99,   0, 100,
      0, 101, 102,  32,   0, 103,  27, 104,   0,   0,   0,   0,   0,   0,   0, 105,
     40,   0,   0,   0,   0,   0,   0,   0,   2,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  91,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 106,
      0,   0,   0,   0,   0,   0,   0, 107,   0,   0,   0, 108,   0,   0,   0,   0,
    109, 110,   0,   0,   0,   0,   0,  69,   0, 111,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 112,   0,   0,   0,   0,  15,   0, 113,   0,   0,   0,
     27,  20, 114, 115,  46, 116,  39,   0,  23, 117,   0, 118,  46, 119, 120,   0,
      0, 121,   0,   0,   0,   0,  87, 122,  46,  47, 123, 124,   0,   0,   0,   0,
      0,  20, 125,   0,   0, 126, 127,   0,   0,   0,   0,   0,   0, 128, 129,   0,
      0, 130, 107,   0,   0, 131,   0,   0,  63, 132,   0,   0,   0,   0,   0,   0,
      0, 133,   0,   0,   0,   0,   0,   0,   0, 134, 135,   0,   0,   0, 136, 107,
    137, 138, 139,   0, 140,   0,   0,   0,   0, 141,   0,   0, 142, 143,   0,   0,
      0, 144, 145,   0, 146,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 147,
      0,   0,   0,   0,   0,   0,   0, 148,   0, 149,   0,   0,   0,   0,   0,   0,
      0,   0, 150,   0, 151,   0,   0, 152,   0,   0,   0,   0, 153,   0,   0,   0,
      1, 154, 114,   0,   0,   0,   0,   0,   0,   0,   0, 155, 156, 157,   0,   0,
      0,   0, 158,   0,   0,   0,   0,   0,   1, 159,   1, 160, 161, 162,   0,   0,
    163, 164,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 165,   0, 166,
      0,   0,   0,   0,   0,   0, 149,   0,   0,   0, 167,   0,   0,   0,   0,   0,
      0,   1,   1,   1,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   2
};

static UINT8 grapheme_extend_table_3[352] = {
      0,   0,   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,
     14,   0,   0,  15,   0,   0,   0,  16,  17,  18,  19,  20,  21,  22,   0,   0,
     23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24,  25,   0,   0,
     26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  27,   0,  28,  29,  30,  31,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,  33,  34,
      0,  35,  36,  37,   0,   0,   0,   0,   0,   0,  38,   0,   0,  39,  40,  41,
     42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,   0,  53,  54,  55,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  56,  57,   0,   0,   0,  58,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60,
      0,  61,  62,   0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,
     64,  57,  65,   0,   0,   0,   0,   0,  66,  67,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     68,  69,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 grapheme_extend_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   7,   8,   9,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
     10,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_grapheme_extend(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = grapheme_extend_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = grapheme_extend_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = grapheme_extend_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = grapheme_extend_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Grapheme_Link. */

static UINT8 grapheme_link_table_1[248] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  24,   0,   4,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   4,  16,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   6,   0,   0,  48,   0,   0,   0,  16,   0,
      0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,   0,  12,   0,
      0,   0,   0,   0,   0,   0,   0, 128,  64,   0,   0,   0,   0,  16,   0,   0,
      0,   0,   8,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,  32,   0,   0,
     64,   0,   0,   0,   0,   0,   1, 128,   0,   0,   0,   0,   0,   0,   0,   2,
      0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,  32,   0,
      0,   0,   0,   0,   0,   4,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,  96,
      0,   0,   0,   0,   0,   0,  16,   0, 128,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   2,   0,   0,   0,   0,  48,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 128,   0,   0,   0,   0,   0
};

static UINT8 grapheme_link_table_2[208] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   1,   0,   1,   0,   1,   0,   1,   0,   1,   0,   1,
      0,   1,   0,   1,   2,   1,   0,   3,   4,   0,   4,   0,   0,   0,   5,   0,
      6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   0,   0,   8,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   0,   0,   0,   5,  10,  11,
      0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     13,   0,   0,   5,   0,  14,   0,  15,   0,   0,   0,  16,   0,   0,   0,  17,
      0,   0,   0,   0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,
      0,  18,  19,   0,  20,   0,   0,  15,  21,   0,   0,  22,   0,   1,   0,   0,
      0,  23,   0,  23,   0,   0,  12,   0,  12,   0,  16,   0,  24,   0,   0,   0,
     19,   0,   0,   0,  25,   0,   0,   9,  26,  27,  28,   0,   0,   0,   0,   0,
     12,   0,   0,   0,   0,  29,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 grapheme_link_table_3[64] = {
      0,   0,   1,   2,   3,   4,   5,   0,   0,   0,   0,   6,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   0,   0,   0,   0,   0,
      0,   0,   8,   0,   9,  10,  11,  12,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 grapheme_link_table_4[68] = {
      0,   1,   2,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_grapheme_link(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = grapheme_link_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = grapheme_link_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = grapheme_link_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = grapheme_link_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Hangul_Syllable_Type. */

static UINT8 hangul_syllable_type_table_1[224] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,
      2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   2,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   2,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   5,   0,   0,   0,   0,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   0,   0,   0,   0
};

static UINT8 hangul_syllable_type_table_2[176] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   2,   2,   2,   2,   3,   4,   4,   4,   4,   4,
      0,   0,   0,   0,   0,   0,   1,   5,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   7,   8,   9,   8,  10,   8,   6,   7,   8,   9,   8,  10,   8,   6,   7,
      8,   9,   8,  10,   8,   6,   7,   8,   9,   8,  10,   8,   6,   7,   8,   9,
      8,  10,   8,   6,   7,   8,   9,   8,  10,   8,   6,   7,   8,   9,   8,  10,
      8,   6,   7,   8,   9,   8,  10,   8,   6,   7,   8,   9,   8,  10,   8,   6,
      7,   8,   9,   8,  10,   8,   6,   7,   8,   9,   8,  10,   8,   6,   7,   8,
      9,   8,  10,   8,   6,   7,   8,   9,   8,  10,   8,   6,   7,   8,   9,   8,
     10,   8,   6,   7,   8,   9,   8,  10,   8,   6,   7,   8,   9,   8,  10,   8,
      8,   9,   8,  10,   8,   6,   7,   8,   9,   8,  11,   2,  12,   4,   4,  13
};

static UINT8 hangul_syllable_type_table_3[128] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   3,   4,   5,   6,
      7,   8,   9,   3,   4,   5,   6,   7,   8,   9,   3,   4,   5,   6,   7,   8,
      9,   3,   4,   5,   6,   7,   8,   9,   3,   4,   5,   6,   7,   8,   9,   3,
      4,   5,   6,   7,   8,   9,   3,  10,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 hangul_syllable_type_table_4[136] = {
      0,   1,   1,   1,   1,   2,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1
};

UINT32 lookup_hangul_syllable_type(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = hangul_syllable_type_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = hangul_syllable_type_table_3[(block << 5) + offset];
    offset = (codepoint >> 4) & 0xF;
    block = hangul_syllable_type_table_2[(block << 4) + offset];
    offset = codepoint & 0xF;
    value = hangul_syllable_type_table_1[(block << 4) + offset];

    return value;
}

/* The tables and function for Hex_Digit. */

static UINT8 hex_digit_table_1[48] = {
      0,   0,   0,   0,   0,   0, 255,   3, 126,   0,   0,   0, 126,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 255,   3, 126,   0,   0,   0, 126,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 hex_digit_table_2[48] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   2,   1
};

static UINT8 hex_digit_table_3[64] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   2,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 hex_digit_table_4[17] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1
};

UINT32 lookup_hex_digit(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 16;
    block = hex_digit_table_4[block];
    offset = (codepoint >> 11) & 0x1F;
    block = hex_digit_table_3[(block << 5) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = hex_digit_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = hex_digit_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Hyphen. */

static UINT8 hyphen_table_1[80] = {
      0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   4,   0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   8,   0,   0,   0,
      0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0
};

static UINT8 hyphen_table_2[64] = {
      0,   1,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   2,   1,   3,   1,   1,   1,   1,   1,   1,   1,
      4,   1,   1,   1,   1,   1,   1,   1,   5,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   6,   1,   1,   1,   1,   1,   7,   1,   1,   8,   9,   1,   1
};

static UINT8 hyphen_table_3[96] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   1,   1,
      4,   1,   1,   1,   1,   1,   1,   5,   6,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   7
};

static UINT8 hyphen_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_hyphen(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = hyphen_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = hyphen_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = hyphen_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = hyphen_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for ID_Continue. */

static UINT8 id_continue_table_1[430] = {
      0,   0, 255,   3, 254, 255, 255, 135, 255,   7,   0,   4, 160,   4, 255, 255,
    127, 255, 195, 255,   3,   0,  31,  80, 223, 188, 192, 215, 251, 255, 191, 255,
    251, 252, 127,   2, 255,   1, 255, 191, 182,   0,   7,   0, 255, 195, 239, 159,
    255, 253, 255, 159, 255, 231,  63,  36, 255,  63, 255,  15, 255, 126,   0, 255,
    207, 255, 249, 255, 197, 243, 159, 121, 128, 176,   3,  80, 238, 135, 109, 211,
    135,  57,   2,  94, 192, 255,  63,   0, 238, 191, 237, 243, 191,  59,   1,   0,
      0, 254, 238, 159, 159,  57, 224, 176,   2,   0, 236, 199,  61, 214,  24, 199,
    199,  61, 129,   0, 255, 223, 253, 255, 255, 243, 223,  61,  96,  39, 239, 223,
    239, 243,  96,  96,   6,   0, 223, 125, 240, 128,   0, 252, 238, 255, 127, 252,
    251,  47, 127, 132,  95, 255,  12,   0, 255, 127, 214, 247, 175, 255,  95,  63,
      0,   3, 160, 194, 255, 254, 255,  31, 223, 255,  64,   0, 191,  32, 255, 247,
    255,  61, 127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  63, 128,  31,   0,
     15,   0,  13,   0, 143,  48,   0, 184, 128,   0,   0, 248, 255,   0, 255, 227,
    247, 255, 255, 170, 223,  95, 220,  31, 207,  15,   0, 128,  16,   0,   2, 128,
    226, 255, 132, 252,  47,  63,  80, 253, 224,  67,  31, 248, 255, 128, 127,   0,
    127, 127, 224,   0,  62,  31, 127, 254, 224, 255, 240, 191, 128, 255, 252, 255,
    255, 249, 235,   3, 255,  16, 255, 232,   1, 128,   0,  56, 124,   0, 126, 126,
    126,   0, 255,  55, 127, 248, 248, 224, 127,  95, 219, 255, 248, 255,  24,   0,
      0, 224, 252, 252, 252,  28, 255, 239, 255, 183,   0,  32,  15, 255,  62,   0,
    183, 255, 251,  27, 253,   7,  63, 253, 191, 145,  55,   0, 255, 192, 111, 240,
    239, 254,  63, 135, 255,  27,   4,   0, 240,   0,  79,   0,  31, 222, 255,  23,
    255,  64, 127, 189, 237, 251, 129, 224, 207,  31, 191,   0,  63, 255,   0,  63,
     17,   0, 127, 242, 111, 255, 191, 249, 255, 252,  27,   0, 255,  35, 127, 251,
    127, 180, 191, 253, 251,   1, 255, 224, 239, 111, 255,  99, 224, 227,   7, 248,
    231,  15,   0,  60,  28,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223,
    255, 123,  95, 252, 247, 207,  32,   0, 219,   7, 255,  67, 127, 111, 150, 254,
    247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 238, 251
};

static UINT8 id_continue_table_2[1936] = {
      0,   0,   0,   1,   2,   3,   2,   4,   0,   0,   5,   6,   7,   8,   7,   8,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   9,  10,  11,   0,
      7,   7,   7,   7,   7,   7,   7,  12,  13,   7,  14,   7,   7,   7,   7,  15,
      7,   7,   7,   7,   7,   7,   7,   7,  16,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   2,   7,  17,   7,   7,  18,   2,   7,  19,  20,   7,   3,  21,
      0,   4,   7,   7,   7,   7,  22,   7,   7,   7,   7,   7,   7,  23,  24,  25,
      0,   7,   7,   7,  26,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,  27,
      7,   7,  28,   0,   7,  29,   4,   7,  30,  31,   7,   7,   7,   7,  14,   7,
      7,   7,   7,   7,   7,   7,  32,   2,  23,  33,  24,  34,  35,  36,  32,  37,
     38,  33,  24,  39,  40,  41,  42,  43,  44,  14,  24,  45,  46,  47,  32,  48,
     49,  33,  24,  45,  50,  51,  32,  52,  53,  54,  55,  22,  56,  57,  42,   0,
     58,  59,  24,  60,  61,  62,  32,   0,  63,  59,  24,  64,  61,  65,  32,  66,
     58,  59,   7,   7,  67,  68,  32,  69,  70,  71,   7,  72,  73,  74,  42,  75,
      2,   7,   7,   4,  76,   1,   0,   0,  77,   7,  78,  28,  79,  60,   0,   0,
     47,  80,   1,  81,  82,   7,  83,   2,  84,  82,   7,  83,  85,   0,   0,   0,
      7,   7,   7,   7,   1,   7,   7,   7,   7,  28,   7,   7,  86,   7,   7,  87,
      7,   7,   7,   7,  88,  89,   7,   7,  88,   7,   7,  90,  91,   8,   7,   7,
      7,  91,   7,   7,   7,  26,  48,  10,   7,   0,   7,   7,   7,   7,   7,  92,
      2,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,  25,   7,   2,   4,   7,   7,   7,   7,  93,  18,
      7,  94,   7,  95,   7,  96,  58,  97,   7,   7,   7,   7,   7,  98,   1,   0,
     99,   1,   7,   7,   7,   7,   7,  18,   7,   7,   4,   7,   7,   7,   7,  43,
      7,  76,  29,  29,  42,   7,  28,  95,   7,   7,  29,   7,   1,   4,   0,   0,
      7,  29,   7,   7,   7,  76,   7,  25,   1,   1, 100,  19,  76,   0,   0,   0,
      7,   7,   7,   7,  83,   1, 101,  96,   7,   7,   7,   7,   7,   7,   7,  96,
      7,   7,   7, 102, 103,   7,   7,  28,  18,   7,   7,  26,   0, 104,   7,   4,
      7,  92,   7,   7,  92, 105,   7,  28,   7,   7,   7, 106, 107, 108,  83, 107,
      0,   0,   0, 109,  47, 110,   0, 111,   0,  83,   0,   0,   0,  83, 112,  47,
    113, 114, 115,  60, 116,   0,   7,   7,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 117,  96,
      7,   7,  86,   7,   7,   7, 118, 109,   7, 119, 120, 120, 120, 120,   7,   7,
    121,   0,   2, 122,   2,   7,   7,   7,   7, 123,   2,   7,   7,   7,   7,  87,
    124,   7,   7,   2,   7,   7,   7,   7,  76,   0,   7,   7,   0,   0,   0,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,  83,   0,   0,   0,   0,   7,   7,  28,
     83,   7,  29,   0,   7,   7,   7, 125,   7,   7,   7,   7,   7,   7,   7,  10,
      0, 126, 127,   7,   7,   7,   7,   7, 128,   7,   7,   7,   4, 129,   0, 127,
      7,   7, 130,   0,   7,   7,   7,  96,   7,   7,   7,   7,  43,   1,   7, 131,
      7,   7,  28,   7,   7,  96,   7,  83,   7,   7,   7,   7, 132,   1,   7,  76,
      7,   7,   7, 119,  28,   1,   7,  71,   7,   7,   7,   7,  21, 133,   7, 134,
    135, 136, 120,   7,   7,  87,   1,   7,   7,   7,   7,   7,   7,   7, 137,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  96,   7, 138,   7,   7,  29,
      7,   7,   7,   7,   7,   7,  28,   7,   7,   7,   7,   7,   7,   1,   0,   0,
    119, 139,  24, 140, 141,   7,   7,   7,   7,   7,   7,  10,   0, 142,   7,   7,
      7,   7,   7,  28,   0,   7,   7,   7,   7, 127,   7,   7, 102,   0,   0,  29,
      7,   0,   7, 143, 144,   0,   0,  84,   7,   7,   7,   7,   7,   7,   7,  83,
      0,   1,   2,   3,   2,   4,  42,   7,   7,   7,   7,  76, 145, 146,   0,   0,
    147,   7,   8, 148,  28,  28,   0,   0,   7,   7,   7,   7,   7,   7,   7,   4,
      0,   0,   0,   0,   7,   7,   7,  95,   0,   0,   0,   0,   0,   0,   0, 149,
      0,   0,   0,   0,   0,   0,   0,   0,   7,  83,   7,   7,   7,  47,  47,   0,
      7,   7, 144,   7,   4,   7,   7,   4,   7,  28,   7,   7, 150, 151,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   1,   7,   7, 150,   7,  29,
      7,   7, 102,   7,   7,   7,  96,  87,  87, 152,  14, 153,   0,   0,   0,   0,
      7,   7,   7, 119,   7,  43, 102,   0,  15,   7,   7, 154,   0,   0,   0,   0,
    155,   7,   7, 156,   7,  43,   7, 119,   7,  76,   0,   0,   0,   0,   7, 157,
      7,  43,   7,   1,   0,   0,   0,   0,   7,   7,   7, 158,   0,   0,   0,   0,
    159, 160,   7, 161,   0,   0,   7,  83,   7,  83,   0,   0,  82,   7, 119,   0,
      7,   7,   7,  43,   7,  43,   7,  21,   7,  10,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,  18,   0,   0,   0,   7,   7,   7,  21,   7,   7,   7,  21,
      7,   7, 102,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 162,  10,   0,   0,   0,   0,
      7,  83, 100,   7,   7,  47,   0,   7,  43,   0,   0,   7,  95,   0,   7, 119,
      7,   7,   7,   7, 119,   0,  42,  94,   7,   7,   7,   4, 163,   7,  18,   1,
      7,   7,   7,  84, 164,   7,   7, 165,   7,   7,   7,   7, 166, 167,   0,   0,
      7,  14,   7, 168,   0,   0,   0,   0, 169,  19,  18,   7,   7,   7,   4,   1,
     23,  33,  24, 170,  50, 171, 172,  95,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,  22,  10,   0,   7,   7,   7,   7, 173,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7, 174,  47, 175,   0,   0,
      7,   7,   7,   7, 176,   1,   0,   0,   7,   7,   7,  18,   1,   0,   0,   0,
      7,  26,  29,   1, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   1, 109,
    177, 178,   7, 179,  96,   1,   0,   0,   0,   0, 180,   7,   7, 180, 181,   0,
      7,   7,   7,  76, 100,   7,   7,   7,   7, 182,   0,   7,   7,   7,   7,  18,
     24,   7,   7,   8,  47,   1,   0, 127,   7, 127,  82, 119,   0,   0,   0,   0,
    183,   7,   7, 184, 102,   1, 185,   7,  76, 186,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 119,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   1,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,  76,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   7,   7,  47,
      7,   7,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,  18,   7,  76,   1,   7,   7,   7,   7,  76,   1,   7,  28,  95,
      7,   7,   7, 119,  96,   1, 142, 187,   7,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,   7,   7,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   3,   7,   7,   7, 118,   7,   0,   0,   0,   0, 181,  10,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 102,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  43,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 188,
      7,   7,  21,   0,   0,  21, 164,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  29,
      7,   7,   7,   7,   7,   7,   4,  83,  18, 189,   0,   0,   0,   0,   0,   0,
      7,   7,  28,   7, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 190, 191, 192,   0, 193,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 194,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,  84,   7,   7,   7,  58, 195, 196, 197,   7,   7,   7,
    198, 199,   7, 200, 201,  59,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 174,   7,  59,  87,   7,  87,
      7,  84,   7,  84,  76,   7,  76,   7,  24,   7,  24,   7, 202,   7,   7,   7,
      7,   7,   7, 138,   7,   7,  83, 203, 110, 101,   2,   0,   0,   0,   0,   0,
      7,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      8, 128, 204,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  83,  28, 205,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  76,   0,   7,   7,   7,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 206,  76,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  95, 119,   0,   0,
      7,   7,   7,   7,  29,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    197,   7, 207, 208, 209, 210, 211, 212, 213,  29, 214,  29,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,
      7,   7,   7,  18,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  28,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  47,   0,
      7,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0
};

static UINT8 id_continue_table_3[480] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,   1,   1,  27,
     28,  29,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  31,  32,  30,  30,
     33,  34,  30,  30,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  35,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  36,   1,  37,  38,  39,  40,  41,  42,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  43,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,   1,  44,  45,   1,  46,  47,  48,
     49,  50,  51,  52,  53,  54,   1,  55,  56,  57,  58,  59,  60,  61,  62,  63,
     64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  30,  75,  76,  77,  78,
      1,   1,   1,  79,  80,  81,  30,  30,  30,  30,  30,  30,  30,  30,  30,  82,
      1,   1,   1,   1,  83,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,   1,   1,  84,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,   1,   1,  85,  86,  30,  30,  87,  88,
      1,   1,   1,   1,   1,   1,   1,  89,   1,   1,   1,   1,  90,  91,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  92,
      1,  93,  94,  30,  30,  30,  30,  30,  30,  30,  30,  30,  95,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  96,
     30,  97,  98,  30,  99, 100, 101, 102,  30,  30, 103,  30,  30,  30,  30, 104,
    105, 106, 107,  30,  30,  30,  30, 108, 109, 110,  30,  30,  30,  30, 111,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30, 112,  30,  30,  30,  30,
      1,   1,   1,   1,   1,   1, 113,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 114, 115,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 116,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 117,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,   1,   1, 118,  30,  30,  30,  30,  30,
      1,   1,   1, 119,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30, 120,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30
};

static UINT8 id_continue_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,  19,  20,  21,  22,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  23,  24,  25,   5,  26,  27,
      5,  28,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
     29,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_id_continue(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = id_continue_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = id_continue_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0xF;
    block = id_continue_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = id_continue_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Ideographic. */

static UINT8 ideographic_table_1[144] = {
      0,   0,   0,   0,   0,   0,   0,   0, 192,   0,   0,   0, 254,   3,   0,   7,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63, 255, 255,
    255, 255, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255,   0, 255, 255,  63,   0,   0,   0,   0,   0,
    255,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255,
    255, 255, 255, 255, 255, 255, 255,  15, 255, 255, 255, 255,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255,   1, 255, 255, 255,  63, 255, 255, 255, 255,
    255, 255, 255, 255,   3,   0, 255, 255, 255, 255, 255, 255,   1,   0,   0,   0,
    255, 255, 255,  63,   0,   0,   0,   0, 255,   7,   0,   0,   0,   0,   0,   0
};

static UINT8 ideographic_table_2[144] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0,
      0,   0,   0,   0,   2,   2,   2,   2,   2,   3,   2,   4,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   5,   2,   2,   2,   2,   2,   2,   2,   6,
      2,   2,   2,   7,   8,   0,   0,   0,   0,   0,   0,   0,   0,   9,   2,   2,
      2,   2,   2,  10,   0,   0,   0,   0,   2,   2,   2,  11,   2,   2,   2,   2,
      2,   2,   2,   2,  12,   2,   2,   2,  13,   2,   2,   2,   2,   2,   2,   2,
      2,   2,  14,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  15,
     16,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,  17,   0,   0
};

static UINT8 ideographic_table_3[192] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   3,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   5,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   6,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   7,   2,   2,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,  10,   0,   0,   0,   0,   0,   0,
      2,   2,   2,  11,   2,   2,   2,   2,   2,   2,   2,  12,  13,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  14,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,  15,   0,   0,   0,   0,   0,   0,   2,  16,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  17,   0,   0,   0,   0,   0,   0
};

static UINT8 ideographic_table_4[136] = {
      0,   1,   2,   3,   3,   0,   0,   4,   0,   0,   0,   5,   6,   7,   0,   0,
      3,   3,   3,   3,   3,   8,   9,  10,  11,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0
};

UINT32 lookup_ideographic(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = ideographic_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = ideographic_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = ideographic_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = ideographic_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for IDS_Binary_Operator. */

static UINT8 ids_binary_operator_table_1[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 243,  15
};

static UINT8 ids_binary_operator_table_2[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1
};

static UINT8 ids_binary_operator_table_3[32] = {
      0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 ids_binary_operator_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_ids_binary_operator(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = ids_binary_operator_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = ids_binary_operator_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = ids_binary_operator_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = ids_binary_operator_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for ID_Start. */

static UINT8 id_start_table_1[1000] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,   0,   0, 223, 188,
     64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,   3, 252, 255, 255,
    255, 255, 254, 255, 255, 255, 127,   2, 255,   1,   0,   0,   0,   0, 255, 255,
    255, 135,   7,   0, 255,   7,   0,   0,   0, 192, 254, 255, 255, 255,  47,   0,
     96, 192,   0, 156,   0,   0, 253, 255, 255, 255,   0,   0,   0, 224, 255, 255,
     63,   0,   2,   0,   0, 252, 255, 255, 255,   7,  48,   4, 255, 255,  63,   4,
     16,   1,   0,   0, 255, 255, 255,   1, 255,   7, 255, 255, 255, 126,   0,   0,
    255,   3,   0,   0, 240, 255, 255, 255, 255, 255, 255,  35,   0,   0,   1, 255,
      3,   0, 254, 255, 225, 159, 249, 255, 255, 253, 197,  35,   0,  64,   0, 176,
      3,   0,   3,  16, 224, 135, 249, 255, 255, 253, 109,   3,   0,   0,   0,  94,
      0,   0,  28,   0, 224, 191, 251, 255, 255, 253, 237,  35,   0,   0,   1,   0,
      3,   0,   0,   2, 224, 159, 249, 255,   0,   0,   0, 176,   3,   0,   2,   0,
    232, 199,  61, 214,  24, 199, 255,   3, 224, 223, 253, 255, 255, 253, 255,  35,
      0,   0,   0,  39,   3,   0,   0,   0, 225, 223, 253, 255, 255, 253, 239,  35,
      0,   0,   0,  96,   3,   0,   6,   0, 240, 223, 253, 255, 255, 255, 255,  39,
      0,  64, 112, 128,   3,   0,   0, 252, 224, 255, 127, 252, 255, 255, 251,  47,
    127,   0,   0,   0, 254, 255, 255, 255, 255, 255,  13,   0, 214, 247, 255, 255,
    175, 255,  13,  32,  95,   0,   0, 240,   1,   0,   0,   0, 255, 254, 255, 255,
    255,  31,   0,   0,   0,  31,   0,   0, 255,   7,   0, 128,   0,   0,  63,  60,
     98, 192, 225, 255,   3,  64,   0,   0, 191,  32, 255, 255, 255, 255, 255, 247,
    255,  61, 127,  61, 255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255,
    255, 255,  61, 255, 255, 255, 255,   7, 255, 255,  63,  63, 255, 159, 255, 255,
    255, 199, 255,   1, 255, 255,   3, 128, 255, 255,   3,   0, 255, 223,   1,   0,
    255, 255,  15,   0,   0,   0, 128,  16, 255,   5, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 127, 255,  63,  31,   0, 255,  15, 255, 255, 255, 255, 127,   0,
    255, 255,  31,   0, 128,   0,   0,   0, 224, 255, 255, 255, 224,  31,   0,   0,
    248, 255, 255, 255,   1, 192,   0, 252,  63,   0,   0,   0,  15,   0,   0,   0,
      0, 224,   0, 252, 255, 255, 255,  63, 255,   1, 255, 255, 255, 255, 255, 231,
      0, 222, 111,   4,  63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15,
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  63,
     80, 253, 255, 243, 224,  67,   0,   0,  31, 120,  12,   0, 255, 128,   0,   0,
    127, 127, 127, 127, 224,   0,   0,   0, 254,   3,  62,  31, 255, 255, 127, 248,
    255, 127,   0,   0, 255,  31, 255, 255,   0,  12,   0,   0, 255, 127,   0, 128,
      0,   0, 128, 255, 252, 255, 255, 255, 255, 249, 255, 255, 255,   7, 235,   3,
      0,   0, 252, 255, 187, 247, 255, 255,   7,   0,   0,   0,   0,   0, 252, 104,
     63,   0, 255, 255, 255, 255, 255,  31, 255, 255,   7,   0,   0, 128,   0,   0,
    223, 255,   0, 124, 247,  15,   0,   0, 255, 255, 127, 196, 255, 255,  98,  62,
      5,   0,   0,  56, 255,   7,  28,   0, 126, 126, 126,   0, 127, 127, 255, 255,
    255,   3, 255, 255,  15,   0, 255, 255, 127, 248, 255, 255, 255, 255, 255,  15,
    255,  63, 255, 255, 255, 255, 255,   3, 127,   0, 248, 160, 255, 253, 127,  95,
    219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255, 255,   0,   0,   0,
      0,   0, 255,  15,   0,   0, 223, 255, 192, 255, 255, 255, 252, 252, 252,  28,
    255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 255, 255,   1,   0,
     15, 255,  62,   0, 255, 255,  15, 255, 255,   0, 255, 255,  15,   0, 255, 247,
    255, 247, 183, 255, 251, 255, 251,  27, 191, 255, 255, 255, 255, 255, 253,   7,
     63, 253, 255, 255, 255, 255, 191, 145, 255, 255,  55,   0, 255, 255, 255, 192,
      1,   0, 239, 254,  31,   0,   0,   0, 255,   3,   3,   0, 128,   0, 255, 255,
    255, 255, 255,   0,   0,   0,  38,   0, 144,   0, 255, 255, 255, 255,  71,   0,
     30,   0,   0,  20, 255, 255, 251, 255, 255,  15,   0,   0, 127, 189, 255, 191,
      0,   0,   1, 224, 128,   7,   0, 128, 176,   0,   0,   0,   0,   0,   0,  15,
     16,   0,   0,   0, 255,   7,   0,   1,   0,   0,   0, 128, 127, 242, 111, 255,
    255, 255,   0, 128,   2,   0,   0,   0, 255, 252, 255, 255,  10,   0,   0,   0,
      1, 248, 255, 255, 255, 255,   7,   4,   0,   0,   1, 240, 255,   3,   0,  32,
    255, 253, 255, 255, 127, 251, 255, 255,  64,   0,   0,   0, 191, 253, 255, 255,
    255,   3,   0,   1, 255,  63,   0,   0, 248, 255, 255, 224, 255,   7,   1,   0,
     11,   0,   0,   0,   0,   0, 239, 111,   0,   0,   7,   0, 240,   0, 255, 255,
    255,   7, 255,  31, 255,   1, 255,   3, 255, 255, 223, 255, 255, 255, 255, 223,
    100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,
     95, 252, 253, 255,  63, 255, 255, 255, 253, 255, 255, 247, 255, 127, 255, 255,
    255,  31, 128,  63,   0,  64,   0,   0, 127, 111, 255, 127,  15,   8,   0,   0,
    150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 255,  15,
    238, 251, 255,  15,   3,   0, 255, 255
};

static UINT8 id_start_table_2[912] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   0,   7,   8,   9,   4,  10,
      4,   4,   4,   4,  11,   4,   4,   4,   4,  12,  13,   4,  14,   0,  15,  16,
      0,   4,  17,  18,   4,   4,  19,  20,  21,  22,  23,   4,   4,  24,  25,  26,
     27,  28,  29,  30,  31,   4,  32,   0,  33,  34,  35,  36,  37,  38,  39,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  46,  50,  51,  52,  53,  47,   0,
     54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,   0,
     69,  70,  68,   0,  71,  72,  73,   0,  74,   0,  75,  76,  77,   0,   0,   0,
      4,  78,  79,  80,  81,   4,  82,  83,   4,   4,  84,   4,  85,  86,  87,   4,
     88,   4,  89,   0,  22,   4,   4,  90,  69,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  91,   1,   4,   4,  92,  93,  94,  94,  95,   4,  96,  97,   0,
      0,   4,   4,  29,   4,  98,   4,  99, 100,   0,  15, 101,   4, 102,  32,   0,
    103,   4, 104,   0,   0, 105,   0,   0, 106,  96, 107,   0, 108, 109,   4, 110,
      4, 111, 112, 113, 114, 115,   0, 116,   4,   4,   4,   4,   4,   4,   0,   0,
     90,   4, 117, 113,   4, 118, 119, 120,   0,   0,   0, 121, 122,   0,   0,   0,
    123, 124, 125,   4,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      4,   4,   4,   4,   4,   4,   4, 126,   4,  82,   4, 127, 103, 128, 128,   0,
    129, 130,  69,   4, 131,  69,   4,  83, 106,  12,   4,   4, 132,   4,   0,  15,
      4,   4,   4,   4,  76,   0,  15, 113, 133, 134,   4, 135, 113,   4,   4,  22,
    136, 137,   4,   4, 138,   4, 139, 140, 141, 142,   4,  96, 137,  96,   0, 143,
     25, 144,  68, 145,  33, 146, 147, 148,   4,  14, 149, 150,   4, 151, 152, 153,
    154, 155,  83, 156,   4,   4,   4, 142,   4,   4,   4,   4,   4, 157, 158, 159,
      4,   4,   4, 160,   4,   4, 161,   0, 162, 163, 164,   4,   4,  94, 165,   4,
      4, 113,  15,   4, 166,   4, 167, 168,   0,   0,   0, 169,   4,   4,   4, 145,
      0,   1,   1, 170,   4, 100, 171,   0, 172, 173, 174,   0,   4,   4,   4,  89,
      0,   0,   4, 104,   0,   0,   0,   0,   0,   0,   0,   0, 145,   4, 175,   0,
      4,  23,  30,  99, 113,   4, 176,   0,   4,   4,   4,   4, 113,  15, 177, 159,
      4, 178,   4, 179, 180, 181,   0,   0,   4, 103,  99, 167, 182, 183,   0,   0,
    184, 185,  99, 103, 100,   0,   0, 186,  99, 161,   0,   0,   4, 187,   0,   0,
    188,  99,   0, 145, 145,   0,  75, 189,   4,  99,  99, 146,  94,   0,   0,   0,
      4,   4,  14,   0,   4, 146,   4, 146,   4, 111,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   4, 190,   0,   0, 145, 191, 110,  15,  57,  15, 189, 103,
    108, 192,   0, 193, 108,  22,  15,  14, 108,  68, 194, 195, 108, 146, 196,   0,
    197, 198,   0,   0, 199, 114, 100,   0,  49,  46, 200,  57,   0,   0,   0,   0,
      4, 104, 201,  57,   4,  22, 202,   0,   0,   0,   0,   0,   4, 132, 203,   0,
      4,  22, 204,   0,   4, 205,   0,   0,  89,   0,  68,   0,   0,   0,   0,   0,
      4, 198,   0,   0,   0,   4,   4, 206, 207, 208, 209,   0,   0, 210, 175, 211,
    212, 213, 214,   4, 215,  15,   4,  29, 216, 132,  74, 140,  22,   0,   0,   0,
    217, 175, 218, 219, 220,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 146,
      0,   0,   0,   0,   0,  47,   0,   0,   4,   4,   4,   4, 161,   0,   0,   0,
      4,   4,   4, 132,   4,   4,   4,   4,   4,   4, 111,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  15,   4,   4, 175,   4, 132,   0,   0,   0,   0,   0,   0,
      4,   4,  68,   0,   0,   0,   0,   0,   4,  29, 100,  15,   4, 100,  15, 221,
      4,  22, 111, 222,  22,   0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,
      4,   4, 223,   0, 165,   0,   0, 224,   4,   4,   4,   4,   4,   4,   4, 192,
      4,   4,   4,   4,   4,   4,  99,   0,  14,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 225,   4, 142, 226, 227,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4, 159,   4,   4,   4, 228, 229,   0,   0,   0,
      4,   4, 230,   4, 231, 232, 233,   4, 234, 235, 236,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4, 237, 238,  83, 230, 230, 239, 239, 216, 216, 149,   0,
    100,   0,   0,   0,   0,   0,   0,   0,   4, 240, 241,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  15, 221,   4, 198,   0,   0,   0,   0,   0,   0,   0, 242,
      4,   4,   4,   4,   4,   4, 189,   0,   4,   4, 243,   0,   0,   0,   0,   0,
    233, 244, 245, 246, 247, 248,   0,   0,   4,   4,   4,   4,   4,   4,   4,   0,
      4,  29,   4,   4,   4,   4,   4,   4, 113,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4, 249,   4,   4,   4,   4,   4,   4,   4,   4,   4,  74,
    113,   0,   0,   0,   0,   0,   0,   0,   4,   4,  17,   0,   0,   0,   0,   0
};

static UINT8 id_start_table_3[432] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  32,  33,  31,  31,
     34,  35,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  27,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  36,   1,  37,  38,  39,  40,  41,  42,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  43,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  44,  45,   1,  46,  47,  48,
     49,  50,  51,  52,  53,  54,   1,  55,  56,  57,  58,  59,  60,  61,  62,  63,
     64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  31,  75,  76,  77,  78,
      1,   1,   1,  79,  80,  81,  31,  31,  31,  31,  31,  31,  31,  31,  31,  82,
      1,   1,   1,   1,  83,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  85,  86,  31,  31,  87,  88,
      1,   1,   1,   1,   1,   1,   1,  89,   1,   1,   1,   1,  90,  91,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  92,
      1,  93,  94,  31,  31,  31,  31,  31,  31,  31,  31,  31,  95,  31,  31,  31,
     31,  31,  31,  31,  96,  97,  98,  99,  31,  31,  31,  31,  31,  31,  31, 100,
     31, 101, 102,  31,  31,  31,  31, 103, 104, 105,  31,  31,  31,  31, 106,  31,
      1,   1,   1,   1,   1,   1, 107,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 108, 109,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 110,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 111,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 112,  31,  31,  31,  31,  31,
      1,   1,   1, 113,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 id_start_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,   8,  19,  20,   8,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  21,  22,  23,   5,  24,  25,
      5,  26,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_id_start(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = id_start_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = id_start_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = id_start_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = id_start_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for IDS_Trinary_Operator. */

static UINT8 ids_trinary_operator_table_1[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,   0
};

static UINT8 ids_trinary_operator_table_2[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1
};

static UINT8 ids_trinary_operator_table_3[32] = {
      0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 ids_trinary_operator_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_ids_trinary_operator(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = ids_trinary_operator_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = ids_trinary_operator_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = ids_trinary_operator_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = ids_trinary_operator_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Indic_Positional_Category. */

static UINT8 indic_positional_category_table_1[752] = {
      0,   0,   0,   0,   8,   8,   8,   7,   0,   0,   8,   7,   1,   0,   7,   4,
      7,   1,   1,   1,   1,   8,   8,   8,   8,   7,   7,   7,   7,   1,   4,   7,
      0,   8,   1,   8,   8,   8,   1,   1,   0,   0,   1,   1,   0,   8,   7,   7,
      1,   0,   0,   4,   4,   0,   0,   5,   5,   1,   0,   0,   0,   0,   0,   7,
      0,   0,   8,   0,   0,   8,   8,   7,   7,   1,   1,   0,   0,   0,   0,   8,
      8,   0,   0,   8,   8,   1,   0,   0,   0,   1,   0,   0,   8,   8,   0,   0,
      1,   8,   0,   8,   8,  14,   0,   7,   7,   1,   0,   0,   0,   0,   8,   8,
      8,   8,   8,   8,   1,   0,   7,   8,  12,   0,   0,   5,  13,   1,   0,   0,
      0,   8,   8,  14,   0,   0,   7,   7,   8,   7,   7,   0,   0,   0,   4,   4,
      4,   0,   5,   5,   5,   8,   0,   0,   8,   0,   0,   0,   1,   0,   8,   8,
      7,   0,   8,   8,   9,   0,   8,   8,   0,   8,   1,   0,  14,   7,   7,   7,
      7,   0,   8,  14,  14,   0,  14,  14,   0,   7,   7,   0,   8,   8,   7,   7,
      8,   0,   7,   7,   7,   7,   7,   1,   1,   0,   4,   4,   5,   8,   8,   0,
      7,   7,   8,   8,   1,   0,   1,   0,   7,   4,  12,   4,   5,  13,   5,   7,
      7,   8,   7,   7,   1,   1,   1,   0,  15,  15,  15,  15,  15,   7,   0,   8,
      8,   8,   8,   0,   1,   1,   1,   8,   1,   0,   0,   0,  15,   0,   0,   0,
      1,   1,   0,   0,   0,   1,   0,   1,   0,   8,   0,   0,   0,   0,   7,   4,
      0,   1,   8,   9,   1,   1,   9,   9,   9,   9,   8,   8,   8,   9,   8,   8,
      0,   1,   1,   1,   1,   1,   1,   1,   0,   0,   1,   0,   7,   8,   8,   1,
      1,   4,   8,   8,   8,   8,   8,   1,   7,   0,   8,   7,  10,   1,   1,   0,
      1,   0,   7,   7,   7,   0,   0,   7,   7,   7,   7,   7,   7,   7,   0,   0,
      0,   8,   8,   8,   0,   0,   1,   7,   4,   8,   8,   7,   7,   1,   0,   7,
      7,   8,   0,   0,   0,   0,   8,   1,   1,   7,   0,   0,   7,   0,   0,   0,
      0,   0,   7,   8,   1,   1,  12,  13,   5,   4,   4,   4,   5,   5,   8,   7,
      7,   8,   8,   8,   8,   8,   0,   8,   8,   8,   1,   7,   7,  14,  14,   8,
      7,   7,   1,   7,   7,   1,   8,   1,   7,  15,  15,  15,   7,   7,  15,   7,
      1,   4,   7,   8,   0,   4,   1,   7,   0,   7,   8,   7,   8,   1,   1,   8,
      1,   7,   4,   4,   4,   4,   4,   8,   8,   0,   0,   1,   8,   7,   8,   8,
      1,   1,   1,   3,   9,  11,   4,   4,   5,   5,   8,  14,   8,   8,   7,   0,
      0,   7,   1,   1,   8,   1,   4,   7,   7,   8,   7,   8,   7,   7,   7,   4,
      4,  12,   7,   7,   4,   4,   8,   1,   6,   1,   1,   1,   1,   1,   8,   8,
      8,   7,   6,   6,   6,   6,   6,   6,   6,   0,   0,   0,   8,   0,   0,   7,
      7,   1,   8,   7,   1,   8,   0,   0,   0,   0,   0,   1,   1,   1,   8,   1,
      1,   1,   4,   4,   8,   1,   3,   2,   3,   0,   0,   0,   8,   1,   8,   4,
      4,   8,   1,   7,   4,   1,   1,   0,   8,   7,   0,   0,   1,  15,  15,   8,
      8,  15,   7,  15,  15,   7,   8,   8,   0,   0,   0,   4,   1,   8,   4,   7,
      0,   7,   0,   0,   1,   7,   7,   0,   0,   6,   1,   1,   0,   8,   6,   0,
      8,   1,   1,   0,   7,   8,   7,   0,   7,   4,   7,   1,   1,   8,   8,   7,
      4,   8,   9,   9,   4,   7,   1,   1,   8,   8,   8,  14,   0,   1,   1,   8,
      1,   0,   4,   8,   8,   8,  14,  14,   7,   0,   0,   4,   5,   7,   0,   0,
      0,   7,   4,   7,   7,   7,   1,   8,   8,   7,   1,   0,   1,   4,   8,  12,
      5,   7,   5,   8,   8,   7,   1,   1,   4,  12,   5,  13,   8,   8,   7,   1,
      7,   8,   7,   1,   7,   8,   4,   7,   0,   1,  10,   8,   1,   1,   4,   8,
      7,   4,   0,   4,   5,   0,   0,   8,   8,   7,   0,   8,   7,   8,   3,   1,
      4,   0,   0,   0,   0,   8,   1,   1,   8,   8,   1,   0,   8,   7,   8,   1,
      1,   1,   8,   7,   1,   4,   1,   8,   7,   8,   8,   0,   8,   8,   1,   8,
      1,   0,   7,   1,   7,   7,   7,   0,   8,   8,   0,   7,   1,   4,   7,   0
};

static UINT8 indic_positional_category_table_2[1040] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   2,   3,   4,   5,   6,   7,   8,   9,   0,   0,
     10,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   3,   4,  12,  13,  14,   0,  15,   0,   0,
     10,   0,   0,   0,   0,   0,   0,  16,  17,   0,   0,   0,   0,   0,   0,   0,
     18,  19,  20,  21,  22,   0,   0,   0,   0,   0,   0,   0,  23,  22,   0,   0,
      4,  24,  25,  26,   0,   0,   0,   0,  10,   0,   0,   0,   0,   0,  27,  28,
      0,   0,   0,   0,   0,   0,   0,  29,   4,  12,  30,  31,   0,  32,   0,   0,
     16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,
     34,  35,  36,  37,   0,  15,   0,   0,   6,  38,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  39,   6,  40,  41,  23,   0,  42,   0,   0,
     43,  44,  45,  23,   0,  46,   0,   0,  47,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  19,  48,  49,  50,  36,  51,   0,  15,   0,   0,
      0,   0,  16,  15,  52,  53,  54,  55,   0,   0,   0,   0,  33,   0,   0,   0,
      0,   0,   0,   0,  56,  28,  57,   0,  58,  59,  28,  60,   0,   0,   0,   0,
      0,   0,   0,   0,  56,  28,  61,  62,  58,  63,  28,  23,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,  65,  66,  67,
      0,   0,   0,   0,  68,  69,  70,   1,  71,  39,   0,  72,  73,  73,  72,  73,
     73,  73,  73,  73,  73,  73,  73,  62,   0,  74,   0,   0,   0,   0,   0,   0,
      0,   0,  15,  75,  76,  77,  78,  79,   0,   0,   0,   0,   0,  33,  64,  10,
     80,  81,  82,  83,  84,  38,   0,   0,  85,  86,  82,  87,   0,   0,  33,  88,
      0,   0,   0,   0,  89,  90,   0,   0,   0,   0,   0,   0,  89,  91,   0,   0,
      0,   0,   0,   0,  89,   0,   0,   0,   0,   0,   0,   0,   0,  92,  77,  93,
     94,  95,  96,  28,  97,   0,   0,  66,  98,  99,   6,   0, 100,  82, 101,   0,
      0,   0,   0,   0,  82, 102, 103,  82,  91,   0,  83,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  19, 104,   0,   0,   0,   0,   0,   0, 105,  77,  57,
    106,  96, 107, 108, 109,  28,  28, 110,  28,  91,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 111, 112, 113, 114,  91,   0,   0,   0,   0,   0,   0,
      0,   0,  19,   5,  28,   0,   0,   0, 115,   0,   0,   0,   0,   0,   0,   0,
    116, 117, 115,  64,   0,   0,   0,   0,   0,   2,  47, 118,  47,   0,   0,   0,
      0, 119, 120,   5,  28, 121,   0,   0,   0,   0,   0,   0,  60, 122, 123,  73,
    124, 125, 126,  22,   0, 127,   0,   0,   0,   0,   0,   0,   0,   0,  19,   0,
      0,   0,   0,   0,  38,   0,   0,   0,  16,  16,  19,   0,   0,   0,   0,   0,
     15, 128,   0,  62,   0,   0,   0,   0,  83,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  82,  82,  82,  82, 129,   0,   0,   0,   0,   0,   0,
     28,  28,  28,  28,  23,   0,   0,  19,   0,   0, 130,  64,   0,   0,   0,   0,
      0, 130, 131,  61,  47,   0,   0,   0,   0,   0,   0,   0,  19,  52, 132, 133,
    134,   0,   0,   0,   0,   0,   0,   0,   0,  66,   0,   0,   0,   0,   0,   0,
      0,   0,  84, 135, 136, 137,   0,   0,  19,   0,   0, 138,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  15, 138,   0,   0,   0,   0, 111, 139, 140, 141,
     66,   0,   0,   0,   0,   0,   0,   0,   0,   0, 142, 143,   0, 144,   0,   0,
     15,  56, 145,  26,   0,   0,   0,   0, 146, 147,   0,  61,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 148,   0, 149,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  28,  73, 123,  60,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  20,  38,   0,   0,   0,   0,   0,   0, 150, 151,  18,   0,
     74,   0,   0,   0,   0,   0,   0,   0,  60,   0,   0,   0,   0,   0,   0,   0,
      0,  19,   9, 152, 148,  38,   0,   0,   0,  46,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 130,   0,   0,   0,   0,   0,   0,   0,  15, 153,  73, 154,
     40,   0, 155, 156,   0,   0,   0,   0,   0,   0,   0,  49, 157, 111,   0,  16,
      0,   0,   0,   0,   0,   0,   0,  19, 150,   5, 148,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 130,  80,   6, 158,  13, 159,   0,  15,   0,   0,
     33,  27,  28,  38,  28,  38,   0,   0,   0,   0,   0,   0,   0, 160,  73, 123,
    161, 162,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0, 150,  73, 163, 164,
    165,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 153,  64, 166, 167,
     62,   0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,  49,  73, 151, 168,
     38,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19, 169, 123, 167,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 170,  52, 171,   5,   0,   0,   0,   0,   0,
      0,   0,   0, 150,  61,  28,  18,   0,   0,   0,   0,   0,  82, 172, 173, 174,
    175,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 160,  73,  27,  82,
     62, 176,   0,   0,   0,   0,   0,   0, 177,  28, 178,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 130,   5, 179,  57,   0,   0,   0,   0, 177,   1,   4,   0,
      0,  28,   9,  73,  73, 180,  38,   0,   0,   0,   0,  15,   9,  57,  28, 167,
      0,   0,   0,   0,  10,  73,  73,  73,  73,  73, 116,  73, 181, 182,   0,   0,
      0,   0,   0,   0,  84, 178,  16,  97, 183, 184,   0,   0,   0,   0,   0,   0,
      0,   0,  33, 185, 186, 149,   0,   0,   0,   0,   0,   0,  19, 187,   0,   0
};

static UINT8 indic_positional_category_table_3[576] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   4,   5,   6,   7,   8,
      9,   6,  10,  11,   9,   6,  12,  13,   5,  14,  15,   4,  16,  17,  18,   0,
     19,  20,  21,   4,   5,  14,  22,   4,  23,  24,  25,   4,   5,   0,  26,  27,
      0,  28,  29,   0,   0,  30,  31,   0,  32,  33,   0,  34,  35,  36,  37,   0,
      0,  38,  39,  40,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  42,  43,  44,  44,   0,  45,  46,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,  48,  49,   0,
     50,   0,  51,  52,   0,   0,   0,   0,  53,  54,  55,  56,  57,  58,   0,  59,
      0,  60,   0,   0,   0,   0,  61,  62,   0,   0,   0,   0,   0,   0,   0,  63,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     65,  66,   0,   0,  67,  68,  69,  70,   0,  71,  72,   0,   1,  73,  74,  75,
      0,  76,  77,  78,   0,  79,  80,  81,   0,   0,   0,   0,   0,   0,   0,  82,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     83,  84,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     85,  86,  87,  88,  57,  89,  90,   0,  91,  92,  93,  94,  57,  95,  96,   0,
      0,  97,   0,   0,   0,   0,  98,  99,  23, 100, 101, 102,   0,   0,   0,   0,
      0, 103, 104,   0,   0, 105, 106,   0,   0,   0,   0,   0,   0, 107, 108,   0,
      0, 109, 110,   0,   0, 111,   0,   0, 112, 113,   0,   0,   0,   0,   0,   0,
      0, 114,   0,   0,   0,   0,   0,   0,   0, 115, 116,   0,   0,   0, 117, 118,
    119, 120, 121,   0, 122,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 123,   0,   0, 124, 125,   0,   0,   0, 126, 127,   0, 128,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 129,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 indic_positional_category_table_4[544] = {
      0,   1,   2,   3,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   6,   7,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

UINT32 lookup_indic_positional_category(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = indic_positional_category_table_4[block];
    offset = (codepoint >> 5) & 0x3F;
    block = indic_positional_category_table_3[(block << 6) + offset];
    offset = (codepoint >> 2) & 0x7;
    block = indic_positional_category_table_2[(block << 3) + offset];
    offset = codepoint & 0x3;
    value = indic_positional_category_table_1[(block << 2) + offset];

    return value;
}

/* The tables and function for Indic_Syllabic_Category. */

static UINT8 indic_syllabic_category_table_1[304] = {
      0,   0,   0,  12,  24,  24,  12,   0,  28,  28,   2,   2,   2,  32,  35,  35,
     35,   5,   5,   5,  34,  34,  23,   1,  34,  31,   0,   4,   4,   0,   0,  34,
     12,   2,   0,  35,  35,   0,   5,   0,  34,   0,   6,   0,   0,   5,   2,   0,
     28,   0,   0,   2,  23,   0,   2,  18,  12,  12,   0,  11,   4,   4,   4,  23,
     23,  23,   2,  21,   2,  35,   0,   6,   0,  17,  17,   0,   5,  26,  26,   1,
     13,   0,   6,   6,   6,  34,  31,   0,  26,   0,  30,  30,  10,   2,  26,  34,
     11,  11,   0,  28,   0,  23,   8,   8,   8,  15,  15,  15,   0,  15,  15,   0,
      5,  35,  35,  34,   2,  30,  32,  19,  26,  11,  11,   5,  34,  30,  30,   5,
      5,  34,  34,   5,  11,  34,   5,  30,  26,  26,  34,  27,  27,  28,  16,  10,
     28,  26,  19,  28,   1,  28,  12,   5,  34,  15,   7,   7,   2,   7,  34,  28,
      5,  33,  33,  33,  29,  29,  29,   0,  34,   7,  24,   0,   5,  11,  11,  15,
      9,  15,  19,  34,  26,  28,  32,  35,  23,  34,  31,   5,   5,  15,  26,  19,
      1,   5,  28,  23,   4,  17,  17,   4,  22,  20,  34,  35,   5,   2,  33,  15,
     15,   5,  31,   2,  33,  30,   7,  26,   7,  32,   5,  23,  34,  11,  11,   0,
     29,  30,   0,  32,  19,   0,   5,   7,   7,  34,  30,  26,   0,  19,  32,  17,
     17,  35,   3,   3,  26,  35,   0,  25,  34,  19,  33,   5,  31,   1,  14,  14,
     34,   2,   0,  24,   2,  31,  23,  18,  34,  23,  28,   2,  17,  17,  31,  23,
      1,   0,  32,  31,  32,  34,  34,  26,   2,  26,  19,  14,  11,  13,  11,  23,
      5,  28,  26,   2,  14,  11,  11,  12,  18,  19,   0,   1,  13,  11,  12,  34
};

static UINT8 indic_syllabic_category_table_2[2024] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
      2,   2,   2,   2,   2,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,
      0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,
      5,   6,   7,   7,   7,   7,   7,   7,   7,   7,   8,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,  11,  10,
     10,  10,  10,  10,  10,  10,  12,  10,  13,  14,  15,  10,   9,   9,   9,   9,
      7,  10,   0,   2,   2,   2,   2,   2,   0,   7,   7,   7,   9,   9,   9,   9,
     16,   6,  17,   7,   7,   7,  18,  17,  18,  17,   8,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  19,   9,   9,   9,  19,  19,   0,   9,   9,   0,  11,  10,
     10,  10,  20,  15,  20,  15,  12,  21,   0,   0,   0,  15,   0,   0,   9,  22,
      9,   0,   0,   0,   0,   0,  23,  24,  25,   6,  17,   7,   7,  18,   0,  17,
     19,   9,  22,  19,   9,   0,  26,  10,  10,  20,   0,  15,  20,  15,  12,   0,
     13,   0,   0,   0,  22,   9,  19,  19,   0,   0,   0,   2,   2,   2,   2,   2,
     27,  28,  29,   0,   0,   0,   0,   0,  25,   6,  17,   7,   7,   7,   7,  17,
      7,  17,   8,   9,   9,   9,   9,   9,  19,   9,  22,   9,   9,   0,  11,  10,
     10,  10,  10,  15,  10,  15,  12,   0,   0,   0,   0,   0,  22,  30,  31,  32,
     25,   6,  17,   7,   7,   7,  18,  17,  10,  10,  20,  15,  20,  15,  12,   0,
      0,   0,  15,  10,   0,   0,   9,  22,  22,   0,   0,   0,   0,   0,   0,   0,
      0,  33,  17,   7,   7,  18,   0,   7,  18,   7,   8,   0,  22,  19,  19,   9,
      0,  22,  19,   0,   9,  19,   0,   9,   9,   9,   9,   9,   9,   0,   0,  10,
     10,  20,   0,  10,  20,  10,  12,   0,   0,   0,   0,  15,   0,   0,   0,   0,
      5,   6,  34,   7,   7,   7,  18,   7,  18,   7,   8,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   0,  11,  10,  10,  10,  20,  10,  20,  10,  12,   0,
      0,   0,  15,  20,   9,  19,  35,   0,   5,   6,  17,   7,   7,   7,  18,   7,
      9,   9,  22,   9,   9,   0,  11,  10,   0,   0,  15,  20,   0,   0,  35,  19,
     36,  37,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,  38,  39,  10,
     10,  10,  20,  10,  20,  10,  12,  40,   0,   0,  41,  42,   0,   0,   0,  17,
      0,   0,   0,   0,   0,  41,  41,  41,  25,   6,  17,   7,   7,   7,   7,   7,
      7,   7,   7,  18,   0,   9,   9,   9,   9,  22,   9,   9,   9,   9,  22,   0,
      9,   9,   9,  19,   0,  43,   0,  15,  10,  10,  20,  20,  10,  10,  10,  10,
      0,  10,   0,   0,   0,   0,   0,   0,  22,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,  19,  10,  10,  10,  10,  10,  44,   0,   0,
     10,  10,  10,  15,  45,  45,  46,  44,  22,  19,  19,   9,   9,  19,   9,   9,
      9,   9,  22,  22,   9,   9,   9,  19,  10,  10,  10,  10,  10,  47,  48,   0,
     10,  10,  20,   0,  45,  45,  25,   0,   2,   2,   2,   2,   2,   0,   9,   9,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  49,  49,  50,   0,   0,   0,
      9,   9,   9,   9,  22,   9,   9,   9,   9,   9,   9,   9,   9,   9,  19,   0,
     15,  10,  10,  10,  10,  10,  10,   6,  10,   5,  39,   0,  51,  51,  52,  53,
     53,  53,  53,  53,  54,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,
     53,  53,  53,  53,  53,  53,  55,   0,   0,   0,   0,  24,   0,   0,   0,   0,
     56,   7,   7,   7,   7,  57,  10,  10,  10,  10,  10,  58,  59,  60,  48,  61,
      2,   2,   2,   2,   2,   1,   0,   3,   9,   7,   7,  10,  10,   9,   9,  48,
     61,  62,  63,  64,  62,  45,  45,   9,  64,  10,  65,   9,   9,   9,   9,   9,
      9,  66,  10,  62,  45,  45,  45,  67,   2,   2,   2,   2,   2,  45,  10,   0,
      7,   8,   9,   9,   9,   9,   9,   9,   9,  10,  68,   0,   0,   0,   0,  22,
      9,  10,  44,   0,   0,   0,   0,   0,   9,  10,   0,   0,   0,   0,   0,   0,
      7,   8,   9,   9,   9,   9,  19,   9,  19,  10,   0,   0,   0,   0,   0,   0,
      9,  56,   7,   7,   7,   7,   7,   7,   7,   7,   0,  10,  10,  10,  10,  10,
     10,  10,  10,   6,  69,  70,  71,   4,  72,  73,   0,   0,   0,   0,  74,   0,
     75,   9,   9,   9,   9,   9,   9,   9,  10,  10,  10,  10,  76,  53,   0,   0,
     77,  78,  77,  77,  77,  79,   0,   0,   9,  80,  81,  81,  81,  81,  81,   0,
     82,  82,  83,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   0,   0,
     10,  10,  10,  10,  10,  10,  10,  10,  84,  77,  77,  77,  45,   0,   0,   0,
      2,   2,   2,   2,   2,  85,   0,   0,   9,   9,   9,  64,  10,  10,   0,   0,
      9,   9,   9,   9,   9,   9,  56,   7,   7,   8,  86,  87,  77,  88,  53,  55,
     89,  10,  10,  10,  10,  10,  10,  10,  10,  10,  58,  45,  45,  90,  24,  49,
      5,  78,  91,   7,   7,   7,   7,   7,   9,   9,  92,  10,  10,  10,  10,  10,
     10,  10,  93,   9,   9,   9,  19,   0,  78,  91,   7,   7,   7,   9,   9,   9,
     94,  53,  10,  10,  10,  95,  53,   9,   2,   2,   2,   2,   2,  96,   9,  77,
      9,   9,   7,  92,  10,  10,  10,  10,  77,  68,   0,   0,   0,   0,   0,   0,
      9,   9,  53,  10,  10,  10,  84,  77,  77,  77,   5,  97,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   0,  22,   9,  30,  14,  30,  30,  30,  30,  30,  30,
     30,   0,   0,   0,   0,   0,   0,   0,   0,  41,  98,  99,  30,   3,   0,   0,
      0,   0,   0,   0,   0,  49,   0,   0,   0,   0,   0,   0,   0,   0, 100,   0,
     28,  28,   3,   0,   0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,
      0,   4,  24,   0,   0,   0,   0,   0,  14,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3,   0,   7, 101,   7,  93,   9, 102,   9,   9,
      9,  64,  10,  10,   0,   0,  44,   0,   9,   9,   9,   9,   9,   9,   9,  81,
     81,   9,   9, 103, 104,   9,   9,   9,  94, 102,   0,   0,   0,   0,   0,   0,
      6,   7,   7,   7,   7,   7,   7,   7,   7,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  66,  10,  10,  10,  10,  10,  10,  10, 105,   0,   0,   0,   0,   0,
     30,  30,  30,  30,  30,  30,  30,  30,  30,   5,   0,   0,   0,   0,   0,  57,
      2,   2,   2,   2,   2,   9,   9,   9,   9,  81,  81,  81,  81, 106,  45,   0,
      9,   9,   9,  64,  10,  10,  10,  84,  77, 107,   0,   0,   0,   0,   0,   0,
      5, 108,   7,   7,   8,   9,   7,   8,   9, 109,  10,  10,  10,  10, 110,  48,
     43,   0,   0,   0,   0,   0,   0,   0,   9,   9,  64,  22,   9,   9,   9,   9,
      2,   2,   2,   2,   2,   9,   9,  19,   7,   7,   7,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  64,  10,  10,  10,  10, 110,  48, 111,   0,   0,   0,   0,
     77,  77,  77,  77,  77,  77,  77,   0,  22,   9,  28,   3,   0,  67,  45,   9,
     10,  10,  10,  10,  10,  10,  10,  62, 112,  83,   0,   0,   0,   0,   0,   0,
      7,   9,   9,   9,   9,  64,  10,  10,   0,   0, 113, 114,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   7,  56,   9,   9,   9,   9, 115,  77,  77,
     77, 116,  10,  10,  10,  20, 117,   0,  64,  10,  15,  20,   0,   0,  10,   6,
      9,   9,  22,   9,  22,   9,   9,   9,   9,   9,   9,   0,  32,  26,   0, 118,
      2,   2,   2,   2,  85,   0,   0,   0,   5, 119, 120,   7,   7,   7,   7,   7,
      9,   9,   9,   9,  10,  10,  10,  10,  10,  10,  10,  43,   0,   0,   0,   0,
      0, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121,   2,   2,   2,   2,   2,
    122,  57,  65,   0,   0,   0,   0, 123,   5,  91,   7,   7,   7,   7,   8,   9,
     10,  10,  10,  10,  12,  26,   0,   0,   0,  20,   0,   0,   0,   0,   0,   0,
      5,  91,   7,   8,   9,   9,   9,   9,   9,   9,   9,  64,  10,  10,  10,  10,
     10, 124,  44,   2,   2,   2,   2,   2,   0,   0,  64,  65,   0,   0,   0,   0,
     81,  81, 125,   9,   9,   9,   9,   9,   9, 109,   0,   0,   0,   0,   0,   0,
      5,  91,   7,   7,   7,   7,   7,   7,   8,   9,   9,   9,   9,   9,   9,   9,
      9,  64,  10,  10,  10,  10,  10,  10, 126, 127,   0,   0,  49,  92,  20, 128,
    129,   2,   2,   2,   2,   2,   2,   2,   2,   2,  85,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   9,   9,   9,   9,   9,  22,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,  10,  10,  10,  10, 130, 131,   0,   0,   0,  14,
      7,   7,   9,  19,  19,   9,   9,  22,   9,   9,   9,   9,   9,   9,   9,  22,
      9,   9,   9,   9,  19,   0,   0,   0,   7,   7,   7,   7,   7,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9, 102,  10,  10,  10,  10, 132,  44,   0,   0,
      5,   6,  17,   7,   7,   7,  18,  17,  19,   9,  22,   9,   9,  50,  11,  10,
      0,   0,   0,  15,   0,   0,   0,   5,   7,  10,   0,  30,  30,  30,  14,   0,
     30,  30,  14,   0,   0,   0,   0,   0,   7,   7,   7,   7,   7,   7,   7,   9,
      9,   9,  64,  10,  10,  10,  10,  10,  10, 105,   6,  11,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   0,   0, 133, 134,   0,   0,   0,   0,   0,   0,   0,
     17,   7,   7,   7,   7,   7,   7,   8,  10,  10,  10,  10,  10,  10,  10, 128,
      6, 135, 136,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,  64,
     10,  10,  10,   0,  10,  10,   5, 137,  26,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,  10,   0,  10,  10,  10,  10,  10,  10, 128, 137,
     20,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9, 102, 138,  10,
     10,  10,  10, 135,  19,   0,   0,   0,   9,   9,   9,   9,   9,  19,  29,  48,
     10,  10,  10,  10,  10, 139,   0,   0,   2,   2,   2,   2,   2,   2,   0,   0,
      9,   9,   9,  19,   0,   0,   0,   0,  10,  10,  10, 128, 137,  26,   0,   0,
      7,   7,   7,  18,  17,   0,   9,   9,   9,   9,  22,  19,   9,   9,   9,   9,
     10,  10,  10,  15,  20,  25, 140, 141, 142, 143,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   0,   7,   7,   9,  64,  10,  10,  10,   0,  10,  10,   6,
    126,   0,  20,   0,   0,   0,   0,   0,  57,  10,  10,  10,  10,  65,   9,   9,
      9, 144, 145,   5,   6, 146,  48, 147,   0,   0,   1, 118,   0,   0,   0,   0,
     57,  10,  10,  10,  10,  10,   9,   9,   9,   9, 127, 127, 127,  77,  77,  77,
     77,  77,  77,   6, 148,   0, 149,   0,   7,   7,   7,   7,  18,   7,   7,   9,
     10,  10,  10,  20,  10,  10,   5, 137, 136,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,  85,   0,   0,   9,   9,   9,   9,   9,   9,   9,
      0,  53,  53,  53,  53,  53,  53,  53,  10,  10, 128,  23,   0,   0,   0,   0,
      7,   7,   7,  18,   7,  17,   9,   9,  64,  10,  10,  20,   0,  20,  10,  15,
      6,  92,  95, 150,   0,   0,   0,   0,   7,   7,   7,  17,  18,   7,   9,   9,
      9,   9,   9,   9,   9,  10,  10,  20,  10,  15, 128,  59,   0,   0,   0,   0,
      9, 151,  10,  20,   0,   0,   0,   0
};

static UINT8 indic_syllabic_category_table_3[1280] = {
      0,   0,   1,   2,   0,   0,   0,   0,   0,   0,   3,   4,   0,   5,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   7,   8,   9,  10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  12,  20,
     21,  15,  16,  22,  23,  24,  25,  26,  27,  28,  16,  29,  30,   0,  12,  31,
     32,  15,  16,  29,  33,  34,  12,  35,  36,  37,  38,  39,  40,  41,  25,   0,
     42,  43,  16,  44,  45,  46,  12,   0,  47,  43,  16,  48,  45,  49,  12,  50,
     42,  43,   8,  51,  52,  53,  12,  54,  55,  56,   8,  57,  58,  59,  25,  60,
     61,   8,  62,  63,  64,   2,   0,   0,  65,   8,  66,  67,  68,  69,   0,   0,
      0,   0,  70,  71,  72,   8,  73,  74,  75,  76,  77,  78,  79,   0,   0,   0,
      8,   8,  80,  81,  82,  83,  84,  85,  86,  87,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     88,  89,  88,  90,  88,  91,  92,  93,   8,   8,  94,  95,  96,  97,   2,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     98,  62,  99, 100,  25,   8, 101, 102,   8,   8, 103, 104, 105, 106,   0,   0,
      8, 107,   8,   8, 108, 109, 110, 111,   2,   2,   0,   0,   0,   0,   0,   0,
    112,  88,   8, 113, 114,   2,   0,   0, 115,   8, 116, 117,   8,   8, 118, 119,
      8,   8, 120, 121, 122,   0,   0,   0,   0,   0,   0,   0,   0, 123, 124, 125,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 126,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    127, 128,   0,   0,   0,   0,   0, 129, 130,   0,   0,   0,   0,   0,   0, 131,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 132,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    133,   8, 134,   0,   8, 135, 136, 137, 138, 139,   8, 140, 141,   2, 142, 143,
    144,   8, 145,   8, 146, 147,   0,   0, 148,   8,   8, 149, 150,   2, 151, 152,
    153,   8, 154, 155, 156,   2,   8, 157,   8,   8,   8, 158, 159,   0, 160, 161,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 162, 163, 164,   2,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    165, 166,   8, 167, 168,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    169,  88,   8, 170, 171, 172, 173, 174, 175,   8,   8, 176, 177,   0,   0,   0,
    178,   8, 179, 180, 181, 182,   8, 183, 184, 185,   8, 186, 187,   2, 188, 189,
    190, 191, 192, 193,   0,   0,   0,   0, 194, 195, 196, 197,   8, 198, 199,   2,
    200,  15,  16, 201,  33, 202, 203, 204,   0,   0,   0,   0,   0,   0,   0,   0,
    205,   8,   8, 206, 207, 208, 209,   0, 210,   8,   8, 211, 212,   2,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 205,   8, 213, 214, 215, 216,   0,   0,
    205,   8,   8, 217, 218,   2,   0,   0, 197,   8, 219, 220,   2,   0,   0,   0,
      8, 221, 222, 223, 224,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    197,   8, 192, 225,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    226, 227,   8, 228, 229,   2,   0,   0,   0,   0, 230,   8,   8, 231, 232,   0,
    233,   8,   8, 234, 235, 236,   8,   8, 237, 238,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    239,   8, 213, 240, 241,  70, 242, 243,   8, 244,  76, 245,   0,   0,   0,   0,
    246,   8,   8, 247, 248,   2, 249,   8, 250, 251,   2,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 252,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 indic_syllabic_category_table_4[544] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   6,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   7,   8,   9,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5
};

UINT32 lookup_indic_syllabic_category(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = indic_syllabic_category_table_4[block];
    offset = (codepoint >> 4) & 0x7F;
    block = indic_syllabic_category_table_3[(block << 7) + offset];
    offset = (codepoint >> 1) & 0x7;
    block = indic_syllabic_category_table_2[(block << 3) + offset];
    offset = codepoint & 0x1;
    value = indic_syllabic_category_table_1[(block << 1) + offset];

    return value;
}

/* The tables and function for Join_Control. */

static UINT8 join_control_table_1[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  48,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 join_control_table_2[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 join_control_table_3[32] = {
      0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 join_control_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_join_control(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = join_control_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = join_control_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = join_control_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = join_control_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Joining_Group. */

static UINT8 joining_group_table_1[512] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     97,   0,   6,   6,  96,   6,  97,   6,   7,  92,   7,   7,  19,  19,  19,  10,
     10,  79,  79,  84,  84,  82,  82,  90,  90,   4,   4,  17,  17,  13,  13,  13,
      0,  15,  77,  27,  31,  71,  73,  24,  96,  97,  97,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  77,
      0,   6,   6,   6,   0,   6,  96,  96,  97,   7,   7,   7,   7,   7,   7,   7,
      7,  19,  19,  19,  19,  19,  19,  19,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  79,  79,  79,  79,  79,  79,  79,  79,  79,  84,  84,  84,  82,  82,  90,
      4,  15,  15,  15,  15,  15,  15,  77,  77,  17,  88,  17,  27,  27,  27,  17,
     17,  17,  17,  17,  17,  31,  31,  31,  31,  73,  73,  73,  73,  75,  30,  19,
     92,  25,  25,  20,  96,  96,  96,  96,  96,  96,  96,  96,  13,  99,  13,  96,
     97,  97,  98,  98,   0,  92,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  79,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  84,  82,   4,   0,   0,  30,
      5,   0,   8,  18,  18,  11,  11,  23,  89, 102,  26,  93,  93, 100, 101,  28,
     32,  72,  74,  85,  16,  12,  76,  80,  83,  78,  11,  86,  91,   8,  18,  11,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 103,  29,  14,
      7,   7,   7,   7,   7,   7,   7,  19,  19,  10,  10,  79,  84,   4,   4,   4,
     15,  15,  17,  17,  17,  71,  71,  73,  73,  73,  31,  79,  79,  84,  19,  19,
     84,  79,  19,   6,   6,  13,  13,  97,  96,  96,   9,   9,  19,  84,  84,  27,
     37,  34,  40,  43,  38,  39,  33,  41,  35,  36,  42,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   0,   0,   0,  94,   0,   0,  73,  19,  90,  90,  17,  95,   0,
      7,   7,  19,  90,  15,  77,  31,  71,  97,  97,  79,  96,  81,   0,  10,  82,
     17,  87,  79,   4,  27,  77,   7,   7,   7,  79,  97,   1,   3,   2,   7,   7,
      7,  19,  17,   4,   3,  19,  19,  31,  17,   0,   0,   0,   0,   0,   0,   0,
     44,  46,  46,  50,  50,  47,   0,  68,   0,  70,  70,   0,   0,  51,  65,  69,
     53,  53,  53,  54,  48,  66,  55,  56,  62,  45,  45,  58,  58,  61,  59,  59,
     59,  60,   0,   0,  63,   0,   0,   0,   0,   0,   0,  57,  49,  64,  67,  52,
      0,   0,  22,   0,   0,   0,   0,   0,   0,  22,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  21,   0,   0,  22,   0,  21,   0,
     21,   0,   0,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 joining_group_table_2[160] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   1,   2,   3,   0,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,
      0,  14,  15,   0,  16,  17,  18,  19,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  20,  21,  22,   0,  23,  24,  25,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  27,  28,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     29,  30,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 joining_group_table_3[96] = {
      0,   0,   0,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   3,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 joining_group_table_4[68] = {
      0,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_joining_group(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = joining_group_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = joining_group_table_3[(block << 5) + offset];
    offset = (codepoint >> 4) & 0x1F;
    block = joining_group_table_2[(block << 5) + offset];
    offset = codepoint & 0xF;
    value = joining_group_table_1[(block << 4) + offset];

    return value;
}

/* The tables and function for Joining_Type. */

static UINT8 joining_type_table_1[1224] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,
      5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   0,   5,   5,   5,   5,   5,
      5,   5,   0,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   0,   5,   0,   5,   5,   0,   5,   5,   0,   5,
      5,   5,   5,   0,   5,   0,   0,   0,   1,   0,   4,   4,   4,   4,   1,   4,
      1,   4,   1,   1,   1,   1,   1,   4,   4,   4,   4,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,
      4,   1,   1,   5,   5,   5,   5,   5,   0,   0,   0,   0,   0,   0,   1,   1,
      5,   4,   4,   4,   0,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   1,   1,   1,   1,   1,   1,   4,   1,   1,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   1,   4,   1,   4,   1,   1,   4,   4,   0,   4,   5,   5,
      5,   5,   5,   5,   5,   0,   0,   5,   5,   0,   5,   5,   5,   5,   4,   4,
      0,   0,   1,   1,   1,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   5,
      4,   5,   1,   1,   1,   4,   4,   4,   4,   4,   1,   1,   1,   1,   4,   1,
      4,   1,   4,   1,   4,   1,   1,   4,   5,   5,   5,   0,   0,   4,   1,   1,
      1,   4,   4,   4,   1,   1,   1,   1,   1,   1,   1,   4,   4,   1,   1,   1,
      1,   4,   1,   4,   4,   1,   1,   1,   0,   0,   0,   0,   0,   0,   5,   5,
      5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   0,   0,
      0,   0,   2,   0,   0,   5,   0,   0,   5,   5,   0,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   0,   5,   5,   5,   0,   5,   5,   5,   5,   5,   0,   0,
      4,   1,   1,   1,   1,   1,   4,   4,   1,   4,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   4,   1,   4,   4,   4,   5,   5,   5,   0,   0,   0,   0,
      1,   0,   1,   1,   1,   1,   0,   4,   1,   4,   4,   0,   0,   0,   0,   0,
      4,   4,   4,   2,   2,   2,   1,   0,   0,   1,   1,   1,   1,   1,   4,   0,
      1,   1,   4,   4,   4,   0,   4,   1,   1,   4,   4,   1,   1,   1,   1,   1,
      1,   0,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   0,   0,   0,
      0,   0,   5,   0,   5,   0,   0,   0,   5,   0,   0,   0,   0,   5,   0,   0,
      0,   0,   5,   5,   0,   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   5,   0,   0,   0,   0,   5,   5,   5,   5,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   5,   0,   0,   5,   5,   0,   0,   0,   0,   0,
      0,   5,   5,   0,   0,   0,   0,   5,   5,   0,   0,   5,   5,   5,   0,   0,
      5,   5,   0,   0,   0,   5,   0,   0,   0,   5,   5,   5,   5,   5,   0,   5,
      0,   0,   5,   5,   5,   5,   5,   5,   0,   0,   0,   0,   5,   0,   0,   5,
      0,   0,   0,   0,   0,   5,   5,   0,   0,   0,   5,   0,   0,   0,   0,   0,
      5,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,   5,   0,   5,   5,
      5,   0,   0,   0,   0,   0,   5,   5,   5,   0,   5,   5,   5,   5,   0,   0,
      0,   0,   0,   0,   5,   5,   0,   0,   0,   0,   0,   5,   5,   0,   0,   0,
      0,   0,   5,   5,   5,   0,   5,   0,   0,   5,   0,   0,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   0,   5,   5,   5,   5,   5,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   5,   0,   5,
      5,   5,   5,   5,   5,   0,   5,   5,   0,   0,   0,   0,   0,   5,   5,   5,
      5,   0,   5,   5,   5,   5,   5,   5,   0,   5,   5,   0,   0,   5,   5,   0,
      5,   5,   0,   0,   0,   0,   5,   5,   0,   0,   5,   0,   0,   5,   5,   0,
      0,   0,   5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   5,   5,   0,   5,
      0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   2,   5,   5,   5,   0,   5,
      1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   5,   1,
      1,   5,   1,   0,   0,   0,   0,   0,   5,   5,   5,   0,   0,   0,   0,   5,
      0,   5,   5,   5,   0,   0,   0,   0,   5,   0,   0,   5,   0,   0,   0,   0,
      5,   0,   5,   0,   0,   5,   5,   5,   0,   0,   5,   5,   5,   5,   0,   0,
      5,   5,   0,   5,   5,   5,   0,   0,   5,   5,   0,   0,   0,   5,   0,   5,
      0,   0,   0,   0,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   5,   5,
      5,   5,   5,   0,   5,   5,   5,   5,   0,   0,   0,   5,   0,   2,   5,   5,
      0,   0,   5,   5,   5,   5,   5,   0,   0,   0,   5,   0,   0,   0,   5,   0,
      0,   0,   0,   5,   0,   0,   0,   0,   1,   1,   3,   0,   0,   0,   0,   0,
      0,   0,   0,   5,   0,   0,   5,   5,   5,   5,   0,   0,   5,   5,   0,   0,
      0,   5,   5,   5,   5,   5,   5,   0,   5,   0,   5,   5,   5,   0,   0,   5,
      0,   5,   5,   5,   0,   5,   5,   0,   1,   1,   1,   1,   1,   4,   0,   4,
      0,   4,   4,   0,   0,   3,   4,   4,   4,   4,   4,   1,   1,   1,   1,   3,
      1,   1,   1,   1,   1,   4,   1,   1,   1,   4,   0,   0,   4,   5,   5,   0,
      0,   0,   0,   1,   1,   1,   1,   4,   1,   4,   1,   4,   4,   4,   1,   1,
      1,   4,   1,   1,   4,   1,   4,   4,   1,   4,   0,   0,   0,   0,   0,   0,
      0,   4,   4,   4,   4,   1,   1,   0,   3,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   4,   1,   5,   5,   5,   5,   1,   1,   1,   4,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   0,   5,   5,   5,   1,   1,   1,   4,   0,   0,   0,
      1,   1,   1,   1,   4,   4,   1,   1,   1,   1,   5,   5,   5,   5,   0,   0,
      1,   0,   1,   1,   4,   4,   4,   0,   1,   4,   4,   1,   1,   4,   1,   1,
      0,   1,   4,   4,   1,   0,   0,   0,   0,   4,   1,   3,   0,   0,   0,   0,
      5,   0,   0,   5,   5,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,   0,
      0,   5,   5,   5,   5,   0,   0,   5,   5,   5,   0,   0,   5,   0,   5,   5,
      5,   0,   5,   0,   0,   0,   0,   5,   5,   0,   5,   5,   0,   0,   0,   0,
      5,   5,   5,   0,   0,   5,   0,   5,   0,   0,   0,   5,   0,   5,   0,   0,
      0,   0,   5,   5,   5,   5,   0,   5,   0,   0,   0,   5,   5,   0,   5,   0,
      5,   0,   0,   5,   5,   5,   5,   0,   5,   0,   5,   5,   0,   5,   5,   0,
      0,   0,   5,   0,   5,   5,   0,   5,   5,   5,   5,   0,   0,   5,   5,   5,
      5,   0,   0,   5,   5,   5,   5,   5,   5,   5,   0,   5,   5,   0,   5,   5,
      1,   1,   1,   1,   5,   5,   5,   5
};

static UINT8 joining_type_table_2[1760] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0,   0,
      3,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   5,   2,   2,   2,   2,   6,   7,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   2,   8,   9,  10,  11,  12,  13,  14,   2,   2,   0,  15,  16,  12,
     12,  17,  17,  18,  12,  12,  12,  12,  19,  20,  21,  22,  22,  23,   0,  24,
      0,  25,  26,  27,  12,  28,   2,   2,   2,  29,  12,  30,  12,  31,  32,  18,
      0,   0,   0,   0,  33,   2,  34,   0,   0,  35,  12,  12,  12,  36,  37,  38,
      0,   0,  33,  39,  40,  41,   0,   0,  42,  43,  44,  45,  46,  47,  17,  17,
     48,  49,   0,   2,  12,  50,  51,  43,  12,  52,   2,   2,  39,   2,   2,   2,
     53,   0,   0,   0,   0,   0,   0,  54,   5,  55,   5,   0,  56,   0,   0,   0,
     57,   0,   0,   0,   0,   0,   0,  58,  59,   1,   0,   0,  56,   0,   0,  60,
     61,   0,   0,   0,   0,   0,   0,  58,  62,  63,  57,   0,   0,   0,  64,   0,
     61,   0,   0,   0,   0,   0,   0,  58,  65,  55,   0,   0,  56,   0,   0,  66,
     57,   0,   0,   0,   0,   0,   0,  67,  59,   1,  68,   0,  56,   0,   0,   0,
     69,   0,   0,   0,   0,   0,   0,   0,  34,   1,   0,   0,   0,   0,   0,   0,
     70,   0,   0,   0,   0,   0,   0,  71,  72,  73,  68,   0,  56,   0,   0,   0,
     57,   0,   0,   0,   0,   0,   0,  67,  60,  74,   0,   0,  56,   0,   0,   0,
      4,   0,   0,   0,   0,   0,   0,  75,  59,   1,   0,   0,  56,   0,   0,   0,
     57,   0,   0,   0,   0,   0,   0,   0,   0,  69,  76,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  77,  53,  25,  78,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  77,  79,   0,  80,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   4,   0,   0,  81,  57,   0,   0,   0,   0,   0,   0,   5,  78,
     82,  83,   2,   5,   2,   2,   2,  79,  60,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  83,  84,  85,   0,   0,   0,  86,  34,   0,  59,   0,
     87,   1,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  83,   0,   0,   0,   0,
      0,   0,  88,   0,   0,   0,  56,   0,   0,   0,  56,   0,   0,   0,  56,   0,
      0,   0,   0,   0,   0,   0,  89,  80,  60,   5,  37,   1,   0,   0,   0,   0,
     90,  91,   0,   0,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  92,
     93,  12,  12,  12,  12,  94,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  95,  34,  69,  96,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  25,  97,   0,   0,   0,   0,   0,   0,  60,  78,  98,  79,   3,  22,
      0,   0,   0,   0,   0,   0,   2,   2,   2,  78,   0,   0,   0,   0,   0,   0,
     37,   0,   0,   0,   0,   0,  71,   8,  69,   0,   0,   0,   0,   3,  37,   0,
      4,   0,   0,   0,  99, 100,   0,   0,   0,   0,   0,   0,  60, 101,   4,   0,
      0,   0,   0,   0,   0, 102, 103,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 104,   2,  84,  55,  58,   4,
      0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,
      0, 105,   0,   0,   0, 106,   0,   0,   0,   0,   0,   0,  79,  66,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,  34,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,   4,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,
      0,   0,   0,   0,   0,  99,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 104,  80,
      0,   0,   0,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,
    107, 108,   0,   0,  68,  58,   0,   0,  12,  12,  12,  12,  12,  12, 109,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  74,   0,   0,   0,   2,   2,   4,  25,
      0,   0,   0,   0,  33,  80,   0,   0,  25,   2,   4,   0,   0,   0,   0,   0,
     53,   0,   0,   0,   0,   0, 110, 111,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0, 112,  85,   0, 108,  58,   0,   0,   0,   0,   0,  58,
      0,   0,   0,   0,   0,   0, 113,  72,  57,   0,   0,   0,   0,  74,  60,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  55,   0,   0,
      0,   0,   0,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   0,   0,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  96,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,  53,
    114, 102,   0,   0,   0,   0,   0,  95,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 115, 116, 117, 118, 119, 120,   0,   0,
    121, 122, 123,   0,   0, 124,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    125,  12,  12,  12, 126,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 127,  12, 128,   2, 129,   0,   0,   0, 130,  12,
    131,   0,   0,   0,   0,   0, 132, 133, 134, 135,   0,   0,   0,   0,   0,   0,
     57,   0,   0,   0,   0,   0,   0,   2,  78,   0,   0,   0,   0,   0, 136,  25,
      4,   0,   0,   0,   0,   0, 137,  61,  69,   0,   0,   0,   0,   0,   0,   0,
     53,   0,   0,   0,  25,  40,  79,   0,   0,   0,   0,   0,   0,   0, 108,   0,
      4,   0,   0,   0,   0,   0,  33,  78,   0, 138,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  25, 139,  60,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,   3,  53,   0,   0,
      4,   0,   0,   0,   0,   0,   0,  75,  34,   0,   0,   0,  33,  79,  79,   0,
      0,   0,   0,   0,   0,   0,   0,   2,  76,   0,   0,  60,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3, 140, 141,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  99,  89,  34,   0,   0,  74,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3, 142,  34,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 143,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  83, 144,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  25,   2,  61,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 145, 108,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 102,  56,  34,   0,   0,   0,
      5,  53,   0,   0,   0,   0,   3, 146,  25,   0, 112,  96,   0,   0,   0,   0,
      0,  66,  78,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  78,   6,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  66,   2,   2,  66, 147,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 112, 148,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 101,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  75,   0,
      0,   0,   0,   0,   0,   0,   2,  34,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  79,   0,
      0,   0,   0,   0,   0,   0,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  25,   0,   0,   0,   0,   0,   0,
      0,  25,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58,   0,   0,   0,
      0,   0,   0,  68,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,  80,   2,   2,  78,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,   4,   3,   2,
    149,  37,   0,   0,   0,  99,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  88,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,  78,   3,   2,   2,   2,   2,   2,  79,   1,   0,
     58,   0,   0,   3,   5,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     78,   2,   2, 150, 151,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  60,   0,   0,   0,   0,   0,   0,   0, 102,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  78,   0,   0,   0,   0,   0,
     12,  12,  12,  12,  12,  12,  12,  12, 152,  37,   0,   0,   0,   0,   0,   0,
     57,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 joining_type_table_3[512] = {
      0,   1,   0,   0,   0,   0,   2,   0,   0,   3,   0,   4,   5,   6,   7,   8,
      9,  10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,
     25,  26,   0,   0,   0,   0,  27,   0,   0,   0,   0,   0,   0,   0,  28,  29,
     30,  31,  32,   0,  33,  34,  35,  36,  37,  38,   0,  39,   0,   0,   0,   0,
     40,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  42,  43,  44,   0,   0,   0,   0,
     45,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,  48,   0,   0,
     49,  50,  51,  52,  53,  54,   0,  55,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  56,   0,   0,   0,   0,   0,  57,  43,   0,  58,
      0,   0,   0,  59,   0,  60,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  62,  63,   0,  64,   0,   0,  65,   0,   0,  66,  67,  68,
     69,  70,  71,  72,  73,  74,  75,   0,  76,  77,   0,  78,  79,  80,  81,   0,
     82,   0,  83,  84,  85,  86,   0,   0,  87,  88,  89,  90,   0,  91,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  92,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  93,  94,   0,   0,   0,   0,   0,   0,   0,  95,  96,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  97,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  98,   0,
      0,   0,  99, 100, 101,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 102, 103,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    104,   0,  94,   0,   0, 105,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 106, 107,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    108,   0, 109,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 joining_type_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   4,   4,   4,   4,   6,
      7,   8,   4,   9,   4,   4,  10,   4,   4,   4,   4,  11,  12,  13,  14,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
     15,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
};

UINT32 lookup_joining_type(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = joining_type_table_4[block];
    offset = (codepoint >> 7) & 0x1F;
    block = joining_type_table_3[(block << 5) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = joining_type_table_2[(block << 4) + offset];
    offset = codepoint & 0x7;
    value = joining_type_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Line_Break. */

static UINT8 line_break_table_1[4432] = {
     10,  10,  10,  10,  10,  10,  10,  10,  10,   3,  28,  29,  29,   7,  10,  10,
     38,  16,  36,   1,  35,  34,   1,  36,  33,   8,   1,  35,  23,  21,  23,   6,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  23,  23,   1,   1,   1,  16,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  33,  35,   8,   1,   1,
      1,   1,   1,  33,   3,   9,   1,  10,  10,  10,  10,  10,  10,  30,  10,  10,
     17,  33,  34,  35,  35,  35,   1,   2,   2,   1,   2,  36,   1,   3,   1,   1,
     34,  35,   2,   2,   4,   1,   2,   2,   2,   2,   2,  36,   2,   2,   2,  33,
      1,   1,   1,   1,   1,   1,   1,   2,   4,   2,   2,   2,   4,   2,   1,   1,
      2,   1,   1,   1,   1,   1,   1,   1,   2,   2,   2,   2,   1,   2,   1,   4,
     10,  10,  10,  10,  10,  10,  10,  17,  10,  10,  10,  10,  17,  17,  17,  17,
     17,  17,  17,  10,  10,  10,  10,  10,   0,   0,   1,   1,   1,   1,  23,   1,
      0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   0,   1,   0,   1,   1,
      1,   1,   0,   1,   1,   1,   1,   1,   1,   1,   1,  10,  10,  10,  10,  10,
     10,  10,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   0,   1,  23,   3,   0,   0,   1,   1,  35,
      0,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,   3,  10,
      1,  10,  10,   1,  10,  10,  16,  10,   0,   0,   0,   0,   0,   0,   0,   0,
     20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,   0,   0,   0,   0,  20,
     20,  20,  20,   1,   1,   0,   0,   0,   1,  34,  34,  34,  23,  23,   1,   1,
     10,  10,  10,  16,  10,  16,  16,  16,  32,  32,  34,  32,  32,   1,   1,   1,
     10,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  16,   1,  10,  10,
     10,  10,  10,  10,  10,   1,   1,  10,  10,   1,  10,  10,  10,  10,   1,   1,
     32,  32,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   1,
      1,  10,   1,   1,   1,   1,   1,   1,  10,  10,  10,   0,   0,   1,   1,   1,
      1,   1,   1,   1,   1,   1,  10,  10,  10,   1,   0,   0,   0,   0,   0,   0,
     10,  10,  10,  10,   1,   1,   1,   1,  23,  16,   1,   0,   0,  10,  35,  35,
     10,  10,   1,  10,  10,  10,  10,  10,  10,  10,  10,  10,   1,  10,  10,  10,
      1,  10,  10,  10,  10,  10,   0,   0,   1,  10,  10,  10,   0,   0,   1,   0,
      1,   1,   1,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   0,   0,
      1,   1,  10,  10,  10,  10,  10,  10,   1,   1,  10,  10,  10,   1,  10,  10,
      1,  10,  10,  10,  10,  10,  10,  10,   1,   1,  10,  10,   3,   3,  32,  32,
      1,  10,  10,  10,   0,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   1,
      1,   0,   0,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,   1,   1,
      1,   0,   1,   0,   0,   0,   1,   1,   1,   1,   0,   0,  10,   1,  10,  10,
     10,  10,  10,  10,  10,   0,   0,  10,  10,   0,   0,  10,  10,  10,   1,   0,
      0,   0,   0,   0,   0,   0,   0,  10,   0,   0,   0,   0,   1,   1,   0,   1,
      1,   1,  10,  10,   0,   0,  32,  32,   1,   1,  34,  34,   1,   1,   1,   1,
      1,  34,   1,  35,   1,   1,  10,   0,   0,  10,  10,  10,   0,   1,   1,   1,
      1,   1,   1,   0,   0,   0,   0,   1,   1,   0,   1,   1,   0,   1,   1,   0,
      1,   1,   0,   0,  10,   0,  10,  10,  10,  10,  10,   0,   0,   0,   0,  10,
     10,   0,   0,  10,  10,  10,   0,   0,   0,  10,   0,   0,   0,   0,   0,   0,
      0,   1,   1,   1,   1,   0,   1,   0,   0,   0,   0,   0,   0,   0,  32,  32,
     10,  10,   1,   1,   1,  10,   1,   0,   1,   0,   1,   1,   0,   1,   1,   1,
     10,  10,  10,  10,  10,  10,   0,  10,  10,  10,   0,  10,  10,  10,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   1,  35,   0,   0,   0,   0,   0,   0,
      0,   1,  10,  10,  10,  10,  10,  10,   0,   0,   0,   0,   0,  10,  10,  10,
      0,   0,  10,   1,   0,   1,   1,   1,   1,   1,   1,   0,   0,   0,   1,   1,
      1,   0,   1,   1,   1,   1,   0,   0,   0,   1,   1,   0,   1,   0,   1,   1,
      0,   0,   0,   1,   1,   0,   0,   0,   1,   1,   0,   0,   0,   0,  10,  10,
     10,  10,  10,   0,   0,   0,  10,  10,  10,   0,  10,  10,  10,  10,   0,   0,
      1,   0,   0,   0,   0,   0,   0,  10,   1,  35,   1,   0,   0,   0,   0,   0,
     10,  10,  10,  10,  10,   1,   1,   1,   1,   1,   1,   1,   1,   0,   1,   1,
     10,  10,  10,  10,  10,   0,  10,  10,   0,   0,   0,   0,   0,  10,  10,   0,
      1,   1,   1,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,
      1,  10,  10,  10,   4,   1,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,
      0,   0,   0,   0,   0,   1,   1,   0,   0,   1,   1,   0,   0,   0,   0,   0,
      1,   1,   1,  10,  10,   1,  10,  10,  10,   0,  10,  10,  10,  10,   1,   1,
      0,   0,   0,   0,   1,   1,   1,  10,   1,  34,   1,   1,   1,   1,   1,   1,
      0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   1,   0,   0,
      0,   0,  10,   0,   0,   0,   0,  10,  10,  10,  10,  10,  10,   0,  10,   0,
      0,   0,  10,  10,   1,   0,   0,   0,   0,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,   0,   0,   0,   0,  35,
     11,  11,  11,  11,  11,  11,  11,   1,  32,  32,   3,   3,   0,   0,   0,   0,
      0,  11,  11,   0,  11,   0,  11,  11,  11,  11,  11,   0,  11,  11,  11,  11,
     11,  11,  11,  11,   0,  11,   0,  11,  11,  11,  11,  11,  11,  11,   0,   0,
     11,  11,  11,  11,  11,   0,  11,   0,  32,  32,   0,   0,  11,  11,  11,  11,
      1,   4,   4,   4,   4,   1,   4,   4,  17,   4,   4,   3,  17,  16,  16,  16,
     16,  16,  17,   1,  16,   1,   1,   1,   1,   1,   1,   1,   3,  10,   1,  10,
      1,  10,  33,   9,  33,   9,  10,  10,   1,   1,   1,   1,   1,   0,   0,   0,
     10,  10,  10,  10,  10,  10,  10,   3,  10,  10,  10,  10,  10,   3,  10,  10,
      1,   1,   1,   1,   1,  10,  10,  10,  10,  10,  10,  10,  10,   0,   3,   3,
      1,   1,   1,   1,   1,   1,  10,   1,   4,   4,   3,   4,   1,   1,   1,   1,
      1,  17,  17,   0,   0,   0,   0,   0,  32,  32,   3,   3,   1,   1,   1,   1,
     32,  32,  11,  11,  11,  11,  11,  11,   0,   0,   0,   0,   0,   1,   0,   0,
     25,  25,  25,  25,  25,  25,  25,  25,  27,  27,  27,  27,  27,  27,  27,  27,
     26,  26,  26,  26,  26,  26,  26,  26,   1,   1,   1,   0,   0,  10,  10,  10,
      1,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,
      3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  33,   9,   0,   0,   0,
      1,   1,   1,   3,   3,   3,   1,   1,   1,   1,  10,  10,  10,  10,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   1,   1,   1,  10,  10,  10,   3,   3,   0,
      1,   1,  10,  10,   0,   0,   0,   0,   1,   0,  10,  10,   0,   0,   0,   0,
     11,  11,  11,  11,   3,   3,  31,  11,   3,   1,   3,  35,  11,  11,   0,   0,
     32,  32,   0,   0,   0,   0,   0,   0,   1,   1,  16,  16,   3,   3,   4,   1,
     16,  16,   1,  10,  10,  10,  17,  10,   1,   1,   1,   1,   1,  10,  10,   1,
      1,  10,   1,   0,   0,   0,   0,   0,  10,  10,  10,  10,   0,   0,   0,   0,
      1,   0,   0,   0,  16,  16,  32,  32,  11,  11,  11,  11,  11,   0,   0,   0,
     11,  11,  11,  11,   0,   0,   0,   0,  11,  11,   0,   0,   0,   0,   0,   0,
     32,  32,  11,   0,   0,   0,  11,  11,   1,   1,   1,   1,   1,   1,   1,  10,
     10,  10,  10,  10,   0,   0,   1,   1,  11,  11,  11,  11,  11,  11,  11,   0,
     11,  11,  11,  11,  11,   0,   0,  10,  10,  10,  10,  10,  10,  10,  10,   0,
      1,   1,   1,   1,  10,  10,  10,  10,  32,  32,   3,   3,   1,   3,   3,   3,
      1,   1,   1,   1,   1,   3,   3,   0,  10,  10,  10,   1,   1,   1,   1,   1,
     10,  10,  10,  10,  10,  10,   1,   1,   0,   0,   0,   3,   3,   3,   3,   3,
     32,  32,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   3,
      1,   1,   1,   0,   0,   1,   1,   1,  10,  10,  10,   1,  10,  10,  10,  10,
     10,   1,   1,   1,   1,  10,   1,   1,   1,   1,   1,   1,  10,   1,   1,  10,
     10,  10,   1,   0,   0,   0,   0,   0,   0,   1,   0,   1,   0,   1,   0,   1,
      1,   1,   1,   1,   0,   0,   1,   1,   0,   0,   1,   1,   1,   0,   1,   1,
      1,   1,   1,   1,   1,   4,   1,   0,   3,   3,   3,   3,   3,   3,   3,  17,
      3,   3,   3,  42,  10,  41,  10,  10,   3,  17,   3,   3,   5,   2,   2,   1,
     36,  36,  33,  36,  36,  36,  33,  36,   2,   2,   1,   1,  24,  24,  24,   3,
     29,  29,  10,  10,  10,  10,  10,  17,  34,  34,  34,  34,  34,  34,  34,  34,
      1,  36,  36,   2,  31,  31,   1,   1,   1,   1,   1,   1,  23,  33,   9,  31,
     31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,
      3,   3,   3,   3,   1,   3,   3,   3,  40,   1,   1,   1,   1,   0,  10,  10,
      1,   1,   0,   0,   2,   1,   1,   1,   1,   1,   1,   1,   1,  33,   9,   2,
      1,   2,   2,   2,   2,   1,   1,   1,   1,   1,   1,   1,   1,  33,   9,   0,
     35,  35,  35,  35,  35,  35,  35,  34,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  34,  35,  35,  35,  35,  34,  35,  35,  34,  35,
     34,  35,  35,  35,  35,  35,  35,  35,  10,   0,   0,   0,   0,   0,   0,   0,
      1,   1,   1,  34,   1,   2,   1,   1,   1,   1,   1,   2,   1,   1,  35,   1,
      1,   2,   2,   1,   1,   1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,
      1,   1,   1,   1,   2,   2,   1,   1,   1,   1,   1,   2,   1,   1,   2,   1,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   1,   1,   1,   1,
      2,   2,   1,   1,   1,   1,   1,   1,   1,   2,   1,   1,   0,   0,   0,   0,
      1,   1,   2,   1,   2,   1,   1,   1,   2,   1,   2,   2,   1,   1,   1,   2,
      2,   1,   1,   2,   1,   1,   1,   2,   1,   2,  35,  35,   1,   2,   1,   1,
      1,   1,   2,   1,   1,   2,   2,   2,   2,   1,   1,   2,   1,   2,   1,   2,
      2,   2,   2,   2,   2,   1,   2,   1,   1,   1,   1,   1,   2,   2,   2,   2,
      2,   1,   1,   1,   2,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,
      2,   2,   1,   1,   2,   2,   2,   2,   1,   1,   2,   2,   1,   1,   2,   2,
      1,   1,   1,   1,   1,   2,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  24,  33,   9,  33,   9,   1,   1,   1,   1,
      1,   1,  22,  22,   1,   1,   1,   1,   1,  33,   9,   1,   1,   1,   1,   1,
     22,  22,  22,  22,   1,   1,   1,   1,   2,   2,   2,   2,   2,   2,   2,   1,
      2,   2,   2,   2,   2,   1,   1,   1,   1,   1,   2,   2,   2,   2,   1,   1,
      2,   2,   1,   2,   2,   2,   2,   2,   2,   2,   1,   1,   1,   1,   2,   2,
      2,   1,   1,   2,   1,   1,   2,   2,  22,  22,  22,  22,   1,   2,   2,   1,
      1,   2,   1,   1,   1,   1,   2,   2,   1,   1,   1,   1,  22,  22,   2,   2,
     22,   1,  22,  22,  22,  14,  22,  22,   1,  22,  22,  22,   1,   1,   1,   1,
      2,   1,   2,   1,   1,   1,   1,   1,   2,   2,   1,   2,   2,   2,   1,   2,
     22,   2,   2,   1,   2,   2,   1,   2,   1,   1,   1,   1,   1,   1,   1,  22,
      1,   1,   1,   1,   1,   1,   2,   2,   1,   1,   1,   1,   1,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  22,  22,  22,   2,   2,   2,   2,  22,   1,  22,
     22,  22,   2,  22,  22,   2,   2,   2,  22,  22,   2,   2,  22,   2,   2,  22,
     22,  22,   1,   2,   1,   1,   1,   1,   2,   2,  22,   2,   2,   2,   2,   2,
      2,  22,  22,  22,  22,  22,   2,  22,  22,  14,  22,   2,   2,  22,  22,  22,
     22,  22,  22,  22,  22,   1,   1,   1,  22,  22,  14,  14,  14,  14,   1,   1,
      1,   1,   1,  36,  36,  36,  36,  36,  36,   1,  16,  16,  22,   1,   1,   1,
     33,   9,  33,   9,  33,   9,  33,   9,  33,   9,  33,   9,  33,   9,   2,   2,
      1,   1,   1,   1,   1,  33,   9,   1,   1,   1,   1,   1,   1,   1,  33,   9,
      1,   1,   1,  33,   9,  33,   9,  33,   9,  33,   9,  33,   9,  33,   9,  33,
      9,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  33,   9,   1,   1,
      1,   1,   1,   1,   1,   2,   2,   2,  10,  10,   1,   1,   0,   0,   0,   0,
      0,  16,   3,   3,   3,   1,  16,   3,   3,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   3,   3,
      3,   3,   3,   3,   3,   3,   1,   3,  33,   3,   1,   1,  36,  36,   1,   1,
     36,  36,  33,   9,  33,   9,  33,   9,  33,   9,   3,   3,   3,   3,  16,   1,
      3,   3,   1,   3,   3,   1,   1,   1,   1,   1,   5,   5,   3,   3,   3,   1,
      3,   3,  33,   3,   3,   3,   3,   3,   3,   3,   3,   1,   3,   1,   3,   3,
      1,   1,   1,  16,  16,  33,   9,  33,   9,  33,   9,  33,   9,   3,   0,   0,
     22,  22,   0,  22,  22,  22,  22,  22,  22,  22,  22,  22,   0,   0,   0,   0,
     22,  22,  22,  22,  22,  22,   0,   0,   3,   9,   9,  22,  22,  31,  22,  22,
     33,   9,  22,  22,  33,   9,  33,   9,  33,   9,  33,   9,  31,  33,   9,   9,
     22,  22,  10,  10,  10,  10,  10,  10,  22,  22,  22,  22,  22,  10,  22,  22,
     22,  22,  22,  31,  31,  22,  22,  22,   0,  12,  22,  12,  22,  12,  22,  12,
     22,  12,  22,  22,  22,  22,  22,  22,  22,  22,  22,  12,  22,  22,  22,  22,
     22,  22,  22,  12,  22,  12,  22,  12,  22,  22,  22,  22,  22,  22,  12,  22,
     22,  22,  22,  22,  22,  12,  12,   0,   0,  10,  10,  31,  31,  31,  31,  22,
     31,  12,  22,  12,  22,  12,  22,  12,  22,  22,  22,  22,  22,  12,  12,  22,
     22,  22,  22,  31,  12,  31,  31,  22,   0,   0,   0,   0,   0,  22,  22,  22,
      0,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,   0,
     12,  12,  12,  12,  12,  12,  12,  12,  22,  22,  22,  22,  22,  31,  22,  22,
     22,  22,  22,  22,  22,   0,   0,   0,   1,   1,   1,   1,   1,   3,  16,   3,
     32,  32,   1,   1,   0,   0,   0,   0,  10,  10,   1,   3,   3,   3,   3,   3,
      1,   1,   0,   1,   0,   1,   1,   1,   1,   1,  10,   1,   1,   1,  10,   1,
      1,   1,   1,  10,   1,   1,   1,   1,   1,   1,   1,   1,  10,   0,   0,   0,
     34,   1,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   4,   4,  16,  16,
     10,  10,  10,  10,  10,  10,   0,   0,   0,   0,   0,   0,   0,   0,   3,   3,
      1,   1,   1,   1,   4,   1,   1,  10,  10,  10,  10,  10,  10,  10,   3,   3,
     25,  25,  25,  25,  25,   0,   0,   0,  10,   1,   1,   1,   1,   1,   1,   3,
      3,   3,   1,   1,   1,   1,   0,   1,  32,  32,   0,   0,   0,   0,   1,   1,
     32,  32,  11,  11,  11,  11,  11,   0,   1,   1,   1,   1,  10,  10,   0,   0,
     32,  32,   0,   0,   1,   3,   3,   3,  11,  11,  11,   0,   0,   0,   0,   0,
      0,   0,   0,  11,  11,  11,  11,  11,   3,   3,   1,   1,   1,  10,  10,   0,
      0,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,   0,   0,   0,   0,
     10,  10,  10,   3,  10,  10,   0,   0,  18,  19,  19,  19,  19,  19,  19,  19,
     19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  18,  19,  19,  19,
     19,  19,  19,  19,   0,   0,   0,   0,  27,  27,  27,  27,  27,  27,  27,   0,
      0,   0,   0,  26,  26,  26,  26,  26,  26,  26,  26,  26,   0,   0,   0,   0,
     39,  39,  39,  39,  39,  39,  39,  39,   0,   0,   0,   1,   1,   1,   1,   1,
      0,   0,   0,   0,   0,  20,  10,  20,  20,   1,  20,  20,  20,  20,  20,  20,
     20,  20,  20,  20,  20,  20,  20,   0,  20,  20,  20,  20,  20,   0,  20,   0,
     20,  20,   0,  20,  20,   0,  20,  20,   1,   1,   1,   1,   1,   1,   9,  33,
      1,   1,   1,   1,  34,   1,   1,   1,  23,   9,   9,  23,  23,  16,  16,  33,
      9,  24,   0,   0,   0,   0,   0,   0,  22,  22,  22,  22,  22,  33,   9,  33,
      9,  33,   9,  33,   9,  22,  22,  33,   9,  22,  22,  22,  22,  22,  22,  22,
      9,  22,   9,   0,  31,  31,  16,  16,  22,  33,   9,  33,   9,  33,   9,  22,
     22,  35,  34,  22,   0,   0,   0,   0,   1,   1,   1,   1,   1,   0,   0,  40,
      0,  16,  22,  22,  35,  34,  22,  22,  33,   9,  22,  22,   9,  22,   9,  22,
     22,  22,  31,  31,  22,  22,  22,  16,  22,  22,  22,  33,  22,   9,  22,  22,
     22,  22,  22,  33,  22,   9,  22,  33,   9,   9,  33,   9,   9,  31,  22,  12,
     12,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  31,  31,
      0,   0,  22,  22,  22,  22,  22,  22,   0,   0,  22,  22,  22,   0,   0,   0,
     34,  35,  22,  22,  22,  35,  35,   0,   0,  10,  10,  10,  13,   2,   0,   0,
      1,   1,   1,   0,   1,   1,   0,   1,   3,   3,   3,   0,   0,   0,   0,   1,
      1,   1,   1,   1,   0,   0,   0,   1,   1,   1,   1,   1,   1,  10,   0,   0,
      0,   0,   0,   0,   0,   1,   1,   1,  10,  10,  10,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   0,   3,   3,   1,   1,   1,   1,   1,   0,   0,
      1,   1,   1,   0,   1,   1,   1,   1,   1,   1,   0,   1,   1,   0,   0,   0,
      1,   0,   0,   0,   1,   0,   0,   1,   1,   1,   1,   0,   1,   1,   0,   0,
      1,   1,   1,   1,   0,   0,   0,   3,   1,   1,   0,   0,   0,   0,   0,   1,
      1,  10,  10,  10,   0,  10,  10,   0,   0,   0,   0,   0,  10,  10,  10,  10,
      3,   3,   3,   3,   3,   3,   3,   3,   1,   1,   1,   1,   1,  10,  10,   0,
      3,   3,   3,   3,   3,   3,  24,   0,   0,   3,   3,   3,   3,   3,   3,   3,
      0,   1,   1,   1,   1,   0,   0,   0,   1,   1,   0,  10,  10,   3,   0,   0,
      1,   1,  10,  10,  10,  10,   1,   1,   1,   1,   1,   1,   1,   1,  32,  32,
     10,   1,   1,  10,  10,   1,   0,   0,  10,  10,  10,   1,   1,   1,   3,   3,
      3,   3,  10,   0,   0,   0,   0,   0,  10,  10,  10,  10,  10,   0,  32,  32,
      3,   3,   3,   3,   1,  10,  10,   1,   1,   1,   1,  10,   1,   4,   1,   0,
     10,   1,   1,   1,   1,   3,   3,   1,   3,  10,  10,  10,  10,   1,  10,  10,
     32,  32,   1,   4,   1,   3,   3,   3,   3,   3,   1,   3,   3,   1,  10,   0,
      1,   0,   1,   1,   1,   1,   0,   1,   1,   3,   0,   0,   0,   0,   0,   0,
     10,  10,  10,  10,   0,   1,   1,   1,   1,   1,   0,  10,  10,   1,  10,  10,
      1,   1,  10,  10,   0,   0,  10,  10,  10,  10,  10,  10,  10,   0,   0,   0,
     10,  10,  10,  10,  10,  10,  10,   1,   1,   1,   1,   3,   3,   3,   3,   1,
     32,  32,   3,   3,   0,   1,  10,   1,  10,   4,   3,   3,  16,  16,   1,   1,
      1,   3,   3,   3,   3,   3,   3,   3,  10,   3,   3,   1,   1,   0,   0,   0,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   0,   0,   0,
     11,  11,  11,   0,   0,  11,  11,  11,  32,  32,  11,  11,   3,   3,   3,  11,
     10,  10,  10,   1,   0,   0,   0,   0,   0,   1,   0,   0,   1,   1,   1,   1,
      1,   1,   1,   1,   0,   1,   1,   0,  10,   0,   0,  10,  10,  10,  10,   1,
     10,   1,  10,  10,   3,   3,   3,   0,   0,   0,  10,  10,  10,  10,  10,  10,
     10,   1,   4,   1,  10,   0,   0,   0,  10,  10,   1,  10,  10,  10,  10,   4,
      1,   3,   3,   3,   3,   4,   1,  10,  10,  10,   3,   3,   3,   1,   4,   4,
      4,   3,   3,   0,   0,   0,   0,   0,   1,   3,   3,   3,   3,   3,   0,   0,
      4,  16,   1,   1,   1,   1,   1,   1,   1,  10,  10,  10,  10,  10,  10,   0,
      0,   0,  10,   0,  10,  10,   0,  10,  10,  10,  10,  10,  10,  10,   1,  10,
      1,   1,  10,  10,  10,  10,  10,   0,  10,  10,   0,  10,  10,  10,  10,  10,
      1,   1,   1,  10,  10,  10,  10,   1,   1,   1,   1,   1,   1,  34,  34,  34,
     34,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,   0,   0,   3,
      3,   3,   3,   3,   3,   0,   0,   0,  33,  33,  33,   9,   9,   9,   1,   1,
      1,   1,   9,   1,   1,   1,  33,   9,  33,   9,   1,   1,   1,   1,   1,   1,
      1,  33,   9,   9,   1,   1,   1,   1,  17,  17,  17,  17,  17,  17,  17,  33,
      9,   0,   0,   0,   0,   0,   0,   0,  32,  32,   0,   0,   0,   0,   3,   3,
     10,  10,  10,  10,  10,   3,   0,   0,   3,   3,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   3,   1,   0,   0,  32,  32,   0,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   3,   3,   1,   1,   0,   0,   0,   0,   0,
      1,   1,   1,   0,   0,   0,   0,  10,  31,  31,  31,  31,  17,   0,   0,   0,
     10,  10,   0,   0,   0,   0,   0,   0,  22,   0,   0,   0,   0,   0,   0,   0,
     22,  22,  22,   0,   0,   0,   0,   0,  12,  12,  12,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  12,  12,  12,  12,   1,   1,   0,   0,   1,  10,  10,   3,
     10,  10,   1,   1,   1,  10,  10,  10,  10,  10,  10,   1,   1,  10,  10,  10,
      1,   1,  10,  10,  10,   1,   0,   0,   0,   0,   1,   0,   0,   1,   1,   0,
      0,   1,   1,   1,   1,   0,   1,   1,   1,   1,   0,   1,   1,   1,   1,   0,
      1,   1,   1,   1,   1,   0,   1,   0,   1,   1,   1,   1,   0,   0,  32,  32,
      1,   1,   1,   1,   1,  10,   1,   1,   1,   1,   1,   1,  10,   1,   1,   3,
      3,   3,   3,   1,   0,   0,   0,   0,   0,   0,   0,  10,  10,  10,  10,  10,
     10,   0,   0,  10,  10,  10,  10,  10,  10,  10,   0,  10,  10,   0,  10,  10,
      1,   1,   1,   1,   1,   1,  10,   0,  32,  32,   0,   0,   0,   0,   0,  35,
     32,  32,   0,   0,   0,   0,  33,  33,  34,   1,   1,   1,   1,   0,   0,   0,
      0,   1,   1,   0,   1,   0,   0,   1,   0,   1,   0,   1,   0,   0,   0,   0,
      0,   0,   1,   0,   0,   0,   0,   1,   0,   1,   0,   1,   0,   1,   1,   1,
      0,   1,   1,   1,   0,   1,   1,   1,   2,   2,   2,   2,   2,  22,  22,  22,
      2,   2,   2,   2,   2,   2,   1,   1,   2,   2,   1,   1,   1,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  37,  37,  37,  37,  37,  37,  37,  37,  37,  37,
     22,  22,  22,  22,  22,  14,  22,  22,  22,  22,  22,  22,   1,   1,  22,  22,
     22,  22,  22,  22,  22,   1,   1,  22,  22,  22,  22,  22,   1,  22,  22,  22,
     22,  22,  14,  14,  14,  22,  22,  14,  22,  22,  14,  14,  14,  22,  22,  22,
     22,  22,  22,  15,  15,  15,  15,  15,  22,  22,  14,  14,  22,  22,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  22,  22,  22,  22,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  14,  14,  14,  22,  22,  22,  14,  22,  22,  22,
     22,  14,  14,  14,  22,  14,  14,  14,  22,  22,  22,  22,  22,  22,  22,  14,
     22,  14,  22,  22,  22,  22,  22,  22,   1,  22,   1,  22,   1,  22,  22,  22,
     22,  22,  14,  22,  22,  22,  22,   1,  22,   1,   1,  22,  22,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  22,   1,  22,  22,   1,   1,   1,   1,   1,   1,
      1,   1,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  14,  14,  22,  22,
     22,  22,  14,  22,  22,  22,  22,  22,  14,  22,  22,  22,  22,  14,  14,  22,
      1,   1,   1,   1,  22,  22,  22,  22,  22,  22,  22,  22,  22,  14,  14,  14,
     22,  22,  22,  14,  14,  14,  14,  14,   1,   1,   1,   1,   1,   1,  36,  36,
     36,  31,  31,  31,   1,   1,   1,   1,  22,  22,  22,  14,  22,  22,  22,  22,
     22,  22,  22,  22,  14,  14,  14,  22,  22,  22,  22,  22,  14,  22,  22,  22,
      1,   1,   1,   1,   1,   1,  22,  22,   1,   1,   1,   1,  14,  22,  22,  14,
     22,  22,  22,  22,  22,  22,  14,  22,  14,  14,  22,  22,  14,  14,  14,  22,
     22,  22,  22,  22,  22,  14,  14,  22,  14,  14,  22,  14,  22,  22,  22,  22,
     22,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  22,  22,
     22,  22,  22,  14,  14,  14,  22,  22,  14,  14,  14,  14,  14,  14,  14,  22
};

static UINT16 line_break_table_2[3888] = {
      0,   1,   0,   0,   2,   3,   4,   5,   6,   6,   6,   7,   6,   6,   6,   8,
      9,   0,   0,   0,  10,  11,  12,  13,   6,   6,  14,   6,   6,   6,  14,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,  14,  15,  16,  17,   6,   6,   6,   6,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  18,   0,  19,  20,   0,   6,  21,
     22,  23,   6,   6,  24,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
     25,  26,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,  27,   6,   6,   6,  28,  27,   6,   6,   6,   6,
      6,  29,  30,   0,   0,   0,   0,  31,  32,  33,  34,  34,  34,  35,  36,  33,
      6,  37,   0,  38,   6,   6,   6,   6,   6,  25,   0,   0,   4,  39,  40,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  41,  42,  42,  43,   4,  44,
      6,  45,  46,   6,   6,   6,   0,   0,   0,  47,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,  48,   0,  49,  33,   4,  44,   6,   6,   6,  25,  50,  51,
      6,   6,  48,  52,  53,  54,   6,  28,   6,   6,   6,  55,   6,  56,   6,   6,
      6,  28,  57,   0,   6,   6,   6,   6,   6,  58,   0,   0,  52,   0,   0,   0,
     50,   6,   6,   6,   6,   6,   6,  59,   0,   0,  60,   6,  61,   4,   6,   6,
     62,  63,  64,   6,   6,  65,  66,  67,  68,  69,  70,  71,  72,   4,  73,  74,
     75,  76,  64,   6,   6,  65,  77,  78,  79,  80,  81,  82,  83,   4,  84,  33,
     75,  45,  24,   6,   6,  65,  85,  67,  86,  87,  88,  33,  72,   4,  89,  90,
     75,  63,  64,   6,   6,  65,  85,  67,  68,  80,  91,  71,  72,   4,   6,  33,
     92,  93,  94,  95,  96,  93,   6,  97,  98,  99, 100,  33,  83,   4,   6, 101,
    102, 103,  65,   6,   6,  65,   6,  67, 104,  99, 105, 106,  72,   4, 107,   6,
    108, 103,  65,   6,   6,  65, 109,  67, 104,  99, 105, 110,  72,   4, 111,  33,
     50, 103,  65,   6,   6,   6,   6, 112, 104, 113, 114,   6,  72,   4,   6, 115,
     75,   6,  28, 116,   6,   6,  24, 117,  28, 118, 119,   0,  83,   4, 120,  33,
    121, 122, 122, 122, 122, 122, 122, 123, 122, 124,   4, 125,  33,  33,  33,  33,
    126, 127, 122, 122, 128, 122, 122, 129, 130, 129,   4, 131,  33,  33,  33,  33,
    132, 133, 134,  26,   4,  44, 135, 136,   6,  27,   6,   6,   6, 137,  30, 138,
    139, 140,   0,  30,   0,   0,   0, 141, 142, 103, 143, 144,  33,  33,  33,  33,
    122, 122, 122, 122, 122, 122, 122, 122,   4, 145, 122, 122, 122, 122, 122, 122,
    122, 122,   4, 146,   6,   6,   6,   6,  45, 147,   6,   6,   6,   6,   6,   6,
    148, 148, 148, 148, 148, 148, 148, 148, 148, 148, 148, 148, 149, 149, 149, 149,
    149, 149, 149, 149, 149, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      6,   6,   6,   6,   6,   6,   6,   6,   6,  94,  28,  94,   6,   6,   6,   6,
      6,  94,   6,   6,   6,   6,  94,  28,  94,   6,  28,   6,   6,   6,   6,   6,
      6,   6,  94,   6,   6,   6,   6,   6,   6,   6,   6, 151, 152,   6,   6, 137,
      6,   6,   6,  57,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 153, 153,
    154,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
    154,   6,   6, 155,   6,   6,   6,   6,   6,   6,   6,   6,   6, 156,   6,  88,
      6,   6, 157, 158,   6,   6, 159,  33,   6,   6, 160,  33,   6, 103, 161,  33,
    122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 162, 163,   4, 164,   6,  57,
    165, 166,   4, 164,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  88,
    167,   6,   6,   6,   6, 168,   6,   6,   6,   6,   6,   6,   6,   6, 153,  33,
      6,   6,   6,  28,   0, 169,   0, 169, 170,   4, 122, 122, 122, 129, 171,  33,
    122, 122, 122, 122, 122, 172, 122, 122, 122, 173,   4, 174,   6,   6,   6,   6,
      6,   6, 175, 176, 122, 122, 122, 122, 122, 122, 122, 177, 122, 122, 122, 178,
      4, 164,   4, 164, 122, 129,   0,   0,   0, 179,  33,  33,  33,  33,  33,  33,
    102,   6,   6,   6,   6,   6, 180,   0, 102, 137,   4, 181, 154,  25,  50, 182,
    183,   6,   6,   6,  60, 184,   4,  44,   6,   6,   6,   6,  48,   0, 169,  22,
      6,   6,   6,   6, 180,   0,   0, 185,   4, 186,   4,  44,   6,   6,   6, 187,
      6,  88,   6,   6,   6,   6,   6, 188,   6,  33, 189,   0,   0, 190, 191, 192,
      6,   6,   6,   6,   6,   6,   6,   6,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6, 153, 153,   6,   6,   6,   6, 153, 153,   6, 193,   6,   6,   6, 153,
      6,   6,   6,   6,   6,   6, 103,   6, 103,   6, 194, 109,   6,   6, 195, 196,
    197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,   0, 210, 211,
    212, 213,   6, 137, 214, 215, 216, 217, 218, 215,   0,   0,   0,   0, 219,  33,
    220, 115, 221,   6, 222, 223,   6,   6,   6,   6, 224, 225, 226, 227, 226, 228,
      6, 229, 226, 228,   6,   6,   6,   6,   6,   6, 230,   6,   6,   6,   6,   6,
    231, 232, 233, 234, 235, 236, 237, 224,   6, 238, 239,   6, 240, 241,   6,   6,
    241,   6, 242, 243, 242,   6,   6,  14,   6,   6,   6,   6,   6, 244,   6,   6,
      6, 245, 239, 246,   6, 247,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 248,   6,
      6,   6,   6,   6,  28,  33,  33,  33,   6,  56,  33,  33, 226, 226, 226, 226,
    226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 249,
    226, 226, 226, 226, 226, 226, 226, 226, 226, 227, 226, 226, 226, 226, 250,   6,
    226, 226, 251,   6, 252, 228, 241, 224, 253, 254, 228,   6, 251,  14,   6,   6,
    255, 256, 257, 258,   6,   6,   6, 259, 260,   6,   6,   6, 261, 262,   6, 263,
      6,   6,   6, 264,   6,   6,   6, 265, 266, 267, 268, 269, 270, 271, 272, 273,
    274, 275,   6,   6,   6,   6,   6,   6,   6,   6,  14, 276, 277, 278, 279, 226,
    226, 226, 227,   6,   6,   6,   6,   6, 280,   6,   6,   6, 281, 278,   6,   6,
    282, 283, 283, 284,   6,   6,   6,   6,   6,   6,   6, 245,   6,   6,   6, 285,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 286, 228,   6,   6, 194,   6,
      6,   6,  45,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 175, 287, 288,
      6,   6,   6,   6,  45, 147,   6,   6,   6,   6,   6,   6,   6, 158, 289,  70,
      6,   6,  28,  33,  28,  28,  28,  28,  28,  28,  28,  28,   0,   0,   0,   0,
    290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301,  33,  33,  33,  33,
    266, 266, 266, 302, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 303,  33,
    266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
    266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 304,  33,  33,  33, 266, 303,
    305, 278, 306, 307, 266, 308, 309, 310, 311, 312, 266, 266, 313, 266, 266, 266,
    314, 315, 316, 317, 318, 312, 266, 266, 313, 266, 266, 266, 314, 315, 319, 320,
    321, 266, 266, 266, 266, 266, 322, 266, 266, 266, 266, 266, 266, 266, 266, 266,
    266, 323, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 303,  33, 324, 324,
    266, 266, 266, 323, 266, 266, 266, 266, 266, 226, 266, 266, 266, 266, 266, 266,
    266, 266, 266, 266, 266, 266, 266, 266,   6,   6,   6,   6,   6,   6,   6,   6,
    266, 266, 325, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
    266, 326, 266, 266, 266, 266, 266, 266, 323,  33,   6,   6,   6,   6,   6, 187,
      6, 327,   6,   6,   4, 328,  33,  33,   6,   6,   6,   6,   6, 175, 189, 184,
      6,   6,   6,  48,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 329,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,  56, 330,  57,  33,  33, 116,   6,
    331, 332,   6,   6,  25, 333,   6, 334,   6,   6,   6,   6,   6,   6, 335,  33,
     26,   6,   6,   6,   6,   6, 180,   0, 336, 337,   4, 164,   0,   0,  26, 338,
      4,  44,   6,   6,  48, 339,   6,   6, 175,   0, 169, 158, 148, 148, 148, 340,
     50,   6,   6,   6,   6,   6,  25,   0, 341, 342,   4, 343, 122, 122,   4, 344,
      6,   6,   6,   6,   6,  60, 179,  33, 332, 345,   4, 346, 122, 122, 122, 122,
    122, 122, 122, 122, 122, 122, 122, 122, 347,  33,  33, 348,   6,  25, 349,  33,
    350, 350, 350,  33,  28,  28,   6,   6,   6,   6,   6,   6,   6, 351,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  25, 352,   4, 164,
    353, 354, 354, 355, 354, 354, 354, 353, 354, 354, 355, 354, 354, 354, 353, 354,
    354, 355, 354, 354, 354, 353, 354, 354, 355, 354, 354, 354, 353, 354, 354, 355,
    354, 354, 354, 353, 354, 354, 355, 354, 354, 354, 353, 354, 354, 355, 354, 354,
    354, 353, 354, 354, 355, 354, 354, 354, 353, 354, 354, 355, 354, 354, 354, 353,
    354, 354, 355, 354, 354, 354, 353, 354, 354, 355, 354, 354, 354, 353, 354, 354,
    355, 354, 354, 354, 353, 354, 354, 355, 354, 354, 354, 353, 354, 354, 355, 354,
    354, 354, 353, 354, 354, 355, 354, 354, 354, 353, 354, 354, 355, 354, 354, 354,
    354, 353, 354, 354, 356,  33, 149, 149, 357, 358, 150, 150, 150, 150, 150, 359,
    360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     28,  33, 361, 362,  34, 363, 364, 365, 366,  34,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,  56,  33, 361,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6, 367,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6, 116,   6,   6,   6,   6,   6,   6, 158,  33,  33,  33,  33,   6, 368,
      0,   0, 369, 370,   0,   0, 371, 283, 372, 373, 374, 375, 323, 376, 103,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 377,
    378, 379, 266, 380, 266, 266, 266, 381, 266, 266, 266, 382, 383, 324, 384, 266,
    266, 266, 266, 385, 266, 266, 266, 323, 386, 386, 386, 387, 388,  28,  33, 389,
      6, 109,   6,   6,  28,   6,   6, 390,   6, 153,   6, 153,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  56,
    391,   6,   6,   6,   6,   6, 392,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,  28,   6, 137,  88,  33,  33,  33,  33,  33,   6,   6,   6,   6,   6, 393,
      6,   6,   6, 137,   6,   6,   6,   6,   6,   6,  88,  33,  40,   6,   6, 351,
      6,   6,   6,   6, 351, 394,   6,   6,   6,  56,   6,   6,   6,   6,  48, 395,
      6,   6,   6, 396,   6,   6,   6,   6, 351,   6, 397,  33,  33,  33,  33,  33,
      6,   6,   6, 153,   4, 164,   6,   6,   6,   6, 351,   6,   6,   6,   6, 351,
      6,   6,   6,   6,   6,  33,   6,   6,   6,   6,   6,   6, 351, 158,   6, 398,
      6, 398, 390,   6,  24,   6,  24, 399,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,  28,  33,   6,   6, 153,  33,   6,  33,  33,  33,
     45,   6,   6,   6,   6,   6,  65,  56,  33,  33,  33,  33,  33,  33,  33,  33,
    153,  65,   6,   6,   6,   6,  45, 400,   6,   6, 396,   6,   6,   6,   6,   6,
      6,   6,   6,  28, 158,   6,  33,  33,  33,  33,  33,  33,   6,   6, 401, 361,
      6,   6,   6, 402,   6,   6,   6, 403,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,  22,   6,   6, 116,   6,   6,   6,   6,   6,
    404, 405, 109,  27,   6,   6, 153,  79,   6,  88, 406,  88,   6,   6,   6,   6,
      6,   6,   6,   6,  33,  33,  33,  33,   6,   6,   6,   6, 407, 361, 408,  33,
      6,   6,   6,   6,   6,   6, 153, 409,   6,   6, 153,   6,   6,   6,  56,   6,
      6,   6,  57, 410,  33,  27,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,  88,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,  56,  33,   6,   6,   6,   6,   6,   6,  56, 116,
      6,   6,   6,   6, 180,  33,   4, 164,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   6,   6,   6,  28,
      6,   6,   6,   6,   6, 411,  57,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,  33,   6,   6,  48,   0,  40,  57,  33,  33,   6,   6,
    412,  57,  33,  33,  33,  33,   6,   6,   6, 351,  33,  33,   6,   6,  28,  33,
    183,   6,   6,   6,   6,   6,   6,   0, 138, 397, 116,   6, 413,   4, 414,  70,
    183,   6,   6,   6,   6,   6,   0, 415, 416, 147,   6,   6,   6,  88,   4, 164,
    183,   6,   6,   6, 175,   0, 417,   4, 418,  33,   6,   6,   6,   6, 419,  33,
    183,   6,   6,   6,   6,   6,  25,   0, 420, 421,   4, 422,  27,   6, 137,  33,
      6,   6,  24,   6,   6, 180,   0, 423,  33,  33,  33,  33,  33,  33,  33,  33,
     28, 424,   6,  45,   6, 425,   6,   6,   6,   6,   6, 175,   0, 395,   4, 164,
    426,  63,  64,   6,   6,  65,  85, 427,  68,  80, 100, 394, 428, 429, 429,  33,
      6,   6,   6,   6,   6,   6, 140,   0, 430, 431,   4, 432,  57,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   0,   0,  50,  33,   4, 164,  33,  33,  33,  33,
      6,   6,   6,   6,   6, 175, 336,   0, 433, 434, 406, 345,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   0,   0, 435,  33,   4, 164, 436, 437,  33,  33,
      6,   6,   6,   6,   6,  25,   0,  57,   4, 164,  33,  33,  33,  33,  33,  33,
    122, 122, 122, 438, 122, 172,   4, 439, 177,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6, 180,   0, 440,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,   6,   6,   6,   6,   6,   6,   6,   6,   4,  44,  56, 158,
     28, 441, 442,   6,   6,   6,  86, 443, 444,  33,   4, 164,  33,  33,  33,  33,
     33,  33,  33,  33,   6, 116,   6,   6,   6,   6,  60, 445, 446,  33,  33,  33,
     60, 183,   6,   6,   6,   6,  25, 447, 448,  33,  60,  50,   6,   6,   6,   6,
      6,  58,   0, 449, 450,  33,   6,   6,   6,   6,   6,   6,   6,   6,   6,  88,
      6,  65,   6,   6,   6, 175, 179,   0, 451,  33,   4,  44,   6, 137, 452,   6,
      6,   6, 445,   0,   0,  30, 179,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     28,  24,   6,   6,   6,   6, 453, 454, 455,  33,   4, 164,  45,  65,   6,   6,
      6, 456, 457,  88,   4, 164,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   6,   6, 458,  88,
     33,  33,  33,  33,  33,  33,  88,  33,   6,   6,   6, 459, 460,   6,  57, 461,
      6,   6,   6,  57,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  28, 462,  33,
      6,   6,   6,   6,   6,   6,   6,   6, 351,  33,  33,  33,  33,  33,  33,  33,
     33,  33,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  56,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 463,   6,   6,   6,   6,
    464, 465,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 466,
      6,   6,   6,   6,   6,  28, 467, 468,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6, 281,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,  28,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,  88,   6,   6,   6,  28,   4, 469,   6,   6,
      6,   6,   6,   6,   6,   6,   6,  28,   4, 164,   6,   6,   6, 153, 470,  33,
      6,   6,   6,   6,   6,   6, 138, 471, 472,  33,   4, 473,  24,   6,   6, 394,
      6,   6,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6, 474, 475,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6, 476,  60,   0,   0,   0,   0,   0,
      0,  70, 183,   6,  33,  33,  33,  33,  33,  33,  33,  33, 477,  33, 478,  33,
    266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 153,  33,  33,  33,  33,  33,
    266, 479,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33, 109, 442,
    266, 266, 266, 266, 480,  33,  33,  33,  33,  33, 481,  33, 482,  33, 266, 266,
    266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 303,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  56,   6, 137,
      6,  88,   6, 483, 169,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      0,   0,   0,   0,   0, 336,   0,   0, 179,  33,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 153,  33,
      6,   6,   6,   6,  28,  27,   6,   6,   6,   6,   6,   6, 140, 484,   0,   0,
    485,  50,   6,   6,   6, 412,   6,   6,   6,   6,   6,   6,   6,  56,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6, 486,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   6,   6, 351,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  28,  33,   6,   6,   6,  88,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 103,   6,   6,   6,   6,   6,
      6,   6,   6, 103, 487, 488,   6, 330, 109,   6,   6,   6,   6,   6,   6,   6,
     45, 188, 103, 103,   6,   6,   6, 489, 490, 116,  65,   6,   6,   6,   6,   6,
      6,   6,   6,   6, 153,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6, 491,   4,   4,   4,   4,   4,   4,
      0,   0,   0,   0,   0,   0, 430,  25,   0,   0,   0,   0,   0, 102, 492,   6,
    493, 494,  33, 495,  30,   0,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,  28,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
    179,   0,   0, 496, 497, 395,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6, 137, 430, 153,   4, 343,  33,  33,  33,  33,  33,  33,
     33,  33,   6,   6,   6, 498,  33,  33,   6,   6,   6,   6,   6, 180,   4, 499,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  28, 442,   6,  28,
      6,   6,   6,   6,   6,   6,   6,   6,  63,   6, 179,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6, 180, 440,   4, 500,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  27,   6,
      6,   6,   6,   6,   6, 368, 501,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     27,   6,   6,   6,   6,   6,   6, 153,  33,  33,  33,  33,  33,  33,  33,  33,
    109,   6,   6,   6, 502,  27, 398, 503, 504, 505, 502, 193, 502, 398, 398,  82,
      6,  24,   6, 351, 506,  24,   6, 351,  33,  33,  33,  33,  33,  33,  57,  33,
    226, 507, 226, 226, 226, 508, 226, 226, 226, 226, 226, 226, 226, 509, 226, 226,
    226, 226, 226, 226, 226, 507, 266, 266, 266, 266, 266, 266, 510, 511, 511, 511,
    512, 266, 266, 513, 266, 266, 514, 515, 516, 517, 266, 266, 266, 266, 266, 518,
    266, 266, 266, 266, 266, 266, 266, 266, 519, 520, 521, 266, 522, 520, 520, 523,
    524, 525, 526, 266, 527, 528, 529, 266, 266, 266, 266, 266, 266, 266, 266, 266,
    263, 266, 530,   6, 265, 266, 531,   6,   6, 532, 266, 266, 266, 266, 533, 534,
    266, 266, 535, 266, 266, 266, 266, 266, 266, 266, 248, 536, 266, 266, 248, 532,
    266, 266, 266, 266, 266, 266, 266, 266, 537, 538,   6,   6,   6,   6, 539, 540,
    266, 266, 266, 266, 541, 266, 542, 266, 521, 543, 266, 266, 266, 266, 266, 266,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 536, 266,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 265, 266, 266, 266, 266, 266,
      6, 536,   6,   6,   6,   6,   6,   6,   6, 266,   6, 532,   6,   6,   6,   6,
      6, 266,   6,   6,   6, 544, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
      6, 545, 266, 520, 546, 266, 520, 547, 266, 266, 266, 266, 266, 266, 525, 266,
    266, 266, 266, 266, 266, 266, 548, 549, 266, 537, 550, 551, 266, 266, 266, 266,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 536, 266, 266, 266, 266, 266,
    266, 266, 266, 266, 266, 266, 266, 266, 552, 266, 266, 266, 266, 266, 553, 266,
      6,   6, 398,   6,   6,   6,   6,   6,   6,  56,  33,  33,  33,  33,   4, 164,
    266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 304,
     81,  33,  33,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,  33
};

static UINT8 line_break_table_3[864] = {
      0,   1,   2,   2,   2,   3,   4,   5,   2,   6,   7,   8,   9,  10,  11,  12,
     13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,
     29,  30,  31,  32,  33,  34,  35,  36,  37,   2,   2,   2,   2,  38,  39,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,   2,  51,   2,   2,  52,  53,
     54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,  69,
      2,   2,   2,  70,   2,   2,  71,  72,   2,  73,  74,  75,  76,  77,  78,  79,
     80,  81,  82,  83,  84,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  85,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     86,  78,  78,  78,  78,  78,  78,  78,  78,  87,   2,   2,  88,  89,   2,  90,
     91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104, 105,  99,
    100, 101, 102, 103, 104, 105,  99, 100, 101, 102, 103, 104, 105,  99, 100, 101,
    102, 103, 104, 105,  99, 100, 101, 102, 103, 104, 105,  99, 100, 101, 102, 103,
    104, 105,  99, 100, 101, 102, 103, 104, 105,  99, 100, 101, 102, 103, 104, 105,
     99, 100, 101, 102, 103, 104, 105,  99, 100, 101, 102, 103, 104, 105,  99, 100,
    101, 102, 103, 104, 105,  99, 100, 101, 102, 103, 104, 105,  99, 100, 101, 106,
    107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108,  78,  78,  78,  78, 109, 110,   2,   2, 111, 112, 113, 114, 115, 116,
    117, 118, 119, 120, 108, 121, 122, 123,   2, 124, 125, 126,   2,   2, 127, 128,
    129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 108, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 108, 151, 152, 108, 153, 154, 155, 156, 108,
    157, 158, 159, 160, 161, 162, 108, 108, 163, 164, 165, 166, 108, 167, 108, 168,
      2,   2,   2,   2,   2,   2,   2, 169, 170,   2, 171, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 172,
      2,   2,   2,   2, 173, 174, 175,   2, 176, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108,   2,   2,   2, 177, 178, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
      2,   2,   2,   2, 179, 180, 181, 182, 108, 108, 108, 108, 183, 184, 185, 186,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 187,
     78,  78,  78,  78,  78,  78,   2,   2,   2, 188, 189, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 190,
     78,  78, 191,  78,  78, 192, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 193, 194, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 195, 171,
      2, 196, 197, 198, 199, 200, 201, 108, 202, 203, 204,   2,   2, 205,   2, 206,
      2,   2,   2,   2, 207, 208, 108, 108, 108, 108, 108, 108, 108, 108, 209, 108,
    210, 108, 211, 108, 108, 212, 108, 108, 108, 108, 108, 108, 108, 108, 108, 213,
      2, 214, 215, 108, 108, 108, 108, 108, 216, 217, 218, 108, 219, 220, 108, 108,
     78,  78, 221, 222,  78,  78,  78, 223, 224, 225, 226, 227, 228, 229, 230, 231,
    232, 233, 234, 235, 236, 237,   2, 238,  78,  78,  78,  78,  78,  78,  78, 239,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78, 239,
    240, 108, 241, 242, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108
};

static UINT8 line_break_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   7,   8,   9,  10,  11,
     12,  13,  14,  15,  16,  10,  17,   5,  18,  10,  19,  20,  21,  22,  23,  24,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  25,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  25,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     26,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10
};

UINT32 lookup_line_break(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = line_break_table_4[block];
    offset = (codepoint >> 7) & 0x1F;
    block = line_break_table_3[(block << 5) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = line_break_table_2[(block << 4) + offset];
    offset = codepoint & 0x7;
    value = line_break_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Logical_Order_Exception. */

static UINT8 logical_order_exception_table_1[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  31,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 224,   4,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  96,  26,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 logical_order_exception_table_2[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   0,   0,
      0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 logical_order_exception_table_3[64] = {
      0,   1,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 logical_order_exception_table_4[17] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1
};

UINT32 lookup_logical_order_exception(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 16;
    block = logical_order_exception_table_4[block];
    offset = (codepoint >> 11) & 0x1F;
    block = logical_order_exception_table_3[(block << 5) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = logical_order_exception_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = logical_order_exception_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Lowercase. */

static UINT8 lowercase_table_1[384] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4,   0,   0,   0, 128,
    255, 255, 127, 255, 170, 170, 170, 170, 170, 170, 170,  85,  85, 171, 170, 170,
    170, 170, 170, 212,  41,  49,  36,  78,  42,  45,  81, 230,  64,  82,  85, 181,
    170, 170,  41, 170, 170, 170, 250, 147, 133, 170, 255, 255, 255, 255, 255, 255,
    255, 255, 239, 255, 255, 255, 255,   1,   3,   0,   0,   0,  31,   0,   0,   0,
     32,   0,   0,   0,   0,   0, 138,  60,   0,   0,   1,   0,   0, 240, 255, 255,
    255, 127, 227, 170, 170, 170,  47,  25,   0,   0, 255, 255,   2, 168, 170, 170,
     84, 213, 170, 170, 170, 170,   0,   0, 255,   1,   0,   0, 255, 255, 255, 231,
      0,   0,   0,  63, 170, 170, 234, 191, 255,   0,  63,   0, 255,   0, 255,   0,
     63,   0, 255,   0, 255,   0, 255,  63, 255,   0, 223,  64, 220,   0, 207,   0,
    255,   0, 220,   0,   0,   0,   2, 128,   0,   0, 255,  31,   0, 196,   8,   0,
      0, 128,  16,  50, 192,  67,   0,   0,  16,   0,   0,   0, 255,   3,   0,   0,
     98,  21, 218,  63,  26,  80,   8,   0, 191,  32,   0,   0, 170,  42,   0,   0,
    170, 170, 170,  58, 168, 170, 171, 170, 170, 170, 255, 149, 170,  80, 186, 170,
    170, 130, 160, 170,  10,   5, 170,   2,   0,   0,  64,   7, 255, 255, 255, 247,
    255,   1, 255, 255, 127,   0, 248,   0,   0, 255, 255, 255, 255, 255,   0,   0,
      0,   0,   0, 255, 255, 255, 255,  15,   0,   0, 128, 255, 251, 255, 251,  27,
    185, 255, 255, 255, 255, 255, 253,   7, 255, 255,   7,   0,   0,   0,   0, 252,
    255, 255,  15,   0,   0, 192, 223, 255, 255,   0,   0,   0, 252, 255, 255,  15,
      0,   0, 192, 235, 239, 255,   0,   0,   0, 252, 255, 255,  15,   0,   0, 192,
    255, 255, 255,   0,   0,   0, 252, 255, 255,  15,   0,   0, 192, 255, 255, 255,
      0, 192, 255, 255,   0,   0, 192, 255,  63,   0,   0,   0, 252, 255, 255, 247,
      3,   0,   0, 240, 255, 255, 223,  15, 255, 127,  63,   0, 255, 253,   0,   0,
    247,  11,   0,   0, 255, 251, 255, 127, 252, 255, 255, 255,  15,   0,   0,   0
};

static UINT8 lowercase_table_2[384] = {
      0,   0,   0,   1,   0,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,
      5,  13,  14,  15,  16,  17,  18,  19,   0,   0,  20,  21,  22,  23,  24,  25,
      0,  26,  15,   5,  27,   5,  28,   5,   5,  29,   0,  15,  30,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  26,  31,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,
      0,   0,   0,   0,  30,   0,   0,   0,  15,  15,  15,  15,  15,  15,   0,   0,
      5,   5,   5,   5,  33,   5,   5,   5,  34,  35,  36,  37,  35,  38,  39,  40,
      0,   0,   0,  41,  42,   0,   0,   0,  43,  44,  45,  26,  46,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  26,  47,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  26,  15,  48,   5,   5,   5,  49,  15,  50,   0,   0,   0,   0,   0,   0,
      0,   0,   5,  51,  52,   0,   0,   0,   0,  53,   5,  54,  55,  56,  57,  58,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  59,  60,  15,  15,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  61,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,  62,  63,   0,   0,   0,  64,  65,   0,   0,   0,   0,  66,  67,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  68,  69,   0,   0,
      0,   0,   0,   0,   0,   0,  15,  70,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     71,  72,  73,  74,  75,  76,  77,  78,  79,  80,  81,  82,  83,  71,  72,  84,
     74,  75,  85,  63,  78,  86,  87,  88,  89,  85,  90,  26,  91,  78,  92,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  93,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  94,  95,   0,   0,   0,   0,   0
};

static UINT8 lowercase_table_3[144] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,  12,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  13,   3,  14,
      3,   3,  15,  16,   3,   3,  17,   3,   3,   3,   3,   3,  18,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  19,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  20,  21,   3,   3,   3,  22,
      3,   3,   3,   3,  23,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 lowercase_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   7,   8,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_lowercase(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = lowercase_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = lowercase_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = lowercase_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = lowercase_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Math. */

static UINT8 math_table_1[336] = {
      0,   0,   0,   0,   0,   8,   0, 112,   0,   0,   0,  64,   0,   0,   0,  80,
      0,   0,   0,   0,   0,  16,   2,   0,   0,   0, 128,   0,   0,   0, 128,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39,   0,   0,   0, 115,   0,
    192,   1,   0,   0,   0,   0,   0,   0,   0,   0,  64,   0,   0,   0,  28,   0,
     17,   0,   4,   0,  30,   0,   0, 124,   0, 124,   0,   0,   0,   0,   0,   0,
      0,   0, 255,  31,  98, 248,   0,   0, 132, 252,  47,  63,  16, 179, 251, 241,
    255,  11,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 126, 195, 240,
    255, 255, 255,  47,  48,   0, 240, 255, 255, 255, 255, 255, 255, 255, 255, 255,
      0,  15,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,
      0,   0,   0, 248, 255, 255, 191,   0,   0,   0,   1, 240,   7,   0,   0,   0,
      0,   0,   0,   0,   3, 192, 255, 240, 195, 140,  15,   0, 148,  31,   0, 255,
     96,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,  15, 224,   0,   0,
      0,   0,   0,   0,   0,   0, 255, 255, 159,  31,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0, 126,   1,   0,   0,
      0,   8,   0, 112,   0,   0,   0,  80,   0,   0,   0,  80,   0,   0,   0,   0,
      0,   0,   0,   0,   4,  30,   0,   0, 255, 255, 223, 255, 255, 255, 255, 255,
    255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255, 255, 255, 255, 255,
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255, 255, 255, 255, 255,
    255, 255, 255, 255,  63, 255, 255, 255, 255, 207, 255, 255, 255, 255, 255, 255,
    239, 255, 255, 255, 150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94,
    255, 251, 255,  15, 238, 251, 255,  15,   0,   0,   0,   0,   0,   0,   3,   0
};

static UINT8 math_table_2[160] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   5,
      4,   4,   4,   4,   4,   4,   4,   4,   6,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      7,   8,   9,  10,  11,  12,  13,  14,  15,  15,  15,  15,  16,  17,  18,  19,
      4,   4,   4,   4,   4,   4,  20,  21,  22,  23,   4,   4,   4,   4,   4,  15,
      4,   4,   4,   4,  15,  15,  15,  15,  15,  15,  15,  15,  24,  25,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  26,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,  27,   4,   4,  28,  29,   4,  30,
     15,  31,  32,  33,  34,  35,  15,  15,  15,  15,  36,  15,  15,  15,  15,  37,
      4,   4,   4,   4,   4,   4,   4,   4,  38,  39,  40,  41,   4,   4,   4,   4
};

static UINT8 math_table_3[64] = {
      0,   1,   2,   2,   2,   2,   2,   2,   3,   4,   5,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   6,   7,
      2,   2,   2,   2,   2,   8,   2,   2,   2,   2,   2,   9,   2,   2,   2,   2
};

static UINT8 math_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_math(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = math_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = math_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = math_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = math_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for NFC_Quick_Check. */

static UINT8 nfc_quick_check_table_1[456] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   0,   1,   1,
      1,   1,   1,   1,   1,   0,   0,   1,   0,   1,   0,   1,   1,   0,   0,   0,
      0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,
      1,   0,   0,   0,   0,   1,   1,   0,   1,   1,   0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   2,   2,   1,   2,   2,   1,   0,   0,
      0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,
      0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   1,   1,   1,   0,   0,
      0,   0,   0,   0,   1,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      0,   0,   0,   0,   2,   2,   0,   2,   0,   0,   0,   2,   0,   0,   2,   0,
      0,   2,   2,   2,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   1,   1,
      0,   0,   0,   0,   2,   2,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   1,   0,   0,   0,   0,   1,
      0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,
      0,   0,   2,   0,   0,   0,   0,   2,   0,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   2,   0,   2,   2,   0,   2,   0,   0,   0,   0,   0,   0,   0,
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   0,   0,   1,   1,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   1,   0,   0,   0,   2,   0,   2,   0,   2,   0,   2,
      0,   2,   0,   2,   0,   2,   0,   0,   0,   2,   0,   2,   0,   0,   0,   0,
      0,   0,   0,   2,   0,   0,   2,   2,   2,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   2,   2,   0,   0,   0,   0,   0,   2,   2,   0,   0,   0,   0,   0,
      0,   1,   1,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   0,   0,
      2,   0,   2,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0,
      2,   0,   2,   0,   0,   2,   2,   0,   0,   0,   2,   2,   2,   2,   2,   2,
      0,   0,   0,   0,   0,   2,   0,   2,   2,   2,   2,   2,   2,   0,   2,   0,
      2,   2,   0,   2,   2,   0,   2,   2,   0,   0,   1,   0,   0,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   0,   0,   0,
      0,   0,   0,   2,   2,   2,   2,   2
};

static UINT8 nfc_quick_check_table_2[592] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   0,   0,   0,   0,  10,  11,
     12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  14,   0,   0,   0,  15,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  16,   0,   0,  17,  18,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  19,   0,   0,   0,   0,  20,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  16,   0,   0,  21,  22,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  16,   0,   0,  17,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  23,   0,  24,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  25,   0,  17,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  26,  27,  28,  10,   0,  29,  30,  31,
     29,   0,  26,  27,  28,  10,   0,  29,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,  33,  34,   0,
      0,   0,   0,   0,   0,  33,  33,  33,  35,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37,  38,
      0,   0,   0,   0,   0,   0,   0,  19,   0,  39,  26,  26,  26,  40,   0,  38,
     41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  11,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,   0,   0,   0,   0,
      0,   0,   0,  44,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  45,  46,  47,  48,  49,  15,  15,  15,  15,  15,  15,  15,  45,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  41,   0,   0,   0,   0,
      0,   0,   0,  50,   0,  49,  47,  51,  52,  47,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  23,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   8,  53,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54,  55,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  56,  31,   0,   0,   0,   0,   0,   0,   0,
     15,  15,  15,  45,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 nfc_quick_check_table_3[288] = {
      0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   3,   0,   0,   0,
      0,   0,   4,   5,   6,   0,   7,   8,   9,  10,   8,  11,   0,   0,  12,  13,
     14,   0,  15,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  17,   0,   0,   0,   0,   0,   0,   0,  18,  19,
     20,   0,  21,   0,   0,   0,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  25,  25,  26,  27,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  29,  30,   0,   0,   0,   8,   0,   0,  31,   0,  32,   0,   0,   0,   0,
      0,   0,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  34,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     25,  25,  25,  25,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 nfc_quick_check_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   5,
      4,   6,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   7,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   8,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
};

UINT32 lookup_nfc_quick_check(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = nfc_quick_check_table_4[block];
    offset = (codepoint >> 7) & 0x1F;
    block = nfc_quick_check_table_3[(block << 5) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = nfc_quick_check_table_2[(block << 4) + offset];
    offset = codepoint & 0x7;
    value = nfc_quick_check_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for NFD_Quick_Check. */

static UINT8 nfd_quick_check_table_1[536] = {
      0,   0,   0,   0,   0,   0,   0,   0, 191, 255, 126,  62, 191, 255, 126, 190,
    255, 255, 252, 255,  63, 255, 241, 126, 248, 241, 243, 255,  63, 255, 255, 127,
      0,   0,   0,   0,   3, 128,   1,   0,   0, 224, 255, 223, 207, 255,  49, 255,
    255, 255, 255, 207, 192, 255,  15,   0,  27,   0,   0,   0,   0,   0,  16,  64,
    224, 215,   1,   0,   0, 252,   1,   0,   0, 124,  24,   0,   0,   0,   0,   0,
    139, 112,   0,   2,   0,   0,   0,   2,   0,   0, 139, 112,   0,   0, 192,   0,
      6,   0, 207, 252, 252, 252,  63,   3,   0,   0,   0,   0, 124,   0,   0,   0,
      5,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  18,   0,
      0,   0,   0, 255,   0,   0,   0,   0,   0,  24,   0, 176,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  72,   0,   0,   0,   0,  78,   0,   0,   0,   0,
      0,  25,   0,  48,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,
      0,  28,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
    129,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0, 116,   0,   0,   0,   0,
      8,  32, 132,  16,   0,   2, 104,   1,   2,   0,   8,  32, 132,  16,   0,   2,
      0,   0,   0,   0,  64,   0,   0,   0,  64,  85,   4,   0,   0,   0,   0,  40,
     11,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255,  11, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   3,
    255, 255,  63,  63, 255, 255, 255, 255,  63,  63, 255, 170, 255, 255, 255,  63,
    255, 255, 255, 255, 255, 255, 223,  95, 222, 255, 207, 239, 255, 255, 220,  63,
      3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64,  12,   0,   0,
      0,   0,   0,  12,   0,  64,   0,   0,   0, 224,   0,   0,   0,   0,   0,   0,
     16,  18,   0,   0,  80,   0,   0,   0, 146,   2,   0,   0,   5, 224,  51,   3,
     51,   3,   0,   0,   0, 240,   0,   0,   0,   0,   0,   0,  15,  60,   0,   0,
      0,   0,   0,   0,   0,   6,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,
      0,  80,  85,  85, 165,   2, 219,  54,   0,   0,  16,  64,   0,  80,  85,  85,
    165,   2, 219,  54,   0,   0, 144,  71, 255, 255, 255, 255,  15,   0,   0,   0,
    255,  63, 229, 127, 101, 252, 255, 255, 255, 255, 255, 255, 255,  63, 255, 255,
    255, 255, 255,   3,   0,   0,   0,   0,   0,   0,   0, 160,   0, 252, 127,  95,
    219, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,   0,   8,   0,   0,
      0,   0,   0,   0,   0, 192,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  88,   0,   0,   0,   0,   0,   0,   0,  12,
      0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0, 192,  31,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 248,   1,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255,  63,   0,   0,   0,   0
};

static UINT8 nfd_quick_check_table_2[304] = {
      0,   0,   0,   1,   2,   3,   4,   5,   6,   0,   0,   0,   0,   7,   8,   9,
     10,  11,   0,  12,   0,   0,   0,   0,  13,   0,   0,  14,   0,   0,   0,   0,
      0,   0,   0,   0,  15,  16,   0,  17,  18,  19,   0,   0,   0,  20,  21,  22,
      0,  23,   0,  24,   0,  22,   0,  25,   0,   0,   0,   0,   0,  26,  27,   0,
     28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  29,  30,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  31,  31,  32,  33,  34,  35,  36,  37,
     38,   0,   0,   0,  39,   0,  40,  41,  42,  43,  44,  45,  46,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,
      0,  48,  49,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  51,   0,
      0,   0,   0,   0,  31,  31,  31,  31,  52,  53,  31,  54,  55,  56,   0,   0,
      0,   0,  57,   0,  58,   0,   0,   0,   0,   0,   0,   0,   0,  59,   0,   0,
      0,   0,  60,   0,   0,   0,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  62,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  63,  64,  65,   0,   0,   0,   0,   0,   0,   0,   0,
     31,  31,  31,  31,  31,  31,  31,  31,  66,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 nfd_quick_check_table_3[112] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   5,   9,   5,  10,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  12,   5,   5,   5,   5,   5,   5,   5,   5,  13,   5,
      5,   5,   5,   5,  14,  15,  16,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,  17,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  18,   5
};

static UINT8 nfd_quick_check_table_4[68] = {
      0,   1,   2,   3,   4,   1,   1,   5,   1,   1,   1,   6,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_nfd_quick_check(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = nfd_quick_check_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = nfd_quick_check_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = nfd_quick_check_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = nfd_quick_check_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for NFKC_Quick_Check. */

static UINT8 nfkc_quick_check_table_1[784] = {
      0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,
      2,   0,   2,   0,   0,   0,   0,   2,   0,   0,   2,   2,   2,   2,   0,   0,
      2,   2,   2,   0,   2,   2,   2,   0,   0,   0,   2,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   2,   0,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0,   0,   0,
      0,   2,   2,   2,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   0,   0,   1,   1,   1,   1,   1,   0,   1,   1,
      1,   1,   1,   1,   1,   0,   0,   1,   0,   1,   0,   1,   1,   0,   0,   0,
      0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,
      1,   0,   0,   0,   0,   1,   1,   0,   1,   1,   0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   2,   2,   1,   2,   2,   1,   0,   0,
      0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   2,   0,   0,   0,   2,   0,
      0,   0,   0,   0,   2,   2,   0,   2,   2,   2,   2,   2,   2,   2,   2,   0,
      2,   2,   2,   0,   2,   2,   0,   0,   0,   0,   0,   1,   1,   1,   0,   0,
      0,   0,   0,   0,   0,   2,   2,   2,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      0,   0,   0,   2,   0,   0,   2,   0,   0,   2,   2,   2,   0,   0,   2,   0,
      0,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   2,   2,   0,   0,
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   0,
      0,   0,   1,   0,   0,   0,   0,   1,   0,   0,   0,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   2,   0,   0,   0,   0,   2,
      0,   0,   0,   2,   0,   2,   2,   2,   2,   2,   0,   0,   0,   0,   0,   0,
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   0,   0,   1,   1,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   2,   2,   2,   0,
      2,   2,   2,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0,   2,
      2,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,
      0,   2,   0,   2,   0,   2,   0,   2,   0,   2,   0,   2,   0,   2,   0,   0,
      0,   2,   0,   2,   0,   2,   2,   2,   0,   2,   0,   2,   0,   2,   2,   0,
      0,   2,   0,   0,   0,   0,   0,   2,   0,   0,   0,   2,   2,   0,   2,   2,
      0,   0,   0,   0,   2,   0,   2,   0,   2,   2,   0,   0,   2,   2,   2,   2,
      2,   2,   2,   2,   0,   2,   2,   2,   0,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   0,   2,   2,   0,   0,   2,   2,   2,   2,   2,   0,   0,
      2,   2,   2,   0,   2,   0,   2,   0,   2,   0,   2,   2,   2,   2,   0,   2,
      2,   2,   0,   2,   2,   2,   2,   2,   2,   0,   0,   0,   0,   2,   2,   2,
      0,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,
      0,   1,   1,   2,   2,   0,   0,   2,   0,   0,   2,   2,   2,   2,   2,   2,
      0,   0,   2,   2,   2,   0,   0,   0,   2,   0,   2,   0,   0,   2,   2,   2,
      2,   0,   2,   0,   0,   2,   2,   0,   0,   0,   0,   0,   0,   2,   0,   2,
      2,   2,   2,   2,   2,   0,   2,   0,   2,   2,   0,   2,   2,   0,   2,   2,
      2,   2,   2,   2,   2,   0,   0,   2,   2,   2,   2,   2,   0,   0,   0,   0,
      2,   2,   2,   0,   2,   0,   2,   2,   0,   2,   2,   2,   2,   2,   0,   2,
      2,   0,   2,   2,   2,   2,   2,   2,   0,   0,   1,   0,   0,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   0,   2,   2,
      0,   0,   2,   0,   0,   2,   2,   0,   0,   2,   2,   2,   2,   0,   2,   2,
      2,   2,   0,   2,   0,   2,   2,   2,   2,   2,   2,   0,   0,   2,   2,   2,
      2,   2,   0,   2,   2,   2,   2,   0,   2,   2,   2,   2,   0,   0,   2,   2,
      0,   2,   2,   0,   2,   0,   0,   2,   0,   2,   0,   2,   0,   0,   0,   0,
      0,   2,   2,   2,   2,   0,   2,   0,   0,   2,   2,   2,   0,   2,   2,   2
};

static UINT8 nfkc_quick_check_table_2[896] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   4,
      0,   0,   0,   0,   0,   0,   5,   6,   1,   7,   0,   0,   0,   0,   0,   6,
      8,   9,   0,   0,   0,   0,  10,   0,   0,   0,   0,   0,   0,   0,  11,   1,
      0,   0,   0,  12,   9,   0,   0,   0,  13,  14,  15,  16,  17,  18,  19,  20,
     21,   0,   0,   0,   0,   0,  22,  23,  24,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  25,   0,   0,   0,  26,   7,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  27,   0,   0,   0,  28,   1,   0,   0,   0,   0,   0,   0,   0,  29,
      0,   0,   0,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30,
      0,   0,  31,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,
      0,   0,   0,  33,   0,   0,   0,   0,   0,   0,  34,  35,   0,   0,   0,   0,
      0,   0,  31,   0,   0,   0,   0,   0,   0,   0,  30,   0,   0,   0,   0,   0,
     36,   0,  37,   0,   0,   0,   0,   0,   0,  38,   0,  31,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  39,   0,   0,   0,   0,  35,   0,   0,   0,   0,
      0,  22,   0,   0,   0,   0,   0,   0,  39,  40,  41,  22,   0,   7,  42,  43,
      7,   0,  39,  40,  41,  22,   0,   7,   0,   0,   0,   0,   0,  30,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  22,   0,   0,   0,   0,  44,  45,  46,   0,
      0,   0,   0,   0,   0,  45,  45,  45,  47,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  48,   0,   0,   0,   0,   0,   0,  49,  11,  50,
     11,  51,  11,  11,  11,  52,   0,   1,   0,   0,   0,  53,  11,  11,  11,  11,
      0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54,  55,
      0,   0,   0,   0,   0,   0,   0,  42,  43,  56,  39,  42,  39,  42,   0,  57,
     11,  52,  58,   0,  49,   6,  59,  60,   6,  43,   6,   6,   0,   0,  61,  11,
     11,  25,  11,   9,   0,   1,   0,   0,  62,  63,  64,  65,  66,  67,  68,  68,
     69,  43,  11,  11,  11,  11,  11,  11,   0,   7,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  24,   1,   0,   0,   0,   0,   0,   0,  70,   0,   0,
      0,   0,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  52,   0,   0,   0,   0,   0,   0,   0,   0,  49,   0,
      0,   0,   0,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35,
      0,   0,   0,   0,   0,   6,   0,   0,   0,   0,   0,   6,   0,   0,   0,   0,
     11,  11,  12,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,  71,  52,
      0,   0,   0,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,
      0,   0,   0,   0,   0,   0,  63,  11,  11,  25,  73,  11,   0,   0,   0,   0,
     11,  11,  11,  25,  11,  11,  11,  11,  11,   0,  11,  11,  11,  11,  11,  25,
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,  74,  43,
      0,   0,   0,   8,   0,   7,   0,   0,  11,  12,  75,  25,  76,  73,  11,  11,
     11,  11,  11,  11,  11,  12,  11,  11,  11,  11,  11,  43,   0,   0,   0,   0,
     25,   0,  53,  77,  11,  11,  25,  78,  79,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  43,   0,   0,   0,  53,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  12,   0,   0,  11,  11,  11,  11,  11,  11,
     11,  11,  73,  11,  11,  11,  11,  11,  11,   0,   0,   0,   0,   0,  11,   9,
      0,   0,  11,  43,   0,   0,  11,  11,  80,  11,  50,  11,  25,  81,  82,  11,
     11,  11,  11,  11,  11,  11,  11,   9,  63,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  25,  73,  73,  73,  74,  25,  25,   0,   0,
     83,  11,  11,  11,  11,  11,  84,  52,   0,   0,   0,   0,   0,   0,   0,  36,
      0,   0,   0,   0,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  85,
      0,   0,   0,   0,   0,  31,   0,   0,   0,   0,   0,   0,   0,   0,  20,   0,
      0,   0,   0,  86,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53,
      1,   0,   0,   0,   0,   0,   0,   0,  11,  11,  87,  11,  11,  11,  11,  11,
     11,  11,  11,  87,  88,  89,  11,  90,  62,  11,  11,  11,  11,  11,  11,  11,
     51,  91,  87,  87,  11,  11,  11,  92,  78,  73,  84,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  12,  11,  11,  11,  11,  93,  11,  11,  11,  11,  11,  11,
     62,  11,  11,  11,  94,  63,  50,  95,  41,  56,  94,  54,  94,  50,  50,  96,
     11,  68,  11,  81,  97,  68,  11,  81,  11,  52,  11,  11,  11,  25,  11,  11,
     11,  11,   0,   0,   0,  74,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
     52,   0,  11,  11,  11,  11,  11,  81,  11,   1,  43,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  11,  43,  11,  11,  11,  12,   0,   0,   0,   0
};

static UINT8 nfkc_quick_check_table_3[832] = {
      0,   0,   1,   0,   2,   3,   0,   4,   0,   0,   5,   6,   7,   8,   9,  10,
      0,   0,   0,   0,   0,   0,  11,   0,   0,  12,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  13,  14,  15,  16,  17,  18,   0,   0,  15,  19,  15,  20,
      0,  21,   0,  22,  15,  20,   0,  23,  24,   0,  24,  25,  26,  27,  28,   0,
     29,   0,   0,  30,   0,  31,  32,  33,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34,   0,   0,   0,
      0,   0,   0,   0,  35,  36,  37,   0,   0,   0,  38,   0,   0,  39,  40,  41,
     42,  43,  44,   0,  45,  46,  47,   0,  48,   0,   0,   0,  49,   0,   0,   0,
      0,  50,  51,  52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  26,  53,   0,  54,   0,   0,   0,   0,
      0,  55,   0,   0,   0,  56,   0,   0,   0,   0,  57,  24,  51,  51,  51,  58,
     59,   0,  60,  61,  62,  51,  63,   0,  64,  65,  51,  51,  51,  51,  51,  51,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,   0,   0,  66,   0,  67,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  68,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  51,  51,  51,  51,  69,  70,  51,  71,  72,  73,  74,  75,
     51,  51,  51,  51,  76,  77,  78,  79,  80,  81,  51,  82,  83,  51,  84,  85,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  86,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  87,   0,  88,   0,   0,   0,   0,   0,   0,   0,  15,  20,   0,   0,
      0,   0,  89,   0,   0,   0,  90,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  91,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  92,  93,  94,   0,   0,   0,   0,   0,   0,   0,   0,
     51,  95,  96,  97,  98,  99,  51,  51,  51,  51, 100,  51,  51,  51,  51, 101,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 102, 103, 104,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 105, 106, 107,   0, 108, 109,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 110,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     51,  51,  51,  51,  51,  51,  51,  51, 111,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 nfkc_quick_check_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   4,   4,   4,   4,   6,
      7,   8,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   9,  10,  11,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  12,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
};

UINT32 lookup_nfkc_quick_check(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = nfkc_quick_check_table_4[block];
    offset = (codepoint >> 6) & 0x3F;
    block = nfkc_quick_check_table_3[(block << 6) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = nfkc_quick_check_table_2[(block << 3) + offset];
    offset = codepoint & 0x7;
    value = nfkc_quick_check_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for NFKD_Quick_Check. */

static UINT8 nfkd_quick_check_table_1[608] = {
      0,   0,   0,   0,   1, 133,  60, 119, 191, 255, 126,  62, 191, 255, 126, 190,
    255, 255, 252, 255,  63, 255, 253, 254, 249, 243, 243, 255,  63, 255, 255, 255,
      3, 128,   1,   0, 240, 255, 255, 223, 207, 255,  63, 255, 255, 255, 255, 207,
    192, 255,  15,   0,   0,   0, 255,   1,   0,   0,   0,  63,  31,   0,   0,   0,
     27,   0,   0,   0,   0,   0,  16,  68, 240, 215,   1,   0,   0, 252,   1,   0,
      0, 124, 127,   0,   0,   0,  55,   2, 139, 112,   0,   2,   0,   0,   0,   2,
      0,   0, 139, 112,   0,   0, 192,   0,   6,   0, 207, 252, 252, 252,  63,   3,
    128,   0,   0,   0, 124,   0,   0,   0,   0,   0, 224,   1,   5,   0,   8,   0,
      0,   2,  18,   0,   0,   0,   0, 255,   0,  24,   0, 176,   0,   0,  72,   0,
      0,   0,   0,  78,   0,  25,   0,  48,   0,   0,  16,   0,   0,  28,   0,   0,
      0,   1,   0,   0, 129,  13,   0,   0,   0,   0,   0, 116,   0,   0,   8,   0,
      0,   0,   0,  48,   0,  16,   0,   0,   8,  32, 132,  16,   0,   2, 232,   3,
      2,   0,   8,  32, 132,  16,   0,   2,  64,   0,   0,   0,   0,   0,   0,  16,
     64,  85,   4,   0,   0,   0,   0,  40,  11,   0,   0,   0,   0, 112, 255, 247,
    255, 191, 255, 255, 255,   7,   0,   1,   0,   0,   0, 248, 255, 255, 255, 255,
    255, 255, 255,  15, 255, 255, 255,   3, 255, 255,  63,  63,  63,  63, 255, 170,
    255, 255, 255,  63, 255, 255, 223, 255, 223, 255, 207, 239, 255, 255, 220, 127,
    255,   7, 130,   0, 112, 128, 216,  80, 128,   3, 128, 128,   0,   0, 243, 255,
    255, 127, 255,  31, 239, 254, 111,  62,  87, 189, 251, 251, 225,   3, 255, 255,
      0,   2,   0,  12,   0,  64,   0,   0,   0, 224,   0,   0,  16,  18,   0,   0,
     80, 176,   1,   0, 146,   2,   0,   0,   5, 224,  51,   3,  51,   3,   0,   0,
      0, 240,   0,   0,  15,  60,   0,   0,   0,   6,   0,   0, 255,   7,   0,   0,
      0,   0, 112,   0,   0, 128,   0,   0,   0,   0,   0, 128, 255, 255,  63,   0,
      1,   0,   0,   0,   0,   0,  64,   7,   0,  80,  85,  85, 165,   2, 219,  54,
      0,   0,  16, 216,   0,   0, 144, 199,   0,   0, 254, 255, 255, 127, 252, 255,
    255, 255, 255, 127, 255,   0, 255, 255,   0,   0,   1,   0,   0,   0,  28,   3,
      0,   0,   0, 240,   0,   2,   0,   0,  15,   0,   0,   0, 255,  63, 229, 127,
    101, 252, 255, 255, 255,  63, 255, 255, 127,   0, 248, 160, 255, 255, 127,  95,
    219, 255, 255, 255, 255, 255,   3,   0,   0,   0, 248, 255,   0,   0, 255, 255,
    255,   0,   0,   0,   0,   0, 255,  31,   0,   0, 255,   3, 159, 255, 247, 255,
    127,  15, 215, 255, 255, 255, 255,  31, 254, 255, 255, 255, 252, 252, 252,  28,
    127, 127,   0,   0, 190, 255, 255, 255, 255, 255, 253,   7,   0,   0,   0,  20,
      0,   8,   0,   0,   0, 192,   0,   0,   0,  24,   0,   0,   0,   0,   0,  88,
      0,   0,   0,  12,   0,   0,   0,   1,   0,   0,   0, 192, 255, 255, 255, 223,
    100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,
     95, 252, 253, 255, 255, 207, 255, 255, 150, 254, 247,  10, 132, 234, 150, 170,
    150, 247, 247,  94, 255, 251, 255,  15, 238, 251, 255,  15, 255,   7, 255, 255,
    255, 127, 255, 255, 255, 255,   0,   0,   7,   0, 255, 255, 255,   1,   3,   0
};

static UINT8 nfkd_quick_check_table_2[480] = {
      0,   0,   0,   0,   0,   1,   2,   3,   4,   5,   6,   7,   0,   8,   9,  10,
     11,  12,   0,   0,   0,  13,  14,  15,   0,   0,  16,  17,  18,  19,  20,  21,
     22,  23,  24,  25,   0,   0,  26,  27,   0,   0,   0,   0,  28,   0,   0,   0,
      0,  29,   0,  30,   0,   0,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  32,  33,   0,   0,   0,  34,   0,   0,  35,  36,   0,   0,   0,   0,   0,
      0,   0,  37,   0,  38,   0,  39,   0,   0,   0,  40,   0,   0,   0,  41,   0,
      0,   0,  39,   0,   0,   0,  42,   0,   0,  43,   0,   0,   0,  43,  44,   0,
     45,   0,  46,  47,  48,  49,   0,   0,   0,  50,   0,   0,   0,   0,   0,  51,
     52,  53,  54,   0,   0,   0,   0,   0,   0,  55,  56,  57,  58,  59,   0,   0,
     59,  59,  59,  59,  60,  59,  59,  61,  62,  59,  63,  64,  59,  65,  66,  67,
     68,  69,  70,  71,  72,  40,   0,   0,  73,  74,  75,  59,  76,  77,  78,   0,
     79,  80,  81,  82,  83,  84,   0,  85,   0,  86,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  59,  59,  59,  59,  87,  45,   0,   0,  88,   0,   0,  51,   0,
      0,   0,   0,  44,   0,   0,   0,   0,   0,   0,   0,  89,   0,   0,   0,   0,
      0,   0,   0,   0,  90,   0,   0,  43,  59,  59,  59,  59,  59,  59,  91,   0,
     92,  93,  94,  95,  96,  94,  95,  97,   0,  98,  59,  59,  99,   0,   0,   0,
    100,  59, 101, 100,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
      0,   0,   0,   0,  44,   0,   0,   0,   0,   0,   0, 102,   0,   0,   0, 103,
      0,   0, 104, 105,   0,   0,   0,   0,  59,  59,  59,  59,  59, 106,   0,   0,
    107, 108,  59, 109,  59,  59,  61,   0, 110, 111, 112,  59,  59, 113, 114,  59,
     59,  64, 115,  59,   4,  59, 116, 117, 118, 115, 119, 120,  59,  59,  59, 121,
    122,  59,  59,  59,  59, 100, 123, 124,   0,   0,   0,   0, 125, 126,   0,   0,
      0,   0,   0,   0, 127, 128,   0,   0,   0, 129,   0,   0,   0,   0,   0,   0,
      0,   0, 130,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 131,   0,   0,
      0,   0,   0,   0,   0, 132,   0,   0,   0, 133,   0,   0,   0,   0,   0,   0,
      0,   0, 134,  15,   0,  58,  92,   0,  59,  59,  65,  59, 135, 136, 137,  59,
    138, 139, 140,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,   7,  59,  59,
     59,  59,  59,  59,  59,  59, 141,  59, 137, 142, 143, 144, 145, 146,   0,   0,
    147, 148, 149,  39, 102,   0,   0,   0, 150,  60, 151,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 118,  64,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 nfkd_quick_check_table_3[320] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   8,   9,  10,  11,  12,  13,  14,
     15,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  16,   7,  17,  18,  19,
     20,  21,  22,  23,  24,   7,   7,   7,   7,   7,  25,   7,  26,  27,  28,  29,
     30,  31,  32,  33,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,  34,  35,   7,   7,   7,  36,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  37,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,  33,  38,  39,  33,  40,  41,  42,
      7,   7,   7,   7,   7,   7,   7,  43,   7,   7,   7,   7,   7,   7,   7,   7,
     44,  45,   7,  46,  47,  48,   7,   7,   7,  49,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  50,   7,   7,  51,  52,  53,  54,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  55,   7,
      7,  56,  57,   7,   7,   7,   7,   7,   7,   7,   7,  58,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,  33,  33,  59,   7,   7,   7,   7,   7
};

static UINT8 nfkd_quick_check_table_4[136] = {
      0,   1,   2,   2,   2,   3,   4,   5,   6,   2,   2,   2,   2,   2,   7,   8,
      2,   2,   2,   2,   2,   2,   2,   9,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_nfkd_quick_check(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = nfkd_quick_check_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = nfkd_quick_check_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = nfkd_quick_check_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = nfkd_quick_check_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Noncharacter_Code_Point. */

static UINT8 noncharacter_code_point_table_1[48] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 192
};

static UINT8 noncharacter_code_point_table_2[48] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   2,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2
};

static UINT8 noncharacter_code_point_table_3[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2
};

static UINT8 noncharacter_code_point_table_4[17] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1
};

UINT32 lookup_noncharacter_code_point(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 16;
    block = noncharacter_code_point_table_4[block];
    offset = (codepoint >> 11) & 0x1F;
    block = noncharacter_code_point_table_3[(block << 5) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = noncharacter_code_point_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = noncharacter_code_point_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Numeric_Type. */

static UINT8 numeric_type_table_1[528] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   0,   0,   0,   0,
      0,   2,   0,   0,   3,   3,   3,   0,   0,   0,   0,   0,   0,   0,   1,   1,
      0,   0,   0,   0,   3,   3,   3,   3,   3,   3,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   3,   3,   3,   3,   3,   3,   3,   3,   0,   0,   0,   0,   0,
      3,   3,   3,   3,   3,   3,   3,   0,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   0,   0,   0,   0,   0,   0,   0,   1,   1,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3,   3,   1,   1,   2,   0,   0,   0,   0,   0,
      2,   0,   0,   0,   2,   2,   2,   2,   2,   2,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   2,   3,   3,   3,   0,   0,   3,   3,   3,
      2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   3,   3,   3,   0,   0,   2,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,   2,
      0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,
      2,   3,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,
      0,   3,   3,   3,   3,   3,   3,   3,   0,   0,   3,   3,   3,   3,   0,   0,
      0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,
      3,   0,   0,   3,   0,   0,   0,   3,   0,   3,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   3,   0,   3,   0,
      0,   0,   0,   0,   0,   0,   3,   0,   0,   3,   0,   3,   0,   3,   0,   0,
      0,   3,   0,   3,   3,   3,   0,   0,   0,   3,   3,   3,   3,   0,   0,   0,
      0,   0,   0,   0,   3,   3,   3,   0,   3,   3,   3,   3,   3,   3,   0,   0,
      0,   3,   0,   3,   0,   0,   0,   0,   0,   0,   3,   3,   0,   0,   0,   0,
      0,   3,   3,   3,   3,   3,   0,   0,   0,   0,   0,   3,   3,   3,   3,   3,
      0,   0,   0,   0,   3,   3,   0,   0,   2,   2,   2,   2,   3,   3,   3,   3,
      0,   0,   0,   0,   0,   3,   3,   0,   0,   0,   0,   0,   0,   3,   3,   3,
      0,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   1,   1,   1,   1,   3,   3,   0,   0,   0,   0,
      1,   1,   0,   3,   3,   3,   3,   3,   3,   3,   3,   3,   0,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   0,   3,   2,   2,   2,   3,   3,   0,   0,   0
};

static UINT8 numeric_type_table_2[952] = {
      0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3,   4,   0,   0,   0,   0,   1,   2,   0,   0,
      1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   1,   0,   0,
      0,   0,   0,   0,   5,   1,   6,   7,   0,   0,   0,   0,   5,   1,   8,   0,
      0,   0,   0,   0,   5,   1,   9,   0,   0,   0,   0,   0,   5,   1,   0,  10,
      0,   0,   0,  10,   5,   1,  11,  12,   0,   0,   1,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   1,  13,  14,   0,   0,   0,   0,   0,   0,  15,  16,  17,
      0,   0,   0,   0,   0,  18,  12,   0,   0,   0,   0,   0,   1,   2,  11,   7,
      5,   1,   0,   0,   0,   0,   0,   0,   0,   0,   1,  19,   0,   0,   0,   0,
      1,   2,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  21,
     22,  21,   0,   0,   0,   0,   0,   0,   0,   0,  11,  11,  11,  11,  11,  11,
     23,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  24,  25,  26,
     11,  22,  24,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27,  28,  29,
      0,   0,   0,   0,   0,   0,  30,  31,  22,  32,  33,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  34,  35,   0,   0,   0,  36,   7,   0,   9,
      0,   0,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,   7,   0,   0,
      0,  11,  36,  11,   0,   0,   0,   0,  11,   7,   0,   0,   0,   0,  36,  11,
     34,   0,   0,   0,   0,   0,   0,   0,  38,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  39,   0,   0,   0,  34,   0,   0,   0,   0,   0,   0,
     40,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34,   0,   0,   0,   0,
      0,  42,  43,   0,   0,   0,   0,  35,  12,   0,   0,  35,   0,  12,   0,   0,
      0,   0,   0,   0,   0,   0,  12,   0,  42,   0,   0,   0,   0,   0,   0,   0,
     44,   0,   0,   0,   0,  45,   0,   0,  46,  42,   0,   0,   0,   0,   0,   0,
     47,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  41,  41,   0,   0,   0,   0,   0,   0,   0,  39,
      0,   0,   0,   0,   0,   0,   0,  18,   0,  48,  12,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  44,   0,  42,   0,   0,   0,   0,   0,   0,
      0,   0,  39,   0,   0,   0,   0,   0,  44,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  44,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,   0,   0,
      0,   0,   0,   0,   0,  44,  38,   0,   0,   0,   0,   0,  41,   0,   0,   0,
     44,  42,   0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,  44,   0,
      0,   0,   0,   0,  18,  11,   0,   0,   0,   0,   0,   0,   0,   0,  49,   0,
      0,   0,   1,   2,   0,   0,   1,   2,   0,   0,   0,   0,   0,  38,  38,  12,
      0,   0,   0,   0,   0,   0,  39,   0,   0,   0,  50,   0,   0,   0,   0,  34,
     35,  11,  11,  11,  11,  11,  14,   0,  11,  11,  11,  11,  11,  11,  11,  12,
      0,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  11,  11,  14,
      0,   0,   0,   0,  14,   0,   0,   0,  41,  39,   0,   0,   0,   0,   0,   0,
      0,   0,  52,   0,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,  36,
      0,   0,   0,   0,  35,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53,
      0,   0,  18,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54,
     11,  11,   8,  11,  11,  11,  11,  11,  55,  12,   0,   0,   0,   0,   0,  56,
      0,   0,   0,  57,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53,   0,   0,
      0,   0,   0,  11,   0,   0,   0,  11,   0,   0,   0,   0,   0,  36,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,  22,  24,  11,  10,
      0,   0,   0,  57,  10,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,   0,
     57,  14,   0,   0,   0,   0,   0,   0,   0,   0,  58,  59,  60,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   5,   1,   0,   0,   1,   2,  36,  11,  17,   0,
      0,   0,   0,   0,   0,   0,   1,  61,   0,   0,   0,   0,   1,  13,   9,   0,
      0,   0,   1,  13,  11,  17,   0,   0,  11,  11,  17,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  10,   0,   0,
      0,   0,   1,  62,   7,   0,   0,   0,  11,  11,  10,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  11,  11,  14,   0,   0,   0,   0,   0,  11,  11,  11,  12,
      0,   5,   1,   1,   1,   1,   1,   1,  35,  11,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  36,  11,  11,  11,  11,  11,  11,  63,  47,   0,
     36,  11,  11,  11,  11,  64,  11,  49,  22,  65,   0,   0,   0,   0,   0,   0,
     41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,   0,   0,   0,
      0,   0,   0,   0,  39,   0,   0,   0,  38,  42,   0,  42,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  39,   0,  34,   0,   0,   0,  41,   0,   0,   0,   0,
      0,   0,  12,   0,   0,   0,   0,   0,   0,   0,   0,  12,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  34,   0,   0
};

static UINT8 numeric_type_table_3[1248] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   0,   1,   1,   1,   4,
      1,   1,   1,   1,   1,   5,   1,   6,   1,   5,   1,   5,   1,   7,   1,   8,
      1,   9,   1,   5,   1,  10,   1,   5,   1,  11,   1,  11,  12,   1,   1,   1,
      1,   4,  11,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  13,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  14,   1,   1,   1,  15,
     11,   1,   1,   1,   1,  16,   1,  17,   1,   1,  18,   1,   1,  11,   0,   1,
      1,  18,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  19,  20,   1,   1,  21,  22,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  23,  24,  25,   1,   1,   1,   1,   1,   1,   1,   1,   1,  26,  27,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,  28,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     29,   1,   1,   1,   1,   1,  30,   1,  31,  32,  33,   1,   1,   1,   1,   1,
     34,   1,  35,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     36,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  37,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,  38,  39,  40,  41,  37,  42,   1,   1,
      1,   1,   1,   1,  43,  44,   1,   1,   1,   1,   1,   1,   1,  45,   1,  46,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  47,   1,   1,   1,   1,
      1,   1,   1,  48,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,  49,   1,  50,  51,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  52,   1,  53,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  54,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  55,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  56,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,  52,   1,   1,   1,   1,   1,   1,
      1,   1,  55,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     57,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,  58,   1,  42,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,  59,  60,   1,  61,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   1,  62,   1,   1,   1,   1,
     63,   1,   1,  11,   4,   1,   1,  64,   1,  11,   1,   1,   1,   1,   1,   0,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,  65,  66,  67,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  11,   1,   1,   1,
      1,   1,   1,   1,  68,  69,  70,   1,   1,   1,   1,  71,  72,  73,   1,  74,
      1,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  75,  76,  77,  78,   1,  79,  80,   1,  81,  82,  83,   1,  84,  85,   1,
      1,   1,   1,  86,   0,   1,   1,   1,   1,  87,   1,   1,  88,  89,   1,  90,
      1,  91,   1,   0,  92,   1,   1,  93,   1,   1,   1,   0,   1,   1,   1,   1,
      1,  11,   1,  11,   1,   1,   1,   1,   1,  11,   1,   4,  94,   1,   1,   1,
      1,   1,   1,  95,   1,  11,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  96,   1,   1,   1,  11,   3,   1,   1,   1,   1,   1,   1,   1,   1,  97,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     98,  99,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   4,   1, 100,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 101,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 102,   1, 103,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 104,
      1,   1,   1,   1,   1,   4,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1, 105,   1,  11,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1, 106, 107,   1, 108,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1, 109,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    110, 111,   1, 112,  59,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  36,   1, 113,   1,   1,   1,   1, 114, 115,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 116,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1, 117,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  47,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1, 118,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1, 116,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 numeric_type_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,   8,
     15,  16,  17,   8,  18,  19,   8,   8,   8,   8,   8,   8,   8,   8,   8,  20,
     21,  22,  23,  24,  25,   8,   8,   8,   8,   8,   8,   8,   8,  26,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  27,   8,  28,  29,  30,  31,
     32,  33,   8,   8,  34,  35,   8,  36,   8,   8,   8,   8,  37,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  38,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_numeric_type(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = numeric_type_table_4[block];
    offset = (codepoint >> 6) & 0x1F;
    block = numeric_type_table_3[(block << 5) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = numeric_type_table_2[(block << 3) + offset];
    offset = codepoint & 0x7;
    value = numeric_type_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Numeric_Value. */

static UINT8 numeric_value_table_1[1584] = {
      0,   0,   0,   0,   0,   0,   0,   0,   2,   3,  46,  65,  88, 105, 115, 121,
    130, 136,   0,   0,   0,   0,   0,   0,   0,   0,  46,  65,   0,   0,   0,   0,
      0,   3,   0,   0,  13,   8,  69,   0,   0,   0,   0,   0,   0,   0,   2,   3,
     46,  65,  88, 105, 115, 121, 130, 136,   0,   0,   0,   0,   6,  19,  66,  13,
     69,  41,   0,   0,   0,   0,   0,   0,   0,   0,  13,   8,  69,   6,  19,  66,
     22,  23,  24,   0,   0,   0,   0,   0,   2,   3,  46,  65,   3,  46,  65,   0,
      7,  14,  73,   9,   4,  68,  15,   0,  22,  23,  24,  13,   8,  69,   6,  19,
     66,   0,   0,   0,   0,   0,   0,   0, 130, 136,   8,  67, 107, 123, 137,  34,
     37,  40,  43,   1,   0,   0,   0,   0,   0,   3,  46,  65,  88, 105, 115, 121,
    130, 136,  22,  49,  74,  90, 110, 116, 125, 131, 138,  23,  25,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  42,  44,  45,   0,   0,   0,   0,   0,   0,   0,
    130, 136,   3,   0,   0,   0,   0,   0,   2,   0,   0,   0,  88, 105, 115, 121,
     18,  21,   4,  10,  47,  15,  48,  70,  89,  16, 108,  19,  72, 109, 124,   3,
      3,  46,  65,  88, 105, 115, 121, 130, 136,  22,  32,  35, 110,  23, 111,  24,
     24, 112,  25,   0,   0, 115, 110, 113,  26,   2,   0,   0,   0,   0,   0,   0,
    136,  22,  32,  35,  36,  38,  39,  41,  42,  44,  45,  49,   3,  46,  65,  88,
    105, 115, 121, 130, 136,  22,  32,  35,  36,  38,  39,  41,  42,  44,  45,  49,
     42,  44,  45,  49,   0,   0,   0,   0,   0,   0,   2,  32,  35,  36,  38,  39,
     41,  42,  44,  45,  49,   3,  46,  65,  88, 105, 115, 121, 130, 136,  22,   2,
      0,   0,   0,   0,   0,   0,   3,  46,  65,  88, 105, 115, 121, 130, 136,  22,
    136,  22,   3,  46,  65,  88, 105, 115, 121, 130, 136,  22,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,
     22,  49,  74,   0,   0,   0,   0,   0,   0,   0,   3,  46,  65,  88,   0,   0,
    136,  22,   0,   0,   0,   0,   0,   0,  22,  49,  74,  90, 110, 116, 125, 131,
      0,  55,  57,  58,  59,  60,  61,  62,  63,  64,  74,  79,  80,  81,  82,  83,
      0,  84,  85,  86,  87,  90,  95,  96,  97,  99, 100, 101, 102, 103, 104, 110,
      0,   0,   0,   0,   0, 105,   0,   0,   0,   0,   0,  46,   0,   0,   0,   0,
      0,   0, 105,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 121,   0,   0,
      3,   0,   0, 121,   0,   0,   0,  25,   0,  65,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 136,   0,   0,   0,   0,   0,   0,  46,   0,   0,   0,
      0,   0,   0,   0, 105,   0,  88,   0,   0,   0,   0,   0,   0,   0,   0,  29,
     22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24,
     65,   0,   0,   0,   0,   0,   0,   0,  23,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31,   0,
      0,  46,   0, 130,   0, 115,   0,   0,   0,  22,   0,  24,  49,  74,   0,   0,
      0,   0,   0,   0,  90,   0,   0,   0,   0,  65,  65,  65,  65,   0,   0,   0,
      0,   0,   0,  88,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 136,  49,
      0,   0,   0,   0,   3,  46,  65,   0,  46,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  22,   0,   0,   0,   0,   0, 130,   0,   0,   0,
      0,   0, 121,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 121,   0,
      0,   0,   0,   0,   0,   0, 136,   0,   0,   0,   0,   0,   0,   0,  23,   0,
      0,   0,   0,   0,   0,   0,  88,   0,   0,   0,   0,   0,  25,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  46,   0,   0,  24,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 115,   0,   0,   0,   0,   0,  23,   0,   0,   0,
    115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,
     65,  88, 105, 115, 121, 130, 136,   2,  13,   8,  69,   6,  19,  66,   0,   0,
      0,   0,   0,  65,   0,   0,   0,   0,   0,   0,   0,  22,   0,   0,   0,   0,
      0,   0,   2,   0,   0,   0,   0,   0,   0, 115,   0, 115,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,
    138,  23,  50,  75,  91, 111, 117, 126, 132, 139,  24,  51,  76,  92, 112, 118,
    127, 133, 140,  25,  52,  77,  93, 113, 119, 128, 134, 141,   0,   0,   0,   0,
     13,   8,   3, 105, 110, 111, 112, 113, 105,  22, 110,  23, 111,  24, 112, 105,
     22, 110,  23, 111,  24,  25, 113,  22,   3,   3,   3,  46,  46,  46,  46, 105,
     22,  22,  22,  22,  22,  74, 110, 110, 110, 110,  23,  75, 111, 111, 111, 111,
    111,  24, 112, 105, 110,   8,   8,  47,  69,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   2,  13,   0,   0,   0,   0, 125, 131, 138,  23,  50,  75,  91, 111,
    117, 126, 132, 139,   0,   0,   0,   0,   3, 105,  22, 110,   0,   0,   0,   0,
      0, 138,   0,   0,   0,   0,   0,   0,   0,   0, 139,   0,   0,   0,   0,   0,
      0,   3,  46,  22,  49,  23,   0,   0,   3,  46,  65,  22,  49,  23,  24,  25,
      0,   3,  46,  65,  88, 105,  22,  49,  46,  65,  88,  88, 105,  22,  49,  23,
      0,   0,   0,   3, 105,  22,  49,  23,   0,   0,   0,   0,   0,   0,   3,  22,
     49,  23,  46,  65,   0,   0,   0,   0,   0,   0,   0,   0,  33,   8,   0,   0,
    136,  22,  49,  74,  90, 110, 116, 125,   0,   0,  23,  50,  75,  91, 111, 117,
    126, 132, 139,  24,  51,  76,  92, 112, 118, 127, 133, 140,  25,  52,  77,  93,
    113, 119, 128, 134, 141,  26,  53,  78,  94, 114, 120, 129, 135, 142,   5,  16,
     13,  10, 106,   8, 122,  47,  69, 108,   3,  46,  65,  88,  22,  49,  23,  24,
      8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 110,   0,
      0,   0,   0,   0,   0,   3,  22,  49,   0,   3,  46,  65,  88,  22,  49,  23,
      0,   0,   3, 105,  22, 110,  23,  24, 131, 138,  23,  50,  75,  91, 111, 117,
    126, 132, 139,   8,  13,  10,  47,   0,   0,   0,   0,   0,   0,   3,  46,  65,
     88, 105,  22,  49,  74,  23,   8,   0,   0,   3,  22,  49,  23,   0,   0,   0,
     88,  22,  49,  23,   0,   0,   0,   0,   0,   0,   3,  46,  65,  88, 105, 115,
    121, 130, 136,  22,  49,  74,  90, 110, 116, 125, 131, 138,  23,  24,   2,   3,
    125, 131, 138,  23,  24,   0,   0,   0, 130, 136,  22,  49,   0,   0,   0,   0,
    125, 131, 138,   0,   0,   0,   0,   0, 130, 136,   3,  46,  65,  88, 105, 115,
    116, 125, 131, 138,  23,   0,   0,   0,  12,   7,  20,  17,  14,  11,  73,  71,
      9,   6,   6,   4,  19,  68,  66,  15,  13,   8,   8,  69,  12,   0,   0,   0,
     65,  88, 105, 115, 121, 130, 136,  88, 105, 115, 121, 130, 136,   3,  46,  65,
     88, 105, 115, 121, 130, 136,   3,  46,  65,  88, 105,  46,  65,  65,  88, 105,
    115, 121, 130, 136,   3,  46,  65,  65,  88, 105,  56,  98,   3,  46,  65,  65,
     88, 105,  65,  65,  88,  88,  88,  88, 115, 121, 121, 121, 130, 130, 136, 136,
    136, 136,  46,  65,  88, 105, 115,   3,  46,  65,  88,  88, 105, 105,  46,  65,
      3,  46,  10,  47, 108,  10,  47,  19,  13,  16,  13,  13,   8,  10,  47,  90,
    110,  88, 105, 115, 121, 130, 136,   0, 130, 136,   0,  22,  23,  25,  27,  29,
     30,  31,   0,   0,   0,   0,   0,   0, 130, 136,  22,  32,  35,  36,  38,  39,
     41,  42,  44,  45,   3,  46,  65,   0,  41,  42,  44,  45,   0,   0,   0,   0,
    131, 138,   3,  46,  65,  88, 105,   3, 105,   0,   0,   0,   0,   0,   0,   0,
    130, 136,   2,   3,  46,  65,  88, 105, 115, 121, 130, 136,   2,   3,  46,  65,
     88, 105, 115, 121, 130, 136,   2,   3, 117, 126, 132, 139,  24,  51,  76,  92,
    112, 118, 127, 133, 140,  25,  52,  77,  93, 113, 119, 128, 134, 141,  26,  53,
     26,  28,  54,   3,  46,  65,  88, 105, 115, 121, 130, 136,   0,  13,   8,  69,
      0,   3,  46,  25,  26,   0,   0,   0,  93, 113, 119, 128, 134, 141,   0,  46,
     91, 117,  51,  25,   8,  16,   0,   0,   2,   2,   3,  46,  65,  88, 105, 115,
    121, 130, 136,   2,   2,   0,   0,   0,   0, 121,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  88,   0,   0,   0,   0,   0,  88,   0,   0,   0,   0,   0,
      0, 105,   0,   0,   0,   0,   0,   0,   0,   0,   0,  74,   0,   0,   0,   0,
      0,   0, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  65,   0,   0,
      0,   0,   0,   0,   0,  88,   0,   0, 136,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 numeric_value_table_2[1008] = {
      0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3,   4,   0,   0,   0,   0,   1,   2,   0,   0,
      1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   6,   0,   0,
      0,   0,   0,   0,   5,   6,   7,   8,   0,   0,   0,   0,   5,   6,   9,   0,
      0,   0,   0,   0,   5,   6,  10,   0,   0,   0,   0,   0,   5,   6,   0,  11,
      0,   0,   0,  12,   5,   6,  13,  14,   0,   0,   1,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   1,  15,  16,   0,   0,   0,   0,   0,   0,  17,  18,  19,
      0,   0,   0,   0,   0,  20,  21,   0,   0,   0,   0,   0,   1,   2,   1,   2,
      5,   6,   0,   0,   0,   0,   0,   0,   0,   0,   1,  22,   0,   0,   0,   0,
      1,   2,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,   2,
      0,   0,  24,  25,  26,  27,  26,  27,  28,  29,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  26,  30,  31,  32,  33,  26,  30,  34,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  35,  36,  37,   0,   0,   0,   0,   0,   0,  38,  39,
     26,  40,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,
     43,   0,   0,   0,  17,   2,   0,  44,   0,   0,  45,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  26,  46,   0,   0,   0,  47,  48,  49,   0,   0,   0,   0,
     26,  46,   0,   0,   0,   0,  50,  51,  52,   0,   0,   0,   0,   0,   0,   0,
     53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54,   0,   0,
      0,  55,   0,   0,   0,   0,   0,   0,  56,  57,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  58,   0,   0,   0,   0,   0,  59,  60,   0,   0,   0,   0,  61,
     62,   0,   0,  63,   0,  64,   0,   0,   0,  52,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  65,   0,  66,   0,   0,   0,   0,   0,   0,   0,
     67,   0,   0,   0,   0,  68,   0,   0,  69,  70,   0,   0,   0,   0,   0,   0,
     71,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  72,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  73,  73,   0,   0,   0,   0,   0,   0,   0,  74,
      0,   0,   0,   0,   0,   0,   0,  75,   0,  76,  77,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  78,   0,  79,   0,   0,   0,   0,   0,   0,
      0,   0,  80,   0,   0,   0,   0,   0,  81,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  82,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  83,
     84,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  85,   0,   0,
      0,   0,   0,   0,   0,  86,  53,   0,   0,   0,   0,   0,   0,   0,  77,   0,
      0,   0,   0,   0,  87,   0,   0,   0,  88,  89,   0,   0,   0,   0,   0,  90,
      0,   0,   0,   0,   0,   0,  91,   0,   0,   0,   0,   0,  38,  92,   0,   0,
      0,   0,   0,   0,   0,   0,  93,   0,   0,   0,   1,   2,   0,   0,   1,   2,
      0,   0,   0,   0,   0,  94,  95,  77,   0,   0,   0,   0,   0,   0,  96,   0,
      0,   0,  97,   0,   0,   0,   0,  98,  99,   6,  47, 100, 101, 102, 103,   0,
    104, 105, 106, 107, 108, 109, 110, 111,   0, 112,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  17,  18, 113, 114,   0,   0,   0,   0, 115,   0,   0,   0,
    116, 117,   0,   0,   0,   0,   0,   0,   0,   0, 118,   0,   0,   0,   0,   0,
      0,   0,   0, 119,   0,   0,   0, 120,   0,   0,   0,   0,  99, 121,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 122,   0,   0, 123, 124,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 125,  26, 126, 127, 128, 129, 130, 131, 132,
    133, 134,   0,   0,   0,   0,   0, 135,   0,   0,   0, 136,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 122,   0,   0,   0,   0,   0, 133,   0,   0,   0, 133,
      0,   0,   0,   0,   0, 137,   0,   0,   0,   0,   0,   0,   0,   0,   0, 138,
      0,   0,   0,   0,  26, 126, 139, 140,   0,   0,   0, 141, 142,   0,   0,   0,
      0,   0, 143,   0,   0,   0,   0,   0, 141, 144,   0,   0,   0,   0,   0,   0,
      0,   0, 145, 146, 147,   6,   0,   0,   0,   0,   0,   0,   0,   0,   5,   6,
      0,   0,   1,   2,  17,  18, 148,   0,   0,   0,   0,   0,   0,   0,   1, 149,
      0,   0,   0,   0,   1,  18, 150,   0,   0,   0,   1, 151, 146, 152,   0,   0,
    153, 154, 155,   0,   0,   0,   0,   0,   6, 156, 157, 158, 159, 160, 161, 162,
    163, 164, 165, 166, 167, 168,   0,   0,   0,   0,   1, 169, 170,   0,   0,   0,
      1, 171, 172,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 171, 173,   0,
      0,   0,   0,   0,  26, 126, 174, 175,   0,   5,   6,   1, 176, 177, 178,   6,
     99,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  18,
    113, 179, 180, 181, 182, 183, 184,   0,  17,  18, 113, 179, 180, 185,  39, 186,
    187, 188,   0,   0,   0,   0,   0,   0, 189,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 190,   0,   0,   0,   0,   0,   0,   0, 191,   0,   0,   0,
      0,   0,   0,   0, 192,   0,   0,   0,   0,   0,   0,   0,   0,  74,   0,   0,
    193,  70,   0,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0, 194,   0, 195,
      0,   0,   0,  57,   0,   0,   0,   0,   0,   0,  77,   0,   0,   0,   0,   0,
      0,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,  94,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 196,   0,   0,   0,   0, 197,   0,   0,   0,   0,   0
};

static UINT8 numeric_value_table_3[1248] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   0,   1,   1,   1,   4,
      1,   1,   1,   1,   1,   5,   1,   6,   1,   5,   1,   5,   1,   7,   1,   8,
      1,   9,   1,   5,   1,  10,   1,   5,   1,  11,   1,  11,  12,   1,   1,   1,
      1,   4,  11,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  13,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  14,   1,   1,   1,  15,
     11,   1,   1,   1,   1,  16,   1,  17,   1,   1,  18,   1,   1,  11,   0,   1,
      1,  18,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  19,   4,   1,   1,  20,  21,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  22,  23,  24,   1,   1,   1,   1,   1,   1,   1,   1,   1,  25,  26,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,  27,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     28,   1,   1,   1,   1,   1,  29,   1,  30,  31,  32,   1,   1,   1,   1,   1,
     33,   1,  34,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     35,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  36,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,  37,  38,  39,  40,  41,  42,   1,   1,
      1,   1,   1,   1,  43,  44,   1,   1,   1,   1,   1,   1,   1,  45,   1,  46,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  47,   1,   1,   1,   1,
      1,   1,   1,  48,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,  49,   1,  50,  51,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  52,   1,  53,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  54,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  55,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  56,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,  57,   1,   1,   1,   1,   1,   1,
      1,   1,  58,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     59,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,  60,   1,  61,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,  62,  63,   1,  64,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   1,  65,   1,   1,   1,   1,
     66,   1,   1,  11,   4,   1,   1,  67,   1,  11,   1,   1,   1,   1,   1,   0,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,  68,  69,  70,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  11,   1,   1,   1,
      1,   1,   1,   1,  71,  72,  73,   1,   1,   1,   1,  74,  75,  76,   1,  77,
      1,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  78,  79,  80,  81,   1,  82,  83,   1,  84,  85,  86,   1,  87,  88,   1,
      1,   1,   1,  89,   0,   1,   1,   1,   1,  90,   1,   1,  91,  92,   1,  93,
      1,  94,   1,   0,  95,   1,   1,  96,   1,   1,   1,   0,   1,   1,   1,   1,
      1,  11,   1,  11,   1,   1,   1,   1,   1,  11,   1,   4,  97,   1,   1,   1,
      1,   1,   1,  98,   1,  11,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  99,   1,   1,   1,  11,   3,   1,   1,   1,   1,   1,   1,   1,   1, 100,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    101, 102,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   4,   1, 103,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 104,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 105,   1, 106,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 107,
      1,   1,   1,   1,   1,   4,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1, 108,   1,  11,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1, 109, 110,   1, 111,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1, 112,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    113, 114,   1, 115, 116,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1, 117,   1, 118,   1,   1,   1,   1, 119, 120,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 121,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1, 122,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 123,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1, 124,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1, 125,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 numeric_value_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,   8,
     15,  16,  17,   8,  18,  19,   8,   8,   8,   8,   8,   8,   8,   8,   8,  20,
     21,  22,  23,  24,  25,   8,   8,   8,   8,   8,   8,   8,   8,  26,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  27,   8,  28,  29,  30,  31,
     32,  33,   8,   8,  34,  35,   8,  36,   8,   8,   8,   8,  37,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  38,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_numeric_value(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = numeric_value_table_4[block];
    offset = (codepoint >> 6) & 0x1F;
    block = numeric_value_table_3[(block << 5) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = numeric_value_table_2[(block << 3) + offset];
    offset = codepoint & 0x7;
    value = numeric_value_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Other_Alphabetic. */

static UINT8 other_alphabetic_table_1[476] = {
      0,   0,   0,   0,  32,   0,   0,   0,   0,   0, 255, 191, 182,   0,   0,   0,
      0,   0, 255,   7,   0, 248, 255, 254,   0,   0,   1,   0,   0,   0, 192,  31,
    158,  33,   0,   0,   0,   0,   2,   0,   0,   0, 255, 255, 192, 255,   1,   0,
      0,   0, 192, 248, 239,  30,   0,   0,   0,   0, 240, 255, 248,   3, 255, 255,
     15,   0,   0,   0,   0,   0,   0, 204, 255, 223, 224,   0,  12,   0,   0,   0,
     14,   0,   0,   0,   0,   0,   0, 192, 159,  25, 128,   0, 135,  25,   2,   0,
      0,   0,  35,   0, 191,  27,   0,   0,  12,   0,   0,  28, 159,  25, 192,   0,
      4,   0,   0,   0, 199,  29, 128,   0, 223,  29,  96,   0, 223,  29, 128,   0,
      0, 128,  95, 255,   0,   0,  12,   0,   0,   0, 242,   7,   0,  32,   0,   0,
      0,   0, 242,  27,   0,   0, 254, 255,   3, 224, 255, 254, 255, 255, 255,  31,
      0, 248, 127, 121,   0,   0, 192, 195, 157,  63,  30,   0, 252, 191,   0,  60,
      0,   0, 192, 255, 255,   1,   0,   0,  96,   0,   0,   0,   0,   2,   0,   0,
    255,  15, 255,   1,   0,   0, 128,  15,   0,   0, 224, 127, 254, 255,  31,   0,
      0,   0,   0, 128,   1, 112,   0,   0,  31,   0,   0,   0,   0,   0, 224, 255,
      7,   0,   0,   0, 254,  51,   0,   0, 128, 255,   3,   0, 240, 255, 127,   0,
    128, 255,  31,   0, 255, 255, 255, 255, 255,   3,   0,   0,   0,   0, 240,  15,
      4,   8,   0,   0, 248,   0,   0,   0,   3,   0,   0,   0,  47,   0,   0,   0,
    192,   7,   0,   0, 128, 255,   7,   0,   0, 254, 127,   0,   8,  48,   0,   0,
      0,   0,   0,  56,   0,   0, 157,  65,   0, 248,  32,   0, 248,   7,   0,   0,
      0,   0,   0,  64,   0,   0, 192,   7, 110, 240,   0,   0, 240,   0,   0,   0,
      0,  24,   0,   0,   0,   0,   0, 255,  63,   0,   0,   0,   0,   0,  24,   0,
      0,   0, 255,   1,   0,   0, 248, 255,   0, 192,   0,   0,   0, 240, 159,  64,
     59,   0,   0,   0,   0, 128,  63, 127,   0,   0,   0,  48,   0,   0, 255, 127,
      1,   0,   0,   0,   0, 248,  63,   0,   0,   0,   0, 224, 255,   7,   0,   0,
      0, 240, 255,   1,   0,   0, 191,  25,   5,   0,   0,   0,   0,   0, 254, 252,
     16,   0,   0,   0, 254,   7,   0,   0,   0,   0, 224, 123,   0,   0, 254,  15,
      0, 252, 255,   0,   0, 128, 127, 127,   0,   0, 252, 255, 255, 254, 127,   0,
      0,   0, 126, 180, 139,   0,   0,   0,   0, 124, 123,   0,   0,   0, 120,   0,
      0, 128, 254, 255, 255, 128,   7,   0,   0,   0,   3,   0, 127, 255, 255, 249,
    219,   7,   0,   0, 128,   0,   0,   0, 255,   3, 255, 255
};

static UINT8 other_alphabetic_table_2[416] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   2,   3,   0,   4,   0,   5,   6,   0,   0,   7,   8,
      9,  10,   0,   0,   0,  11,   0,   0,  12,  13,   0,   0,   0,   0,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  19,  20,  21,  23,  24,  20,  21,  25,  26,
     20,  21,  27,  19,  28,  21,  29,   0,  16,  21,  30,  19,  20,  21,  30,  19,
     16,  21,  31,  19,  20,   0,  32,  33,   0,  34,  35,   0,   0,  36,  35,   0,
      0,   0,   0,  37,  38,  39,   0,   0,   0,  40,  41,  42,  43,   0,   0,   0,
     33,  33,  33,  33,   0,  44,  45,   0,   0,   0,   0,   0,  46,  47,   0,   0,
      0,  48,   0,   0,   0,   0,   0,   0,  49,   0,  50,  51,   0,  52,  53,   0,
     54,  55,  16,   0,  56,  57,   0,  58,   0,  59,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  60,   0,   0,   0,   0,   0,  44,  61,  62,
      0,   0,   0,   0,   0,   0,   0,  61,   0,   0,   0,  63,  21,   0,   0,   0,
     64,  65,   0,   0,  66,  14,  67,  52,   0,  68,  69,   0,  16,  14,   0,   1,
      0,  70,  71,  72,   0,  73,   0,  74,   0,   0,   0,   0,   0,   0,   0,  75,
     76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77,   0,   0,   0,   0,
     78,   0,   0,   0,   0,   0,   0,   0,   0,  79,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  80,   0,   0,  56,  81,  82,  83,  28,  84,  28,   0,
     56,  69,  46,   0,  56,  85,  86,   0,   0,  87,   0,   0,   0,   0,  52,  45,
     16,  21,  22,  19,   0,   0,   0,   0,   0,  55,  88,   0,   0,  10,  66,   0,
      0,   0,   0,   0,   0,  89,  90,   0,   0,  91,  92,   0,   0,  93,   0,   0,
     94,  95,   0,   0,   0,   0,   0,   0,   0,  96,   0,   0,   0,   0,   0,   0,
      0,  97,  98,   0,   0,   0,  99, 100, 101, 102, 103,   0, 104,   0,   0,   0,
      0, 105,   0,   0, 106, 107,   0,   0,   0, 108, 109,   0, 110,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 111,   0,   0, 112,  61, 113,   0,   0, 114,
      0,   0,   0,   0,  76,   0,   0,   0, 115, 116,   0,   0,   0,   0,   0,   0,
      0,   0, 117,   0,   0,   0,   0,   0,   0,  10, 118, 118,  62,   0,   0,   0
};

static UINT8 other_alphabetic_table_3[288] = {
      0,   0,   0,   1,   0,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,
     13,   0,   0,   0,   0,   0,   0,  14,  15,  16,  17,  18,  19,  20,   0,   0,
      0,   0,   0,   0,  21,   0,   0,   0,   0,   0,   0,   0,   0,  22,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  23,   0,  24,  25,  26,  27,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28,   0,   0,   0,   0,
      0,   0,   0,  29,   0,   0,   0,   0,   0,   0,  30,   0,   0,  31,  32,   0,
     33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,   0,  44,  45,  46,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,   0,   0,   0,
     49,   0,   0,   0,   0,   0,   0,   0,   0,  50,   0,   0,   0,   0,   0,   0,
      0,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_alphabetic_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   7,   2,   8,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_other_alphabetic(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = other_alphabetic_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = other_alphabetic_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = other_alphabetic_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = other_alphabetic_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Other_Default_Ignorable_Code_Point. */

static UINT8 other_default_ignorable_code_point_table_1[88] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 128,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,   0,
      0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,
      0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255,   1,
    253, 255, 255, 255,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,
      0,   0,   0,   0,   0,   0, 255, 255
};

static UINT8 other_default_ignorable_code_point_table_2[72] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,
      0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,
      0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,
      0,   0,   0,   0,   0,   0,   6,   7,   8,   0,   9,   9,   0,   0,   0,  10,
      9,   9,   9,   9,   9,   9,   9,   9
};

static UINT8 other_default_ignorable_code_point_table_3[128] = {
      0,   1,   0,   0,   0,   0,   0,   0,   2,   0,   0,   3,   0,   0,   0,   0,
      4,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,
      7,   8,   8,   8,   8,   8,   8,   8,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_default_ignorable_code_point_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_other_default_ignorable_code_point(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = other_default_ignorable_code_point_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = other_default_ignorable_code_point_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = other_default_ignorable_code_point_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = other_default_ignorable_code_point_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Other_Grapheme_Extend. */

static UINT8 other_grapheme_extend_table_1[208] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  64,   0,   0, 128,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   4,   0,  96,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0, 128,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,  32,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 192,   7,   0,
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};

static UINT8 other_grapheme_extend_table_2[96] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   1,   1,
      0,   2,   1,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,
      5,   0,   0,   0,   0,   0,   0,   0,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   7,   0,   0,   0,   0,   0,   0,   1,   0,
      0,   8,   0,   9,   0,   0,   0,   0,   0,   0,  10,   0,   0,   0,   0,   0,
      0,   0,  11,   0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_grapheme_extend_table_3[96] = {
      0,   0,   1,   2,   0,   0,   3,   0,   4,   0,   0,   0,   5,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,
      0,   0,   0,   0,   7,   8,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_grapheme_extend_table_4[68] = {
      0,   1,   1,   2,   3,   1,   1,   4,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   5,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_other_grapheme_extend(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = other_grapheme_extend_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = other_grapheme_extend_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0x7;
    block = other_grapheme_extend_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = other_grapheme_extend_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Other_ID_Continue. */

static UINT8 other_id_continue_table_1[40] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,
    128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 254,   3,   0,
      0,   0,   0,   4,   0,   0,   0,   0
};

static UINT8 other_id_continue_table_2[64] = {
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_id_continue_table_3[64] = {
      0,   1,   1,   1,   2,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 other_id_continue_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_other_id_continue(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = other_id_continue_table_4[block];
    offset = (codepoint >> 10) & 0x1F;
    block = other_id_continue_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = other_id_continue_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = other_id_continue_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Other_ID_Start. */

static UINT8 other_id_start_table_1[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,  96,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   1,   0,  64,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0
};

static UINT8 other_id_start_table_2[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_id_start_table_3[64] = {
      0,   0,   0,   0,   0,   0,   1,   0,   2,   0,   0,   0,   3,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_id_start_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_other_id_start(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = other_id_start_table_4[block];
    offset = (codepoint >> 10) & 0x1F;
    block = other_id_start_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = other_id_start_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = other_id_start_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Other_Lowercase. */

static UINT8 other_lowercase_table_1[144] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   4,
      0,   0,   0,   0,   0,   0, 255,   1,   3,   0,   0,   0,  31,   0,   0,   0,
     32,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0, 240, 255, 255,
    255, 255, 255, 255, 255,   7,   0,   1,   0,   0,   0, 248, 255, 255, 255, 255,
      0,   0,   0,   0,   0,   0,   2, 128,   0,   0, 255,  31,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 255, 255,   0,   0, 255, 255, 255,   3,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  48,   0,   0,   0,  48,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   3,
      0,   0,   0, 240,   0,   0,   0,   0, 185, 255, 255, 255, 255, 255, 253,   7
};

static UINT8 other_lowercase_table_2[80] = {
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   2,   3,   0,   4,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   6,   7,   0,
      0,   8,   9,   0,   0,  10,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,
      0,  12,   0,   0,   0,   0,   0,   0,   0,   0,  13,   0,   0,  14,   0,  15,
      0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,  17,   0
};

static UINT8 other_lowercase_table_3[128] = {
      0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,   2,
      4,   2,   5,   2,   2,   2,   6,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   7,   2,   8,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   9,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 other_lowercase_table_4[68] = {
      0,   1,   2,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_other_lowercase(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = other_lowercase_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = other_lowercase_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = other_lowercase_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = other_lowercase_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Other_Math. */

static UINT8 other_math_table_1[304] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,
      0,   0,  39,   0,   0,   0,  51,   0,   0,   0,  64,   0,   0,   0,  28,   0,
      1,   0,   0,   0,  30,   0,   0,  96,   0,  96,   0,   0,   0,   0,   0,   0,
      0,   0, 255,  31,  98, 248,   0,   0, 132, 252,  47,  62,  16, 179, 251, 241,
    224,   3,   0,   0,   0,   0,   0,   0,   0,   0, 224, 243, 182,  62, 195, 240,
    255,  63, 235,  47,  48,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 176,   0,   0,   0,   1,   0,   4,   0,   0,   0,
      0,   0,   0,   0,   3, 192, 127, 240, 193, 140,  15,   0, 148,  31,   0,   0,
     96,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,  15,  96,   0,   0,
     96,   0,   0,   0, 192, 255,   0,   0, 248, 255, 255,   1,   0,   0,   0,   0,
      0,   0,   0,  15,   0,   0,   0,  48,   0,   0,   0,   0,  10,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  80, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 223, 255, 255, 255, 255, 255, 255, 255, 255, 223, 100, 222, 255, 235,
    239, 255, 255, 255, 255, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,
     95, 252, 253, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63, 255, 255, 255,
    253, 255, 255, 247, 255, 255, 255, 247, 255, 255, 223, 255, 255, 255, 223, 255,
    255, 127, 255, 255, 255, 127, 255, 255, 255, 253, 255, 255, 255, 253, 255, 255,
    247, 207, 255, 255, 255, 255, 255, 255, 239, 255, 255, 255, 150, 254, 247,  10,
    132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 255,  15, 238, 251, 255,  15
};

static UINT8 other_math_table_2[128] = {
      0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      3,   4,   5,   6,   7,   8,   9,  10,   0,   0,   0,   0,  11,   0,  12,  13,
      0,   0,   0,   0,   0,   0,  14,  15,  16,  17,   0,   0,   0,   0,   0,  18,
      0,   0,   0,   0,   0,   0,  19,  20,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  21,   0,   0,  22,   0,   0,   0,
     23,  24,  25,  26,  27,  28,  23,  23,  23,  23,  29,  30,  31,  32,  33,  34,
      0,   0,   0,   0,   0,   0,   0,   0,  35,  36,  37,   0,   0,   0,   0,   0
};

static UINT8 other_math_table_3[64] = {
      0,   1,   1,   1,   1,   1,   1,   1,   2,   3,   4,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   5,
      1,   1,   1,   1,   1,   6,   1,   1,   1,   1,   1,   7,   1,   1,   1,   1
};

static UINT8 other_math_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_other_math(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = other_math_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = other_math_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = other_math_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = other_math_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Other_Uppercase. */

static UINT8 other_uppercase_table_1[80] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255,   0,   0,
      0,   0,   0,   0,   0,   0, 192, 255, 255, 255,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 255, 255, 255,   3, 255, 255, 255,   3, 255, 255,
    255,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_uppercase_table_2[48] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   1,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 other_uppercase_table_3[48] = {
      0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0
};

static UINT8 other_uppercase_table_4[34] = {
      0,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_other_uppercase(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = other_uppercase_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = other_uppercase_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = other_uppercase_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = other_uppercase_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Pattern_Syntax. */

static UINT8 pattern_syntax_table_1[120] = {
      0,   0,   0,   0, 254, 255,   0, 252,   1,   0,   0, 120,   1,   0,   0, 120,
      0,   0,   0,   0, 254,  90,  67, 136,   0,   0, 128,   0,   0,   0, 128,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255,   0, 255, 127,
    254, 255, 239, 127,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255,  63,   0,   0,   0, 240, 255, 255, 255, 255, 255,
     14, 255, 255, 255,   1,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0, 192,
     96,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 pattern_syntax_table_2[80] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      5,   6,   4,   4,   4,   4,   7,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   9,   4,   4,   8,   8,   8,   8,   8,   8,   8,   8,   8,  10,  11,   8,
      8,   8,   4,   4,   4,   4,   4,   4,  12,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,  13,   4,   4,   4,   4,  14,   4,   4,   4,   4,   4,   4
};

static UINT8 pattern_syntax_table_3[96] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      2,   3,   4,   5,   3,   3,   1,   6,   7,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   8,   9
};

static UINT8 pattern_syntax_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_pattern_syntax(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = pattern_syntax_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = pattern_syntax_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = pattern_syntax_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = pattern_syntax_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Pattern_White_Space. */

static UINT8 pattern_white_space_table_1[32] = {
      0,  62,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     32,   0,   0,   0,   0,   0,   0,   0,   0, 192,   0,   0,   0,   3,   0,   0
};

static UINT8 pattern_white_space_table_2[48] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 pattern_white_space_table_3[64] = {
      0,   1,   1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 pattern_white_space_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_pattern_white_space(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = pattern_white_space_table_4[block];
    offset = (codepoint >> 10) & 0x1F;
    block = pattern_white_space_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = pattern_white_space_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = pattern_white_space_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Posix_Alphanumeric. */

static UINT8 posix_alphanumeric_table_1[446] = {
      0,   0, 255,   3, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    195, 255,   3,   0,  31,  80,  32,   0, 223, 188,  64, 215, 251, 255, 191, 255,
      3, 252, 127,   2, 255,   1, 255, 191, 182,   0, 255, 135,   7,   0, 255, 254,
      0, 192, 239,  31, 254, 225,   0, 156,   0, 224,   0, 252,  48,   4, 255, 252,
    255,  31, 255, 126, 240, 255, 248,   3, 255, 239, 255, 223, 225, 255,  15,   0,
    239, 159, 249, 255, 255, 253, 197, 227, 159,  89, 128, 176,   3,  16, 238, 135,
    109, 195, 135,  25,   2,  94,  63,   0, 238, 191, 237, 227, 191,  27,   1,   0,
      0,  30, 238, 159, 159,  25, 192, 176,   2,   0, 236, 199,  61, 214,  24, 199,
    255, 195, 199,  29, 129,   0, 239, 223, 253, 255, 255, 227, 223,  29,  96,  39,
    239, 227,  96,  96,   6,   0, 255, 231, 223,  93, 240, 128, 238, 255, 127, 252,
    251,  47, 127, 128,  95, 255,  12,   0, 127,  32, 214, 247, 175, 255, 255,  59,
     95,  32,   0, 240,   3, 255, 127, 249,   0,  60, 191,  32, 255, 247, 255,  61,
    127,  61,  61, 127,  61, 255,  63,  63, 255, 159, 255, 199,  15, 128,  13,   0,
    207, 255, 128,  16, 255, 127, 255,  15, 255,  63,  31,   0, 128,   0,   0, 128,
      1, 112, 239, 255, 255, 243, 127,   0,   0, 222, 111,   4, 128, 255, 255, 170,
    223,  95, 220,  31, 207,  15,   2, 128, 132, 252,  47,  62,  80, 189, 224,  67,
    192, 255,  31, 120, 255, 128, 127, 127, 224,   0, 254,   3,  62,  31, 127, 224,
    224, 255,   0,  12, 240, 143, 252, 255, 255, 249, 235,   3, 255,   0,  47,   0,
    252, 232, 247, 255,   0, 124,   5,   0,   0,  56,  60,   0, 126, 126, 126,   0,
    127, 248, 248, 224, 127,  95, 219, 255, 248, 255, 223, 255, 252, 252, 252,  28,
    255, 183,  15, 255,  62,   0, 183, 255, 251,  27, 253,   7,  63, 253, 191, 145,
     55,   0, 255, 192, 111, 240, 239, 254, 255,  27,   4,   0, 240,   0,  71,   0,
     30, 192,   0,  20, 159,  64, 127, 189, 129, 224, 187,   7, 179,   0,  63, 127,
      0,  63,  17,   0,  63,   1, 127, 242, 111, 255, 191, 153,  26,   0, 231, 127,
    255,  32, 127, 251, 127, 180, 203,   0, 191, 253, 123,   1, 255, 224,  11,   0,
    239, 111, 255,  67, 100, 222, 255, 235, 191, 231, 223, 223, 255, 123,  95, 252,
     63, 255, 247,  15, 219,   7, 128,  63,   0,  64, 127, 111, 143,   8, 150, 254,
    247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 238, 251
};

static UINT8 posix_alphanumeric_table_2[1904] = {
      0,   0,   0,   1,   2,   3,   2,   3,   0,   0,   4,   5,   6,   7,   6,   7,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   8,   9,  10,   0,
      0,   0,   0,   0,  11,   0,   0,  12,  13,   6,  14,   6,   6,   6,   6,  15,
      6,   6,   6,   6,   6,   6,   6,   6,  16,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   2,   6,  17,   6,   6,  18,   0,   0,  19,  20,   6,  21,  22,
      0,   3,   6,   6,   6,  23,  24,   6,   6,   6,   6,   6,   6,  25,  26,  27,
      0,   6,   6,   6,  28,   6,   6,   6,   6,   6,   6,   9,  29,   6,   3,  30,
      6,  31,  32,   0,   6,  18,   3,   6,  33,   0,   6,   6,   1,  34,  35,   6,
      6,   6,   6,  36,  37,  38,  39,   2,  40,  41,  42,  43,  44,  45,  39,  46,
     47,  41,  42,  48,  49,  50,   0,  51,  52,  14,  42,  53,  54,  55,  39,  56,
     57,  41,  42,  53,  58,  59,  39,  60,  61,  62,  63,  64,  65,  66,   0,   0,
     67,  68,  42,  69,  70,  71,  39,   0,  67,  68,  42,  72,  70,  73,  39,  74,
     37,  68,   6,  75,  76,  77,  39,  29,  78,  79,   6,  80,  81,  82,   0,  83,
      2,   6,   6,   3,  84,   0,   0,   0,  85,   6,  86,  87,  88,  89,   0,   0,
     55,   0,   0,   0,  23,   6,  32,   2,  90,  23,   6,  32,   0,   0,   0,   0,
      6,   6,   6,  91,   0,   6,   6,   6,   6,  92,   6,   6,  93,   6,   6,  94,
      6,   6,   6,   6,  95,  96,   6,   6,  95,   6,   6,  97,  98,   7,   6,   6,
      6,  98,   6,   6,   6,   3,   0,   0,   6,   0,   6,   6,   6,   6,   6,  99,
      2,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6, 100,   6,   2,   3,   6,   6,   6,   6, 101,  18,
      6, 102,   6,  39,   6,  39,  37, 103,   6,   6,   6, 104,  18, 105,   0,   0,
      0,   0,   6,   6,   6,   6,   6,  18,   6,   6,   3,   6,   6,   6,   6,  51,
      6, 106, 107,  18,   0,   6, 108, 109,   6,   6, 107,   6,   1,   0,   0,   0,
      6, 107,   6,   6,   6, 106,   2, 109,   0,   0, 110, 111, 112,   0,   0,   0,
      6,   6,   6, 113,  25,   0,   0,   0,   6,   6, 114,  29,   6,   6,  15,   9,
      6,   6,   6, 115,  28,  29,   6, 108,  18,   6,   6,  75,   0,   0, 116, 117,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0, 118, 109,
      6,  99,   6,   6,  99, 119,   6, 108,   6,   6,   6, 120, 121, 122,  32, 121,
      0,   0,   0,   0,   0,   0,   0, 123,   0,  32,   0,   0,   0,   0,   0,   0,
    124, 125, 126, 114, 127,   0,   6,   6,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   6,   6,   1,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 129,  83,
      6,   6,  93,   6,   6,   6, 130,   0,   6, 115, 131, 131, 131, 131,   6,   6,
      0,   0, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    132,   0, 133, 134,   2,   6,   6,   6,   6, 135,   2,   6,   6,   6,   6,  94,
    136,   6,   6,   2,   6,   6,   6,   6, 106,   0,   6,   6,   0,   0,   0,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,  32,   0,   0,   0,   0,   6,   6, 108,
     32,   6, 137,   0,   6,   6, 106, 138,   6,   6,   6,   6,   6,   6,   6,   0,
      0, 118, 139,   6,   6,   6,   6,   6, 140,   6,   6,   6,   3, 141,   0, 139,
     15,   6, 142,   0,   6,   6,   6,  39,   6,   6,   6,   6, 143,   0,   0, 144,
     29,   6,   3,   6,   6,  22,   6,  32,   6,   6,   6, 145, 111,   0,   6, 146,
      6,   6,   6, 115, 108,   0,   6,  79,   6,   6,   6, 106, 147, 148,   6, 149,
    150, 151, 131,   6,   6,  94,   1,   6,   6,   6,   6,   6,   6,   6,   3,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  39,   6, 152,   6,   6, 107,
      6,   6,   6,   6,   6,   6, 108,   6,   6,   6,   6,   6,   6,   1,   0,   0,
    115, 153,  42, 154, 155,   6,   6,   6,   6,   6,   6,   9,   0, 156,   6,   6,
      6,   6,   6, 108,   0,   6,   6,   6,   6, 139,   6,   6, 142,   0,   0, 107,
      0,   0,   0,   0,   0,   0,   0, 157,   6,   6,   6,   6,   6,   6,   6,  32,
      0,   0,   2,   3,   2,   3, 128,   6,   6,   6,   6, 106, 158, 159,   0,   0,
     36,   6,   7, 160, 108, 108,   0,   0,   6,   6,   6,   6,   6,   6,   6,   3,
      0,   0,   0,   0,   6,   6,   6, 109,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,  32,   6,   6,   6,  55,   0,   0,
      6,   6,  28,   6,   3,   6,   6,   3,   6, 108,   6,   6, 161, 162,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6, 108,   0,   6,   6, 161,   6, 107,
      6,   6, 142,   6,   6,   6,  39,  94,  94, 163,  14, 164,   0,   0,   0,   0,
      6,   6,   6, 115,   6,  51, 142,   0,  15,   6,   6, 165,   0,   0,   0,   0,
    166,   6,   6, 167,   6,  51,   6, 115,   6, 106,   0,   0,   0,   0,   6, 168,
      6,  51,   6,   1,   0,   0,   0,   0,   6,   6,   6, 169,   0,   0,   0,   0,
    170, 171,   6,  51,   0,   0,   6,  32,   6,  32,   0,   0,  23,   6, 109,   0,
      6,   6,   6,  51,   6,  51,   6,  22,   6,   9,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,  18,   0,   0,   0,   6,   6,   6,  22,   6,   6,   6,  22,
      6,   6, 142,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,   6, 172,   9,   0,   0,   0,   0,
      6,  32, 110,   6,  51,   0,   0,   6,   9,   0,   0,   6, 109,   0,   6, 115,
      6,   6,   6,   6,  51,   0,   0, 162, 139,   6,   6,  18, 173,   6,  18,   0,
      6,   6,   6,  22, 174,   6,   6, 175,   6,   6,   6,   6, 176, 177,   0,   0,
      6,  14,   6, 178,   0,   0,   0,   0, 179,  19,  18,   6,   6,   6,  18,   0,
     40,  41,  42,  53,  58, 180,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6, 181, 111,   9,   0,   6,   6,   6,   6, 182,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,   6,   6, 183,   0, 184,   0,   0,
      6,   6,   6, 106, 185,   0,   0,   0,   6,   6,   6, 186,   0,   0,   0,   0,
      6,  75,   3,   0, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,  18,   0,   0,   0,   0,   0,   0,   6,   6,   6,   6,   0, 111,
    187, 188,   6, 189,  22,   0,   0,   0,   0,   0,  31,   6,   6,  31, 190,   0,
      6,   6,   6, 191,   0,   6,   6,   6,   6, 192,   0,   6,   6,   6,   6,  18,
     42,   6,   6, 131,  55,   0,   0, 139,   6, 139,  23, 115,   0,   0,   0,   0,
    193,   6,   6, 194, 195,   0, 196,   6, 106, 197,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6, 115,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   1,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6, 106,   0,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   6,   6,   6,   6,   6,  55,
      6,   6, 106,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,  18,   6, 106,   0,   6,   6,   6,   6, 106,   0,   6, 108,   0,
      6,   6,   6,   0,  39,   0, 156, 198,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   6,   6,   6,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,  21,   6,   6,   6, 130,   6,   0,   0,   0,   0, 199,   9,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 142,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  51,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 200,
      6,   6,  22,   0,   0,  22, 174,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 107,
      6,   6,   6,   6,   6,   6,   3,  32,  18, 201,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6, 157,   6,   6,   6,  37, 202, 203, 113,   6,   6,   6,
    204, 205,   6, 206, 207,  68,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 208,   6,  68,  94,   6,  94,
      6, 157,   6, 157, 106,   6, 106,   6,  42,   6,  42,   6, 209,   0,   0,   0,
      6, 106,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7, 140, 210,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,  32, 211, 212,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   6, 108,   0,   6,   6, 107,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 213, 106,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 109,   0,   0,   0,
      6,   6,   6,   6, 214,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    113,   6, 215, 216, 217, 218, 219, 220, 221, 107, 222, 107,   0,   0,   0,   0,
      0,   0,   0,   6,   1,   6,   1,   6,   1,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,
      6,   6,   6,  18,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6, 108,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   9,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  55,   0,
      6, 108,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 posix_alphanumeric_table_3[448] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  39,   1,  40,  41,  42,  43,  44,  45,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  46,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  47,  48,   1,  49,  50,  51,
     52,  53,  54,  55,  56,  57,   1,  58,  59,  60,  61,  62,  63,  64,  65,  66,
     67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  31,  78,  79,  80,  81,
      1,   1,   1,  82,  83,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  85,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  95,
      1,  96,  97,  31,  31,  31,  31,  31,  31,  31,  31,  31,  98,  31,  31,  31,
     31,  31,  31,  31,  99, 100, 101, 102,  31,  31,  31,  31,  31,  31,  31, 103,
    104, 105, 106,  31,  31,  31,  31, 107, 108, 109,  31,  31,  31,  31, 110,  31,
     31, 111,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 112,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 113, 114,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 115,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 116,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 117,  31,  31,  31,  31,  31,
      1,   1,   1, 118,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 posix_alphanumeric_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,   8,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_posix_alphanumeric(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = posix_alphanumeric_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = posix_alphanumeric_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0xF;
    block = posix_alphanumeric_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = posix_alphanumeric_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Posix_Digit. */

static UINT8 posix_digit_table_1[32] = {
      0,   0,   0,   0,   0,   0, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 posix_digit_table_2[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 posix_digit_table_3[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 posix_digit_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_posix_digit(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = posix_digit_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = posix_digit_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = posix_digit_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = posix_digit_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Posix_Punct. */

static UINT8 posix_punct_table_1[696] = {
      0,   0,   0,   0, 254, 255,   0, 252,   1,   0,   0, 248,   1,   0,   0, 120,
    254, 219, 211, 137,   0,   0, 128,   0,  60,   0, 252, 255, 224, 175, 255, 255,
      0,   0,  32,  64, 176,   0,   0,   0,   0,   0,  64,   0,   4,   0,   0,   0,
      0,   0,   0, 252,   0, 230,   0,   0,   0,   0,   0,  64,  73,   0,   0,   0,
      0,   0,  24,   0, 192, 255,   0, 232,   0,  60,   0,   0,   0,   0,  16,  64,
      0,   2,   0,  96, 255,  63,   0,   0,   0,   0, 192, 195,   0,   0, 255, 127,
      0,   1,   0,   0,  48,   0,   1,   0,   0,   0,  12,  44,   0,   0,   3,   0,
      0,   0,   1,   0,   0,   0, 248,   7,   0,   0, 128, 128,  16,   0,   0,   0,
      0, 128,   0,   0,   0,   0,   0,   2,   0,   0,  16,   0,   0,   0,   0, 128,
      0, 128,   0,  12, 254, 255, 255, 252,   0,   0,  80,  61,  32,   0,   0,   0,
      0,   0,   0, 192, 191, 223, 255,   7,   0, 252,   0,   0,   0,   0,   0,   8,
    255,   1,   0,   0,   0,   0, 255,   3,   1,   0,   0,   0,   0,  96,   0,   0,
      0,   0,   0,  24,   0,  56,   0,   0,   0,   0,  96,   0,   0,   0, 112,  15,
    255,   7,   0,   0,  49,   0,   0,   0, 255, 255, 255, 255, 127,  63,   0,   0,
    255,   7, 240, 127,   0,   0,   0, 240,   0,   0,   0, 248, 255,   0,   8,   0,
      0,   0,   0, 160,   3, 224,   0, 224,   0, 224,   0,  96,   0,   0, 255, 255,
    255,   0, 255, 255, 255, 255, 255, 127,   0,   0,   0, 124,   0, 124,   0,   0,
    123,   3, 208, 193, 175,  66,   0,  12,  31, 188,   0,   0,   0,  12, 255, 255,
    127,   0,   0,   0, 255, 255,  63,   0,   0,   0, 240, 255, 255, 255, 207, 255,
    255, 255, 191, 255, 224,   7,   0, 222, 255, 127, 255, 255, 255, 255, 255,  63,
    255, 255, 255, 251, 255, 255,  15,   0,   0,   0, 255,  15,  30, 255, 255, 255,
      1,   0, 193, 224,   0,   0, 195, 255,  15,   0,   0,   0,   0, 252, 255, 255,
    255,   0,   1,   0, 255, 255,   1,   0,   0, 224,   0,   0,   0,   0,   8,  64,
      0,   0, 252,   0, 255, 255, 127,   0,   3,   0,   0,   0,   0,   6,   0,   0,
      0,  15, 192,   3,   0,   0, 240,   0,   0, 192,   0,   0,   0,   0,   0,  23,
    254,  63,   0, 192,   0,   0, 128,   3,   0,  12,   0,   0,   0,   8,   0,   0,
      0,   2,   0,   0,   0,   0, 252, 255,   7,   0,   0,   0, 255, 255,   0,   0,
    255, 255, 247, 255, 127,  15,   0,   0,  63,   0,   0,   0, 127, 127,   0,  48,
      0,   0, 128, 255,   0,   0,   0, 254, 255, 115, 255,  31, 255, 255, 255,  31,
      0,   0, 128,   1,   0,   0, 255,   1,   0,   0, 127,   0,   0,   0,   0,  30,
      0,  32,   0,   0,   0,   0, 224,   3, 192,   3,   0,   0, 128,  63,   0,   0,
      0,   0,   0, 216,   0,   0,  48,   0, 224,  33,   0, 232,   0,   0,   0,  63,
      0, 248,   0,  44,  64,   0,   0,   0, 254, 255, 255,   0,  14,   0,   0,   0,
    255,  31,   0,   0, 112,   0,   0,   0,   0,   0,   0, 220,  62,   0,   0,   0,
      0,   0, 224, 255, 255, 255,   3, 128,   0,   0,  31,   0,   0,   0,   6,   0,
      0,   0,  32,   0,  48,   0,   0,   0,   0,   0, 128,   7,   0,   0,   0, 144,
    127, 254, 255, 255,  31,  28,   0,   0,  24, 240, 255, 255, 255, 195, 255, 255,
     35,   0,   0,   0,   2,   0,   0,   8,   8,   0,   0,   0,   0, 224, 223, 255,
    239,  15,   0,   0,   0,  16,   1,   0,   0,  64,   0,   0, 255,  15, 255, 255,
    255, 127, 254, 255, 254, 255, 254, 255,   0, 224, 255, 255, 192, 255, 255, 255,
      7,   0, 255, 255, 255, 255, 255,  15, 255,   1,   3,   0, 255, 255, 255, 224,
    255,  31, 255,  31, 255, 255, 255,   1, 255,  15,   1,   0, 255,   0, 255,   3,
    255,  63,   3,   0, 255,  63,  31,  31, 127,   0, 255, 255, 255,  31, 255,   7,
     63,   0, 255,   3, 255,   0, 127,   0
};

static UINT8 posix_punct_table_2[824] = {
      0,   1,   2,   3,   0,   4,   5,   5,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   6,   7,   0,   0,   0,   8,   9,   0,   0,  10,
      0,   0,   0,   0,  11,   0,   0,   0,   0,   0,  12,   0,  13,  14,  15,  16,
     17,   0,   0,  18,   0,   0,  19,  20,  21,   0,   0,   0,   0,   0,   0,  22,
      0,  23,  14,   0,  24,   0,   0,   0,   0,   0,   0,  25,   0,   0,   0,  26,
      0,   0,   0,  10,   0,   0,   0,  27,   0,   0,   0,  28,   0,   0,   0,  29,
      0,   0,   0,  30,  31,   0,   0,   0,   0,   0,  32,  33,   0,   0,   0,  34,
      0,  35,  36,   0,   0,   0,   0,   0,  37,  38,   0,   0,  39,  40,  41,   0,
      0,   0,  42,   0,  40,   0,   0,  43,   0,   0,   0,  44,  45,   0,   0,   0,
     46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,  48,   0,   0,  49,
      0,  50,   0,   0,   0,   0,  51,   0,  52,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  53,   0,   0,   0,  40,  54,  40,   0,   0,   0,   0,  55,   0,   0,
      0,   0,  12,  56,   0,   0,   0,  57,   0,  58,   0,  40,   0,   0,  59,   0,
      0,   0,   0,   0,   0,  60,  61,  62,  63,  64,  65,  66,  67,  54,  46,   0,
     68,  69,  70,   0,  71,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,
     54,  72,  52,   0,  57,  73,   0,   0,  54,  54,  54,  73,  74,  54,  54,  54,
     54,  54,  54,  75,  76,  54,  54,  54,   0,   0,   0,   0,   0,   0,   0,  77,
      0,   0,   0,  28,   0,   0,   0,   0,  54,  78,  79,   0,  80,  54,  54,  81,
     54,  54,  54,  54,  54,  54,  73,  82,  83,  84,   0,   0,  48,  46,   0,  43,
      0,   0,   0,   0,  85,   0,  54,  86,  65,  87,  88,  54,  87,  89,  54,  54,
      0,   0,   0,   0,   0,   0,  54,  54,   0,   0,   0,   0,  63,  54,  72,  40,
     90,   0,   0,  91,   0,   0,   0,  92,  93,  94,   0,   0,  95,   0,   0,   0,
      0,  96,   0,  97,   0,   0,  98,  99,   0,  98,  35,   0,   0,   0, 100,   0,
      0,   0,  57, 101,   0,   0,  40,  27,   0,   0,  43, 102,   0,   0,   0, 103,
      0, 104,   0,   0,   0, 105, 106,   0,   0,  40, 107,   0,   0,   0,  32,  57,
     45,  63, 108, 109,   0,   0,   0,   0,   1,   2,   2, 110,   0,   0,   0, 111,
    106, 112,   0, 113, 114,  46,  63, 115,   0,   0,   0,   0,  35,   0,  28,   0,
      0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   5, 116,   0,   0,   0,   0,
     35,  35,   0,   0,   0,   0,   0,   0,   0,   0, 117,  35,   0,   0,  24, 118,
      0, 113,   0,   0, 119,   0,   0,   0,   0,   0,   0,   0,   0, 120,   0,   0,
      0,   0, 121,   0, 122,   0,   0,   0,   0,   0, 123,   0,   0, 124,  94,   0,
      0,   0,  86, 125,   0,   0, 126,   0,   0, 127,   0,   0,   0, 104,   0,   0,
      0,   0, 128,   0,   0,   0, 129,   0,   0,   0,   0,   0,   0,   0, 130,   0,
      0,   0, 131, 132,   0,  33,   0,   0,   0,  57,   0,   0,   0,   0,   0,   0,
      0,  43,   0,   0,   0,   0,   0,   0,   0,   0, 133,   0,   0,   0,   0,  11,
      0,  35,  72,   0, 134, 106,   0,   0,   0,   0, 135,  27,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 116,   0,   0,   0,   0,   0,   0, 136, 137,
      0,   0,   0, 138,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 139,
      0,   0,   0,  98,   0,   0,   0, 140,   0, 112, 141,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 142,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,
      0,   0,   0,   0, 143,   0,   0,   0,   0,   0,  63,  54,  54,  54,  86,   0,
     54,  54,  54,  54,  54,  54,  54,  73,  54, 144,  54, 145, 146, 147,  54,  52,
     54,  54, 148,   0,   0,   0,   0,   0,  54,  54,  93,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 149,  43, 140, 140,  32,  32, 104, 104, 150,   0,
      0, 142,   0, 151, 152,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  35,   0,   0,  40,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 153,   0,   0,   0, 154,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  27,  54, 155,  54,  54,  81, 156, 157,  73,
    158, 107,  42,  42,  87,  21,   0, 159, 160, 161, 162, 110,   0,   0,   0,   0,
     54,  54,  54,  54,  54,  54, 163, 164,  54,  54,  54,  81,  54,  54, 165, 166,
    155,  54, 167,  54,  64, 168,   0,   0,  54,  54,  81, 169, 170, 171, 172, 173,
     54,  54,  54,  54, 108,  54,  52,   0
};

static UINT8 posix_punct_table_3[384] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,   1,  17,  18,   1,  19,  20,  21,  22,  23,  24,  25,   1,   1,  26,
     27,  28,  29,  29,  30,  29,  29,  31,  29,  29,  29,  32,  33,  34,  35,  36,
     37,  38,  39,  29,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  40,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  41,   1,  42,  43,  44,  45,  46,  47,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  48,   1,  49,  50,  51,
      1,  52,   1,  53,   1,  54,   1,   1,  55,  56,  57,  58,   1,   1,  59,  60,
     61,  62,  63,   1,  64,  65,  66,  67,  68,  69,  70,   1,  71,   1,  72,  73,
      1,   1,   1,   1,  74,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  75,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  76,  77,   1,   1,  78,  79,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  80,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  81,
     82,  83,  84,  85,   1,   1,  86,  87,  29,  29,  88,   1,   1,   1,   1,   1,
      1,  89,  90,   1,   1,   1,   1,   1,   1,  91,   1,   1,  92,  93,  94,   1,
     95,  96,  97,  29,  29,  29,  98,  99, 100,  29, 101, 102,   1,   1,   1,   1
};

static UINT8 posix_punct_table_4[136] = {
      0,   1,   2,   3,   3,   4,   3,   5,   6,   7,   3,   8,   3,   9,  10,  11,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3
};

UINT32 lookup_posix_punct(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = posix_punct_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = posix_punct_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = posix_punct_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = posix_punct_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Posix_XDigit. */

static UINT8 posix_xdigit_table_1[32] = {
      0,   0,   0,   0,   0,   0, 255,   3, 126,   0,   0,   0, 126,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 posix_xdigit_table_2[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 posix_xdigit_table_3[32] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 posix_xdigit_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_posix_xdigit(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = posix_xdigit_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = posix_xdigit_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = posix_xdigit_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = posix_xdigit_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Prepended_Concatenation_Mark. */

static UINT8 prepended_concatenation_mark_table_1[96] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,
      0, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  32,   0,  32,   0,   0,   0,   0,   0,   0
};

static UINT8 prepended_concatenation_mark_table_2[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3,   0,
      0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 prepended_concatenation_mark_table_3[48] = {
      0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   3,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 prepended_concatenation_mark_table_4[34] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_prepended_concatenation_mark(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = prepended_concatenation_mark_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = prepended_concatenation_mark_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = prepended_concatenation_mark_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = prepended_concatenation_mark_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Print. */

static UINT8 print_table_1[364] = {
      0,   0, 255, 255, 255, 127, 255, 252, 240, 215, 251, 255, 254, 255, 127, 254,
    255, 231, 255,   0, 255, 135,  31,   0, 255, 191,   3,   0, 255,  63, 255,  79,
    255,   7,   3, 255, 239, 159, 249, 255, 255, 253, 197, 243, 159, 121, 128, 176,
    207, 255, 238, 135, 109, 211, 135,  57,   2,  94, 192, 255, 127,   0, 238, 191,
    237, 243, 191,  59,   1,   0,   3, 254, 238, 159, 159,  57, 224, 176, 236, 199,
     61, 214,  24, 199, 255, 195, 199,  61, 129,   0, 255, 223, 253, 255, 255, 243,
    223,  61,  96,  39, 128, 255, 239, 243,  96,  96,   6,   0, 223, 253, 240, 255,
    238, 255, 127, 252, 251,  47, 127, 132,  95, 255,  28,   0, 255,  15, 214, 247,
    175, 255,  95,  63, 255, 254, 255,  31, 191,  32, 255,  61, 127,  61,  61, 127,
     61, 255, 127, 255, 255,   3,  63,  63, 255,   1,  63, 128,  15,   0,  13,   0,
     63,   0, 241, 255, 255, 199, 255, 207, 255, 159,  15, 240, 255, 248, 255, 227,
    255, 170, 223, 255, 207, 239, 220, 127,   0, 128, 243, 255, 191, 255,  15, 254,
    255, 128,   1, 128, 127, 127, 255, 251, 224, 255, 235,   3, 252, 255,  63, 192,
     15, 128,   7,   0,   0, 248, 126, 126, 126,   0, 127, 248, 248, 224, 127,  95,
    219, 255, 248, 255, 247, 255, 127,  15, 252, 252, 252,  28,   0,  62, 255, 239,
    255, 183, 135, 255, 143, 255,  15, 224,  15, 255, 255, 247, 183, 255, 251,  27,
    253,   7,  63, 253, 191, 145,  55, 248, 255, 143, 255, 131, 255, 240, 111, 240,
    239, 254,  63, 135,  63, 254,  63, 255,   7, 255,   3,  30,   0, 254,   7, 252,
    255,  59,   7,  32, 127, 189, 237, 251, 129, 224, 207,  31,   7, 128, 127, 242,
    111, 255, 191, 249, 127, 251, 127, 180, 191, 253, 251,   1,   3, 128, 255, 224,
    239, 111, 240,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223, 255, 123,
     95, 252, 255, 249, 219,   7, 127, 111, 159, 255, 150, 254, 247,  10, 132, 234,
    150, 170, 150, 247, 247,  94, 238, 251,  31,  31,   2,   0
};

static UINT8 print_table_2[1632] = {
      0,   0,   1,   1,   1,   1,   1,   2,   0,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,
      4,   1,   5,   1,   1,   1,   1,   1,   1,   1,   1,   6,   1,   7,   1,   1,
      8,   6,   1,   1,   9,   1,  10,  11,  12,   1,   1,   1,   8,   1,   1,   1,
      1,   1,   1,  13,   1,   1,   1,   8,   1,   1,  14,   2,   1,  15,  16,   1,
      2,  17,   1,   1,   1,   1,   1,   1,  18,  19,  20,  21,  22,  23,  24,   2,
     25,  19,  20,  26,  27,  28,  29,  30,  31,   5,  20,  32,  33,  34,  24,  35,
     36,  19,  20,  32,  37,  38,  24,   9,  39,  40,  41,  42,  43,  44,  29,  16,
     45,  46,  20,  47,  48,  49,  24,  50,  45,  46,  20,  51,  48,  52,  24,  53,
     45,  46,   1,   1,  54,  55,  24,   1,  56,  57,   1,  58,  59,  60,  29,  61,
      6,   1,   1,  10,   1,  62,   0,   0,  63,   1,  64,  14,  65,  47,   0,   0,
      1,   1,   1,   1,  66,   1,  67,   6,   1,  66,   1,  45,  45,  16,   0,   0,
      1,   1,   1,   1,  68,   1,   1,   1,   1,   1,   1,   1,  69,  70,   1,   1,
     69,   1,   1,  71,  72,  73,   1,   1,   1,  72,   1,   1,   1,   8,   1,  67,
      1,  74,   1,   1,   1,   1,   1,  75,  34,   0,   1,   1,   1,   1,   1,  76,
      1,  77,   1,  30,   1,  78,  45,  79,   1,   1,   1,   1,   1,  14,  74,  74,
      1,  74,   1,   1,   1,   1,   1,  76,   1,   1,  16,   1,   1,   1,   1,  80,
      1,   2,  62,  62,  81,   1,  14,  11,   1,   1,  62,   1,  74,  82,   1,   1,
      1,  83,   1,   1,   1,   2,   1,  84,  74,  74,  14,   1,   2,   0,   0,   0,
      1,   1,   1,   1,  67,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,  85,
      1,   1,   1,  86,  87,   1,   1,   1,  76,   1,   1,   8,   9,   1,   1,  16,
      1,  75,   1,   1,  75,  88,   1,  14,   1,   1,   1,  89,  89,  90,   1,  91,
      1,   1,   1,   0,   0,  92,  29,  93,   2,  67,   1,   1,  34,   1,   1,  34,
     62,   1,   1,   1,   1,   1,   1,   1,   1,   1,  30,   0,  16,   0,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  24,   1,  94,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  95,   1,   1,  68,   1,   1,   1,  96,  97,
      1,  30,  98,  98,  98,  98,   1,   1,   1,   1,   1,   1,   1,  14,   0,   0,
      1,  99,   1,   1,   1,   1,   1,  78,   1,   1,   1,   1,   1,  80,   0,  62,
      1,   1,   1,   1,   6,   1,   1,   1,   1,   7,   1,   1,   1,   1,   1,   1,
    100,   1,   1,   6,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,  78,   1,
      1,   2,   1,   1,   1,   1,   1,   1,  67,   1,   1,   1,  30,   1,   1,   1,
      1,   1,  62,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   9,
      1,   1,   1,   1,  16, 101,   0, 102,   1,   1,  67,  74,   1,   1,   1,   9,
      1,   1,   1,   1, 103,  74,   1,   1,   1,   1,   1,   1,   1, 104,   1,  67,
      1,   1,   1,   1,  12,  42,   1,   2,   1,   1,   1,  30,  14,  47,   1,   1,
      1,   1,   1,   1, 105, 106,   1,  30, 107, 108,  98,   1,   1,   1,  62,   1,
      1,   1,   1,   1,   1,   1,  14,  74,   1,   1,  78,   1, 109,   1,   1,  62,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,  14,   1,
      1,   1,   1,   1,   1,  74,   0,   0,  30, 110,   1, 111, 112,   1,   1,   1,
      1,   1,   1,   1, 105, 113,   1,   1,   1, 102,   1,   1,  96,   0,   0,   1,
      1,  74,   1,   1,   1, 114, 115,  89,   1,   1,   1,   1,   1,   1,   1,  84,
      6,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   2, 116, 117,  98, 118,
    119,   1,  73, 120,  14,  14,   0,   0,   1,   1,   1,   1,   1,   1,   1,  16,
    121,   1,   1, 122,   1,   1,   1,   1,   2,  67,  34,   0,   0,   1,   1,  14,
      1,  67,   1,   1,   1,  34,   1,  62,   1,   1, 123,   1,  16,   1,   1,  16,
      1,  12,   1,   1, 124,  80,   0,   0,   1,  14,  74,   1,   1, 124,   1,  62,
      1,   1,   9,   1,   1,   1, 104, 125, 125, 126,   5, 127,   0,   0,   0,   0,
      1,   1,   1,  30,   1,  80,   9,   0,  94,   1,   1, 128,   0,   0,   0,   0,
    129,   1,   1, 130,   1,  94,   1,   1,   1,   2,  50,   0,   0,   0,   1, 131,
      1, 132,   1, 133,   0,   0,   0,   0,   1,   1,   1, 134,   1, 102,   1,   1,
    135, 136,   1, 137,  76,  76,   1,   1,   1,   1,   0,   0,   1,   1, 109,  30,
      1,   1,   1, 138,   1, 139,   1, 140,   1, 141, 142,   0,   0,   0,   0,   0,
      1,   1,   1,   1,  76,   0,   0,   0,   1,   1,   1, 105,   1,   1,   1, 143,
      1,   1,   9,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,
      1,   1, 144,  13,   0,   0,   0,   0,   1,   1,   9,   1,   1,  74,   0,   1,
     74,   0,   0,   1,  62,   0,   1,  30,   1,   1,   1,   1,  14, 102,   1,  77,
      1,   1,   1,   1, 145,   1,  76,  74,   1,   1,   1,  89,   9,   1,   1,  30,
      1,   1,   1,   1,   1,   1,   6,  11,   1,   5,   1,   2,   0,   0,   0,   0,
    146,  12,  74,   1,   1,   1,  16,  74,  18,  19,  20, 147,  37, 148, 149,  11,
      1,   1,   1,   1,   1, 119,  13,   0,   1,   1,   1,   1,   9,  74,   0,   0,
      1,   1,   1, 139,   1,  14,   0,   0,   1,   1,   1,   1,  11,  74,  67,   0,
      1,   1,   1,  74,  74,   0,   0,   0,   1,   8,  62,   1,  30,   0,   0,   0,
      1,   1,   1,  62,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1, 150,
    151, 152,   1, 153,  30,  74,   0,   0,   0,   0,   3,   1,   1,   3,  11,   0,
      1,   1,   1,   1,   9,   1,   1,   1,   1,   1, 105,   1,   1,   1,   1,  76,
     20,   1,   1,  73,  80,   1,  67,   1,   1, 102,  66,  30,   0,   0,   0,   0,
    154,   1,   1, 155,   9,  74, 156,   1,   2, 157,  74,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,  76,   0,   0,   0,  34,   1,   1,   1, 158,
      1,  74,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   2,  11,
      1,   1,   1,   1,  78,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1, 105,
      1,   1,   2,  76,   0,   0,   0,   0,   1,   1,   1,   1,  30,   0,   0,   0,
      1,   1,   1,  76,   1,   2,  42,   1,   1,   1,   1,   2,  74,   1,  14,  80,
      1,   1,   1,   1,  80,  99,   5, 159,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   1,   1,   1,   1,   1,  16,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,  10,   1,   1,   1,  96,   1,   0,   0,   0,   0,  11,  13,
      1,   1,   1,   1,   1,  80,   0,   0,  76,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 160,   1,   1, 105,   0,   0, 105, 161,   1,
      1,   1,   1,   1,   1,   1,   1,  62,   1,   1,   1,   1,   1,   1,  16,  67,
     76,  47,  78,   0,   0,   0,   0,   0,   1,   1,  14,   1,  30,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  80,   1,   1,   7,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,  16,   0,   1,   1,   1,   1,  80,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,  78,   1,   1,   1,   1,   1,  30,   1,  76,
      1,   1,   1,   1,   1,  89,   1,   1,   1,  45, 162, 163, 164,   1,   1,   1,
    165, 166,   1, 167, 168,  46,   1,   1,   1,   1, 139,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  83,   1,   1,   1,  62, 106,   6,   0,   0,   0,   0,   0,
      1,   2,   0,   0,   0,   0,   0,   0,  73, 169, 170,   0,   0,   0,   0,   0,
      1,   1,  67,  14,  42,   0,   0,   0,   0,   1,   2,   0,   1,   1,   1, 133,
      0,   0,   0,   0,   0,   0, 171,   2,   1,   1,   1,   1, 172,  30,   0,   0,
      1,   1,   1,   1,  62,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,
      1,   1,   1,  11,   0,   0,   0,   0,   6,   1,   1,  14,   0,   0,   0,   0,
    164,   1, 173, 174, 175, 176, 177, 178,  99,  62, 179,  62,   0,   0,   0,  13,
      1,   1,  62,   1,   1,   1,   1,   1,   1,  78,   2,   6,   6,   6,   1,  80,
      1,   1,  14,   0,   0,   0,  29,   1, 105,   1,   1,  62,  76,  13,  80,   0,
      1,   1,   1,   1,   1, 159,  67,  67,   1,   1,   1,   1,   1,   1,   1,  78,
      1,   1,   1,   1,   1,  76,  62,  34,  62,   1,   1,   1,   9,  74,   1,   1,
      9,   1,  14,  13,   0,   0,   0,   0,   1,   1,   1,   1,   1,  78,  14, 180,
     30,   1,  67,  16,  80,  74,   9,  30,   1, 114,   1,   1,  16,   0,   0,  74,
      1,   1,   1,   1,   1,   1,   0,   0,   1,   1,   1,  76,   1,   1,   1,   1,
      1,  14,   1,   1,   1,   1,   1,   1,   1,   1,  13,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,  34,   0,   1,  14,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,  16,   0,   0,   0, 181,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,   1,   1,   1,  14
};

static UINT8 print_table_3[688] = {
      0,   1,   2,   2,   2,   2,   3,   4,   2,   2,   5,   6,   2,   2,   7,   8,
      9,  10,   2,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,
      2,  24,   2,   2,  25,  26,  27,  28,   2,   2,   2,   2,   2,  29,  30,  31,
     32,  33,  34,  35,  36,  37,  38,  39,  40,  41,   2,   2,   2,   2,  42,  43,
     44,  45,   2,  46,   2,   2,   2,   2,  47,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  48,  49,   2,  50,  51,  52,  53,  54,   2,  55,
     56,  57,  58,  59,  60,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  61,   2,   2,  62,  63,   2,  64,
     65,  66,  67,  68,  69,  70,  71,  72,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  73,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,  75,  76,  77,  78,   2,   2,   2,  79,  80,  81,  82,  83,
     84,  85,  86,  87,  74,  88,  89,  90,   2,  91,  92,  93,   2,   2,  94,  95,
     96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,  74, 107, 108, 109, 110,
    111, 112, 113, 114, 115, 116, 117,  74, 118, 119,  74, 120, 121, 122, 123,  74,
    124, 125, 126, 127, 128, 129,  74,  74, 130, 131, 132, 133,  74, 134,  74, 135,
      2,   2,   2,   2,   2,   2,   2, 136, 137,   2, 138,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74, 139,
      2,   2,   2,   2,   2,   2,   2,   2, 140,  74,  74,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,   2,   2,   2,   2, 141,  74,  74,  74,
      2,   2,   2,   2, 142, 143, 144, 145,  74,  74,  74,  74, 146, 147, 148, 149,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  63,
      2,   2,   2,   2,   2,   2,   2,   2,   2, 150, 151,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74, 152,
      2,   2, 153,   2,   2, 154,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74, 155, 156,  74,  74,  74,  74,  74,  74,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74, 157, 138,
      2, 158, 159, 160, 161, 162, 163,  74, 164, 165, 166,   2,   2, 167,   2, 168,
      2,   2,   2,   2,   2, 169,  74,  74,  74,  74,  74,  74,  74,  74, 170,  74,
    171,  74, 172,  74,  74, 173,  74,  74,  74,  74,  74,  74,  74,  74,  74, 174,
      2, 175, 176,  74,  74,  74,  74,  74, 177, 178, 179,  74, 180, 181,  74,  74,
    182, 183,   2, 184, 185,  74,   2,   2,   2,   2,   2,   2,   2, 186, 187, 188,
    189, 190,   2,   2, 191, 192,   2, 193,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 194,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 195,   2,
    196,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 197,   2,   2,
      2,   2,   2,   2,   2,   2,   2, 198,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2, 199,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,   2,   2, 200,  74,  74,  74,  74,  74,  74,  74,  74,  74,
    201,  74,   2, 202,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 203
};

static UINT8 print_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   8,   9,   7,   7,   7,   7,  10,  11,   7,   7,   7,  12,
     13,  14,  15,  16,  17,  18,  19,  11,  20,  11,  11,  11,  11,  21,   7,   7,
     22,  23,  11,  11,  11,  24,  25,  26,  11,  27,  28,  29,  30,  31,  32,  33,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  34,   7,  35,  36,   7,  37,   7,   7,   7,  38,  11,  39,
      7,   7,  40,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     41,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  42,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  42
};

UINT32 lookup_print(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = print_table_4[block];
    offset = (codepoint >> 7) & 0xF;
    block = print_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0x7;
    block = print_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = print_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Punct. */

static UINT8 punct_table_1[456] = {
      0,   0,   0,   0, 238, 247,   0, 140,   1,   0,   0, 184,   0,   0,   0,  40,
    130,   8, 192, 136,   0,   0,   0,  64, 128,   0,   0,   0,   0,   0,   0, 252,
      0,   6,   0,   0,  73,   0,   0,   0,   0,   0,  24,   0,   0,  54,   0, 232,
      0,  60,   0,   0,   0,   0,  16,   0, 255,  63,   0,   0,   0,   0, 128,   3,
      0,   0, 255, 127,  48,   0,   1,   0,   0,   0,   0,  32,   0,   0,  64,   0,
      0,   0,   1,   0,   0,   0, 128,   0,  16,   0,   0,   0,   0, 128,   0,  12,
    240, 255,  23,   0,   0,   0,   0,  60,  32,   0,   0,   0,   0,   0,  31,   6,
      0, 252,   0,   0,   0,   0,   0,   8, 255,   1,   0,   0,   1,   0,   0,   0,
      0,  64,   0,   0,   0,   0,   0,  24,   0,  56,   0,   0,   0,   0,  96,   0,
      0,   0, 112,   7, 255,   7,   0,   0,  48,   0,   0,   0,   0,   0,   0, 192,
    127,  63,   0,   0,   1,   0,   0,  96,   0,   0,   0, 240,   0,   0,   0, 248,
    255,   0,   8,   0,   0,   0, 255, 255, 255,   0, 255, 255, 239, 255, 251, 127,
      0,   0,   0,  96,   0,  96,   0,   0,   0,  15,   0,   0,   0, 255,  63,   0,
     96,   0,   0,   0, 192, 255,   0,   0, 248, 255, 255,   1,   0,   0,   0,  15,
      0,   0,   0,  48,   0,   0,   0, 222, 255, 255, 255, 255, 255, 127, 255, 255,
    255, 255, 252,  63,  14, 255, 243, 255,   0,   0,   1,  32,   0, 224,   0,   0,
      0,   0,   8,  64,   0,   0, 252,   0,   0,   0, 240,   0,   0, 192,   0,   0,
      0,   0,   0,  23,   0,   0,   0, 128, 254,  63,   0, 192,   0,   0,   3,   0,
      0,   8,   0,   0,   0,   0, 255,   3, 255, 255, 247, 255,  11,  13,   0,   0,
      0,   0,   0, 168,  63,   0,   0,   0,   7,   0,   0,   0,   0, 128,   0,   0,
      0,   0, 255,   1,   0,   0, 127,   0,   0,   0,   0, 254,   0,   0,   0,  30,
      0,  32,   0,   0,   0,   0, 224,   3, 192,   3,   0,   0, 128,  63,   0,   0,
      0,   0,   0, 216,   3,   0,   0,   0,  15,   0,   0,   0,   0,   0,  48,   0,
    224,  33,   0, 232,   0,   0,   0,  63,   0,   2,   0,   0,   0, 248,   0,  44,
     64,   0,   0,   0, 254, 255, 255,   0,  14,   0,   0,   0, 255,  31,   0,   0,
      0,   0,   0,   2,   0,   0,   0, 112, 112,   0,   0,   0,   4,   0,   0,   0,
    127,   0,   0,   0,   0,   0,   0, 220,  62,   0,   0,   0,   0,   0, 128,   1,
      0,   0,  31,   0,   0,   0,   6,   0,   0,   0,  32,   0,   0,   0, 128,  15,
      0,   0, 128,   7, 128,  15,   0,   0
};

static UINT8 punct_table_2[568] = {
      0,   1,   2,   3,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   5,   6,   0,   0,   0,   0,   0,   7,   0,   8,   5,   9,  10,
     11,   0,   0,  12,   0,   0,  13,   0,  14,   0,   0,   0,   0,   0,   0,  15,
      0,  16,   5,   0,   0,   0,   0,   0,   0,   0,   0,  17,   0,   0,   0,  18,
      0,   0,   0,  19,   0,   0,   0,  20,   0,   0,   0,  21,  22,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  13,   0,   0,  23,   0,   0,   0,   0,   0,
     24,  25,   0,   0,  26,   0,  27,   0,   0,   0,  28,   0,   0,   0,   0,  29,
      0,   0,   0,  30,   0,   0,   0,   0,  31,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  32,  33,   0,   0,  34,   0,  35,   0,   0,   0,   0,  36,   0,
     37,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38,   0,   0,   0,   0,   0,
     39,   0,   0,   0,   0,  40,   0,   0,   0,   0,   7,  41,   0,   0,   0,  42,
      0,  43,   0,  39,   0,   0,  44,   0,  45,  46,  47,  48,  49,   0,   0,   0,
     50,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51,   0,   0,  52,  53,
      0,   0,   0,   0,  54,   0,  55,  56,   0,   0,   0,   0,   0,   0,   0,  57,
      0,   0,   0,  20,   0,   0,   0,   0,  58,  59,  60,   0,   0,   0,   0,   0,
     61,  62,   0,   0,   0,  31,   0,  29,   0,   0,   0,   0,   0,   0,   0,  39,
     63,   0,   0,  64,   0,   0,   0,  65,   0,   0,   0,  66,   0,   0,  67,  68,
      0,  67,  69,   0,   0,   0,  70,   0,   0,   0,  42,   0,   0,   0,  39,  71,
      0,   0,   0,   0,   0,   0,   0,  72,   0,  39,   0,   0,   0,   0,   0,   0,
     73,  45,  74,  75,   0,   0,   0,   0,   1,   2,  76,  77,   0,   0,   0,   0,
     78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  69,   0,  20,   0,
      0,   0,   0,  79,   0,   0,   0,   0,   0,   0,  21,   0,   0,   0,   0,   0,
     69,  69,   0,   0,   0,   0,   0,   0,   0,   0,  80,  69,   0,   0,   0,  81,
      0,  82,   0,   0,  83,   0,   0,   0,   0,   0,   0,   0,   0,  84,   0,   0,
      0,   0,  85,   0,  86,   0,   0,   0,   0,   0,  87,   0,   0,  88,  89,   0,
      0,   0,  90,  91,   0,   0,  92,   0,   0,  93,   0,   0,   0,  94,   0,   0,
      0,   0,  95,   0,   0,   0,  96,   0,   0,   0,   0,   0,   0,   0,  97,   0,
      0,   0,  98,  99,   0, 100,   0,   0,   0, 101,   0,   0,   0,   0,   0,   0,
      0,  29,   0,   0,   0,   0,   0,   0,   0,   0, 102,   0,   0,   0,   0, 103,
      0,  69, 104,   0, 105,  78,   0,   0,   0,   0, 106,  71,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 107,   0,   0,   0,   0,   0,   0,   0,  69,
      0,   0,   0, 108,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 109,
      0,   0,   0,  67,   0,   0,   0, 110,   0, 111,  22,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 103,
      0,   0,   0,   0,  69,   0,   0,   0,   0,   0,   0,   0, 113,   0,   0,   0,
      0,   0,  39,   0,   0,   0,   0,   0
};

static UINT8 punct_table_3[352] = {
      0,   1,   1,   2,   1,   3,   4,   5,   6,   7,   8,   1,   9,  10,  11,  12,
     13,   1,   1,  14,  15,   1,  16,  17,  18,  19,  20,  21,  22,   1,   1,   1,
     23,   1,   1,  24,   1,   1,   1,  25,   1,  26,   1,   1,  27,  28,  29,   1,
     30,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  31,   1,  32,   1,  33,  34,  35,  36,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  37,  38,  39,
      1,  40,   1,  41,   1,  42,   1,   1,  43,  44,  45,  46,   1,   1,  47,  48,
     49,  50,  51,   1,  52,  53,  54,  55,  56,  57,  58,   1,  59,   1,  60,  61,
      1,   1,   1,   1,  62,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  63,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  64,  65,   1,   1,  66,  67,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  68,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  69,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,  70,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 punct_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   6,   2,   7,   2,   8,   9,  10,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_punct(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = punct_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = punct_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = punct_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = punct_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Quotation_Mark. */

static UINT8 quotation_mark_table_1[72] = {
      0,   0,   0,   0, 132,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   8,   0,   8,   0,   0,   0, 255,   0,   0,   0,   6,
      4,   0,   0,   0,   0,   0,   0,   0,   0, 240,   0, 224,   0,   0,   0,   0,
     30,   0,   0,   0,   0,   0,   0,   0, 132,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  12,   0,   0,   0
};

static UINT8 quotation_mark_table_2[48] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      3,   1,   1,   1,   1,   1,   1,   1,   1,   4,   1,   1,   1,   1,   1,   1,
      5,   1,   1,   1,   1,   1,   1,   1,   1,   6,   1,   1,   7,   8,   1,   1
};

static UINT8 quotation_mark_table_3[96] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      2,   1,   1,   1,   1,   1,   1,   3,   4,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   5
};

static UINT8 quotation_mark_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_quotation_mark(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = quotation_mark_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = quotation_mark_table_3[(block << 5) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = quotation_mark_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = quotation_mark_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Radical. */

static UINT8 radical_table_1[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 251, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0,   0,   0
};

static UINT8 radical_table_2[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   3
};

static UINT8 radical_table_3[32] = {
      0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 radical_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_radical(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = radical_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = radical_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = radical_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = radical_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Regional_Indicator. */

static UINT8 regional_indicator_table_1[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 192, 255, 255, 255
};

static UINT8 regional_indicator_table_2[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 regional_indicator_table_3[32] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0
};

static UINT8 regional_indicator_table_4[34] = {
      0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0
};

UINT32 lookup_regional_indicator(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = regional_indicator_table_4[block];
    offset = (codepoint >> 11) & 0xF;
    block = regional_indicator_table_3[(block << 4) + offset];
    offset = (codepoint >> 7) & 0xF;
    block = regional_indicator_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = regional_indicator_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Script. */

static UINT8 script_table_1[5520] = {
     25,  25,  25,  25,  25,  25,  25,  25,  25,  71,  71,  71,  71,  71,  71,  71,
     71,  71,  71,  71,  71,  71,  71,  71,  71,  71,  71,  25,  25,  25,  25,  25,
     25,  25,  71,  25,  25,  25,  25,  25,  71,  71,  71,  71,  71,  71,  71,  25,
     71,  25,  25,  25,  25,  25,  25,  25,  71,  71,  71,  71,  71,  25,  25,  25,
     25,  25,  13,  13,  25,  25,  25,  25,  56,  56,  56,  56,  56,  56,  56,  56,
     44,  44,  44,  44,  25,  44,  44,  44,   0,   0,  44,  44,  44,  44,  25,  44,
      0,   0,   0,   0,  44,  25,  44,  25,  44,  44,  44,   0,  44,   0,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,   0,  44,  44,  44,  44,  44,
     44,  44,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  56,  56,  30,
      0,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   0,   5,   5,   5,   0,   0,   5,   5,   5,
      0,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,
      0,   0,   0,   0,   0,   0,   0,   0,  53,  53,  53,   0,   0,   0,   0,  53,
     53,  53,  53,  53,  53,   0,   0,   0,   4,   4,   4,   4,   4,  25,   4,   4,
      4,   4,   4,   4,  25,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  25,   4,   4,   4,  25,  25,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,   4,   4,
     56,   4,   4,   4,   4,   4,   4,   4, 138, 138, 138, 138, 138, 138, 138, 138,
    138, 138, 138, 138, 138, 138,   0, 138, 138, 138, 138,   0,   0, 138, 138, 138,
    149, 149, 149, 149, 149, 149, 149, 149, 149, 149,   0,   0,   0,   0,   0,   0,
    101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101,   0,   0, 101, 101, 101,
    126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,   0,   0,
    126, 126, 126, 126, 126, 126, 126,   0,  82,  82,  82,  82,  82,  82,  82,  82,
     82,  82,  82,  82,   0,   0,  82,   0, 138, 138, 138,   0,   0,   0,   0,   0,
      4,   4,   4,   4,   4,   4,   4,   0,   4,   4,   0,   0,   0,   0,   0,   0,
      4,   4,  25,   4,   4,   4,   4,   4,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  56,  56,  56,  56,  32,  32,  32,  32,  32,  32,  32,  25,  25,  32,  32,
     11,  11,  11,  11,   0,  11,  11,  11,  11,  11,  11,  11,  11,   0,   0,  11,
     11,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,   0,  11,  11,  11,  11,  11,  11,  11,   0,  11,   0,   0,   0,  11,  11,
     11,  11,   0,   0,  11,  11,  11,  11,  11,   0,   0,  11,  11,  11,  11,   0,
      0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,  11,  11,   0,  11,
     11,  11,  11,  11,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,  11,   0,
      0,  47,  47,  47,   0,  47,  47,  47,  47,  47,  47,   0,   0,   0,   0,  47,
     47,   0,   0,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,
     47,   0,  47,  47,  47,  47,  47,  47,  47,   0,  47,  47,   0,  47,  47,   0,
     47,  47,   0,   0,  47,   0,  47,  47,  47,   0,   0,  47,  47,  47,   0,   0,
      0,  47,   0,   0,   0,   0,   0,   0,   0,  47,  47,  47,  47,   0,  47,   0,
      0,   0,   0,   0,   0,   0,  47,  47,  47,  47,  47,  47,  47,  47,  47,   0,
      0,  45,  45,  45,   0,  45,  45,  45,  45,  45,  45,  45,  45,  45,   0,  45,
     45,  45,   0,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,
     45,   0,  45,  45,  45,  45,  45,  45,  45,   0,  45,  45,   0,  45,  45,  45,
     45,  45,   0,   0,  45,  45,  45,  45,  45,  45,   0,  45,  45,  45,   0,   0,
     45,   0,   0,   0,   0,   0,   0,   0,  45,  45,  45,  45,   0,   0,  45,  45,
     45,  45,   0,   0,   0,   0,   0,   0,   0,  45,  45,  45,  45,  45,  45,  45,
      0, 115, 115, 115,   0, 115, 115, 115, 115, 115, 115, 115, 115,   0,   0, 115,
    115,   0,   0, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
    115,   0, 115, 115, 115, 115, 115, 115, 115,   0, 115, 115,   0, 115, 115, 115,
    115, 115,   0,   0, 115, 115, 115, 115, 115,   0,   0, 115, 115, 115,   0,   0,
      0,   0,   0,   0,   0, 115, 115, 115,   0,   0,   0,   0, 115, 115,   0, 115,
    115, 115, 115, 115,   0,   0, 115, 115,   0,   0, 145, 145,   0, 145, 145, 145,
    145, 145, 145,   0,   0,   0, 145, 145, 145,   0, 145, 145, 145, 145,   0,   0,
      0, 145, 145,   0, 145,   0, 145, 145,   0,   0,   0, 145, 145,   0,   0,   0,
    145, 145, 145, 145, 145, 145, 145, 145, 145, 145,   0,   0,   0,   0, 145, 145,
    145,   0,   0,   0,   0,   0,   0, 145,   0,   0,   0,   0,   0,   0, 145, 145,
    145, 145, 145,   0,   0,   0,   0,   0, 148, 148, 148, 148, 148, 148, 148, 148,
    148, 148, 148, 148, 148,   0, 148, 148, 148,   0, 148, 148, 148, 148, 148, 148,
    148, 148,   0,   0, 148, 148, 148, 148, 148,   0, 148, 148, 148, 148,   0,   0,
      0,   0,   0,   0,   0, 148, 148,   0, 148, 148, 148,   0,   0, 148,   0,   0,
    148, 148, 148, 148,   0,   0, 148, 148,   0,   0,   0,   0,   0,   0,   0, 148,
     61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,   0,  61,  61,
     61,   0,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,   0,  61,  61,  61,
     61,  61,   0,   0,  61,  61,  61,  61,  61,   0,  61,  61,  61,  61,   0,   0,
      0,   0,   0,   0,   0,  61,  61,   0,  61,  61,  61,  61,   0,   0,  61,  61,
      0,  61,  61,   0,   0,   0,   0,   0,  81,  81,  81,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  81,   0,  81,  81,  81,   0,  81,  81,  81,  81,  81,  81,
      0,   0,   0,   0,  81,  81,  81,  81,  81,  81,  81,  81,   0,   0,  81,  81,
      0, 132, 132, 132,   0, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132,
    132, 132, 132, 132, 132, 132, 132,   0,   0,   0, 132, 132, 132, 132, 132, 132,
    132, 132,   0, 132, 132, 132, 132, 132, 132, 132, 132, 132,   0, 132,   0,   0,
      0,   0, 132,   0,   0,   0,   0, 132, 132, 132, 132, 132, 132,   0, 132,   0,
      0,   0,   0,   0,   0,   0, 132, 132,   0,   0, 132, 132, 132,   0,   0,   0,
      0, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
    150, 150, 150,   0,   0,   0,   0,  25, 150, 150, 150, 150,   0,   0,   0,   0,
      0,  70,  70,   0,  70,   0,  70,  70,  70,  70,  70,   0,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,   0,  70,   0,  70,
     70,  70,  70,  70,  70,  70,   0,   0,  70,  70,  70,  70,  70,   0,  70,   0,
     70,  70,   0,   0,  70,  70,  70,  70, 151, 151, 151, 151, 151, 151, 151, 151,
      0, 151, 151, 151, 151, 151, 151, 151, 151, 151, 151, 151, 151,   0,   0,   0,
    151, 151, 151, 151, 151,   0, 151, 151, 151, 151, 151, 151, 151,  25,  25,  25,
     25, 151, 151,   0,   0,   0,   0,   0,  96,  96,  96,  96,  96,  96,  96,  96,
     40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,   0,  40,
      0,   0,   0,   0,   0,  40,   0,   0,  40,  40,  40,  25,  40,  40,  40,  40,
     49,  49,  49,  49,  49,  49,  49,  49,  39,  39,  39,  39,  39,  39,  39,  39,
     39,   0,  39,  39,  39,  39,   0,   0,  39,  39,  39,  39,  39,  39,  39,   0,
     39,  39,  39,   0,   0,  39,  39,  39,  39,  39,  39,  39,  39,   0,   0,   0,
     39,  39,   0,   0,   0,   0,   0,   0,  23,  23,  23,  23,  23,  23,  23,  23,
     23,  23,  23,  23,  23,  23,   0,   0,  18,  18,  18,  18,  18,  18,  18,  18,
    104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104,   0,   0,   0,
    125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125,  25,  25,  25, 125, 125,
    125,   0,   0,   0,   0,   0,   0,   0, 139, 139, 139, 139, 139, 139, 139, 139,
    139, 139, 139, 139, 139, 139,   0,   0,   0,   0,   0,   0,   0,   0,   0, 139,
     51,  51,  51,  51,  51,  51,  51,  51,  51,  51,  51,  51,  51,  25,  25,   0,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,   0,   0,   0,   0,
    140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140, 140,   0, 140, 140,
    140,   0, 140, 140,   0,   0,   0,   0,  67,  67,  67,  67,  67,  67,  67,  67,
     67,  67,  67,  67,  67,  67,   0,   0,  67,  67,   0,   0,   0,   0,   0,   0,
     93,  93,  25,  25,  93,  25,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,
     93,  93,   0,   0,   0,   0,   0,   0,  93,   0,   0,   0,   0,   0,   0,   0,
     93,  93,  93,   0,   0,   0,   0,   0,  18,  18,  18,  18,  18,  18,   0,   0,
     73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,   0,
     73,  73,  73,  73,   0,   0,   0,   0,  73,   0,   0,   0,  73,  73,  73,  73,
    141, 141, 141, 141, 141, 141, 141, 141, 141, 141, 141, 141, 141, 141,   0,   0,
    141, 141, 141, 141, 141,   0,   0,   0, 100, 100, 100, 100, 100, 100, 100, 100,
    100, 100, 100, 100,   0,   0,   0,   0, 100, 100,   0,   0,   0,   0,   0,   0,
    100, 100, 100,   0,   0,   0, 100, 100,  16,  16,  16,  16,  16,  16,  16,  16,
     16,  16,  16,  16,   0,   0,  16,  16, 142, 142, 142, 142, 142, 142, 142, 142,
    142, 142, 142, 142, 142, 142, 142,   0, 142, 142, 142, 142, 142,   0,   0, 142,
    142, 142,   0,   0,   0,   0,   0,   0, 142, 142, 142, 142, 142, 142,   0,   0,
     56,  56,  56,  56,  56,  56,  56,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   0,   0,   0,   7,   7,   7,   7,   7,   7,   7,   0,
    136, 136, 136, 136, 136, 136, 136, 136,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,   0,   0,   0,   0,   0,   0,   0,   0,  10,  10,  10,  10,
     72,  72,  72,  72,  72,  72,  72,  72,   0,   0,   0,  72,  72,  72,  72,  72,
     72,  72,   0,   0,   0,  72,  72,  72, 105, 105, 105, 105, 105, 105, 105, 105,
     30,   0,   0,   0,   0,   0,   0,   0,  40,  40,  40,   0,   0,  40,  40,  40,
     56,  56,  56,  25,  56,  56,  56,  56,  56,  25,  56,  56,  56,  56,  56,  56,
     56,  25,  25,  25,  25,  56,  25,  25,  25,  25,  25,  25,  56,  25,  25,  25,
     56,  56,  25,   0,   0,   0,   0,   0,  71,  71,  71,  71,  71,  71,  44,  44,
     44,  44,  44,  30,  71,  71,  71,  71,  71,  71,  71,  71,  71,  44,  44,  44,
     44,  44,  71,  71,  71,  71,  44,  44,  44,  44,  44,  71,  71,  71,  71,  71,
     30,  71,  71,  71,  71,  71,  71,  71,  71,  71,  71,  71,  71,  71,  71,  44,
     44,  44,  44,  44,  44,  44,   0,   0,   0,  44,   0,  44,   0,  44,   0,  44,
     44,  44,  44,  44,  44,   0,  44,  44,  44,  44,  44,  44,   0,   0,  44,  44,
     44,  44,  44,  44,   0,  44,  44,  44,   0,   0,  44,  44,  44,   0,  44,  44,
     44,  44,  44,  44,  44,  44,  44,   0,  25,  25,  25,  25,  56,  56,  25,  25,
     25,  25,  25,  25,  25,   0,  25,  25,  25,  71,   0,   0,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  71,  25,  25,  25,  25,  25,  25,  25,   0,
     71,  71,  71,  71,  71,   0,   0,   0,  25,   0,   0,   0,   0,   0,   0,   0,
     56,   0,   0,   0,   0,   0,   0,   0,  25,  25,  25,  25,  25,  25,  44,  25,
     25,  25,  71,  71,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  71,  25,
     71,  25,  25,  25,   0,   0,   0,   0,  25,  25,  25,   0,   0,   0,   0,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  25,  25,  25,  25,   0,   0,  25,  25,
     25,  25,  25,  25,  25,  25,   0,  25,  41,  41,  41,  41,  41,  41,  41,  41,
     26,  26,  26,  26,   0,   0,   0,   0,   0,  26,  26,  26,  26,  26,  26,  26,
    152, 152, 152, 152, 152, 152, 152, 152,   0,   0,   0,   0,   0,   0,   0, 152,
    152,   0,   0,   0,   0,   0,   0,   0,  25,  25,  25,  25,  25,  25,   0,   0,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,   0,  48,  48,  48,  48,  48,
     48,  48,  48,  48,   0,   0,   0,   0,  48,  48,  48,  48,  48,  48,   0,   0,
     25,  25,  25,  25,   0,   0,   0,   0,  25,  25,  25,  25,  25,  48,  25,  48,
     25,  48,  48,  48,  48,  48,  48,  48,  48,  48,  56,  56,  56,  56,  49,  49,
     48,  48,  48,  48,  25,  25,  25,  25,   0,  54,  54,  54,  54,  54,  54,  54,
     54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,   0,
      0,  56,  56,  25,  25,  54,  54,  54,  25,  62,  62,  62,  62,  62,  62,  62,
     62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  25,  25,  62,  62,  62,
      0,   0,   0,   0,   0,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
      0,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,   0,
     49,  49,  49,  49,  49,  49,  49,  25,  62,  62,  62,  62,  62,  62,  62,  25,
    161, 161, 161, 161, 161, 161, 161, 161, 161, 161, 161, 161, 161,   0,   0,   0,
    161, 161, 161, 161, 161, 161, 161,   0,  76,  76,  76,  76,  76,  76,  76,  76,
    156, 156, 156, 156, 156, 156, 156, 156, 156, 156, 156, 156,   0,   0,   0,   0,
      8,   8,   8,   8,   8,   8,   8,   8,  25,  25,  71,  71,  71,  71,  71,  71,
     25,  25,  25,  71,  71,  71,  71,  71,  71,  71,  71,   0,   0,   0,   0,   0,
     71,  71,   0,  71,   0,  71,  71,  71,  71,  71,   0,   0,   0,   0,   0,   0,
      0,   0,  71,  71,  71,  71,  71,  71, 137, 137, 137, 137, 137, 137, 137, 137,
    137, 137, 137, 137, 137,   0,   0,   0,  25,  25,   0,   0,   0,   0,   0,   0,
    121, 121, 121, 121, 121, 121, 121, 121, 127, 127, 127, 127, 127, 127, 127, 127,
    127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,
    127, 127,   0,   0,   0,   0,   0,   0,  64,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  25,  64, 124, 124, 124, 124, 124, 124, 124, 124,
    124, 124, 124, 124,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 124,
     49,  49,  49,  49,  49,   0,   0,   0,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,   0,  25,  59,  59,   0,   0,   0,   0,  59,  59,
     96,  96,  96,  96,  96,  96,  96,   0,  22,  22,  22,  22,  22,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  22,   0,  22,  22,  22,  22,  22,  22,   0,   0,
     22,  22,   0,   0,  22,  22,  22,  22, 143, 143, 143, 143, 143, 143, 143, 143,
    143, 143, 143,   0,   0,   0,   0,   0,   0,   0,   0, 143, 143, 143, 143, 143,
     87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,   0,
      0,  39,  39,  39,  39,  39,  39,   0,  71,  71,  71,  25,  71,  71,  71,  71,
     71,  71,  71,  71,  71,  44,  71,  71,  71,  71,  25,  25,   0,   0,   0,   0,
     87,  87,  87,  87,  87,  87,   0,   0,  87,  87,   0,   0,   0,   0,   0,   0,
     49,  49,  49,  49,   0,   0,   0,   0,   0,   0,   0,  49,  49,  49,  49,  49,
     48,  48,   0,   0,   0,   0,   0,   0,  71,  71,  71,  71,  71,  71,  71,   0,
      0,   0,   0,   5,   5,   5,   5,   5,   0,   0,   0,   0,   0,  53,  53,  53,
     53,  53,  53,  53,  53,  53,  53,   0,  53,  53,  53,  53,  53,   0,  53,   0,
     53,  53,   0,  53,  53,   0,  53,  53,   4,   4,   4,   0,   0,   0,   0,   0,
      0,   0,   0,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  25,  25,
      0,   0,   4,   4,   4,   4,   4,   4,   0,   0,   0,   0,   0,   0,   0,   4,
     56,  56,  56,  56,  56,  56,  30,  30,  25,  25,  25,   0,  25,  25,  25,  25,
      4,   4,   4,   4,   4,   0,   4,   4,   4,   4,   4,   4,   4,   0,   0,  25,
      0,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  62,  62,
     62,  62,  62,  62,  62,  62,  25,  25,   0,   0,  49,  49,  49,  49,  49,  49,
      0,   0,  49,  49,  49,   0,   0,   0,   0,  25,  25,  25,  25,  25,   0,   0,
     75,  75,  75,  75,  75,  75,  75,  75,  75,  75,  75,  75,   0,  75,  75,  75,
     75,  75,  75,  75,  75,  75,  75,   0,  75,  75,  75,   0,  75,  75,   0,  75,
     75,  75,  75,  75,  75,  75,   0,   0,  75,  75,  75,   0,   0,   0,   0,   0,
     25,  25,  25,   0,   0,   0,   0,  25,  25,  25,  25,  25,   0,   0,   0,  25,
     25,  25,  25,  25,  25,   0,   0,   0,  44,   0,   0,   0,   0,   0,   0,   0,
     25,  25,  25,  25,  25,  56,   0,   0,  77,  77,  77,  77,  77,  77,  77,  77,
     77,  77,  77,  77,  77,   0,   0,   0,  19,  19,  19,  19,  19,  19,  19,  19,
     19,   0,   0,   0,   0,   0,   0,   0,  56,  25,  25,  25,  25,  25,  25,  25,
    107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 107, 107, 107,  42,  42,  42,  42,  42,  42,  42,  42,
     42,  42,  42,   0,   0,   0,   0,   0, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109,   0,   0,   0,   0,   0, 155, 155, 155, 155, 155, 155, 155, 155,
    155, 155, 155, 155, 155, 155,   0, 155, 110, 110, 110, 110, 110, 110, 110, 110,
    110, 110, 110, 110,   0,   0,   0,   0, 110, 110, 110, 110, 110, 110,   0,   0,
     31,  31,  31,  31,  31,  31,  31,  31, 129, 129, 129, 129, 129, 129, 129, 129,
    117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117,   0,   0,
    117, 117,   0,   0,   0,   0,   0,   0, 116, 116, 116, 116, 116, 116, 116, 116,
    116, 116, 116, 116,   0,   0,   0,   0,  37,  37,  37,  37,  37,  37,  37,  37,
     20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  20, 157, 157, 157, 157, 157, 157, 157, 157,
    157, 157, 157,   0, 157, 157, 157, 157, 157, 157, 157,   0, 157, 157,   0, 157,
    157, 157,   0, 157, 157, 157, 157, 157, 157, 157,   0, 157, 157,   0,   0,   0,
     74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,   0,
     74,  74,  74,  74,  74,  74,   0,   0,  71,  71,  71,  71,  71,  71,   0,  71,
     71,   0,  71,  71,  71,  71,  71,  71,  28,  28,  28,  28,  28,  28,   0,   0,
     28,   0,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,
     28,  28,  28,  28,  28,  28,   0,  28,  28,   0,   0,   0,  28,   0,   0,  28,
     55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,   0,  55,
    119, 119, 119, 119, 119, 119, 119, 119,  97,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97,   0,   0,   0,   0,   0,   0,   0,   0,  97,
     52,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,   0,  52,  52,   0,   0,
      0,   0,   0,  52,  52,  52,  52,  52, 122, 122, 122, 122, 122, 122, 122, 122,
    122, 122, 122, 122,   0,   0,   0, 122,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,   0,   0,   0,   0,   0,  78,  90,  90,  90,  90,  90,  90,  90,  90,
     89,  89,  89,  89,  89,  89,  89,  89,   0,   0,   0,   0,  89,  89,  89,  89,
      0,   0,  89,  89,  89,  89,  89,  89,  65,  65,  65,  65,   0,  65,  65,   0,
      0,   0,   0,   0,  65,  65,  65,  65,  65,  65,  65,  65,   0,  65,  65,  65,
      0,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,
     65,  65,  65,  65,  65,  65,   0,   0,  65,  65,  65,   0,   0,   0,   0,  65,
     65,   0,   0,   0,   0,   0,   0,   0, 112, 112, 112, 112, 112, 112, 112, 112,
    108, 108, 108, 108, 108, 108, 108, 108,  83,  83,  83,  83,  83,  83,  83,  83,
     83,  83,  83,  83,  83,  83,  83,   0,   0,   0,   0,  83,  83,  83,  83,  83,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,
      0,   6,   6,   6,   6,   6,   6,   6,  58,  58,  58,  58,  58,  58,  58,  58,
     58,  58,  58,  58,  58,  58,   0,   0,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,   0,   0,   0,   0,   0, 123, 123, 123, 123, 123, 123, 123, 123,
    123, 123,   0,   0,   0,   0,   0,   0,   0, 123, 123, 123, 123,   0,   0,   0,
      0, 123, 123, 123, 123, 123, 123, 123, 113, 113, 113, 113, 113, 113, 113, 113,
    113,   0,   0,   0,   0,   0,   0,   0, 106, 106, 106, 106, 106, 106, 106, 106,
    106, 106, 106,   0,   0,   0,   0,   0,   0,   0, 106, 106, 106, 106, 106, 106,
     50,  50,  50,  50,  50,  50,  50,  50,  50,  50,   0,   0,   0,   0,   0,   0,
    160, 160, 160, 160, 160, 160, 160, 160, 160, 160,   0, 160, 160, 160,   0,   0,
    160, 160,   0,   0,   0,   0,   0,   0, 111, 111, 111, 111, 111, 111, 111, 111,
    133, 133, 133, 133, 133, 133, 133, 133, 133, 133,   0,   0,   0,   0,   0,   0,
    114, 114, 114, 114, 114, 114, 114, 114, 114, 114,   0,   0,   0,   0,   0,   0,
     24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,   0,   0,   0,   0,
     38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,   0,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,   0,   0,
      0,   0,  14,  14,  14,  14,  14,  14,   0,   0,   0,   0,   0,   0,   0,  14,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  60,   0,   0, 134, 134, 134, 134, 134, 134, 134, 134,
    134,   0,   0,   0,   0,   0,   0,   0, 134, 134,   0,   0,   0,   0,   0,   0,
     21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,   0,  21,  21,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,   0,
    128, 128, 128, 128, 128, 128, 128, 128,   0, 132, 132, 132, 132, 132, 132, 132,
    132, 132, 132, 132, 132,   0,   0,   0,  68,  68,  68,  68,  68,  68,  68,  68,
     68,  68,   0,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,   0,
     95,  95,  95,  95,  95,  95,  95,   0,  95,   0,  95,  95,  95,  95,   0,  95,
     95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,   0,  95,
     95,  95,   0,   0,   0,   0,   0,   0,  69,  69,  69,  69,  69,  69,  69,  69,
     69,  69,  69,   0,   0,   0,   0,   0,  69,  69,   0,   0,   0,   0,   0,   0,
     43,  43,  43,  43,   0,  43,  43,  43,  43,  43,  43,  43,  43,   0,   0,  43,
     43,   0,   0,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,
     43,   0,  43,  43,  43,  43,  43,  43,  43,   0,  43,  43,   0,  43,  43,  43,
     43,  43,   0,  56,  43,  43,  43,  43,  43,   0,   0,  43,  43,  43,   0,   0,
     43,   0,   0,   0,   0,   0,   0,  43,   0,   0,   0,   0,   0,  43,  43,  43,
     43,  43,  43,  43,   0,   0,  43,  43,  43,  43,  43,  43,  43,   0,   0,   0,
     99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,   0,  99,  99,  99,
     99,  99,   0,   0,   0,   0,   0,   0, 153, 153, 153, 153, 153, 153, 153, 153,
    153, 153,   0,   0,   0,   0,   0,   0, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130, 130,   0,   0,  92,  92,  92,  92,  92,  92,  92,  92,
     92,  92,  92,  92,  92,   0,   0,   0,  92,  92,   0,   0,   0,   0,   0,   0,
     93,  93,  93,  93,  93,   0,   0,   0, 144, 144, 144, 144, 144, 144, 144, 144,
    144, 144,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   0,   0,   2,   2,   2,   2,   2,   2,   2,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   0,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,   0,   0,   0,   0, 159, 159, 159, 159, 159, 159, 159, 159,
    159, 159, 159,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 159,
     33,  33,  33,  33,  33,  33,  33,   0,   0,  33,   0,   0,  33,  33,  33,  33,
     33,  33,  33,  33,   0,  33,  33,   0,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,   0,  33,  33,   0,   0,  33,  33,  33,  33,  33,
     33,  33,   0,   0,   0,   0,   0,   0,  98,  98,  98,  98,  98,  98,  98,  98,
      0,   0,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98,   0,   0,   0,
    162, 162, 162, 162, 162, 162, 162, 162, 135, 135, 135, 135, 135, 135, 135, 135,
    135, 135, 135,   0,   0,   0,   0,   0, 120, 120, 120, 120, 120, 120, 120, 120,
    120,   0,   0,   0,   0,   0,   0,   0,  12,  12,  12,  12,  12,  12,  12,  12,
     12,   0,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,   0,
     12,  12,  12,  12,  12,  12,   0,   0,  12,  12,  12,  12,  12,   0,   0,   0,
     84,  84,  84,  84,  84,  84,  84,  84,   0,   0,  84,  84,  84,  84,  84,  84,
      0,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,   0,
     85,  85,  85,  85,  85,  85,  85,   0,  85,  85,   0,  85,  85,  85,  85,  85,
     85,  85,  85,  85,  85,  85,  85,  85,   0,   0,  85,   0,  85,  85,   0,  85,
     85,  85,   0,   0,   0,   0,   0,   0,  46,  46,  46,  46,  46,  46,   0,  46,
     46,   0,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,
     46,  46,  46,  46,  46,  46,  46,   0,  46,  46,   0,  46,  46,  46,  46,  46,
     46,   0,   0,   0,   0,   0,   0,   0,  46,  46,   0,   0,   0,   0,   0,   0,
     80,  80,  80,  80,  80,  80,  80,  80,  80,   0,   0,   0,   0,   0,   0,   0,
     76,   0,   0,   0,   0,   0,   0,   0, 145, 145,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 145,  27,  27,  27,  27,  27,  27,  27,  27,
     27,  27,   0,   0,   0,   0,   0,   0,  27,  27,  27,  27,  27,  27,  27,   0,
     27,  27,  27,  27,  27,   0,   0,   0,  27,  27,  27,  27,   0,   0,   0,   0,
     29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,
     36,   0,   0,   0,   0,   0,   0,   0,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   0,   8,   0,   0,   0,   0,   0,   0,   0,
     94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,   0,
     94,  94,   0,   0,   0,   0,  94,  94, 146, 146, 146, 146, 146, 146, 146, 146,
    146, 146, 146, 146, 146, 146, 146,   0, 146, 146,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,
    118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118, 118,   0,   0,
    118, 118,   0, 118, 118, 118, 118, 118,   0,   0,   0,   0,   0, 118, 118, 118,
     86,  86,  86,  86,  86,  86,  86,  86,  86,  86,  86,   0,   0,   0,   0,   0,
     91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,   0,   0,   0,   0,  91,
      0,   0,   0,   0,   0,   0,   0,  91, 147, 102,  48,  48,  66,   0,   0,   0,
    147, 147, 147, 147, 147, 147, 147, 147,  66,  66,  66,  66,  66,  66,  66,  66,
     66,  66,  66,  66,  66,  66,   0,   0, 147,   0,   0,   0,   0,   0,   0,   0,
     62,  62,  62,  62,   0,  62,  62,  62,  62,  62,  62,  62,   0,  62,  62,   0,
     62,  54,  54,  54,  54,  54,  54,  54,  62,  62,  62,   0,   0,   0,   0,   0,
     54,  54,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,  62,  62,  62,  62,
    102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102,   0,   0,   0,   0,
     35,  35,  35,  35,  35,  35,  35,  35,  35,  35,  35,   0,   0,   0,   0,   0,
     35,  35,  35,  35,  35,   0,   0,   0,  35,   0,   0,   0,   0,   0,   0,   0,
     35,  35,   0,   0,  35,  35,  35,  35,  56,  56,  56,  56,  56,  56,   0,   0,
     25,  25,  25,  25,  25,  25,  25,  56,  56,  56,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  56,  56,  56,  56,  56,  56,  56,  56,  25,  25,  56,  56,  56,
     56,  56,  56,  56,  25,  25,  25,  25,  25,  25,  56,  56,  56,  56,  25,  25,
      0,   0,  25,   0,   0,  25,  25,   0,   0,  25,  25,  25,  25,   0,  25,  25,
     25,  25,   0,  25,   0,  25,  25,  25,  25,  25,  25,  25,   0,  25,  25,  25,
     25,  25,  25,   0,   0,  25,  25,  25,  25,  25,   0,  25,  25,  25,  25,   0,
     25,  25,  25,  25,  25,   0,  25,   0,   0,   0,  25,  25,  25,  25,  25,  25,
     25,   0,  25,  25,  25,  25,  25,  25, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131,   0,   0,   0,   0,   0,   0,   0, 131, 131, 131, 131, 131,
      0, 131, 131, 131, 131, 131, 131, 131,  41,  41,  41,  41,  41,  41,  41,   0,
     41,   0,   0,  41,  41,  41,  41,  41,  41,  41,   0,  41,  41,   0,  41,  41,
     41,  41,  41,   0,   0,   0,   0,   0, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103,   0,   0,   0, 103, 103, 103, 103, 103, 103,   0,   0,
    103, 103,   0,   0,   0,   0, 103, 103, 154, 154, 154, 154, 154, 154, 154, 154,
    154, 154, 154, 154, 154, 154, 154,   0, 158, 158, 158, 158, 158, 158, 158, 158,
    158, 158,   0,   0,   0,   0,   0, 158,  39,  39,  39,  39,   0,  39,  39,   0,
     88,  88,  88,  88,  88,  88,  88,  88,  88,  88,  88,  88,  88,   0,   0,  88,
     88,  88,  88,  88,  88,  88,  88,   0,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   1,   1,
      4,   4,   4,   4,   0,   4,   4,   4,   0,   4,   4,   0,   4,   0,   0,   4,
      0,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   0,   4,   4,   4,   4,
      0,   4,   0,   4,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   4,
      0,   4,   0,   4,   0,   4,   4,   4,   0,   4,   0,   4,   0,   4,   0,   4,
      0,   4,   4,   4,   4,   0,   4,   0,   4,   4,   0,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   0,   0,   0,   0,   0,   4,   4,   4,   0,   4,   4,   4,
      0,   0,   0,   0,   0,   0,  25,  25,  54,  25,  25,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  25,  25,  25,  48,   0,   0,   0,   0,   0,   0,   0,
     48,  48,  48,   0,   0,   0,   0,   0,   0,  25,   0,   0,   0,   0,   0,   0
};

static UINT16 script_table_2[3888] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   2,   3,   1,   2,   2,   3,
      0,   0,   0,   0,   0,   4,   0,   4,   2,   2,   5,   2,   2,   2,   5,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   6,   0,   0,   0,   0,   7,   8,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,  11,
     12,  13,  14,  14,  15,  14,  14,  14,  14,  14,  14,  14,  16,  17,  14,  14,
     18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,
     19,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,
     18,  18,  18,  18,  18,  18,  20,  21,  21,  21,  22,  20,  21,  21,  21,  21,
     21,  23,  24,  25,  25,  25,  25,  25,  25,  26,  25,  25,  25,  27,  28,  26,
     29,  30,  31,  32,  31,  31,  31,  31,  33,  34,  35,  31,  31,  31,  36,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  29,  31,  31,  31,  31,
     37,  38,  37,  37,  37,  37,  37,  37,  37,  39,  31,  31,  31,  31,  31,  31,
     40,  40,  40,  40,  40,  40,  41,  26,  42,  42,  42,  42,  42,  42,  42,  43,
     44,  44,  44,  44,  44,  45,  44,  46,  47,  47,  47,  48,  37,  49,  31,  31,
     31,  50,  51,  31,  31,  31,  31,  31,  31,  31,  31,  31,  52,  31,  31,  31,
     53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  54,  53,  55,  53,  53,  53,
     56,  57,  58,  59,  59,  60,  61,  62,  57,  63,  64,  65,  66,  59,  59,  67,
     68,  69,  70,  71,  71,  72,  73,  74,  69,  75,  76,  77,  78,  71,  79,  26,
     80,  81,  82,  83,  83,  84,  85,  86,  81,  87,  88,  26,  89,  83,  90,  91,
     92,  93,  94,  95,  95,  96,  97,  98,  93,  99, 100, 101, 102,  95,  95,  26,
    103, 104, 105, 106, 107, 104, 108, 109, 104, 105, 110,  26, 111, 108, 108, 112,
    113, 114, 115, 113, 113, 115, 113, 116, 114, 117, 118, 119, 120, 113, 121, 113,
    122, 123, 124, 122, 122, 124, 125, 126, 123, 127, 128, 128, 129, 122, 130,  26,
    131, 132, 133, 131, 131, 131, 131, 131, 132, 133, 134, 131, 135, 131, 131, 131,
    136, 137, 138, 139, 137, 137, 140, 141, 138, 142, 143, 137, 144, 137, 145,  26,
    146, 147, 147, 147, 147, 147, 147, 148, 147, 147, 147, 149,  26,  26,  26,  26,
    150, 151, 152, 152, 153, 152, 152, 154, 155, 154, 152, 156,  26,  26,  26,  26,
    157, 157, 157, 157, 157, 157, 157, 157, 157, 158, 157, 157, 157, 159, 158, 157,
    157, 157, 157, 158, 157, 157, 157, 160, 157, 160, 161, 162,  26,  26,  26,  26,
    163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163, 163,
    163, 163, 163, 163, 164, 164, 164, 164, 165, 166, 164, 164, 164, 164, 164, 167,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    169, 169, 169, 169, 169, 169, 169, 169, 169, 170, 171, 170, 169, 169, 169, 169,
    169, 170, 169, 169, 169, 169, 170, 171, 170, 169, 171, 169, 169, 169, 169, 169,
    169, 169, 170, 169, 169, 169, 169, 169, 169, 169, 169, 172, 169, 169, 169, 173,
    169, 169, 169, 174, 175, 175, 175, 175, 175, 175, 175, 175, 175, 175, 176, 176,
    177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177,
    178, 178, 178, 179, 180, 180, 180, 180, 180, 180, 180, 180, 180, 181, 180, 182,
    183, 183, 184, 185, 186, 186, 187,  26, 188, 188, 189,  26, 190, 191, 192,  26,
    193, 193, 193, 193, 193, 193, 193, 193, 193, 193, 193, 194, 193, 195, 193, 195,
    196, 197, 197, 198, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 199,
    197, 197, 197, 197, 197, 200, 177, 177, 177, 177, 177, 177, 177, 177, 201,  26,
    202, 202, 202, 203, 202, 204, 202, 204, 205, 202, 206, 206, 206, 207, 208,  26,
    209, 209, 209, 209, 209, 210, 209, 209, 209, 211, 209, 212, 193, 193, 193, 193,
    213, 213, 213, 214, 215, 215, 215, 215, 215, 215, 215, 216, 215, 215, 215, 217,
    215, 218, 215, 218, 215, 219,   9,   9,   9, 220,  26,  26,  26,  26,  26,  26,
    221, 221, 221, 221, 221, 221, 221, 221, 221, 222, 221, 221, 221, 221, 221, 223,
    224, 224, 224, 224, 224, 224, 224, 224, 225, 225, 225, 225, 225, 225, 226, 227,
    228, 228, 228, 228, 228, 228, 228, 229, 228, 230, 231, 231, 231, 231, 231, 231,
     18, 232, 164, 164, 164, 164, 164, 233, 224,  26, 234,   9, 235, 236, 237, 238,
      2,   2,   2,   2, 239, 240,   2,   2,   2,   2,   2, 241, 242, 243,   2, 244,
      2,   2,   2,   2,   2,   2,   2, 245,   9,   9,   9,   9,   9,   9,   9,   9,
     14,  14, 246, 246,  14,  14,  14,  14, 246, 246,  14, 247,  14,  14,  14, 246,
     14,  14,  14,  14,  14,  14, 248,  14, 248,  14, 249, 250,  14,  14, 251, 252,
      0, 253,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 254,   0, 255, 256,
      0, 257,   2, 258,   0,   0,   0,   0, 259,  26,   9,   9,   9,   9, 260,  26,
      0,   0,   0,   0, 261, 262,   4,   0,   0, 263,   0,   0,   2,   2,   2,   2,
      2, 264,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 257,  26,  26,  26,   0, 265,  26,  26,   0,   0,   0,   0,
    266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 267,   0,
      0,   0, 268,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    269, 269, 269, 269, 269, 269, 269, 269, 269, 269, 269, 269,   2,   2,   2,   2,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 270, 271,
    164, 164, 164, 164, 165, 166, 272, 272, 272, 272, 272, 272, 272, 273, 274, 273,
    169, 169, 171,  26, 171, 171, 171, 171, 171, 171, 171, 171,  18,  18,  18,  18,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 275,  26,  26,  26,  26,
    276, 276, 276, 277, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 278,  26,
    276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276,
    276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 279,  26,  26,  26,   0, 280,
    281,   0,   0,   0, 282, 283,   0, 284, 285, 286, 286, 286, 286, 286, 286, 286,
    286, 286, 287, 288, 289, 290, 290, 290, 290, 290, 290, 290, 290, 290, 290, 291,
    292, 293, 293, 293, 293, 293, 294, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 295,   0,   0, 293, 293, 293, 293,   0,   0,   0,   0, 280,  26, 290, 290,
    168, 168, 168, 295,   0,   0,   0,   0,   0,   0,   0,   0, 168, 168, 168, 296,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 290, 290, 290, 290, 290, 297,
    290, 290, 290, 290, 290, 290, 290, 290, 290, 290, 290,   0,   0,   0,   0,   0,
    276, 276, 276, 276, 276, 276, 276, 276,   0,   0,   0,   0,   0,   0,   0,   0,
    298, 298, 298, 298, 298, 298, 298, 298, 298, 298, 298, 298, 298, 298, 298, 298,
    298, 299, 298, 298, 298, 298, 298, 298, 300,  26, 301, 301, 301, 301, 301, 301,
    302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302, 302,
    302, 302, 302, 302, 302, 303,  26,  26,  18,  18,  18,  18,  18,  18,  18,  18,
     18,  18,  18,  18, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304,  26,
      0,   0,   0,   0, 305,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2, 306,   2,   2,   2,   2,   2,   2,   2, 307, 308, 309,  26,  26, 310,   2,
    311, 311, 311, 311, 311, 312,   0, 313, 314, 314, 314, 314, 314, 314, 314,  26,
    315, 315, 315, 315, 315, 315, 315, 315, 316, 317, 315, 318,  53,  53,  53,  53,
    319, 319, 319, 319, 319, 320, 321, 321, 321, 321, 322, 323, 168, 168, 168, 324,
    325, 325, 325, 325, 325, 325, 325, 325, 325, 326, 325, 327, 163, 163, 163, 328,
    329, 329, 329, 329, 329, 329, 330,  26, 329, 331, 329, 332, 163, 163, 163, 163,
    333, 333, 333, 333, 333, 333, 333, 333, 334,  26,  26, 335, 336, 336, 337,  26,
    338, 338, 338,  26, 171, 171,   2,   2,   2,   2,   2, 339, 340, 341, 175, 175,
    175, 175, 175, 175, 175, 175, 175, 175, 336, 336, 336, 336, 336, 342, 336, 343,
    168, 168, 168, 168, 344,  26, 168, 168, 295, 345, 168, 168, 168, 168, 168, 344,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 279, 276, 276,
    276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 346,  26,  26,  26,  26,
    347,  26, 348, 349,  25,  25, 350, 351, 352,  25,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31, 353,  26, 354,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31, 355,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31, 356,  31,  31,  31,  31,  31,  31, 357,  26,  26,  26,  26,  31,  31,
      9,   9,   0, 313,   9, 358,   0,   0,   0,   0, 359,   0, 257, 280, 360,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31, 361,
    362,   0,   0,   0,   1,   2,   2,   3,   1,   2,   2,   3, 363, 290, 289, 290,
    290, 290, 290, 364, 168, 168, 168, 295, 365, 365, 365, 366, 257, 257,  26, 367,
    368, 369, 368, 368, 370, 368, 368, 371, 368, 372, 368, 372,  26,  26,  26,  26,
    368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 368, 373,
    374,   0,   0,   0,   0,   0, 375,   0,  14,  14,  14,  14,  14,  14,  14,  14,
     14, 252,   0, 376, 377,  26,  26,  26,  26,  26,   0,   0,   0,   0,   0, 378,
    379, 379, 379, 380, 381, 381, 381, 381, 381, 381, 382,  26, 383,   0,   0, 280,
    384, 384, 384, 384, 385, 386, 387, 387, 387, 388, 389, 389, 389, 389, 389, 390,
    391, 391, 391, 392, 393, 393, 393, 393, 394, 393, 395,  26,  26,  26,  26,  26,
    396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 397, 397, 397, 397, 397, 397,
    398, 398, 398, 399, 398, 400, 401, 401, 401, 401, 402, 401, 401, 401, 401, 402,
    403, 403, 403, 403, 403,  26, 404, 404, 404, 404, 404, 404, 405, 406, 407, 408,
    407, 408, 409, 407, 410, 407, 410, 411,  26,  26,  26,  26,  26,  26,  26,  26,
    412, 412, 412, 412, 412, 412, 412, 412, 412, 412, 412, 412, 412, 412, 412, 412,
    412, 412, 412, 412, 412, 412, 413,  26, 412, 412, 414,  26, 412,  26,  26,  26,
    415,   2,   2,   2,   2,   2, 416, 307,  26,  26,  26,  26,  26,  26,  26,  26,
    417, 418, 419, 419, 419, 419, 420, 421, 422, 422, 423, 422, 424, 424, 424, 424,
    425, 425, 425, 426, 427, 425,  26,  26,  26,  26,  26,  26, 428, 428, 429, 430,
    431, 431, 431, 432, 433, 433, 433, 434,  26,  26,  26,  26,  26,  26,  26,  26,
    435, 435, 435, 435, 436, 436, 436, 437, 436, 436, 438, 436, 436, 436, 436, 436,
    439, 440, 441, 442, 443, 443, 444, 445, 443, 446, 443, 446, 447, 447, 447, 447,
    448, 448, 448, 448,  26,  26,  26,  26, 449, 449, 449, 449, 450, 451, 450,  26,
    452, 452, 452, 452, 452, 452, 453, 454, 455, 455, 456, 455, 457, 457, 458, 457,
    459, 459, 460, 461,  26, 462,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    463, 463, 463, 463, 463, 463, 463, 463, 463, 464,  26,  26,  26,  26,  26,  26,
    465, 465, 465, 465, 465, 465, 466,  26, 465, 465, 465, 465, 465, 465, 466, 467,
    468, 468, 468, 468, 468,  26, 468, 469,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  31,  31,  31,  50,
    470, 470, 470, 470, 470, 471, 472,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    473, 473, 473, 473, 473,  26, 474, 474, 474, 474, 474, 475,  26,  26, 476, 476,
    476, 477,  26,  26,  26,  26, 478, 478, 478, 479,  26,  26, 480, 480, 481,  26,
    482, 482, 482, 482, 482, 482, 482, 482, 482, 483, 484, 482, 482, 482, 483, 485,
    486, 486, 486, 486, 486, 486, 486, 486, 487, 488, 489, 489, 489, 490, 489, 491,
    492, 492, 492, 492, 492, 492, 493, 492, 492,  26, 494, 494, 494, 494, 495,  26,
    496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 497, 137, 498,  26,
    499, 499, 500, 499, 499, 499, 499, 501,  26,  26,  26,  26,  26,  26,  26,  26,
    502, 503, 504, 505, 504, 506, 507, 507, 507, 507, 507, 507, 507, 508, 507, 509,
    510, 511, 512, 513, 513, 514, 515, 516, 511, 517, 518, 519, 520, 521, 521,  26,
    522, 522, 522, 522, 522, 522, 522, 522, 522, 522, 522, 523, 524,  26,  26,  26,
    525, 525, 525, 525, 525, 525, 525, 525, 525,  26, 525, 526,  26,  26,  26,  26,
    527, 527, 527, 527, 527, 527, 528, 527, 527, 527, 527, 528,  26,  26,  26,  26,
    529, 529, 529, 529, 529, 529, 529, 529, 530,  26, 529, 531, 197, 532,  26,  26,
    533, 533, 533, 533, 533, 533, 533, 534, 533, 534,  26,  26,  26,  26,  26,  26,
    535, 535, 535, 536, 535, 537, 535, 535, 538,  26,  26,  26,  26,  26,  26,  26,
    539, 539, 539, 539, 539, 539, 539, 540,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26, 541, 541, 541, 541, 541, 541, 541, 541, 541, 541, 542, 543,
    544, 545, 546, 547, 547, 547, 548, 549, 544,  26, 547, 550,  26,  26,  26,  26,
     26,  26,  26,  26, 551, 552, 551, 551, 551, 551, 551, 552, 553,  26,  26,  26,
    554, 554, 554, 554, 554, 554, 554, 554, 554,  26, 555, 555, 555, 555, 555, 555,
    555, 555, 555, 555, 556,  26, 177, 177, 557, 557, 557, 557, 557, 557, 557, 558,
    559, 560, 559, 559, 559, 559, 561, 559, 562,  26, 559, 559, 559, 563, 564, 564,
    564, 564, 565, 564, 564, 566, 567,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    568, 569, 570, 570, 570, 570, 568, 571, 570,  26, 570, 572, 573, 574, 575, 575,
    575, 576, 577, 578, 575, 579,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26, 580, 580, 580, 581,
     26,  26,  26,  26,  26,  26, 582,  26, 108, 108, 108, 108, 108, 108, 583, 584,
    585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585,
    585, 585, 585, 586,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 585, 587, 588,  26,
    585, 585, 585, 585, 585, 585, 585, 585, 589,  26,  26,  26,  26,  26,  26,  26,
     26,  26, 590, 590, 590, 590, 590, 590, 590, 590, 590, 590, 590, 590, 591,  26,
    592, 592, 592, 592, 592, 592, 592, 592, 592, 592, 592, 592, 592, 592, 592, 592,
    592, 592, 592, 592, 592, 593, 592, 594,  26,  26,  26,  26,  26,  26,  26,  26,
    595, 595, 595, 595, 595, 595, 595, 595, 595, 595, 595, 595, 595, 595, 595, 595,
    595, 595, 595, 595, 595, 595, 595, 595, 596,  26,  26,  26,  26,  26,  26,  26,
    304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304,
    304, 304, 304, 304, 304, 304, 304, 597, 598, 598, 598, 599, 598, 600, 601, 601,
    601, 601, 601, 601, 601, 601, 601, 602, 601, 603, 604, 604, 604, 605, 605,  26,
    606, 606, 606, 606, 606, 606, 606, 606, 607,  26, 606, 608, 608, 606, 606, 609,
    606, 606,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26, 610, 610, 610, 610, 610, 610, 610, 610,
    610, 610, 610, 611,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    612, 612, 612, 612, 612, 612, 612, 612, 612, 613, 612, 612, 612, 612, 612, 612,
    612, 614, 612, 612,  26,  26,  26,  26,  26,  26,  26,  26, 615,  26, 346,  26,
    616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616,
    616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616, 616,  26,
    617, 617, 617, 617, 617, 617, 617, 617, 617, 617, 617, 617, 617, 617, 617, 617,
    617, 617, 617, 617, 617, 617, 617, 617, 617, 617, 618,  26,  26,  26,  26,  26,
    616, 619,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26, 620, 621,
    622, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286,
    286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286, 286,
    286, 286, 286, 286, 623,  26,  26,  26,  26,  26, 624,  26, 625,  26, 626, 626,
    626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626,
    626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 627,
    628, 628, 628, 628, 628, 628, 628, 628, 628, 628, 628, 628, 628, 629, 628, 630,
    628, 631, 628, 632, 280,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
      9,   9,   9,   9,   9, 633,   9,   9, 220,  26,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 280,  26,  26,  26,  26,  26,  26,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 275,  26,
      0,   0,   0,   0, 257, 362,   0,   0,   0,   0,   0,   0, 634, 635,   0, 636,
    637, 638,   0,   0,   0, 639,   0,   0,   0,   0,   0,   0,   0, 265,  26,  26,
     14,  14,  14,  14,  14,  14,  14,  14, 246,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,   0,   0, 280,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 257,  26,   0,   0,   0, 259,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 254,   0,   0,   0,   0,   0,
      0,   0,   0, 254, 640, 641,   0, 642, 643,   0,   0,   0,   0,   0,   0,   0,
    268, 644, 254, 254,   0,   0,   0, 645, 646, 647, 648,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 275,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 267,   0,   0,   0,   0,   0,   0,
    649, 649, 649, 649, 649, 649, 649, 649, 649, 649, 649, 649, 649, 649, 649, 649,
    649, 650,  26, 651, 652, 649,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
      2,   2,   2, 347,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    653, 269, 269, 654, 655, 656,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    657, 657, 657, 657, 657, 658, 657, 659, 657, 660,  26,  26,  26,  26,  26,  26,
     26,  26, 661, 661, 661, 662,  26,  26, 663, 663, 663, 663, 663, 663, 663, 664,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26, 171, 665, 169, 171,
    666, 666, 666, 666, 666, 666, 666, 666, 666, 666, 666, 666, 666, 666, 666, 666,
    666, 666, 666, 666, 666, 666, 666, 666, 667, 666, 668,  26,  26,  26,  26,  26,
    669, 669, 669, 669, 669, 669, 669, 669, 669, 670, 669, 671,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26, 362,   0,
      0,   0,   0,   0,   0,   0, 376,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    362,   0,   0,   0,   0,   0,   0, 275,  26,  26,  26,  26,  26,  26,  26,  26,
    672,  31,  31,  31, 673, 674, 675, 676, 677, 678, 673, 679, 673, 675, 675, 680,
     31, 681,  31, 682, 683, 681,  31, 682,  26,  26,  26,  26,  26,  26,  51,  26,
      0,   0,   0,   0,   0, 280,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 280,  26,   0, 257, 362,   0, 362,   0, 362,   0,   0,   0, 275,  26,
      0,   0,   0,   0,   0, 275,  26,  26,  26,  26,  26,  26, 684,   0,   0,   0,
    685,  26,   0,   0,   0,   0,   0, 280,   0, 259, 313,  26, 275,  26,  26,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 686,   0, 376,   0, 376,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 280,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 259,   0, 280, 259,  26,
      0, 280,   0,   0,   0,   0,   0,   0,   0,  26,   0, 313,   0,   0,   0,   0,
      0,  26,   0,   0,   0, 275, 313,  26,  26,  26,  26,  26,  26,  26,  26,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 280,  26,   0, 275, 376, 376,
    257,  26,   0,   0,   0, 376,   0, 265, 275,  26,   0, 313,   0,  26, 257,  26,
      0,   0, 359,   0,   0,   0,   0,   0,   0, 265,  26,  26,  26,  26,   0, 313,
    276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276,  26,  26,  26,  26,
    276, 276, 276, 276, 276, 276, 276, 687, 276, 276, 276, 276, 276, 276, 276, 276,
    276, 276, 276, 279, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276,
    276, 276, 276, 276, 346,  26, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276,
    276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 276, 687,  26,  26,  26,
    276, 276, 276, 279,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    276, 276, 276, 276, 276, 276, 276, 276, 276, 688,  26,  26,  26,  26,  26,  26,
    689,  26,  26,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  26,  26
};

static UINT8 script_table_3[720] = {
      0,   1,   2,   2,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,
     14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  32,  33,  34,  35,  36,  37,  37,  37,  37,  37,  38,  39,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,   2,   2,  53,  54,
     55,  56,  57,  58,  59,  59,  59,  59,  60,  59,  59,  59,  59,  59,  59,  59,
     61,  61,  59,  59,  59,  59,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,
     72,  73,  74,  75,  76,  77,  78,  59,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  79,  70,  70,  70,  70,
     80,  80,  80,  80,  80,  80,  80,  80,  80,  81,  82,  82,  83,  84,  85,  86,
     87,  88,  89,  90,  91,  92,  93,  94,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  95,
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,
     96,  96,  70,  70,  97,  98,  99, 100, 101, 101, 102, 103, 104, 105, 106, 107,
    108, 109, 110, 111,  96, 112, 113, 114, 115, 116, 117, 118, 119, 119, 120, 121,
    122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132,  96, 133, 134, 135, 136,
    137, 138, 139, 140, 141, 142, 143,  96, 144, 145,  96, 146, 147, 148, 149,  96,
    150, 151, 152, 153, 154, 155,  96,  96, 156, 157, 158, 159,  96, 160,  96, 161,
    162, 162, 162, 162, 162, 162, 162, 163, 164, 162, 165,  96,  96,  96,  96,  96,
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 166,
    167, 167, 167, 167, 167, 167, 167, 167, 168,  96,  96,  96,  96,  96,  96,  96,
     96,  96,  96,  96,  96,  96,  96,  96, 169, 169, 169, 169, 170,  96,  96,  96,
    171, 171, 171, 171, 172, 173, 174, 175,  96,  96,  96,  96, 176, 177, 178, 179,
    180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180,
    180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 181,
    180, 180, 180, 180, 180, 180, 182, 182, 182, 183, 184,  96,  96,  96,  96,  96,
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 185,
    186, 187, 188, 189, 189, 190,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,
     96,  96,  96,  96,  96,  96,  96,  96, 191, 192,  96,  96,  96,  96,  96,  96,
     96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 193, 194,
     59, 195, 196, 197, 198, 199, 200,  96, 201, 202, 203,  59,  59, 204,  59, 205,
    206, 206, 206, 206, 206, 207,  96,  96,  96,  96,  96,  96,  96,  96, 208,  96,
    209,  96, 210,  96,  96, 211,  96,  96,  96,  96,  96,  96,  96,  96,  96, 212,
    213, 214, 215,  96,  96,  96,  96,  96, 216, 217, 218,  96, 219, 220,  96,  96,
    221, 222,  59, 223, 224,  96,  59,  59,  59,  59,  59,  59,  59, 225, 226, 227,
    228, 229,  59,  59, 230, 231,  59, 232,  96,  96,  96,  96,  96,  96,  96,  96,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70, 233,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70, 234,  70,
    235,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70, 236,  70,  70,
     70,  70,  70,  70,  70,  70,  70, 237,  96,  96,  96,  96,  96,  96,  96,  96,
     70,  70,  70,  70, 238,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,
     70,  70,  70,  70,  70,  70, 239,  96,  96,  96,  96,  96,  96,  96,  96,  96,
    240,  96, 241, 242,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96
};

static UINT8 script_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   8,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   9,  10,  11,  11,  11,  11,  12,  13,  13,  13,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  13,  22,  13,  13,  13,  13,  23,  24,  24,
     25,  26,  13,  13,  13,  27,  28,  29,  13,  30,  31,  32,  33,  34,  35,  36,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  37,   7,  38,  39,   7,  40,   7,   7,   7,  41,  13,  42,
      7,   7,  43,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     44,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13
};

UINT32 lookup_script(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = script_table_4[block];
    offset = (codepoint >> 7) & 0xF;
    block = script_table_3[(block << 4) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = script_table_2[(block << 4) + offset];
    offset = codepoint & 0x7;
    value = script_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Sentence_Break. */

static UINT8 sentence_break_table_1[952] = {
      0,   0,   0,   0,   0,  12,   6,  12,  12,   3,   0,   0,  12,  13,   2,   0,
      0,   0,   0,   2,   2,   2,   0,   0,  10,  10,   1,   0,   8,   8,   8,   8,
      8,   8,  10,   0,   0,   0,   0,  13,   0,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,   2,   0,   2,   0,   0,   0,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   2,   0,  11,   0,   0,  12,   0,   0,   0,   0,   0,   7,   2,
      0,   5,   0,   0,   0,   7,   0,   0,  14,  14,  14,   0,  14,  14,  14,   7,
      7,   7,   7,   0,  14,   7,  14,   7,   7,  14,   7,  14,   7,   7,  14,   7,
     14,  14,   7,  14,   7,  14,   7,   7,   7,  14,  14,   7,  14,   7,  14,  14,
      7,  14,  14,  14,   7,   7,  14,  14,  14,   7,   7,   7,  14,   7,   7,   9,
      9,   9,   9,   9,   9,   7,   7,   7,   7,   9,   9,   9,   7,   7,   0,   0,
      0,   0,   9,   9,   9,   9,   0,   0,   7,   0,   0,   0,   9,   0,   9,   0,
      4,   4,   4,   4,   9,   0,  14,   7,   0,   0,   7,   7,   7,   7,   0,  14,
      0,   0,  14,   0,  14,   0,  14,  14,  14,  14,   0,  14,   7,   7,   7,  14,
     14,   7,   0,  14,  14,   7,   0,   4,   4,   4,  14,   7,   0,   9,   0,   0,
      0,  10,   0,   0,   7,  13,   0,   0,   0,   4,   4,   4,   4,   4,   0,   4,
      0,   4,   4,   0,   9,   9,   9,   0,   0,   0,   0,   9,   5,   5,   5,   5,
      5,   5,   0,   0,  10,  10,   0,   0,   4,   4,   4,   0,   5,  13,  13,  13,
      9,   9,   9,   4,   8,   8,   0,   8,   8,   0,   9,   9,   4,   9,   9,   9,
     13,   9,   4,   4,   4,   5,   0,   4,   4,   9,   9,   4,   4,   0,   4,   4,
      4,   4,   9,   9,   8,   8,   9,   9,   9,   0,   0,   9,  13,  13,  13,   0,
      0,   0,   0,   5,   9,   4,   9,   9,   0,   9,   9,   9,   9,   9,   4,   4,
      4,   9,   0,   0,  10,  13,   9,   0,   0,   4,   0,   0,   4,   4,   9,   4,
      9,   4,   4,   4,   4,   4,   0,   0,   0,  13,   0,   0,   0,  13,  13,   0,
      4,   4,   5,   4,   4,   9,   4,   4,  13,  13,   8,   8,   9,   0,   9,   9,
      4,   0,   0,   4,   4,   4,   9,   0,   0,   0,   0,   4,   9,   9,   0,   9,
      0,   0,   8,   8,   9,   0,   4,   0,   0,   9,   9,   0,   9,   4,   0,   0,
      9,   0,   0,   0,   0,   9,   4,   4,   0,   0,   4,   9,   0,   0,   4,   4,
      0,   0,   4,   0,   4,   0,   4,   0,   8,   8,   0,   0,   0,   9,   0,   9,
      0,   4,   0,   4,   0,   4,   2,   2,   2,   2,   4,   4,   4,   0,   0,   0,
      4,   4,   4,   9,   8,   8,  13,  13,   8,   8,   4,   4,   0,  14,   0,   0,
      0,   0,  13,   0,  13,   0,   0,   0,  14,  14,   0,   0,   9,   0,  13,   9,
     12,   9,   9,   9,   9,   9,   9,   2,   2,   0,   0,   0,   4,  13,  13,   0,
      9,   0,   4,   4,   0,   0,  10,  13,  10,  13,   0,   4,   9,   4,   4,   9,
      9,   4,   9,   0,  13,  13,  13,  13,   0,   0,  13,  13,   9,   9,  13,  13,
      0,  14,   0,  14,   7,   0,   7,   7,  14,   0,   7,   0,  14,   0,   0,   0,
     12,  12,  12,  12,  12,  12,  12,   5,   4,   4,   5,   5,   0,   0,   0,  10,
     10,   0,   0,   0,   2,   2,   2,   2,   1,   0,   0,   0,  11,  11,   5,   5,
      5,   5,   5,  12,   0,   2,   2,   0,  13,  13,   0,   0,   0,   2,   2,  13,
      0,   0,   0,  12,   5,   0,   5,   5,   0,   2,   2,   7,   0,   0,   0,  14,
      0,   0,   7,  14,  14,  14,   7,   7,  14,   0,  14,   0,  14,  14,   0,   7,
      9,   7,   0,   0,   0,  14,   7,   7,   0,   0,   7,   0,   9,   9,   9,  14,
      0,   0,  14,  14,   0,   0,   2,   2,  14,   7,   7,  14,   7,  14,   7,   4,
      7,   7,   0,   7,   0,   0,  13,   9,   0,   0,   2,   0,  13,   2,   2,   2,
     12,  10,  13,   0,   0,   2,   2,   2,   9,   9,   0,  13,   9,   0,  13,  13,
     14,   7,   9,   4,   4,   4,   0,   9,   7,   7,   4,   4,   4,   4,   0,  13,
      0,   0,  14,   7,   9,   0,   0,  14,   7,  14,   7,   9,   7,  14,   7,   0,
     14,   7,   0,   7,   0,   7,  14,   7,  14,   7,   0,   0,   9,  14,   7,   9,
      7,   7,   7,   9,   9,   9,   4,   9,   0,   9,   9,   4,   0,  13,  13,  13,
      0,   0,   9,   4,  13,  13,   9,   9,   9,   4,   4,   0,   7,   9,   0,   0,
      4,   4,   4,  13,   0,   0,   0,   7,   0,   9,   4,   9,   9,   9,   2,   2,
     10,  10,   0,  10,   0,  10,  10,   0,   2,   0,   0,   2,   0,  10,  13,  13,
     10,   2,   2,   2,   2,   2,   2,   0,   9,   0,   0,   5,   0,   2,   0,   2,
      2,  13,   2,   2,  10,   0,   9,   9,   0,   5,   5,   5,   7,   9,   9,   7,
      9,   9,   0,   4,   4,   4,  13,  13,   0,   5,  13,  13,  13,  13,   4,   0,
      4,   0,   8,   8,   0,   0,   9,   0,   9,  13,  13,   0,   4,  13,   4,   4,
      8,   8,   9,   0,  13,  13,   0,  13,  13,   0,   4,   0,   9,  13,   0,   0,
      9,   9,   9,  13,   4,   0,  13,  13,  13,   0,  13,   0,   4,   9,   0,   9,
     13,   9,   0,   0,   5,   0,   0,   0,   4,  13,   0,   0,   0,   4,   4,  13,
      4,   4,   4,   5,   5,   5,   5,   4,   0,  14,  14,   0,  14,   0,   7,   7,
      7,   7,   9,   7,   9,   9,   4,   0
};

static UINT8 sentence_break_table_2[6880] = {
      0,   0,   1,   2,   0,   0,   0,   0,   3,   4,   5,   6,   7,   7,   8,   9,
     10,  11,  11,  11,  11,  11,  12,  13,  14,  15,  15,  15,  15,  15,  16,  13,
      0,  17,   0,   0,   0,   0,   0,   0,  18,   0,  19,  20,   0,  21,  19,   0,
     11,  11,  11,  11,  11,  22,  11,  23,  15,  15,  15,  15,  15,  24,  15,  15,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  26,  26,
     26,  26,  27,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  28,  29,
     30,  31,  32,  33,  28,  31,  34,  28,  25,  31,  29,  31,  32,  26,  35,  34,
     36,  28,  31,  26,  26,  26,  26,  27,  25,  25,  25,  25,  30,  31,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  15,  33,  30,
     26,  23,  25,  25,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  37,  15,  15,  15,  15,  15,  15,  15,  15,  38,  36,
     39,  40,  36,  36,  41,   0,   0,   0,  15,  42,   0,  43,   0,   0,   0,   0,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  25,  45,  46,  47,
      0,  48,  22,  49,  32,  11,  11,  11,  50,  11,  11,  15,  15,  15,  15,  15,
     15,  15,  15,  51,  33,  34,  25,  25,  25,  25,  25,  25,  15,  52,  30,  32,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  25,  25,  25,  25,  25,  25,  25,  25,
     53,  44,  54,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     28,  26,  26,  29,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  10,  11,  11,  11,
     11,  11,  11,  11,  11,  22,  55,  56,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  15,  57,   0,  58,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  59,
     60,  59,   0,   0,  36,  36,  36,  36,  36,  36,  61,  62,  36,   0,   0,   0,
     63,  64,   0,  65,  44,  44,  66,  67,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  68,  44,  44,  44,  44,  44,   7,   7,  69,  70,  71,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  72,  44,  73,  44,  74,  75,  76,   7,   7,  77,  78,
     79,   0,   0,  80,  81,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44,
     44,  44,  66,  82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  83,  44,  44,  84,   0,   0,   0,
      7,   7,  77,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  41,  85,  86,
     36,  36,  36,  36,  36,  83,  87,  44,  44,  88,  88,  89,   0,   9,  90,  91,
     36,  36,  36,  36,  36,  36,  88,   0,  36,  36,  61,   0,  36,  36,  36,  36,
     36,  36,  82,  61,  64,   0,  44,  44,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  83,  44,  44,  44,  44,  44,  92,  44,  44,  44,  44,  44,  44,  44,
     44,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  83,  93,
     44,  44,  44,  44,  88,  44,  36,  36,  83,  94,   7,   7,  82,  36,  36,  36,
     88,  82,  36,  78,  78,  36,  36,  36,  36,  36,  95,  36,  43,  40,  41,  93,
     44,  96,  96,  97,   0,  98,   0,  99,  83, 100,   7,   7,  41,   0,   0, 101,
     58,  82,  61,  62,  78,  36,  36,  36,  36,  36,  95,  36,  95, 102,  41,  75,
     66,  98,  96,  89,  86,   0,  82,  43,   0, 100,   7,   7,  76, 103,   0,   0,
     58,  82,  36,  99,  99,  36,  36,  36,  36,  36,  95,  36,  95,  82,  41,  93,
     44,  59,  59,  89, 104,   0,   0,   0,  83, 100,   7,   7,   0,   0, 105,  44,
     58,  82,  36,  78,  78,  36,  36,  36,  36,  36,  95,  36,  95,  82,  41,  93,
     44,  96,  96,  89,   0,  58,   0,  99,  83, 100,   7,   7,  55,   0,   0,   0,
    106,  82,  61,  40,  95,  41, 102,  95,  62, 104,  61,  40,  36,  36,  41, 107,
     66, 107,  75,  89, 104,  98,   0,   0,   0, 100,   7,   7,   0,   0,   0,   0,
     44,  71,  36,  95,  95,  36,  36,  36,  36,  36,  95,  36,  36,  36,  41,  93,
     44,  75,  75,  89,   0,  60,  61,  55,  83, 100,   7,   7,   0,   0,   0,   0,
     88,  82,  36,  95,  95,  36,  36,  36,  36,  36,  95,  36,  36,  82,  41,  93,
     44,  75,  75,  89,   0,  60,   0, 102,  83, 100,   7,   7, 102,   0,   0,   0,
     44,  36,  36,  95,  95,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  93,
     44,  75,  75,  97,   0,  68,   0,  62,  83, 100,   7,   7,   0,   0,  40,  36,
     58,  82,  36,  36,  36,  61,  40,  36,  36,  36,  36,  36,  99,  36,  36,  55,
     36,  61, 108,  98,  44, 109,  44,  44,   0, 100,   7,   7, 107,   0,   0,   0,
     82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  81,  44,  66,   0,
     36,  68,  44,  66,   7,   7, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    102,  95,  61,  36,  36,  36,  36,  36,  36, 111,  36,  36,  81,  44,  44,  84,
     36,  43,  44,  89,   7,   7, 110,  36,   0,   0,   0,   0,   0,   0,   0,   0,
    104,   0,   0,   0,   0,   0,  89,   0,   7,   7, 110,   0,   0, 112, 113, 114,
     36,  36,  82,  36,  36,  36,  36,  36,  36,  36,  36, 104,  58,  44,  44,  44,
     44,  75,  36,  88,  44,  44,  58,  44,  44,  44,  44,  44,  44,  44,  44, 115,
      0, 108,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44,  44, 116,
      7,   7, 117,   0,  36,  83,  76,  83,  93,  74,  44,  76,  88,  71,  36,  36,
     83,  44,  44,  87,   7,   7, 118,  89,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  50,   0, 119,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  95,  41,  36,  61,  95,  41,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  95,  41,  36,  36,  36,  36,  36,  36,  36,  36,  95,  41,  36,  61,
     95,  41,  36,  36,  36,  61,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  95,  41,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  61,  58, 120,   9, 121,   0,   0,   0,   0,   0,
     36,  36,  36,  36,   0,   0,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11, 122,  15,  39,
     82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 123,  36,  36,  36,  36,
    124,  36,  36,  36,  36,  36, 125, 126,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  40,  36,  36, 104,   0,
     36,  36,  36,  36,  83,  89,   0,  62,  36,  36,  36,  36,  83, 127,   0,   0,
     36,  36,  36,  36,  83,   0,   0,   0,  36,  36,  36,  95, 128,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,
     44,  44,  44,  44,  44,  62,   0, 103,   7,   7, 110,   0,   0,   0,   0,   0,
    129,   0, 130,  92,   7,   7, 110,   0,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,
     36, 131,  36,  36,  36,  36,  36,  36,  36,  36, 132,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  61,  44,  44,  44,   0,  44,  44,  44,   0,
      0,  94,   7,   7,  36,  36,  36,  36,  36,  36,  36,  41,  36, 104,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,  36,  36,  36,  36,
     36,  36,  41,   0,   7,   7, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  68,  44,   0,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  88,  44,  66,  44,  44,  44,  44,  44,  44,  44,  96,
      7,   7, 110,   0,   7,   7, 110,   0,   0,  62, 133,   0,  44,  44,  44,  44,
     44,  44,  44,  66,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     44,  71,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,
     44,  71,  36, 104,   7,   7, 117, 134,   0,   0,  98,  44,  44,   0,   0,  91,
    116,  36,  36,  36,  36,  36,  36,  36,  88,  44,  44,  76,   7,   7,  77,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  83,  44,  44,  44,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44,  44,   9, 121,
      7,   7, 110,  82,   7,   7,  77,  36,  36,  36,  36,  36,  36,  36,  36, 135,
     15,  15,  42,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  82,
      0,   0,   0,   0,  66,  44,  44,  44,  44,  44,  71,  81,  36,  74,  97,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  34,  15,  27,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     15,  15,  11,  11,  15,  39,  11, 122,  15,  15,  11,  11,  15,  15,  11,  11,
     15,  39,  11, 122,  15,  15, 136, 136,  15,  15,  11,  11,  15,  15,  15,  39,
     15,  15,  11,  11,  15,  15,  11,  11,  15,  15,  11,  11,  15, 137,  11, 138,
     46, 137,  11, 139,  15,  46,  11,   0,  15,  15,  11, 139,  46, 137,  11, 139,
    140, 140, 141, 142, 143, 144, 145, 145,   0, 146, 147, 148,   0,   0, 149, 150,
      0, 151, 150,   0,   0,   0,   0, 152,  63, 153,  63,  63,  21,   0,   0, 154,
      0,   0,   0, 149,  15,  15,  15,  42,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  44,  44,  44,  44,  44,  44,  44,  44, 115,   0,   0,   0,
     48, 155, 156, 157,  23, 119,  10, 122,   0, 158,  49, 159,  11,  38, 160,  33,
      0, 161,  39, 162,   0,   0,   0,   0,  11,  11,  11,  11,  15,  15,  15,  15,
    163,  38, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 145,   0,   0,   0,   0,   0,   0,   0, 149,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 164,  11,  11,
     11,  11,  11,  11,  15,  15,  15,  15,  15,  15,  39,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   4, 145, 126,   0, 145, 145, 145,   5,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 149,   0,   0,   0,   0,   0,   0,   0, 165, 145, 145,   0,   0,   0,   0,
      4, 145, 145, 145, 145, 145, 126,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 145,   0,   0,   0,   0,   0,   0,   0,   0,   5,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  31, 166,  26,  32,  25,  29,  15,  33,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  42, 155, 167,  54,   0,   0,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  15, 168,   0,  21,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,  62,   0,   0,   0,  98,
     36,  36,  36,  36,  36,  61,   0,   0,  36,  61,  36,  61,  36,  61,  36,  61,
     36,  61,  36,  61,  36,  61,  36,  61,  44,  44,  44,  44,  44,  44,  44,  44,
    145, 145, 145,   5,   0,   0,   0,   5, 145, 145,   5, 169,   0,   0,   0, 121,
    170,   0,   0,   0,   9, 171, 145, 126,   0,   0,   0,   0,   0,   0,   0,   0,
    172,  82, 145, 145,   5, 145, 145, 173,  82,  36,  83,  44,  82,  41,  36, 104,
     82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  61,  60,  82,  82,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  36,
      0,  82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  82,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  61,   0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 174,
     36,  36,  36, 175,  36,  36,  36,  36,   7,   7,  77,   0,   0,   0,   0,   0,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25, 176,  66,  44,  44, 177,
     25,  25,  25,  25,  25,  25,  25, 178,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 179,   9,   0,   0,
      0,   0,   0,   0,   0,  62,  36,  36, 180,  25,  25,  25,  27,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  15,  15,  26,  30,
     25,  25, 181, 182,  25,  27,  25,  25,  25,  25,  31,  23,  11,  25,  25,  25,
     25,  11, 183,   0, 184, 185, 186,   0,   0,   0,   0,   0,  40, 187, 188,  36,
    189, 189,  68,  36,  36,  36,  36,  36,  68,  44,   0, 115,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 134,   0,   0,
     76,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,
     44,  89,   0, 134,   7,   7, 110,   0,  44,  44,  44,  44,  76,  36,  62, 190,
      7,   7,  77,  36,  36,  36,  36,  36,  36,  83,  44, 179,  36,  36,  36,  36,
     36,  68,  44,  44,  44,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36, 104,
     44,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44,
    115,   0, 150,  62,   7,   7, 110,   0,  36,  81,  36,  36,   7,   7,  77,  61,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  88,  44,  44,  66,   0,   0,
     68,  36,  36,  89,   7,   7, 110, 191,  36,  36,  36,  36,  36,  61, 192,  76,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  93,  74,  71,  83,
    132,   0,   0,   0,   0,   0,  62,  41,  36,  36,  68,  44, 193, 194,   0,   0,
     82,  61,  82,  61,  82,  61,   0,   0,  36,  61,  36,  61,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  24,  15,  15,  15, 195,   0,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     36,  36,  36,  36,  36,  36,  36,  36,  68,  44, 196,  89,   7,   7, 110,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,   0,  36,  36,  36,  36,
     36,  61,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     15,  24,   0,   0, 197,  15,   0, 198,  36,  36,  95,  36,  36,  61,  36,  43,
     99,  95,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0,   0,
      0,   0,   0,   0,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 199,
      0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  40,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,   0,
     44,  44,  44,  44, 200,   4, 126,   0,  44,  44,  44,  44, 201, 173, 145, 145,
    145, 202, 126,   0,   6, 203, 204, 205, 143,   0,   0,   0,  36,  95,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 206,
     90,   0,   5,   6,   7,   7,   8,   9,  10,  11,  11,  11,  11,  11,  12,  13,
     14,  15,  15,  15,  15,  15,  16, 207, 208, 209,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  83,  36,  36,  36,  36,  36,  36,  36,  61,
     40,  36,  40,  36,  40,  36,  40, 104,   0,   0,   0,   0,   0,   0, 210,   0,
     36,  36,  36,  82,  36,  36,  36,  36,  36,  61,  36,  36,  36,  36,  61,  99,
     36,  36,  36,  41,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  86,
     36,  36,  36,  36,  36,  36,  36, 104,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36, 104,   0,   0,   0, 115,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,   0,   0,   0,  82,  36,  36,  36,  36,
     36,  36,  61,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  83,  66,   0,
     36,  36,  36,  36,  36,  36,  36,  41,  36,  36,  36,  36,  36,  36,  36,  36,
     36,   0,  36,  36,  82,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  41,   7,   7, 110,   0,  11,  11,  11,  11,
     11,  11,  11,  11,  11,   0,  15,  15,  15,  15,  15,  15,  15,  15,  15,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,   0,  11,  11,  22,  11,
     11,  11,  22,  11,  22, 159,  15,  15, 168,  15,  15,  15, 168,  15, 168,  42,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,   0,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,   0,   0,   0,   0,   0,   0,
    211, 168,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15, 137,  15,  24,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  41,  95,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  99, 104,  78,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,  36,  36,  36,  61,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  61,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  61,  41,   0,   0,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,  36,  36,  36,  36,  41,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,  40,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     88,  60,   0,  44,  36,  82,  82,  36,  36,  36,  36,  36,  36,  41,  66,  98,
      0,   0,   0,   0,   0, 134,   0,   0,  36,  36,  36,  36,  36,  36,  36, 104,
     36,  36,  36,  36,  36,  36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  82,  36,  36,  36,  36,  36,  36, 194,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,  36,  36,  61,   0,   0,   0,
     36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  22,   0,   0,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  24,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  44,   0,   0,   7,   7, 110,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 212, 115,  41,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36, 104,   0,  62,   0,   0,  36,  36,  36,  36,
     36,  83,  44,  44, 115, 191, 150,   0,   0,   0,   0,   0,  36,  36,  36,  36,
     83, 213, 150,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,
     36, 104,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  36,  61,   0,   0,
    116,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,
     44, 196, 121,   0,   0,   0,   0,   0,   0, 100,   7,   7,  74,  84,   0,  98,
    116,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  66, 214,
    215,   0,   0,  20,  36,  36,  36,  36,  36,  36, 104,   0,   7,   7, 110,   0,
    116,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44, 216,   7,   7,
    191, 131,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,  68, 217,   0,   0,
    116,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44,
     71, 218,  58, 219,   7,   7, 220, 175,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  99,  36,  36,  36,  36,  36,  36,  44,  44,  44, 221, 222,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  61,  95,  99,  36,  36,  36,  99,  36,  36, 223,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  66,   0,   7,   7, 110,   0,
     44,  82,  36,  78,  78,  36,  36,  36,  36,  36,  95,  36,  95,  82, 212,  93,
     44,  96,  96,  89, 104,  98,   0,  82,  83, 107,  44, 115,  44, 115,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  88,  44,  44,
     44, 116, 224, 121,   7,   7, 110, 106,  41,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44,
     44,  99,   0,   0,   7,   7, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  89,  44,  44,
    225,   0, 191, 133, 133, 133,  36,  89,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44,
    127, 104,   0,   0,   7,   7, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44, 104,   0,
      7,   7, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  61,  58,  44,  44,  44,   0,   7,   7, 110,  79,
     36,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  66,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,
     15,  15,  15,  15,  15,  15,  15,  15,   7,   7, 110,   0,   0,   0,   0,  62,
     36,  61,  55,  36,  36, 102,  36,  36,  36,  36,  36,  36,  44,  59,  96, 116,
     93, 226,   0,   0,   7,   7, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  40,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  88,  44, 107,  44, 227, 115,   0,   0,   0,   0,   0,   0,
     88,  44, 116,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  87,  66,
    134,  98,   0,   0,  88,  44,  44,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  83,  44,  44,  44, 179, 228,   0,   0,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,
     36,  36,  95,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  66,  44,  44,
    218,   0,   0,   0,   7,   7, 110,   0,   0,   0,   0,   0,  40,  36,  36,  36,
     36,  36,  36,  36, 107,  44,  44,  44,  44,  44,  58,  44,  44,  66,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  61,  99,  36,  36,  36,  36,  36,  36,  36,  36,  36,  88,  66, 108,  59,
     44,  87,   0,   0,   7,   7, 110,   0,  36,  99,  95,  36,  36,  36,  36,  36,
     36,  36,  83,  66,  59,  44, 104,   0,   7,   7, 110,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  68, 196, 121,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 104,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  63,  63, 229,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,
     36,  36,  36,  36,  36,  36,  36,  61,   7,   7, 110, 134,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,
      7,   7, 110,   0,  36,  36,  36,  36,  36,  36,  36,  41,  44, 230,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44, 196, 121,   0,
     36, 121,   0,   0,   7,   7, 110,   0,  62,  36,  36,  36,  36,  36,   0,  82,
     36,  36,  36,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11,  15,  15,  15,  15,  15,  15,  15,  15,
      0,   0,   0,   0,   0,   0, 121,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  61,  98,  88,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,   0,  98, 116,  36,  36,  36,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  99, 115,   0,   0,  89,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  82,  36, 102,
     36,  36,  36,  36,  36,  36,  36,  36,  61,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  61,   0,   0,   0,   0,  36,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,  36,  36,  36, 104,
     36,  36, 104,   0,  36,  36,  41, 231,  63,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  89,  44,  44,  44,  44,
     44,  66,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  58,  89,  58, 232,  63, 233,  44,
     66,  58,  44,   0,   0,   0,   0,   0,   0,   0, 107,  89,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    107, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11, 157,  15,  15,  15,  15,  15,  15,  11,  11,  11,
     11,  11,  11, 157,  15, 137,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11,
    157,  15,  15,  15,  15,  15,  15,  49,  48, 234,  10,  49,  11, 157, 168,  14,
     15,  14,  15,  15,  11,  11,  11,  11,  11,  11, 157,  15,  15,  15,  15,  15,
     15,  50,  22,  10,  11,  49,  11, 235,  15,  15,  15,  15,  15,  15,  50,  22,
     11, 158, 164,  11, 235,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,  11,
     11, 157,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11, 157,  15,
     15,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11, 157,  15,  15,  15,  15,
     15,  15,  11,  11,  11,  11,  11,  11, 157,  15,  15,  15,  15,  15,  15,  11,
     11,  11,  11,  11,  11, 157,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,
     11,  11, 157,  15,  15,  15,  15,  15,  15,  39,  11,  11,  11,  11,  11,  11,
    235,  15,  15,  15,  15,  15,  24,  15,  33,  11,  11,  11,  11,  11,  22,  15,
     15,  15,  15,  15,  15, 137,  15,  11,  11,  11,  11,  11,  11, 235,  15,  15,
     15,  15,  15,  24,  15,  33,  11,  11,  11,  11,  11,  22,  15,  15,  15,  15,
     15,  15, 137,  15,  11,  11,  11,  11,  11,  11, 235,  15,  15,  15,  15,  15,
     24,  15,  27, 100,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  66,  98,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44, 115,   0,  86,   0,   0,
      0, 115, 121,   0,   0,   0,  98,  44,  58,  44,  44,  44,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     15,  15, 236,  15,  15,  15,  15,  24,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     44,  66,  44,  44,  44,  44,  96,  44,  59,  75,  66,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,  44, 116,  36,  41,
      7,   7, 110, 217,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36, 237,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,   7,   7, 110,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  61,  36, 102,  36,  36,  36,  61,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36, 104,   0,   0,  44,  66,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11, 157,  15,  15,  15,  15,  15,  15,  15,
     15,  44, 116,   0,   7,   7, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  82,  36,  36,  36,  36,  36,  36, 102,  78,  82,  36,  61,  36, 111,   0,
    217,  62, 111,  82, 102,  78, 111, 111, 102,  78,  61,  36,  61,  36,  82,  43,
     36,  36,  99,  36,  36,  36,  36,   0,  82,  82,  99,  36,  36,  36,  36,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  11,  11,  11,
     11,  11, 122,   0,  11,  11,  11,  11,  11,  11, 122,   0,  11,  11,  11,  11,
     11,  11, 122,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 165, 126,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 110,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  41,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36, 104,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     20,   0,   0,   0,   0,   0,   0,   0,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,   0,   0,   0,   0
};

static UINT8 sentence_break_table_3[688] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
     32,  33,  34,  34,  35,  36,  37,  38,  39,  34,  34,  34,  40,  41,  42,  43,
     44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  64,  65,  64,  64,  66,  64,  64,  64,  64,  67,  68,
     64,  64,  64,  69,  64,  64,  64,  64,  70,  71,  72,  73,  74,  64,  64,  64,
     75,  76,  77,  78,  64,  64,  64,  64,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  79,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  80,  34,  34,  81,  82,  83,  84,
     85,  86,  87,  88,  89,  90,  91,  92,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  93,
     64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  34,  34,  94,  95,  96,  97,  34,  34,  98,  99, 100, 101, 102, 103,
    104, 105, 106, 107,  64, 108, 109, 110, 111, 112, 113, 114,  34,  34, 115, 116,
    117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,  64,  64, 128, 129, 130,
    131, 132, 133, 134, 135, 136, 137,  64, 138, 139,  64, 140, 141, 142, 143,  64,
    144, 145, 146, 147, 148, 149,  64,  64, 150, 151, 152, 153,  64, 154,  64, 155,
     34,  34,  34,  34,  34,  34,  34, 156, 157,  34, 158,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64, 159,
     34,  34,  34,  34,  34,  34,  34,  34, 160,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64,  64,  34,  34,  34,  34, 161,  64,  64,  64,
     34,  34,  34,  34, 162, 163, 164, 165,  64,  64,  64,  64, 166, 167, 168, 169,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 170,
     34,  34,  34,  34,  34,  34,  34,  34,  34, 171, 172,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64, 173,
     34,  34, 174,  34,  34, 175,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64,  64, 176, 177,  64,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64, 178,  64,
     64,  64, 179, 180, 181,  64,  64,  64, 182, 183, 184, 185, 186, 187, 188, 189,
     64,  64,  64,  64, 190, 191,  64,  64,  64,  64,  64,  64,  64,  64, 192,  64,
    193,  64, 194,  64,  64, 195,  64,  64,  64,  64,  64,  64,  64,  64,  64, 196,
     34, 197, 198,  64,  64,  64,  64,  64,  64,  64,  64,  64, 199, 200,  64,  64,
     64,  64, 201, 202,  64,  64,  64,  64,  64,  64,  64,  64, 203,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64, 204,  64,  64,  64,  64,  64,  64,  64,  64,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 205,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 206,  34,
    207,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 208,  34,  34,
     34,  34,  34,  34,  34,  34,  34, 209,  64,  64,  64,  64,  64,  64,  64,  64,
     34,  34,  34,  34, 210,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     34,  34,  34,  34,  34,  34, 211,  64,  64,  64,  64,  64,  64,  64,  64,  64,
    212,  64, 213, 214,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64
};

static UINT8 sentence_break_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   8,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   9,  10,   7,   7,   7,   7,  11,  12,  12,  12,  12,  13,
     14,  15,  16,  17,  18,  19,  20,  12,  21,  12,  12,  12,  12,  22,   7,   7,
     23,  24,  12,  12,  12,  25,  26,  27,  12,  28,  29,  30,  31,  32,  33,  34,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  35,   7,  36,  37,   7,  38,   7,   7,   7,  39,  12,  40,
      7,   7,  41,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     42,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12
};

UINT32 lookup_sentence_break(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 11;
    block = sentence_break_table_4[block];
    offset = (codepoint >> 7) & 0xF;
    block = sentence_break_table_3[(block << 4) + offset];
    offset = (codepoint >> 2) & 0x1F;
    block = sentence_break_table_2[(block << 5) + offset];
    offset = codepoint & 0x3;
    value = sentence_break_table_1[(block << 2) + offset];

    return value;
}

/* The tables and function for Sentence_Terminal. */

static UINT8 sentence_terminal_table_1[208] = {
      0,   0,   0,   0,   2,  64,   0, 128,   0,   2,   0,   0,   0,   0,   0, 224,
      0,   0,  16,   0,   7,   0,   0,   0,   0,   0,   0,   2,   0,   0, 128,  98,
     48,   0,   0,   0,   0,  12,   0,   0, 132,   1,   0,   0,   0,  64,   0,   0,
      0,   0,  96,   0,   8,   2,   0,   0,   0,  15,   0,   0,   0,   0,   0, 204,
      0,   0,   0,  96,   0,   0,   0,  24,   0,   0,   0, 192,   0,   0,   0,  48,
    128,   3,   0,   0,   0,  64,   0,  16,   0,   0,  24,   0,   4,   0,   0,   0,
      0,   0,   0, 128,   0, 192,   0,   0,   0,   0, 136,   0,   0,   0, 192,   0,
      0, 128,   0,   0,   0,   3,   0,   0,   0,   0,   3,   0,   0,   8,   0,   0,
      0,   0, 196,   0,   2,   0,   0,   0,   0,   0, 224,   3, 192,   3,   0,   0,
    128,   1,   0,   0,   3,   0,   0,   0,  14,   0,   0,   0,  96,  32,   0, 192,
      0,   0,   0,  27,   0,  24,   0,   0,  12, 254, 255,   0,   6,   0,   0,   0,
      0,   0,   0, 112,  80,   0,   0,   0,  12,   0,   0,   0,   0,   0, 128,   1,
      0,   0,  32,   0,  16,   0,   0,   0,   0,   0,   0,   1,   0,   1,   0,   0
};

static UINT8 sentence_terminal_table_2[352] = {
      0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   2,   0,   0,   0,   3,   0,   0,   0,   0,   0,   4,   0,
      5,   0,   0,   0,   0,   0,   0,   6,   0,   7,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   9,   0,   0,   0,   0,   0,
      0,   0,   0,  10,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,
      0,  12,   0,   0,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,   0,   0,
      0,   0,  15,  16,   0,   0,   0,   0,   0,  17,   0,  18,   0,   0,   0,   0,
      0,  19,  20,   0,   0,   0,   0,   0,   0,  21,  22,   0,   0,   0,   0,   0,
     23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24,
     25,   0,   0,   0,   0,   0,   0,  26,   0,   0,   0,  27,   0,   0,  25,   0,
      0,  28,   0,   0,   0,   0,  29,   0,   0,   0,   3,   0,   0,   0,   0,  30,
      0,   0,   0,   0,   0,   0,   0,  31,   0,   0,  32,   0,   0,   0,   0,   0,
      1,   0,   0,  33,   0,   0,   0,   0,   0,   0,  27,   0,   0,   0,   0,   0,
      0,   0,  34,   0,  35,   0,   0,   0,   0,   0,  36,   0,   0,  18,  37,   0,
      0,   0,  38,   0,   0,   0,  39,   0,   0,  40,   0,   0,   0,   2,   0,   0,
      0,   0,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,   0,
      0,   0,  43,   0,   0,   0,   0,   0,   0,  44,   0,   0,   0,   0,   0,   0,
      0,   0,  45,   0,   0,   0,   0,   0,   0,   0,  46,   0,  17,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,  25,   0,   0,   0,  48,
      0,  47,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50,   0,   0,   0,
      0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,  51,   0,   0,   0
};

static UINT8 sentence_terminal_table_3[288] = {
      0,   1,   1,   1,   1,   2,   3,   4,   5,   6,   1,   1,   1,   1,   1,   1,
      7,   1,   1,   8,   1,   1,   9,  10,  11,  12,  13,  14,  15,   1,   1,   1,
     16,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  17,   1,
     18,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  19,   1,  20,   1,  21,  22,  23,  24,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  25,  26,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  27,   1,   1,   1,   1,  28,
     29,  30,  31,   1,  32,  33,  34,  35,   1,  36,  37,   1,  34,   1,  38,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  39,  40,   1,   1,  41,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  42,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  43,   1,   1,   1,   1,   1
};

static UINT8 sentence_terminal_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   7,   8,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_sentence_terminal(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = sentence_terminal_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = sentence_terminal_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = sentence_terminal_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = sentence_terminal_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Soft_Dotted. */

static UINT8 soft_dotted_table_1[104] = {
      0,   0,   0,   0,   0,   6,   0,   0,   0, 128,   0,   0,   0,   2,   0,   0,
      0,   1,   0,   0,   0,   0,   0,  32,   0,   0,   4,   0,   0,   0,   8,   0,
      0,   0,  64,   1,   4,   0,   0,   0,   0,   0,  64,   0,  16,   1,   0,   0,
      0,  32,   0,   0,   0,   8,   0,   0,   0,   0,   2,   0,   0,   3,   0,   0,
      0,   0,   0,  16,  12,   0,   0,   0,   0,   0, 192,   0,   0,  12,   0,   0,
      0,   0,   0, 192,   0,   0,  12,   0, 192,   0,   0,   0,   0,   0,   0,  12,
      0, 192,   0,   0,   0,   0,   0,   4
};

static UINT8 soft_dotted_table_2[176] = {
      0,   0,   0,   1,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   4,   5,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,
      0,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  10,  11,   0,   0,
      0,  12,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  14,   0,   0,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,
      0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  17,  18,   0,  19,  20,   0,  21,   0,  22,  23,   0,  24,   0,  17,  18,
      0,  19,  20,   0,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  25,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 soft_dotted_table_3[96] = {
      0,   1,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   4,   5,
      6,   3,   3,   3,   3,   3,   7,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   8,   9,   3,   3,   3,  10,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 soft_dotted_table_4[68] = {
      0,   1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_soft_dotted(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = soft_dotted_table_4[block];
    offset = (codepoint >> 9) & 0x1F;
    block = soft_dotted_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = soft_dotted_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = soft_dotted_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Terminal_Punctuation. */

static UINT8 terminal_punctuation_table_1[268] = {
      0,   0,   0,   0,   2,  80,   0, 140,   0,   0,   0,  64, 128,   0,   0,   0,
      0,   2,   0,   0,   8,   0,   0,   0,   0,  16,   0, 232,   0,   0,  16,   0,
    255,  23,   0,   0,   0,   0,   0,   3,   0,   0, 255, 127,  48,   0,   0,   0,
      0,   0,   0,  12,   0, 225,   7,   0,   0,  12,   0,   0, 254,   1,   0,   0,
      0,  64,   0,   0,   0,  56,   0,   0,   0,   0,  96,   0,   0,   0, 112,   4,
     60,   3,   0,   0,   0,  15,   0,   0,   0,   0,   0, 236,   0,   0,   0,  96,
      0,   0,   0, 248,   0,   0,   0, 192,   0,   0,   0,  48, 128,   3,   0,   0,
      0,  64,   0,  16,   2, 208,  24,   0,   6,   0,   0,   0,   0, 224,   0,   0,
      0,   0, 248,   0,   0,   0, 192,   0,   0, 192,   0,   0,   0, 128,   0,   0,
      0,   0,   0, 224,   0,   0,   0, 128,   0,   0,   3,   0,   0,   8,   0,   0,
      0,   0, 247,   0,  18,   0,   0,   0,   0,   0,   1,   0,   0,   0, 128,   0,
      0,   0,  63,   0,   0,   0,   0, 252,   0,   0,   0,  30,   0,   0, 224,   3,
    192,   3,   0,   0, 128,  63,   0,   0,   3,   0,   0,   0,  14,   0,   0,   0,
     96,  32,   0, 192,   0,   0,   0,  31,   0,  56,   0,  12,  60, 254, 255,   0,
      0,   0,   0, 112,  80,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,  24,
      0,   0,   2,   0,   0,   0, 128,   1,   0,   0,  31,   0,   0,   0,  32,   0,
      0,   0, 128,   3,  16,   0,   0,   0, 128,   7,   0,   0
};

static UINT8 terminal_punctuation_table_2[424] = {
      0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   2,   3,   0,   0,   0,   0,   0,   0,   0,   4,   0,   5,   0,
      6,   0,   0,   0,   0,   0,   7,   0,   8,   0,   0,   0,   0,   0,   0,   9,
      0,  10,   2,   0,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,
      0,   0,  12,   0,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  14,   0,   0,   0,   0,   0,   0,   0,   0,  15,   0,   0,   0,   0,
      0,   0,   0,  16,   0,   0,   0,  17,   0,  18,   0,   0,   0,   0,  19,   0,
     20,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  21,   0,   0,   0,   0,  22,  23,   0,   0,   0,   0,
      0,  24,   0,  25,   0,   0,   0,   0,   0,  26,  27,   0,   0,   0,   0,   0,
      0,  28,  29,   0,   0,   0,   0,   0,  30,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  25,  31,   0,   0,   0,   0,   0,   0,  32,
      0,   0,   0,  33,   0,   0,  34,   0,   0,  35,   0,   0,   0,   0,  27,   0,
      0,   0,  36,   0,   0,   0,  37,  38,   0,   0,   0,   0,   0,   0,   0,  39,
      0,   0,  40,   0,   0,   0,   0,   0,   1,   0,   0,  41,   0,   0,   0,   0,
      0,   0,   0,   0,  37,   0,  42,   0,   0,   0,  43,   0,   0,   0,   0,   0,
     37,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,   0,   0,   0,   0,  44,
      0,  45,   0,   0,  46,   0,   0,   0,   0,   0,  47,   0,  48,   0,   0,   0,
      0,   0,  49,   0,   0,  25,  50,   0,   0,   0,  51,   0,   0,   0,  52,   0,
      0,  53,   0,   0,   0,   4,   0,   0,   0,   0,  54,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  55,   0,   0,   0,  30,   0,   0,   0,   0,   0,
      0,  56,   0,   0,   0,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0,   0,
      0,   0,  58,   0,  59,  30,   0,   0,   0,   0,  51,  60,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  61,   0,   0,   0,  62,   0,   0,   0,   0,
      0,   0,   0,  34,   0,   0,   0,  63,   0,  64,  65,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  61,   0,   0,   0,   0,   0,   0,   0,  37,   0,   0,   0,
      0,   0,   0,   0,  66,   0,   0,   0
};

static UINT8 terminal_punctuation_table_3[320] = {
      0,   1,   1,   2,   1,   3,   4,   5,   6,   7,   1,   1,   1,   1,   8,   9,
     10,   1,   1,  11,   1,   1,  12,  13,  14,  15,  16,  17,  18,   1,   1,   1,
     19,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  20,   1,
     21,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  22,   1,  23,   1,  24,  25,  26,  27,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  28,  29,
      1,   1,   1,  30,   1,   1,   1,   1,  31,  32,  33,  34,   1,   1,   1,  35,
     36,  37,  38,   1,  39,  40,  41,  42,   1,  43,  44,   1,  45,   1,  46,   1,
      1,   1,   1,   1,  47,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  48,  49,   1,   1,  50,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  51,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  52,   1,   1,   1,   1,   1
};

static UINT8 terminal_punctuation_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   6,   2,   7,   2,   8,   9,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_terminal_punctuation(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = terminal_punctuation_table_4[block];
    offset = (codepoint >> 8) & 0x1F;
    block = terminal_punctuation_table_3[(block << 5) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = terminal_punctuation_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = terminal_punctuation_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Unified_Ideograph. */

static UINT8 unified_ideograph_table_1[72] = {
      0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,
      0, 192,  26, 128, 154,   3,   0,   0, 255, 255, 255, 255,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255,   1, 255, 255, 255,  63, 255, 255, 255, 255,
    255, 255, 255, 255,   3,   0, 255, 255, 255, 255, 255, 255,   1,   0,   0,   0,
    255,   7,   0,   0,   0,   0,   0,   0
};

static UINT8 unified_ideograph_table_2[80] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   0,   2,   0,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   3,   1,   1,   1,   1,   1,   1,   1,   1,   4,   1,   1,   1,
      5,   1,   1,   1,   1,   1,   1,   1,   1,   1,   6,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   7,   1,   1,   1,   1,   1,   8,   0,   0
};

static UINT8 unified_ideograph_table_3[144] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,
      1,   1,   1,   4,   1,   1,   1,   1,   1,   1,   1,   5,   6,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   7,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   9,   0,   0,   0,   0,   0,   0
};

static UINT8 unified_ideograph_table_4[136] = {
      0,   1,   2,   3,   3,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,
      3,   3,   3,   3,   3,   5,   6,   7,   8,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0
};

UINT32 lookup_unified_ideograph(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = unified_ideograph_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = unified_ideograph_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = unified_ideograph_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = unified_ideograph_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Uppercase. */

static UINT8 uppercase_table_1[312] = {
      0,   0,   0,   0, 254, 255, 255,   7, 255, 255, 127, 127,  85,  85,  85,  85,
     85,  85,  85, 170, 170,  84,  85,  85,  85,  85,  85,  43, 214, 206, 219, 177,
    213, 210, 174,  17, 144, 164, 170,  74,  85,  85, 210,  85,  85,  85,   5, 108,
    122,  85,   0,   0,   0,   0,  69, 128,  64, 215, 254, 255, 251,  15,   0,   0,
      0, 128,  28,  85,  85,  85, 144, 230, 255, 255, 255, 255, 255, 255,   0,   0,
      1,  84,  85,  85, 171,  42,  85,  85,  85,  85, 254, 255, 255, 255, 127,   0,
    191,  32,   0,   0, 255, 255,  63,   0,   0,   0, 255, 255, 255, 255, 255, 231,
     85,  85,  21,  64,   0, 255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 170,
      0, 255,   0,   0,   0,   0,   0,  15,   0,  15,   0,  15,   0,  31,   0,  15,
    132,  56,  39,  62,  80,  61,  15, 192,  32,   0,   0,   0,   8,   0,   0,   0,
      0,   0, 192, 255, 157, 234,  37, 192,   5,  40,   4,   0,  85,  21,   0,   0,
     85,  85,  85,   5,  84,  85,  84,  85,  85,  85,   0, 106,  85,  40,  69,  85,
     85, 125,  95,  85, 245,   2,  65,   1,   0,   0,  32,   0, 255,   0,   0,   0,
    255, 255,  15,   0,   0,   0, 255, 247, 255, 247,  55,   0, 255, 255,   7,   0,
    255, 255, 255,   3,   0,   0, 240, 255, 255,  63,   0,   0,   0, 255, 255, 255,
      3,   0,   0, 208, 100, 222,  63,   0, 255,   3,   0,   0, 176, 231, 223,  31,
      0,   0,   0, 123,  95, 252,   1,   0,   0, 240, 255, 255,  63,   0,   0,   0,
      3,   0,   0, 240,   1,   0,   0,   0, 252, 255, 255,   7,   0,   0,   0, 240,
    255, 255,  31,   0, 255, 127,   0,   0, 255,   1,   0,   0,   0,   4,   0,   0,
      3,   0,   0,   0, 255,   3, 255, 255
};

static UINT8 uppercase_table_2[336] = {
      0,   0,   1,   0,   0,   0,   2,   0,   3,   4,   5,   6,   7,   8,   9,  10,
      3,  11,  12,   0,   0,   0,   0,   0,   0,   0,   0,  13,  14,  15,  16,  17,
     18,  19,   0,   3,  20,   3,  21,   3,   3,  22,  23,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  18,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  18,  25,
      0,   0,   0,   0,  26,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      3,   3,   3,   3,  28,   3,   3,   3,  29,  30,  31,  32,   0,  33,  34,  35,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  37,  38,  19,  39,   0,   0,   0,
      0,   0,   0,   0,   0,  40,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     18,  19,   0,  41,   3,   3,   3,  42,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   3,  43,  44,   0,   0,   0,   0,  45,   3,  46,  47,  48,  49,  50,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
     18,  51,   0,   0,   0,  26,  52,   0,   0,   0,   0,  53,  54,   0,   0,   0,
      0,   0,   0,   0,  18,  55,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     56,  57,  58,  59,  60,  61,  26,  62,  63,  64,  65,  66,  67,  56,  57,  58,
     59,  68,  25,  26,  62,  59,  69,  70,  71,  72,  40,  73,  26,  74,  75,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  18,  76,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  77,  77,  62,   0,   0,   0
};

static UINT8 uppercase_table_3[144] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  12,
      3,   3,  13,   3,   3,   3,  14,   3,   3,   3,   3,   3,  15,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  16,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  17,  18,   3,   3,   3,   3,
      3,   3,   3,   3,  19,   3,   3,   3,  20,   3,   3,   3,   3,   3,   3,   3
};

static UINT8 uppercase_table_4[136] = {
      0,   1,   2,   2,   2,   3,   2,   4,   5,   2,   2,   6,   2,   2,   7,   8,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2
};

UINT32 lookup_uppercase(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = uppercase_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = uppercase_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = uppercase_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = uppercase_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Variation_Selector. */

static UINT8 variation_selector_table_1[40] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0, 184,   0,   0,   0,   0,   0,   0,
    255, 255,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255,   0,   0
};

static UINT8 variation_selector_table_2[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   3,   3,   3,   4,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 variation_selector_table_3[64] = {
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,
      3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 variation_selector_table_4[68] = {
      0,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_variation_selector(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = variation_selector_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = variation_selector_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = variation_selector_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = variation_selector_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for White_Space. */

static UINT8 white_space_table_1[80] = {
      0,  62,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     32,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255,   7,   0,   0,   0, 131,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0
};

static UINT8 white_space_table_2[40] = {
      0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   3,   2,   2,   4,   2,   2,   2,   2,   2,   2,   2,
      3,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 white_space_table_3[64] = {
      0,   1,   1,   1,   1,   2,   1,   1,   3,   1,   1,   1,   4,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 white_space_table_4[34] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1
};

UINT32 lookup_white_space(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 15;
    block = white_space_table_4[block];
    offset = (codepoint >> 10) & 0x1F;
    block = white_space_table_3[(block << 5) + offset];
    offset = (codepoint >> 7) & 0x7;
    block = white_space_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0xF;
    block = white_space_table_1[(block << 4) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Word. */

static UINT8 word_table_1[432] = {
      0,   0, 255,   3, 254, 255, 255, 135, 255,   7,   0,   4,  32,   4, 255, 255,
    127, 255, 195, 255,   3,   0,  31,  80,  63,   0, 223, 188,  64, 215, 251, 255,
    191, 255, 127,   2, 255,   1, 255, 191, 182,   0,   7,   0, 255, 195, 239, 159,
    255, 253, 255, 159, 255, 231,  63,  36, 255,  63, 255,  15, 255, 126,   0, 255,
    248, 255, 207, 255, 249, 255, 197, 243, 159, 121, 128, 176,   3,  80, 238, 135,
    109, 211, 135,  57,   2,  94, 192, 255, 238, 191, 237, 243, 191,  59,   1,   0,
      0, 254, 238, 159, 159,  57, 224, 176,   2,   0, 236, 199,  61, 214,  24, 199,
    199,  61, 129,   0, 255, 223, 253, 255, 255, 243, 223,  61,  96,  39, 239, 223,
    239, 243,  96,  96,   6,   0, 223, 125, 240, 128,   0, 252, 238, 255, 127, 252,
    251,  47, 127, 132,  95, 255,  12,   0, 214, 247, 175, 255,  95,  63,   0,   3,
    160, 194, 255, 254, 255,  31, 223, 255,  64,   0, 191,  32, 255, 247, 255,  61,
    127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  63, 128,  31,   0,  15,   0,
     13,   0, 143,  48,   0, 184, 255, 127, 128,   0,   0, 248, 255,   0, 255, 227,
    247, 255, 255, 170, 223,  95, 220,  31, 207,  15,   0,  48,   0, 128,  16,   0,
      2, 128, 132, 252,  47,  62,  80, 189, 224,  67,  31, 248, 255, 128, 127,   0,
    127, 127, 224,   0,  62,  31, 127, 230, 224, 255, 247, 191, 128, 255, 252, 255,
    255, 249, 235,   3, 255,  16, 255, 232,   1, 128,   0,  56, 124,   0, 126, 126,
    126,   0, 255,  55, 127, 248, 248, 224, 127,  95, 219, 255,  24,   0,   0, 224,
    252, 252, 252,  28, 255, 239, 255, 183,   0,  32,  15, 255,  62,   0, 183, 255,
    251,  27, 253,   7,  63, 253, 191, 145,  55,   0, 255, 192, 111, 240, 239, 254,
     63, 135, 255,  27,   4,   0, 240,   0,  79,   0,  31, 222, 255,  23, 255,  64,
    127, 189, 237, 251, 129, 224, 207,  31, 191,   0,  63, 255,   0,  63,  17,   0,
    127, 242, 111, 255, 191, 249, 255, 252,  27,   0, 255,  35, 127, 251, 127, 180,
    207,   0, 191, 253, 251,   1, 255, 224, 239, 111, 255,  99, 224, 227,   7, 248,
    231,  15,   0,  60,  28,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223,
    255, 123,  95, 252, 247, 207,  32,   0, 219,   7, 255,  67, 127, 111, 255,   8,
    150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 238, 251
};

static UINT8 word_table_2[2000] = {
      0,   0,   0,   1,   2,   3,   2,   4,   0,   0,   5,   6,   7,   8,   7,   8,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   9,  10,  11,   0,
      7,   7,   7,   7,  12,   0,   0,  13,  14,   7,  15,   7,   7,   7,   7,  16,
      7,   7,   7,   7,   7,   7,   7,   7,  15,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   2,   7,  17,   7,   7,  18,   2,   7,  19,  20,   7,   3,  21,
      0,   4,   7,   7,   7,   7,  22,   7,   7,   7,   7,   7,   7,  23,  24,  25,
      0,   7,   7,   7,  26,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,  27,
      7,   7,  28,   0,   7,  29,   4,   7,  30,  31,   7,   7,   7,   7,  32,   7,
      7,   7,   7,   7,   7,   7,  33,   2,  23,  34,  24,  35,  36,  37,  33,  38,
     39,  34,  24,  40,  41,  42,  43,  12,  44,  15,  24,  45,  46,  47,  33,  48,
     49,  34,  24,  45,  50,  51,  33,  52,  53,  54,  55,  22,  56,  57,  43,   0,
     58,  59,  24,  60,  61,  62,  33,   0,  63,  59,  24,  64,  61,  65,  33,  66,
     58,  59,   7,   7,  67,  68,  33,  69,  70,  71,   7,  72,  73,  74,  43,  75,
      2,   7,   7,   4,  28,   1,   0,   0,  76,   7,  77,  28,  78,  60,   0,   0,
     47,  79,   1,  80,  81,   7,  82,   2,  83,  81,   7,  82,  84,   0,   0,   0,
      7,   7,   7,   7,   1,   7,   7,   7,   7,  28,   7,   7,  85,   7,   7,  86,
      7,   7,   7,   7,  87,  88,   7,   7,  87,   7,   7,  89,  90,   8,   7,   7,
      7,  90,   7,   7,   7,  26,   0,   0,   7,   0,   7,   7,   7,   7,   7,  91,
      2,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,  25,   7,   2,   4,   7,   7,   7,   7,  92,  18,
      7,  93,   7,  94,   7,  95,  58,  96,   7,   7,   7,   7,   7,  97,   1,   0,
     98,   1,   7,   7,   7,   7,   7,  18,   7,   7,   4,   7,   7,   7,   7,  12,
      7,  99,  29,  29,  43,   7,  28,  94,   7,   7,  29,   7,   1,   1,   0,   0,
      7,  29,   7,   7,   7,  99,   7,  25,   1,   1, 100,   7,  99,   0,   0,   0,
      7,   7,   7,   7,  82,   1, 101,  95,   7,   7,   7,   7,   7,   7,   7,  95,
      7,   7,   7, 102, 103,   7,   7,  28,  18,   7,   7,  26,   0, 104,   7,   4,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  94,
      7,  91,   7,   7,  91, 105,   7,  28,   7,   7,   7, 106, 107, 108,  82, 107,
    109,   0,   0, 110,  47, 111,   0, 112,   0,  82,   0,   0,   0,   7,   7,  47,
    113, 114, 115,  60, 116,   0,   7,   7,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  43,   7,   7,   1,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 117,  95,
      7,   7,  85,   7,   7,   7, 118, 110,   7, 119, 120, 120, 120, 120,   7,   7,
      0,   0, 110,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    121,   0,   2, 122,   2,   7,   7,   7,   7, 123,   2,   7,   7,   7,   7,  86,
    124,   7,   7,   2,   7,   7,   7,   7,  99,   0,   7,   7,   0,   0,   0,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,  82,   0,   0,   0,   0,   7,   7,  28,
     82,   7,  29,   0,   7,   7,   7, 125,   7,   7,   7,   7,   7,   7,   7,  10,
      0, 126, 127,   7,   7,   7,   7,   7, 128,   7,   7,   7,   4, 129,   0, 127,
      7,   7, 130,   0,   7,   7,   7,  95,   7,   7,   7,   7,  12,   1,   7, 131,
      7,   7,  28,   7,   7,  95,   7,  82,   7,   7,   7,   7, 132,   1,   7,  99,
      7,   7,   7, 119,  28,   1,   7,  71,   7,   7,   7,   7,  21, 133,   7, 134,
    135, 136, 120,   7,   7,  86,   1,   7,   7,   7,   7,   7,   7,   7, 137,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  95,   7, 138,   7,   7,  29,
      7,   7,   7,   7,   7,   7,  28,   7,   7,   7,   7,   7,   7,   1,   0,   0,
    119, 139,  24, 140, 141,   7,   7,   7,   7,   7,   7,  10,   0,  32,   7,   7,
      7,   7,   7,  28,   0,   7,   7,   7,   7, 127,   7,   7, 102,   0,   0,  29,
      7,   0,   7, 142, 143,   0,   0,  83,   7,   7,   7,   7,   7,   7,   7,  82,
      0,   1,   2,   3,   2,   4,  43,   7,   7,   7,   7,  99, 144, 145,   0,   0,
    146,   7,   8, 147,  28,  28,   0,   0,   7,   7,   7,   7,   7,   7,   7,   4,
      0,   0,   0,   0,   7,   7,   7,  94,   0,   0,   0,   0,   0,   0,   0, 148,
      0,   0,   0,   0,   0,   0,   0,   0,   7,  82,   7,   7,   7,  47,  47,   0,
      7,   7, 143,   7,   4,   7,   7,   4,   7,  28,   7,   7, 149, 150,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   1,   7,   7, 149,   7,  29,
      7,   7, 102,   7,   7,   7,  95,  86,  86, 151,  15, 152,   0,   0,   0,   0,
      7,   7,   7, 119,   7,  12, 102,   0,  16,   7,   7, 153,   0,   0,   0,   0,
    154,   7,   7, 155,   7,  12,   7, 119,   7,  99,   0,   0,   0,   0,   7, 156,
      7,  12,   7,   1,   0,   0,   0,   0,   7,   7,   7, 157,   0,   0,   0,   0,
    158, 159,   7, 160,   0,   0,   7,  82,   7,  82,   0,   0,  81,   7, 119,   0,
      7,   7,   7,  12,   7,  12,   7,  21,   7,  10,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,  18,   0,   0,   0,   7,   7,   7,  21,   7,   7,   7,  21,
      7,   7, 102,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 161,  10,   0,   0,   0,   0,
      7,  82, 100,   7,   7,  47,   0,   7,  12,   0,   0,   7,  94,   0,   7, 119,
      7,   7,   7,   7, 119,   0,  43,  93,   7,   7,   7,   4, 162,   7,  18,   1,
      7,   7,   7,  83, 163,   7,   7, 164,   7,   7,   7,   7, 165, 166,   0,   0,
      7,  15,   7, 167,   0,   0,   0,   0, 168,  19,  18,   7,   7,   7,   4,   1,
     23,  34,  24, 169,  50, 170, 171,  94,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,  22,  10,   0,   7,   7,   7,   7, 172,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7, 173,  47, 174,   0,   0,
      7,   7,   7,   7, 175,   1,   0,   0,   7,   7,   7,  18,   1,   0,   0,   0,
      7,  26,  29,   1, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   1, 110,
    176, 177,   7, 178,  95,   1,   0,   0,   0,   0, 179,   7,   7, 179, 180,   0,
      7,   7,   7,  99, 100,   7,   7,   7,   7, 181,   0,   7,   7,   7,   7,  18,
     24,   7,   7,   8,  47,   1,   0, 127,   7, 127,  81, 119,   0,   0,   0,   0,
    182,   7,   7, 183, 184,   1, 185,   7,  99, 186,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 119,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   1,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,  99,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  95,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   7,   7,  47,
      7,   7,  99,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,  18,   7,  99,   1,   7,   7,   7,   7,  99,   1,   7,  28,  94,
      7,   7,   7, 119,  95,   1,  32, 187,   7,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,   7,   7,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   3,   7,   7,   7, 118,   7,   0,   0,   0,   0, 180,  10,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 102,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  12,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 188,
      7,   7,  21,   0,   0,  21, 163,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  29,
      7,   7,   7,   7,   7,   7,   4,  82,  18, 189,   0,   0,   0,   0,   0,   0,
      7,   7,  28,   7, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 190, 191, 192,   0, 193,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 194,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,  83,   7,   7,   7,  58, 195, 196, 197,   7,   7,   7,
    198, 199,   7, 200, 201,  59,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 173,   7,  59,  86,   7,  86,
      7,  83,   7,  83,  99,   7,  99,   7,  24,   7,  24,   7, 202,   7,   7,   7,
      7,   7,   7, 138,   7,   7,  82, 203, 111, 101,   2,   0,   0,   0,   0,   0,
      7,  99,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      8, 128, 204,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  82,  28, 205,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  99,   0,   7,   7,   7,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 206,  99,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  94, 119,   0,   0,
      7,   7,   7,   7, 207,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    197,   7, 208, 209, 210, 211, 212, 213, 214,  29, 215,  29,   0,   0,   0,   0,
      0,   0,   0,   7,   1,   7,   1,   7,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,
      7,   7,   7,  18,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  28,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  47,   0,
      7,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0
};

static UINT8 word_table_3[480] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  39,   1,  40,  41,  42,  43,  44,  45,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  46,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  47,  48,   1,  49,  50,  51,
     52,  53,  54,  55,  56,  57,   1,  58,  59,  60,  61,  62,  63,  64,  65,  66,
     67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  31,  78,  79,  80,  81,
      1,   1,   1,  82,  83,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  85,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  95,
      1,  96,  97,  31,  31,  31,  31,  31,  31,  31,  31,  31,  98,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  99,
     31, 100, 101,  31, 102, 103, 104, 105,  31,  31, 106,  31,  31,  31,  31, 107,
    108, 109, 110,  31,  31,  31,  31, 111, 112, 113,  31,  31,  31,  31, 114,  31,
     31, 115,  31,  31,  31,  31,  31,  31,  31,  31,  31, 116,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 117,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 118, 119,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 120,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 121,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 122,  31,  31,  31,  31,  31,
      1,   1,   1, 123,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31, 124,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 word_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,  19,  20,  21,  22,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  23,  24,  25,   5,  26,  27,
      5,  28,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
     29,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_word(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = word_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = word_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0xF;
    block = word_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = word_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Word_Break. */

static UINT8 word_break_table_1[516] = {
      0,   0,   0,   0,   0,   0,  13,  17,  17,   2,   0,   0,  21,   0,   3,   0,
      0,   0,   0,  20,  15,   0,  16,   0,  18,  18,  18,  18,  18,  18,  14,  15,
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,   8,
      0,  17,   0,   0,   0,   0,   1,   0,   0,   9,   0,   0,   0,   1,   0,  14,
      0,   0,   1,   1,   7,   7,   7,   7,   1,   0,   1,   1,   1,   1,  15,   1,
      0,   0,   1,  14,   1,   1,   0,   1,   1,   1,   0,   7,   7,   7,   1,   1,
      1,   0,   1,  14,   1,  15,   1,   0,   0,   7,   7,   7,   7,   7,   0,   7,
      0,   7,   7,   0,  11,  11,  11,  11,  11,  11,  11,   0,   0,   0,   0,  11,
     11,  11,  11,   1,  14,   0,   0,   0,   9,   9,   9,   9,   9,   9,   0,   0,
     15,  15,   0,   0,   7,   7,   7,   0,   9,   0,   0,   0,   1,   1,   1,   7,
     18,  18,   0,  18,  15,   0,   1,   1,   7,   1,   1,   1,   0,   1,   7,   7,
      7,   9,   0,   7,   7,   1,   1,   7,   7,   0,   7,   7,  18,  18,   1,   1,
      1,   0,   0,   1,   0,   0,   0,   9,   1,   7,   1,   1,   1,   1,   7,   7,
      7,   1,   0,   0,   1,   1,   0,   0,  15,   0,   1,   0,   0,   7,   0,   0,
      7,   7,   1,   7,   1,   7,   7,   7,   7,   7,   0,   0,   7,   7,   9,   7,
      7,   1,   7,   7,   0,   0,  18,  18,   1,   0,   1,   0,   7,   0,   0,   7,
      7,   7,   1,   0,   0,   0,   0,   7,   1,   0,   7,   0,   0,   0,   0,   1,
      0,   1,   1,   0,   1,   7,   0,   0,   1,   0,   0,   0,   0,   1,   0,   0,
      0,   0,   7,   1,   0,   0,   7,   7,   0,   0,   7,   0,   7,   0,   7,   0,
     18,  18,   0,   0,   7,   0,   0,   0,   0,   7,   0,   7,  18,  18,   7,   7,
     21,   1,   1,   1,   1,   0,   7,   7,   1,   7,   7,   1,   1,   7,   1,   0,
      7,   7,   7,   1,   0,   1,   0,   1,  21,  21,  21,  21,  21,  21,  21,   0,
      7,  22,   9,   9,  16,  16,   0,   0,  16,   0,   0,  14,  17,  17,   9,   9,
      9,   9,   9,   8,   8,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,  21,
      9,   0,   9,   9,  21,   0,   0,   0,   0,  12,  12,  12,  12,  12,   0,   0,
      0,   7,   7,  12,  12,   0,   0,   0,  12,  12,  12,  12,  12,  12,  12,   0,
      7,   7,   0,   1,   1,   1,   7,   1,   0,   1,   1,   7,   1,   7,   7,   0,
      0,  11,   7,  11,  11,   0,  11,  11,  11,   0,  11,   0,  11,  11,   0,  11,
     15,   0,   0,  14,   0,   8,   8,   8,  15,  14,   0,   0,   1,   0,   0,   9,
      0,   0,   0,  16,   0,   0,  12,  12,  12,  12,   7,   7,   0,   9,   9,   9,
      7,   0,  18,  18,  18,  18,   1,   0,   7,   1,   0,   1,   0,  12,  12,   0,
      7,   7,   7,   9,   9,   9,   9,   7,   1,   1,   7,   0,   0,   0,  19,  19,
     19,  19,  19,  19
};

static UINT8 word_break_table_2[6016] = {
      0,   0,   1,   2,   0,   0,   0,   0,   3,   4,   0,   5,   6,   6,   7,   0,
      8,   9,   9,   9,   9,   9,  10,  11,   8,   9,   9,   9,   9,   9,  10,   0,
      0,  12,   0,   0,   0,   0,   0,   0,   0,   0,  13,  14,   0,  15,  13,   0,
      9,   9,   9,   9,   9,  10,   9,   9,   9,   9,   9,   9,   9,  10,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   0,  16,   9,   9,   9,   9,   9,   9,   9,   9,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,   9,  18,  16,  19,
      0,  20,  10,  18,   9,   9,   9,   9,  21,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  21,   9,   9,
     22,  17,  23,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   8,   9,   9,   9,
      9,   9,   9,   9,   9,  10,   8,  24,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  25,   0,  26,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  27,
     28,  27,   0,   0,  29,  29,  29,  29,  29,  29,  30,  31,  32,  33,   0,   0,
     34,  35,   0,  36,  17,  17,  37,  38,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  39,  17,  17,  17,  17,  17,   6,   6,  40,  41,  42,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,  43,  17,  44,  17,  45,  46,  23,   6,   6,  47,  48,
      0,   0,   0,  49,  50,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,  17,
     17,  17,  37,   8,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  51,  17,  17,  52,   0,   0,   0,
      6,   6,  47,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  53,  54,  55,
      9,   9,   9,   9,   9,  51,  56,  17,  17,  57,  57,  58,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,  57,   0,   9,   9,  10,   0,   9,   9,   9,   9,
      9,   9,   8,  10,  35,   0,  17,  17,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  51,  17,  17,  17,  17,  17,  59,  17,  17,  17,  17,  17,  17,  17,
     17,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  51,  60,
     17,  17,  17,  17,  57,  17,   9,   9,  51,  61,   6,   6,   8,   9,   9,   9,
     57,   8,   9,  48,  48,   9,   9,   9,   9,   9,  18,   9,  62,  16,  53,  60,
     17,  63,  63,  64,   0,  65,   0,  21,  51,  61,   6,   6,  53,   0,   0,  66,
     26,   8,  10,  67,  48,   9,   9,   9,   9,   9,  18,   9,  18,  68,  53,  46,
     37,  65,  63,  58,  55,   0,   8,  62,   0,  61,   6,   6,  23,  69,   0,   0,
     26,   8,   9,  21,  21,   9,   9,   9,   9,   9,  18,   9,  18,   8,  53,  60,
     17,  27,  27,  58,  70,   0,   0,   0,  51,  61,   6,   6,   0,   0,  43,  17,
     26,   8,   9,  48,  48,   9,   9,   9,   9,   9,  18,   9,  18,   8,  53,  60,
     17,  63,  63,  58,   0,  26,   0,  21,  51,  61,   6,   6,  71,   0,   0,   0,
     72,   8,  10,  16,  18,  53,  68,  18,  67,  70,  10,  16,   9,   9,  53,  73,
     37,  73,  46,  58,  70,  65,   0,   0,   0,  61,   6,   6,   0,   0,   0,   0,
     17,  42,   9,  18,  18,   9,   9,   9,   9,   9,  18,   9,   9,   9,  53,  60,
     17,  46,  46,  58,   0,  28,  10,  71,  51,  61,   6,   6,   0,   0,   0,   0,
     57,   8,   9,  18,  18,   9,   9,   9,   9,   9,  18,   9,   9,   8,  53,  60,
     17,  46,  46,  58,   0,  28,   0,  68,  51,  61,   6,   6,  68,   0,   0,   0,
     17,   9,   9,  18,  18,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  60,
     17,  46,  46,  64,   0,  39,   0,  67,  51,  61,   6,   6,   0,   0,  16,   9,
     26,   8,   9,   9,   9,  10,  16,   9,   9,   9,   9,   9,  21,   9,   9,  71,
      9,  10,  74,  65,  17,  75,  17,  17,   0,  61,   6,   6,  73,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,  17,  37,   0,
      0,  65,  17,  37,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,  17,  17,  77,
      0,   0,  17,  58,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     70,   0,   0,   0,   0,   0,  58,   0,   6,   6,  76,   0,   0,  78,  55,  73,
      9,   9,   8,   9,   9,   9,   9,   9,   9,   9,   9,  70,  26,  17,  17,  17,
     17,  46,   9,  57,  17,  17,  26,  17,  17,  17,  17,  17,  17,  17,  17,  77,
      0,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  65,  17,  17,  17,  17,  37,
      6,   6,  76,   0,   0,  73,  58,  73,  46,  63,  17,  58,  26,  77,   0,   0,
     73,  17,  17,  27,   6,   6,  79,  58,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  21,   0,  71,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  18,  53,   9,  10,  18,  53,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  18,  53,   9,   9,   9,   9,   9,   9,   9,   9,  18,  53,   9,  10,
     18,  53,   9,   9,   9,  10,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  18,  53,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,  10,  26,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   9,  53,
      8,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  48,   9,   9,   9,   9,
     80,   9,   9,   9,   9,   9,  10,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,  16,   9,   9,  70,   0,
      9,   9,   9,   9,  51,  58,   0,  67,   9,   9,   9,   9,  51,  77,   0,   0,
      9,   9,   9,   9,  51,   0,   0,   0,   9,   9,   9,  18,  81,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  17,  17,
     17,  17,  17,  17,  17,   0,   0,  55,   6,   6,  76,   0,   0,   0,   0,   0,
      0,   0,  65,  59,   6,   6,  76,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,   0,
      9,  82,   9,   9,   9,   9,   9,   9,   9,   9,  83,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   0,
      9,   9,   9,   9,   9,   9,   9,  10,  17,  17,  17,   0,  17,  17,  17,   0,
      0,  61,   6,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,  39,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  26,  17,  37,  17,  17,  17,  17,  17,  17,  17,  63,
      6,   6,  76,   0,   6,   6,  76,   0,   0,   0,   0,   0,  17,  17,  17,  17,
     17,  17,  17,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     17,  42,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,
     17,  42,   9,  70,   6,   6,  76,   0,   0,   0,  65,  17,  17,   0,   0,   0,
     84,   9,   9,   9,   9,   9,   9,   9,  57,  17,  17,  23,   6,   6,  47,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  51,  17,  17,  17,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,  17,  17,   0,   0,
      6,   6,  76,   8,   6,   6,  47,   9,   9,   9,   9,   9,   9,   9,   9,  53,
      9,   9,  70,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   8,
      0,   0,   0,   0,  37,  17,  17,  17,  17,  17,  42,  50,   9,  45,  64,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
      9,   9,   9,   9,   9,  53,   9,  53,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  53,   9,  53,   9,   9,  85,  85,   9,   9,   9,   9,   9,   9,   9,  53,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  18,   9,  62,
     16,  18,   9,  70,   9,  16,   9,   0,   9,   9,   9,  70,  16,  18,   9,  70,
     86,  87,  87,  88,   0,   0,  89,   0,   0,  90,  91,  92,   0,   0,   0,  11,
     93,  94,   0,   0,   0,  93,   0,  95,  34,  96,  34,  34,  71,   0,   0,  67,
      0,   0,   0,   0,   9,   9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  17,  17,  17,  17,  17,  17,  17,  17,  77,   0,   0,   0,
     13,  67,  16,   9,   9,  71,   8,  53,   0,  62,  18,  21,   9,   9,  53,   9,
      0,   8,  53,  13,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  70,  67,  39,  23,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  21,   0,  71,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,  67,   0,   0,   0,  65,
      9,   9,   9,   9,   9,  10,   0,   0,   9,  10,   9,  10,   9,  10,   9,  10,
      9,  10,   9,  10,   9,  10,   9,  10,  17,  17,  17,  17,  17,  17,  17,  17,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     97,  71,   0,   0,   0,   0,   0,   0,   0,   0,  73,  17,  98,  99,  67,  70,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 100, 101, 102, 102, 102, 102, 102, 102, 102, 102,
    102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 103, 102,
      0,   8,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   8,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,  10,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 102, 102, 102, 102,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 103,
    102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102,
    102, 102, 102, 102, 102, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,
      9,   9,   9,  70,   9,   9,   9,   9,   6,   6,  47,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  37,  17,  17, 104,
      9,   9,   9,   9,   9,   9,   9,  51,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  58,   0,   0,   0,
      0,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  10,   0,  21,   8,  53,   0,   0,   0,   0,   0,  16,   9,   9,   9,
    105, 105,  39,   9,   9,   9,   9,   9,  39,  17,   0,  77,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   0,
     23,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,
     17,  58,   0,   0,   6,   6,  76,   0,  17,  17,  17,  17,  23,   9,  67, 106,
      6,   6,  47,   9,   9,   9,   9,   9,   9,  51,  17,  58,   9,   9,   9,   9,
      9,  39,  17,  17,  17,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,  70,
     17,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  17,
     77,   0,   0,  67,   6,   6,  76,   0,   0,  55,   0,   0,   6,   6,  76,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  57,  17,  17,  37,   0,   0,
     39,   9,   9,  58,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,  65,  58,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46,  63,  77,  73,
     55,   0,   0,   0,   0,   0,   0,   0,   9,   9,  39,  17,  16, 107,   0,   0,
      8,  10,   8,  10,   8,  10,   0,   0,   9,  10,   9,  10,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  37,  58,   6,   6,  76,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   0,   9,   9,   9,   9,
      9,  10,  67,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,
      9,  10,   0,   0,  67,   9,   0, 108,  29,  29, 109,  29,  29,  30,  29, 110,
    111, 109,  29,  29,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   0,   0,
      0,   0,   0,   0,  67,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,
      0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  16,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   0,
     17,  17,  17,  17, 112,  94,   0,   0,  17,  17,  17,  17,  11,  93,   0,   0,
      0,   0,   0, 113,   5, 114,   0,   0,   0,   0,   0,   0,   9,  18,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9, 115,
      0, 116,   0,   5,   6,   6,   7,   0,   8,   9,   9,   9,   9,   9,  10,  11,
      8,   9,   9,   9,   9,   9,  10,   0,   0, 117, 102, 102, 102, 102, 102, 102,
    102, 102, 102, 102, 102, 102, 102, 118,   9,   9,   9,   9,   9,   9,   9,  10,
     16,   9,  16,   9,  16,   9,  16,  70,   0,   0,   0,   0,   0,   0, 119,   0,
      9,   9,   9,   8,   9,   9,   9,   9,   9,  10,   9,   9,   9,   9,  10,  21,
      9,   9,   9,  53,   9,   9,   9,  53,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,
      9,   9,   9,   9,   9,   9,   9,  70,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  70,   0,   0,   0,  77,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   0,   8,   9,   9,   9,   9,
      9,   9,  10,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,  51,  37,   0,
      9,   9,   9,   9,   9,   9,   9,  53,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   0,   9,   9,   8,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,  53,   6,   6,  76,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   0,   9,   9,  10,   9,
      9,   9,  10,   9,  10,  21,   9,   9,  21,   9,   9,   9,  21,   9,  21,  70,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,   0,
      9,   9,   9,   9,   9,  53,   0,   0,   9,   9,   0,   0,   0,   0,   0,   0,
      9,  21,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  18,   9,  10,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,  53,  18,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  21,  70,  48,
      9,   9,   9,   9,   9,  53,   0,   0,   9,   9,   9,   9,   9,  10,   0,   0,
      9,   9,   9,   9,   9,   9,   9,  10,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,  10,  53,   0,   0,
      9,   9,   9,   9,   9,  53,   0,   0,   9,   9,   9,   9,   9,   9,  53,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,  16,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     57,  28,   0,  17,   9,   8,   8,   9,   9,   9,   9,   9,   9,  53,  37,  65,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,  70,
      9,   9,   9,   9,   9,   9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   8,   9,   9,   9,   9,   9,   9, 107,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   0,
      9,   9,   9,   9,   9,  53,   0,   0,   9,   9,   9,   9,  10,   0,   0,   0,
      9,   9,   9,   9,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  17,   0,   0,   6,   6,  76,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  22,  77,  53,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,  70,   0,  67,   0,   0,   9,   9,   9,   9,
      9,  51,  17,  17,  77,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,
     51,  58,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,
      9,  70,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,  10,   0,   0,
     84,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,
     17,  37,   0,   0,   0,   0,   0,   0,   0,  61,   6,   6,  45,  52,   0,  65,
     84,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  37,  14,
     74,   0,   0,  14,   9,   9,   9,   9,   9,   9,  70,   0,   6,   6,  76,   0,
     84,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  17, 120,   6,   6,
      0,  82,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,  39,  13,   0,   0,
     84,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  17,
     42,  70,  26,  46,   6,   6, 121,  70,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,  21,   9,   9,   9,   9,   9,   9,  17,  17,  17,   0,  74,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,  10,  18,  21,   9,   9,   9,  21,   9,   9,  70,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  37,   0,   6,   6,  76,   0,
     17,   8,   9,  48,  48,   9,   9,   9,   9,   9,  18,   9,  18,   8,  22,  60,
     17,  63,  63,  58,  70,  65,   0,   8,  51,  73,  17,  77,  17,  77,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  57,  17,  17,
     17,  84,  10,   0,   6,   6,  76,  72,  53,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,  17,
     17,  21,   0,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  58,  17,  17,
     77,   0,   0,   0,   0,   0,   9,  58,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,  17,
     77,  70,   0,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  17,  70,   0,
      6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  26,  17,  17,  17,   0,   6,   6,  76,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,  37,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   6,   6,  76,   0,   0,   0,   0,  67,
      9,  10,  71,   9,   9,  68,   9,   9,   9,   9,   9,   9,  17,  27,  63,  84,
     60,   0,   0,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,  16,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  57,  17,  73,  17, 122,  77,   0,   0,   0,   0,   0,   0,
     57,  17,  84,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  56,  37,
      0,  65,   0,   0,  57,  17,  17,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  51,  17,  17,  17,  58,  71,   0,   0,   0,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,   0,
      9,   9,  18,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  37,  17,  17,
     70,   0,   0,   0,   6,   6,  76,   0,   0,   0,   0,   0,  16,   9,   9,   9,
      9,   9,   9,   9,  73,  17,  17,  17,  17,  17,  26,  17,  17,  37,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,  10,  21,   9,   9,   9,   9,   9,   9,   9,   9,   9,  57,  37,  74,  27,
     17,  56,   0,   0,   6,   6,  76,   0,   9,  21,  18,   9,   9,   9,   9,   9,
      9,   9,  51,  37,  27,  17,  70,   0,   6,   6,  76,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,  39,  37,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  70,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,  34,  34,  38,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,   0,
      9,   9,   9,   9,   9,   9,   9,  10,   6,   6,  76,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,
      6,   6,  76,   0,   9,   9,   9,   9,   9,   9,   9,  53,  17,  77,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  37,   0,   0,
      9,   0,   0,   0,   6,   6,  76,   0,  67,   9,   9,   9,   9,   9,   0,   8,
      9,   9,   9,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  10,  65,  57,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,   0,  65,  84,   9,   9,   9,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  21,  77,   0,   0,  58,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 102,  98, 102, 123,
    101,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 103,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 102,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,   9,   9,   9,  70,
      9,   9,  70,   0,   9,   9,  53,  28,  34,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  58,  17,  17,  17,  17,
     17,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  58,  26, 124,  34, 125,  17,
     37,  26,  17,   0,   0,   0,   0,   0,   0,   0,  73,  58,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     73,  77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,  18,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,  18,  13,  68,   8,  18,   9,   9,  21,   8,
      9,   8,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  21,  10,   8,   9,  18,   9,  18,   9,   9,   9,   9,   9,   9,  21,  10,
      9,  62,  16,   9,  18,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   9,   9,   9,   9,   9,   9,
     18,   9,   9,   9,   9,   9,  10,   9,   9,   9,   9,   9,   9,   9,  10,   9,
      9,   9,   9,   9,   9,  18,   9,   9,   9,   9,   9,   9,   9,  18,   9,   9,
      9,   9,   9,  10,   9,   9,   9,   9,   9,   9,   9,  10,   9,   9,   9,   9,
      9,   9,  18,   9,   9,   9,   9,   9,   9,   9,  18,   9,   9,   9,   9,   9,
     10,   9,   9,  61,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  37,  65,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  77,   0,  55,   0,   0,
      0,  77,   0,   0,   0,   0,  65,  17,  26,  17,  17,  17,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,  10,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     17,  37,  17,  17,  17,  17,  63,  17,  27,  46,  37,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,  17,  84,   9,  53,
      6,   6,  76,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9, 126,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,   6,   6,  76,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,  10,   9,  68,   9,   9,   9,  10,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  70,   0,   0,  17,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  17,  84,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   8,   9,   9,   9,   9,   9,   9,  68,  48,   8,   9,  10,   9,  85,   0,
     13,  67,  85,   8,  68,  48,  85,  85,  68,  48,  10,   9,  10,   9,   8,  62,
      9,   9,  21,   9,   9,   9,   9,   0,   8,   8,  21,   9,   9,   9,   9,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,
      9,   9,  53,   0,   9,   9,   9,   9,   9,   9,  53,   0,   9,   9,   9,   9,
      9,   9,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 128, 128, 128, 128, 128, 128,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  65,  17,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   6,  76,   0,
     14,   0,   0,   0,   0,   0,   0,   0,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,   0,   0,   0,   0
};

static UINT8 word_break_table_3[704] = {
      0,   1,   2,   2,   2,   3,   4,   5,   2,   6,   7,   8,   9,  10,  11,  12,
     13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,
     29,  30,   2,   2,  31,  32,  33,  34,  35,   2,   2,   2,  36,  37,  38,  39,
     40,  41,  42,  43,  44,  45,  46,  47,  48,  49,   2,  50,   2,   2,  51,  52,
     53,  54,  55,  56,  57,  57,  57,  57,  57,  58,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,   2,  59,  60,  61,  62,  57,  57,  57,
     63,  64,  65,  66,  57,  67,  68,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  69,   2,   2,  70,  71,  72,  73,
     74,  75,  76,  77,  78,  79,  80,  81,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  82,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  83,  84,   2,   2,  85,  86,  87,  88,  89,  90,
     91,  92,  93,  94,  57,  95,  96,  97,   2,  98,  99, 100,   2,   2, 101, 102,
    103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113,  57,  57, 114, 115, 116,
    117, 118, 119, 120, 121, 122, 123,  57, 124, 125,  57, 126, 127, 128, 129,  57,
    130, 131, 132, 133, 134, 135,  57,  57, 136, 137, 138, 139,  57, 140,  57, 141,
      2,   2,   2,   2,   2,   2,   2, 142, 143,   2, 144,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57, 145,
      2,   2,   2,   2,   2,   2,   2,   2, 146,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,   2,   2,   2,   2, 147,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
      2,   2,   2,   2, 148, 149, 150, 151,  57,  57,  57,  57, 152,  57, 153, 154,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57, 155,
    156,  57, 157,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57, 158, 159,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57, 160,  57,
     57,  57, 161, 162, 163,  57,  57,  57, 164, 165, 166,   2,   2, 167, 168, 169,
     57,  57,  57,  57, 170, 171,  57,  57,  57,  57,  57,  57,  57,  57, 172,  57,
    173,  57, 174,  57,  57, 175,  57,  57,  57,  57,  57,  57,  57,  57,  57, 176,
      2, 177, 178,  57,  57,  57,  57,  57,  57,  57,  57,  57, 179, 180,  57,  57,
     57,  57, 181, 182,  57,  57,  57, 183,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57, 184,  57,  57,  57,  57,  57,  57,  57,  57,
    185,  57, 186, 187,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57
};

static UINT8 word_break_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   6,   6,   7,   4,   8,
      9,  10,  11,  12,  13,   4,  14,   4,   4,   4,  15,  16,  17,  18,  19,  20,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
     21,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
};

UINT32 lookup_word_break(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = word_break_table_4[block];
    offset = (codepoint >> 7) & 0x1F;
    block = word_break_table_3[(block << 5) + offset];
    offset = (codepoint >> 2) & 0x1F;
    block = word_break_table_2[(block << 5) + offset];
    offset = codepoint & 0x3;
    value = word_break_table_1[(block << 2) + offset];

    return value;
}

/* The tables and function for XDigit. */

static UINT8 xdigit_table_1[112] = {
      0,   0,   0,   0,   0,   0, 255,   3, 126,   0,   0,   0, 126,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255,   3,   0,   0,
    255,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 192, 255,   0,   0,
      0,   0, 255,   3,   0,   0,   0,   0, 192, 255,   0,   0,   0,   0,   0,   0,
    255,   3, 255,   3,   0,   0,   0,   0,   0,   0, 255,   3,   0,   0, 255,   3,
      0,   0, 255,   3, 126,   0,   0,   0, 126,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 192, 255,   0, 192, 255, 255, 255, 255, 255, 255
};

static UINT8 xdigit_table_2[224] = {
      0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   3,   2,   0,   2,   2,   2,   4,   2,   2,   2,   2,   2,   5,   2,   5,
      2,   5,   2,   5,   2,   5,   2,   5,   2,   6,   2,   6,   3,   2,   2,   2,
      2,   4,   6,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,
      6,   2,   2,   2,   2,   7,   2,   6,   2,   2,   8,   2,   2,   6,   0,   2,
      2,   8,   2,   2,   2,   2,   2,   2,   3,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   6,   4,   2,   2,   9,   2,   6,   2,   2,   2,   2,   2,   0,
      2,   2,   2,   2,  10,  11,   2,   2,   2,   2,   3,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   0,   2,   2,   2,   2,   5,   2,   0,  12,   2,   2,   6,
      2,   2,   2,   0,   2,   2,   2,   2,   2,   6,   2,   6,   2,   2,   2,   2,
      2,   6,   2,   4,   0,   2,   2,   2,   2,   2,   2,   3,   2,   6,   2,   2,
      2,   6,   2,   2,   2,   6,   3,   2,   2,   3,   2,   4,   2,   6,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  13,   2,   2,   2,   2,   2,   4,   2,   2,
      2,   2,   2,   2,   2,   6,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0
};

static UINT8 xdigit_table_3[128] = {
      0,   1,   1,   2,   3,   4,   4,   5,   6,   1,   1,   7,   8,   9,  10,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,  11,  12,  13,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  14,
      1,   1,  15,   1,   1,   1,  16,   1,  17,  18,  19,  20,  21,   1,  22,   1,
      1,   1,   1,   1,   1,  23,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  24,   1,   1,   1,   1,
     25,  18,   1,   1,  26,   1,   1,   1,   1,   1,   1,   1,   1,  27,   1,   1
};

static UINT8 xdigit_table_4[136] = {
      0,   1,   1,   1,   1,   2,   1,   3,   4,   1,   1,   5,   1,   1,   6,   7,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1
};

UINT32 lookup_xdigit(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 13;
    block = xdigit_table_4[block];
    offset = (codepoint >> 9) & 0xF;
    block = xdigit_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0x7;
    block = xdigit_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = xdigit_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for XID_Continue. */

static UINT8 xid_continue_table_1[434] = {
      0,   0, 255,   3, 254, 255, 255, 135, 255,   7,   0,   4, 160,   4, 255, 255,
    127, 255, 195, 255,   3,   0,  31,  80, 223, 184, 192, 215, 251, 255, 191, 255,
    251, 252, 127,   2, 255,   1, 255, 191, 182,   0,   7,   0, 255, 195, 239, 159,
    255, 253, 255, 159, 255, 231,  63,  36, 255,  63, 255,  15, 255, 126,   0, 255,
    207, 255, 249, 255, 197, 243, 159, 121, 128, 176,   3,  80, 238, 135, 109, 211,
    135,  57,   2,  94, 192, 255,  63,   0, 238, 191, 237, 243, 191,  59,   1,   0,
      0, 254, 238, 159, 159,  57, 224, 176,   2,   0, 236, 199,  61, 214,  24, 199,
    199,  61, 129,   0, 255, 223, 253, 255, 255, 243, 223,  61,  96,  39, 239, 223,
    239, 243,  96,  96,   6,   0, 223, 125, 240, 128,   0, 252, 238, 255, 127, 252,
    251,  47, 127, 132,  95, 255,  12,   0, 255, 127, 214, 247, 175, 255,  95,  63,
      0,   3, 160, 194, 255, 254, 255,  31, 223, 255,  64,   0, 191,  32, 255, 247,
    255,  61, 127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  63, 128,  31,   0,
     15,   0,  13,   0, 143,  48,   0, 184, 128,   0,   0, 248, 255,   0, 255, 227,
    247, 255, 255, 170, 223,  95, 220,  31, 207,  15,   0, 128,  16,   0,   2, 128,
    226, 255, 132, 252,  47,  63,  80, 253, 224,  67,  31, 248, 255, 128, 127,   0,
    127, 127, 224,   0,  62,  31, 127, 230, 224, 255, 240, 191, 128, 255, 252, 255,
    255, 249, 235,   3, 255,  16, 255, 232,   1, 128,   0,  56, 124,   0, 126, 126,
    126,   0, 255,  55, 127, 248, 248, 224, 127,  95, 219, 255, 248, 255, 240, 255,
     24,   0,   0, 224, 138, 170, 252, 252, 252,  28, 255, 239, 255, 183,   0,  32,
     15, 255,  62,   0, 183, 255, 251,  27, 253,   7,  63, 253, 191, 145,  55,   0,
    255, 192, 111, 240, 239, 254,  63, 135, 255,  27,   4,   0, 240,   0,  79,   0,
     31, 222, 255,  23, 255,  64, 127, 189, 237, 251, 129, 224, 207,  31, 191,   0,
     63, 255,   0,  63,  17,   0, 127, 242, 111, 255, 191, 249, 255, 252,  27,   0,
    255,  35, 127, 251, 127, 180, 191, 253, 251,   1, 255, 224, 239, 111, 255,  99,
    224, 227,   7, 248, 231,  15,   0,  60,  28,   0, 100, 222, 255, 235, 239, 255,
    191, 231, 223, 223, 255, 123,  95, 252, 247, 207,  32,   0, 219,   7, 255,  67,
    127, 111, 150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251,
    238, 251
};

static UINT8 xid_continue_table_2[1952] = {
      0,   0,   0,   1,   2,   3,   2,   4,   0,   0,   5,   6,   7,   8,   7,   8,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   9,  10,  11,   0,
      7,   7,   7,   7,   7,   7,   7,  12,  13,   7,  14,   7,   7,   7,   7,  15,
      7,   7,   7,   7,   7,   7,   7,   7,  16,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   2,   7,  17,   7,   7,  18,   2,   7,  19,  20,   7,   3,  21,
      0,   4,   7,   7,   7,   7,  22,   7,   7,   7,   7,   7,   7,  23,  24,  25,
      0,   7,   7,   7,  26,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,  27,
      7,   7,  28,   0,   7,  29,   4,   7,  30,  31,   7,   7,   7,   7,  14,   7,
      7,   7,   7,   7,   7,   7,  32,   2,  23,  33,  24,  34,  35,  36,  32,  37,
     38,  33,  24,  39,  40,  41,  42,  43,  44,  14,  24,  45,  46,  47,  32,  48,
     49,  33,  24,  45,  50,  51,  32,  52,  53,  54,  55,  22,  56,  57,  42,   0,
     58,  59,  24,  60,  61,  62,  32,   0,  63,  59,  24,  64,  61,  65,  32,  66,
     58,  59,   7,   7,  67,  68,  32,  69,  70,  71,   7,  72,  73,  74,  42,  75,
      2,   7,   7,   4,  76,   1,   0,   0,  77,   7,  78,  28,  79,  60,   0,   0,
     47,  80,   1,  81,  82,   7,  83,   2,  84,  82,   7,  83,  85,   0,   0,   0,
      7,   7,   7,   7,   1,   7,   7,   7,   7,  28,   7,   7,  86,   7,   7,  87,
      7,   7,   7,   7,  88,  89,   7,   7,  88,   7,   7,  90,  91,   8,   7,   7,
      7,  91,   7,   7,   7,  26,  48,  10,   7,   0,   7,   7,   7,   7,   7,  92,
      2,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,  25,   7,   2,   4,   7,   7,   7,   7,  93,  18,
      7,  94,   7,  95,   7,  96,  58,  97,   7,   7,   7,   7,   7,  98,   1,   0,
     99,   1,   7,   7,   7,   7,   7,  18,   7,   7,   4,   7,   7,   7,   7,  43,
      7,  76,  29,  29,  42,   7,  28,  95,   7,   7,  29,   7,   1,   4,   0,   0,
      7,  29,   7,   7,   7,  76,   7,  25,   1,   1, 100,  19,  76,   0,   0,   0,
      7,   7,   7,   7,  83,   1, 101,  96,   7,   7,   7,   7,   7,   7,   7,  96,
      7,   7,   7, 102, 103,   7,   7,  28,  18,   7,   7,  26,   0, 104,   7,   4,
      7,  92,   7,   7,  92, 105,   7,  28,   7,   7,   7, 106, 107, 108,  83, 107,
      0,   0,   0, 109,  47, 110,   0, 111,   0,  83,   0,   0,   0,  83, 112,  47,
    113, 114, 115,  60, 116,   0,   7,   7,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 117,  96,
      7,   7,  86,   7,   7,   7, 118, 109,   7, 119, 120, 120, 120, 120,   7,   7,
    121,   0,   2, 122,   2,   7,   7,   7,   7, 123,   2,   7,   7,   7,   7,  87,
    124,   7,   7,   2,   7,   7,   7,   7,  76,   0,   7,   7,   0,   0,   0,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,  83,   0,   0,   0,   0,   7,   7,  28,
     83,   7,  29,   0,   7,   7,   7, 125,   7,   7,   7,   7,   7,   7,   7,  10,
      0, 126, 127,   7,   7,   7,   7,   7, 128,   7,   7,   7,   4, 129,   0, 127,
      7,   7, 130,   0,   7,   7,   7,  96,   7,   7,   7,   7,  43,   1,   7, 131,
      7,   7,  28,   7,   7,  96,   7,  83,   7,   7,   7,   7, 132,   1,   7,  76,
      7,   7,   7, 119,  28,   1,   7,  71,   7,   7,   7,   7,  21, 133,   7, 134,
    135, 136, 120,   7,   7,  87,   1,   7,   7,   7,   7,   7,   7,   7, 137,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  96,   7, 138,   7,   7,  29,
      7,   7,   7,   7,   7,   7,  28,   7,   7,   7,   7,   7,   7,   1,   0,   0,
    119, 139,  24, 140, 141,   7,   7,   7,   7,   7,   7,  10,   0, 142,   7,   7,
      7,   7,   7,   7,   7,  28, 143,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,  28,   0,   7,   7,   7,   7, 127,   7,   7, 102,   0,   0,   1,
      7,   0,   7, 144, 145,   0,   0, 146,   7,   7,   7,   7,   7,   7,   7,  83,
      0,   1,   2,   3,   2,   4,  42,   7,   7,   7,   7,  76, 147, 148,   0,   0,
    149,   7,   8, 150,  28,  28,   0,   0,   7,   7,   7,   7,   7,   7,   7,   4,
      0,   0,   0,   0,   7,   7,   7,  95,   0,   0,   0,   0,   0,   0,   0, 151,
      0,   0,   0,   0,   0,   0,   0,   0,   7,  83,   7,   7,   7,  47,  47,   0,
      7,   7, 145,   7,   4,   7,   7,   4,   7,  28,   7,   7, 152, 153,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   1,   7,   7, 152,   7,  29,
      7,   7, 102,   7,   7,   7,  96,  87,  87, 154,  14, 155,   0,   0,   0,   0,
      7,   7,   7, 119,   7,  43, 102,   0,  15,   7,   7, 156,   0,   0,   0,   0,
    157,   7,   7, 158,   7,  43,   7, 119,   7,  76,   0,   0,   0,   0,   7, 159,
      7,  43,   7,   1,   0,   0,   0,   0,   7,   7,   7, 160,   0,   0,   0,   0,
    161, 162,   7, 163,   0,   0,   7,  83,   7,  83,   0,   0,  82,   7, 119,   0,
      7,   7,   7,  43,   7,  43,   7,  21,   7,  10,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,  18,   0,   0,   0,   7,   7,   7,  21,   7,   7,   7,  21,
      7,   7, 102,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 164,  10,   0,   0,   0,   0,
      7,  83, 100,   7,   7,  47,   0,   7,  43,   0,   0,   7,  95,   0,   7, 119,
      7,   7,   7,   7, 119,   0,  42,  94,   7,   7,   7,   4, 165,   7,  18,   1,
      7,   7,   7,  84, 166,   7,   7, 167,   7,   7,   7,   7, 168, 169,   0,   0,
      7,  14,   7, 170,   0,   0,   0,   0, 171,  19,  18,   7,   7,   7,   4,   1,
     23,  33,  24, 172,  50, 173, 174,  95,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,  22,  10,   0,   7,   7,   7,   7, 175,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7, 176,  47, 177,   0,   0,
      7,   7,   7,   7, 178,   1,   0,   0,   7,   7,   7,  18,   1,   0,   0,   0,
      7,  26,  29,   1, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   1, 109,
    179, 180,   7, 181,  96,   1,   0,   0,   0,   0, 182,   7,   7, 182, 183,   0,
      7,   7,   7,  76, 100,   7,   7,   7,   7, 184,   0,   7,   7,   7,   7,  18,
     24,   7,   7,   8,  47,   1,   0, 127,   7, 127,  82, 119,   0,   0,   0,   0,
    185,   7,   7, 186, 102,   1, 187,   7,  76, 188,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 119,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   1,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,  76,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   7,   7,  47,
      7,   7,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,  18,   7,  76,   1,   7,   7,   7,   7,  76,   1,   7,  28,  95,
      7,   7,   7, 119,  96,   1, 142, 189,   7,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,   7,   7,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   3,   7,   7,   7, 118,   7,   0,   0,   0,   0, 183,  10,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 102,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  43,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 190,
      7,   7,  21,   0,   0,  21, 166,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  29,
      7,   7,   7,   7,   7,   7,   4,  83,  18, 191,   0,   0,   0,   0,   0,   0,
      7,   7,  28,   7, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 192, 193, 194,   0, 195,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 196,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,  84,   7,   7,   7,  58, 197, 198, 199,   7,   7,   7,
    200, 201,   7, 202, 203,  59,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 176,   7,  59,  87,   7,  87,
      7,  84,   7,  84,  76,   7,  76,   7,  24,   7,  24,   7, 204,   7,   7,   7,
      7,   7,   7, 138,   7,   7,  83, 205, 110, 101,   2,   0,   0,   0,   0,   0,
      7,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      8, 128, 206,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  83,  28, 207,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  76,   0,   7,   7,   7,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 208,  76,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  95, 119,   0,   0,
      7,   7,   7,   7,  29,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    199,   7, 209, 210, 211, 212, 213, 214, 215,  29, 216,  29,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,
      7,   7,   7,  18,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  28,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  47,   0,
      7,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0
};

static UINT8 xid_continue_table_3[480] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,   1,   1,  27,
     28,  29,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  31,  32,  30,  30,
     33,  34,  30,  30,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  35,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  36,   1,  37,  38,  39,  40,  41,  42,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  43,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,   1,  44,  45,  46,  47,  48,  49,
     50,  51,  52,  53,  54,  55,   1,  56,  57,  58,  59,  60,  61,  62,  63,  64,
     65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  30,  76,  77,  78,  79,
      1,   1,   1,  80,  81,  82,  30,  30,  30,  30,  30,  30,  30,  30,  30,  83,
      1,   1,   1,   1,  84,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,   1,   1,  85,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,   1,   1,  86,  87,  30,  30,  88,  89,
      1,   1,   1,   1,   1,   1,   1,  90,   1,   1,   1,   1,  91,  92,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  93,
      1,  94,  95,  30,  30,  30,  30,  30,  30,  30,  30,  30,  96,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  97,
     30,  98,  99,  30, 100, 101, 102, 103,  30,  30, 104,  30,  30,  30,  30, 105,
    106, 107, 108,  30,  30,  30,  30, 109, 110, 111,  30,  30,  30,  30, 112,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30, 113,  30,  30,  30,  30,
      1,   1,   1,   1,   1,   1, 114,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 115, 116,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 117,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 118,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,   1,   1, 119,  30,  30,  30,  30,  30,
      1,   1,   1, 120,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30, 121,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30
};

static UINT8 xid_continue_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,  19,  20,  21,  22,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  23,  24,  25,   5,  26,  27,
      5,  28,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
     29,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_xid_continue(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = xid_continue_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = xid_continue_table_3[(block << 4) + offset];
    offset = (codepoint >> 4) & 0xF;
    block = xid_continue_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x1;
    block = xid_continue_table_1[(block << 1) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for XID_Start. */

static UINT8 xid_start_table_1[1000] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,   0,   0, 223, 184,
     64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,   3, 252, 255, 255,
    255, 255, 254, 255, 255, 255, 127,   2, 255,   1,   0,   0,   0,   0, 255, 255,
    255, 135,   7,   0, 255,   7,   0,   0,   0, 192, 254, 255, 255, 255,  47,   0,
     96, 192,   0, 156,   0,   0, 253, 255, 255, 255,   0,   0,   0, 224, 255, 255,
     63,   0,   2,   0,   0, 252, 255, 255, 255,   7,  48,   4, 255, 255,  63,   4,
     16,   1,   0,   0, 255, 255, 255,   1, 255,   7, 255, 255, 255, 126,   0,   0,
    255,   3,   0,   0, 240, 255, 255, 255, 255, 255, 255,  35,   0,   0,   1, 255,
      3,   0, 254, 255, 225, 159, 249, 255, 255, 253, 197,  35,   0,  64,   0, 176,
      3,   0,   3,  16, 224, 135, 249, 255, 255, 253, 109,   3,   0,   0,   0,  94,
      0,   0,  28,   0, 224, 191, 251, 255, 255, 253, 237,  35,   0,   0,   1,   0,
      3,   0,   0,   2, 224, 159, 249, 255,   0,   0,   0, 176,   3,   0,   2,   0,
    232, 199,  61, 214,  24, 199, 255,   3, 224, 223, 253, 255, 255, 253, 255,  35,
      0,   0,   0,  39,   3,   0,   0,   0, 225, 223, 253, 255, 255, 253, 239,  35,
      0,   0,   0,  96,   3,   0,   6,   0, 240, 223, 253, 255, 255, 255, 255,  39,
      0,  64, 112, 128,   3,   0,   0, 252, 224, 255, 127, 252, 255, 255, 251,  47,
    127,   0,   0,   0, 254, 255, 255, 255, 255, 255,   5,   0, 214, 247, 255, 255,
    175, 255,   5,  32,  95,   0,   0, 240,   1,   0,   0,   0, 255, 254, 255, 255,
    255,  31,   0,   0,   0,  31,   0,   0, 255,   7,   0, 128,   0,   0,  63,  60,
     98, 192, 225, 255,   3,  64,   0,   0, 191,  32, 255, 255, 255, 255, 255, 247,
    255,  61, 127,  61, 255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255,
    255, 255,  61, 255, 255, 255, 255,   7, 255, 255,  63,  63, 255, 159, 255, 255,
    255, 199, 255,   1, 255, 255,   3, 128, 255, 255,   3,   0, 255, 223,   1,   0,
    255, 255,  15,   0,   0,   0, 128,  16, 255,   5, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 127, 255,  63,  31,   0, 255,  15, 255, 255, 255, 255, 127,   0,
    255, 255,  31,   0, 128,   0,   0,   0, 224, 255, 255, 255, 224,  31,   0,   0,
    248, 255, 255, 255,   1, 192,   0, 252,  63,   0,   0,   0,  15,   0,   0,   0,
      0, 224,   0, 252, 255, 255, 255,  63, 255,   1, 255, 255, 255, 255, 255, 231,
      0, 222, 111,   4,  63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15,
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  63,
     80, 253, 255, 243, 224,  67,   0,   0,  31, 120,  12,   0, 255, 128,   0,   0,
    127, 127, 127, 127, 224,   0,   0,   0, 254,   3,  62,  31, 255, 255, 127, 224,
    255, 127,   0,   0, 255,  31, 255, 255,   0,  12,   0,   0, 255, 127,   0, 128,
      0,   0, 128, 255, 252, 255, 255, 255, 255, 249, 255, 255, 255,   7, 235,   3,
      0,   0, 252, 255, 187, 247, 255, 255,   7,   0,   0,   0,   0,   0, 252, 104,
     63,   0, 255, 255, 255, 255, 255,  31, 255, 255,   7,   0,   0, 128,   0,   0,
    223, 255,   0, 124, 247,  15,   0,   0, 255, 255, 127, 196, 255, 255,  98,  62,
      5,   0,   0,  56, 255,   7,  28,   0, 126, 126, 126,   0, 127, 127, 255, 255,
    255,   3, 255, 255,  15,   0, 255, 255, 127, 248, 255, 255, 255, 255, 255,  15,
    255,  63, 255, 255, 255, 255, 255,   3, 127,   0, 248, 160, 255, 253, 127,  95,
    219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255, 255,   0,   0,   0,
      0,   0, 255,   3,   0,   0, 138, 170, 192, 255, 255, 255, 252, 252, 252,  28,
    255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 255, 255,   1,   0,
     15, 255,  62,   0, 255, 255,  15, 255, 255,   0, 255, 255,  15,   0, 255, 247,
    255, 247, 183, 255, 251, 255, 251,  27, 191, 255, 255, 255, 255, 255, 253,   7,
     63, 253, 255, 255, 255, 255, 191, 145, 255, 255,  55,   0, 255, 255, 255, 192,
      1,   0, 239, 254,  31,   0,   0,   0, 255,   3,   3,   0, 128,   0, 255, 255,
    255, 255, 255,   0,   0,   0,  38,   0, 144,   0, 255, 255, 255, 255,  71,   0,
     30,   0,   0,  20, 255, 255, 251, 255, 255,  15,   0,   0, 127, 189, 255, 191,
      0,   0,   1, 224, 128,   7,   0, 128, 176,   0,   0,   0,   0,   0,   0,  15,
     16,   0,   0,   0, 255,   7,   0,   1,   0,   0,   0, 128, 127, 242, 111, 255,
    255, 255,   0, 128,   2,   0,   0,   0, 255, 252, 255, 255,  10,   0,   0,   0,
      1, 248, 255, 255, 255, 255,   7,   4,   0,   0,   1, 240, 255,   3,   0,  32,
    255, 253, 255, 255, 127, 251, 255, 255,  64,   0,   0,   0, 191, 253, 255, 255,
    255,   3,   0,   1, 255,  63,   0,   0, 248, 255, 255, 224, 255,   7,   1,   0,
     11,   0,   0,   0,   0,   0, 239, 111,   0,   0,   7,   0, 240,   0, 255, 255,
    255,   7, 255,  31, 255,   1, 255,   3, 255, 255, 223, 255, 255, 255, 255, 223,
    100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,
     95, 252, 253, 255,  63, 255, 255, 255, 253, 255, 255, 247, 255, 127, 255, 255,
    255,  31, 128,  63,   0,  64,   0,   0, 127, 111, 255, 127,  15,   8,   0,   0,
    150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 255,  15,
    238, 251, 255,  15,   3,   0, 255, 255
};

static UINT8 xid_start_table_2[920] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   0,   7,   8,   9,   4,  10,
      4,   4,   4,   4,  11,   4,   4,   4,   4,  12,  13,   4,  14,   0,  15,  16,
      0,   4,  17,  18,   4,   4,  19,  20,  21,  22,  23,   4,   4,  24,  25,  26,
     27,  28,  29,  30,  31,   4,  32,   0,  33,  34,  35,  36,  37,  38,  39,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  46,  50,  51,  52,  53,  47,   0,
     54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,   0,
     69,  70,  68,   0,  71,  72,  73,   0,  74,   0,  75,  76,  77,   0,   0,   0,
      4,  78,  79,  80,  81,   4,  82,  83,   4,   4,  84,   4,  85,  86,  87,   4,
     88,   4,  89,   0,  22,   4,   4,  90,  69,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  91,   1,   4,   4,  92,  93,  94,  94,  95,   4,  96,  97,   0,
      0,   4,   4,  29,   4,  98,   4,  99, 100,   0,  15, 101,   4, 102,  32,   0,
    103,   4, 104,   0,   0, 105,   0,   0, 106,  96, 107,   0, 108, 109,   4, 110,
      4, 111, 112, 113, 114, 115,   0, 116,   4,   4,   4,   4,   4,   4,   0,   0,
     90,   4, 117, 113,   4, 118, 119, 120,   0,   0,   0, 121, 122,   0,   0,   0,
    123, 124, 125,   4,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      4,   4,   4,   4,   4,   4,   4, 126,   4,  82,   4, 127, 103, 128, 128,   0,
    129, 130,  69,   4, 131,  69,   4,  83, 106,  12,   4,   4, 132,   4,   0,  15,
      4,   4,   4,   4,  76,   0,  15, 113, 133, 134,   4, 135, 113,   4,   4,  22,
    136, 137,   4,   4, 138,   4, 139, 140, 141, 142,   4,  96, 137,  96,   0, 143,
     25, 144,  68, 145,  33, 146, 147, 148,   4,  14, 149, 150,   4, 151, 152, 153,
    154, 155,  83, 156,   4,   4,   4, 142,   4,   4,   4,   4,   4, 157, 158, 159,
      4,   4,   4, 160,   4,   4, 161,   0, 162, 163, 164,   4,   4,  94, 165,   4,
      4,   4, 113,  33,   4,   4,   4,   4,   4, 113,  15,   4, 166,   4, 167, 168,
      0,   0,   0, 169,   4,   4,   4, 145,   0,   1,   1, 170, 113, 100, 171,   0,
    172, 173, 174,   0,   4,   4,   4,  89,   0,   0,   4, 104,   0,   0,   0,   0,
      0,   0,   0,   0, 145,   4, 175,   0,   4,  23,  30,  99, 113,   4, 176,   0,
      4,   4,   4,   4, 113,  15, 177, 159,   4, 178,   4, 179, 180, 181,   0,   0,
      4, 103,  99, 167, 182, 183,   0,   0, 184, 185,  99, 103, 100,   0,   0, 186,
     99, 161,   0,   0,   4, 187,   0,   0, 188,  99,   0, 145, 145,   0,  75, 189,
      4,  99,  99, 146,  94,   0,   0,   0,   4,   4,  14,   0,   4, 146,   4, 146,
      4, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4, 190,   0,   0,
    145, 191, 110,  15,  57,  15, 189, 103, 108, 192,   0, 193, 108,  22,  15,  14,
    108,  68, 194, 195, 108, 146, 196,   0, 197, 198,   0,   0, 199, 114, 100,   0,
     49,  46, 200,  57,   0,   0,   0,   0,   4, 104, 201,  57,   4,  22, 202,   0,
      0,   0,   0,   0,   4, 132, 203,   0,   4,  22, 204,   0,   4, 205,   0,   0,
     89,   0,  68,   0,   0,   0,   0,   0,   4, 198,   0,   0,   0,   4,   4, 206,
    207, 208, 209,   0,   0, 210, 175, 211, 212, 213, 214,   4, 215,  15,   4,  29,
    216, 132,  74, 140,  22,   0,   0,   0, 217, 175, 218, 219, 220,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 146,   0,   0,   0,   0,   0,  47,   0,   0,
      4,   4,   4,   4, 161,   0,   0,   0,   4,   4,   4, 132,   4,   4,   4,   4,
      4,   4, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15,   4,   4, 175,
      4, 132,   0,   0,   0,   0,   0,   0,   4,   4,  68,   0,   0,   0,   0,   0,
      4,  29, 100,  15,   4, 100,  15, 221,   4,  22, 111, 222,  22,   0,   0,   0,
      0,   0,   4,   4,   0,   0,   0,   0,   4,   4, 223,   0, 165,   0,   0, 224,
      4,   4,   4,   4,   4,   4,   4, 192,   4,   4,   4,   4,   4,   4,  99,   0,
     14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 225,
      4, 142, 226, 227,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 159,
      4,   4,   4, 228, 229,   0,   0,   0,   4,   4, 230,   4, 231, 232, 233,   4,
    234, 235, 236,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 237, 238,  83,
    230, 230, 239, 239, 216, 216, 149,   0, 100,   0,   0,   0,   0,   0,   0,   0,
      4, 240, 241,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 221,   4, 198,
      0,   0,   0,   0,   0,   0,   0, 242,   4,   4,   4,   4,   4,   4, 189,   0,
      4,   4, 243,   0,   0,   0,   0,   0, 233, 244, 245, 246, 247, 248,   0,   0,
      4,   4,   4,   4,   4,   4,   4,   0,   4,  29,   4,   4,   4,   4,   4,   4,
    113,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 249,   4,   4,
      4,   4,   4,   4,   4,   4,   4,  74, 113,   0,   0,   0,   0,   0,   0,   0,
      4,   4,  17,   0,   0,   0,   0,   0
};

static UINT8 xid_start_table_3[432] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  32,  33,  31,  31,
     34,  35,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  27,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  36,   1,  37,  38,  39,  40,  41,  42,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  43,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  44,  45,  46,  47,  48,  49,
     50,  51,  52,  53,  54,  55,   1,  56,  57,  58,  59,  60,  61,  62,  63,  64,
     65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  31,  76,  77,  78,  79,
      1,   1,   1,  80,  81,  82,  31,  31,  31,  31,  31,  31,  31,  31,  31,  83,
      1,   1,   1,   1,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  86,  87,  31,  31,  88,  89,
      1,   1,   1,   1,   1,   1,   1,  90,   1,   1,   1,   1,  91,  92,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  93,
      1,  94,  95,  31,  31,  31,  31,  31,  31,  31,  31,  31,  96,  31,  31,  31,
     31,  31,  31,  31,  97,  98,  99, 100,  31,  31,  31,  31,  31,  31,  31, 101,
     31, 102, 103,  31,  31,  31,  31, 104, 105, 106,  31,  31,  31,  31, 107,  31,
      1,   1,   1,   1,   1,   1, 108,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 109, 110,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 111,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 112,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 113,  31,  31,  31,  31,  31,
      1,   1,   1, 114,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 xid_start_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  11,  12,  13,  14,   8,  15,   5,  16,   8,  17,  18,   8,  19,  20,   8,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  21,  22,  23,   5,  24,  25,
      5,  26,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8
};

UINT32 lookup_xid_start(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = xid_start_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = xid_start_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = xid_start_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = xid_start_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}
