#include "unicode_tables.h"

char* value_names[1021] = {
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
    "Tangut",
    "Tangut_Components",
    "Tangut_Supplement",
    "Telugu",
    "Thaana",
    "Thai",
    "Tibetan",
    "Tifinagh",
    "Tirhuta",
    "Transport_And_Map_Symbols",
    "Ugaritic",
    "Unified_Canadian_Aboriginal_Syllabics",
    "Unified_Canadian_Aboriginal_Syllabics_Extended",
    "Vai",
    "Variation_Selectors",
    "Variation_Selectors_Supplement",
    "Vedic_Extensions",
    "Vertical_Forms",
    "Wancho",
    "Warang_Citi",
    "Yezidi",
    "Yijing_Hexagram_Symbols",
    "Yi_Radicals",
    "Yi_Syllables",
    "Zanabazar_Square",
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
    "Tangut",
    "Telugu",
    "Thaana",
    "Thai",
    "Tibetan",
    "Tifinagh",
    "Tirhuta",
    "Ugaritic",
    "Vai",
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

static UINT8 alphabetic_table_1[1020] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,  32,   0,   0,   0,
      0,   0, 223, 188,  64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,
      3, 252, 255, 255, 255, 255, 254, 255, 255, 255, 127,   2, 255,   1,   0,   0,
      0,   0, 255, 191, 182,   0, 255, 255, 255, 135,   7,   0,   0,   0, 255,   7,
    255, 255, 255, 254,   0, 192, 255, 255, 255, 255, 239,  31, 254, 225,   0, 156,
      0,   0, 255, 255,   0, 224, 255, 255, 255, 255,   3,   0,   0, 252, 255, 255,
    255,   7,  48,   4, 255, 255, 255, 252, 255,  31,   0,   0, 255, 255, 255,   1,
    255,   7,   0,   0, 255, 255, 223, 255, 255,   0, 240, 255, 248,   3, 255, 255,
    255, 255, 255, 239, 255, 223, 225, 255,  15,   0, 254, 255, 239, 159, 249, 255,
    255, 253, 197, 227, 159,  89, 128, 176,  15,   0,   3,  16, 238, 135, 249, 255,
    255, 253, 109, 195, 135,  25,   2,  94,   0,   0,  63,   0, 238, 191, 251, 255,
    255, 253, 237, 227, 191,  27,   1,   0,  15,   0,   0,  30, 238, 159, 249, 255,
    159,  25, 192, 176,  15,   0,   2,   0, 236, 199,  61, 214,  24, 199, 255, 195,
    199,  29, 129,   0, 239, 223, 253, 255, 255, 253, 255, 227, 223,  29,  96,   7,
     15,   0,   0,   0, 255, 253, 239, 227, 223,  29,  96,  64,  15,   0,   6,   0,
    255, 223, 253, 255, 255, 255, 255, 231, 223,  93, 240, 128,  15,   0,   0, 252,
    238, 255, 127, 252, 255, 255, 251,  47, 127, 128,  95, 255,   0,   0,  12,   0,
    254, 255, 255, 255, 255, 255, 255,   7, 127,  32,   0,   0, 214, 247, 255, 255,
    175, 255, 255,  59,  95,  32,   0, 240,   1,   0,   0,   0, 255, 254, 255, 255,
    255,  31, 254, 255,   3, 255, 255, 254, 255, 255, 255,  31, 255, 255, 127, 249,
    255, 255,   0,  60, 191,  32, 255, 255, 255, 255, 255, 247, 255,  61, 127,  61,
    255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 255, 255,  61, 255,
    255, 255,   0,   0, 255, 255,  63,  63, 255, 159, 255, 255, 255, 199, 255,   1,
    255, 223,  15,   0, 255, 255,  15,   0, 255, 223,  13,   0, 255, 255, 207, 255,
    255,   1, 128,  16, 255,   7, 255, 255, 255, 255,  63,   0, 255, 255, 255, 127,
    255,  15, 255,   1, 255,  63,  31,   0, 255,  15, 255, 255, 255,   3,   0,   0,
    255, 255, 255,  15, 254, 255,  31,   0, 128,   0,   0, 128, 255, 255, 239, 255,
    239,  15,   0,   0, 255, 243,   0, 252, 191, 255,   3,   0, 255, 255, 127,   0,
      0, 224,   0, 252, 255, 255, 255,  63, 255,   1, 255, 255,   0, 222, 111,   4,
    128, 255,  31,   0,  63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15,
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  62,
     80, 189, 255, 243, 224,  67,   0,   0,   0,   0, 192, 255, 255, 127, 255, 255,
     31, 120,  12,   0, 255, 128,   0,   0, 127, 127, 127, 127,   0, 128,   0,   0,
    224,   0,   0,   0, 254,   3,  62,  31, 255, 255, 127, 224, 224, 255, 255, 255,
    255, 127,   0,   0, 255,  31, 255, 255,   0,  12,   0,   0, 255, 127, 240, 143,
      0,   0, 128, 255, 252, 255, 255, 255, 255, 249, 255, 255, 252,   7,   0,   0,
      0,   0, 224, 255, 191, 255, 255, 255, 255,   0,   0,   0,  47,   0,   0,   0,
      0,   0, 252, 232, 255, 255,   7,   0, 255, 255, 247, 255, 255, 255,   0, 124,
    255,  63,   0,   0, 255, 255, 127, 252,   5,   0,   0,  56, 255, 255,  60,   0,
    126, 126, 126,   0, 127, 127, 255, 255, 255,   3, 255, 255,  15,   0, 255, 255,
    127, 248, 255, 255, 255,  63, 255, 255, 255, 255, 255,   3, 127,   0, 248, 224,
    255, 253, 127,  95, 219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255,
      0,   0, 255,  15,   0,   0, 223, 255, 192, 255, 255, 255, 252, 252, 252,  28,
    255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 255, 255,  31,   0,
    255, 255,   1,   0,  15, 255,  62,   0, 255, 255,  15, 255, 255,   0, 255, 255,
     63, 253, 255, 255, 255, 255, 191, 145, 255, 255,  55,   0, 255, 255, 255, 192,
    111, 240, 239, 254,  31,   0,   0,   0, 255,  27,   3,   0, 128,   0, 255, 255,
     63,   0,   0,   0, 240,   0, 255, 255, 255, 255,  71,   0,  30, 192,   0,  20,
    255, 255, 251, 255, 255, 255, 159,  64, 127, 189, 255, 191, 159,  25, 129, 224,
    187,   7,   0, 128,   3,   0,   0,   0, 179,   0,   0,   0, 255, 255,  63, 127,
      0,   0,   0,  63,  17,   0,   0,   0, 255, 255,  63,   1,   0,   0,   0, 128,
    127, 242, 111, 255, 255, 255, 191, 153,   7,   0,   0,   0, 255, 252, 255, 255,
     26,   0,   0,   0, 255, 255, 231, 127, 255, 255, 255,  32, 255, 253, 255, 255,
    255, 255, 127, 127,   0,   0, 252, 255, 255, 254, 127,   0, 127, 251, 255, 255,
    255, 255, 127, 180, 203,   0,   0,   0, 191, 253, 255, 255, 255, 127, 123,   1,
      0,   0,   1,   0, 127,   0,   0,   0, 248, 255, 255, 224, 255, 135, 255, 255,
    255, 128, 255, 255,  11,   0,   3,   0, 255, 255, 255,   0,   0,   0,   7,   0,
    255,   7, 255,  31, 255,   1, 255,  67, 255, 255, 255, 223, 100, 222, 255, 235,
    239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255,
     63, 255, 255, 255, 253, 255, 255, 247, 247,  15,   0,   0, 127, 255, 255, 249,
    219,   7,   0,   0, 255,  31, 128,  63,   0,  64,   0,   0, 255,  15,   0,   0,
    143,   8,   0,   0, 150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94,
    255, 251, 255,  15, 238, 251, 255,  15,   3,   0, 255, 255
};

static UINT8 alphabetic_table_2[928] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   7,   8,   9,  10,   4,  11,
      4,   4,   4,   4,  12,   4,   4,   4,   4,  13,  14,   4,  15,  16,  17,  18,
     19,   4,  20,  21,   4,   4,  22,  23,  24,   4,  25,   4,   4,  26,  27,  28,
     29,  30,  31,  32,   0,  33,  34,  35,   4,  36,  37,  38,  39,  40,  41,  42,
     43,  44,  45,  46,  47,  48,  49,  50,  51,  48,  52,  53,  54,  55,  56,   0,
     57,  58,  59,  60,  57,  61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,
     72,  73,  74,   0,  75,  76,  77,   0,  78,   0,  79,  80,  81,  82,   0,   0,
      4,  83,  24,   4,  84,   4,  85,  86,   4,   4,  87,   4,  88,  89,  90,   4,
     91,   4,  73,   0,  92,   4,   4,  93,  72,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  94,   1,   4,   4,  95,  96,  97,  97,  98,   4,  99, 100,   0,
      0,   4,   4,  31,   4, 101,   4, 102, 103, 104,  24, 105,   4, 106, 107,   0,
    108,   4, 103, 109,   0, 110,  78,   0,   4, 111, 112,   0,   4, 113,   4, 114,
      4, 115, 116, 117, 118,  65,   0, 119,   4,   4,   4,   4,   4,   4,   0, 120,
     93,   4, 121, 117,   4, 122, 123, 124,   0,   0,   0, 125, 126,   0,   0,   0,
    127, 128, 129,   4,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 130,   4, 107,   4, 131, 103,   4,   4,   4,   4, 132,
      4,  85,   4, 133, 115, 134, 134,   4,   0, 135,   0,   0,   0,   0,   0,   0,
    136, 137,  72,   4, 138,  72,   4,  86, 139,  13,   4,   4, 140,   4,   0,  24,
      4,   4,   4,   4,   4,   4,   0,   0,   4,   4,   4,   4,   4,   4,   4,  82,
      4,   4,   4,   4,  30,   0,  24, 117, 141, 142,   4, 143,   4,   4,   4,  92,
    144, 145,   4,   4, 146,   4, 147, 148, 149, 150,   4,  97,   4,   4, 151, 152,
     27, 101, 153,  82,   4, 154, 135, 155,   4, 115, 156, 157,   4, 103, 158, 159,
    160, 161,  86, 162,   4,   4,   4,  32,   4,   4,   4,   4,   4, 163, 164, 108,
      4,   4,   4, 165,   4,   4, 166,   0, 167, 168, 169,   4,   4,  26, 170,   4,
      4, 117,  24,   4, 171,   4, 150, 172,   0,   0,   0, 173,   4,   4,   4,  82,
      0,   1,   1, 174,   4, 103, 175,   0, 176, 177, 178,   0,   4,   4,   4,  73,
      0,   0,   4, 179,   0,   0,   0,   0,   0,   0,   0,   0,  82,   4, 180,   0,
      4,  25, 101,  73, 117,   4, 181,   0,   4,   4,   4,   4, 117,  24, 182, 108,
      4, 183,   4,  60,   0,   0,   0,   0,   4, 115, 102, 150,   0,   0,   0,   0,
    184, 185, 102, 115, 103,   0,   0, 186, 102, 166,   0,   0,   4, 187,   0,   0,
    188, 102,   0,  82,  82,   0,  79, 189,   4, 102, 102, 153,  26,   0,   0,   0,
      4,   4,  15,   0,   4, 153,   4, 153,   4, 150,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   4, 190,   0,   0,  82, 191, 192,   0,   0,  24, 189, 115,
      4,   4, 192,   0, 145,  31,  24,  15,   4, 153, 193, 194,   4,   4, 195,   0,
    196, 197,   0,   0, 198, 118,   4,  15,  39,  48, 199,  60,   0,   0,   0,   0,
      4,   4, 200, 201,   4,   4, 202,   0,   0,   0,   0,   0,   4, 203, 204,   0,
      4, 103, 205,   0,   4, 206,   0,   0,  65,  32,   0,   0,   0,   0,   0,   0,
      4,  31,   0,   0,   0,   4,   4, 207, 208, 209, 210,   0,   0, 211,  29, 212,
      4, 213,  24,   4, 214,   0,   4,  31, 215, 216,  78, 217, 171, 218,   0,   0,
    219, 220, 221, 222, 223,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 115,
      0,   0,   0,   0,   0, 224,   0,   0,   4,   4,   4,   4, 166,   0,   0,   0,
      4,   4,   4, 140,   4,   4,   4,   4,   4,   4,  60,   0,   0,   0,   0,   0,
      4, 140,   0,   0,   0,   0,   0,   0,   4,   4, 225,   0,   0,   0,   0,   0,
      4,  31, 103,   0,   0,   0,  24, 156,   4,  92,  60, 226,  92,   0,   0,   0,
      0,   0,   4,   4,   0,   0,   0,   0,   4,   4, 227,   4, 228,   0,   0, 229,
      4,   4,   4,   4,   4,   4,   4, 230,   4,   4,   4,   4,   4,   4, 102,   0,
     15,   0,   0,   0,   0,   0,   0,   0, 103,   0, 231, 193,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4, 108,   4,   4,   4, 232, 233,   0,   0,   0,
      4,   4,  33,   4, 234, 235, 236,   4, 237, 238, 239,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4, 240, 241,  86,  33,  33, 131, 131, 215, 215, 242,   0,
    243, 244,   0,   0,   0,   0,   0,   0,   4, 245, 246,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   4, 247,   4,   4,   4,   4,   4,   4, 189,   0,
      4,   4, 248,   0,   0,   0,   0,   0, 236, 249, 250, 251, 252, 253,   0,   0,
      0,  24, 162, 162, 107,   0,   0,   0,   4,   4,   4,   4,   4,   4, 117,   0,
      4, 179,   4,   4,   4,   4,   4,   4, 117,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4, 254,   4,   4,   4,   4,   4,   4,   4,   4,   4,  78,
    117,   0,   0,   0,   0,   0,   0,   0,   4,   4,  32,   0,   0,   0,   0,   0
};

static UINT8 alphabetic_table_3[448] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  39,
      1,   1,   1,   1,  40,   1,  41,  42,  43,  44,  45,  46,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  47,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  48,  49,   1,  50,  51,  52,
     53,  54,  55,  56,  57,  58,   1,  59,  60,  61,  62,  63,  64,  65,  66,  67,
     68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  31,  79,  80,  81,  82,
      1,   1,   1,  83,  84,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
      1,  95,  96,  31,  31,  31,  31,  31,  31,  31,  31,  31,  97,  31,  31,  31,
     31,  31,  31,  31,  98,  99, 100, 101,  31,  31,  31,  31,  31,  31,  31,  31,
    102, 103, 104,  31,  31,  31,  31,  31, 105, 106,  31,  31,  31,  31, 107,  31,
     31, 108,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 109,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 110, 111,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 112,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 113,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 114,  31,  31,  31,  31,  31,
      1,   1,   1, 115,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 alphabetic_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
};

UINT32 lookup_alphabetic(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = alphabetic_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = alphabetic_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = alphabetic_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = alphabetic_table_1[(block << 2) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Alphanumeric. */

static UINT8 alphanumeric_table_1[420] = {
      0,   0, 255,   3, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    195, 255,   3,   0,  31,  80,  32,   0, 223, 188,  64, 215, 251, 255, 191, 255,
      3, 252, 127,   2, 255,   1, 255, 191, 182,   0, 255, 135,   7,   0, 255, 254,
    255, 195, 239,  31, 254, 225, 255, 159,   0, 224,  48,   4, 255, 252, 255,  31,
    223, 255, 255,   0, 240, 255, 248,   3, 255, 239, 255, 223, 225, 255, 207, 255,
    239, 159, 249, 255, 255, 253, 197, 227, 159,  89, 128, 176,   3,  16, 238, 135,
    109, 195, 135,  25,   2,  94, 192, 255,  63,   0, 238, 191, 237, 227, 191,  27,
      1,   0,   0,  30, 238, 159, 159,  25, 192, 176,   2,   0, 236, 199,  61, 214,
     24, 199, 199,  29, 129,   0, 239, 223, 253, 255, 255, 227, 223,  29,  96,   7,
    239, 227,  96,  64,   6,   0, 255, 231, 223,  93, 240, 128,   0, 252, 238, 255,
    127, 252, 251,  47, 127, 128,  95, 255,  12,   0, 127,  32, 214, 247, 175, 255,
    255,  59,  95,  32, 255, 243,   3, 255, 127, 249, 255,  63, 191,  32, 255, 247,
    255,  61, 127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  15,   0,  13,   0,
    128,  16, 255, 127, 255,  15,  31,   0, 128,   0,   0, 128, 239, 255, 239,  15,
    127,   0,   0, 222, 111,   4, 128, 255, 255, 170, 223,  95, 220,  31, 207,  15,
      2, 128, 132, 252,  47,  62,  80, 189, 224,  67,  31, 120, 255, 128, 127, 127,
    224,   0, 254,   3,  62,  31, 127, 224, 224, 255, 240, 143, 252, 255, 255, 249,
    252,   7,  47,   0, 252, 232, 247, 255,   5,   0,   0,  56,  60,   0, 126, 126,
    126,   0, 127, 248, 248, 224, 127,  95, 219, 255, 248, 255, 252, 252, 252,  28,
    255, 183,  15, 255,  62,   0,  63, 253, 191, 145,  55,   0, 255, 192, 111, 240,
    239, 254, 255,  27, 199, 255, 240,   0,  71,   0,  30, 192, 255,  23, 159,  64,
    127, 189, 129, 224, 187,   7, 255, 131, 179,   0,  63, 127,   0,  63,  17,   0,
     63,   1, 127, 242, 111, 255, 191, 153,  26,   0, 231, 127, 255,  32, 127, 251,
    127, 180, 203,   0, 191, 253, 123,   1, 255, 224,  11,   0, 255,  67, 100, 222,
    255, 235, 191, 231, 223, 223, 255, 123,  95, 252,  63, 255, 247, 207, 219,   7,
    128,  63, 143,   8, 150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94,
    255, 251, 238, 251
};

static UINT8 alphanumeric_table_2[1872] = {
      0,   0,   0,   1,   2,   3,   2,   3,   0,   0,   4,   5,   6,   7,   6,   7,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   8,   9,  10,   0,
      0,   0,   0,   0,  11,   0,   0,  12,  13,   6,  14,   6,   6,   6,   6,  15,
      6,   6,   6,   6,   6,   6,   6,   6,  16,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   2,   6,  17,   6,   6,  18,   0,   0,  19,  20,   6,  21,  22,
      0,   3,   6,   6,   6,  23,  24,   6,   6,   6,   6,   6,   6,  25,  26,  27,
      0,   6,   6,   6,  28,   6,   6,   6,   6,   6,   6,   9,   6,   6,   3,  29,
      6,  30,  31,   0,   6,  18,   3,   0,   0,   0,   6,  32,  33,  34,  35,   6,
      6,   6,   6,  36,  37,  38,  39,   2,  40,  41,  42,  43,  44,  45,  39,  46,
     47,  41,  42,  48,  49,  50,  51,  52,  53,  14,  42,  54,  55,  56,  39,  57,
     58,  41,  42,  54,  59,  60,  39,  61,  62,  63,  64,  24,  65,  66,  51,   0,
     67,  68,  42,  69,  70,  71,  39,   0,  67,  68,  42,  72,  70,  73,  39,  74,
     37,  68,   6,  75,  76,  77,  39,  78,  79,  80,   6,  81,  82,  83,  51,  84,
      2,   6,   6,   3,  85,   1,   0,   0,  86,   6,  87,  88,  89,  90,   0,   0,
     56,   0,   1,   0,  23,   6,  31,   2,  91,  23,   6,  31,   0,   0,   0,   0,
      6,   6,   6,  92,   1,   6,   6,   6,   6,  93,   6,   6,  94,   6,   6,  95,
      6,   6,   6,   6,  96,  97,   6,   6,  96,   6,   6,  98,  99,   7,   6,   6,
      6,  99,   6,   6,   6,   3,   0,   0,   6,   0,   6,   6,   6,   6,   6, 100,
      2,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,  27,   6,   2,   3,   6,   6,   6,   6, 101,  18,
     37, 102,   6, 102,   6, 102,  37, 103,   6,   6,   6,  39,  18, 104,   1,   0,
      0,   1,   6,   6,   6,   6,   6,  18,   6,   6,   3,   6,   6,   6,   6,  52,
      6, 105, 106,  18,  51,   6,  93, 107,   6,   6, 106,   6,   1,   1,   0,   0,
      6, 106,   6,   6,   6, 105,   2, 107,   1,   1, 108, 109,  56,   0,   0,   0,
      6,   6,   6, 110, 111,   1,   0,   0,   6,   6,  90,   6,   6,   6,  15,   9,
      6,   6,   6, 112,  69,   6,   6,  93,  18,   6,   6,  75,   0,   0, 113, 114,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0, 115, 107,
      6, 100,   6,   6, 100, 116,   6,  93,   6,   6,   6, 117, 118, 119,  31, 118,
      0,   0,   0,   0,   0,   0,   0, 120,   0,  31,   0,   0,   0,   0,   0,   0,
    121, 122, 123,  90, 124,   0,   6,   6,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51,   6,   6,   1,   0,
      6,   6, 105,   6,   6, 105,   6,   6,   6,   6,   6,   6,   6,   6, 125,  84,
      6,   6,  94,   6,   6,   6, 126,   0,   6, 112, 127, 127, 127, 127,   6,   6,
      0,   0, 109,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    128,   0, 129, 130,   2,   6,   6,   6,   6, 131,   2,   6,   6,   6,   6,  95,
    132,   6,   6,   2,   6,   6,   6,   6, 105,   0,   6,   6,   0,   0,   0,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  31,
      6,   6,   6,   6,   6,   6,   6,   6,  31,   0,   0,   0,   0,   6,   6,  93,
     31,   6, 106,   0,   6,   6, 105, 133,   6,   6,   6,   6,   6,   6,   6,   0,
      0, 115, 134,   6,   6,   6,   6,   6, 135,   6,   6,   6, 136,   0,   0, 132,
     15,   6,  33,   0,   6,   6,   6, 102,   6,   6,   6,   6, 137,   1,   0, 138,
      6,   6,   3,   6,   6,  22,   6,  31,   6,   6,   6, 139, 109,   1,   6, 105,
      6,   6,   6, 112,  93,   1,   6,  80,   6,   6,   6, 105, 140, 141,   6, 142,
    143, 144, 127,   6,   6,  95,   1,   6,   6,   6,   6,   6,   6,   6,   3,   1,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 102,   6, 145,   6,   6, 106,
      6,   6,   6,   6,   6,   6,  93,   6,   6,   6,   6,   6,   6,   1,   0,   0,
    112, 146,  42, 147, 148,   6,   6,   6,   6,   6,   6,   9,   0, 149,   6,   6,
      6,   6,   6,  93,   0,   6,   6,   6,   6, 134,   6,   6,  33,   0,   0, 106,
      0,   0,   0,   0,   0,   0,   0,  32,   6,   6,   6,   6,   6,   6,   6,  31,
      0,   1,   2,   3,   2,   3,  51,   6,   6,   6,   6, 105, 150, 151,   0,   0,
     36,   6,   7, 152,  93,  93,   0,   0,   6,   6,   6,   6,   6,   6,   6,   3,
      0,   0,   0,   0,   6,   6,   6, 107,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,  31,   6,   6,   6,  56,   0,   0,
      6,   6,  28,   6,   3,   6,   6,   3,   6,  93,   6,   6, 153, 154,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,  93,   1,   6,   6, 153,   6, 106,
      6,   6,  33,   6,   6,   6, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6, 112,   6,  52,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    155,   6,   6, 156,   6,  52,   6, 112,   6, 105,   0,   0,   0,   0,   6, 157,
      6,  52,   6,   1,   0,   0,   0,   0,   6,   6,   6, 158,   0,   0,   0,   0,
    159, 160,   6,  52,   0,   0,   6,  31,   6,  31,   0,   0,  23,   6, 107,   0,
      6,   6,   6,  52,   6,  52,   6,  22,   6,   9,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,  18,   0,   0,   0,   6,   6,   6,  22,   6,   6,   6,  22,
      6,   6,  33,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,   6, 161,   9,   0,   0,   0,   0,
      6,  31, 108,   6,  52,   0,   0,   0,   0,   0,   0,   6, 107,   0,   6, 112,
      6,   6,   6,   6,  52,   0,  51,   0, 134,   6,   6,  18,   0,   6,  18,   1,
      6,   6,   6, 162, 163,   6,   6, 164,   6,   6,   6,   6, 165, 166,   0,   0,
      6,  14,   6, 167,   0,   0,   0,   0, 168,  19,  18,   6,   6,   6,  18,   1,
     40,  41,  42,  54,  59, 169, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6, 170, 171,   9,   0,   6,   6,   6,   6, 172,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   6,   6,   6, 173,   0, 174,   0,   0,
      6,   6,   6, 105, 175,   1,   0,   0,   6,   6,   6, 176,   1,   0,   0,   0,
      6,  75,   3,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,  18,   0,   0,   0,   0,   0,   0,   6,   6,   6,   6,   1, 109,
    177, 178,   6, 179,  22,   1,   0,   0,   0,   0,  30,   6,   6,  30, 180,   0,
      6,   6,   6, 181,   0,   6,   6,   6,   6, 182,   0,   0,   6,   6,   6,  18,
     42,   6,   6, 127,  56,   1,   0, 134,   6, 134,  23, 112,   0,   0,   0,   0,
    183,   6,   6, 184, 185,   1, 186,   6, 105, 187,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6, 112,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  56,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   1,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6, 105,   0,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6, 105,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,  18,   6, 105,   1,   0,   0,   0,   0,   0,   0,   6,  93,   0,
      6,   6,   6,   0, 102,   1, 149, 188,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   6,   6,   6,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,  21,   6,   6,   6, 126,   6,   0,   0,   0,   0, 189,   9,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  52,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6, 105,   0,   0,   0,  22, 163,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 106,
      6,   6,   6,   6,   6,   6,   3,  31,  18, 190,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   6,  32,   6,   6,   6,  37, 191, 192, 110,   6,   6,   6,
    193, 194,   6, 195, 196,  68,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 197,   6,  68,  95,   6,  95,
      6,  32,   6,  32, 105,   6, 105,   6,  42,   6,  42,   6, 198,   6,   6,   6,
      7, 135, 199,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,  31, 200, 190,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   6, 106,   1,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 107,   0,   0,   0,
      6,   6,   6,   6, 201,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    110,   6, 202, 203, 204, 205, 206, 207, 208, 106, 209, 106,   0,   0,   0,   0,
      0,   0,   0,   6,   1,   6,   1,   6,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  93,   0,   0,
      6,   6,   6, 107,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,  93,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   9,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  56,   0,
      6,  93,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   6,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 alphanumeric_table_3[448] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  39,
      1,   1,   1,   1,  40,   1,  41,  42,  43,  44,  45,  46,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  47,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  48,  49,   1,  50,  51,  52,
     53,  54,  55,  56,  57,  58,   1,  59,  60,  61,  62,  63,  64,  65,  66,  67,
     68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  31,  79,  80,  81,  82,
      1,   1,   1,  83,  84,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
      1,  95,  96,  31,  31,  31,  31,  31,  31,  31,  31,  31,  97,  31,  31,  31,
     31,  31,  31,  31,  98,  99, 100, 101,  31,  31,  31,  31,  31,  31,  31,  31,
    102, 103, 104,  31,  31,  31,  31,  31, 105, 106,  31,  31,  31,  31, 107,  31,
     31, 108,  31,  31,  31,  31,  31,  31,  31,  31,  31, 109,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 110,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 111, 112,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 113,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 114,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 115,  31,  31,  31,  31,  31,
      1,   1,   1, 116,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 alphanumeric_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
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

static UINT8 bidi_class_table_1[1864] = {
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
     17,  12,  12,  12,  17,  17,  17,  17,  12,  12,   2,  12,  12,  12,  12,  12,
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
      0,   0,   0,   0,   0,   0,  12,  12,  12,   0,   0,   0,   0,   0,  12,  12,
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
      0,   0,   0,   7,   0,  12,   0,   0,  13,  13,  13,  12,  12,  12,   3,   0,
     12,  12,  12,   0,   0,   0,   0,  12,   0,  12,  12,  12,   0,   0,   0,   0,
     13,   0,   0,   0,  13,  13,   0,   0,   0,   0,   0,   0,   0,   0,  13,  13,
     12,   0,   0,  12,   0,   0,   0,   0,  12,   0,  12,   0,   0,  12,  12,  12,
     12,  12,  12,  12,  12,   0,   0,  12,   0,   0,   0,   0,  12,   0,  12,  12,
     12,  12,  12,   0,  12,   0,   0,   0,   0,   0,  12,  12,  12,  12,   0,   0,
     12,  12,   0,  12,  12,  12,   0,   0,  12,  12,   0,   0,   0,  12,   0,  12,
      0,   0,   0,   0,  12,  12,  12,  12,  12,  12,  12,  12,   0,   0,  12,  12,
     12,  12,  12,   0,  12,  12,  12,  12,  12,  12,   0,  12,  12,  12,  12,  12,
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
      0,   0,  12,   0,   0,   0,  12,   0,   0,   0,   0,  12,   0,   0,   0,   0,
     13,  13,  13,  13,  12,   0,   0,   0,   7,   7,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  12,   0,   0,  12,  12,  12,  12,   0,   0,  12,  12,   0,   0,
      0,  12,  12,  12,  12,  12,  12,   0,  12,   0,  12,  12,  12,   0,   0,  12,
      0,   0,   0,   0,   0,  17,  12,  17,  17,   6,  17,  17,  17,  17,  17,  17,
      1,   1,   1,   1,   1,   1,  13,  13,   1,   1,   1,   1,   1,  13,   1,   1,
      4,  13,   4,   0,  13,   4,  13,  13,  13,  13,  13,  13,  13,  13,  13,   7,
     13,  13,   6,   6,  13,  13,  13,   0,  13,   7,   7,  13,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   1,   3,   0,  13,  13,   7,   7,   7,  13,  13,
      7,   7,  13,  13,  13,   7,   7,   0,   3,  13,  13,  13,  13,  13,   3,   3,
      0,  13,   0,   0,   0,   0,   0,   0,  12,   5,   5,   5,   5,   5,   5,   5,
     17,  17,  17,  17,  17,  17,  17,  13,  17,  12,  12,  12,  17,  12,  12,  17,
     17,  17,  17,  17,  12,  12,  12,  12,  12,  12,  12,  17,  17,  17,  17,  12,
     17,  17,  17,  17,  17,  12,  12,  17,  17,  13,  13,  13,  13,  13,  13,  13,
      1,   1,   1,   1,  12,  12,  12,  12,   2,   2,   1,   1,   1,   1,   1,   1,
      2,   2,   2,   2,   2,   2,   2,  17,  17,  17,  17,  12,  12,  17,  17,  17,
      0,   0,   0,  12,  12,  12,  12,   0,  12,  12,  12,  12,   0,  12,  12,  12,
      0,  12,  12,  12,  12,   0,   0,  12,  12,  12,   0,   0,  12,   0,  12,  12,
     12,   0,  12,   0,   0,   0,   0,  12,  12,   0,  12,  12,   0,   0,   0,   0,
     12,  12,  12,   0,   0,  12,   0,  12,   0,   0,   0,  12,   0,  12,   0,   0,
     12,  12,  12,  12,  12,  12,   0,  12,   0,   0,  12,  12,  12,  12,   0,  12,
      0,   0,   0,  12,  12,   0,  12,   0,  12,   0,   0,  12,  12,  12,  12,   0,
     12,   0,  12,  12,   0,  12,  12,   0,   0,   0,  12,   0,  12,  12,   0,  12,
     13,  13,  13,  13,  13,   7,   7,   7,   7,  13,  13,  13,  13,  13,  13,  13,
      0,   0,  13,   0,  12,   0,   0,   0,   3,   3,   3,   3,   0,   0,   0,   0,
      0,   0,   0,   3,   3,   3,   3,   3,   3,   3,   3,  12,  12,  12,  12,  12,
     12,  12,  12,   0,   0,  12,  12,  12,  13,  13,  12,  12,  12,  13,   0,   0,
      0,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,   0,   5,   5,
     12,   0,   0,  12,  12,  12,  12,  12,  12,  12,   0,  12,  12,   0,  12,  12,
      0,   0,   0,   0,   0,   0,   0,   7,  12,  12,  12,  12,  12,  12,  12,  17,
     12,  12,  12,  17,  17,  17,  17,  17,  13,  13,   1,   1,   1,   1,   1,   1,
      5,   5,   5,  13,  13,  13,  13,  13,  13,   0,  13,  13,  13,  13,  13,  13,
     13,  13,  13,   0,  13,  13,  13,  13,   5,   5,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3,   3
};

static UINT8 bidi_class_table_2[1944] = {
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
     32,  32,  50,  51,  52,  53,  32,  32,  32,  32,  32,  54,  36,  36,  32,  32,
     32,  32,  32,  32,  36,  36,  36,  36,  36,  36,  37,  22,  55,  22,  22,  22,
     56,   8,   8,   8,   8,   8,   8,  57,  58,  59,  58,   8,  60,   8,   8,   8,
     61,   8,   8,   8,   8,   8,   8,  62,  63,  64,   8,   8,  60,   8,  65,  66,
     67,   8,   8,   8,   8,   8,   8,  62,  68,  69,  61,   8,   8,   8,  70,   8,
     71,  59,   8,   8,  60,   8,  72,  73,  61,   8,   8,   8,   8,   8,   8,  74,
     63,  64,  75,   8,  60,   8,   8,   8,  76,   8,   8,   8,   8,   8,   8,   8,
     77,  64,   8,   8,   8,   8,   9,  78,  79,   8,   8,   8,   8,   8,   8,  80,
     81,  82,  75,   8,  60,   8,   8,  83,   8,  84,   8,   8,  60,   8,   8,   8,
     27,   8,   8,   8,   8,   8,   8,  85,  63,  64,   8,   8,  60,   8,   8,   8,
     61,   8,   8,   8,   8,   8,   8,   8,   8,  76,  86,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  87,  88,  89,  90,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  87,  91,   8,  92,   8,   8,   8,   8,   8,   8,
      8,   8,   8,  27,   8,   8,  93,  94,   8,   8,   8,   8,   8,   8,  58,  90,
     95,  96,  22,  58,  22,  22,  22,  91,  97,   8,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,  96,  98,  99,   8,   8,   8, 100,  77,   8,  63,   8,
    101,  64,   8,  64,   8,   8,   8,   8,   8,   8,   8,  96,   8,   8,   8,   8,
      8,   8,  19, 102,   8,   8,   8,   8,   7,   8,   8,   8,   8,   8,   8,   8,
    103,   8,   8, 104,   8,   8,   8,   8,   8,   8, 105,   8,   8,   8, 105,   8,
      8,   8,  60,   8,   8,   8,  60,   8,   8,   8,   8,   8,   8,   8, 106,  92,
     97,  58, 107, 108,   8,   8,  19, 102,  19, 109,   8,   8,   8,   8,   8,   8,
     75,   8,   8,   8,   8,  61,   8,   8,   8,   8,   8,   8, 110,  77,  76, 111,
    112,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8, 113,  19,  19,  19,  19,
      8,   8,  89, 114,   8,   8,   8,   8,   8,   8,  97,  90, 115,  91,  26, 116,
      8,   8,   8,   8,   8,   8,  22,  22,  77,   8,   8,   8,   8,   8,   8,   8,
    107,   8,   8,   8,   8,   8, 117, 118,  76,   8,   8,   8,   8,  26, 107,   8,
     27,   8,   8,   8, 119, 120,   8,   8,   8,   8,   8,   8,  97, 121,  27,   8,
      8,   8,   8,   8,   8, 122, 123,   8,   8,   8, 124,  22,  98,  59,  62,  27,
     22,  22,  22,  22,  22,  22,  22, 125,   8,   8,   8,   8,   8,   8,   8, 126,
    102,  20,   8,  20,   8,  20,   8, 127, 128, 129,  19,  19,  19, 130, 131,  19,
    132,  19,  19, 133, 134, 135, 136, 137,   5, 137,   8,   8, 138, 138, 138, 138,
    138, 138,  22,  22,  22,  22,  77,   8, 139, 102, 140, 141, 142, 143,   8, 144,
    145, 146,  19,  19,   8,   8,   8,   8,   8, 147,  19,  19,  19,  19,  19,  19,
     19,  19,  19,  19,  19,  19,  19,  19,  19,  19, 148,  19,  19,  19,  19,  19,
     19,  19,  19,  19,  19,  19, 149,   8,   8,   8,   8,   8,   8,   8,   8,   9,
     19,  19, 150,  19,  19,  19,  19,  19,  19,  19,  19,  19,  83,   8,   8,   8,
     19, 151,   8,   8,  19,  19,  19,  19,  19,   5,   5, 152,   8,   8,   8,   8,
      8,   8,   8,   8,   8,  18,  19,  19,  19,  19,  19,  19,  19, 153,  19,  19,
     19,  19,  19,  19,  19,  19, 154,  19,  19,  19,  21,  19,  19,  19,  19,  19,
      8,   8,   8,   8,  20, 155,  27, 156,   8,   8,   8,   8,   8,   8,   8,  89,
      8,   8,   8,   8,  22,  22,  22,  22,  19,  19, 151,   8,   8,   8,   8,   8,
     19,  19,  19, 157,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19, 158,   8,
     19,  19, 149,   8,   8,   8,  19, 158, 159,  19,  19,  19,   7, 119, 141,  20,
      8,   8,   8, 160,   7,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8, 161,
     19,  19,  19,  19, 158,   8,   8,   8,   8,   8,   8, 127,   8,   8,   8,   8,
      8,   8,  19,  19,   8,   8,   8, 162,   8,   8,   8,   8,   8,   8, 156,  19,
      8, 163,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  16, 151,
      8,   8,   8, 113,   8,   8,   8,  16,   8,   8,  19,  19,  19,  19,  19,  19,
     83,   8,   8,   8,   8,   8,   8,   8,   8,  20,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,  89, 164, 165,   8,   8,   8,  80,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  27,   8,  19,  19,  19,  19, 102,   8,   8,   8,
      8,   7,   8,   8,   8,   8,   8,   8, 166, 167,   8,   8,  75, 168,   8, 169,
      8,   8,   8,   8,   8,   8, 163,   8,  84,   8,   8,   8,  22,  22,  27,  89,
      8,   8,   8,   8,  80,  92,   8,   8,  89,  22,  27,   8,   8,   8,   8,   8,
     56,   8,   8,   8,   8,   8, 170, 171,   8,   8,   8,   8,  64,   8,   8,   8,
      8,   8,   8,   8,   8, 172,  99,   8, 167,  62,   8,   8,   8,   8,   8,  62,
      8,   8,   8,   8,   8,   8, 173,  81,  61,   8,   8,   8,   8,  84,  97,   8,
      8,   8,   8,   8,   8, 144,   8,   8,   8,   8,   8,   8,  64,  59,   8,   8,
      8,   8,   8, 174,  32, 175,  32,  32,  32,  32,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36, 176,  36,  36,   0,   0,   0,   0,  36, 177,
     22,  22,  19, 102,  22,  22,  19,  19,  19,  19, 178, 179, 180, 181,  36,  36,
     36,  36,  36,  36,  36,  36,  36, 182, 183,   4,   5,   6,   7,   8,   8,   9,
      7,   8,   8,   9, 149,   8,   8,   8,   8,   8,   8,   8, 184,  83,   0, 185,
    186,   8,   8,   8,   8,   8,   8,   8,  19, 145,  19, 145,   7,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,  64,   8,   8,   8,   8, 187,   5,   5, 152,
      8,   8,   8,   8,   8,   8,  80,  56,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32, 188,  32,  32,  32,  32, 189, 190,  32,  32,  32,  32,  32, 191,
     32,  32,  32,  32, 192,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 193,
     36,  36,  36,  36, 194,  36,  38, 195,  32,  32,  32,  32,  38,  38,  38, 196,
     32,  32,  32,  32,  32, 197,  32,  32,  32,  32,  32,  32,  32,  32,  36,  36,
     41,  22,  40,  36,  36,  36,  32,  32,  61,   8,   8,   8,   8,   8,   8,  22,
     90,   8,  18,  19, 149,   8,   8,  89,  27,   8,   8,   8,   8,   8, 198,  67,
     56,   8,   8,   8,  89, 199,  91,   8,   8,   8,   8,   8,   8,   8, 167,   8,
     27,   8,   8,   8,   8,   8,  80,  90,   8, 200,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,  89, 201,  97,   8,   8,   8,  89,  26,  56,   8,   8,
     77,   8,   8,   8,  80,  91,  91,   8,   8,   8,   8,   8,   8,   8,   8,  22,
     86,   8,   8,  97,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  26, 202,
    203,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8, 119, 106,
     77,   8,   8,  84,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  26, 204,
     77,   8,   8,   8,  19, 145,   8,   8,   8,   8,   8,   8,   8, 205, 206,   8,
      8,   8,   8,  96, 207, 107,   8,   8,   8,   8,   8,   8,   8,  89,  22,  67,
      8,   8,   8,   8,   8,   8,   8, 208, 167,   8,   8,   8,   8,   8,   8,   8,
      8,   8, 122,  60,  77,   8,   8,   8, 172,  67,   8,   8,   8,   8,  26, 209,
     89,   8, 172, 111,   8,   8,   8,   8,   8,  73,  90,  27,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,  90,  92,   8,   8,  73,  22,  22,  73, 210,   8,
      8,   8,   8,   8,   8,   8, 172, 211, 206,   8,   8,   8,   8,   8,   8,   8,
      8,   8, 121,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  85,   8,
      8,   8,  20, 212, 213,  19, 102,   8,   8,   8,   8,   8,   8,   8,  91,   8,
      8,   8,   8,   8,   8,   8,  90,   8,   8,  89,   8,   8,   8,   8,   8,   8,
      8,  89,  56,   8,   8,   8,   8,   8,   8,   8,   8,   8, 214,   8,   8,   8,
      8,   8,   8,  75, 215,   8,   8,   8,   8,   8,   8,   8,  89,  27, 216, 217,
    218, 107,   8,   8,   8, 119,   8,   8, 219,   8,   8,   8,   8,   8,   8,   8,
     19,  19,  83,   8,   8,   8,   8,   8,   8,   8,   8, 161,   8,   8,   8,   8,
      8,   8, 220,   8,   8,   8,   8,   8,   8,  16,   8,   8,   8,   8,   8,   8,
      8, 186,   8,   8,   8,   8,   8,   8, 161, 221,   5,   5,   5,   5,   5,   5,
     22,  22,  22,  22,  22,  22,  90,  26,  22,  22,  22,  22,  22,  91,  64,   8,
     62,   8,   8,  26,  58,  22,   8,   8,  90,  22,  22, 222, 223,  56,   8,   8,
      8,   8,   8,   8,   8, 122,   8, 224,  32,  32, 225,  32,  32,  32,  32,  32,
    190, 226,  32,  32,  32,  32,  32,  32,  36,  36,  32,  32,  32,  32,  32,  32,
     36,  36,  36,  36,  36,  36, 227,  36,  19,  19,  19,  19,  19, 158,  19,  19,
     19,  19, 158,   8,  19,  83, 156,  19, 156,  19, 156,  19,  19,  19, 149,   8,
      5, 228,   8,   8,   8,  16,   8,   8,   8,   8,   8,   8,   8,  18,   8,   8,
      8,   8,   8,   8,   8, 220,   8,   8,   8,   8,   8,   8, 149,   8,   8,   8,
     19,  19,  19,   8,  19, 145,  19, 145,  19,  19,  19,   7,  19, 158,   8,   8,
     19, 158,  19,  19,  19,  19,  19,  19,  19,   8,  19, 102,  19,  19,  19,  19,
     19,   8,  19,  19,  19, 149, 102,   8,  19,  19,  19,  19,  19,  19,  19, 229,
     19, 153,  19,  19,  19,  19,  19,  19,  19,  19, 158,   8,  19, 149, 145, 151,
     83,   8,  19,  19,  19,   7,  83,   8, 151,   8,  83,   8,   8,   8,   8,   8,
     19,  19, 230,  19,  19,  19,  19,  19,  19, 151,   8,   8,   8,   8,   5, 231,
      8,   8,   8,   8,   8,   8,   8, 232,   0,   0,   0,   0,   0,   0,   0,   0,
     22,  22,  22,  22,  22,  22,   0,   0
};

static UINT8 bidi_class_table_3[1088] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   6,   7,   8,   9,  10,
      4,   4,  11,   4,   4,   4,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,
     22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  30,  32,  33,  34,  35,  36,
     37,  38,  28,  39,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,
     52,  53,  54,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  55,  56,   4,
     57,   4,   4,   4,   4,   4,   4,   4,   4,   4,  58,   4,  59,  60,  61,  62,
     63,   4,  64,   4,  65,  66,   4,  67,  68,  69,  70,  71,  72,  73,  74,  75,
     76,   4,   4,  77,   4,   4,   4,  78,   4,   4,   4,   4,   4,   4,  79,  80,
     81,  82,  83,  84,  85,  86,  87,  88,  89,  88,  88,  88,  90,  91,  92,  88,
     93,  94,  95,  96,  88,  88,  88,  88,  88,  88,  97,  88,  88,  88,  88,  88,
      4,   4,   4,   4,  88,  88,  88,  88,  88,  88,  88,  88,  88,  98,  99,  88,
      4,   4,   4, 100,   4, 101,   4, 102,  88, 103, 104, 105,  88,  88,  88, 106,
    107,   4, 108, 109,   4,   4,   4, 110, 111, 112, 113, 114,   4, 115,   4, 116,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,  88,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4, 117, 118,   4,   4,   4,   4, 119, 120, 121, 122, 123,   4, 124,   4,
    125, 126,   4, 127, 128, 129, 130, 131, 132, 133, 134, 135,   4, 136,   4, 137,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 138, 139,  16,  16,
     16,  16,  16,  16, 140,  16,  16, 141, 142, 143,  16, 144, 145, 146,   4, 147,
      4,   4,   4,   4, 148,  88, 149, 150,   4,   4,   4, 151,   4, 152,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
    153, 153, 153, 153, 154, 153, 153, 153, 155, 153, 153, 156, 157, 153, 153, 153,
    153, 153, 153, 153, 158, 153, 153, 153, 153, 159, 160, 153, 161, 162, 153, 153,
    163, 164, 165,   4, 166, 167, 168, 169, 170,   4,   4, 171,  40, 172,   4,   4,
    173, 174, 175, 176,   4,   4, 177, 178, 179, 180, 181,   4, 182,   4,   4,   4,
    183,   4,   4,   4, 184, 185,   4, 186, 187, 188, 189,   4,   4,   4,   4,   4,
    190,   4, 191,   4, 192, 193, 194,   4,   4,   4,   4, 195,   4,   4,   4, 196,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 197, 198,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 199, 200, 201,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4, 202,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4, 203, 204,   4,  88, 205,   4,   4,  88, 206,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 207, 208, 209, 210, 211,
      4,   4,   4,   4,   4,   4,   4,   4, 212, 213, 214,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
    215,   4,   4,   4, 198,   4,   4,   4,   4,   4,   4, 216,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
    153, 153, 153, 217, 153, 218, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153,
    153, 161,  16, 153,  16, 219, 153, 153,  16,  16,  16, 220, 153, 153, 153, 153,
    221,  88, 222, 223, 224, 225, 226,   4,   4, 227,   4,   4,  88,  88,  88,  88,
     88,  88,  88,  88,  88,  88,  88,  88,  88,  88,  88, 228,  88, 105,  88, 229,
    230, 231, 232,   4,  88, 233,  88, 234,  88, 235, 236, 237,  88,  88, 238, 239,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 240,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 240,
    241, 241, 241, 241,   7,   7,   7, 242, 241, 241, 241, 241, 241, 241, 241, 241,
    241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241,
    241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241,
    241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241, 241
};

static UINT8 bidi_class_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   5,   5,   7,
      8,   9,   5,   5,   5,   5,  10,   5,   5,   5,   5,  11,   5,  12,  13,  14,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
     16,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15
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

static UINT8 bidi_mirrored_table_1[272] = {
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
     60,  54,   0,  48, 255,   3,   0,   0,   0, 255, 243,  15,   0,   0,   0,   0,
      0,   0,   0, 126,  48,   0,   0,   0,   0,   3,   0,  80,   0,   0,   0,  40,
      0,   0,   0, 168,  13,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,
      0,   0,  32,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,
      0,   2,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 bidi_mirrored_table_2[104] = {
      0,   1,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   4,   3,   3,   3,   3,   3,   5,   3,   3,   3,   3,   3,
      6,   7,   8,   3,   3,   9,   3,   3,  10,  11,  12,  13,  14,   3,   3,   3,
      3,   3,   3,   3,   3,  15,   3,  16,   3,   3,   3,   3,   3,   3,  17,  18,
     19,  20,  21,  22,   3,   3,   3,  23,  24,   3,   3,   3,   3,   3,   3,   3,
     25,   3,   3,   3,   3,   3,   3,   3,   3,  26,   3,   3,  27,  28,   3,   3,
      3,   3,   3,  29,  30,  31,  32,  33
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

static UINT16 block_table_1[2472] = {
     22,  22,  22,  22,  22,  22,  22,  22, 152, 152, 152, 152, 152, 152, 152, 152,
    153, 153, 153, 153, 153, 153, 153, 153, 155, 155, 155, 155, 155, 155, 155, 155,
    134, 134, 134, 134, 134, 134, 134, 134, 255, 255, 255, 255, 255, 255, 255, 255,
     59,  59,  59,  59,  59,  59,  59,  59, 110, 110, 110, 110, 110, 110, 110, 110,
     73,  73,  73,  73,  73,  73,  73,  73,  77,  77,  77,  77,  77,  77,  77,  77,
     16,  16,  16,  16,  16,  16,  16,  16, 124, 124, 124, 124, 124, 124, 124, 124,
     10,  10,  10,  10,  10,  10,  10,  10, 272, 272, 272, 272, 272, 272, 272, 272,
     15,  15,  15,  15,  15,  15,  15,  15, 288, 288, 288, 288, 288, 288, 288, 288,
    208, 208, 208, 208, 208, 208, 208, 208, 242, 242, 242, 242, 242, 242, 242, 242,
    174, 174, 174, 174, 174, 174, 174, 174, 273, 273, 273, 273, 273, 273, 273, 273,
      0,   0,   0,   0,   0,   0,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,
     79,  79,  79,  79,  79,  79,  79,  79,  25,  25,  25,  25,  25,  25,  25,  25,
    114, 114, 114, 114, 114, 114, 114, 114, 112, 112, 112, 112, 112, 112, 112, 112,
    223, 223, 223, 223, 223, 223, 223, 223, 282, 282, 282, 282, 282, 282, 282, 282,
    287, 287, 287, 287, 287, 287, 287, 287, 141, 141, 141, 141, 141, 141, 141, 141,
    173, 173, 173, 173, 173, 173, 173, 173, 248, 248, 248, 248, 248, 248, 248, 248,
    289, 289, 289, 289, 289, 289, 289, 289, 151, 151, 151, 151, 151, 151, 151, 151,
    290, 290, 290, 290, 290, 290, 290, 290, 201, 201, 201, 201, 201, 201, 201, 201,
    103, 103, 103, 103, 103, 103, 103, 103, 117, 117, 117, 117, 117, 117, 117, 117,
     96,  96,  96,  96,  96,  96,  96,  96,  99,  99,  99,  99,  99,  99,  99,  99,
     40,  40,  40,  40,  40,  40,  40,  40, 295, 295, 295, 295, 295, 295, 295, 295,
    212, 212, 212, 212, 212, 212, 212, 212, 241, 241, 241, 241, 241, 241, 241, 241,
    274, 274, 274, 274, 274, 274, 274, 274, 122, 122, 122, 122, 122, 122, 122, 122,
     34,  34,  34,  34,  34,  34,  34,  34, 275, 275, 275, 275, 275, 275, 275, 275,
    147, 147, 147, 147, 147, 147, 147, 147, 196, 196, 196, 196, 196, 196, 196, 196,
    296, 296, 296, 296, 296, 296, 296, 296, 161, 161, 161, 161, 161, 161, 161, 161,
    277, 277, 277, 277, 277, 277, 277, 277, 207, 207, 207, 207, 207, 207, 207, 207,
    148, 148, 148, 148, 148, 148, 148, 148,  33,  33,  33,  33,  33,  33,  33,  33,
    278, 278, 278, 278, 278, 278, 278, 278,  60,  60,  60,  60,  60,  60,  60,  60,
     19,  19,  19,  19,  19,  19,  19,  19, 257, 257, 257, 257, 257, 257, 257, 257,
     24,  24,  24,  24,  24,  24,  24,  24, 159, 159, 159, 159, 159, 159, 159, 159,
    213, 213, 213, 213, 213, 213, 213, 213,  76,  76,  76,  76,  76,  76,  76,  76,
    104, 104, 104, 104, 104, 104, 104, 104, 258, 258, 258, 258, 258, 258, 258, 258,
    300, 300, 300, 300, 300, 300, 300, 300, 234, 234, 234, 234, 234, 234, 234, 234,
    235, 235, 235, 235, 235, 235, 235, 235,  62,  62,  62,  62,  62,  62,  62,  62,
    154, 154, 154, 154, 154, 154, 154, 154, 111, 111, 111, 111, 111, 111, 111, 111,
    100, 100, 100, 100, 100, 100, 100, 100, 259, 259, 259, 259, 259, 259, 259, 259,
     71,  71,  71,  71,  71,  71,  71,  71,  61,  61,  61,  61,  61,  61,  61,  61,
    160, 160, 160, 160, 160, 160, 160, 160, 209, 209, 209, 209, 209, 209, 209, 209,
     17,  17,  17,  17,  17,  17,  17,  17, 179, 179, 179, 179, 179, 179, 179, 179,
    193, 193, 193, 193, 193, 193, 193, 193,  65,  65,  65,  65,  65,  65,  65,  65,
    222, 222, 222, 222, 222, 222, 222, 222,  92,  92,  92,  92,  92,  92,  92,  92,
     30,  30,  30,  30,  30,  30,  30,  30,  27,  27,  27,  27,  27,  27,  27,  27,
    101, 101, 101, 101, 101, 101, 101, 101, 190, 190, 190, 190, 190, 190, 190, 190,
     81,  81,  81,  81,  81,  81,  81,  81, 188, 188, 188, 188, 188, 188, 188, 188,
    260, 260, 260, 260, 260, 260, 260, 260,  32,  32,  32,  32,  32,  32,  32,  32,
    261, 261, 261, 261, 261, 261, 261, 261, 189, 189, 189, 189, 189, 189, 189, 189,
    263, 263, 263, 263, 263, 263, 263, 263, 191, 191, 191, 191, 191, 191, 191, 191,
    106, 106, 106, 106, 106, 106, 106, 106, 156, 156, 156, 156, 156, 156, 156, 156,
     66,  66,  66,  66,  66,  66,  66,  66, 105, 105, 105, 105, 105, 105, 105, 105,
    291, 291, 291, 291, 291, 291, 291, 291,  97,  97,  97,  97,  97,  97,  97,  97,
     74,  74,  74,  74,  74,  74,  74,  74, 264, 264, 264, 264, 264, 264, 264, 264,
     48,  48,  48,  48,  48,  48,  48,  48, 140, 140, 140, 140, 140, 140, 140, 140,
    128, 128, 128, 128, 128, 128, 128, 128,  50,  50,  50,  50,  50,  50,  50,  50,
    127, 127, 127, 127, 127, 127, 127, 127, 142, 142, 142, 142, 142, 142, 142, 142,
     28,  28,  28,  28,  28,  28,  28,  28, 116, 116, 116, 116, 116, 116, 116, 116,
    139, 139, 139, 139, 139, 139, 139, 139,  29,  29,  29,  29,  29,  29,  29,  29,
     49,  49,  49,  49,  49,  49,  49,  49, 143, 143, 143, 143, 143, 143, 143, 143,
     94,  94,  94,  94,  94,  94,  94,  94,  44,  44,  44,  44,  44,  44,  44,  44,
     52,  52,  52,  52,  52,  52,  52,  52, 305, 305, 305, 305, 305, 305, 305, 305,
     51,  51,  51,  51,  51,  51,  51,  51, 307, 307, 307, 307, 307, 307, 307, 307,
    306, 306, 306, 306, 306, 306, 306, 306, 165, 165, 165, 165, 165, 165, 165, 165,
    297, 297, 297, 297, 297, 297, 297, 297,  75,  75,  75,  75,  75,  75,  75,  75,
     20,  20,  20,  20,  20,  20,  20,  20, 195, 195, 195, 195, 195, 195, 195, 195,
    157, 157, 157, 157, 157, 157, 157, 157, 269, 269, 269, 269, 269, 269, 269, 269,
     64,  64,  64,  64,  64,  64,  64,  64, 231, 231, 231, 231, 231, 231, 231, 231,
    243, 243, 243, 243, 243, 243, 243, 243,  80,  80,  80,  80,  80,  80,  80,  80,
    144, 144, 144, 144, 144, 144, 144, 144, 239, 239, 239, 239, 239, 239, 239, 239,
    118, 118, 118, 118, 118, 118, 118, 118, 135, 135, 135, 135, 135, 135, 135, 135,
    203, 203, 203, 203, 203, 203, 203, 203,  39,  39,  39,  39,  39,  39,  39,  39,
    202, 202, 202, 202, 202, 202, 202, 202, 279, 279, 279, 279, 279, 279, 279, 279,
    183, 183, 183, 183, 183, 183, 183, 183,  98,  98,  98,  98,  98,  98,  98,  98,
    158, 158, 158, 158, 158, 158, 158, 158,  41,  41,  41,  41,  41,  41,  41,  41,
    182, 182, 182, 182, 182, 182, 182, 182, 120, 120, 120, 120, 120, 120, 120, 120,
    119, 119, 119, 119, 119, 119, 119, 119, 126, 126, 126, 126, 126, 126, 126, 126,
    125, 125, 125, 125, 125, 125, 125, 125, 167, 167, 167, 167, 167, 167, 167, 167,
    237, 237, 237, 237, 237, 237, 237, 237,  46,  46,  46,  46,  46,  46,  46,  46,
      5,   5,   5,   5,   5,   5,   5,   5,  13,  13,  13,  13,  13,  13,  13,  13,
    298, 298, 298, 298, 298, 298, 298, 298, 301, 301, 301, 301, 301, 301, 301, 301,
     63,  63,  63,  63,  63,  63,  63,  63,  45,  45,  45,  45,  45,  45,  45,  45,
    250, 250, 250, 250, 250, 250, 250, 250,  14,  14,  14,  14,  14,  14,  14,  14,
    115, 115, 115, 115, 115, 115, 115, 115, 256, 256, 256, 256, 256, 256, 256, 256,
    164, 164, 164, 164, 164, 164, 164, 164, 163, 163, 163, 163, 163, 163, 163, 163,
      2,   2,   2,   2,   2,   2,   2,   2,   8,   8,   8,   8,   8,   8,   8,   8,
      9,   9,   9,   9,   9,   9,   9,   9, 232, 232, 232, 232, 232, 232, 232, 232,
    168, 168, 168, 168, 168, 168, 168, 168,  36,  36,  36,  36,  36,  36,  36,  36,
     67,  67,  67,  67,  67,  67,  67,  67, 215, 215, 215, 215, 215, 215, 215, 215,
    108, 108, 108, 108, 108, 108, 108, 108, 217, 217, 217, 217, 217, 217, 217, 217,
    294, 294, 294, 294, 294, 294, 294, 294, 218, 218, 218, 218, 218, 218, 218, 218,
     78,  78,  78,  78,  78,  78,  78,  78, 245, 245, 245, 245, 245, 245, 245, 245,
    226, 226, 226, 226, 226, 226, 226, 226, 225, 225, 225, 225, 225, 225, 225, 225,
     89,  89,  89,  89,  89,  89,  89,  89,  37,  37,  37,  37,  37,  37,  37,  37,
    162, 162, 162, 162, 162, 162, 162, 162,  72,  72,  72,  72,  72,  72,  72,  72,
    130, 130, 130, 130, 130, 130, 130, 130, 229, 229, 229, 229, 229, 229, 229, 229,
    204, 204, 204, 204, 204, 204, 204, 204, 123, 123, 123, 123, 123, 123, 123, 123,
    233, 233, 233, 233, 233, 233, 233, 233, 169, 169, 169, 169, 169, 169, 169, 169,
    186, 186, 186, 186, 186, 186, 186, 186, 185, 185, 185, 185, 185, 185, 185, 185,
    145, 145, 145, 145, 145, 145, 145, 145, 220, 220, 220, 220, 220, 220, 220, 220,
    216, 216, 216, 216, 216, 216, 216, 216, 175, 175, 175, 175, 175, 175, 175, 175,
     18,  18,  18,  18,  18,  18,  18,  18, 133, 133, 133, 133, 133, 133, 133, 133,
    132, 132, 132, 132, 132, 132, 132, 132, 238, 238, 238, 238, 238, 238, 238, 238,
    221, 221, 221, 221, 221, 221, 221, 221, 214, 214, 214, 214, 214, 214, 214, 214,
    121, 121, 121, 121, 121, 121, 121, 121, 240, 240, 240, 240, 240, 240, 240, 240,
    304, 304, 304, 304, 304, 304, 304, 304, 219, 219, 219, 219, 219, 219, 219, 219,
    252, 252, 252, 252, 252, 252, 252, 252,  43,  43,  43,  43,  43,  43,  43,  43,
     90,  90,  90,  90,  90,  90,  90,  90,  31,  31,  31,  31,  31,  31,  31,  31,
    136, 136, 136, 136, 136, 136, 136, 136, 253, 253, 253, 253, 253, 253, 253, 253,
     38,  38,  38,  38,  38,  38,  38,  38, 170, 170, 170, 170, 170, 170, 170, 170,
    244, 244, 244, 244, 244, 244, 244, 244, 249, 249, 249, 249, 249, 249, 249, 249,
    149, 149, 149, 149, 149, 149, 149, 149, 199, 199, 199, 199, 199, 199, 199, 199,
    150, 150, 150, 150, 150, 150, 150, 150, 109, 109, 109, 109, 109, 109, 109, 109,
    206, 206, 206, 206, 206, 206, 206, 206, 292, 292, 292, 292, 292, 292, 292, 292,
    247, 247, 247, 247, 247, 247, 247, 247, 194, 194, 194, 194, 194, 194, 194, 194,
    197, 197, 197, 197, 197, 197, 197, 197, 281, 281, 281, 281, 281, 281, 281, 281,
      3,   3,   3,   3,   3,   3,   3,   3,  83,  83,  83,  83,  83,  83,  83,  83,
    303, 303, 303, 303, 303, 303, 303, 303,  82,  82,  82,  82,  82,  82,  82,  82,
    205, 205, 205, 205, 205, 205, 205, 205, 308, 308, 308, 308, 308, 308, 308, 308,
    254, 254, 254, 254, 254, 254, 254, 254, 230, 230, 230, 230, 230, 230, 230, 230,
     26,  26,  26,  26,  26,  26,  26,  26, 176, 176, 176, 176, 176, 176, 176, 176,
    177, 177, 177, 177, 177, 177, 177, 177, 113, 113, 113, 113, 113, 113, 113, 113,
    172, 172, 172, 172, 172, 172, 172, 172, 166, 166, 166, 166, 166, 166, 166, 166,
    283, 283, 283, 283, 283, 283, 283, 283,  69,  69,  69,  69,  69,  69,  69,  69,
     70,  70,  70,  70,  70,  70,  70,  70,  86,  86,  86,  86,  86,  86,  86,  86,
     88,  88,  88,  88,  88,  88,  88,  88,  87,  87,  87,  87,  87,  87,  87,  87,
      6,   6,   6,   6,   6,   6,   6,   6,  21,  21,  21,  21,  21,  21,  21,  21,
    198, 198, 198, 198, 198, 198, 198, 198,  23,  23,  23,  23,  23,  23,  23,  23,
    228, 228, 228, 228, 228, 228, 228, 228, 181, 181, 181, 181, 181, 181, 181, 181,
    187, 187, 187, 187, 187, 187, 187, 187, 129, 129, 129, 129, 129, 129, 129, 129,
    284, 284, 284, 284, 284, 284, 284, 284, 285, 285, 285, 285, 285, 285, 285, 285,
    146, 146, 146, 146, 146, 146, 146, 146, 286, 286, 286, 286, 286, 286, 286, 286,
    138, 138, 138, 138, 138, 138, 138, 138, 137, 137, 137, 137, 137, 137, 137, 137,
    251, 251, 251, 251, 251, 251, 251, 251, 210, 210, 210, 210, 210, 210, 210, 210,
     85,  85,  85,  85,  85,  85,  85,  85, 246, 246, 246, 246, 246, 246, 246, 246,
     35,  35,  35,  35,  35,  35,  35,  35, 200, 200, 200, 200, 200, 200, 200, 200,
      7,   7,   7,   7,   7,   7,   7,   7, 180, 180, 180, 180, 180, 180, 180, 180,
    280, 280, 280, 280, 280, 280, 280, 280,  68,  68,  68,  68,  68,  68,  68,  68,
    178, 178, 178, 178, 178, 178, 178, 178, 268, 268, 268, 268, 268, 268, 268, 268,
    107, 107, 107, 107, 107, 107, 107, 107, 211, 211, 211, 211, 211, 211, 211, 211,
    302, 302, 302, 302, 302, 302, 302, 302, 184, 184, 184, 184, 184, 184, 184, 184,
      1,   1,   1,   1,   1,   1,   1,   1, 131, 131, 131, 131, 131, 131, 131, 131,
    227, 227, 227, 227, 227, 227, 227, 227,  12,  12,  12,  12,  12,  12,  12,  12,
    171, 171, 171, 171, 171, 171, 171, 171,  84,  84,  84,  84,  84,  84,  84,  84,
    236, 236, 236, 236, 236, 236, 236, 236,  93,  93,  93,  93,  93,  93,  93,  93,
     95,  95,  95,  95,  95,  95,  95,  95, 192, 192, 192, 192, 192, 192, 192, 192,
     91,  91,  91,  91,  91,  91,  91,  91, 224, 224, 224, 224, 224, 224, 224, 224,
    293, 293, 293, 293, 293, 293, 293, 293,   4,   4,   4,   4,   4,   4,   4,   4,
    102, 102, 102, 102, 102, 102, 102, 102, 262, 262, 262, 262, 262, 262, 262, 262,
    265, 265, 265, 265, 265, 265, 265, 265,  42,  42,  42,  42,  42,  42,  42,  42,
    270, 270, 270, 270, 270, 270, 270, 270, 271, 271, 271, 271, 271, 271, 271, 271,
     53,  53,  53,  53,  53,  53,  53,  53,  54,  54,  54,  54,  54,  54,  54,  54,
     55,  55,  55,  55,  55,  55,  55,  55,  56,  56,  56,  56,  56,  56,  56,  56,
     57,  57,  57,  57,  57,  57,  57,  57,  47,  47,  47,  47,  47,  47,  47,  47,
     58,  58,  58,  58,  58,  58,  58,  58, 276, 276, 276, 276, 276, 276, 276, 276,
    299, 299, 299, 299, 299, 299, 299, 299, 266, 266, 266, 266, 266, 266, 266, 266,
    267, 267, 267, 267, 267, 267, 267, 267
};

static UINT16 block_table_2[1496] = {
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
    105, 105, 105, 105,  20,  20, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108,
    109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111,
    111, 111, 112, 112, 113, 113, 113, 113, 114, 114, 114, 114, 114, 114, 115, 115,
    116, 116, 116, 116, 117, 117, 117, 117, 118, 118, 118, 118, 119, 119, 119, 119,
    120, 120, 120, 120, 121, 121, 121, 121, 121, 121, 122, 122, 122, 122, 122, 122,
    122, 122, 123, 123, 123, 123, 123, 123, 124, 124, 124, 124, 125, 125, 125, 125,
    126, 126, 126, 126, 127, 127, 127, 127, 128, 128, 128, 128, 129, 129, 129, 129,
    129, 129, 130, 130, 131, 131, 131, 131, 132, 132, 132, 132, 133, 133, 133, 133,
    134, 134, 134, 134, 134, 134, 135, 135, 135, 135, 135, 135, 136, 136, 136, 136,
    137, 137, 137, 137, 138, 138, 138, 138, 139, 139, 139, 139, 140, 140, 140, 140,
    141, 141, 141, 141, 142, 142, 142, 142, 143, 143, 143, 143, 143, 143, 144, 144,
    144, 144, 144, 144, 144, 144, 145, 145, 145, 145, 145, 145, 146, 146, 146, 146,
    147, 147, 147, 147, 147, 147, 148, 148, 148, 148, 148, 148, 149, 149, 149, 149,
    150, 150, 150, 150, 151, 151, 151, 151, 152, 152, 152, 152, 153, 153, 153, 153,
    154, 154, 154, 154, 154, 154, 155, 155, 155, 155, 155, 155, 156, 156, 157, 157,
    158, 158, 159, 159, 159, 159, 160, 160, 160, 160, 161, 161, 161, 161, 161, 161,
    162, 162, 162, 162, 162, 162, 163, 163, 164, 164, 164, 164, 165, 165, 165, 165,
    166, 166, 166, 166, 167, 167, 167, 167, 167, 167, 168, 168, 168, 168, 168, 168,
    168, 168, 169, 169, 169, 169, 169, 169, 170, 170, 170, 170, 171, 171, 171, 171,
    172, 172, 172, 172, 173, 173, 173, 173, 173, 173, 174, 174, 174, 174, 175, 175,
    175, 175, 175, 175, 176, 176, 176, 176, 177, 177, 177, 177, 178, 178, 178, 178,
    178, 178, 179, 179, 179, 179, 179, 179, 180, 180, 180, 180, 180, 180, 181, 181,
    181, 181, 181, 181, 182, 182, 182, 182, 182, 182, 183, 183, 183, 183, 183, 183,
    183, 183,  20,  20, 184, 184, 184, 184, 185, 185, 185, 185, 186, 186, 186, 186,
    187, 187, 187, 187, 188, 188, 188, 188, 188, 188,  20,  20, 189, 189, 189, 189,
    190, 190, 190, 190, 191, 191, 191, 191, 192, 192, 192, 192, 193, 193, 193, 193,
    194, 194, 194, 194, 195, 195, 195, 195, 196, 196, 196, 196, 197, 197, 197, 197,
    198, 198, 198, 198, 199, 199, 199, 199, 200, 200, 200, 200, 201, 201, 201, 201,
    201, 201,  20,  20, 202, 202, 202, 202, 202, 202,  20,  20, 203, 203, 203, 203,
    204, 204, 204, 204, 205, 205, 205, 205, 206, 206, 206, 206, 207, 207, 207, 207,
    207, 207, 208, 208, 208, 208, 208, 208, 208, 208,  20,  20,  20,  20, 209, 209,
    209, 209, 209, 209, 210, 210, 210, 210, 211, 211, 211, 211, 212, 212, 212, 212,
    212, 212, 213, 213, 213, 213, 213, 213, 214, 214, 214, 214, 214, 214, 215, 215,
    215, 215, 215, 215, 216, 216, 216, 216, 217, 217, 217, 217, 218, 218, 218, 218,
    218, 218,  20,  20, 219, 219, 219, 219, 219, 219, 220, 220, 220, 220, 220, 220,
    221, 221, 221, 221, 222, 222, 222, 222, 223, 223, 223, 223, 224, 224, 224, 224,
    225, 225, 225, 225, 226, 226, 226, 226, 227, 227, 227, 227, 227, 227,  20,  20,
    228, 228, 228, 228, 229, 229, 229, 229, 229, 229,  20,  20, 230, 230, 230, 230,
    231, 231, 231, 231, 232, 232, 232, 232, 233, 233, 233, 233, 233, 233, 234, 234,
    234, 234, 234, 234, 234, 234,  20,  20, 235, 235, 235, 235, 236, 236, 236, 236,
    236, 236, 237, 237, 237, 237, 237, 237, 238, 238, 238, 238, 239, 239, 239, 239,
    239, 239,  20,  20, 240, 240, 240, 240,  20,  20, 241, 241, 242, 242, 242, 242,
    243, 243, 243, 243, 244, 244, 244, 244, 245, 245, 245, 245, 245, 245,  20,  20,
    246, 246, 246, 246, 246, 246, 247, 247, 248, 248, 248, 248, 249, 249, 249, 249,
    250, 250, 250, 250, 250, 250,  20,  20,  20,  20, 251, 251, 251, 251, 251, 251,
    252, 252, 252, 252, 252, 252,  20,  20, 253, 253, 253, 253, 254, 254, 254, 254,
    255, 255, 255, 255, 256, 256, 256, 256, 257, 257, 257, 257, 258, 258, 258, 258,
    259, 259, 259, 259, 259, 259,  20,  20, 260, 260, 260, 260, 261, 261, 261, 261,
    261, 261, 262, 262, 262, 262, 262, 262, 262, 262, 263, 263, 263, 263, 263, 263,
    264, 264, 264, 264, 265, 265,  20,  20, 266, 266, 266, 266, 267, 267, 267, 267,
    268, 268, 268, 268, 268, 268,  20,  20, 269, 269, 269, 269, 270, 270, 270, 270,
    271, 271, 271, 271, 272, 272, 272, 272, 273, 273, 273, 273, 273, 273,  20,  20,
    274, 274, 274, 274, 274, 274,  20,  20, 275, 275, 275, 275, 275, 275,  20,  20,
    276, 276, 276, 276, 277, 277, 277, 277, 278, 278, 278, 278,  20,  20, 279, 279,
    279, 279, 279, 279, 280, 280, 280, 280, 280, 280,  20,  20, 281, 281, 281, 281,
    282, 282, 282, 282, 282, 282, 283, 283, 283, 283, 283, 283, 284, 284, 284, 284,
    285, 285, 285, 285, 286, 286, 286, 286, 287, 287, 287, 287, 288, 288, 288, 288,
    288, 288, 289, 289, 289, 289, 289, 289, 290, 290, 290, 290, 291, 291, 291, 291,
    292, 292, 292, 292, 293, 293, 293, 293, 294, 294, 294, 294, 295, 295, 295, 295,
    295, 295, 296, 296, 296, 296, 296, 296, 297, 297, 297, 297, 298, 298, 298, 298,
    299, 299, 299, 299, 300, 300, 300, 300, 301, 301, 301, 301, 301, 301, 302, 302,
    302, 302, 302, 302, 302, 302,  20,  20, 303, 303, 303, 303, 304, 304, 304, 304,
    304, 304,  20,  20, 305, 305, 305, 305, 306, 306, 306, 306, 306, 306,  20,  20,
    307, 307, 307, 307, 308, 308, 308, 308
};

static UINT16 block_table_3[2272] = {
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
    134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134,
    134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 135, 135,
    136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
    136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
    136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136, 136,
    137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137,
    137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137,
    137, 137, 137, 137, 138, 139, 140, 141, 142, 142, 142, 142, 142, 142, 142, 142,
    142, 142, 143, 143, 143, 144, 144, 144, 145, 146, 146, 146, 146, 146, 146, 146,
    147, 148, 149, 149, 150, 150, 150, 151, 152, 153, 154, 155, 156, 156, 156, 157,
    158, 158, 158, 159, 160, 160, 160, 161, 162, 163, 164, 165, 166, 166, 167, 167,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 169, 170, 170,
    171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171,
    171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 171, 172, 172, 172, 172,
    173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
    173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173,
    174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174,
    174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174, 174,
    174, 174, 174, 174, 174, 174, 174, 174, 175, 175, 175, 175, 175, 175, 175, 175,
    175, 175, 175, 175, 175, 175, 175, 175, 176, 176, 177, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
    179, 180, 181, 182, 183, 183, 183, 183, 184, 184, 184, 184, 184, 184, 184, 185,
    186, 186, 186, 186, 187, 187, 187, 187, 188, 188, 189, 189, 190, 191, 192, 193,
     26,  26,  26,  26, 194, 195, 195, 196, 197, 198, 199, 200, 201, 202, 202,  26,
    203, 203, 204, 205, 206, 207, 208, 208, 209, 210, 211, 212,  26,  26,  26,  26,
    213, 213, 213, 213, 213, 213, 213, 213, 213, 213, 213, 213,  26,  26,  26,  26,
    214, 214, 215, 216, 217, 218,  26, 219, 220, 221,  26,  26, 222, 223, 223, 223,
    224, 224, 224, 225, 226,  26, 227, 227, 228, 228, 229, 230, 231, 232,  26,  26,
    233, 233, 234,  26, 235, 235, 235, 235, 236, 236,  26,  26,  26,  26,  26,  26,
     26,  26,  26, 237, 238, 238,  26,  26, 239, 240, 241, 242,  26, 243, 244, 245,
    246, 246, 246, 246, 247, 247, 248, 249, 250, 250, 251, 252, 253, 253, 253, 254,
    255, 255, 256,  26, 257, 258, 259, 259, 260, 260, 260, 260,  26,  26,  26,  26,
    261, 261, 261, 261, 262, 262, 262,  26,  26,  26,  26,  26, 263, 263, 263, 263,
    264, 264, 264, 265, 266, 266, 267,  26, 268, 268,  26,  26,  26,  26,  26,  26,
    269, 269, 270,  26,  26, 271, 271, 271, 272, 272, 272,  26,  26, 273, 273, 273,
    274, 274, 275, 276, 276, 277, 278, 278,  26,  26,  26,  26,  26,  26,  26,  26,
    279, 279, 279, 280, 281, 281,  26,  26, 282, 282, 282, 283, 283, 284,  26,  26,
     26,  26,  26,  26,  26,  26,  26, 285,  26,  26,  26,  26,  26, 286, 287, 287,
    288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288,
    288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288, 288,
    289, 289, 289, 289, 290, 290, 290, 290, 290, 290, 291,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292,
    292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292,
    292, 293,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294,
    294, 294, 294, 294,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    295, 295, 295, 295, 295, 295, 295, 295, 295, 295, 295, 295, 295, 295, 295, 295,
    295, 295, 296, 297,  26,  26, 298, 299, 300, 300, 300, 300, 301,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26, 302, 302, 302,  26,  26,  26, 303, 303, 303, 303, 303,  26,  26, 304,
    305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305,
    305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305, 305,
    306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306,
    306, 306, 306, 306, 306, 306, 306, 306, 307, 307, 307, 307, 307, 307, 307, 307,
    307, 307, 307, 307, 307, 307, 307, 307, 308, 308, 308, 308, 309,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    310, 310, 310, 310, 310, 310, 310, 310, 311, 312, 313, 314, 315, 315, 315, 315,
    315, 315, 315, 315, 315, 315, 315, 315,  26,  26,  26,  26,  26,  26,  26,  26,
    316, 316, 316, 316, 316, 317,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    318, 318, 318, 318, 318, 318, 318, 318, 319, 319, 319, 319, 319, 319, 319, 319,
    320, 320, 321,  26,  26,  26,  26, 322, 323, 323, 323, 324,  26,  26,  26,  26,
    325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325,
    325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325, 325,
    326, 326, 326, 326, 326, 326, 326, 326, 326, 326, 326, 326, 326, 326, 326, 326,
    326, 326, 326, 326, 326, 327,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    328, 329,  26,  26,  26,  26,  26,  26, 330, 330, 331,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26, 332, 332,  26,  26,  26,  26,  26,  26,  26,  26,
    333, 333, 333, 333, 333, 333, 333,  26, 334, 334, 334,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26, 335, 336, 336,  26,  26, 337, 337, 338,  26,  26,  26,  26,  26,
    339, 339, 339, 339, 339, 339, 339, 339,  26,  26,  26,  26,  26,  26,  26,  26,
    340, 341, 342, 342, 342, 343, 343, 343, 344, 344, 344, 344, 344, 344, 344, 344,
    345, 345, 345, 345, 345, 345, 345, 345, 346, 346, 346, 346, 346, 346, 346, 346,
    346, 346, 346, 346, 346, 346, 346, 346, 346, 346, 346, 346, 346, 346, 346, 346,
    347, 347, 348, 349, 350, 350, 350, 350, 351, 351, 351, 351, 352, 352, 352, 352,
    353, 353, 353, 353, 353, 353, 353, 353, 354, 354, 354, 354, 354, 354, 354, 354,
    355, 355, 355, 356, 357, 357, 357, 357, 358, 358, 358, 358, 358, 358, 358, 358,
    359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359,
    359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359,
    359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359, 359,
    359, 359, 359, 359, 359, 359, 359,  26, 360, 360, 360, 360, 360, 360, 360, 360,
    360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
    360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
    360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
    360, 360, 360, 360, 360, 360, 360, 360, 360, 360, 361, 361, 361, 361, 361, 361,
    361, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362,
    362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362,
    362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362,
    362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362,
    362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362, 362,
    362, 362, 362, 362, 362, 363, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364,
    364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364,
    364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364,
    364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364,
    364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 364, 365,
    366, 366, 366, 366, 366, 366, 366, 366, 366, 366, 366, 366, 366, 366, 366, 366,
    366,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 368,  26,  26,  26,  26,  26,
    369, 369, 369, 369,  26,  26,  26,  26, 370, 370, 370, 370, 370, 370, 370, 371,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372,
    372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372, 372,
    373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373,
    373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373, 373
};

static UINT8 block_table_4[1088] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  13,  13,
     13,  13,  13,  14,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  16,  17,  18,  19,  19,  19,  19,  19,
     19,  19,  19,  19,  19,  20,  21,  22,  23,  23,  23,  23,  23,  23,  24,  25,
     26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36,  36,  37,  38,  36,  36,
     36,  39,  36,  36,  36,  36,  36,  36,  36,  36,  40,  41,  42,  42,  42,  42,
     42,  42,  43,  44,  36,  36,  36,  36,  36,  36,  36,  36,  45,  36,  36,  46,
     36,  36,  36,  36,  47,  48,  49,  36,  50,  36,  51,  52,  53,  54,  55,  36,
     56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,
     56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,
     56,  56,  56,  56,  56,  56,  56,  56,  56,  57,  58,  58,  58,  59,  60,  61,
     61,  61,  61,  62,  63,  63,  63,  63,  63,  63,  64,  36,  36,  36,  65,  36,
     66,  66,  66,  66,  67,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     68,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,
     69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,
     69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,
     69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70
};

UINT32 lookup_block(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 10;
    block = block_table_4[block];
    offset = (codepoint >> 5) & 0x1F;
    block = block_table_3[(block << 5) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = block_table_2[(block << 2) + offset];
    offset = codepoint & 0x7;
    value = block_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Canonical_Combining_Class. */

static UINT8 canonical_combining_class_table_1[1184] = {
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
      0,   8,   8,   8,   0,   0,   0,   0,   0,   0,   0,   8,   1,   1,   1,   1,
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
      0,   0,   0,   0,   0,   1,   1,   1,   0,   0,   0,   0,  57,   0,   0,   0,
      0,   0,   0,   0,   0,   1,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,
      0,  10,   1,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      8,   0,   0,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   0,   0,   8,   1,   1,   1,   1,   1,   8,   8,   8,
      8,   8,   8,   1,   1,   8,   0,   8,   0,   0,   0,   1,   8,   1,   1,   1,
      1,   1,   1,   1,   0,   0,   0,   0,   0,   0,  57,  57,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  54,   0,   1,   1,   1,   0,  55,   8,   8,   8,
      8,   8,   1,   1,   8,   8,   8,   8,   1,   0,  55,  55,  55,  55,  55,  55,
     55,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,
      1,   1,   0,   0,   0,   0,   0,   0,   1,   1,   8,   1,   1,   1,   1,   1,
      1,   1,   8,   1,   1,  48,   4,   8,   6,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   3,   2,   2,   8,   0,   1,  49,   8,   1,   8,
      1,   1,  55,  55,   1,   1,   1,   1,  55,  55,  55,   1,   1,   0,   0,   0,
      0,   1,   0,   0,   0,  55,  55,   1,   8,   1,  55,  55,   8,   8,   8,   8,
      1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,
      0,   0,   9,   2,   3,  10,  53,  53,   0,  52,  52,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,
      0,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0,   8,   8,   8,   0,   0,
      0,   0,   0,  57,   0,   0,   0,   0,   0,   0,   0,  54,   0,   0,   0,   0,
      1,   0,   1,   1,   8,   0,   0,   1,   1,   0,   0,   0,   0,   0,   1,   1,
      0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35,   0,
      1,   1,   1,   1,   1,   1,   1,   8,   8,   8,   8,   8,   8,   8,   1,   1,
      1,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,   0,   1,
      1,  55,   8,   0,   0,   0,   0,  57,   0,   0,   0,   0,   0,   1,   8,   0,
      0,   0,   0,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,   8,
      1,   1,   1,   8,   1,   8,   8,   8,   0,  57,  54,   0,   0,   0,   0,   0,
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

static UINT8 canonical_combining_class_table_2[864] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   2,   3,   4,   5,   6,   7,
      8,   9,  10,  11,  12,   1,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  14,  15,  16,  17,  18,  19,  20,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   1,  21,   0,   0,   0,   0,   0,  22,  23,  24,   0,   0,  25,   0,
      0,   0,  26,  27,  28,  29,   0,   0,   0,   0,  30,   0,   0,   0,  31,  32,
     33,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  35,  36,
      0,   0,  26,  37,  38,  39,   0,   0,   0,   0,   0,  40,   0,   0,   0,   0,
      0,   0,  41,   1,  42,  43,  44,  45,   0,   0,   0,   0,   0,   0,   0,  46,
      0,  47,  48,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,   0,  49,
      0,  47,   0,   0,   0,   0,   0,   0,   0,  47,  50,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  51,   0,  52,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  53,   0,  54,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  55,   0,  56,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  57,   0,   0,  58,  59,   0,   0,   0,   0,   0,   0,  60,  61,
     62,   0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  64,  65,   0,  36,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  66,   0,   0,   0,   0,   0,   0,  67,   0,   0,   0,  67,   0,
      0,   0,  52,  68,   0,   0,   0,   0,   0,   0,   0,   0,   0,  69,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  70,   0,   0,  71,  72,   0,   0,   0,   0,
      0,   0,   0,   0,  73,   0,  66,  74,   0,   0,   0,   0,   0,   0,  75,  76,
     72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46,   0,
     67,   0,   0,   0,   0,  77,  78,   0,   0,   0,   0,   0,   0,  79,   0,   0,
      0,   0,   0,   0,  80,   0,  79,   0,   0,   0,   0,   0,   0,   0,  64,   0,
      0,   0,  81,  82,  83,  84,  85,  86,  87,  88,  89,   1,   1,   1,  90,  91,
      0,   0,  92,  93,  94,  95,  96,   0,   0,   0,   0,   0,   0,  71,  86,   0,
      0,   0,   0,   0,   0,   0,   0,  97,   0,   0,   0,   0,   1,   1,   1,   1,
      0,   0,   0,   0,   0,  98,   0,   0,   0,   0,   0,  99,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  71, 100, 101,   0,   0,   0,  26,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  86,   0, 102,   0,   0,   0,   0,  67,   0,   0,
     67,   0,   0,   0,   1,   1,  86,   0,   0,   0,   0,   0,   0, 103,   0,   0,
      0,   0, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 105,   0,
     73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 106, 107,
    108,   0,   0,   0,   0,   0, 102,   0,   0,   0,   0,   0,   0,  47,   0,   0,
      0,   0,   0, 109,   0,   0,   0,   0,   0,   0,   0,   0, 110, 111,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  36,   0,   0,   0,   0,  72,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  26, 112,   0, 113,   0,   0,   0,   0,   0, 114,
      0,   0,   0,   0, 115,   0,   0,   0,   0,   0,   0,   0, 100,   0,   0,   0,
      0,   0,   0,   0,   0, 116,   0,   0, 117, 118,  72,   0,   0,   0,   0,   0,
    102,   0,   0,   0,   0,   0,   0,  97,   0,   0,   0,   0,   0,   0,   0, 119,
    112,   0,   0,   0,   0,   0,  51,   0,  73, 120,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 121,   0,   0,   0,   0,   0,   0, 122,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 123,   0,  47,   0,   0,  26, 124, 124,   0,
    125,   0,   0,  49,   0,   0,   0,   0, 126,   0,   0,   0,   0,   0,   0,   0,
    127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,
      0,   0,   0,   0,   0, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0, 129,
    105,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  73,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  67,   0,  97,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 130,   0,   0,   0,   0, 131,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  97,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 132,   0,
      0,   0,   0,   0,   0,   0, 133,   0,   0,   0,   0,   0,   0,   0, 134,   0,
      0,   0,   0, 135,   0,   0,   0,   0,   0,   0,   0,   0, 136, 137, 138, 139,
    140, 141,   0,   0,   0, 142,   0,   0, 143,   0,   0,   0,   0,   0,   0,   0,
    133,   1,   1, 144, 145, 112,   0,   0,   0,   0,   0,   0,   0, 100,   0,   0,
      0,   0, 146,   0,   0,   0,   0,   0, 100, 147,   0,   0,   0,   0,   0,   0
};

static UINT8 canonical_combining_class_table_3[832] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   0,   0,
      0,   0,   3,   0,   0,   0,   4,   5,   6,   7,   0,   8,   9,  10,   0,  11,
     12,  13,   0,  14,  15,  16,  15,  17,  15,  18,  15,  18,  15,  18,   0,  18,
      0,  19,  15,  18,  20,  18,   0,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,   0,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,   0,   0,  34,
      0,   0,  35,   0,  36,   0,   0,   0,  37,  38,  39,  40,  41,  42,  43,  44,
     45,   0,   0,  46,   0,   0,   0,  47,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  48,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  49,   0,  50,   0,  51,   0,   0,   0,   0,   0,   0,   0,   0,
     52,   0,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  54,  55,  56,   0,   0,   0,   0,
     57,   0,   0,  58,  59,  60,  61,  62,   0,   0,  63,  64,   0,   0,   0,  65,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  67,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  68,   0,   0,   0,  69,   0,  70,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  71,   0,   0,  72,   0,   0,   0,   0,
      0,   0,   0,   0,  73,   0,   0,   0,   0,   0,  74,   0,   0,  75,   0,   0,
      0,  76,  77,   0,  78,  61,   0,  79,  80,   0,   0,  81,  82,  83,   0,   0,
      0,  84,   0,  85,   0,   0,  50,  86,  50,   0,  87,   0,  88,   0,   0,   0,
     77,   0,   0,   0,  89,  90,   0,  91,  92,  93,  94,   0,   0,   0,   0,   0,
     50,   0,   0,   0,   0,  95,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  97,  98,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  99,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 100,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 101, 102,   0,   0, 103,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    104,   0,   0,   0,  98,   0,   0,   0,   0,   0,   0, 105,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 106,   0, 107,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
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

static UINT8 cased_table_1[260] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    255, 255, 255, 255, 255, 255, 255, 247, 240, 255, 255, 255, 255, 255, 239, 255,
    255, 255, 255,   1,   3,   0,   0,   0,  31,   0,   0,   0,  32,   0,   0,   0,
      0,   0, 207, 188,  64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,
      3, 252, 255, 255, 255, 255, 254, 255, 255, 255, 127,   0, 255,   1,   0,   0,
    191,  32, 255, 255, 255, 255, 255, 231, 255, 255,  63,  63, 255,   1, 255, 255,
     63,  63, 255, 170, 255, 255, 255,  63, 255, 255, 223,  95, 220,  31, 207,  15,
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  62,
     80, 189,  31, 242, 224,  67,   0,   0,  24,   0,   0,   0,   0,   0, 192, 255,
    255,   3,   0,   0, 255, 127, 255, 255, 255, 255, 255, 127,  31, 120,  12,   0,
    191,  32,   0,   0, 255,  63,   0,   0, 252, 255, 255, 255, 255, 120, 255, 255,
    252,   7,   0,   0,   0,   0,  96,   7,   0,   0, 255, 255, 127,   0, 248,   0,
    255, 255,   0,   0, 255, 255,  15, 255, 255, 255, 255,  15, 255, 255,   7,   0,
    255, 255, 223, 255, 255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255,
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255,
    253, 255, 255, 247, 255, 253, 255, 255, 247,  15,   0,   0,  15,   0,   0,   0,
    255,   3, 255, 255
};

static UINT8 cased_table_2[368] = {
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
      4,  37,  38,   4,   4,   4,   4,  39,   4,  40,   0,   0,   0,   0,   0,   0,
      0,   0,   4,  41,  25,   0,   0,   0,   0,  42,   4,   4,  43,   4,  44,  45,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  46,   5,  23,   4,   4,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   0,
      4,   4,  48,   0,   0,  46,  49,  50,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   4,  51,   4,  51,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      4,   4,  52,   4,  53,  54,  55,   4,  56,  57,  58,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,  59,  60,   5,  52,  52,  37,  37,  61,  61,  62,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   4,   4,  63,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  46,  64,  64,  36,   0,   0,   0
};

static UINT8 cased_table_3[144] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,  12,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  13,   3,  14,
      3,   3,  15,   3,   3,   3,  16,   3,   3,   3,   3,   3,  17,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  18,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  19,  20,   3,   3,   3,   3,
      3,   3,   3,   3,  21,   3,   3,   3,  22,   3,   3,   3,   3,   3,   3,   3
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

static UINT8 case_ignorable_table_1[776] = {
      0,   0,   0,   0, 128,  64,   0,   4,   0,   0,   0,  64,   1,   0,   0,   0,
      0, 161, 144,   1,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,  48,   4,
    176,   0,   0,   0, 248,   3,   0,   0,   0,   0,   0, 130,   0,   0, 254, 255,
    255, 255, 255, 191, 182,   0,   0,   0,   0,   0,  16,   0,  63,   0, 255,  23,
      1, 248, 255, 255,   0,   0,   1,   0,   0,   0, 192, 191, 255,  61,   0,   0,
      0, 128,   2,   0, 255,   7,   0,   0, 192, 255,   1,   0,   0, 248,  63,  36,
      0,   0, 192, 255, 255,  63,   0,   0,   0,   0,   0,  14,   0,   0, 248, 255,
      7,   0,   0,   0,   0,   0,   0,  20, 254,  33, 254,   0,  12,   0,   2,   0,
      2,   0,   0,   0,   0,   0,   0,  16,  30,  32,   0,   0,  12,   0,   0,  64,
      6,   0,   0,   0, 134,  57,   2,   0,   0,   0,  35,   0, 190,  33,   0,   0,
     12,   0,   0, 252,   0,   0,   0, 144,  30,  32,  96,   0,  12,   0,   0,   0,
      4,   0,   0,   0,   1,  32,   0,   0,  17,   0,   0,   0,   0,   0,   0, 192,
    193,  61,  96,   0,  64,  48,   0,   0,   3,   0,   0,   0,   0,   0,   0,  24,
      0,   4,  92,   0,   0,   0, 242,   7, 192, 127,   0,   0,   0,   0, 242,  31,
     64,  63,   0,   0,   0,   0,   0,   3,   0,   0, 160,   2,   0,   0, 254, 127,
    223, 224, 255, 254, 255, 255, 255,  31,  64,   0,   0,   0,   0, 224, 253, 102,
      0,   0,   0, 195,   1,   0,  30,   0, 100,  32,   0,  32,   0,   0,   0, 224,
      0,   0,  28,   0,   0,   0,  12,   0,   0,   0, 176,  63,  64, 254, 143,  32,
      0, 120,   0,   0,   8,   0,   0,   0,  96,   0,   0,   0,   0,   2,   0,   0,
    135,   1,   4,  14,   0,   0, 128,   9,   0,   0,  64, 127, 229,  31, 248, 159,
    128,   0, 255, 255,  15,   0,   0,   0,   0,   0, 208,  23,   0, 248,  15,   0,
     60,  59,   0,   0,  64, 163,   3,   0,   0, 240, 207,   0,   0,   0,   0,  63,
      0,   0, 247, 255, 253,  33,  16,   3,   0, 240, 255, 255, 255,   7,   0,   1,
      0,   0,   0, 248, 255, 255, 255, 251,   0,   0,   0, 160,   3, 224,   0, 224,
      0, 224,   0,  96,   0, 248,   0,   3, 144, 124,   0,   0, 223, 255,   2, 128,
      0,   0, 255,  31, 255, 255,   1,   0,   0,   0,   0,  48,   0, 128,   3,   0,
      0, 128,   0, 128,   0, 128,   0,   0,  32,   0,   0,   0,   0,  60,  62,   8,
      0,   0,   0, 126,   0,   0,   0, 112,   0,   0,  32,   0,   0,  16,   0,   0,
      0, 128, 247, 191,   0,   0,   0, 240,   0,   0,   3,   0,   0,   7,   0,   0,
     68,   8,   0,   0,  96,  16,   0,   0,  48,   0,   0,   0, 255, 255,   3, 128,
    192,  63,   0,   0, 128, 255,   3,   0,   0,   0, 200,  51,   0, 126, 102,   0,
      8,  16,   0,   0,   0,   0,   1,  16,   0,   0, 157, 193,   2,   0,   0,  32,
      0,  48,  88,   0,   0,  14,   0,   0,  32,  33,   0,   0,   0,   0, 252, 255,
    255, 255,   8,   0, 255, 255,   0,   0,   0,   0,  36,   0,   0,   0,   0, 128,
      8,   0,   0,  14,   0,   0,   0,  32,   0,   0, 192,   7, 110, 240,   0,   0,
      0,   0,   0, 135, 240,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0, 255,
    127,   0,   0,   0,   0,   0, 120,  38,   0,  32,   0,   0, 128, 239,  31,   0,
      0,   0,   8,   0,   0,   0, 192, 127,   0, 158,   0,   0,   0, 128, 211,  64,
    248,   7,   0,   0, 192,  31,  31,   0,  92,   0,   0,  64,   0,   0, 248, 133,
     13,   0,   0,   0,   0,   0,  60, 176,   1,   0,   0,  48,   0,   0, 248, 167,
      0,  40, 191,   0, 188,  15,   0,   0,   0, 128, 255,   6,   0,   0,   0,  88,
      0,   0, 240,  12, 254,   7,   0,   0,   0,   0, 248, 121, 128,   0, 126,  14,
      0, 252, 127,   3,   0,   0, 127, 191, 255, 252, 109,   0,   0,   0, 126, 180,
    191,   0,   0,   0,   0,   0, 163,   0,   0,   0,  24,   0,   0,   0, 255,   1,
      0,   0,  31,   0,   0,   0, 127,   0,   0, 128, 255, 255,  27,   0,   0,   0,
      0,   0,   0,  96, 128,   3, 248, 255, 231,  15,   0,   0,   0,  60,   0,   0,
     28,   0,   0,   0, 255, 255, 127, 248, 255,  31,  32,   0,  16,   0,   0, 248,
    254, 255,   0,   0, 127, 255, 255, 249, 219,   7,   0,   0,   0,   0, 255,  63,
      0, 240,   0,   0, 240,  15,   0,   0
};

static UINT8 case_ignorable_table_2[632] = {
      0,   1,   2,   3,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   5,   6,   6,   6,   6,   6,   7,   8,   0,   0,   0,
      0,   0,   0,   0,   9,   0,   0,   0,   0,   0,  10,   0,  11,  12,  13,  14,
     15,   0,  16,  17,   0,   0,  18,  19,  20,   5,  21,   0,   0,  22,   0,  23,
     24,  25,  26,   0,   0,   0,  27,   6,  28,  29,  30,  31,  32,  33,  34,  35,
     36,  33,  37,  38,  36,  33,  39,  40,  32,  41,  42,  43,  44,   0,  45,   0,
     46,  47,  48,  43,  32,  41,  49,  43,  50,  51,  34,  43,  32,   0,  52,   0,
      0,  53,  54,   0,   0,  55,  56,   0,  57,  58,   0,  59,  60,  61,  62,   0,
      0,  63,  64,  65,  66,   0,   0,  33,   0,   0,  67,   0,   0,   0,   0,   0,
     68,  68,  69,  69,   0,  70,  71,   0,  72,   0,  73,   0,  74,  75,   0,   0,
      0,  76,   0,   0,   0,   0,   0,   0,  77,   0,  78,  79,   0,  80,   3,   0,
     81,  82,  44,  83,  50,  84,   0,  85,   0,  86,   0,  87,   0,   0,  88,  89,
      0,  90,   6,  91,  92,   6,   6,  93,   0,   0,   0,   0,   0,  94,  95,  96,
     97,  98,   0,  99, 100,   0,   5, 101,   0,   0,   0, 102,   0,   0,   0, 103,
      0,   0,   0, 104,   0,   0,   0,   6,   0, 105,   0,   0,   0,   0,   0,   0,
    106, 107,   0,   0, 108,   0,   0, 109, 110,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  87, 111,   0,   0, 112, 113,   0,   0, 114,
      6,  50,   0,  17, 115,   0,   0,  57, 116, 117,   0,   0,   0,   0, 118, 119,
      0, 120, 121,   0,  28, 122, 105,  74,   0, 123, 124, 125,   0, 126, 127, 128,
      0,   0,  92, 129,   0,   0,   0, 130,   2,   0,   0,   0,   0, 131,  50,   0,
    132, 133, 134,   0,   0,   0,   0, 135,   1,   2,   3,  17,  47,   0,   0, 136,
      0,   0,   0,   0,   0,   0,   0, 137,   0,   0,   0,   0,   0,   0,   0,   3,
      0,   0,   0, 138,   0,   0,   0,   0, 139, 140,   0,   0,   0,   0,   0,  74,
      0, 141,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 142,   0,   0,
      0,   0,  22,   0,   0,   0,   0,   0,  32, 143, 144, 135,  50, 145, 146,   0,
     28, 147,   0, 148,  50, 149, 150,   0,   0, 151,   0,   0,   0,   0, 135, 152,
     50,  51,   3, 153,   0,   0,   0,   0,   0, 143, 154,   0,   0, 155, 156,   0,
      0,   0,   0,   0,   0, 157, 158,   0,   0, 159,   3,   0,   0, 160,   0,   0,
     67, 161,   0,   0,   0,   0,   0,   0,   0, 162,   0,   0,   0,   0,   0,   0,
      0, 163,  73,   0,   0,   0, 164,   3, 165, 166, 167,   0, 168,   0,   0,   0,
      0, 169,   0,   0, 131, 170,   0,   0,   0, 171, 172,   0, 173,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 174,   0, 175,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 176,   0, 177,  81,   0,   0,   0,   0,   0,
      0,   0, 105,   0, 178,   0,   0, 179,   0,   0,   0,   0, 180,  81,   0,   0,
      0,   0,   0, 181, 182, 183,   0,   0,   0,   0, 184,   0,   0,   0,   0,   0,
      6, 185,   6, 186, 187, 188,   0,   0, 189, 190,   0,   0,   0,   0,   0,   0,
      0, 191,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 192,
      0,   0,   0,   0,   0,   0, 177,   0,   0,   0, 193,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  92,  32,   6,   6,   6,   0,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   6, 133
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
      1,  42,  43,  44,   1,   1,   1,   1,   1,   1,  45,   1,   1,  46,  47,  48,
     49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,   1,  60,  61,  62,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  63,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  64,  65,   1,   1,   1,  66,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  67,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  68,  69,   1,   1,   1,   1,   1,   1,   1,  70,   1,   1,   1,   1,   1,
     71,  72,  73,   1,   1,   1,   1,   1,  74,  75,   1,   1,   1,   1,   1,   1,
      1,   1,   1,  76,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     77,  78,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
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

static UINT8 changes_when_casefolded_table_1[232] = {
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
      8,   0,   0,   0,   0,   0, 192, 255, 255, 127,   0,   0, 157, 234,  37, 192,
      5,  40,   4,   0,  85,  21,   0,   0,  85,  85,  85,   5,  84,  85,  84,  85,
     85,  85,   0, 106,  85,  40,  69,  85,  85, 125,  95,  85, 244,   2,   0,   0,
      0,   0, 255, 255, 127,   0, 248,   0, 255,   0,   0,   0, 255, 255,  15,   0,
    255, 255,   7,   0,   3,   0,   0,   0
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
     20,  42,   0,  43,   4,   4,   4,  44,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   4,  45,  46,   0,   0,   0,   0,  47,   4,  48,  49,  50,  51,   2,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  52,  20,  20,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  53,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
     20,  54,   0,   0,   0,  52,  55,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  20,  56,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  20,  57,   0,   0,   0,   0,   0,   0
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

static UINT8 changes_when_casemapped_table_1[236] = {
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
    255, 127, 255, 255, 255, 255, 255, 127, 255, 255, 109, 192,  15, 120,  12,   0,
    191,  32,   0,   0, 255,  63,   0,   0, 255, 255, 255,  15, 252, 255, 252, 255,
    255, 255,   0, 254, 255,  56, 223, 255, 252,   7,   0,   0,   0,   0,  96,   0,
      0,   0,   8,   0,   0,   0, 255, 255, 127,   0, 248,   0, 255, 255,   0,   0,
    255, 255,  15, 255, 255, 255,   7,   0,  15,   0,   0,   0
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
      4,  40,  41,  42,   4,   4,   4,  43,   4,  44,   0,   0,   0,   0,   0,   0,
      0,   0,   4,  45,  46,   0,   0,   0,   0,  47,   4,  48,  49,  40,  50,  51,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  52,  53,   4,   4,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  54,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   0,
      4,   4,  55,   0,   0,  53,  56,  46,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   4,  57,   4,  57,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   4,   4,  58,   0,   0,   0,   0,   0
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

static UINT8 changes_when_lowercased_table_1[216] = {
      0,   0,   0,   0, 254, 255, 255,   7, 255, 255, 127, 127,  85,  85,  85,  85,
     85,  85,  85, 170, 170,  84,  85,  85,  85,  85,  85,  43, 214, 206, 219, 177,
    213, 210, 174,  17, 176, 173, 170,  74,  85,  85, 214,  85,  85,  85,   5, 108,
    122,  85,   0,   0,   0,   0,  69, 128,  64, 215, 254, 255, 251,  15,   0,   0,
      0, 128,   0,  85,  85,  85, 144, 230, 255, 255, 255, 255, 255, 255,   0,   0,
      1,  84,  85,  85, 171,  42,  85,  85,  85,  85, 254, 255, 255, 255, 127,   0,
    191,  32,   0,   0, 255, 255,  63,   0,   0,   0, 255, 255, 255, 255, 255, 231,
     85,  85,  21,  64,   0, 255,   0,  63,   0, 255,   0, 255,   0,  63,   0, 170,
      0, 255,   0,   0,   0, 255,   0,  31,   0,  31,   0,  15,   0,  31,   0,  31,
     64,  12,   4,   0,   8,   0,   0,   0,   0,   0, 192, 255, 255, 127,   0,   0,
    157, 234,  37, 192,   5,  40,   4,   0,  85,  21,   0,   0,  85,  85,  85,   5,
     84,  85,  84,  85,  85,  85,   0, 106,  85,  40,  69,  85,  85, 125,  95,  85,
    244,   2,   0,   0,   0,   0,  32,   0, 255,   0,   0,   0, 255, 255,  15,   0,
    255, 255,   7,   0,   3,   0,   0,   0
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
     18,  39,   0,  40,   3,   3,   3,  41,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   3,  42,  43,   0,   0,   0,   0,  44,   3,  45,  46,  47,  48,  49,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
     18,  50,   0,   0,   0,  26,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  18,  52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  18,  53,   0,   0,   0,   0,   0,   0
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

static UINT8 changes_when_titlecased_table_1[260] = {
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
    255, 255, 255, 127,  98,  21,  72,   0,  10,  80,   8,   0, 191,  32,   0,   0,
    170,  42,   0,   0, 170, 170, 170,  10, 168, 170, 168, 170, 170, 170,   0, 148,
    170,  16, 154, 170, 170,   2, 160, 170,   8,   5,   0,   0,   0,   0,  64,   0,
      0,   0,   8,   0, 127,   0, 248,   0,   0, 255, 255, 255, 255, 255,   0,   0,
      0,   0,   0, 255, 255, 255, 255,  15, 255, 255,   7,   0, 252, 255, 255, 255,
     15,   0,   0,   0
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
      0,  23,  44,  45,   5,   5,   5,  46,  24,  47,   0,   0,   0,   0,   0,   0,
      0,   0,   5,  48,  49,   0,   0,   0,   0,  50,   5,  51,  52,  53,  54,  55,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  56,  23,  24,  24,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,  58,  59,   0,   0,   0,  60,  61,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  24,  62,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  63,  64,   0,   0,   0,   0,   0
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

static UINT8 changes_when_uppercased_table_1[264] = {
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
    255,   3,   0,   0, 255, 255, 255, 127,  98,  21,  72,   0,  10,  80,   8,   0,
    191,  32,   0,   0, 170,  42,   0,   0, 170, 170, 170,  10, 168, 170, 168, 170,
    170, 170,   0, 148, 170,  16, 154, 170, 170,   2, 160, 170,   8,   5,   0,   0,
      0,   0,  64,   0,   0,   0,   8,   0, 127,   0, 248,   0,   0, 255, 255, 255,
    255, 255,   0,   0,   0,   0,   0, 255, 255, 255, 255,  15, 255, 255,   7,   0,
    252, 255, 255, 255,  15,   0,   0,   0
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
      0,  23,  45,  46,   5,   5,   5,  47,  24,  48,   0,   0,   0,   0,   0,   0,
      0,   0,   5,  49,  50,   0,   0,   0,   0,  51,   5,  52,  53,  54,  55,  56,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57,  23,  24,  24,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  58,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,  59,  60,   0,   0,   0,  61,  62,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  24,  63,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  64,  65,   0,   0,   0,   0,   0
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

static UINT8 dash_table_1[120] = {
      0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   4,   0,   0,   0,   0,   0,  64,   1,   0,   0,   0,   0,   0,   0,   0,
     64,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,
      0,   0,   8,   0,   0,   0,   0,   8,   0,   8,   0,   0,   0,   0,   0,   0,
      0,   0,   4,   0,   0,   0,   0,   0,   0,   0, 128,   4,   0,   0,   0,  12,
      0,   0,   0,  16,   0,   0,   1,   0,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   6,   0,   0,   0,   0,   1,   8,   0,   0,   0,
      0,  32,   0,   0,   0,   0,   0,   0
};

static UINT8 dash_table_2[88] = {
      0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   2,   1,   3,   1,   1,   1,   1,   1,   1,   1,
      4,   1,   1,   1,   1,   1,   1,   1,   5,   6,   7,   1,   1,   1,   1,   1,
      8,   1,   1,   1,   1,   1,   1,   1,   9,   3,   1,   1,   1,   1,   1,   1,
     10,   1,  11,   1,   1,   1,   1,   1,  12,  13,   1,   1,  14,   1,   1,   1,
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

static UINT8 decomposition_type_table_1[608] = {
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
      0,   0,  10,  10,  10,   0,   0,   0,  17,  17,  17,   0,   5,   0,   5,   5,
      0,   0,   5,   0,   0,   5,   5,   0,   5,   5,   5,   0,   5,   0,   5,   0,
      0,   0,   5,   5,   5,   0,   0,   5,   0,   5,   0,   5,   0,   0,   0,   5,
      3,   3,   3,   2,  13,   0,   0,   0,  13,  13,  13,   0,   2,   2,   0,   0
};

static UINT8 decomposition_type_table_2[1592] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   2,   3,   4,   5,   6,   7,
      8,   9,   8,   8,  10,  11,  10,  12,   8,   9,   8,   8,  10,  11,  10,   9,
      8,   8,   8,   8,  13,   8,   8,   8,   8,  12,   8,   8,  14,   8,  10,  15,
     16,   8,  17,   8,  12,   8,   8,   8,   8,  12,   8,   8,   8,   8,   8,  15,
     12,   0,   0,  18,  19,   0,   0,   0,   0,  20,  20,  21,   8,   8,   8,  22,
      8,  13,   8,   8,  23,  12,   8,   8,   8,   8,   8,   8,   8,   8,   8,  13,
      0,  13,   8,   8,   8,   0,   0,   0,   0,   0,   0,   0,  24,  24,  25,   0,
      0,   0,   0,   0,   0,   0,  20,   5,  24,  25,   0,   0,   0,   0,   0,   0,
      9,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,  26,  27,
      0,  21,  11,  22,  19,   0,   0,   0,   0,   0,  13,   8,  19,   0,   0,   0,
      0,   0,  13,  11,  28,  29,   0,   0,   0,   0,   0,   0,  30,   5,  31,   0,
      9,  18,   0,  11,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,  32,   0,
      0,   0,   0,   0,   9,  18,   0,  11,   0,   0,   0,   0,   0,  13,   0,   0,
     33,   0,   0,   0,   8,  13,  13,   8,  13,   8,  13,   8,   8,  12,  12,   0,
      0,   3,   0,   0,   0,   0,   0,   0,  13,  11,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  34,  35,   0,  36,   0,   0,   0,  18,   0,   0,   0,
      0,   0,  32,   0,  32,  19,   0,   0,   0,   0,   0,   0,   0,   0,   8,   8,
      0,   0,  18,  19,   0,   0,   0,   9,   0,   0,   0,   0,  18,  27,   0,   0,
      0,   0,   0,   0,   0,   0,  10,  27,   0,   0,  37,  19,   0,   0,   0,  12,
      0,   0,   0,   0,   0,  19,   0,   0,   0,   0,  13,  19,   0,   0,   0,   0,
      0,   0,  19,   0,   0,   0,   0,   0,  19,  18,  22,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  27,  11,   0,   0,   0,   0,   3,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,   1,   0,   0,   0,   0,
     18,   0,   0,  32,  27,  18,   0,  19,   0,   0,  32,   0,  18,  38,  17,   0,
     32,   0,   0,   0,  18,   0,   0,  32,  27,  18,   0,  19,   0,   0,  32,   0,
      0,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,
      0,  27,  36,  36,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  32,
      9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39,  24,  24,  39,  24,
     24,  24,  24,  40,  24,  24,  24,  24,  41,  42,  43,   0,   0,   0,  25,   0,
      0,   0,   0,   0,   0,   0,  44,  24,  24,  24,  24,  24,  24,  24,  24,  24,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  45,   0,
      8,   8,   8,   8,   8,   8,  12,   0,   8,   8,   8,   8,   8,  12,   8,  12,
      8,  12,   8,  12,   8,   8,  46,  46,   8,   8,   8,   8,   8,   8,   8,  12,
      8,   8,   8,   8,   8,  22,   8,  47,  21,  22,   8,   8,   8,  13,   8,  10,
      8,   8,   8,   8,  13,  22,   8,  48,  49,  50,  30,   0,  51,   3,   0,   0,
      0,  30,   0,  52,   3,  53,   0,  54,   0,   3,   5,   0,   0,   3,   0,   3,
      0,   0,   0,   0,  55,  24,  24,  24,  42,  42,  42,  43,  42,  42,  42,  56,
      0,   0,  35,   0,   0,   0,   0,   0,  57,  34,  58,  59,  59,  60,  61,  62,
     63,  64,  65,  66,  66,  67,  68,  59,  69,  61,  62,   0,  70,  70,  70,  70,
     20,  20,  20,  20,  20,  20,  20,  20,   0,   0,  71,   0,   0,   0,  13,   0,
      0,   0,   0,  27,   0,   0,   0,   0,   0,   0,   0,  10,   0,   0,   0,   0,
      0,  19,  32,  19,   0,   0,   0,   0,   0,  36,   0,  72,  35,   0,   0,   0,
     32,  37,  32,   0,   0,   0,   0,   0,  36,   0,   0,  10,  12,  12,  12,   0,
     12,  12,  12,   0,   0,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,
      8,   0,  13,  12,   0,   0,   0,   0,   0,   0,  33,   0,   0,   0,   0,   0,
     73,  73,  73,  73,  73,  20,  20,  20,  20,  20,  20,  20,  20,  74,  73,  73,
     73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  75,   0,   0,   0,   0,   0,
      0,   0,   0,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  19,   0,   0,   0,   0,   0,   0,   0,  76,
      0,   0,   0,  44,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,
     20,  20,  20,  20,  20,   5,   0,   0,  77,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  26,  30,   0,   0,   0,   0,  36,  36,  36,  36,  36,
     36,  46,  32,   0,   9,  22,  33,  12,   0,   0,   0,   0,   0,  19,   3,  78,
      0,   0,   0,   0,   0,  37,  11,  79,   0,   0,   0,   0,  34,  20,  20,  20,
     20,  20,  20,  30,   4,  24,  24,  24,  20,  20,  20,  20,  20,  20,  20,  30,
     20,  73,   0,   0,  80,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  75,
     20,  20,  20,  81,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  82,
     81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  20,  20,
     20,  20,  20,  20,  83,  81,  81,  81,  20,  20,  20,  20,  20,  20,  20,  84,
      0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0,   0,  25,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  55,   0,   0,   0,   0,   0,   0,   0,   0,  24,
      0,   0,  85,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   0,
      8,   8,   8,  12,  36,  10,   8,  11,  36,  33,  13,   8,   8,   8,   8,   8,
      8,   8,   8,  12,   8,   8,   8,   8,  20,  30,   0,   0,   3,  20,   0,  46,
     59,  59,  86,   8,   8,  11,   8,  36,   9,  22,   8,  15,  87,  88,  88,  88,
     88,  88,  88,  88,  88,  88,  88,  88,  88,  87,  87,  87,  88,  88,  88,  88,
     89,  87,  88,  88,  90,   0,   0,   0,   0,   0,   0,   0,  91,  92,  93,  94,
     87,  89,  88,  87,  87,  87,  95,  89,  96,  96,  96,  96,  96,  96,  96,  96,
     96,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  98,  99,  99,
     99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99, 100,
    101, 101, 101, 101, 101, 102,  96,  96,  96,  96,  96,  96, 103,  97,  97,  97,
     97,  97,  97, 104,  99, 101, 101, 105,   0,   0,   0,   0, 106,  99, 107, 108,
    109, 107, 110, 107, 106,  98,  97, 107,  98, 111, 112,  99, 113, 108, 114, 107,
     97,  97,  97,  97,  97, 108, 115,  97,  98, 108,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  96,  96,  96, 116,   0,   0,   0,   0, 117, 117, 118,   0,
      0,   0,   0,   0, 117, 117, 117, 117, 117, 119, 120,  20, 121, 122, 122, 122,
    122, 121, 122,   0, 123, 124, 125, 125, 126,  93, 127, 128,  92, 127, 129, 129,
    129, 129, 128,  93, 127, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 128, 127, 128,  93, 130, 131, 132, 132, 132, 132, 132, 132, 132,
    132, 132, 132, 132, 132, 132, 132, 132, 133, 134, 134, 134, 134, 134, 134, 134,
    134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 134, 135,
    136, 134, 136, 134, 136, 134, 136, 137, 132, 138, 134, 135,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  27,  19,   0,   0,  18,   0,   0,   0,   0,   0,
      0,   0,   0,  13,   0,   0,   0,   0,   0,   0,  18,  19,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  18,  36,   0,   0,   0,   0,   0,   0,  13,   0,
      0,   0,   0,   0,   0,   0,  19,   0,   0,   0,   0,   0,   0,   0,   0,  13,
      8,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,   8,
     19,   0,   0,   0,   0,   0,   0,   0,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59, 139,  59,  59,  59,  59,  59,  59,  59,  59,  59, 139,
    140, 141,  61, 139,  59,  59,  66,  61,  59,  61,  59,  59,  59,  59,  59,  59,
     59,  66, 142,  61,  59, 139,  59, 139,  59,  59,  59,  59,  59,  59,  66, 142,
     59, 143, 144,  59, 139,  59,  59,  59,  59,  62,  59,  59,  59,  59,  59,  59,
     59,  59,  59, 144,  59,  59,  59,  59, 141, 145,  61,  59, 142,  59, 146,   0,
    140, 147, 146,  61, 141, 145, 146, 146, 141, 145, 142,  59, 142,  59,  61, 143,
     59,  59,  66,  59,  59,  59,  59,   0,  61,  61,  66,  59,  59,  59,  59,   0,
     20,  20,  30,   0,  20,  20,  20,  20,  20,  20, 148,  75,  81,  81,  81,  81,
     81,  81,  81,  81,   0,   0,   0,   0,   0,   0,   4,  25,   0,   0,   0,   0,
      0,   0,   0,   0, 149,   0,   0,   0, 150,   0,   0,   0,  81,  81,  81,  81,
     81,  81,  81,  81,  81,  81,  81,   0,  20,  20,  35,   0, 151,   0,   0,   0,
      0,   0,   0,   0,  59,  59,  62,   0
};

static UINT8 decomposition_type_table_3[1280] = {
      0,   0,   0,   0,   0,   1,   2,   3,   4,   5,   6,   7,   0,   8,   9,  10,
     11,  12,   0,   0,   0,  13,  14,  15,   0,   0,  16,  17,  18,  19,  20,  21,
     22,  23,  24,  25,   0,   0,  26,  27,   0,   0,   0,   0,  28,   0,   0,   0,
      0,  29,   0,  30,   0,   0,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  32,  33,   0,   0,   0,  34,   0,
      0,  35,  36,   0,   0,   0,   0,   0,   0,   0,  37,   0,  38,   0,  39,   0,
      0,   0,  40,   0,   0,   0,  41,   0,   0,   0,  39,   0,   0,   0,  42,   0,
      0,  43,   0,   0,   0,  43,  44,   0,  45,   0,  46,  47,  48,  49,   0,   0,
      0,  50,   0,   0,   0,   0,   0,  51,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  52,  53,  54,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  55,  56,  57,  58,  59,   0,   0,
     60,  60,  60,  60,  61,  60,  60,  62,  63,  60,  64,  65,  60,  66,  67,  68,
     69,  70,  71,  72,  73,  74,   0,   0,  75,  76,  77,  78,  79,  80,  81,   0,
     82,  83,  84,  85,  86,  87,   0,  88,   0,  89,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  90,  78,  91,  92,  93,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     94,   0,   0,  95,   0,   0,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  97,   0,   0,   0,   0,   0,   0,   0,  98,   0,   0,   0,   0,
      0,   0,   0,   0,  99,   0,   0,  43,  78,  78,  78,  78,  78,  78, 100,   0,
    101, 102, 103, 104, 105, 103, 104, 106,   0, 107,  78,  78, 108,   0,   0,   0,
    109,  78, 110, 111,  92,  92, 112, 113, 114, 114, 115, 116, 114, 114, 114, 117,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 118,   0,   0,   0,   0,   0,   0, 119,   0,   0,   0, 120,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 121, 122,   0,   0,   0,   0,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60, 123,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  60,  60,  60,  60,  60,  60,  60,  60,
    124, 125,  60, 126,  60,  60,  62,   0, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 135, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
    149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 158, 159, 160, 161, 162, 163,
      0,   0,   0,   0, 164, 165,   0,   0,   0, 166,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 167,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 168,   0,   0,   0,   0,   0,   0,   0, 169,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 170,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 171, 172,   0, 173, 174,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    175, 175, 176, 175, 177, 178, 179, 175, 180, 181, 182, 175, 175, 175, 175, 175,
    175, 175, 175, 175, 175, 183, 175, 175, 175, 175, 175, 175, 175, 175, 184, 175,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    179, 185, 186, 187, 188, 189,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 190, 191, 192, 193, 194,   0,   0,   0,
    195, 196, 197,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 198,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,
     65,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 decomposition_type_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   8,   9,  10,  10,  10,  10,  11,   7,   7,   7,   7,  12,
      7,   7,  13,  14,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  15,   7,   7,  16,  17,  18,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  19,
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
    offset = (codepoint >> 5) & 0x3F;
    block = decomposition_type_table_3[(block << 6) + offset];
    offset = (codepoint >> 2) & 0x7;
    block = decomposition_type_table_2[(block << 3) + offset];
    offset = codepoint & 0x3;
    value = decomposition_type_table_1[(block << 2) + offset];

    return value;
}

/* The tables and function for Default_Ignorable_Code_Point. */

static UINT8 default_ignorable_code_point_table_1[136] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,
      0, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,
      0,   0,   0, 128,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,   0,
      0, 120,   0,   0,   0,   0,   0,   0,   0, 248,   0,   0,   0, 124,   0,   0,
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

static UINT8 diacritic_table_1[408] = {
      0,   0,   0,   0,   0,   0,   0,  64,   1,   0,   0,   0,   0, 129, 144,   1,
      0,   0, 255, 255, 255, 255, 255, 255, 255, 127, 255, 224,   7,   0,  48,   4,
     48,   0,   0,   0, 248,   0,   0,   0,   0,   0,   0,   2,   0,   0, 254, 255,
    251, 255, 255, 191,  22,   0,   0,   0,   0, 248, 135,   1,   0,   0,   0, 128,
     97,  28,   0,   0, 255,   7,   0,   0, 192, 255,   1,   0,   0, 248,  63,   0,
      0,   0,   0,   3, 248, 255, 255, 127,   0,   0,   0,  16,   0,  32,  30,   0,
      0,   0,   2,   0,   0,  32,   0,   0,   0,   0,   0, 224,   0,  32,  32,   0,
      0,   0,   0,  24,   0,   4,   0,   0, 128,  95,   0,   0,   0,   0,   0,   4,
      0,  31,   0,   0,   0,   0, 160, 194, 220,   0,   0,   0,  64,   0,   0,   0,
      0,   0, 128,   6,  24,  62,   0,   0, 128, 191,   0,  12,   0, 254,  15,  32,
      0,   0,   0,  14,   0,   0, 224, 159,   0,   0, 255,  63,   0,   0,  16,   0,
     16,   0,   0,   0,   0, 248,  15,   0,   0,  12,   0,   0,   0,   0, 192,   0,
      0,   0,   0,  63, 255,  33, 144,   3,   0, 240, 255, 255, 240, 255,   0,   0,
      0,   0, 224, 227,   0,   0,   0, 160,   3, 224,   0, 224,   0, 224,   0,  96,
      0, 128,   3,   0,   0, 128,   0,   0,   0, 252,   0,   0,   0,   0,   0,  30,
      0, 128,   0, 176,   0,   0,   0,  48,   0,   0,   3,   0,   3,   0,   0,   0,
      0,   7,   0,   0, 255, 255,   3,   0,   0, 120,   0,   0,   0,   0,   8,   0,
     32,   0,   0,   0,   0,   0,   0,  56,   7,   0,   0,   0,   0,   0,  64,   0,
      0,   0,   0, 248,   0,  14,   0,   0,   0,  48,   0,   0, 255, 255,   0,   0,
      0,   0,   1,   0,   0,   0,   0, 192,   8,   0,   0,   0,  96,   0,   0,   0,
    252,   0,   0,   0,   0,   0,   0,   6,   0,   0,  24,   0,   1,  28,   0,   0,
      0,   0,  96,   0,   0,   6,   0,   0, 192,  31,  31,   0,  68,   0,   0,   0,
     12,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,  96, 128,   0,   0,   0,
     52,   0,   0,   0,   0,   0, 128,   0,   0,   0,  31,   0,   0,   0, 127,   0,
      0, 128, 255, 255, 128, 227,   7, 248, 231,  15,   0,   0,   0,  60,   0,   0,
      0, 240,   0,   0, 112,   7,   0,   0
};

static UINT8 diacritic_table_2[488] = {
      0,   0,   1,   2,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   4,   5,   5,   5,   5,   6,   7,   8,   0,   0,   0,
      0,   0,   0,   0,   9,   0,   0,   0,   0,   0,  10,   0,  11,  12,  13,   0,
      0,   0,  14,   0,   0,   0,  15,  16,   0,   4,  17,   0,   0,  18,   0,  19,
     20,   0,   0,   0,   0,   0,   0,  21,   0,  22,  23,  24,   0,  22,  25,   0,
      0,  22,  25,   0,   0,  22,  25,  26,   0,  22,  27,   0,   0,   0,  25,   0,
      0,   0,  25,   0,   0,  22,  25,   0,   0,  28,  25,   0,   0,   0,  29,   0,
      0,   0,  30,   0,   0,  31,  32,   0,  20,  33,   0,   0,  34,   0,  35,   0,
      0,  36,   0,  37,  38,   0,   0,   0,   0,   0,  26,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  39,   0,   0,  40,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  41,   0,  42,   0,   0,   0,  43,  44,  45,   0,  46,   0,   0,
      0,  47,   0,  48,   0,   0,   4,  49,   0,  50,   5,  17,   0,   0,  51,  52,
      0,   0,   0,   0,   0,  53,  54,  55,   0,   0,   0,   0,   0,   0,   0,  56,
      0,  57,   0,   0,   0,   0,   0,   0,   0,  58,   0,   0,  59,   0,   0,  22,
      0,   0,   0,  60,  61,   0,   0,  62,   5,  63,   0,   0,  64,   0,   0,  20,
      0,   0,   0,   0,   0,   0,  44,  65,   0,  66,  67,   0,   0,  67,   2,  68,
      0,   0,   0,  69,   0,  15,  70,  71,   0,   0,  72,  73,   0,   0,   0,  74,
      1,   0,   0,   0,   0,   0,   0,   0,   0,  75,   0,   0,   0,   0,   0,   0,
      0,   1,   2,  76,  77,   0,   0,  78,   0,   0,   0,   0,   0,   0,   0,   2,
      0,   0,   0,   0,   0,   0,   0,  79,   0,  80,   0,   0,   0,   0,   0,   0,
      0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  81,   0,   0,
      0,  82,   0,  67,   0,   0,  83,   0,   0,  84,   0,   0,   0,   0,   0,  85,
      0,  22,  25,  86,   0,   0,   0,   0,   0,   0,  87,   0,   0,   0,  88,   0,
      0,   0,   0,   0,   0,  15,   2,   0,   0,  15,   0,   0,   0,  47,   0,   0,
      0,  89,   0,   0,   0,   0,   0,   0,   0,  81,   0,   0,   0,   0,   0,   0,
      0,  90,  78,   0,   0,   0,   0,   2,   0,  43,  91,   0,  10,   0,   0,   0,
      0,  15,   0,   0,   0,   0,   0,   0,   0,   0,  92,   0,  93,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  94,   0,  95,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  96,   0,   0,  62,   0,   0,   0,  97,  98,  99,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 100,   0,   0,   0,   0,   0,   0,  95,   0,
      0,   0, 101,   0,   0,   0,   0,   0
};

static UINT8 diacritic_table_3[288] = {
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
      1,   1,  37,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,  39,   1,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,   1,  52,  53,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  54,  55,   1,   1,   1,  56,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  57,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,  55,  58,   1,   1,   1,   1,   1,  59,  60,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1
};

static UINT8 diacritic_table_4[136] = {
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
      1,   5,   1,   1,   1,   5,   2,   1,   1,   2,   1,   1,   1,   5,   1,   1,
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

static UINT8 east_asian_width_table_1[1048] = {
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
      5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,
      0,   0,   0,   0,   5,   0,   0,   0,   1,   1,   1,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   0,   0,   1,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   0,   5,   5,   5,   5,   5,   5,   0,   5,   5,
      5,   5,   5,   0,   0,   0,   0,   5,   5,   0,   0,   0,   5,   0,   0,   0,
      5,   0,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   5,
      0,   0,   0,   5,   5,   5,   5,   0,   0,   0,   5,   0,   0,   0,   0,   0,
      0,   0,   0,   5,   5,   5,   5,   5,   5,   5,   5,   0,   0,   5,   5,   5,
      5,   5,   5,   5,   0,   5,   5,   5
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
     32,  32,  32,  99,   0,   0,   0,   0,   0,   0, 112,   0, 113,   0,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  72,
    114,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  75,   0,   0,   0,   0,   0,   0,
     28, 115,  28,  28,  28, 116,  28,  28,  28,  28,  28,  28,  28,  31,  28,  28,
     28,  80, 117, 118,  28, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    112,   0,  32,  32,  32,  32,  32,  72,  32,  87, 102,   0,  97,   0,   0,   0,
     32,  32,  32,  32,  87,  90, 120,  32,  32,  32,  32,  32,  32,  32,  32, 121,
     32,  32,  72,   0,  32,  32,  32,  32,  32, 122,  72,   0,  32,  32, 123,  32,
     32,  32,  32,  32,  32,  32,  32,  99, 124,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 125,
     32,  32,  32,  32,  32,  32,  32,  97,   0, 126,  32,  32,  32,   0,   0, 127,
      0,   0,  66,   0, 114,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,   0,   0,   0,   0,   0,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  97, 114, 129,   0,   0,  94, 113, 101,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,  72,   0,   0,
      0, 113,  32,  32,  32,  32,  32, 103, 120,  32,  32,  32,  32,  32,  32, 124,
     32,  32,  32,  32,  32,  32,  32,  32,  32, 130,  32,  32,  32,  32,  32,  32,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 101, 112,
     99,   0,  32,  32,  32,  87,  99,   0, 112,   0,  99,   0,   0,   0,   0,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  97,
     28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28, 116
};

static UINT8 east_asian_width_table_3[576] = {
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
     30,  30,  49,  30,  30,  50,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     51,  52,  53,  54,  55,   9,  56,  57,  58,  59,  60,  61,  62,  63,   9,  64,
      9,   9,  65,  66,  67,  68,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,
     30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  69,
      9,   9,  41,   6,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  70
};

static UINT8 east_asian_width_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   5,   5,   7,   8,   9,
     10,  10,  10,  10,  10,  10,  11,   5,  12,  10,  10,  13,  10,  10,  10,  14,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  15,
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
     16,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  17,
      8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  17
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

static UINT8 extender_table_1[208] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,
      0,   0,   3,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   4,   0,   0,  32,   0,   0,   0,   0,   0,
     64,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,
      8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0,   8,
     32,   0,   0,   0,   0,   0,  62,   0,   0,   0,   0,  96,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 112,   0,  16,   0,   0,   0,   0,   0,   0,
      0, 128,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
      0,   0,   0,  32,   0,   0,  24,   0,   0,   0,   0,  32,   0,   0,   0,   0,
    192,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,
     12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  48, 112,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 extender_table_2[176] = {
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   4,
      0,   0,   0,   0,   0,   5,   0,   0,   0,   6,   0,   6,   0,   0,   0,   0,
      7,   8,   0,   0,   0,   0,   0,   0,   0,   0,   9,   0,   0,   0,   0,   0,
     10,  11,   0,   0,   0,   0,   0,   0,  12,   0,  13,  14,   0,   0,   0,   0,
      5,   0,   0,   0,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  16,   0,  17,   0,  18,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  17,   0,   0,   0,   0,   0,   0,   0,  19,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  20,   0,   0,  21,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,
      0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0,   0,  25,   0,   0
};

static UINT8 extender_table_3[128] = {
      0,   1,   2,   3,   2,   4,   2,   5,   2,   2,   2,   2,   6,   7,   8,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   9,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
     10,   2,   2,  11,  12,  13,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  14,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  15,  16,   2,   2,  17,   2,   2,
      2,   2,   2,   2,   2,  18,   2,  19,   2,   2,   2,   2,   2,   2,   2,   2,
     20,   2,   2,   2,  21,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2
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

static UINT8 general_category_table_1[370] = {
      3,   3,  25,  21,  21,  21,   4,  21,  18,   1,  21,  14,  21,   5,   6,   6,
     14,  14,  14,  21,  21,  29,  29,  29,  29,  18,  21,   1,  16,   2,  16,  13,
     13,  13,  13,  18,  14,   1,  14,   3,   4,   4,  22,  21,  16,  22,  19,  10,
     14,   9,  22,  16,  22,  14,  20,  20,  16,  20,  19,   8,  20,  21,  29,  14,
     29,  13,  13,  14,  13,  29,  13,  19,  19,  19,  29,  28,  28,  13,  19,  13,
     15,  15,  16,  16,  15,  16,  17,  17,   0,   0,  15,  13,  29,  21,  29,   0,
      0,  29,  14,  29,  22,  17,   7,   7,   0,  15,  13,  21,   5,   0,   0,  22,
     22,   4,   0,  17,   5,  17,  21,  17,  17,  21,  19,   0,   0,  19,  19,  21,
     21,   0,   9,   9,  21,   4,  22,  22,   9,   0,  15,  19,  19,  17,  17,  19,
     21,  19,  17,   9,  17,  15,  15,  17,  17,  22,  19,  22,  22,  19,   0,   9,
     17,   0,  15,   0,   9,  17,  17,  26,  26,  26,  26,  17,  21,  15,   0,  26,
     26,   0,  20,  22,  22,   0,   0,  21,  19,  26,  20,  19,   0,   4,  21,  22,
     26,  19,  21,  20,  20,   0,   5,  19,  25,  19,  19,  18,   1,   0,  11,  11,
     11,  19,   5,  21,  19,  15,   7,  17,  13,   0,  13,  15,  28,  28,  28,  16,
     13,  16,   0,  16,  29,  16,  16,   0,  25,  25,  25,   9,   5,   5,  10,   8,
     18,  10,  12,  23,   9,  25,  21,  10,   8,  21,  21,   2,   2,  21,  14,  18,
      1,  21,  21,  25,  20,  15,   1,  15,  17,   7,  29,  22,  22,  29,  22,  13,
     13,  22,  11,  29,  13,  11,  11,  20,  14,  22,  22,  18,   1,  22,   1,  14,
      1,  18,  13,  17,   0,  13,  18,  21,  22,  15,  19,  11,   5,  18,   1,   1,
     22,  11,   5,  15,  11,  15,  17,  16,  16,  15,  22,  20,  15,  21,   7,  21,
     16,  29,   4,  22,  26,  21,  15,  26,  27,  27,  24,  24,  19,  14,  21,  18,
      5,   2,   2,  18,   2,   2,  14,   5,  14,   0,  14,  16,   4,   0,   0,  20,
     17,  20,  11,   0,  21,  11,  19,  20,  17,   5,  21,   9,  22,  26,  26,   9,
      4,  20
};

static UINT8 general_category_table_2[5232] = {
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
     44,  44,  44,  44,  44,  44,  44,  44,  36,  36,  61,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  44,  44,  44,  44,  44,  57,  43,  43,  43,  43,  43,  43,
     43,  82,  43,  43,  43,  43,  43,  43,  43,  83,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  83,  71,  84,  85,  43,  43,  43,  83,  84,  85,  84,
     70,  43,  43,  43,  36,  36,  36,  36,  36,  43,   2,   7,   7,   7,   7,   7,
     86,  36,  36,  36,  36,  36,  36,  36,  70,  84,  62,  36,  36,  36,  61,  62,
     61,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  36,  36,  36,
     61,  61,  44,  36,  36,  44,  71,  84,  85,  43,  80,  87,  88,  87,  85,  61,
     44,  44,  44,  87,  44,  44,  36,  62,  36,  43,  44,   7,   7,   7,   7,   7,
     36,  20,  27,  27,  27,  56,  63,  80,  57,  83,  62,  36,  36,  61,  44,  62,
     61,  36,  62,  61,  36,  44,  80,  84,  85,  80,  44,  57,  80,  57,  43,  44,
     57,  44,  44,  44,  62,  36,  61,  61,  44,  44,  44,   7,   7,   7,   7,   7,
     43,  36,  70,  64,  44,  44,  44,  44,  57,  83,  62,  36,  36,  36,  36,  62,
     36,  62,  36,  36,  36,  36,  36,  36,  61,  36,  62,  36,  36,  44,  71,  84,
     85,  43,  43,  57,  83,  87,  85,  44,  61,  44,  44,  44,  44,  44,  44,  44,
     66,  44,  44,  44,  62,  43,  43,  43,  57,  84,  62,  36,  36,  36,  61,  62,
     61,  36,  62,  36,  36,  44,  71,  85,  85,  43,  80,  87,  88,  87,  85,  44,
     44,  44,  57,  83,  44,  44,  36,  62,  78,  27,  27,  27,  44,  44,  44,  44,
     44,  71,  62,  36,  36,  61,  44,  36,  61,  36,  36,  44,  62,  61,  61,  36,
     44,  62,  61,  44,  36,  61,  44,  36,  36,  36,  36,  36,  36,  44,  44,  84,
     83,  88,  44,  84,  88,  84,  85,  44,  61,  44,  44,  87,  44,  44,  44,  44,
     27,  89,  67,  67,  56,  90,  44,  44,  83,  84,  71,  36,  36,  36,  61,  36,
     61,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  62,  43,
     83,  84,  88,  43,  80,  43,  43,  44,  44,  44,  57,  80,  36,  61,  44,  44,
     44,  44,  44,  91,  27,  27,  27,  89,  70,  84,  72,  36,  36,  36,  61,  36,
     36,  36,  62,  36,  36,  44,  71,  85,  84,  84,  88,  83,  88,  84,  43,  44,
     44,  44,  87,  88,  44,  44,  44,  61,  62,  61,  44,  44,  44,  44,  44,  44,
     43,  84,  36,  36,  36,  36,  61,  36,  36,  36,  36,  36,  36,  70,  71,  84,
     85,  43,  80,  84,  88,  84,  85,  77,  44,  44,  36,  92,  27,  27,  27,  93,
     27,  27,  27,  27,  89,  36,  36,  36,  57,  84,  62,  36,  36,  36,  36,  36,
     36,  36,  36,  61,  44,  36,  36,  36,  36,  62,  36,  36,  36,  36,  62,  44,
     36,  36,  36,  61,  44,  80,  44,  87,  84,  43,  80,  80,  84,  84,  84,  84,
     44,  84,  64,  44,  44,  44,  44,  44,  62,  36,  36,  36,  36,  36,  36,  36,
     70,  36,  43,  43,  43,  80,  44,  94,  36,  36,  36,  75,  43,  43,  43,  60,
      7,   7,   7,   7,   7,   2,  44,  44,  62,  61,  61,  36,  36,  61,  36,  36,
     36,  36,  62,  62,  36,  36,  36,  36,  70,  36,  43,  43,  43,  43,  71,  44,
     36,  36,  61,  81,  43,  43,  43,  44,   7,   7,   7,   7,   7,  44,  36,  36,
     77,  67,   2,   2,   2,   2,   2,   2,   2,  95,  95,  67,  43,  67,  67,  67,
      7,   7,   7,   7,   7,  27,  27,  27,  27,  27,  50,  50,  50,   4,   4,  84,
     36,  36,  36,  36,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  44,
     57,  43,  43,  43,  43,  43,  43,  83,  43,  43,  60,  43,  36,  36,  70,  43,
     43,  43,  43,  43,  57,  43,  43,  43,  43,  43,  43,  43,  43,  43,  80,  67,
     67,  67,  67,  76,  67,  67,  90,  67,   2,   2,  95,  67,  21,  64,  44,  44,
     36,  36,  36,  36,  36,  92,  85,  43,  83,  43,  43,  43,  85,  83,  85,  71,
      7,   7,   7,   7,   7,   2,   2,   2,  36,  36,  36,  84,  43,  36,  36,  43,
     71,  84,  96,  92,  84,  84,  84,  36,  70,  43,  71,  36,  36,  36,  36,  36,
     36,  83,  85,  83,  84,  84,  85,  92,   7,   7,   7,   7,   7,  84,  85,  67,
     11,  11,  11,  48,  44,  44,  48,  44,  16,  16,  16,  16,  16,  53,  45,  16,
     36,  36,  36,  36,  61,  36,  36,  44,  36,  36,  36,  61,  61,  36,  36,  44,
     61,  36,  36,  44,  36,  36,  36,  61,  61,  36,  36,  44,  36,  36,  36,  36,
     36,  36,  36,  61,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  57,  43,
      2,   2,   2,   2,  97,  27,  27,  27,  27,  27,  27,  27,  27,  27,  98,  44,
     67,  67,  67,  67,  67,  44,  44,  44,  11,  11,  11,  44,  16,  16,  16,  44,
     99,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  77,  72,
    100,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 101, 102,  44,
     36,  36,  36,  36,  36,  63,   2, 103, 104,  36,  36,  36,  61,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  61,  36,  36,  43,  80,  44,  44,  44,  44,  44,
     36,  43,  60,  64,  44,  44,  44,  44,  36,  43,  44,  44,  44,  44,  44,  44,
     61,  43,  44,  44,  44,  44,  44,  44,  36,  36,  43,  85,  43,  43,  43,  84,
     84,  84,  84,  83,  85,  43,  43,  43,  43,  43,   2,  86,   2,  66,  70,  44,
      7,   7,   7,   7,   7,  44,  44,  44,  27,  27,  27,  27,  27,  44,  44,  44,
      2,   2,   2, 105,   2,  59,  43,  68,  36, 106,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  61,  44,  44,  44,  36,  36,  70,  71,  36,  36,  36,  36,
     36,  36,  36,  36,  70,  61,  44,  44,  36,  36,  36,  44,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  36,  61,  43,  83,  84,  85,  83,  84,  44,  44,
     84,  83,  84,  84,  85,  43,  44,  44,  90,  44,   2,   7,   7,   7,   7,   7,
     36,  36,  36,  36,  36,  36,  36,  44,  36,  36,  61,  44,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  44,  44,  36,  36,  36,  36,  36,  44,  44,  44,
      7,   7,   7,   7,   7,  98,  44,  67,  67,  67,  67,  67,  67,  67,  67,  67,
     36,  36,  36,  70,  83,  85,  44,   2,  36,  36,  92,  83,  43,  43,  43,  80,
     83,  83,  85,  43,  43,  43,  83,  84,  84,  85,  43,  43,  43,  43,  80,  57,
      2,   2,   2,  86,   2,   2,   2,  44,  43,  43,  43,  43,  43,  43,  43, 107,
     80,  44,  44,  44,  44,  44,  44,  44,  43,  43,  96,  36,  36,  36,  36,  36,
     36,  36,  83,  43,  43,  83,  83,  84,  84,  83,  96,  36,  36,  36,  44,  44,
     95,  67,  67,  67,  67,  50,  43,  43,  43,  43,  67,  67,  67,  67,  90,  44,
     43,  96,  36,  36,  36,  36,  36,  36,  92,  43,  43,  84,  43,  85,  43,  36,
     36,  36,  36,  83,  43,  84,  85,  85,  43,  84,  44,  44,  44,  44,   2,   2,
     36,  36,  84,  84,  84,  84,  43,  43,  43,  43,  84,  43,  44,  91,   2,   2,
      7,   7,   7,   7,   7,  44,  62,  36,  36,  36,  36,  36,  40,  40,  40,   2,
     16,  16,  16,  16, 108,  44,  44,  44,  11,  11,  11,  11,  11,  47,  48,  11,
      2,   2,   2,   2,  44,  44,  44,  44,  43,  60,  43,  43,  43,  43,  43,  43,
     83,  43,  43,  43,  71,  36,  70,  36,  36,  36,  71,  92,  43,  61,  44,  44,
     16,  16,  16,  16,  16,  16,  40,  40,  40,  40,  40,  40,  40,  45,  16,  16,
     16,  16,  16,  16,  45,  16,  16,  16,  16,  16,  16,  16,  16, 109,  40,  40,
     43,  43,  43,  43,  43,  57,  43,  43,  32,  32,  32,  16,  16,  16,  16,  32,
     16,  16,  16,  16,  11,  11,  11,  11,  16,  16,  16,  44,  11,  11,  11,  44,
     16,  16,  16,  16,  48,  48,  48,  48,  16,  16,  16,  16,  16,  16,  16,  44,
     16,  16,  16,  16, 110, 110, 110, 110,  16,  16, 108,  16,  11,  11, 111, 112,
     41,  16, 108,  16,  11,  11, 111,  41,  16,  16,  44,  16,  11,  11, 113,  41,
     16,  16,  16,  16,  11,  11, 114,  41,  44,  16, 108,  16,  11,  11, 111, 115,
    116, 116, 116, 116, 116, 117,  65,  65, 118, 118, 118,   2, 119, 120, 119, 120,
      2,   2,   2,   2, 121,  65,  65, 122,   2,   2,   2,   2, 123, 124,   2, 125,
    126,   2, 127, 128,   2,   2,   2,   2,   2,   9, 126,   2,   2,   2,   2, 129,
     65,  65,  68,  65,  65,  65,  65,  65, 130,  44,  27,  27,  27,   8, 127, 131,
     27,  27,  27,  27,  27,   8, 127, 102,  40,  40,  40,  40,  40,  40,  81,  44,
     20,  20,  20,  20,  20,  20,  20,  20,  43,  43,  43,  43,  43,  43, 132,  51,
    107,  51, 107,  43,  43,  43,  43,  43,  67, 133,  67, 134,  67,  34,  11,  16,
     11,  32, 134,  67,  49,  11,  11,  67,  67,  67, 133, 133, 133,  11,  11, 135,
     11,  11,  35,  36,  39,  67,  16,  11,   8,   8,  49,  16,  16,  26,  67, 136,
     27,  27,  27,  27,  27,  27,  27,  27, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 137, 138, 103, 139,  67,  44,  44,   8,   8, 140,  67,  67,   8,  67,  67,
    140,  26,  67, 140,  67,  67,  67, 140,  67,  67,  67,  67,  67,  67,  67,   8,
     67, 140, 140,  67,  67,  67,  67,  67,  67,  67,   8,   8,   8,   8,   8,   8,
      8,   8,   8,   8,   8,   8,   8,   8,  67,  67,  67,  67,   4,   4,  67,  67,
      8,  67,  67,  67, 141, 142,  67,  67,  67,  67,  67,  67,  67,  67, 140,  67,
     67,  67,  67,  67,  67,  26,   8,   8,   8,   8,  67,  67,  67,  67,  67,  67,
     67,  67,  67,  67,  67,  67,   8,   8,   8,  67,  67,  67,  67,  67,  67,  67,
     67,  67,  67,  90,  44,  44,  44,  44,  67,  67,  67,  67,  67,  90,  44,  44,
     27,  27,  27,  27,  27,  27,  67,  67,  67,  67,  67,  67,  67,  27,  27,  27,
     67,  67,  67,  26,  67,  67,  67,  67,  26,  67,  67,  67,  67,  67,  67,  67,
     67,  67,  67,  67,   8,   8,   8,   8,  67,  67,  67,  67,  67,  67,  67,  26,
     67,  67,  67,  67,   4,   4,   4,   4,   4,   4,   4,  27,  27,  27,  27,  27,
     27,  27,  67,  67,  67,  67,  67,  67,   8,   8, 127, 143,   8,   8,   8,   8,
      8,   8,   8,   4,   4,   4,   4,   4,   8, 127, 144, 144, 144, 144, 144, 144,
    144, 144, 144, 144, 143,   8,   8,   8,   8,   8,   8,   8,   4,   4,   8,   8,
      8,   8,   8,   8,   8,   8,   4,   8,   8,   8, 140,  26,   8,   8, 140,  67,
     67,  67,  44,  67,  67,  67,  67,  67,  67,  67,  67,  55,  67,  67,  67,  67,
     11,  11,  11,  11,  11,  11,  11,  47,  16,  16,  16,  16,  16,  16,  16, 108,
     32,  11,  32,  34,  34,  34,  34,  11,  32,  32,  34,  16,  16,  16,  40,  11,
     32,  32, 136,  67,  67, 134,  34, 145,  43,  32,  44,  44,  91,   2,  97,   2,
     16,  16,  16, 146,  44,  44, 146,  44,  36,  36,  36,  36,  44,  44,  44,  52,
     64,  44,  44,  44,  44,  44,  44,  57,  36,  36,  36,  61,  44,  44,  44,  44,
     36,  36,  36,  61,  36,  36,  36,  61,   2, 119, 119,   2, 123, 124, 119,   2,
      2,   2,   2,   6,   2, 105, 119,   2, 119,   4,   4,   4,   4,   2,   2,  86,
      2,   2,   2,   2,   2, 118,   2,   2, 105, 147,   2,   2,   2,   2,   2,   2,
     67,  64,  44,  44,  44,  44,  44,  44,  67,  67,  67,  67,  67,  55,  67,  67,
     67,  67,  44,  44,  44,  44,  44,  44,  67,  67,  67,  44,  44,  44,  44,  44,
     67,  67,  67,  67,  67,  67,  44,  44,   1,   2, 148, 149,   4,   4,   4,   4,
      4,  67,   4,   4,   4,   4, 150, 151, 152, 103, 103, 103, 103,  43,  43,  84,
    153,  40,  40,  67, 103, 154,  63,  67,  36,  36,  36,  61,  57, 155, 156,  69,
     36,  36,  36,  36,  36,  63,  40,  69,  44,  44,  62,  36,  36,  36,  36,  36,
     67,  27,  27,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  90,
     27,  27,  27,  27,  27,  67,  67,  67,  67,  67,  67,  67,  27,  27,  27,  27,
    157,  27,  27,  27,  27,  27,  27,  27,  36,  36, 106,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36, 158,   2,   7,   7,   7,   7,   7,  36,  44,  44,
     32,  32,  32,  32,  32,  32,  32,  70,  51, 159,  43,  43,  43,  43,  43,  86,
     32,  32,  32,  32,  32,  32,  40,  43,  36,  36,  36, 103, 103, 103, 103, 103,
     43,   2,   2,   2,  44,  44,  44,  44,  41,  41,  41, 156,  40,  40,  40,  40,
     41,  32,  32,  32,  32,  32,  32,  32,  16,  32,  32,  32,  32,  32,  32,  32,
     45,  16,  16,  16,  34,  34,  34,  32,  32,  32,  32,  32,  42, 160,  34,  35,
     32,  32,  16,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  11,  11,  32,
     11,  11,  32,  32,  32,  32,  32,  32,  44,  32,  11,  11,  34, 108,  44,  44,
     44,  44,  48,  35,  40,  35,  36,  36,  36,  71,  36,  71,  36,  70,  36,  36,
     36,  92,  85,  83,  67,  67,  80,  44,  27,  27,  27,  67, 161,  44,  44,  44,
     36,  36,   2,   2,  44,  44,  44,  44,  84,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  84,  84,  84,  84,  84,  84,  84,  84,  43,  44,  44,  44,  44,   2,
     43,  36,  36,  36,   2,  72,  72,  70,  36,  36,  36,  43,  43,  43,  43,   2,
     36,  36,  36,  70,  43,  43,  43,  43,  43,  84,  44,  44,  44,  44,  44,  91,
     36,  70,  84,  43,  43,  84,  43,  84, 162,   2,   2,   2,   2,   2,   2,  52,
      7,   7,   7,   7,   7,  44,  44,   2,  36,  36,  70,  69,  36,  36,  36,  36,
      7,   7,   7,   7,   7,  36,  36,  61,  36,  36,  36,  36,  70,  43,  43,  83,
     85,  83,  85,  80,  44,  44,  44,  44,  36,  70,  36,  36,  36,  36,  83,  44,
      7,   7,   7,   7,   7,  44,   2,   2,  69,  36,  36,  77,  67,  92,  83,  36,
     71,  43,  71,  70,  71,  36,  36,  43,  70,  61,  44,  44,  44,  44,  44,  44,
     44,  44,  44,  44,  44,  62, 106,   2,  36,  36,  36,  36,  36,  92,  43,  84,
      2, 106, 163,  80,  44,  44,  44,  44,  62,  36,  36,  61,  62,  36,  36,  61,
     62,  36,  36,  61,  44,  44,  44,  44,  16,  16,  16,  16,  16, 112,  40,  40,
     16,  16,  16,  16, 109,  41,  44,  44,  36,  92,  85,  84,  83, 162,  85,  44,
     36,  36,  44,  44,  44,  44,  44,  44,  36,  36,  36,  61,  44,  62,  36,  36,
    164, 164, 164, 164, 164, 164, 164, 164, 165, 165, 165, 165, 165, 165, 165, 165,
     16,  16,  16, 108,  44,  44,  44,  44,  44, 146,  16,  16,  44,  44,  62,  71,
     36,  36,  36,  36, 166,  36,  36,  36,  36,  36,  36,  61,  36,  36,  61,  61,
     36,  62,  61,  36,  36,  36,  36,  36,  36,  41,  41,  41,  41,  41,  41,  41,
     41,  44,  44,  44,  44,  44,  44,  44,  44,  62,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36, 144,  44,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36, 161,  44,   2,   2,   2, 167, 128,  44,  44,  44,
      6, 168, 169, 144, 144, 144, 144, 144, 144, 144, 128, 167, 128,   2, 125, 170,
      2,  64,   2,   2, 150, 144, 144, 128,   2, 171,   8, 172,  66,   2,  44,  44,
     36,  36,  36,  36,  36,  36,  61,  79,  91,   2,   3,   2,   4,   5,   6,   2,
     16,  16,  16,  16,  16,  17,  18, 127, 128,   4,   2,  36,  36,  36,  36,  36,
     69,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  40,
     44,  36,  36,  36,  44,  36,  36,  36,  44,  36,  36,  36,  44,  36,  61,  44,
     20, 173,  56, 174,  26,   8, 140,  90,  44,  44,  44,  44,  79,  65,  67,  44,
     36,  36,  36,  36,  36,  36,  62,  36,  36,  36,  36,  36,  36,  61,  36,  62,
      2,  64,  44, 175,  27,  27,  27,  27,  27,  27,  44,  55,  67,  67,  67,  67,
    103, 103, 139,  27,  89,  67,  67,  67,  67,  67,  67,  67,  67,  27,  67,  90,
     67,  67,  67,  67,  67,  67,  90,  44,  90,  44,  44,  44,  44,  44,  44,  44,
     67,  67,  67,  67,  67,  67,  50,  44, 176,  27,  27,  27,  27,  27,  27,  27,
     27,  27,  27,  27,  27,  27,  44,  44,  27,  27,  44,  44,  44,  44,  62,  36,
    149,  36,  36,  36,  36, 177,  44,  44,  36,  36,  36,  43,  43,  80,  44,  44,
     36,  36,  36,  36,  36,  36,  36,  91,  36,  36,  44,  44,  36,  36,  36,  36,
    178, 103, 103,  44,  44,  44,  44,  44,  11,  11,  11,  11,  16,  16,  16,  16,
     11,  11,  44,  44,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  44,  44,
     36,  36,  44,  44,  44,  44,  44,  91,  36,  36,  36,  44,  61,  36,  36,  36,
     36,  36,  36,  62,  61,  44,  61,  62,  36,  36,  36,  91,  27,  27,  27,  27,
     36,  36,  36,  77, 157,  27,  27,  27,  44,  44,  44, 175,  27,  27,  27,  27,
     36,  61,  36,  44,  44, 175,  27,  27,  36,  36,  36,  27,  27,  27,  44,  91,
     36,  36,  36,  36,  36,  44,  44,  91,  36,  36,  36,  36,  44,  44,  27,  36,
     44,  27,  27,  27,  27,  27,  27,  27,  70,  43,  57,  80,  44,  44,  43,  43,
     36,  36,  62,  36,  62,  36,  36,  36,  36,  36,  36,  44,  43,  80,  44,  57,
     27,  27,  27,  27,  98,  44,  44,  44,   2,   2,   2,   2,  64,  44,  44,  44,
     36,  36,  36,  36,  36,  36, 179,  30,  36,  36,  36,  36,  36,  36, 179,  27,
     36,  36,  36,  36,  78,  36,  36,  36,  36,  36,  70,  80,  44, 175,  27,  27,
      2,   2,   2,  64,  44,  44,  44,  44,  36,  36,  36,  44,  91,   2,   2,   2,
     36,  36,  36,  44,  27,  27,  27,  27,  36,  61,  44,  44,  27,  27,  27,  27,
     36,  44,  44,  44,  91,   2,  64,  44,  44,  44,  44,  44, 175,  27,  27,  27,
     11,  47,  44,  44,  44,  44,  44,  44,  16, 108,  44,  44,  44,  27,  27,  27,
     36,  36,  43,  43,  44,  44,  44,  44,  27,  27,  27,  27,  27,  27,  27,  98,
     36,  36,  36,  36,  36,  57, 180,  44,  36,  44,  44,  44,  44,  44,  44,  44,
     27,  27,  27,  93,  44,  44,  44,  44, 176,  27,  30,   2,   2,  44,  44,  44,
     36,  36, 179,  27,  27,  27,  44,  44,  85,  96,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  43,  43,  43,  43,  43,  43,  43,  60,   2,   2,   2,  44,
     27,  27,  27,   7,   7,   7,   7,   7,  44,  44,  44,  44,  44,  44,  44,  57,
     84,  85,  43,  83,  85,  60, 181,   2,   2,  44,  44,  44,  44,  44,  79,  44,
     43,  71,  36,  36,  36,  36,  36,  36,  36,  36,  36,  70,  43,  43,  85,  43,
     43,  43,  80,   7,   7,   7,   7,   7,   2,   2,  92,  96,  44,  44,  44,  44,
     36,  70,   2,  61,  44,  44,  44,  44,  36,  92,  84,  43,  43,  43,  43,  83,
     96,  36,  63,   2,  59,  43,  60,  85,   7,   7,   7,   7,   7,  63,  63,   2,
    175,  27,  27,  27,  27,  27,  27,  27,  27,  27,  98,  44,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  84,  85,  43,  84,  83,  43,   2,   2,   2,  80,
     36,  36,  36,  61,  61,  36,  36,  62,  36,  36,  36,  36,  36,  36,  36,  62,
     36,  36,  36,  36,  63,  44,  44,  44,  36,  36,  36,  36,  36,  36,  36,  70,
     84,  85,  43,  43,  43,  80,  44,  44,  43,  84,  62,  36,  36,  36,  61,  62,
     61,  36,  62,  36,  36,  57,  71,  84,  83,  84,  88,  87,  88,  87,  84,  44,
     61,  44,  44,  87,  44,  44,  62,  36,  36,  84,  44,  43,  43,  43,  80,  44,
     43,  43,  80,  44,  44,  44,  44,  44,  36,  36,  92,  84,  43,  43,  43,  43,
     84,  43,  83,  71,  36,  63,   2,   2,   7,   7,   7,   7,   7,   2,  91,  71,
     84,  85,  43,  43,  83,  83,  84,  85,  83,  43,  36,  72,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  36,  36,  92,  84,  43,  43,  44,  84,  84,  43,  85,
     60,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  36,  36,  43,  44,
     84,  85,  43,  43,  43,  83,  85,  85,  60,   2,  61,  44,  44,  44,  44,  44,
      2,   2,   2,   2,   2,   2,  64,  44,  36,  36,  36,  36,  36,  70,  85,  84,
     43,  43,  43,  85,  61,  44,  44,  44,  84,  43,  43,  85,  43,  43,  44,  44,
      7,   7,   7,   7,   7,  27,   2,  95,  43,  43,  43,  43,  85,  60,  44,  44,
     27,  98,  44,  44,  44,  44,  44,  62,  36,  36,  36,  61,  62,  44,  36,  36,
     36,  36,  62,  61,  36,  36,  36,  36,  84,  84,  84,  87,  88,  57,  83,  71,
     96,  85,   2,  64,  44,  44,  44,  44,  36,  36,  36,  36,  44,  36,  36,  36,
     92,  84,  43,  43,  44,  43,  84,  84,  71,  72,  88,  44,  44,  44,  44,  44,
     70,  43,  43,  43,  43,  71,  36,  36,  36,  70,  43,  43,  83,  70,  43,  60,
      2,   2,   2,  59,  44,  44,  44,  44,  70,  43,  43,  83,  85,  43,  36,  36,
     36,  36,  36,  36,  36,  43,  43,  43,  43,  43,  43,  83,  43,   2,  72,   2,
      2,  64,  44,  44,  44,  44,  44,  44,  43,  43,  43,  80,  43,  43,  43,  85,
     63,   2,   2,  44,  44,  44,  44,  44,   2,  36,  36,  36,  36,  36,  36,  36,
     44,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  43,  87,  43,  43,  43,
     83,  43,  85,  80,  44,  44,  44,  44,  36,  36,  36,  61,  36,  62,  36,  36,
     70,  43,  43,  80,  44,  80,  43,  57,  43,  43,  43,  70,  44,  44,  44,  44,
     36,  36,  36,  62,  61,  36,  36,  36,  36,  36,  36,  36,  36,  84,  84,  88,
     43,  87,  85,  85,  61,  44,  44,  44,  36,  70,  83, 162,  64,  44,  44,  44,
     27,  27,  89,  67,  67,  67,  56,  20, 161,  67,  67,  67,  67,  67,  67,  67,
     67,  44,  44,  44,  44,  44,  44,  91, 103, 103, 103, 103, 103, 103, 103, 177,
      2,   2,  64,  44,  44,  44,  44,  44,  65,  65,  65,  65,  68,  44,  44,  44,
     43,  43,  60,  44,  44,  44,  44,  44,  43,  43,  43,  60,   2,   2,  67,  67,
     40,  40,  95,  44,  44,  44,  44,  44,   7,   7,   7,   7,   7, 175,  27,  27,
     27,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  62,  36,
     27,  27,  27,  30,   2,  64,  44,  44,  36,  36,  36,  36,  36,  61,  44,  57,
     92,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,
     84,  84,  84,  84,  44,  44,  44,  57,  43,  74,  40,  40,  40,  40,  40,  40,
     40,  86,  80,  44,  44,  44,  44,  44,  84,  44,  44,  44,  44,  44,  44,  44,
     36,  61,  44,  44,  44,  44,  44,  44,  44,  44,  36,  36,  44,  44,  44,  44,
     36,  36,  36,  36,  36,  44,  50,  60,  65,  65,  44,  44,  44,  44,  44,  44,
     67,  67,  67,  90,  55,  67,  67,  67,  67,  67, 182,  85,  43,  67, 182,  84,
     84, 183,  65,  65,  65,  82,  43,  43,  43,  76,  50,  43,  43,  43,  67,  67,
     67,  67,  67,  67,  67,  43,  43,  67,  67,  67,  67,  67,  90,  44,  44,  44,
     67,  43,  76,  44,  44,  44,  44,  44,  27,  27,  44,  44,  44,  44,  44,  44,
     11,  11,  11,  11,  11,  16,  16,  16,  16,  16,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  16,  16,  16, 108,  16,  16,  16,  16,  16,
     11,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  47,  11,
     44,  47,  48,  47,  48,  11,  47,  11,  11,  11,  11,  16,  16, 146, 146,  16,
     16,  16, 146,  16,  16,  16,  16,  16,  16,  16,  11,  48,  11,  47,  48,  11,
     11,  11,  47,  11,  11,  11,  47,  16,  16,  16,  16,  16,  11,  48,  11,  47,
     11,  11,  47,  47,  44,  11,  11,  11,  47,  16,  16,  16,  16,  16,  16,  16,
     16,  16,  16,  16,  16,  16,  11,  11,  11,  11,  11,  16,  16,  16,  16,  16,
     16,  16,  16,  44,  11,  11,  11,  11,  31,  16,  16,  16,  16,  16,  16,  16,
     16,  16,  16,  16,  16,  33,  16,  16,  16,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  31,  16,  16,  16,  16,  33,  16,  16,  16,  11,  11,
     11,  11,  31,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  33,
     16,  16,  16,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  31,
     16,  16,  16,  16,  33,  16,  16,  16,  11,  11,  11,  11,  31,  16,  16,  16,
     16,  33,  16,  16,  16,  32,  44,   7,   7,   7,   7,   7,   7,   7,   7,   7,
     43,  43,  43,  76,  67,  50,  43,  43,  43,  43,  43,  43,  43,  43,  76,  67,
     67,  67,  50,  67,  67,  67,  67,  67,  67,  67,  76,  21,   2,   2,  44,  44,
     44,  44,  44,  44,  44,  57,  43,  43,  43,  43,  43,  80,  43,  43,  43,  43,
     43,  43,  43,  43,  80,  57,  43,  43,  43,  57,  80,  43,  43,  80,  44,  44,
     43,  43,  43,  74,  40,  40,  40,  44,   7,   7,   7,   7,   7,  44,  44,  77,
     36,  36,  36,  36,  36,  36,  43,  43,   7,   7,   7,   7,   7,  44,  44,  94,
     36,  36,  61, 175,  27,  27,  27,  27,  43,  43,  43,  80,  44,  44,  44,  44,
     16,  16,  43,  43,  43,  74,  44,  44,  27,  27,  27,  27,  27,  27, 157,  27,
    184,  27,  98,  44,  44,  44,  44,  44,  27,  27,  27,  27,  27,  27,  27, 157,
     27,  27,  27,  27,  27,  27,  27,  44,  36,  36,  62,  36,  36,  36,  36,  36,
     62,  61,  61,  62,  62,  36,  36,  36,  36,  61,  36,  36,  62,  62,  44,  44,
     44,  61,  44,  62,  62,  62,  62,  36,  62,  61,  61,  62,  62,  62,  62,  62,
     62,  61,  61,  62,  36,  61,  36,  36,  36,  61,  36,  36,  62,  36,  61,  61,
     36,  36,  36,  36,  36,  62,  36,  36,  62,  36,  62,  36,  36,  62,  36,  36,
      8,  44,  44,  44,  44,  44,  44,  44,  55,  67,  67,  67,  67,  67,  67,  67,
     27,  27,  27,  27,  27,  27,  89,  67,  67,  67,  67,  67,  67,  67,  67,  44,
     44,  44,  44,  67,  67,  67,  67,  67,  67,  90,  44,  44,  44,  44,  44,  44,
     67,  44,  44,  44,  44,  44,  44,  44,  67,  67,  67,  67,  67,  25,  41,  41,
     67,  67,  67,  67,  44,  44,  44,  44,  67,  67,  67,  67,  90,  67,  67,  67,
     67,  67,  67,  67,  67,  67,  55,  67,  67,  67,  90,  44,  67,  90,  44,  44,
     67,  90,  67,  67,  67,  67,  67,  67,  79,  44,  44,  44,  44,  44,  44,  44,
     65,  65,  65,  65,  65,  65,  65,  65, 165, 165, 165, 165, 165, 165, 165,  44
};

static UINT16 general_category_table_3[3008] = {
      0,   0,   1,   2,   3,   4,   5,   6,   0,   0,   7,   8,   9,  10,  11,  12,
     13,  13,  13,  14,  15,  13,  13,  16,  17,  18,  19,  20,  21,  22,  13,  23,
     13,  13,  13,  24,  25,  11,  11,  11,  11,  26,  11,  27,  28,  29,  30,  31,
     32,  32,  32,  32,  32,  32,  32,  33,  34,  35,  36,  11,  37,  38,  13,  39,
      9,   9,   9,  11,  11,  11,  13,  13,  40,  13,  13,  13,  41,  13,  13,  13,
     13,  13,  13,  42,   9,  43,  11,  11,  44,  45,  32,  46,  47,  48,  49,  50,
     51,  52,  48,  48,  53,  32,  54,  55,  48,  48,  48,  48,  48,  56,  57,  58,
     59,  60,  48,  32,  61,  48,  48,  48,  48,  48,  62,  63,  64,  48,  65,  66,
     48,  67,  68,  69,  48,  70,  71,  72,  72,  72,  48,  73,  74,  75,  76,  32,
     77,  48,  48,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90,
     91,  84,  85,  92,  93,  94,  95,  96,  97,  98,  85,  99, 100, 101,  89, 102,
    103,  84,  85, 104, 105, 106,  89, 107, 108, 109, 110, 111, 112, 113,  95, 114,
    115, 116,  85, 117, 118, 119,  89, 120, 121, 116,  85, 122, 123, 124,  89, 125,
    126, 116,  48, 127, 128, 129,  89, 130, 131, 132,  48, 133, 134, 135,  95, 136,
    137,  48,  48, 138, 139, 140,  72,  72, 141,  48, 142, 143, 144, 145,  72,  72,
    146, 147, 148, 149, 150,  48, 151, 152, 153, 154,  32, 155, 156, 157,  72,  72,
     48,  48, 158, 159, 160, 161, 162, 163, 164, 165,   9,   9, 166,  11,  11, 167,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48, 168, 169,  48,  48, 168,  48,  48, 170, 171, 172,  48,  48,
     48, 171,  48,  48,  48, 173, 174, 175,  48, 176,   9,   9,   9,   9,   9, 177,
    178,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48, 179,  48, 180, 181,  48,  48,  48,  48, 182, 183,
    184, 185,  48, 186,  48, 187, 184, 188,  48,  48,  48, 189, 190, 191, 192, 193,
    194, 192,  48,  48, 195,  48,  48, 196, 197,  48, 198,  48,  48,  48,  48, 199,
     48, 200, 201, 202, 203,  48, 204, 205,  48,  48, 206,  48, 207, 208, 209, 209,
     48, 210,  48,  48,  48, 211, 212, 213, 192, 192, 214, 215, 216,  72,  72,  72,
    217,  48,  48, 218, 219, 160, 220, 221, 222,  48, 223,  64,  48,  48, 224, 225,
     48,  48, 226, 227, 228,  64,  48, 229, 230,   9,   9, 231, 232, 233, 234, 235,
     11,  11, 236,  27,  27,  27, 237, 238,  11, 239,  27,  27,  32,  32,  32, 240,
     13,  13,  13,  13,  13,  13,  13,  13,  13, 241,  13,  13,  13,  13,  13,  13,
    242, 243, 242, 242, 243, 244, 242, 245, 246, 246, 246, 247, 248, 249, 250, 251,
    252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 262,  72, 263, 264, 216,
    265, 266, 267, 268, 269, 270, 271, 271, 272, 273, 274, 209, 275, 276, 209, 277,
    278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
    279, 209, 280, 209, 209, 209, 209, 281, 209, 282, 278, 283, 209, 284, 285, 209,
    209, 209, 286,  72, 287,  72, 270, 270, 270, 288, 209, 209, 209, 209, 289, 270,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 290, 291, 209, 209, 292,
    209, 209, 209, 209, 209, 209, 293, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    209, 209, 209, 209, 209, 209, 294, 295, 270, 296, 209, 209, 297, 278, 298, 278,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    278, 278, 278, 278, 278, 278, 278, 278, 299, 300, 278, 278, 278, 301, 278, 302,
    278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278, 278,
    209, 209, 209, 278, 303, 209, 209, 304, 209, 305, 209, 209, 209, 209, 209, 209,
      9,   9, 306,  11,  11, 307, 308, 309,  13,  13,  13,  13,  13,  13, 310, 311,
     11,  11, 312,  48,  48,  48, 313, 314,  48, 315, 316, 316, 316, 316,  32,  32,
    317, 318, 319, 320, 321, 322,  72,  72, 209, 323, 209, 209, 209, 209, 209, 324,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 325,  72, 326,
    327, 328, 329, 330, 137,  48,  48,  48,  48, 331, 178,  48,  48,  48,  48, 332,
    333,  48,  48, 137,  48,  48,  48,  48, 200, 334,  48,  48, 209, 209, 324,  48,
    209, 335, 336, 209, 337, 338, 209, 209, 336, 209, 209, 338, 209, 209, 209, 209,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 209, 209, 209, 209,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 151,
     48, 339,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48, 151, 209, 209, 209, 286,  48,  48, 229,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
    340,  48, 341,  72,  13,  13, 342, 343,  13, 344,  48,  48,  48,  48, 345, 346,
     31, 347, 348, 349,  13,  13,  13, 350, 351, 352, 353, 354, 355,  72,  72, 356,
    357,  48, 358, 359,  48,  48,  48, 360, 361,  48,  48, 362, 363, 192,  32, 364,
     64,  48, 365,  48, 366, 367,  48, 151,  77,  48,  48, 368, 369, 370, 371, 372,
     48,  48, 373, 374, 375, 376,  48, 377,  48,  48,  48, 378, 379, 380, 381, 382,
    383, 384, 316,  11,  11, 385, 386,  11,  11,  11,  11,  11,  48,  48, 387, 192,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 388,  48, 389,  48,  48, 206,
    390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390,
    390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390, 390,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48, 204,  48,  48,  48,  48,  48,  48, 207,  72,  72,
    392, 393, 394, 395, 396,  48,  48,  48,  48,  48,  48, 397, 398, 399,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48, 400,  72,  48,  48,  48,  48, 401,  48,  48,  74,  72,  72, 402,
     32, 403,  32, 404, 405, 406, 407,  73,  48,  48,  48,  48,  48,  48,  48, 408,
    409,   2,   3,   4,   5, 410, 411, 412,  48, 413,  48, 200, 414, 415, 416, 417,
    418,  48, 172, 419, 204, 204,  72,  72,  48,  48,  48,  48,  48,  48,  48,  71,
    420, 270, 270, 421, 271, 271, 271, 422, 423, 424, 425,  72,  72, 209, 209, 426,
     72,  72,  72,  72,  72,  72,  72,  72,  48, 151,  48,  48,  48, 101, 427, 428,
     48,  48, 429,  48, 430,  48,  48, 431,  48, 432,  48,  48, 433, 434,  72,  72,
      9,   9, 435,  11,  11,  48,  48,  48,  48, 204, 192,   9,   9, 436,  11, 437,
     48,  48,  74,  48,  48,  48, 438,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48, 315,  48, 199,  74,  72,  72,  72,  72,  72,  72,  72,  72,  72,
    439,  48,  48, 440,  48, 441,  48, 442,  48, 200, 443,  72,  72,  72,  48, 444,
     48, 445,  48, 446,  72,  72,  72,  72,  48,  48,  48, 447, 270, 448, 270, 270,
    449, 450,  48, 451, 452, 453,  48, 454,  48, 455,  72,  72, 456,  48, 457, 458,
     48,  48,  48, 459,  48, 460,  48, 461,  48, 462, 463,  72,  72,  72,  72,  72,
     48,  48,  48,  48, 196,  72,  72,  72,   9,   9,   9, 464,  11,  11,  11, 465,
     48,  48, 466, 192,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72, 270, 467,  48,  48, 468, 469,  72,  72,  72,  72,
     48, 455, 470,  48,  62, 471,  72,  72,  72,  72,  72,  48, 472,  72,  48, 315,
    473,  48,  48, 474, 475, 448, 476, 477, 222,  48,  48, 478, 479,  48, 196, 192,
    480,  48, 481, 482, 483,  48,  48, 484, 222,  48,  48, 485, 486, 487, 488, 489,
     48,  98, 490, 491,  72,  72,  72,  72, 492, 493, 494,  48,  48, 495, 496, 192,
    497,  84,  85, 498, 499, 500, 501, 502,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48, 503, 504, 505, 469,  72,  48,  48,  48, 506, 507, 192,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  48,  48, 508, 509, 510, 511,  72,  72,
     48,  48,  48, 512, 513, 192, 514,  72,  48,  48, 515, 516, 192,  72,  72,  72,
     48, 173, 517, 518,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48, 490, 519,  72,  72,  72,  72,  72,  72,   9,   9,  11,  11, 148, 520,
    521, 522,  48, 523, 524, 192,  72,  72,  72,  72, 525,  48,  48, 526, 527,  72,
    528,  48,  48, 529, 530, 531,  48,  48, 532, 533, 534,  72,  48,  48,  48, 196,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     85,  48, 508, 535, 536, 148, 175, 537,  48, 538, 539, 540,  72,  72,  72,  72,
    541,  48,  48, 542, 543, 192, 544,  48, 545, 546, 192,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  48, 547,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72, 101, 270, 548, 549, 550,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48, 207,  72,  72,  72,  72,  72,  72,
    271, 271, 271, 271, 271, 271, 551, 552,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48, 388,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48, 200, 553,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48,  48, 315,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48, 196,  48, 200, 370,  72,  72,  72,  72,  72,  72,  48, 204, 554,
     48,  48,  48, 555, 556, 557, 558, 559,  48,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,   9,   9,  11,  11, 270, 560,  72,  72,  72,  72,  72,  72,
     48,  48,  48,  48, 561, 562, 563, 563, 564, 565,  72,  72,  72,  72, 566, 567,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  74,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 199,  72,  72,
    196,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48, 200,  72,  72,  72, 568, 569,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 206,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48,  48,  48,  48,  71, 151, 196, 570, 571,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 325,
    209, 209, 572, 209, 209, 209, 573, 574, 575, 209, 576, 209, 209, 209, 577,  72,
    209, 209, 209, 209, 578,  72,  72,  72,  72,  72,  72,  72,  72,  72, 270, 579,
    209, 209, 209, 209, 209, 286, 270, 452,  72,  72,  72,  72,  72,  72,  72,  72,
      9, 580,  11, 581, 582, 583, 242,   9, 584, 585, 586, 587, 588,   9, 580,  11,
    589, 590,  11, 591, 592, 593, 594,   9, 595,  11,   9, 580,  11, 581, 582,  11,
    242,   9, 584, 594,   9, 595,  11,   9, 580,  11, 596,   9, 597, 598, 599, 600,
     11, 601,   9, 602, 603, 604, 605,  11, 606,   9, 607,  11, 608, 609, 609, 609,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209,
     32,  32,  32, 610,  32,  32, 611, 612, 613, 614,  45,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
    615, 616, 617,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48, 151, 618, 619,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  48,  48, 620, 621,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 622, 623,  72,  72,
      9,   9, 584,  11, 624, 370,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72, 488, 270, 270, 625, 626,  72,  72,  72,  72,
    488, 270, 627, 628,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
    629,  48, 630, 631, 632, 633, 634, 635, 636, 206, 637, 206,  72,  72,  72, 638,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
    209, 209, 326, 209, 209, 209, 209, 209, 209, 324, 335, 639, 639, 639, 209, 325,
    640, 209, 209, 209, 209, 209, 209, 209, 209, 209, 641,  72,  72,  72, 642, 209,
    643, 209, 209, 326, 577, 644, 325,  72,  72,  72,  72,  72,  72,  72,  72,  72,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 645,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 209, 646, 424, 424,
    209, 209, 209, 209, 209, 209, 209, 324, 209, 209, 209, 209, 209, 577, 326,  72,
    326, 209, 209, 209, 646, 176, 209, 209, 646, 209, 641, 644,  72,  72,  72,  72,
    209, 209, 209, 209, 209, 209, 209, 647, 209, 209, 209, 209, 648, 209, 209, 209,
    209, 209, 209, 209, 209, 324, 641, 649, 286, 209, 577, 286, 643, 286,  72,  72,
    209, 209, 209, 209, 209, 209, 209, 209, 209, 650, 209, 209, 287,  72,  72, 192,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 204,  72,  72,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48, 205,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48, 204,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 469,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48, 101,  72,
     48, 204,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
     48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  71,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,
    651,  72, 652, 652, 652, 652, 652, 652,  72,  72,  72,  72,  72,  72,  72,  72,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  72,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
    391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 391, 653
};

static UINT8 general_category_table_4[2176] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  27,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  28,
     29,  26,  30,  31,  32,  33,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  34,  35,  35,  35,  35,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  37,  38,  39,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,
     26,  57,  58,  59,  59,  59,  59,  59,  26,  26,  60,  59,  59,  59,  59,  59,
     59,  59,  26,  61,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  26,  62,  59,  63,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  64,  26,  26,  65,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  66,  67,  59,  59,  59,  59,  68,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  69,  70,  71,  72,  73,  74,  59,  59,
     75,  76,  59,  59,  77,  59,  78,  79,  80,  81,  73,  82,  83,  84,  59,  59,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  85,  26,  26,  26,  26,  26,  26,  26,  86,  87,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  88,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  89,  59,  59,  59,  59,  59,  59,  26,  90,  59,  59,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  91,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     92,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  93,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  93
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

static UINT8 graph_table_1[348] = {
      0,   0, 254, 255, 255, 255, 255, 127, 255, 252, 240, 215, 251, 255, 127, 254,
    255, 231, 255,   0, 255, 135,  31,   0, 255, 223, 255, 191,   3,   0, 255,  63,
    255,  79, 255,   7, 223, 255, 248, 255, 239, 159, 249, 255, 255, 253, 197, 243,
    159, 121, 128, 176, 207, 255, 238, 135, 109, 211, 135,  57,   2,  94, 192, 255,
    127,   0, 238, 191, 237, 243, 191,  59,   1,   0,   3, 254, 238, 159, 159,  57,
    224, 176, 236, 199,  61, 214,  24, 199, 255, 195, 199,  61, 129,   0, 253, 255,
    255, 227, 223,  61,  96,   7, 128, 255, 239, 243,  96,  64,   6,   0, 223, 253,
    240, 255, 238, 255, 127, 252, 251,  47, 127, 132,  95, 255,  28,   0, 255,  15,
    214, 247, 175, 255,  95,  63, 255, 243, 255, 254, 255,  31, 191,  32, 255,  61,
    127,  61,  61, 127,  61, 255, 127, 255, 255,   3,  63,  63, 255,   1,  15,   0,
     13,   0,  63,   0, 241, 255, 255, 199, 255, 207, 255, 159,  15, 240, 255, 248,
    255, 251, 255, 170, 207, 239, 220, 127, 243, 255, 191, 255,  15, 254, 255, 128,
      1, 128, 127, 127,   7,   0, 224, 255, 252,   7,  63, 192,  15, 128,   0, 248,
    126, 126, 126,   0, 127, 248, 248, 224, 127,  95, 219, 255, 252, 255, 247, 255,
    127,  15, 252, 252, 252,  28,   0,  62, 255, 239, 255, 183, 135, 255, 143, 255,
     15, 224,  15, 255,  63, 253, 191, 145,  55, 248, 255, 143, 255, 131, 255, 240,
    111, 240, 239, 254,  63, 135,  63, 254,  63, 255,   7, 255,   3,  30,   0, 254,
      7, 252, 255,  59,   0, 128,   3,  32, 127, 189, 237, 251, 129, 224, 207,  31,
      7, 128, 127, 242, 111, 255, 191, 249, 127, 251, 127, 180, 191, 253, 251,   1,
      3, 128, 255, 224, 240,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223,
    255, 123,  95, 252, 255, 249, 219,   7, 159, 255, 150, 254, 247,  10, 132, 234,
    150, 170, 150, 247, 247,  94, 238, 251,  31,   7,   2,   0
};

static UINT8 graph_table_2[1632] = {
      0,   0,   1,   2,   2,   2,   2,   3,   0,   0,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   4,
      5,   2,   6,   2,   2,   2,   2,   2,   2,   2,   2,   1,   2,   7,   2,   2,
      8,   1,   2,   2,   9,   2,  10,  11,   2,  12,   2,   2,   2,   2,   2,   2,
     13,   2,   2,   2,   8,   2,   2,   2,   2,   2,   2,  14,   2,   2,   2,   8,
      2,   2,  15,   3,   2,  16,  17,   0,   0,   0,   2,  18,   9,  19,   2,   2,
     20,  21,  22,  23,  24,  25,  26,   3,  27,  21,  22,  28,  29,  30,  31,  32,
     33,   6,  22,  34,  35,  36,  26,  37,  38,  21,  22,  34,  39,  40,  26,   9,
     41,  42,  43,  44,  45,  46,  31,  17,  12,  47,  22,  48,  49,  50,  26,  51,
     12,  47,  22,  52,  49,  53,  26,  54,  12,  47,   2,   2,  55,  56,  26,   2,
     57,  58,   2,  59,  60,  61,  31,  62,   1,   2,   2,  10,   2,  63,   0,   0,
     64,   2,  65,  15,  66,  67,   0,   0,   2,   2,   2,   2,  68,   2,  69,   1,
      2,  68,   2,  12,  12,  17,   0,   0,   2,   2,   2,   2,  70,   2,   2,   2,
      2,   2,   2,   2,  71,  72,   2,   2,  71,   2,   2,  73,  74,  75,   2,   2,
      2,  74,   2,   2,   2,   8,   2,  69,   2,  76,   2,   2,   2,   2,   2,  77,
      2,  69,   2,   2,   2,   2,   2,  78,  12,  11,   2,  32,   2,  79,  12,  80,
      2,   2,   2,   2,   2,  15,  76,  76,   3,  76,   2,   2,   2,   2,   2,  78,
      2,   2,  17,   2,   2,   2,   2,  81,   2,   3,  63,  63,  82,   2,  15,  11,
      2,   2,  63,   2,  76,  83,   2,   2,   2,  84,   2,   2,   2,   3,   2,  85,
     76,  76,  15,   2,  36,   0,   0,   0,   2,   2,   2,   2,  63,   2,   2,  69,
      2,   2,   2,   2,   2,   2,   2,  86,   2,   2,   2,  87,  48,   2,   2,   2,
     78,   2,   2,   8,   9,   2,   2,  17,   2,   2,   2,   2,   2,   2,   2,  88,
      2,  77,   2,   2,  77,  89,   2,  15,   2,   2,   2,  18,  18,  90,   2,  91,
      2,   2,   2,   2,   2,   2,  18,  92,   3,  69,   2,   2,   0,   2,   2,  36,
     63,   2,   2,   2,   2,   2,   2,   2,   2,   2,  32,   0,  17,   0,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  26,   2,  93,   2,   2,   2,   2,   2,   2,
      2,   2,   3,   2,   2,   3,   2,   2,   2,   2,   2,   2,   2,   2,   2,  94,
      2,   2,  70,   2,   2,   2,  95,  96,   2,  32,  97,  97,  97,  97,   2,   2,
      2,   2,   2,   2,   2,  98,   0,   0,   2,  88,   2,   2,   2,   2,   2,  79,
      2,   2,   2,   2,   2,  81,   0,  63,   2,   2,   2,   2,   1,   2,   2,   2,
      2,   7,   2,   2,   2,   2,   2,   2,  99,   2,   2,   1,   2,   2,   2,   2,
      3,   2,   2,   2,   2,   2,  79,   2,   2,   3,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  69,  69,   2,   2,   2,  32,   2,   2,   2,
      2,   2,  63,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   9,
      2,   2,   2,   2, 100,   0,   0,  99,   2,   2,  69,  76,   2,   2,   2,   9,
      2,   2,   2,   2, 101,  76,   2,   2,   2,   2,   2,   2,   2, 102,   2,  69,
      2,   2,   2,   2,  13,  44,   2,   3,   2,   2,   2,  32,  15,  67,   2,   2,
      2,   2,   2,   2,  98, 103,   2,  32, 104, 105,  97,   2,   2,   2,  63,   2,
      2,   2,   2,   2,   2,   2,  15,  76,   2,   2,  79,   2, 106,   2,   2,  63,
      0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,  15,   2,
      2,   2,   2,   2,   2,  76,   0,   0,  32, 107,   2, 108, 109,   2,   2,   2,
      2,   2,   2,   2,  14,  19,   2,   2,   2,   2,   2,   2,   0,   2,   2,   2,
      2, 110,   2,   2,   9,   0,   0,  15,   2,  76,   2,   2,   2, 111, 112,  18,
      2,   2,   2,   2,   2,   2,   2,  85,   1,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   3, 113, 114,  97, 115, 116,   2,  75, 117,  15,  15,   0,   0,
      2,   2,   2,   2,   2,   2,   2,  17, 118,   2,   2, 119,   2,   2,   2,   2,
      3,  69,  36,   0,   0,   2,   2,  15,   2,  69,   2,   2,   2,  36,   2,  63,
      2,   2, 120,   2,  17,   2,   2,  17,   2,  13,   2,   2, 121,  81,   0,   0,
      2,  15,  76,   2,   2, 121,   2,  63,   2,   2,   9,   2,   2,   2, 102,   0,
      2,   2,   2,  32,   2,  81,   9,   0, 122,   2,   2, 123,   2,  93,   2,   2,
      2,   3,  51,   0,   0,   0,   2, 124,   2, 125,   2, 126,   0,   0,   0,   0,
      2,   2,   2, 127,   2, 110,   2,   2, 128, 129,   2, 130,  78,  78,   2,   2,
      2,   2,   0,   0,   2,   2, 106,  32,   2,   2,   2, 131,   2, 132,   2, 133,
      2, 134, 135,   0,   0,   0,   0,   0,   2,   2,   2,   2,  78,   0,   0,   0,
      2,   2,   2,  98,   2,   2,   2, 136,   2,   2,   9,  76,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   2,   3,   2,   2, 137,  14,   0,   0,   0,   0,
      2,   2,   9,   2,   2,  76,   0,   0,   0,   0,   0,   2,  63,   0,   2,  32,
      2,   2,   2,   2,  15, 110,   2, 138,   2,   2,   2,   2, 139,   2,  78,  76,
      2,   2,   2,  18,   9,   2,   2,  32,   2,   2,   2,   2,   2,   2,   1,  11,
      2,   6,   2,   3,   0,   0,   0,   0, 140,  13,  76,   2,   2,   2,  17,  76,
     20,  21,  22, 141,  39, 142, 143,  11,   2,   2,   2,   2,   2, 116,  14,   0,
      2,   2,   2,   2,   9,  76,   0,   0,   2,   2,   2, 132,   2,  15,   0,   0,
      2,   2,   2,   2,  11,  76,  69,   0,   2,   2,   2,  78,  76,   0,   0,   0,
      2,   8,  63,   2,   0,   0,   0,   0,   2,   2,   2,  63,   0,   0,   0,   0,
      0,   0,   2,   2,   2,   2,   2, 144, 145, 146,   2, 147,  32,  76,   0,   0,
      0,   0,   4,   2,   2,   4,  11,   0,   2,   2,   2,   2,   9,   2,   2,   2,
      2,   2,  98,   0,   2,   2,   2,  78,  22,   2,   2,  75,  81,   2,  69,   2,
      2, 110,  68,  32,   0,   0,   0,   0, 148,   2,   2, 149,   9,  76, 150,   2,
      3, 151,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  78,
      0,   0,   0,  36,   2,   2,   2, 152,   2,  76,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,   3,  11,   2,   2,   2,   2,  79,   0,   0,   0,
      2,   2,   3,  78,   0,   0,   0,   0,   2,   2,   2,   2,  32,   0,   0,   0,
      2,   2,   2,  78,   2,   3,  44,   0,   0,   0,   0,   0,   0,   2,  15,  81,
      2,   2,   2,   2,  81,  88,   6, 153,   2,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   2,   2,   2,   2,   2,  17,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,  10,   2,   2,   2,  95,   2,   0,   0,   0,   0,  11,  14,
      2,   2,   2,   2,   2,  81,   0,   0,  78,   0,   0,   0,   0,   0,   0,   0,
      2,   3,   0,   0,   0,  98, 154,   2,   2,   2,   2,   2,   2,   2,   2,  63,
      2,   2,   2,   2,   2,   2,  17,  69,  78,  67,  79,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,   2,  81,   2,   2,   7,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  78,   0,   2,   2,   2,   2,  81,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   2,  79,   2,   2,   2,   2,   2,  32,   2,  78,
      2,   2,   2,   2,   2,  18,   2,   2,   2,  12, 155, 156, 157,   2,   2,   2,
    158, 159,   2, 160, 161,  47,   2,   2,   2,   2, 132,   2,   2,   2,   2,   2,
      2,   2,   2,   2,  84,   2,   2,   2,  63, 103,   1,   0,   0,   0,   0,   0,
     75, 162, 163,   0,   0,   0,   0,   0,   2,   2,  69,  15,  44,   0,   0,   0,
      0,   0,   0,   0,   2,   2,   2, 126,   2,   2,   2,   2, 164,  32,   0,   0,
      2,   2,   2,   2,  63,  44,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      2,   2,   2,  11,   0,   0,   0,   0,   1,   2,   2,  15,   0,   0,   0,   0,
    157,   2, 165, 166, 167, 168, 169, 170,  88,  63, 171,  63,   0,   0,   0,  14,
      2,   2,  63,   2,   2,   2,   2,   2,   2,  79,   3,   1,   1,   1,   2,  81,
      2,   2,  15,   0,   0,   0,  31,   2,  98,   2,   2,  63,  78,  14,  81,   0,
      2,   2,   2,   2,   2,   9,  69,  69,   2,   2,   2,   2,   2,   2,   2,  79,
      2,   2,   2,   2,   2,  78,  63,   0,  63,   2,   2,   2,   9,  76,   2,   2,
      9,   2,  15,  14,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,  22,
      2,   2,   2,   2, 116,   2,   2,   2,   2,   2,   2,   2,   2,  79,  15, 172,
     32,   2,  78,  32,  98,  32,   0,   0,   2, 111,   2,   2,  17,   0,   0,  76,
      2,   2,   2,   2,   2,  15,   0,   0,   2,   2,   2,  11,   2,   2,   2,   2,
      2,  15,   2,   2,   2,   2,   2,   2,   2,   2,  14,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  36,   0,   2,  15,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,  17,   0,   0,   0, 173,   0,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   0,   2,   2,   2,   2,   2,   2,   2,  15
};

static UINT8 graph_table_3[656] = {
      0,   1,   2,   2,   2,   2,   3,   4,   2,   2,   5,   6,   7,   2,   8,   9,
     10,  11,   2,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,
      2,  25,   2,   2,  26,  27,  28,  29,   2,   2,   2,   2,   2,  30,  31,  32,
     33,  34,  35,  36,  37,  38,  39,  40,  41,  42,   2,  43,   2,   2,  44,  45,
     46,  47,   2,  48,   2,   2,   2,   2,  49,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  50,  51,  52,  53,  54,  55,  56,  57,   2,  58,
     59,  60,  61,  62,  63,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  64,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  65,   2,   2,  66,  67,   2,  68,
     69,  70,  71,  72,  73,  74,  75,  76,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  77,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,  79,  80,  81,  82,   2,   2,  83,  84,  85,  86,  87,  88,
     89,  90,  91,  92,  78,  93,  94,  95,   2,  96,  97,  78,   2,   2,  98,  78,
     99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,  78, 110, 111, 112, 113,
    114, 115, 116, 117, 118, 119, 120,  78, 121, 122,  78, 123, 124, 125, 126,  78,
    127, 128, 129, 130, 131, 132,  78,  78, 133, 134, 135, 136,  78, 137,  78, 138,
      2,   2,   2,   2,   2,   2,   2, 139, 140,   2, 141,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2,   2,   2, 142,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,   2,   2,   2,   2, 143,  78,  78,  78,
      2,   2,   2,   2, 144, 145, 146, 147,  78,  78,  78,  78, 148, 149, 150, 151,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  67,
      2,   2,   2,   2,   2,   2,   2,   2,   2, 152, 153,  78,  78,  78,  78,  78,
      2,   2, 154,   2,   2, 155,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78, 156, 157,  78,  78,  78,  78,  78,  78,
      2, 158, 159, 160, 161, 162, 163,  78, 164, 165, 166,   2,   2, 167,   2, 168,
      2,   2,   2,   2,   2, 169,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
    170,  78, 171,  78,  78, 172,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2, 173, 174,  78,  78,  78,  78,  78, 175, 176, 177,  78, 178, 179,  78,  78,
    180, 181,   2, 182, 183,  78,   2,   2,   2,   2,   2,   2,   2, 184, 185, 186,
    187, 188, 189, 190, 191, 192,   2, 193,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 194,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 195,   2,
    196,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 197,   2,   2,
      2,   2,   2,   2,   2,   2,   2, 198,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2, 199,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2, 200,  78,  78,  78,  78,  78,  78,  78,  78,  78,
    201,  78,   2, 202,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 203
};

static UINT8 graph_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   8,   9,  10,   7,   7,   7,   7,  11,  12,   7,   7,   7,  13,
     14,  15,  16,  17,  18,  12,  19,  12,  20,  12,  12,  12,  12,  21,   7,   7,
     22,  23,  12,  12,  12,  12,  24,  25,  12,  12,  26,  27,  28,  29,  30,  31,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  32,   7,  33,  34,   7,  35,   7,   7,   7,  36,  12,  37,
      7,   7,  38,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
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
     39,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  40,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  40
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

static UINT8 grapheme_base_table_1[3280] = {
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 127,
      0,   0,   0,   0, 255, 223, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 252,
    240, 215, 255, 255, 251, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
      7, 252, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 254, 255, 255, 255, 127, 254, 255, 255, 255, 255,
    255, 231,   0,   0,   0,   0,   0,  64,  73,   0, 255, 255, 255, 135,  31,   0,
    192, 255,   0, 200, 255, 255, 255, 255, 255,   7,   0,   0, 255, 255, 254, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,  64,  96, 194, 255, 255,
    255,  63, 253, 255, 255, 255,   0,   0,   0, 224, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255,  63,   0,   2,   0, 255, 255, 255, 255, 255,   7, 240, 199,
    255, 255,  63,   4,  16,   1, 255, 127, 255, 255, 255,  65, 255,   7,   0,   0,
      0,   0,   0,   0, 255, 255, 223, 255, 255,   0,   0,   0,   0,   0,   0,   0,
    248, 255, 255, 255, 255, 255, 255, 235,   1, 222,   1, 255, 243, 255, 255, 255,
    237, 159, 249, 255, 255, 253, 197, 163, 129,  89,   0, 176, 195, 255, 255,  63,
    232, 135, 249, 255, 255, 253, 109, 195,   1,   0,   0,  94, 192, 255,  92,   0,
    232, 191, 251, 255, 255, 253, 237, 227,   1,  26,   1,   0, 195, 255,   3,   2,
    236, 159, 249, 255, 255, 253, 237,  35, 129,  25,   0, 176, 195, 255, 255,   0,
    232, 199,  61, 214,  24, 199, 255, 131, 198,  29,   1,   0, 192, 255, 255,   7,
    238, 223, 253, 255, 255, 253, 255,  35,  30,   0,   0,   7, 195, 255, 128, 255,
    253, 223, 253, 255, 255, 253, 239,  99, 155,  13,   0,  64, 195, 255,   6,   0,
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
    255, 223,   3,   0, 255, 255,  99,   0, 255, 255,   3,   0, 255, 223,   1,   0,
    255, 255, 255, 255, 255, 255,  79, 192, 191,   1, 240,  31, 255,   3, 255,   3,
    255,   7, 255,   3, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1,
    159, 255, 255, 255, 255,   5, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 127, 120,  14, 251,   1, 241, 255, 255, 255, 255,  63,  31,   0,
    255, 255, 255, 255, 255,  15, 255, 255, 255,   3, 255, 199, 255, 255, 255, 255,
    255, 255, 127, 198, 255, 255, 255, 255, 255, 255, 191,   0,  26, 224,   7,   0,
    255,   3, 255,   3, 255,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    240, 255, 255, 255, 255, 255,  15, 232, 251,  15, 255, 255, 255,   7, 240,  31,
    252, 255, 255, 255, 195, 196, 255, 255, 255, 255, 255, 255, 191,  92,  12, 240,
    255, 255, 255, 255, 255,  15,  48, 248, 255, 227, 255, 255, 255, 255, 255, 255,
    255,   1, 255, 255, 255, 255, 255, 231, 255,   0,   8,   0,   2, 222, 239,   4,
    255, 255, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255,  63,  63, 255, 255, 255, 255,  63,  63, 255, 170, 255, 255, 255,  63,
    255, 255, 255, 255, 255, 255, 223, 255, 223, 255, 207, 239, 255, 255, 220, 127,
    255,   7, 255, 255, 255, 128, 255, 255, 255, 255, 255, 255,   0,   0, 243, 255,
    255, 127, 255,  31, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0,
    255,  15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 127,   0,   0,   0, 255,   7,   0,   0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 207, 255,
    255, 255, 191, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 127, 255, 255, 255, 255, 255, 127, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 127,  12, 254,
    255, 255, 255, 255, 191,  32, 255, 255, 255, 255, 255, 255, 255, 128,   1,   0,
    255, 255, 127,   0, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   7,   0,   0,   0,   0,   0,
    255, 255, 255, 251, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0, 255,  15,
    255, 255, 255, 255, 255,   3, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 127, 248, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    224, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 127, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0, 255, 255,
    255, 255, 255, 127, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  31,
    255,  31, 255, 255, 255, 255, 255, 255, 127,   0, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255,  15,   0,   0, 255, 255, 255, 255, 255, 127,   8, 192,
    255, 255, 255,  63, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 252,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 252,   7,   0,   0,   0,   0, 224, 255,
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
    255, 255, 255, 255, 255, 255, 255, 255,   3,   0, 248, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255,   0,   0, 255, 255, 255, 255, 255, 255,
    255, 255, 252, 255, 255, 255, 255, 255, 255,   0,   0,   0,   0,   0, 255,  63,
      0,   0, 255,   3,   0,   0, 255, 255, 255, 255, 247, 255, 127,  15, 223, 255,
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
    255, 255, 255, 255, 255,   0, 255, 255, 255, 255, 255, 255,  15, 128,   0,   0,
    255, 255, 255, 255, 255, 255, 127,   0, 255, 255,  63,   0, 255,   0,   0,   0,
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
    255, 255, 255, 255, 255,   0, 255, 255,  63,   0, 254,   3,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 255, 255, 255,  15,   0,   0, 255, 255, 127,   0,
    253, 255, 255, 255, 255, 255, 255,   0, 128,  63, 252, 255, 255, 255,   0,   0,
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
    255, 255, 255, 255, 255, 215,  64,   1, 255,   3,   0,   0,   0,   0,   0,   0,
    255, 255, 255,   7,  67,   0, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 127,   0,   9,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   7, 128,
    127, 242, 111, 255, 255, 255, 190, 161, 119,   0, 255,   3,   0,   0,   0,   0,
      0,   0,   0,   0, 255, 252, 255, 255, 255, 255,  15, 240,  30,   0,   0,   0,
      1, 248, 255, 255, 255, 255,   7, 134, 127,   0, 129, 241, 255, 255, 255, 255,
    255,   3, 128, 252,   7,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255,   1,
    255, 253, 255, 255, 255, 255,   0,  64,  63,   0, 255, 255, 255,  31, 255, 255,
    255, 255,   0,   0,   0,   2,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    127, 251, 255, 255, 255, 255,   1,   0,  64,   0, 255,   3, 191, 253, 255, 255,
    255, 127,  88,   1, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 231,   1,
      0,   0,   0,   0,   0,   0,   1,   0, 255, 255, 255, 255, 255, 255,   3, 128,
    255, 255, 255,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 127,  31,   0,
    255, 255, 255, 255, 255, 255, 255, 255,  15,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 127,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255,   1, 255, 255, 255, 127, 255, 195,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255,  63,  32,   0,
    255, 255, 255, 255, 255, 255, 128, 255,  63,   0, 255, 251, 251, 255, 255, 224,
    255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255,   7, 255, 255, 255, 255, 255, 255,
    255,   0, 248, 255,   0,   0,   0,   0,   0,   0,   0,   0,  15,   0,   3,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0,   0,   0,
    255,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 127,   0,   0,   0,   0,   0,   0,   7,   0, 240,   0, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   7, 255,  31,
    255,   1, 255, 147,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 255, 127, 254, 255, 255, 255, 255, 255, 255,  95,  60,   0,   0,
     24, 240, 255, 255, 255, 195, 255, 255, 255, 255, 255, 255, 255,   1,   0,   0,
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
    255, 255, 255, 255, 255,  31, 128,  63, 255, 195,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255,  15, 255, 131,
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
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   0, 255,  31, 255,  31,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1, 255,  15,   0,   0,
    255,  15, 255, 255, 255, 255, 255, 255, 255,   0, 255,   3, 255, 255, 255, 255,
    255,   0, 255, 255, 255,  63,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 253,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 239, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,   0, 255,  63,  31,   7,
    127,   0, 255, 255, 255,   1, 127,   0,   7,   0, 127,   0,   0,   0,   0,   0,
    255, 255, 247, 255, 255, 255, 255, 255, 255,   7,   0,   0,   0,   0, 255,   3,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  63,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255,  31,   0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255,  63, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255,   3,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   1,   0,   0,   0,
    255, 255, 255,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 255, 255, 255, 255, 255,   7,   0,   0,   0,   0,   0,   0
};

static UINT8 grapheme_base_table_2[440] = {
      0,   1,   2,   2,   2,   2,   3,   4,   2,   5,   6,   7,   8,   9,  10,  11,
     12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,
     28,  29,   2,   2,  30,  31,  32,  33,   2,   2,   2,   2,   2,  34,  35,  36,
     37,  38,  39,  40,  41,  42,  43,  44,  45,  46,   2,  47,   2,   2,  48,  49,
     50,  51,   2,  52,   2,   2,   2,   2,  53,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  54,  55,  56,  57,  58,  59,  60,  61,   2,  62,
     63,  64,  65,  66,  67,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  68,   2,  69,   2,   2,  70,  71,   2,  72,
     73,  74,  75,  76,  77,  78,  79,  80,   2,   2,   2,   2,   2,   2,   2,  81,
     82,  82,  82,  82,  82,  82,  82,  82,  82,  82,   2,   2,  83,  84,  85,  86,
      2,   2,  87,  88,  89,  68,  90,  91,  92,  93,  94,  95,  82,  96,  97,  98,
      2,  99, 100,  82,   2,   2, 101,  82, 102, 103, 104, 105, 106, 107, 108, 109,
    110, 111, 112,  82, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123,  82,
    124, 125,  82, 126, 127, 128, 129,  82, 130, 131, 132, 133, 134, 135,  82,  82,
    136, 137, 138, 139,  82, 140,  82, 141,   2,   2,   2,   2,   2,   2,   2, 142,
    143,   2, 144,  82,  82,  82,  82,  82, 145,  82,  82,  82,  82,  82,  82,  82,
      2,   2,   2,   2, 146,  82,  82,  82,   2,   2,   2,   2, 147, 148, 149, 150,
     82,  82,  82,  82, 151, 152, 153, 154,   2,   2,   2,   2,   2,   2,   2, 155,
      2, 156, 157,  82,  82,  82,  82,  82,   2,   2, 158,   2,   2, 159,  82,  82,
    160, 161,  82,  82,  82,  82,  82,  82,   2, 162, 163, 164, 165, 166, 167,  82,
    168, 169, 170,   2,   2, 171,   2, 172,   2,   2,   2,   2, 173, 174,  82,  82,
     82,  82, 175,  82,  82, 176,  82,  82,   2, 177, 178,  82,  82,  82,  82,  82,
    179, 180, 181,  82, 182, 183,  82,  82, 184, 185,   2, 186, 187,  82,   2,   2,
      2,   2,   2,   2,   2, 188, 189, 190, 191, 192, 193, 194, 195, 196,   2, 197,
      2,   2,   2,   2,   2, 198,   2,   2,   2,   2,   2,   2,   2,   2, 199,   2,
    200,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 201,   2,   2,
      2,   2,   2,   2,   2,   2,   2, 202,   2,   2,   2,   2, 203,  82,  82,  82,
      2,   2,   2,   2,   2,   2, 204,  82
};

static UINT8 grapheme_base_table_3[192] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  14,  13,  15,  16,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  17,  18,  18,  18,  18,  18,  18,  18,  18,  19,  20,
     21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  18,  18,  13,  31,  18,  18,
     18,  32,  18,  18,  18,  18,  18,  18,  18,  18,  33,  34,  13,  13,  13,  13,
     13,  35,  13,  36,  18,  18,  18,  18,  18,  18,  18,  18,  37,  18,  18,  38,
     18,  18,  18,  18,  39,  40,  41,  18,  42,  18,  43,  44,  45,  46,  47,  18,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  48,  13,  13,  13,  49,  50,  13,
     13,  13,  13,  51,  13,  13,  13,  13,  13,  13,  52,  18,  18,  18,  53,  18,
     13,  13,  13,  13,  54,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,
     18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18,  18
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

static UINT8 grapheme_cluster_break_table_1[1624] = {
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   9,   1,   1,   2,   1,   1,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      0,   0,   0,   0,   0,   1,   0,   0,   6,   6,   6,   6,   6,   6,   6,   6,
      0,   0,   0,   6,   6,   6,   6,   6,   6,   6,   0,   0,   0,   0,   0,   0,
      0,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   6,
      0,   6,   6,   0,   6,   6,   0,   6,  12,  12,  12,  12,  12,  12,   0,   0,
      6,   6,   6,   0,   1,   0,   0,   0,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   6,   6,   6,   6,   6,   6,   6,  12,   0,   6,
      6,   6,   6,   6,   6,   0,   0,   6,   6,   0,   6,   6,   6,   6,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  12,   0,   6,   0,   0,   0,   0,   0,   0,
      6,   6,   6,   0,   0,   0,   0,   0,   6,   6,   6,   6,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   6,   0,   0,   6,   6,   0,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   0,   6,   6,   6,   0,   6,   6,   6,   6,   6,   0,   0,
      0,   6,   6,   6,   0,   0,   0,   0,   6,   6,  12,   6,   6,   6,   6,   6,
      6,   6,   6,  14,   0,   0,   0,   0,   0,   0,   6,  14,   6,   0,  14,  14,
     14,   6,   6,   6,   6,   6,   6,   6,   6,  14,  14,  14,  14,   6,  14,  14,
      0,   0,   6,   6,   0,   0,   0,   0,   0,   6,  14,  14,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   0,   6,  14,  14,   6,   6,   6,   6,   0,   0,  14,
     14,   0,   0,  14,  14,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,
      0,   0,   0,   0,   0,   0,   6,   0,   0,   6,   6,  14,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   0,  14,  14,  14,   6,   6,   0,   0,   0,   0,   6,
      6,   0,   0,   6,   6,   6,   0,   0,   6,   6,   0,   0,   0,   6,   0,   0,
     14,   6,   6,   6,   6,   6,   0,   6,   6,  14,   0,  14,  14,   6,   0,   0,
      0,   0,   6,   6,   6,   6,   6,   6,   0,   0,   0,   0,   6,   0,   6,   6,
      0,   0,   0,   0,   0,   6,   6,   6,   0,   0,   6,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   6,  14,   6,  14,  14,   0,   0,   0,  14,  14,
     14,   0,  14,  14,  14,   6,   0,   0,   6,  14,  14,  14,   6,   0,   0,   0,
      6,  14,  14,  14,  14,   0,   6,   6,   0,   0,   0,   0,   0,   6,   6,   0,
      0,   0,   0,   0,   6,   0,  14,   6,  14,  14,   6,  14,  14,   0,   6,  14,
     14,   0,  14,  14,   6,   6,   0,   0,   6,   6,  14,  14,   0,   0,   0,   0,
      0,   0,   0,   6,   6,   0,   6,  14,  14,   6,   6,   6,   6,   0,  14,  14,
     14,   0,  14,  14,  14,   6,  12,   0,   0,   0,   6,   0,   0,   0,   0,   6,
     14,  14,   6,   6,   6,   0,   6,   0,  14,  14,  14,  14,  14,  14,  14,   6,
      0,   0,  14,  14,   0,   0,   0,   0,   0,   6,   0,  14,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   0,   6,   6,   6,   6,   6,   0,   0,   0,
      6,   6,   6,   6,   6,   6,   0,   0,   0,   0,   0,   0,   0,   6,   0,   6,
      0,   6,   0,   0,   0,   0,  14,  14,   6,   6,   6,   6,   6,   6,   6,  14,
      6,   6,   6,   6,   6,   0,   6,   6,   6,  14,   6,   6,   6,   6,   6,   6,
      0,   6,   6,  14,  14,   6,   6,   0,   0,   0,   0,   0,   0,   0,  14,  14,
      6,   6,   0,   0,   0,   0,   6,   6,   0,   6,   6,   6,   6,   0,   0,   0,
      0,   0,   6,   0,  14,   6,   6,   0,   8,   8,   8,   8,   8,   8,   8,   8,
     16,  16,  16,  16,  16,  16,  16,  16,  15,  15,  15,  15,  15,  15,  15,  15,
      0,   0,   6,   6,   6,   0,   0,   0,   0,   0,   0,   0,   6,   6,  14,   6,
      6,   6,   6,   6,   6,   6,  14,  14,  14,  14,  14,  14,  14,  14,   6,  14,
      0,   0,   0,   6,   6,   6,   1,   0,   6,   6,   6,  14,  14,  14,  14,   6,
      6,  14,  14,  14,   0,   0,   0,   0,  14,  14,   6,  14,  14,  14,  14,  14,
     14,   6,   6,   6,   0,   0,   0,   0,   6,  14,  14,   6,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  14,   6,  14,   6,   0,   6,   0,   0,   6,   6,   6,
      6,   6,   6,   6,   6,  14,  14,  14,  14,  14,  14,   6,   6,   6,   6,   6,
      6,   6,   6,   6,  14,   0,   0,   0,   0,   0,   0,   0,   6,   6,   6,   6,
      6,   6,   6,  14,   6,  14,  14,  14,  14,  14,   6,  14,  14,   0,   0,   0,
      6,   6,  14,   0,   0,   0,   0,   0,   0,  14,   6,   6,   6,   6,  14,  14,
      6,   6,  14,   6,   6,   6,   0,   0,   6,   6,  14,  14,  14,   6,  14,   6,
      0,   0,   0,   0,  14,  14,  14,  14,  14,  14,  14,  14,   6,   6,   6,   6,
      6,   6,   6,   6,  14,  14,   6,   6,   6,   6,   6,   0,   6,   6,   6,   6,
      6,   0,   0,   0,   0,   6,   0,   0,   0,   0,   0,   0,   6,   0,   0,  14,
      0,   0,   0,   1,   6,  17,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,
      0,   6,   6,   0,   0,   0,   0,   0,   0,   0,   6,   0,   0,   0,   6,   0,
      0,   0,   0,   6,   0,   0,   0,   0,   0,   0,   0,  14,  14,   6,   6,  14,
      0,   0,   0,   0,   6,   0,   0,   0,  14,  14,   0,   0,   0,   0,   0,   0,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,   6,   6,   0,   0,
      8,   8,   8,   8,   8,   0,   0,   0,   0,   0,   0,   6,  14,  14,   6,   6,
      6,   6,  14,  14,   6,   6,  14,  14,  14,   0,   0,   0,   0,   0,   0,   0,
      0,   6,   6,   6,   6,   6,   6,  14,  14,   6,   6,  14,  14,   6,   6,   0,
      0,   0,   0,   0,   6,  14,   0,   0,   6,   0,   6,   6,   6,   0,   0,   6,
      6,   0,   0,   0,   0,   0,   6,   6,   0,   0,   0,  14,   6,   6,  14,  14,
      0,   0,   0,   0,   0,  14,   6,   0,   0,   0,   0,  14,  14,   6,  14,  14,
      6,  14,  14,   0,  14,   6,   0,   0,  10,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  10,  11,  11,  11,
     11,  11,  11,  11,   0,   0,   0,   0,  16,  16,  16,  16,  16,  16,  16,   0,
      0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,  15,   0,   0,   0,   0,
      1,   1,   1,   1,   0,   0,   0,   0,   0,   6,   6,   6,   0,   6,   6,   0,
      6,   6,   6,   0,   0,   0,   0,   6,   0,   0,   0,   6,   6,   0,   0,   0,
     14,   6,  14,   0,   0,   0,   0,   0,  14,  14,  14,   6,   6,   6,   6,  14,
     14,   6,   6,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,  12,   0,   0,
      6,   6,   6,   6,  14,   6,   6,   6,   0,   0,   0,   0,   0,  14,  14,   0,
      0,   0,   0,  14,  14,  14,   6,   6,  14,   0,  12,  12,   0,   0,   0,   0,
      0,   6,   6,   6,   6,   0,  14,   6,   0,   0,   0,   0,  14,  14,  14,   6,
      6,   6,  14,  14,   6,  14,   6,   6,   6,  14,  14,  14,  14,   0,   0,  14,
     14,   0,   0,  14,  14,  14,   0,   0,   0,   0,  14,  14,   0,   0,   6,   6,
      0,   0,   0,   0,   0,  14,  14,  14,  14,  14,   6,   6,   6,  14,   6,   0,
      6,  14,  14,   6,   6,   6,   6,   6,   6,  14,   6,  14,  14,   6,  14,   6,
      6,  14,   6,   6,   0,   0,   0,   0,  14,  14,   6,   6,   6,   6,   0,   0,
     14,  14,  14,  14,   6,   6,  14,   6,   0,   0,   0,   0,   6,   6,   0,   0,
      6,   6,   6,  14,  14,   6,  14,   6,   0,   0,   0,   6,  14,   6,  14,  14,
      6,   6,   6,   6,   6,   6,  14,   6,  14,  14,   6,   6,   6,   6,  14,   6,
     14,   6,   6,   0,   0,   0,   0,   0,   6,  14,  14,  14,  14,  14,   0,  14,
     14,   0,   0,   6,   6,  14,   6,  12,  14,  12,  14,   6,   0,   0,   0,   0,
      0,  14,  14,  14,   6,   6,   6,   6,   0,   0,   6,   6,  14,  14,  14,  14,
      6,   0,   0,   0,  14,   0,   0,   0,   6,  14,  12,   6,   6,   6,   6,   0,
      0,   0,   0,   0,  12,  12,  12,  12,  12,  12,   6,   6,   6,   6,   6,   6,
      0,   0,   0,   0,   0,   0,   0,  14,   0,  14,   6,   6,   6,   6,   6,   6,
      6,  14,   6,   6,  14,   6,   6,   0,   0,   6,   6,   6,   6,   6,   6,   0,
      0,   0,   6,   0,   6,   6,   0,   6,   6,   6,   6,   6,   6,   6,  12,   6,
      0,   0,  14,  14,  14,  14,  14,   0,   6,   6,   0,  14,  14,   6,  14,   6,
      0,   0,   0,   6,   6,  14,  14,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      0,  14,  14,  14,  14,  14,  14,  14,   0,   0,   0,   0,   0,   6,  14,   6,
      6,   6,   0,   0,   0,  14,   6,   6,   6,   6,   6,   1,   1,   1,   1,   1,
      1,   1,   1,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,   6,   6,   6,
      0,   0,   6,   6,   6,   6,   0,   0,   6,   0,   0,   6,   6,   6,   6,   6,
      6,   6,   0,   6,   6,   0,   6,   6,   0,   0,   0,   0,   0,   0,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13
};

static UINT8 grapheme_cluster_break_table_2[1360] = {
      0,   1,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,
      0,   0,   0,   0,   2,   4,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   2,   2,
      6,   7,   2,   2,   2,   2,   2,   2,   2,   2,   8,   5,   5,   5,   5,   9,
     10,   2,   2,   2,   2,   2,   2,   2,  11,   2,   5,  12,   2,   2,   2,   2,
      2,   6,   5,   5,   2,   2,  13,   2,   2,   2,  14,  15,  16,  17,   2,   2,
      2,  18,  19,   2,   2,   2,   5,   5,   5,  20,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,  14,   5,  13,   2,   2,   2,   2,   2,   2,   6,  21,  22,
      2,   2,  14,  23,  24,  25,   2,   2,   2,   2,   2,  26,   2,   2,   2,   2,
      2,   2,   6,   5,  27,   5,   5,   5,  28,   2,   2,   2,   2,   2,   2,  29,
     30,  31,   8,   2,  32,   2,   2,   2,  33,   2,   2,   2,   2,   2,   2,  34,
     35,  36,  37,   2,  32,   2,   2,  38,  39,   2,   2,   2,   2,   2,   2,  40,
     41,  42,  19,   2,   2,   2,  43,   2,  44,  45,   2,   2,  32,   2,   2,  46,
     33,   2,   2,   2,   2,   2,   2,  47,  35,  36,  48,   2,  32,   2,   2,   2,
     49,   2,   2,   2,   2,   2,   2,  50,  51,  52,  37,   2,   2,   2,   2,   2,
     53,   2,   2,   2,   2,   2,   2,  14,  54,  17,  55,   2,  32,   2,   2,   2,
     33,   2,   2,   2,   2,   2,   2,  56,  57,  58,  55,   2,  32,   2,   2,   2,
     59,   2,   2,   2,   2,   2,   2,  60,  61,  62,  37,   2,  32,   2,   2,   2,
     33,   2,   2,   2,   2,   2,   2,   2,   2,  63,  64,  65,   2,   2,  66,   2,
      2,   2,   2,   2,   2,   2,  67,  20,  37,  68,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  67,  69,   2,  70,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   7,   2,   2,  71,  72,   2,   2,   2,   2,   2,   2,   8,  73,
     74,  48,   5,   8,   5,   5,   5,  69,  38,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,  48,  75,  76,   2,   2,  77,  78,  13,   2,  79,   2,
     80,  22,   2,  22,   2,   2,   2,   2,  81,  81,  81,  81,  81,  81,  81,  81,
     81,  81,  81,  81,  82,  82,  82,  82,  82,  82,  82,  82,  82,  83,  83,  83,
     83,  83,  83,  83,  83,  83,  83,  83,   2,   2,   2,  48,   2,   2,   2,   2,
      2,   2,  84,   2,   2,   2,  84,   2,   2,   2,  32,   2,   2,   2,  32,   2,
      2,   2,   2,   2,   2,   2,  85,  86,  87,  30,  21,  22,   2,   2,   2,   2,
      2,  88,   2,   2,   2,   2,   2,   2,  55,   2,   2,   2,   2,  19,   2,   2,
      2,   2,   2,   2,  89,  90,  91,  92,   2,   2,  37,  93,   2,   2,   2,   2,
      2,   2,  94,  68,  95,  96,  97,  16,   2,   2,   2,   2,   2,   2,   5,   5,
     13,   2,   2,   2,   2,   2,   2,   2,  98,   2,   2,   2,   2,   2,  99, 100,
    101,   2,   2,   2,   2,   6,  21,   2, 102,   2,   2,   2, 103, 104,   2,   2,
      2,   2,   2,   2,  50, 105,  59,   2,   2,   2,   2,   2, 106, 107, 108,   2,
      2,   2, 109,   5,  75, 110, 111,   7,   5,   5,   5,   5,   5,   5,   5,  23,
      2, 112,   2,   2,   2, 113,   2,   2,   2,   2,   2,   2,   0,   0,   2,   2,
      2,   2,   5,   5,   5,   5,  13,   2,   2,   2,   2,   2,   2,  37,   7,   2,
      2,   2,   2,   2,   2,   2,   2,  37,   2,   2,   2,   2,   5,   5,   5,   5,
      2,   2,   2,   2,   2,  46,   2,   2,   2,   2,   2, 114,   2,   2,   2,   2,
      2,   2,   2,   2,   2,  37, 109,  70,   2,   2,   2,  14,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   7,   2, 115, 116,   2,   2, 117, 118,   2,   2,
    119,   2,   2,   2,   2,   2, 106, 120, 121,   2,   2,   2,   5,   5,   7,  37,
      2,   2,   2,   2,  14,  70,   2,   2,  37,   5,  59,   2,  81,  81,  81, 122,
     28,   2,   2,   2,   2,   2, 123, 124, 125,   2,   2,   2,  22,   2,   2,   2,
      2,   2,   2,   2,   2, 126, 127,   2, 116, 128,   2,   2,   2,   2,   2, 118,
      2,   2,   2,   2,   2,   2, 129, 130,  19,   2,   2,   2,   2, 131, 132,   2,
      2,   2,   2,   2, 133, 134,   2,   2, 135, 136, 136, 137, 136, 136, 136, 135,
    136, 136, 137, 136, 136, 136, 135, 136, 136, 137, 136, 136, 136, 135, 136, 136,
    137, 136, 136, 136, 135, 136, 136, 137, 136, 136, 136, 135, 136, 136, 137, 136,
    136, 136, 135, 136, 136, 137, 136, 136, 136, 135, 136, 136, 137, 136, 136, 136,
    136, 135, 136, 136, 138,   2,  82,  82, 139, 140,  83,  83,  83,  83,  83, 141,
      2,   2,   2,  38,   2,   2,   2,   2,   5,   5,   2,   2,   5,   5,   2,   2,
      2,   2,   2,   2,   2,   2,   0, 142,   2,   2,   2,   2,   2,   2,   2,  22,
      2,   2,   2,   2,  13,   2,   2,   2,   2,   2,   2,   2,   2,   2,  14,  20,
    143,  99,   2,   2,   2,   2,   2, 144,   2,   2,   2,   2,  55,   2,   2,   2,
      2,   2,   2,   2,  99,   2,   2,   2,   2,   2,   2,   2,   2, 145,   2,   2,
     14,   5,  13,   2,   2,   2,   2,   2, 146,   2,   2,   2,   2,   2,   2,   5,
     68,   2,   2,   2,   2,   2,   2,  37, 102,   2,   2,   2,   2,   2, 147, 148,
      2, 149,   2,   2,   2,   2,   2,   2,  20,   2,   2,   2,  37, 150,  69,   2,
    151,   2,   2,   2,   2,   2, 116,   2, 102,   2,   2,   2,   2,   2, 152,  73,
    153, 154,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 155, 156,  38,
      2,   2,   2,  37,  97,  20,   2,   2, 157, 158,  37,   2, 159,  69,  69,   2,
      2,   2,   2,   2,   2,   2, 160,   5, 161,   2,   2,  38,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2, 162, 163, 164,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,  37, 165, 166,  13,   2,   2, 167,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  97, 168,   2,   2,   2,   2,   2, 169, 170,   2,
      2,   2,   2,  48, 171,  21,   2,   2,   2,   2,   2,   2,   2, 155,   5, 172,
      2,   2,   2,   2,   2,   2, 173, 174, 175,   2,   2,   2,   2,   2,   2,   2,
      2,   2, 176, 177, 178,   2,   2,   2,   8,  20,   2,   2,   2,   2,   6, 179,
     37,   2, 126,  92,   2,   2,   2,   2, 180, 181,  73,   7,   2,   2,   2,   2,
      2,   2,   2,   2,   2, 182,  68, 170,   2,   2,  46,   5,   5, 183, 184,   2,
      2,   2,   2,   2,   2,   2, 185, 186, 187,   2,   2,   2,   2,   2,   2,   2,
      2, 188, 189,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 190,   2,
      2,   2,   2,   2,   2,   2,   0, 191,   2,   2,   2,   2,   2,   2,  69,   2,
      2,   2,   2,   2,   2,   2,  68,   2,   2,  37, 192, 120, 120, 120, 120, 120,
    120,  37,  20,   2,   2,   2,   2,   2,   2,   2,   2,   2, 118,   2, 119,   2,
      2,   2,   2,  55, 142,   2,   2,   2,   2,   2,   2,   2, 193, 194, 195, 196,
    197,  21,   2,   2,   2, 198,   2,   2,  84,   2,   2,   2,   2,   2,   2,   2,
      5,   5,   5,   5,   5,   5,  68,   6,   5,   5,   5,   5,   5,  69,  22,   2,
    118,   2,   2,   6,   8,   5,   2,   2,  68,   5,   5, 199, 200,  20,   2,   2,
      2,   2,   2,   2,   2,  99,   2,   2,   2,   2,  68,   2,   2,   2,   2,   2,
     99,  20,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 201, 202, 202, 202,
      2,   2,   2,   2,   2,   2,   2,   6,   0,   0,   0,   0,   5,   5,   5,   5,
      0,   0,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,   5,   5,   0,   0
};

static UINT8 grapheme_cluster_break_table_3[1216] = {
      0,   1,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   4,   5,   3,   3,
      3,   3,   6,   3,   3,   3,   7,   8,   9,  10,   3,  11,  12,  13,  14,  15,
     16,  17,   3,  18,  19,  20,  21,  22,  23,  24,  23,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,
     46,  47,  48,   3,  49,  50,  51,  52,   3,   3,   3,   3,   3,  53,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  54,  55,  56,  57,
     58,   3,  59,   3,  60,   3,   3,   3,  61,  62,  63,  64,  65,  66,  67,  68,
     69,   3,   3,  70,   3,   3,   3,  71,   3,   3,   3,   3,   3,   3,   3,   3,
     72,  73,   3,  74,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  75,   3,  76,   3,  77,   3,   3,   3,   3,   3,   3,   3,   3,
     78,   3,  79,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,  80,  81,  82,   3,   3,   3,   3,
     83,   3,  84,  85,  86,  87,  88,  89,  90,  91,  92,  93,   3,   3,   3,  94,
     95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,
     97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,
     99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100,
    101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,
     96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,
     98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99,
    100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,
     95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,
     97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,
     99, 100, 101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100,
    101,  95,  96,  97,  98,  99, 100, 101,  95,  96,  97,  98,  99, 100, 102, 103,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3, 104,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3, 105,   3,   3,   1,   3,   3,  81, 106,
      3,   3,   3,   3,   3,   3,   3, 107,   3,   3,   3, 108,   3, 109,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3, 110,   3,   3, 111,   3,   3,   3,   3,
      3,   3,   3,   3, 112,   3,   3,   3,   3,   3, 113,   3,   3, 114,   3,   3,
    115, 116, 117, 118, 119, 120, 121, 122, 123,   3,   3, 124,  34, 125,   3,   3,
    126, 127, 128, 129,   3,   3, 130, 131, 132,  64, 133,   3, 134,   3,   3,   3,
    135,   3,   3,   3, 136, 137,   3, 138, 139, 140, 141,   3,   3,   3,   3,   3,
    142,   3, 143,   3, 144, 145, 146,   3,   3,   3,   3, 147,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
    148,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3, 149, 150,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3, 151, 152, 153,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3, 154,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3, 155, 156,   3,   3, 157,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3, 158, 159, 160,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
    161,   3,   3,   3, 150,   3,   3,   3,   3,   3,   3, 162,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3, 163,   3, 164,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3, 165,   3,   3,   3,   3,   3,   3,   3, 166,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
    167,   4, 168, 168,   4,   4,   4, 169, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168,
    168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168
};

static UINT8 grapheme_cluster_break_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   6,   7,   8,   4,   9,
     10,  11,   4,  12,   4,   4,  13,   4,   4,   4,   4,  14,   4,  15,  16,  17,
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
     18,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
};

UINT32 lookup_grapheme_cluster_break(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = grapheme_cluster_break_table_4[block];
    offset = (codepoint >> 6) & 0x3F;
    block = grapheme_cluster_break_table_3[(block << 6) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = grapheme_cluster_break_table_2[(block << 3) + offset];
    offset = codepoint & 0x7;
    value = grapheme_cluster_break_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Grapheme_Extend. */

static UINT8 grapheme_extend_table_1[656] = {
      0,   0,   0,   0, 255, 255, 255, 255, 255, 255,   0,   0, 248,   3,   0,   0,
      0,   0, 254, 255, 255, 255, 255, 191, 182,   0,   0,   0,   0,   0, 255,   7,
      0, 248, 255, 255,   0,   0,   1,   0,   0,   0, 192, 159, 159,  61,   0,   0,
      0,   0,   2,   0,   0,   0, 255, 255, 255,   7,   0,   0, 192, 255,   1,   0,
      0, 248,  15,  32,   0,   0, 192, 251, 239,  62,   0,   0,   0,   0,   0,  14,
      0,   0, 248, 255, 251, 255, 255, 255,   7,   0,   0,   0,   0,   0,   0,  20,
    254,  33, 254,   0,  12,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,  80,
     30,  32, 128,   0,  12,   0,   0,  64,   6,   0,   0,   0,   0,   0,   0,  16,
    134,  57,   2,   0,   0,   0,  35,   0, 190,  33,   0,   0,  12,   0,   0, 252,
      0,   0,   0, 208,  30,  32, 224,   0,   4,   0,   0,   0,   0,   0,   0,  64,
      1,  32, 128,   0,  17,   0,   0,   0,   0,   0,   0, 192, 193,  61,  96,   0,
      0,   0,   0, 144,  68,  48,  96,   0,   3,   0,   0,   0,   0,   0,   0,  88,
      0, 132,  92, 128,   0,   0, 242,   7, 128, 127,   0,   0,   0,   0, 242,  31,
      0,  63,   0,   0,   0,   0,   0,   3,   0,   0, 160,   2,   0,   0, 254, 127,
    223, 224, 255, 254, 255, 255, 255,  31,  64,   0,   0,   0,   0, 224, 253, 102,
      0,   0,   0, 195,   1,   0,  30,   0, 100,  32,   0,  32,   0,   0,   0, 224,
      0,   0,  28,   0,   0,   0,  12,   0,   0,   0, 176,  63,  64, 254,  15,  32,
      0,  56,   0,   0,  96,   0,   0,   0,   0,   2,   0,   0, 135,   1,   4,  14,
      0,   0, 128,   9,   0,   0,  64, 127, 229,  31, 248, 159,   1,   0,   0,   0,
     15,   0,   0,   0,   0,   0, 240,  23,   0, 248,  15,   0,  60,  59,   0,   0,
     64, 163,   3,   0,   0, 240, 207,   0,   0,   0, 247, 255, 253,  33,  16,   3,
    255, 255, 255, 251,   0,  16,   0,   0, 255, 255,   1,   0,   0, 128,   3,   0,
      0,   0,   0, 128,   0, 252,   0,   0,   0,   0,   0,   6,   0, 128, 247,  63,
      0,   0,   3,   0,  68,   8,   0,   0,  96,  16,   0,   0,  48,   0,   0,   0,
    255, 255,   3, 128, 192,  63,   0,   0, 128, 255,   3,   0,   0,   0, 200,  51,
     32,   0,   0,   0,   0, 126, 102,   0,   8,  16,   0,   0,   0,   0, 157, 193,
      0,  48,  64,   0,  32,  33,   0,   0,   0,   0,   0,  32,   0,   0, 192,   7,
    110, 240,   0,   0,   0,   0,   0, 135, 240,   0,   0,   0,   0,  24,   0,   0,
      0,   0,   0, 255, 127,   0,   0,   0,   0,   0, 120,   6, 128, 239,  31,   0,
      0,   0,   8,   0,   0,   0, 192, 127,   0, 158,   0,   0,   0, 128, 211,  64,
    248,   7,   0,   0,   1,   0, 128,   0, 192,  31,  31,   0,  92,   0,   0,  64,
      0,   0, 249, 165,  13,   0,   0,   0,   0, 128,  60, 176,   1,   0,   0,  48,
      0,   0, 248, 167,   0,  40, 191,   0, 188,  15,   0,   0,   0, 128, 255,   6,
      0,   0,   1,  88,   8,   0,   0,   0,   0,   0, 240,  12, 254,   7,   0,   0,
      0,   0, 248, 121, 128,   0, 126,  14,   0, 252, 127,   3,   0,   0, 127, 191,
      0,   0, 252, 255, 255, 252, 109,   0,   0,   0, 126, 180, 191,   0,   0,   0,
      0,   0, 163,   0,   0,   0,  24,   0,   0,   0,  31,   0,   0,   0, 127,   0,
      0, 128,   0,   0,   0, 128,   7,   0,  16,   0,   0,   0,   0,   0,   0,  96,
    160, 195,   7, 248, 231,  15,   0,   0,   0,  60,   0,   0,  28,   0,   0,   0,
    255, 255, 127, 248, 255,  31,  32,   0,  16,   0,   0, 248, 254, 255,   0,   0,
    127, 255, 255, 249, 219,   7,   0,   0,   0, 240,   0,   0, 240,   7,   0,   0
};

static UINT8 grapheme_extend_table_2[720] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   2,   0,   0,   0,   0,
      0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   4,   5,   6,   0,
      7,   0,   8,   9,   0,   0,  10,  11,  12,  13,  14,   0,   0,  15,   0,  16,
     17,  18,  19,   0,   0,   0,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  30,  31,  34,  35,  26,  36,  37,  25,  38,  39,  40,   0,
     41,  42,  43,  25,  26,  44,  45,  25,  46,  47,  28,  25,  26,   0,  48,   0,
      0,  49,  50,   0,   0,  51,  52,   0,  53,  54,   0,  55,  56,  57,  58,   0,
      0,  59,  60,  61,  62,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  64,  64,  65,  65,   0,  66,  67,   0,
     68,   0,   0,   0,  69,  70,   0,   0,   0,  71,   0,   0,   0,   0,   0,   0,
     72,   0,  73,  74,   0,  13,  75,   0,  76,  77,  38,  78,  46,  79,   0,  80,
      0,  81,   0,   0,   0,   0,  82,  83,   0,   0,   0,   0,   0,   0,   1,  84,
     85,   0,   0,   0,   0,   0,  13,  86,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  87,   0,   0,   0,  88,   0,   0,   0,   1,
      0,  89,   0,   0,  90,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  91,  42,   0,   0,  92,   0,   0,   0,   0,   0,   0,   0,   0,
     93,  94,   0,   0,   0,   0,  95,  96,   0,  97,  98,   0,  22,  99,   0, 100,
      0, 101, 102,  31,   0, 103,  26, 104,   0,   0,   0,   0,   0,   0,   0, 105,
      0,   0,   0,   0,   0,   0,   0,   0,  39,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 106,
      0,   0,   0,   0,   0,   0,   0,  75,   0,   0,   0, 107,   0,   0,   0,   0,
    108, 109,   0,   0,   0,   0,   0,  69,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 110,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 111,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,
     26, 112, 113,  88,  46, 114,   0,   0,  22, 115,   0, 116,  46, 117, 118,   0,
      0, 119,   0,   0,   0,   0,  88, 120,  46,  47, 121, 122,   0,   0,   0,   0,
      0, 112, 123,   0,   0, 124, 125,   0,   0,   0,   0,   0,   0, 126, 127,   0,
      0, 128,  75,   0,   0, 129,   0,   0,  63, 130,   0,   0,   0,   0,   0,   0,
      0, 131,   0,   0,   0,   0,   0,   0,   0, 132, 133,   0,   0,   0, 134,  75,
    135, 136, 137,   0, 138,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 139,   0,   0, 140, 141,   0,   0,   0, 142, 143,   0, 144,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 145,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 146,   0, 147,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 148,   0, 149,   0,   0, 150,
      0,   0,   0,   0, 151,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 152, 153, 154,   0,   0,
      0,   0, 155,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1, 156,   1, 157, 158, 159,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    160, 161,   0,   0,   0,   0,   0,   0,   0, 147,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 162,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 147,   0,   0,   0, 163,   0,   0,   0,   0,   0,
      0,   1,   1,   1,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   2
};

static UINT8 grapheme_extend_table_3[176] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,  10,  11,  12,  13,   0,
     14,   0,   0,   0,   0,   0,  15,   0,  16,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  17,  18,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,   0,  21,
     22,  23,   0,   0,   0,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,
      0,   0,   0,   0,   0,  35,   0,  36,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  38,  39,   0,   0,   0,  40,   0,   0,
     41,  42,   0,   0,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     44,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
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
    offset = (codepoint >> 9) & 0xF;
    block = grapheme_extend_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0xF;
    block = grapheme_extend_table_2[(block << 4) + offset];
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
      0,   0,   0,   0,   0,   0,   0,   6,   0,   0,  16,   0,   0,   0,  16,   0,
      0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0,  12,   0,   0,   0,   0,   0,   0,   0,   0,  12,   0,
      0,   0,   0,   0,   0,   0,   0, 128,  64,   0,   0,   0,   0,  16,   0,   0,
      0,   0,   8,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,  32,   0,   0,
     64,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,   0,   2,
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

static UINT8 id_continue_table_1[410] = {
      0,   0, 255,   3, 254, 255, 255, 135, 255,   7,   0,   4, 160,   4, 255, 255,
    127, 255, 195, 255,   3,   0,  31,  80, 223, 188, 192, 215, 251, 255, 191, 255,
    251, 252, 127,   2, 255,   1, 255, 191, 182,   0,   7,   0, 255, 195, 239, 159,
    255, 253, 255, 159, 255, 231,  63,  36, 255,  63, 255,  15, 223, 255, 255,   0,
    248, 255, 207, 255, 249, 255, 197, 243, 159, 121, 128, 176,   3,  80, 238, 135,
    109, 211, 135,  57,   2,  94, 192, 255,  63,   0, 238, 191, 237, 243, 191,  59,
      1,   0,   0, 254, 238, 159, 159,  57, 224, 176,   2,   0, 236, 199,  61, 214,
     24, 199, 199,  61, 129,   0, 255, 223, 253, 255, 255, 227, 223,  61,  96,   7,
    239, 223, 239, 243,  96,  64,   6,   0, 223, 125, 240, 128,   0, 252, 238, 255,
    127, 252, 251,  47, 127, 132,  95, 255,  12,   0, 255, 127, 214, 247, 175, 255,
     95,  63, 255, 243,   0,   3, 160, 194, 255, 254, 255,  31,  64,   0, 191,  32,
    255, 247, 255,  61, 127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  31,   0,
     15,   0,  13,   0, 143,  48,   0,  56, 128,   0,   0, 248, 247, 255, 255, 251,
    255, 170, 223,  95, 220,  31, 207,  15,   0, 128,  16,   0,   2, 128, 226, 255,
    132, 252,  47,  63,  80, 253, 224,  67,  31, 248, 255, 128, 127,   0, 127, 127,
    224,   0,  62,  31, 127, 254, 224, 255, 240, 191, 128, 255, 252, 255, 255, 249,
    252,   7, 255,  16, 255, 232,   1, 128, 124,   0, 126, 126, 126,   0, 255,  55,
    127, 248, 248, 224, 127,  95, 219, 255,  24,   0,   0, 224, 252, 252, 252,  28,
    255, 239, 255, 183,   0,  32,  15, 255,  62,   0,  63, 253, 191, 145,  55,   0,
    255, 192, 111, 240, 239, 254,  63, 135, 255,  27, 240,   0,  79,   0,  31, 222,
    255,  23, 255,  64, 127, 189, 237, 251, 129, 224, 207,  31, 191,   0,  63, 255,
      0,  63,  17,   0, 127, 242, 111, 255, 191, 249, 255, 252,  27,   0, 255,  35,
    127, 251, 127, 180, 191, 253, 251,   1, 255, 224, 255,  99, 224, 227,   7, 248,
    231,  15,   0,  60,  28,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223,
    255, 123,  95, 252, 247, 207,  32,   0, 219,   7, 255,  67, 150, 254, 247,  10,
    132, 234, 150, 170, 150, 247, 247,  94, 238, 251
};

static UINT8 id_continue_table_2[1888] = {
      0,   0,   0,   1,   2,   3,   2,   4,   0,   0,   5,   6,   7,   8,   7,   8,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   9,  10,  11,   0,
      7,   7,   7,   7,   7,   7,   7,  12,  13,   7,  14,   7,   7,   7,   7,  15,
      7,   7,   7,   7,   7,   7,   7,   7,  16,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   2,   7,  17,   7,   7,  18,   2,   7,  19,  20,   7,   3,  21,
      0,   4,   7,   7,   7,   7,  22,   7,   7,   7,   7,   7,   7,  23,  24,  25,
      0,   7,   7,   7,  26,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,  27,
      7,   7,  28,   0,   7,  29,   4,   0,   0,   0,   7,  30,  31,  32,  14,   7,
      7,   7,   7,   7,   7,   7,  33,   2,  23,  34,  24,  35,  36,  37,  33,  38,
     39,  34,  24,  40,  41,  42,  43,  44,  45,  14,  24,  46,  47,  48,  33,  49,
     50,  34,  24,  46,  51,  52,  33,  53,  54,  55,  56,  22,  57,  58,  43,   0,
     59,  60,  24,  61,  62,  63,  33,   0,  64,  60,  24,  65,  62,  66,  33,  67,
     59,  60,   7,   7,  68,  69,  33,  70,  71,  72,   7,  73,  74,  75,  43,  76,
      2,   7,   7,   4,  77,   1,   0,   0,  78,   7,  79,  28,  80,  81,   0,   0,
     48,  82,   1,  83,  84,   7,  85,   2,  30,  84,   7,  85,  86,   0,   0,   0,
      7,   7,   7,   7,   1,   7,   7,   7,   7,  28,   7,   7,  87,   7,   7,  88,
      7,   7,   7,   7,  89,  90,   7,   7,  89,   7,   7,  91,  92,   8,   7,   7,
      7,  92,   7,   7,   7,  26,  49,  10,   7,   0,   7,   7,   7,   7,   7,  93,
      2,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,  25,   7,   2,   4,   7,   7,   7,   7,  94,  18,
     59,  95,   7,  95,   7,  96,  59,  97,   7,   7,   7,   7,   7,  98,   1,   0,
     99,   1,   7,   7,   7,   7,   7,  18,   7,   7,   4,   7,   7,   7,   7,  44,
      7,  77,  29,  29,  43,   7,  28,  95,   7,   7,  29,   7,   1,   4,   0,   0,
      7,  29,   7,   7,   7,  77,   7,  25,   1,   1, 100,  19,  48,   0,   0,   0,
      7,   7,   7,   7,  29,   1, 101,  96,   7,   7,   7,   7,   7,   7,   7,  96,
      7,   7,   7,  31,  61,   7,   7,  28,  18,   7,   7,  26,   0, 102,   7,   4,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 103,
      7,  93,   7,   7,  93, 104,   7,  28,   7,   7,   7, 105, 106, 107,  85, 106,
      0,   0,   0, 108,  48, 109,   0, 110,   0,  85,   0,   0,   0,  85, 111,  48,
    112, 113, 114,  81, 115,   0,   7,   7,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  77,   7,   7,  77,   7,   7,   7,   7,   7,   7,   7,   7, 116,  96,
      7,   7,  87,   7,   7,   7, 117, 108,   7, 118, 119, 119, 119, 119,   7,   7,
    120,   0,   2, 121,   2,   7,   7,   7,   7, 122,   2,   7,   7,   7,   7,  88,
    123,   7,   7,   2,   7,   7,   7,   7,  77,   0,   7,   7,   0,   0,   0,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  85,
      7,   7,   7,   7,   7,   7,   7,   7,  85,   0,   0,   0,   0,   7,   7,  28,
     85,   7,  29,   0,   7,   7,   7, 124,   7,   7,   7,   7,   7,   7,   7,  10,
      0, 125, 126,   7,   7,   7,   7,   7, 127,   7,   7,   7, 128,   0,   0, 123,
      7,   7, 129,   0,   7,   7,   7,  96,   7,   7,   7,   7,  44,   1,   7, 130,
      7,   7,  28,   7,   7,  96,   7,  85,   7,   7,   7,   7, 131,   1,   7,  77,
      7,   7,   7, 118,  28,   1,   7,  72,   7,   7,   7,   7,  21,  99,   7, 132,
    133, 134, 119,   7,   7,  88,   1,   7,   7,   7,   7,   7,   7,   7, 135,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  96,   7, 136,   7,   7,  29,
      7,   7,   7,   7,   7,   7,  28,   7,   7,   7,   7,   7,   7,   1,   0,   0,
    118, 137,  24, 138, 139,   7,   7,   7,   7,   7,   7,  10,   0,  32,   7,   7,
      7,   7,   7,  28,   0,   7,   7,   7,   7, 126,   7,   7,  31,   0,   0,  29,
      7,   0,   7, 140, 141,   0,   0,  30,   7,   7,   7,   7,   7,   7,   7,  85,
      0,   1,   2,   3,   2,   4,  43,   7,   7,   7,   7,  77, 142, 143,   0,   0,
    144,   7,   8, 145,  28,  28,   0,   0,   7,   7,   7,   7,   7,   7,   7,   4,
      0,   0,   0,   0,   7,   7,   7,  95,   0,   0,   0,   0,   0,   0,   0, 146,
      0,   0,   0,   0,   0,   0,   0,   0,   7,  85,   7,   7,   7,  48,  48,   0,
      7,   7, 141,   7,   4,   7,   7,   4,   7,  28,   7,   7, 147, 148,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   1,   7,   7, 147,   7,  29,
      7,   7,  31,   7,   7,   7,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7, 118,   7,  44,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    149,   7,   7, 150,   7,  44,   7, 118,   7,  77,   0,   0,   0,   0,   7, 151,
      7,  44,   7,   1,   0,   0,   0,   0,   7,   7,   7, 152,   0,   0,   0,   0,
    153, 154,   7, 155,   0,   0,   7,  85,   7,  85,   0,   0,  84,   7, 118,   0,
      7,   7,   7,  44,   7,  44,   7,  21,   7,  10,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,  18,   0,   0,   0,   7,   7,   7,  21,   7,   7,   7,  21,
      7,   7,  31,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 156,  10,   0,   0,   0,   0,
      7,  85, 100,   7,   7,  48,   0,   0,   0,   0,   0,   7,  95,   0,   7, 118,
      7,   7,   7,   7, 118,   0,  43, 108,   7,   7,   7,   4,   0,   7,  18,   1,
      7,   7,   7,  30, 157,   7,   7, 158,   7,   7,   7,   7, 159, 160,   0,   0,
      7,  14,   7, 161,   0,   0,   0,   0, 162,  19,  18,   7,   7,   7,   4,   1,
     23,  34,  24, 163,  51, 164, 165,  95,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,  22,  10,   0,   7,   7,   7,   7, 166,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7, 167,  48, 168,   0,   0,
      7,   7,   7,   7, 169,   1,   0,   0,   7,   7,   7,  18,   1,   0,   0,   0,
      7,  26,  29,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   1, 108,
    170, 171,   7, 172,  96,   1,   0,   0,   0,   0, 173,   7,   7, 173, 174,   0,
      7,   7,   7,  77, 100,   7,   7,   7,   7, 175,   0,   0,   7,   7,   7,  18,
     24,   7,   7,   8,  48,   1,   0, 126,   7, 126,  84, 118,   0,   0,   0,   0,
    176,   7,   7, 177,  31,   1, 178,   7,  77, 179,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 118,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   1,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,  77,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7, 118,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,  18,   7,  77,   1,   0,   0,   0,   0,   0,   0,   7,  28,  95,
      7,   7,   7, 118,  96,   1,  32, 180,   7,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,   7,   7,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   3,   7,   7,   7, 117,   7,   0,   0,   0,   0, 174,  10,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  31,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  44,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,  77,   0,   0,   0,  21, 157,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  29,
      7,   7,   7,   7,   7,   7,   4,  85,  18, 181,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 182, 183, 184,   0, 185,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 186,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,  30,   7,   7,   7,  59, 187, 188, 189,   7,   7,   7,
    190, 191,   7, 192, 193,  60,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 167,   7,  60,  88,   7,  88,
      7,  30,   7,  30,  77,   7,  77,   7,  24,   7,  24,   7, 194,   7,   7,   7,
      7,   7,   7, 136,   7,   7,  85, 195, 109, 101,   2,   0,   0,   0,   0,   0,
      8, 127, 196,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  85,  28, 197,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  95, 118,   0,   0,
      7,   7,   7,   7,  29,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    189,   7, 198, 199, 200, 201, 202, 203, 103,  29, 204,  29,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   0,   0,
      7,   7,   7,  95,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  28,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  48,   0,
      7,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0
};

static UINT8 id_continue_table_3[464] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  32,  33,  31,  31,
     34,  35,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  36,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  37,
      1,   1,   1,   1,  38,   1,  39,  40,  41,  42,  43,  44,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  45,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  46,  47,   1,  48,  49,  50,
     51,  52,  53,  54,  55,  56,   1,  57,  58,  59,  60,  61,  62,  63,  64,  65,
     66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  31,  77,  78,  79,  80,
      1,   1,   1,  81,  82,  83,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  86,  87,  31,  31,  88,  89,
      1,   1,   1,   1,   1,   1,   1,  90,   1,   1,   1,   1,  91,  92,  31,  31,
      1,  93,  94,  31,  31,  31,  31,  31,  31,  31,  31,  31,  95,  31,  31,  31,
     31,  96,  97,  31,  98,  99, 100, 101,  31,  31, 102,  31,  31,  31,  31,  31,
    103, 104, 105,  31,  31,  31,  31,  31, 106, 107,  31,  31,  31,  31, 108,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31, 109,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 110,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 111, 112,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 113,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 114,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 115,  31,  31,  31,  31,  31,
      1,   1,   1, 116,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31, 117,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 id_continue_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
     28,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
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
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,  31,
    255, 255, 255, 255, 255,  63, 255, 255, 255, 255, 255,   3,   0,   0,   0,   0,
      0,   0,   0,   0,  16,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255,   0,
    255, 255,  63,   0,   0,   0,   0,   0, 255,   1,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255, 255,  15,
    255, 255, 255,  63,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255,  31,   0,
    255, 255, 255,  63, 255, 255, 255, 255, 255, 255, 255, 255,   3,   0, 255, 255,
    255, 255, 255, 255,   1,   0,   0,   0, 255,   7,   0,   0,   0,   0,   0,   0
};

static UINT8 ideographic_table_2[152] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0,
      2,   2,   2,   2,   2,   2,   2,   3,   0,   0,   0,   0,   2,   2,   2,   2,
      2,   4,   2,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,
      2,   2,   2,   2,   2,   2,   2,   7,   2,   2,   2,   8,   9,   0,   0,   0,
      0,   0,   0,   0,   0,  10,   2,   2,   2,   2,   2,  11,   0,   0,   0,   0,
      2,   2,   2,  12,   2,   2,   2,   2,   2,   2,   2,   2,  13,   2,   2,   2,
     14,   2,   2,   2,   2,   2,   2,   2,   2,   2,  15,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  16,  12,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,  17,   0,   0
};

static UINT8 ideographic_table_3[208] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   3,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   4,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   6,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   7,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   8,   2,   2,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  10,  11,   0,   0,   0,   0,   0,   0,
      2,   2,   2,  12,   2,   2,   2,   2,   2,   2,   2,  13,  14,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,  15,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,  16,   0,   0,   0,   0,   0,   0,   2,  17,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  18,   0,   0,   0,   0,   0,   0
};

static UINT8 ideographic_table_4[136] = {
      0,   1,   2,   3,   4,   0,   0,   5,   0,   0,   0,   6,   7,   8,   0,   0,
      3,   3,   3,   3,   3,   9,  10,  11,  12,   0,   0,   0,   0,   0,   0,   0,
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

static UINT8 id_start_table_1[968] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,   0,   0, 223, 188,
     64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,   3, 252, 255, 255,
    255, 255, 254, 255, 255, 255, 127,   2, 255,   1,   0,   0,   0,   0, 255, 255,
    255, 135,   7,   0, 255,   7,   0,   0,   0, 192, 254, 255, 255, 255,  47,   0,
     96, 192,   0, 156,   0,   0, 253, 255, 255, 255,   0,   0,   0, 224, 255, 255,
     63,   0,   2,   0,   0, 252, 255, 255, 255,   7,  48,   4, 255, 255,  63,   4,
     16,   1,   0,   0, 255, 255, 255,   1, 255, 255, 223, 255, 255,   0,   0,   0,
    240, 255, 255, 255, 255, 255, 255,  35,   0,   0,   1, 255,   3,   0, 254, 255,
    225, 159, 249, 255, 255, 253, 197,  35,   0,  64,   0, 176,   3,   0,   3,  16,
    224, 135, 249, 255, 255, 253, 109,   3,   0,   0,   0,  94,   0,   0,  28,   0,
    224, 191, 251, 255, 255, 253, 237,  35,   0,   0,   1,   0,   3,   0,   0,   2,
    224, 159, 249, 255,   0,   0,   0, 176,   3,   0,   2,   0, 232, 199,  61, 214,
     24, 199, 255,   3, 224, 223, 253, 255, 255, 253, 255,  35,   0,   0,   0,   7,
      3,   0,   0,   0, 225, 223, 253, 255, 255, 253, 239,  35,   0,   0,   0,  64,
      3,   0,   6,   0, 240, 223, 253, 255, 255, 255, 255,  39,   0,  64, 112, 128,
      3,   0,   0, 252, 224, 255, 127, 252, 255, 255, 251,  47, 127,   0,   0,   0,
    254, 255, 255, 255, 255, 255,  13,   0, 214, 247, 255, 255, 175, 255,  13,  32,
     95,   0,   0, 240,   1,   0,   0,   0, 255, 254, 255, 255, 255,  31,   0,   0,
      0,  31,   0,   0, 255,   7,   0, 128,   0,   0,  63,  60,  98, 192, 225, 255,
      3,  64,   0,   0, 191,  32, 255, 255, 255, 255, 255, 247, 255,  61, 127,  61,
    255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 255, 255,  61, 255,
    255, 255, 255,   7, 255, 255,  63,  63, 255, 159, 255, 255, 255, 199, 255,   1,
    255, 223,   3,   0, 255, 255,   3,   0, 255, 223,   1,   0, 255, 255,  15,   0,
      0,   0, 128,  16, 255,   5, 255, 255, 255, 255,  63,   0, 255, 255, 255, 127,
    255,  63,  31,   0, 255,  15, 255, 255, 255,   3,   0,   0, 255, 255, 127,   0,
    255, 255,  31,   0, 128,   0,   0,   0, 224, 255, 255, 255, 224,  15,   0,   0,
    248, 255, 255, 255,   1, 192,   0, 252,  63,   0,   0,   0,  15,   0,   0,   0,
      0, 224,   0, 252, 255, 255, 255,  63, 255,   1, 255, 255, 255, 255, 255, 231,
      0, 222, 111,   4,  63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15,
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  63,
     80, 253, 255, 243, 224,  67,   0,   0, 255, 127, 255, 255,  31, 120,  12,   0,
    255, 128,   0,   0, 127, 127, 127, 127, 224,   0,   0,   0, 254,   3,  62,  31,
    255, 255, 127, 248, 255, 127,   0,   0, 255, 255, 255,  31, 255,  31, 255, 255,
      0,  12,   0,   0, 255, 127,   0, 128,   0,   0, 128, 255, 252, 255, 255, 255,
    255, 249, 255, 255, 252,   7,   0,   0,   0,   0, 224, 255, 187, 247, 255, 255,
      7,   0,   0,   0,   0,   0, 252, 104,  63,   0, 255, 255, 255, 255,   7,   0,
      0, 128,   0,   0, 223, 255,   0, 124, 247,  15,   0,   0, 255, 255, 127, 196,
    255, 255,  98,  62,   5,   0,   0,  56, 255,   7,  28,   0, 126, 126, 126,   0,
    127, 127, 255, 255, 255,   3, 255, 255,  15,   0, 255, 255, 127, 248, 255, 255,
    255, 255, 255,  15, 255,  63, 255, 255, 255, 255, 255,   3, 127,   0, 248, 160,
    255, 253, 127,  95, 219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255,
      0,   0, 255,  15,   0,   0, 223, 255, 192, 255, 255, 255, 252, 252, 252,  28,
    255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 255, 255,   1,   0,
    255,   7, 255, 255,  15, 255,  62,   0, 255, 255,  15, 255, 255,   0, 255, 255,
     63, 253, 255, 255, 255, 255, 191, 145, 255, 255,  55,   0, 255, 255, 255, 192,
      1,   0, 239, 254,  31,   0,   0,   0, 255,   3,   3,   0, 128,   0, 255, 255,
    255, 255, 255,   0, 144,   0, 255, 255, 255, 255,  71,   0,  30,   0,   0,  20,
    255, 255, 251, 255, 255,  15,   0,   0, 127, 189, 255, 191,   0,   0,   1, 224,
    128,   7,   0, 128, 176,   0,   0,   0,   0,   0,   0,  15,  16,   0,   0,   0,
    255,   7,   0,   1,   0,   0,   0, 128, 127, 242, 111, 255, 255, 255,   0, 128,
      2,   0,   0,   0, 255, 252, 255, 255,  10,   0,   0,   0,   1, 248, 255, 255,
    255, 255,   7,   4,   0,   0,   1, 240, 255,   3,   0,  32, 255, 253, 255, 255,
      0,   0, 252, 255, 127, 251, 255, 255,  64,   0,   0,   0, 191, 253, 255, 255,
    255,   3,   0,   1, 255,  63,   0,   0, 248, 255, 255, 224, 255,   7,   1,   0,
     11,   0,   0,   0,   0,   0,   7,   0, 240,   0, 255, 255, 255,   7, 255,  31,
    255,   1, 255,   3, 255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255,
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255,
    253, 255, 255, 247, 255,  31, 128,  63,   0,  64,   0,   0,  15,   8,   0,   0,
    150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 255,  15,
    238, 251, 255,  15,   3,   0, 255, 255
};

static UINT8 id_start_table_2[888] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   0,   7,   8,   9,   4,  10,
      4,   4,   4,   4,  11,   4,   4,   4,   4,  12,  13,   4,  14,   0,  15,  16,
      0,   4,  17,  18,   4,   4,  19,  20,  21,  22,  23,   4,   4,  24,  25,  26,
     27,  28,  29,  17,   0,  30,  31,   0,  32,  33,  34,  35,  36,  37,  38,  39,
     40,  41,  42,  43,  44,  45,  46,  47,  48,  45,  49,  50,  51,  52,  46,   0,
     53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,   0,
     68,  69,  67,   0,  70,  71,  72,   0,  73,   0,  74,  75,  76,   0,   0,   0,
      4,  77,  78,  79,  80,   4,  81,  82,   4,   4,  83,   4,  84,  85,  86,   4,
     87,   4,  88,   0,  22,   4,   4,  89,  68,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  90,   1,   4,   4,  91,  92,  93,  93,  94,   4,  95,  96,   0,
      0,   4,   4,  29,   4,  97,   4,  98,  99,   0,  15, 100,   4, 101, 102,   0,
    103,   4, 104,   0,   0, 105,   0,   0, 106,  95, 107,   0, 108, 109,   4, 110,
      4, 111, 112, 113, 114, 115,   0, 116,   4,   4,   4,   4,   4,   4,   0,   0,
     89,   4, 117, 113,   4, 118, 119, 120,   0,   0,   0, 121, 122,   0,   0,   0,
    123, 124, 125,   4,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      4, 126,  99,   4,   4,   4,   4, 127,   4,  81,   4, 128, 103, 129, 129,   0,
    130, 131,  68,   4, 132,  68,   4,  82, 106,  12,   4,   4, 133,   4,   0,  15,
      4,   4,   4,   4,   4,   4,   4, 134,   4,   4,   4,   4,  75,   0,  15, 113,
    135, 136,   4, 137, 113,   4,   4,  22, 138, 139,   4,   4, 140,   4, 141, 142,
    143, 144,   4,  95, 139,  95,   0, 145,  25, 146,  67, 134,  32, 147, 148, 149,
      4,  14, 150, 151,   4, 152, 153, 154, 155, 156,  82, 157,   4,   4,   4, 144,
      4,   4,   4,   4,   4, 158, 159, 160,   4,   4,   4, 161,   4,   4, 162,   0,
    163, 164, 165,   4,   4,  93, 166,   4,   4, 113,  15,   4, 167,   4,  31, 168,
      0,   0,   0, 169,   4,   4,   4, 134,   0,   1,   1, 170,   4,  99, 171,   0,
    172, 173, 174,   0,   4,   4,   4,  88,   0,   0,   4, 104,   0,   0,   0,   0,
      0,   0,   0,   0, 134,   4, 175,   0,   4,  23, 176,  98, 113,   4, 177,   0,
      4,   4,   4,   4, 113,  15, 178, 160,   4, 179,   4, 111,   0,   0,   0,   0,
      4, 103,  98,  31,   0,   0,   0,   0, 180, 181,  98, 103,  99,   0,   0, 182,
     98, 162,   0,   0,   4, 183,   0,   0, 184,  98,   0, 134, 134,   0,  74, 185,
      4,  98,  98, 147,  93,   0,   0,   0,   4,   4,  14,   0,   4, 147,   4, 147,
      4, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4, 186,   0,   0,
    134, 187, 110,   0,   0,  15, 185, 103, 108, 188,   0,   0, 108,  22,  15,  14,
    108,  67, 189, 190, 108, 147, 191,   0, 192, 193,   0,   0, 194, 114,  99,   0,
     48,  45, 195,  56,   0,   0,   0,   0,   4, 104, 196,  56,   4,  22, 197,   0,
      0,   0,   0,   0,   4, 133, 198,   0,   4,  22, 199,   0,   4, 200,   0,   0,
     88,   0,   0,   0,   0,   0,   0,   0,   4, 193,   0,   0,   0,   4,   4, 201,
    202, 203, 204,   0,   0, 205, 175, 206, 207, 208, 209,   4, 210,   0,   4,  29,
    211, 133,  73, 212,  22,   0,   0,   0, 213, 175, 214, 215, 216,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 147,   0,   0,   0,   0,   0,  46,   0,   0,
      4,   4,   4,   4, 162,   0,   0,   0,   4,   4,   4, 133,   4,   4,   4,   4,
      4,   4, 111,   0,   0,   0,   0,   0,   4, 133,   0,   0,   0,   0,   0,   0,
      4,   4,  67,   0,   0,   0,   0,   0,   4,  29,  99,   0,   0,   0,  15, 217,
      4,  22, 111, 218,  22,   0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,
      4,   4, 219,   0, 166,   0,   0, 220,   4,   4,   4,   4,   4,   4,   4, 188,
      4,   4,   4,   4,   4,   4,  98,   0,  14,   0,   0,   0,   0,   0,   0,   0,
     99,   0, 221, 222,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 160,
      4,   4,   4, 223, 224,   0,   0,   0,   4,   4,  30,   4, 225, 226, 227,   4,
    228, 229, 230,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 231, 232,  82,
     30,  30, 126, 126, 211, 211, 150,   0,   4, 233, 234,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   4, 193,   4,   4,   4,   4,   4,   4, 185,   0,
      4,   4, 235,   0,   0,   0,   0,   0, 227, 236, 237, 238, 239, 240,   0,   0,
      4,   4,   4,   4,   4,   4, 113,   0,   4, 104,   4,   4,   4,   4,   4,   4,
    113,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4, 241,   4,   4,
      4,   4,   4,   4,   4,   4,   4,  73, 113,   0,   0,   0,   0,   0,   0,   0,
      4,   4,  17,   0,   0,   0,   0,   0
};

static UINT8 id_start_table_3[432] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  32,  33,  31,  31,
     34,  35,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  27,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  36,
      1,   1,   1,   1,  37,   1,  38,  39,  40,  41,  42,  43,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  44,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  45,  46,   1,  47,  48,  49,
     50,  51,  52,  53,  54,  55,   1,  56,  57,  58,  59,  60,  61,  62,  63,  64,
     65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  31,  76,  77,  78,  79,
      1,   1,   1,  80,  81,  82,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  83,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  85,  86,  31,  31,  87,  88,
      1,   1,   1,   1,   1,   1,   1,  89,   1,   1,   1,   1,  90,  91,  31,  31,
      1,  92,  93,  31,  31,  31,  31,  31,  31,  31,  31,  31,  94,  31,  31,  31,
     31,  31,  31,  31,  95,  96,  97,  98,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  99, 100,  31,  31,  31,  31,  31, 101, 102,  31,  31,  31,  31, 103,  31,
      1,   1,   1,   1,   1,   1, 104,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 105, 106,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 107,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 108,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 109,  31,  31,  31,  31,  31,
      1,   1,   1, 110,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 id_start_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,   9,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  21,  22,  23,   5,  24,  25,
      5,  26,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
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

static UINT8 indic_positional_category_table_1[748] = {
      0,   0,   0,   0,   8,   8,   8,   7,   0,   0,   8,   7,   1,   0,   7,   4,
      7,   1,   1,   1,   1,   8,   8,   8,   8,   7,   7,   7,   7,   1,   4,   7,
      0,   8,   1,   8,   8,   8,   1,   1,   0,   0,   1,   1,   0,   8,   7,   7,
      1,   0,   0,   4,   4,   0,   0,   5,   5,   1,   0,   0,   0,   0,   0,   7,
      0,   0,   8,   0,   0,   8,   8,   7,   7,   1,   1,   0,   0,   0,   0,   8,
      8,   0,   0,   8,   8,   1,   0,   0,   0,   1,   0,   0,   8,   8,   0,   0,
      1,   8,   0,   8,   8,  14,   0,   7,   7,   1,   0,   0,   0,   0,   8,   8,
      8,   8,   8,   8,   1,   0,   7,   8,  12,   0,   0,   5,  13,   1,   0,   0,
      0,   8,   8,  14,   0,   0,   7,   7,   8,   7,   7,   0,   0,   0,   4,   4,
      4,   0,   5,   5,   5,   8,   0,   0,   8,   0,   0,   0,   7,   0,   8,   8,
      9,   0,   8,   8,   0,   8,   1,   0,  14,   7,   7,   7,   7,   0,   8,  14,
     14,   0,  14,  14,   0,   7,   7,   0,   8,   8,   7,   7,   8,   0,   7,   7,
      7,   7,   7,   1,   1,   0,   4,   4,   5,   8,   8,   0,   7,   7,   8,   8,
      1,   0,   1,   0,   7,   4,  12,   4,   5,  13,   5,   7,   7,   8,   7,   7,
      1,   1,   1,   0,  15,  15,  15,  15,  15,   7,   0,   8,   8,   8,   8,   0,
      1,   1,   1,   8,   1,   0,   0,   0,  15,   0,   0,   0,   1,   1,   0,   0,
      0,   1,   0,   1,   0,   8,   0,   0,   0,   0,   7,   4,   0,   1,   8,   9,
      1,   1,   9,   9,   9,   9,   8,   8,   8,   9,   8,   8,   1,   0,   8,   8,
      0,   1,   1,   1,   1,   1,   1,   1,   0,   0,   1,   0,   7,   8,   8,   1,
      1,   4,   8,   8,   8,   8,   8,   1,   7,   0,   8,   7,  10,   1,   1,   0,
      1,   0,   7,   7,   7,   0,   0,   7,   7,   7,   7,   7,   7,   7,   0,   0,
      0,   8,   8,   8,   0,   0,   1,   7,   4,   8,   8,   7,   7,   1,   0,   7,
      7,   8,   0,   0,   0,   0,   8,   1,   0,   0,   7,   8,   1,   1,  12,  13,
      5,   4,   4,   4,   5,   5,   8,   7,   7,   8,   8,   8,   8,   8,   0,   8,
      8,   8,   1,   7,   7,  14,  14,   8,   7,   7,   1,   7,   7,   1,   8,   1,
      7,  15,  15,  15,   7,   7,  15,   7,   7,   0,   0,   0,   1,   4,   7,   8,
      0,   4,   1,   7,   0,   7,   8,   7,   8,   1,   1,   8,   1,   7,   4,   4,
      4,   4,   4,   8,   8,   0,   0,   1,   8,   7,   8,   8,   1,   1,   1,   3,
      9,  11,   4,   4,   5,   5,   8,  14,   8,   8,   7,   0,   0,   7,   1,   1,
      8,   1,   4,   7,   7,   8,   7,   8,   7,   7,   7,   4,   4,  12,   7,   7,
      4,   4,   8,   1,   6,   1,   1,   1,   1,   1,   8,   8,   8,   7,   6,   6,
      6,   6,   6,   6,   6,   0,   0,   0,   8,   0,   0,   7,   7,   1,   8,   7,
      1,   8,   0,   0,   0,   0,   0,   1,   1,   1,   8,   1,   1,   1,   4,   4,
      8,   1,   3,   2,   3,   0,   0,   0,   8,   1,   8,   4,   4,   8,   1,   7,
      4,   1,   1,   0,   8,   7,   0,   0,   1,  15,  15,   8,   8,  15,   7,  15,
     15,   7,   8,   8,   0,   0,   0,   4,   1,   8,   4,   7,   0,   7,   0,   0,
      1,   7,   7,   0,   0,   6,   1,   1,   0,   8,   6,   0,   8,   1,   1,   0,
      7,   8,   7,   0,   7,   4,   7,   1,   1,   8,   8,   7,   4,   8,   9,   9,
      4,   7,   1,   1,   8,   8,   8,  14,   0,   1,   1,   8,   1,   0,   4,   8,
      8,   8,  14,  14,   7,   0,   0,   4,   5,   7,   0,   0,   0,   7,   4,   7,
      7,   7,   1,   8,   8,   7,   1,   0,   1,   4,   8,  12,   5,   7,   5,   8,
      8,   7,   1,   1,   4,  12,   5,  13,   8,   8,   7,   1,   7,   8,   7,   1,
      7,   8,   4,   7,   0,   1,  10,   8,   1,   1,   4,   8,   7,   4,   0,   4,
      5,   0,   0,   8,   8,   7,   0,   8,   7,   8,   3,   1,   4,   0,   0,   0,
      0,   8,   1,   1,   8,   8,   1,   0,   8,   7,   8,   1,   1,   1,   8,   7,
      1,   4,   1,   8,   7,   8,   8,   0,   8,   8,   1,   8,   1,   0,   7,   1,
      7,   7,   7,   0,   8,   8,   0,   7,   1,   4,   7,   0
};

static UINT8 indic_positional_category_table_2[1016] = {
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
      0,   0,   0,   0,   0,   0,   0,  27,   6,  39,  40,  23,   0,  41,   0,   0,
     42,  43,  44,  23,   0,  45,   0,   0,  46,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  19,  47,  48,  49,  36,  50,   0,  15,   0,   0,
      0,   0,  16,  15,  51,  52,  53,  54,   0,   0,   0,   0,  33,   0,   0,   0,
      0,   0,   0,   0,  55,  28,  56,   0,  57,  58,  28,  59,   0,   0,   0,   0,
      0,   0,   0,   0,  55,  28,  60,  61,  57,  62,  28,  23,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,   0,  64,  65,  66,
      0,   0,   0,   0,  67,  68,  69,   1,  70,  71,   0,  72,  73,  73,  72,  73,
     73,  73,  73,  73,  73,  73,  73,  61,   0,  74,   0,   0,   0,   0,   0,   0,
      0,   0,  15,  75,  76,  77,  78,  79,   0,   0,   0,   0,   0,  33,  63,  10,
     80,  81,  82,  83,  84,  38,   0,   0,  85,  86,  82,  87,   0,   0,  33,  88,
      0,   0,   0,   0,  89,  61,   0,   0,   0,   0,   0,   0,  89,   0,   0,   0,
      0,   0,   0,   0,   0,  90,  77,  91,  92,  93,  94,  28,  95,   0,   0,  65,
     96,  97,   6,   0,  98,  82,  99,   0,   0,   0,   0,   0,  82, 100, 101,  82,
    102,   0,  83,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19, 103,   0,
      0,   0,   0,   0,   0, 104,  77,  56, 105,  94, 106, 107, 108,  28,  28, 109,
     28, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 110, 111, 112,
    113, 102,   0,   0,   0,   0,   0,   0,   0,   0,  19,   5,  28,   0,   0,   0,
    114,   0,   0,   0,   0,   0,   0,   0, 115, 116, 114,  63,   0,   0,   0,   0,
      0,   2,  46, 117,  46,   0,   0,   0,   0, 118, 119,   5,  28, 120,   0,   0,
      0,   0,   0,   0,  59, 121, 122,  73, 123, 124, 125,  22,   0, 126,   0,   0,
      0,   0,   0,   0,   0,   0,  19,   0,   0,   0,   0,   0,  38,   0,   0,   0,
     16,  16,  19,   0,   0,   0,   0,   0,  15, 127,   0,  61,   0,   0,   0,   0,
     83,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  82,  82,  82,
     82, 128,   0,   0,   0,   0,   0,   0,  28,  28,  28,  28,  23,   0,   0,  19,
      0,   0, 129,  63,   0,   0,   0,   0,   0, 129, 130,  60,  46,   0,   0,   0,
      0,   0,   0,   0,  19,  51, 131, 132, 133,   0,   0,   0,   0,   0,   0,   0,
      0,  65,   0,   0,   0,   0,   0,   0,   0,   0,  84, 134, 135, 136,   0,   0,
     19,   0,   0, 137,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 137,
      0,   0,   0,   0, 110, 138, 139, 140,  65,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 141, 142,   0, 143,   0,   0,  15,  55, 144,  26,   0,   0,   0,   0,
    145, 146,   0,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 147,   0,
    148,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28,  73,
    122,  59,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 149, 150,  18,   0,
     59,   0,   0,   0,   0,   0,   0,   0,   0,  19,   9, 151, 147,  38,   0,   0,
      0,  45,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 129,   0,   0,   0,
      0,   0,   0,   0,  15, 152,  73, 153,  39,   0, 154, 155,   0,   0,   0,   0,
      0,   0,   0,  48, 156, 110,   0,  16,   0,   0,   0,   0,   0,   0,   0,  19,
    149,   5, 147,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 129,  80,
      6, 157,  13, 158,   0,  15,   0,   0,  33,  27,  28,  38,  28,  38,   0,   0,
      0,   0,   0,   0,   0, 159,  73, 122, 160, 161,   0,   0,   0,   0,   0,  16,
      0,   0,   0,   0, 149,  73, 162, 163, 164,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  15, 152,  63, 165, 166,  61,   0,   0,   0,   0,   0,   0,  63,
      0,   0,   0,   0,  48,  73, 150, 167,  38,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  19, 168, 122, 166,   0,   0,   0,   0,   0,   0,   0,   0,   0, 169,
     51, 170,   5,   0,   0,   0,   0,   0,   0,   0,   0, 149,  60,  28,  18,   0,
      0,   0,   0,   0,  82, 171, 172, 173, 174,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 159,  73,  27,  82,  61, 175,   0,   0,   0,   0,   0,   0,
    176,  28, 177,   0,   0,   0,   0,   0,   0,   0,   0,   0, 129,   5, 178,  56,
      0,   0,   0,   0, 176,   1,   4,   0,   0,  28,   9,  73,  73, 179,  38,   0,
      0,   0,   0,  15,   9,  56,  28, 166,   0,   0,   0,   0,  10,  73,  73,  73,
     73,  73, 115,  73, 180, 181,   0,   0,   0,   0,   0,   0,  84, 177,  16,  95,
    182, 183,   0,   0,   0,   0,   0,   0,   0,   0,  33, 184, 185, 148,   0,   0,
      0,   0,   0,   0,  19, 186,   0,   0
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
      0,   0,   0,   0,   0,   0,   0,   0,  42,  42,  43,  43,   0,  44,  45,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  46,   0,   0,   0,  47,  48,   0,
     49,   0,  50,  51,   0,   0,   0,   0,  52,  53,  54,  55,  56,  57,   0,  58,
      0,  59,   0,   0,   0,   0,  60,  61,   0,   0,   0,   0,   0,   0,   0,  62,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     64,  65,   0,   0,  66,  67,  68,  69,   0,  70,  71,   0,   1,  72,  73,  74,
      0,  75,  76,  77,   0,  78,  79,  80,   0,   0,   0,   0,   0,   0,   0,  81,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     82,  83,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     84,  85,  86,   0,  56,  87,   0,   0,  88,  89,  90,  91,  56,  92,  93,   0,
      0,  94,   0,   0,   0,   0,  95,  96,  23,  97,  98,  99,   0,   0,   0,   0,
      0, 100, 101,   0,   0, 102, 103,   0,   0,   0,   0,   0,   0, 104, 105,   0,
      0, 106, 107,   0,   0, 108,   0,   0, 109, 110,   0,   0,   0,   0,   0,   0,
      0, 111,   0,   0,   0,   0,   0,   0,   0, 112, 113,   0,   0,   0, 114, 115,
    116, 117, 118,   0, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 120,   0,   0, 121, 122,   0,   0,   0, 123, 124,   0, 125,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 126,   0,   0,   0,   0,   0,   0,   0,   0
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

static UINT8 indic_syllabic_category_table_1[302] = {
      0,   0,   0,  12,  24,  24,  12,   0,  28,  28,   2,   2,   2,  32,  35,  35,
     35,   5,   5,   5,  34,  34,  23,   1,  34,  31,   0,   4,   4,   0,   0,  34,
     12,   2,   0,  35,  35,   0,   5,   0,  34,   0,   6,   0,   0,   5,   2,   0,
     28,   0,   0,   2,  23,   0,   2,  18,  12,  12,   0,  11,   4,   4,   4,  23,
     23,  23,   2,  21,   2,  35,   0,   1,   0,  17,  17,   0,   5,  26,  26,   1,
     13,   0,   6,   6,   6,  34,  31,   0,  26,   0,  30,  30,  10,   2,  26,  34,
     11,  11,   0,  28,   0,  23,   8,   8,   8,  15,  15,  15,   0,  15,  15,   0,
      5,  35,  35,  34,   2,  30,  32,  19,  26,  11,  11,   5,  34,  30,  30,   5,
      5,  34,  34,   5,  11,  34,   5,  30,  34,  27,  27,  28,  16,  10,  28,  26,
     19,  28,   1,  28,  12,   5,  34,  15,   7,   7,   2,   7,  34,  28,   5,  33,
     33,  33,  29,  29,  29,   0,  34,   7,  24,   0,   5,  11,  11,  15,   9,  15,
     19,  34,  26,  28,   2,  16,  32,  35,  23,  34,  31,   5,   5,  15,  26,  19,
      1,   5,  26,  26,  28,  23,   4,  17,  17,   4,  22,  20,  34,  35,   5,   2,
     33,  15,  15,   5,  31,   2,  33,  30,   7,  26,  16,  32,   5,  23,  34,  11,
     11,   0,  29,  30,   0,  32,  19,   0,   5,   7,   7,  34,  30,  26,   0,  19,
     32,  17,  17,  35,   3,   3,   0,  25,  34,  19,  33,   5,  31,   1,  14,  14,
     34,   2,   0,  24,   2,  31,  23,  18,  34,  23,  28,   2,  17,  17,  31,  23,
      1,   0,  32,  31,  32,  34,  34,  26,   2,  26,  19,  14,  11,  13,  11,  23,
      5,  28,  26,   2,  14,  11,  11,  12,  18,  19,  13,  11,  12,  34
};

static UINT8 indic_syllabic_category_table_2[2000] = {
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
      9,   9,   9,   9,   9,   0,  35,  10,  10,  10,  20,  10,  20,  10,  12,   0,
      0,   0,  15,  20,   9,  19,   0,   0,   5,   6,  17,   7,   7,   7,  18,   7,
      9,   9,  22,   9,   9,   0,  11,  10,   0,   0,  15,  20,   0,   0,   0,  19,
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
      7,   8,   9,   9,   9,   9,  19,   9,   9,  10,  44,   0,   0,   0,   0,   0,
      7,   8,   9,   9,   9,   9,   9,   9,   9,  10,   0,   0,   0,   0,   0,   0,
     19,  10,   0,   0,   0,   0,   0,   0,   9,  56,   7,   7,   7,   7,   7,   7,
      7,   7,   0,  10,  10,  10,  10,  10,  10,  10,  10,   6,  68,  69,  70,   4,
     71,  72,   0,   0,   0,   0,  73,   0,  74,   9,   9,   9,   9,   9,   9,   9,
     10,  10,  10,  10,  75,  53,   0,   0,  76,  77,  76,  76,  76,  78,   0,   0,
      9,  79,  80,  80,  80,  80,  80,   0,  81,  81,  82,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   0,   0,  10,  10,  10,  10,  10,  10,  10,  10,
     83,  76,  76,  76,  45,   0,   0,   0,   2,   2,   2,   2,   2,  84,   0,   0,
      9,   9,   9,  64,  10,  10,   0,   0,   9,   9,   9,   9,   9,   9,  56,   7,
      7,   8,  85,  86,  76,  87,  53,  55,  88,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  58,  45,  45,  89,  24,  49,   5,  90,  91,   7,   7,   7,   7,   7,
      9,   9,  92,  10,  10,  10,  10,  10,  10,  10,  93,   9,   9,   9,   0,   0,
     90,  91,   7,   7,   7,   9,   9,   9,  94,  53,  10,  10,  10,  95,  53,   9,
      2,   2,   2,   2,   2,  96,   9,  76,   9,   9,   7,  92,  10,  10,  10,  10,
     76,  97,   0,   0,   0,   0,   0,   0,   9,   9,  53,  10,  10,  10,  83,  76,
     76,  76,   5,  98,   0,   0,   0,   0,   2,   2,   2,   2,   2,   0,  22,   9,
     30,  14,  30,  30,  30,  30,  30,  30,  30,   0,   0,   0,   0,   0,   0,   0,
      0,  41,  99, 100,  30,   3,   0,   0,   0,   0,   0,   0,   0,  49,   0,   0,
      0,   0,   0,   0,   0,   0, 101,   0,  28,  28,   3,   0,   0,   0,   0,   0,
      0,   0,  24,   0,   0,   0,   0,   0,   0,   4,  24,   0,   0,   0,   0,   0,
     14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,
      7, 102,   7,  93,   9, 103,   9,   9,   9,  64,  10,  10,   0,   0,  44,   0,
      9,   9,   9,   9,   9,   9,   9,  80,  80,   9,   9, 104, 105,   9,   9,   9,
     94, 103,   0,   0,   0,   0,   0,   0,   6,   7,   7,   7,   7,   7,   7,   7,
      7,   9,   9,   9,   9,   9,   9,   9,   9,   9,  66,  10,  10,  10,  10,  10,
     10,  10, 106,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,
     30,   5,   0,   0,   0,   0,   0,  57,   2,   2,   2,   2,   2,   9,   9,   9,
      9,  80,  80,  80,  80, 107,  45,   0,   9,   9,   9,  64,  10,  10,  10,  83,
     76, 108,   0,   0,   0,   0,   0,   0,   5, 109,   7,   7,   8,   9,   7,   8,
      9, 110,  10,  10,  10,  10, 111,  48,  43,   0,   0,   0,   0,   0,   0,   0,
      9,   9,  64,  22,   9,   9,   9,   9,   2,   2,   2,   2,   2,   9,   9,  19,
      7,   7,   7,   9,   9,   9,   9,   9,   9,   9,   9,   9,  64,  10,  10,  10,
     10, 111,  48, 112,   0,   0,   0,   0,  76,  76,  76,  76,  76,  76,  76,   0,
     22,   9,  28,   3,   0,  67,  45,   9,  10,  10,  10,  10,  10,  10,  10,  62,
    113,  82,   0,   0,   0,   0,   0,   0,   7,   9,   9,   9,   9,  64,  10,  10,
      0,   0, 114, 115,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   7,
     56,   9,   9,   9,   9, 116,  76,  76,  76, 117,  10,  10,  10,  20, 118,   0,
     64,  10,  15,  20,   0,   0,  10,   6,   9,   9,  22,   9,  22,   9,   9,   9,
      9,   9,   9,   0,  32,  26,   0, 119,   2,   2,   2,   2,  84,   0,   0,   0,
      5, 120, 121,   7,   7,   7,   7,   7,   9,   9,   9,   9,  10,  10,  10,  10,
     10,  10,  10,  43,   0,   0,   0,   0,   0, 122, 122, 122, 122, 122, 122, 122,
    122, 122, 122,   2,   2,   2,   2,   2,   0,   0,   0,   0,   0,   0,   0, 123,
      5,  91,   7,   7,   7,   7,   8,   9,  10,  10,  10,  10,  12,  26,   0,   0,
      5,  91,   7,   8,   9,   9,   9,   9,   9,   9,   9,  64,  10,  10,  10,  10,
     10, 124,  44,   2,   2,   2,   2,   2,   0,   0,  64,  65,   0,   0,   0,   0,
     80,  80, 125,   9,   9,   9,   9,   9,   9, 110,   0,   0,   0,   0,   0,   0,
      5,  91,   7,   7,   7,   7,   7,   7,   8,   9,   9,   9,   9,   9,   9,   9,
      9,  64,  10,  10,  10,  10,  10,  10, 126, 127,   0,   0,  49,  92,  20, 128,
    129,   2,   2,   2,   2,   2,   2,   2,   2,   2,  84,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   9,   9,   9,   9,   9,  22,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,  10,  10,  10,  10, 130, 131,   0,   0,   0,  14,
      7,   7,   9,  19,  19,   9,   9,  22,   9,   9,   9,   9,   9,   9,   9,  22,
      9,   9,   9,   9,  19,   0,   0,   0,   7,   7,   7,   7,   7,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9, 103,  10,  10,  10,  10, 132,  44,   0,   0,
      5,   6,  17,   7,   7,   7,  18,  17,  19,   9,  22,   9,   9,  50,  11,  10,
      0,   0,   0,  15,   0,   0,   0,   5,   7,  10,   0,  30,  30,  30,  14,   0,
     30,  30,  14,   0,   0,   0,   0,   0,   7,   7,   7,   7,   7,   7,   7,   9,
      9,   9,  64,  10,  10,  10,  10,  10,  10, 106,   6,  11,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   0,   0, 133, 134,   0,   0,   0,   0,   0,   0,   0,
     17,   7,   7,   7,   7,   7,   7,   8,  10,  10,  10,  10,  10,  10,  10, 128,
      6, 135, 136,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,  64,
     10,  10,  10,   0,  10,  10,   5, 137,  26,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,  10,   0,  10,  10,  10,  10,  10,  10, 128, 137,
     20,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9, 103, 138,  10,
     10,  10,  10, 135,  19,   0,   0,   0,   9,   9,   9,   9,   9,  19,  29,  48,
     10,  10,  10,  10,  10, 139,   0,   0,   2,   2,   2,   2,   2,   2,   0,   0,
     10,  10,  10, 128, 137,  26,   0,   0,   7,   7,   7,  18,  17,   0,   9,   9,
      9,   9,  22,  19,   9,   9,   9,   9,  10,  10,  10,  15,  20,  25, 140, 141,
    142, 143,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   0,   7,   7,   9,
     64,  10,  10,  10,   0,  10,  10,   6, 126,   0,  20,   0,   0,   0,   0,   0,
     57,  10,  10,  10,  10,  65,   9,   9,   9, 144, 145,   5,   6, 146,  48, 147,
      0,   0,   1, 119,   0,   0,   0,   0,  57,  10,  10,  10,  10,  10,   9,   9,
      9,   9, 127, 127, 127,  76,  76,  76,  76,  76,  76,   6, 148,   0,  35,   0,
      7,   7,   7,   7,  18,   7,   7,   9,  10,  10,  10,  20,  10,  10,   5, 137,
    136,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,  84,   0,
      0,   9,   9,   9,   9,   9,   9,   9,   0,  53,  53,  53,  53,  53,  53,  53,
     10,  10, 128,  23,   0,   0,   0,   0,   7,   7,   7,  18,   7,  17,   9,   9,
     64,  10,  10,  20,   0,  20,  10,  15,   6,  92,  95, 149,   0,   0,   0,   0,
      7,   7,   7,  17,  18,   7,   9,   9,   9,   9,   9,   9,   9,  10,  10,  20,
     10,  15, 128,  59,   0,   0,   0,   0,   9, 150,  10,  20,   0,   0,   0,   0
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
     88,  89,  90,  89,  90,  91,  88,  92,   8,   8,  93,  94,  95,  96,   2,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     97,  62,  98,  99,  25,   8, 100, 101,   8,   8, 102, 103, 104, 105,   0,   0,
      8, 106,   8,   8, 107, 108, 109, 110,   2,   2,   0,   0,   0,   0,   0,   0,
    111,  90,   8, 112, 113,   2,   0,   0, 114,   8, 115, 116,   8,   8, 117, 118,
      8,   8, 119, 120, 121,   0,   0,   0,   0,   0,   0,   0,   0, 122, 123, 124,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 125,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    126, 127,   0,   0,   0,   0,   0, 128, 129,   0,   0,   0,   0,   0,   0, 130,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 131,   0,   0,   0,
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
    132,   8, 133,   0,   8, 134, 135, 136, 137, 138,   8, 139, 140,   2, 141, 142,
    143,   8, 144,   8, 145, 146,   0,   0, 147,   8,   8, 148, 149,   2, 150, 151,
    152,   8, 153, 154, 155,   2,   8, 156,   8,   8,   8, 157, 158,   0, 159, 160,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 161, 162, 163,   2,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    164, 165,   8, 166, 167,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    168,  90,   8, 169, 170, 171, 172, 173, 174,   8,   8, 175,   0,   0,   0,   0,
    176,   8, 177, 178, 179, 180,   8, 181, 182, 183,   8, 184, 185,   2, 186, 187,
    188, 189, 190, 191,   0,   0,   0,   0, 192, 193, 194, 195,   8, 196, 197,   2,
    198,  15,  16, 199,  33, 200, 201, 202,   0,   0,   0,   0,   0,   0,   0,   0,
    203,   8,   8, 204, 205, 206, 207,   0, 208,   8,   8, 209, 210,   2,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 203,   8, 211, 212, 213, 214,   0,   0,
    203,   8,   8, 215, 216,   2,   0,   0, 195,   8, 217, 218,   2,   0,   0,   0,
      8, 219, 220, 221,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    195,   8, 190, 222,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    223, 224,   8, 225, 226,   2,   0,   0,   0,   0, 227,   8,   8, 228, 229,   0,
    230,   8,   8, 231, 232, 233,   8,   8, 234, 235,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    236,   8, 211, 237, 238,  70, 239, 240,   8, 241,  76, 242,   0,   0,   0,   0,
    243,   8,   8, 244, 245,   2, 246,   8, 247, 248,   2,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 249,
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

static UINT8 joining_group_table_1[480] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     95,   0,   6,   6,  94,   6,  95,   6,   7,  92,   7,   7,  19,  19,  19,  10,
     10,  79,  79,  84,  84,  82,  82,  90,  90,   4,   4,  17,  17,  13,  13,  13,
      0,  15,  77,  27,  31,  71,  73,  24,  94,  95,  95,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  77,
      0,   6,   6,   6,   0,   6,  94,  94,  95,   7,   7,   7,   7,   7,   7,   7,
      7,  19,  19,  19,  19,  19,  19,  19,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  79,  79,  79,  79,  79,  79,  79,  79,  79,  84,  84,  84,  82,  82,  90,
      4,  15,  15,  15,  15,  15,  15,  77,  77,  17,  88,  17,  27,  27,  27,  17,
     17,  17,  17,  17,  17,  31,  31,  31,  31,  73,  73,  73,  73,  75,  30,  19,
     92,  25,  25,  20,  94,  94,  94,  94,  94,  94,  94,  94,  13,  97,  13,  94,
     95,  95,  96,  96,   0,  92,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  79,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  84,  82,   4,   0,   0,  30,
      5,   0,   8,  18,  18,  11,  11,  23,  89, 100,  26,  93,  93,  98,  99,  28,
     32,  72,  74,  85,  16,  12,  76,  80,  83,  78,  11,  86,  91,   8,  18,  11,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 101,  29,  14,
      7,   7,   7,   7,   7,   7,   7,  19,  19,  10,  10,  79,  84,   4,   4,   4,
     15,  15,  17,  17,  17,  71,  71,  73,  73,  73,  31,  79,  79,  84,  19,  19,
     84,  79,  19,   6,   6,  13,  13,  95,  94,  94,   9,   9,  19,  84,  84,  27,
     37,  34,  40,  43,  38,  39,  33,  41,  35,  36,  42,   0,   0,   0,   0,   0,
      7,   7,  19,  90,  15,  77,  31,  71,  95,  95,  79,  94,  81,   0,  10,  82,
     17,  87,  79,   4,  27,   0,   7,   7,   7,  79,  95,   1,   3,   2,   7,   7,
      7,  19,  17,   4,   3,  19,  19,  31,   0,   0,   0,   0,   0,   0,   0,   0,
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
      0,   0,   0,   0,   0,   0,  20,   0,   0,   0,  21,  22,  23,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24,  25,  26,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     27,  28,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
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

static UINT8 joining_type_table_1[1176] = {
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
      1,   1,   4,   4,   4,   0,   4,   1,   1,   4,   4,   1,   1,   0,   1,   1,
      5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   5,   0,   5,   0,   0,   0,
      5,   0,   0,   0,   0,   5,   0,   0,   0,   0,   5,   5,   0,   0,   0,   0,
      0,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,
      0,   5,   5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,
      0,   5,   5,   0,   0,   0,   0,   0,   0,   5,   5,   0,   0,   0,   0,   5,
      5,   0,   0,   5,   5,   5,   0,   0,   5,   5,   0,   0,   0,   5,   0,   0,
      0,   5,   5,   5,   5,   5,   0,   5,   0,   0,   5,   5,   5,   5,   5,   5,
      0,   0,   0,   0,   5,   0,   0,   5,   0,   0,   0,   0,   0,   5,   5,   0,
      0,   0,   5,   0,   0,   0,   0,   0,   5,   0,   0,   0,   5,   0,   0,   0,
      5,   0,   0,   0,   0,   0,   5,   5,   5,   0,   5,   5,   5,   5,   0,   0,
      0,   0,   0,   0,   5,   5,   0,   0,   0,   0,   0,   5,   5,   0,   0,   0,
      0,   0,   5,   5,   5,   0,   5,   0,   0,   5,   0,   0,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   0,   5,   5,   5,   5,   5,   0,   0,   0,
      5,   5,   5,   5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   5,   0,   5,
      5,   5,   5,   5,   5,   0,   5,   5,   0,   0,   0,   0,   0,   5,   5,   5,
      5,   0,   5,   5,   5,   5,   5,   5,   0,   5,   5,   0,   0,   5,   5,   0,
      5,   5,   0,   0,   0,   0,   5,   5,   0,   0,   5,   0,   0,   5,   5,   0,
      0,   0,   5,   5,   5,   0,   0,   0,   0,   0,   0,   0,   5,   5,   0,   5,
      0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   2,   5,   5,   5,   0,   0,
      1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   5,   1,
      1,   5,   1,   0,   0,   0,   0,   0,   5,   5,   5,   0,   0,   0,   0,   5,
      0,   5,   5,   5,   0,   0,   0,   0,   5,   0,   0,   5,   0,   0,   0,   0,
      5,   0,   5,   0,   0,   5,   5,   5,   0,   0,   0,   0,   5,   0,   5,   5,
      0,   0,   5,   5,   5,   5,   0,   0,   5,   5,   0,   5,   5,   5,   0,   0,
      5,   5,   0,   0,   0,   5,   0,   5,   0,   0,   0,   0,   5,   5,   5,   5,
      5,   5,   5,   5,   0,   0,   5,   5,   5,   5,   5,   0,   5,   5,   5,   5,
      0,   0,   0,   5,   0,   2,   5,   5,   0,   0,   5,   5,   5,   5,   5,   0,
      0,   0,   5,   0,   0,   0,   5,   0,   0,   0,   0,   5,   0,   0,   0,   0,
      1,   1,   3,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   5,   5,
      5,   5,   0,   0,   5,   5,   0,   0,   0,   5,   5,   5,   5,   5,   5,   0,
      5,   0,   5,   5,   5,   0,   0,   5,   0,   5,   5,   5,   0,   5,   5,   0,
      1,   1,   1,   1,   1,   4,   0,   4,   0,   4,   4,   0,   0,   3,   4,   4,
      4,   4,   4,   1,   1,   1,   1,   3,   1,   1,   1,   1,   1,   4,   1,   1,
      1,   4,   0,   0,   4,   5,   5,   0,   0,   0,   0,   1,   1,   1,   1,   4,
      1,   4,   1,   4,   4,   4,   1,   1,   1,   4,   1,   1,   4,   1,   4,   4,
      1,   4,   0,   0,   0,   0,   0,   0,   0,   4,   4,   4,   4,   1,   1,   0,
      3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   4,   1,   5,   5,   5,   5,
      1,   1,   1,   4,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   5,   5,
      5,   1,   1,   1,   4,   0,   0,   0,   1,   0,   1,   1,   4,   4,   4,   0,
      1,   4,   4,   1,   1,   4,   1,   1,   0,   1,   4,   4,   1,   0,   0,   0,
      0,   4,   1,   3,   0,   0,   0,   0,   0,   0,   0,   5,   5,   5,   5,   0,
      0,   5,   5,   5,   5,   0,   0,   5,   5,   5,   0,   0,   5,   0,   5,   5,
      5,   0,   5,   0,   0,   0,   0,   5,   5,   0,   5,   5,   0,   0,   0,   0,
      5,   5,   5,   0,   0,   5,   0,   5,   0,   0,   0,   5,   0,   5,   0,   0,
      0,   0,   5,   5,   5,   5,   0,   5,   0,   0,   0,   5,   5,   0,   5,   0,
      5,   0,   0,   5,   5,   5,   5,   0,   5,   0,   5,   5,   0,   5,   5,   0,
      0,   0,   5,   0,   5,   5,   0,   5,   5,   5,   5,   0,   0,   5,   5,   5,
      5,   0,   0,   5,   5,   5,   5,   5,   5,   5,   0,   5,   5,   0,   5,   5,
      1,   1,   1,   1,   5,   5,   5,   5
};

static UINT8 joining_type_table_2[1256] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   0,   0,
      3,   4,   0,   0,   0,   0,   0,   0,   0,   0,   5,   2,   2,   2,   2,   6,
      7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   8,   9,  10,  11,  12,
     13,  14,   2,   2,   0,  15,  16,  12,  12,  17,  17,  18,  12,  12,  12,  12,
     19,  20,  21,  22,  22,  23,   0,  24,   0,  25,  26,  27,  12,  28,   2,   2,
      2,  29,  12,  30,  12,  31,  32,  18,   0,   0,   0,   0,  33,   2,  34,   0,
      0,  35,  12,  12,  12,  36,  37,  38,   0,   0,  33,  39,  40,  41,   0,   0,
     42,  43,  44,  45,  46,  47,   0,   0,   0,   0,   0,   0,  12,  48,  49,  43,
     12,   0,   3,   2,  39,   2,   2,   2,  50,   0,   0,   0,   0,   0,   0,  51,
      5,  52,   5,   0,  53,   0,   0,   0,  54,   0,   0,   0,   0,   0,   0,  55,
     56,   1,   0,   0,  53,   0,   0,  57,  58,   0,   0,   0,   0,   0,   0,  55,
     59,  60,  54,   0,   0,   0,  61,   0,  62,  52,   0,   0,  53,   0,   0,  63,
     54,   0,   0,   0,   0,   0,   0,  64,  56,   1,  65,   0,  53,   0,   0,   0,
     66,   0,   0,   0,   0,   0,   0,   0,  34,   1,   0,   0,   0,   0,   0,   0,
     67,   0,   0,   0,   0,   0,   0,  33,  68,  69,  65,   0,  53,   0,   0,   0,
     57,  70,   0,   0,  53,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,  71,
     56,   1,   0,   0,  53,   0,   0,   0,  54,   0,   0,   0,   0,   0,   0,   0,
      0,  66,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  73,  50,
     25,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  73,  75,
      0,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,  77,  54,
      0,   0,   0,   0,   0,   0,   5,  74,  78,  79,   2,   5,   2,   2,   2,  75,
     57,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  79,  80,  81,
      0,   0,   0,  82,  34,   0,  56,   0,  83,   1,   0,   1,   0,   0,   0,   0,
      0,   0,   0,  79,   0,   0,   0,   0,   0,   0,  84,   0,   0,   0,  84,   0,
      0,   0,  53,   0,   0,   0,  53,   0,   0,   0,   0,   0,   0,   0,  85,  76,
     57,   5,  37,   1,   0,   0,   0,   0,  86,  87,   0,   0,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  88,  89,  12,  12,  12,  12,  90,   0,   0,
      0,   0,   0,   0,  91,  34,  66,  92,   0,   0,  25,  93,   0,   0,   0,   0,
      0,   0,  57,  74,  94,  75,   3,  22,   0,   0,   0,   0,   0,   0,   2,   2,
     34,   0,   0,   0,   0,   0,   0,   0,  37,   0,   0,   0,   0,   0,  95,   8,
     66,   0,   0,   0,   0,   3,  37,   0,   4,   0,   0,   0,  96,  97,   0,   0,
      0,   0,   0,   0,  57,  98,   4,   0,   0,   0,   0,   0,   0,  99, 100,   0,
      0,   0, 101,   2,  80,  52,  55,   4,   2,   2,   2,   2,   2,   2,   2,  39,
      0, 102,   0,   0,   0, 103,   0,   0,   0,   0,   0,   0,  75,  63,   0,   0,
      0,   0,   2,   2,   2,   2,  34,   0,   0,   0,   0,   0,   0,  25,   4,   0,
      0,   0,   0,   0,   0,   0,   0,  25,   0,   0,   0,   0,   2,   2,   2,   2,
      0,   0,   0,   0,   0,  96,   0,   0,   0,   0,   0,  58,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  25, 101,  76,   0,   0,   0,  33,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   4,   0, 104, 105,   0,   0,  65,  55,   0,   0,
     12,  12,  12,  12,  12,  12, 106,   0,  70,   0,   0,   0,   2,   2,   4,  25,
      0,   0,   0,   0,  33,  76,   0,   0,  25,   2,   4,   0,   0,   0,   0,   0,
     50,   0,   0,   0,   0,   0, 107, 108,   0,   0,   0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0, 109,  81,   0, 105,  55,   0,   0,   0,   0,   0,  55,
      0,   0,   0,   0,   0,   0, 110,  68,  54,   0,   0,   0,   0,  70,  57,   0,
      0,   0,   0,   0,   1,  52,   0,   0,   0,   0,   0,  57,   0,   0,   0,   0,
      2,   2,   0,   0,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,  92,
      0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,  34,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  33,  50, 111,  99,   0,   0,   0,   0,   0,  91,
    112, 113, 114, 115, 116, 117,   0,   0, 118, 119, 120,   0,   0, 121,   0,   0,
    122,  12,  12,  12, 123,   0,   0,   0,   0,   0,   0,   0,   0,  71,   0,   0,
      0,   0,   0,   0,   0,   0, 124,  12, 125,   2, 126,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 127, 128, 129, 130,   0,   0,   0,   0,   0,   0,
     54,   0,   0,   0,   0,   0,   0,   2,  74,   0,   0,   0,   0,   0,   0,  25,
      4,   0,   0,   0,   0,   0, 131,  58,  50,   0,   0,   0,  25,  40,  75,   0,
      0,   0,   0,   0,   0,   0, 105,   0,   4,   0,   0,   0,   0,   0,  33,  74,
      0, 132,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 133,  57,
      0,   0,   0,  25,   3,  50,   0,   0,  34,   0,   0,   0,  33,  75,  75,   0,
      0,   0,   0,   0,   0,   0,   0,   2,  72,   0,   0,  57,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3, 134, 135,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  96,  85,  34,   0,   0,  70,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   3, 136,   0,   0,   0,   0,   0, 137,   6,   0,
      0,   0,   0,  79, 138,  37,   0,   0,   0,   0,   0,   0,   0,  25,   2,  58,
      0,   0,   0,   0,   0,   0,   0, 139, 105,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  99,  53,  34,   0,   0,   0,   5,  50,   0,   0,   0,   0,   3, 140,
     25,   0, 109,  92,   0,   0,   0,   0,   0,  63,  74,   4,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  74,   6,   0,   0,  63,   2,   2,  63, 141,   0,
      0,   0,   0,   0,   0,   0, 109, 142,   6,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  98,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  71,   0,
      0,   0,   0,   0,   0,   0,   2,  34,   0,   0,   0,   0,   0,   0,  75,   0,
      0,   0,   0,   0,   0,   0,  74,   0,   0,  25,   0,   0,   0,   0,   0,   0,
      0,  25,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0,
      0,   0,   0,  65,  37,   0,   0,   0,   0,   0,   0,   0,  25,   4,   3,   2,
    143,  37,   0,   0,   0,  96,   0,   0,  84,   0,   0,   0,   0,   0,   0,   0,
      2,   2,   2,   2,   2,   2,  74,   3,   2,   2,   2,   2,   2,  75,   1,   0,
     55,   0,   0,   3,   5,   2,   0,   0,  74,   2,   2, 144, 145,  50,   0,   0,
      0,   0,   0,   0,   0,  99,   0,   0,   0,   0,  74,   0,   0,   0,   0,   0,
     12,  12,  12,  12,  12,  12,  12,  12, 146,  37,   0,   0,   0,   0,   0,   0,
     54,   0,   0,   0,   2,   2,   2,   2
};

static UINT8 joining_type_table_3[960] = {
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   3,   0,   0,
      0,   0,   4,   0,   0,   0,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  23,  25,  26,  27,  28,  29,
     30,  31,  26,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  49,  50,  51,  52,
     53,  54,  55,   0,  56,   0,   0,   0,  57,  58,  59,  60,  61,  62,  63,  64,
     65,   0,   0,  66,   0,   0,   0,  67,   0,   0,   0,   0,   0,   0,   0,   0,
     68,  69,   0,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  71,   0,  72,   0,  73,   0,   0,   0,   0,   0,   0,   0,   0,
     74,   0,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  76,  77,  78,   0,   0,   0,   0,
     79,  80,   0,  81,  82,  83,  84,  85,  86,  87,  88,  89,   0,   0,   0,  90,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  91,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  92,   0,   0,  72,   0,   0,   0,  93,
      0,   0,   0,   0,   0,   0,   0,  94,   0,   0,   0,  95,   0,  96,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  97,   0,   0,  98,   0,   0,  99,   0,
      0,   0,   0,   0, 100,   0,   0,   0,   0,   0, 101,   0, 102, 103, 104, 105,
    106, 107, 108,   0, 109, 110, 111, 112, 113,   0,   0, 114,  33, 115,   0,   0,
    116, 117, 118, 119,   0,   0, 120, 121, 122,  60, 123,   0, 124,   0,   0,   0,
    125,   0,   0,   0, 126, 127,   0, 128, 129, 130, 131,   0,   0,   0,   0,   0,
    132,   0, 133,   0, 134, 135, 136,   0,   0,   0,   0, 137,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    138,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 139, 140,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 141, 142, 143,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 144,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 145, 146,   0,   0, 147,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 148, 149, 150,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    151,   0,   0,   0, 140,   0,   0,   0,   0,   0,   0, 152,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0, 153, 154, 155,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    156,   2,   0,   0,   2,   2,   2,   3,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 joining_type_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   4,   4,   4,   4,   6,
      7,   8,   4,   9,   4,   4,  10,   4,   4,   4,   4,  11,   4,  12,  13,   4,
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
     14,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
};

UINT32 lookup_joining_type(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = joining_type_table_4[block];
    offset = (codepoint >> 6) & 0x3F;
    block = joining_type_table_3[(block << 6) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = joining_type_table_2[(block << 3) + offset];
    offset = codepoint & 0x7;
    value = joining_type_table_1[(block << 3) + offset];

    return value;
}

/* The tables and function for Line_Break. */

static UINT8 line_break_table_1[4360] = {
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
     10,  10,  10,  16,  10,   0,  16,  16,  32,  32,  34,  32,  32,   1,   1,   1,
     10,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  16,   1,  10,  10,
     10,  10,  10,  10,  10,   1,   1,  10,  10,   1,  10,  10,  10,  10,   1,   1,
     32,  32,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   1,
      1,  10,   1,   1,   1,   1,   1,   1,  10,  10,  10,   0,   0,   1,   1,   1,
      1,   1,   1,   1,   1,   1,  10,  10,  10,   1,   0,   0,   0,   0,   0,   0,
     10,  10,  10,  10,   1,   1,   1,   1,  23,  16,   1,   0,   0,  10,  35,  35,
     10,  10,   1,  10,  10,  10,  10,  10,  10,  10,  10,  10,   1,  10,  10,  10,
      1,  10,  10,  10,  10,  10,   0,   0,   1,  10,  10,  10,   0,   0,   1,   0,
      1,   1,   1,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   0,   1,   1,
      0,   0,   0,  10,  10,  10,  10,  10,   1,   1,  10,  10,  10,   1,  10,  10,
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
     10,  10,  10,  10,  10,   1,   1,   1,   1,   1,   0,   0,   0,   1,  10,  10,
     10,  10,  10,  10,  10,   0,  10,  10,   0,   0,   0,   0,   0,  10,  10,   0,
      0,   0,   0,   0,   0,   0,   0,   4,   1,  10,  10,  10,   4,   1,   1,   1,
      1,   1,   1,   1,   0,   1,   1,   1,   0,   0,   0,   0,   0,   0,   1,   0,
      0,   1,   1,   0,   0,   0,   0,   0,   1,   1,   1,  10,  10,   1,  10,  10,
     10,   0,  10,  10,  10,  10,   1,   1,   0,   0,   0,   0,   1,   1,   1,  10,
      1,  34,   1,   1,   1,   1,   1,   1,   0,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   0,   1,   0,   0,   0,   0,  10,   0,   0,   0,   0,  10,
     10,  10,  10,  10,  10,   0,  10,   0,   0,   0,  10,  10,   1,   0,   0,   0,
      0,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,   0,   0,   0,   0,  35,  11,  11,  11,  11,  11,  11,  11,   1,
     32,  32,   3,   3,   0,   0,   0,   0,   0,  11,  11,   0,  11,   0,  11,  11,
     11,  11,  11,   0,  11,  11,  11,  11,  11,  11,  11,  11,   0,  11,   0,  11,
     11,  11,  11,  11,  11,  11,   0,   0,  11,  11,  11,  11,  11,   0,  11,   0,
     32,  32,   0,   0,  11,  11,  11,  11,   1,   4,   4,   4,   4,   1,   4,   4,
     17,   4,   4,   3,  17,  16,  16,  16,  16,  16,  17,   1,  16,   1,   1,   1,
      1,   1,   1,   1,   3,  10,   1,  10,   1,  10,  33,   9,  33,   9,  10,  10,
      1,   1,   1,   1,   1,   0,   0,   0,  10,  10,  10,  10,  10,  10,  10,   3,
     10,  10,  10,  10,  10,   3,  10,  10,   1,   1,   1,   1,   1,  10,  10,  10,
     10,  10,  10,  10,  10,   0,   3,   3,   1,   1,   1,   1,   1,   1,  10,   1,
      4,   4,   3,   4,   1,   1,   1,   1,   1,  17,  17,   0,   0,   0,   0,   0,
     32,  32,   3,   3,   1,   1,   1,   1,  32,  32,  11,  11,  11,  11,  11,  11,
      0,   0,   0,   0,   0,   1,   0,   0,  25,  25,  25,  25,  25,  25,  25,  25,
     27,  27,  27,  27,  27,  27,  27,  27,  26,  26,  26,  26,  26,  26,  26,  26,
      1,   1,   1,   0,   0,  10,  10,  10,   1,   3,   1,   1,   1,   1,   1,   1,
      1,   1,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   0,   0,
      3,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  33,   9,   0,   0,   0,
      1,   1,   1,   3,   3,   3,   1,   1,   1,   1,  10,  10,  10,   0,   0,   0,
      1,   1,  10,  10,  10,   3,   3,   0,   1,   1,  10,  10,   0,   0,   0,   0,
      1,   0,  10,  10,   0,   0,   0,   0,  11,  11,  11,  11,   3,   3,  31,  11,
      3,   1,   3,  35,  11,  11,   0,   0,  32,  32,   0,   0,   0,   0,   0,   0,
      1,   1,  16,  16,   3,   3,   4,   1,  16,  16,   1,  10,  10,  10,  17,   0,
      1,   1,   1,   1,   1,  10,  10,   1,   1,  10,   1,   0,   0,   0,   0,   0,
     10,  10,  10,  10,   0,   0,   0,   0,   1,   0,   0,   0,  16,  16,  32,  32,
     11,  11,  11,  11,  11,   0,   0,   0,  11,  11,  11,  11,   0,   0,   0,   0,
     11,  11,   0,   0,   0,   0,   0,   0,  32,  32,  11,   0,   0,   0,  11,  11,
      1,   1,   1,   1,   1,   1,   1,  10,  10,  10,  10,  10,   0,   0,   1,   1,
     11,  11,  11,  11,  11,  11,  11,   0,  11,  11,  11,  11,  11,   0,   0,  10,
     10,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,  10,  10,  10,  10,
      1,   1,   1,   1,   0,   0,   0,   0,  32,  32,   3,   3,   1,   3,   3,   3,
     10,  10,  10,   1,   1,   1,   1,   1,  10,  10,  10,  10,  10,  10,   1,   1,
      0,   0,   0,   3,   3,   3,   3,   3,  32,  32,   0,   0,   0,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   3,   3,   1,   1,   1,   0,   0,   1,   1,   1,
     10,  10,  10,   1,  10,  10,  10,  10,  10,   1,   1,   1,   1,  10,   1,   1,
      1,   1,   1,   1,  10,   1,   1,  10,  10,  10,   1,   0,   0,   0,   0,   0,
     10,  10,   0,  10,  10,  10,  10,  10,   0,   1,   0,   1,   0,   1,   0,   1,
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
      0,  16,   3,   3,   3,   1,  16,   3,   0,   0,   0,   0,   0,   0,   0,   1,
      3,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,   3,   3,   3,   3,   3,   3,   3,   3,   1,   3,
     33,   3,   1,   1,  36,  36,   1,   1,  36,  36,  33,   9,  33,   9,  33,   9,
     33,   9,   3,   3,   3,   3,  16,   1,   3,   3,   1,   3,   3,   1,   1,   1,
      1,   1,   5,   5,   3,   3,   3,   1,   3,   3,  33,   3,   3,   3,   3,   3,
      3,   3,   3,   1,   3,   1,   3,   3,  22,  22,   0,  22,  22,  22,  22,  22,
     22,  22,  22,  22,   0,   0,   0,   0,  22,  22,  22,  22,  22,  22,   0,   0,
      3,   9,   9,  22,  22,  31,  22,  22,  33,   9,  22,  22,  33,   9,  33,   9,
     33,   9,  33,   9,  31,  33,   9,   9,  22,  22,  10,  10,  10,  10,  10,  10,
     22,  22,  22,  22,  22,  10,  22,  22,  22,  22,  22,  31,  31,  22,  22,  22,
      0,  12,  22,  12,  22,  12,  22,  12,  22,  12,  22,  22,  22,  22,  22,  22,
     22,  22,  22,  12,  22,  22,  22,  22,  22,  22,  22,  12,  22,  12,  22,  12,
     22,  22,  22,  22,  22,  22,  12,  22,  22,  22,  22,  22,  22,  12,  12,   0,
      0,  10,  10,  31,  31,  31,  31,  22,  31,  12,  22,  12,  22,  12,  22,  12,
     22,  22,  22,  22,  22,  12,  12,  22,  22,  22,  22,  31,  12,  31,  31,  22,
      0,   0,   0,   0,   0,  22,  22,  22,   0,  22,  22,  22,  22,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  22,   0,  12,  12,  12,  12,  12,  12,  12,  12,
     22,  22,  22,  22,  22,  31,  22,  22,  22,  22,  22,  22,  22,   0,   0,   0,
      1,   1,   1,   1,   1,   3,  16,   3,  32,  32,   1,   1,   0,   0,   0,   0,
     10,  10,   1,   3,   3,   3,   3,   3,   0,   0,   0,   0,   0,   1,   1,   1,
      1,   1,  10,   1,   1,   1,  10,   1,   1,   1,   1,  10,   1,   1,   1,   1,
      1,   1,   1,   1,  10,   0,   0,   0,  34,   1,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   4,   4,  16,  16,  10,  10,  10,  10,  10,  10,   0,   0,
      0,   0,   0,   0,   0,   0,   3,   3,   1,   1,   1,   1,   4,   1,   1,  10,
     10,  10,  10,  10,  10,  10,   3,   3,  25,  25,  25,  25,  25,   0,   0,   0,
     10,   1,   1,   1,   1,   1,   1,   3,   3,   3,   1,   1,   1,   1,   0,   1,
     32,  32,   0,   0,   0,   0,   1,   1,  32,  32,  11,  11,  11,  11,  11,   0,
     10,  10,  10,  10,  10,  10,  10,   0,   1,   1,   1,   1,  10,  10,   0,   0,
     32,  32,   0,   0,   1,   3,   3,   3,  11,  11,  11,   0,   0,   0,   0,   0,
      0,   0,   0,  11,  11,  11,  11,  11,   3,   3,   1,   1,   1,  10,  10,   0,
      0,   1,   1,   1,   1,   1,   1,   0,  10,  10,  10,   3,  10,  10,   0,   0,
     18,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,
     19,  19,  19,  19,  18,  19,  19,  19,  19,  19,  19,  19,   0,   0,   0,   0,
     27,  27,  27,  27,  27,  27,  27,   0,   0,   0,   0,  26,  26,  26,  26,  26,
     26,  26,  26,  26,   0,   0,   0,   0,  39,  39,  39,  39,  39,  39,  39,  39,
      0,   0,   0,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,  20,  10,  20,
     20,   1,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,   0,
     20,  20,  20,  20,  20,   0,  20,   0,  20,  20,   0,  20,  20,   0,  20,  20,
      1,   1,   1,   1,   1,   1,   9,  33,   1,   1,   1,   1,  34,   1,   0,   0,
     23,   9,   9,  23,  23,  16,  16,  33,   9,  24,   0,   0,   0,   0,   0,   0,
     22,  22,  22,  22,  22,  33,   9,  33,   9,  33,   9,  33,   9,  22,  22,  33,
      9,  22,  22,  22,  22,  22,  22,  22,   9,  22,   9,   0,  31,  31,  16,  16,
     22,  33,   9,  33,   9,  33,   9,  22,  22,  35,  34,  22,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   0,   0,  40,   0,  16,  22,  22,  35,  34,  22,  22,
     33,   9,  22,  22,   9,  22,   9,  22,  22,  22,  31,  31,  22,  22,  22,  16,
     22,  22,  22,  33,  22,   9,  22,  22,  22,  22,  22,  33,  22,   9,  22,  33,
      9,   9,  33,   9,   9,  31,  22,  12,  12,  22,  22,  22,  22,  22,  22,  22,
     22,  22,  22,  22,  22,  22,  31,  31,   0,   0,  22,  22,  22,  22,  22,  22,
      0,   0,  22,  22,  22,   0,   0,   0,  34,  35,  22,  22,  22,  35,  35,   0,
      0,  10,  10,  10,  13,   2,   0,   0,   1,   1,   1,   0,   1,   1,   0,   1,
      3,   3,   3,   0,   0,   0,   0,   1,   1,   1,   1,   1,   0,   0,   0,   1,
      1,   1,   1,   1,   1,  10,   0,   0,  10,  10,  10,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   0,   3,   3,   1,   1,   1,   1,   1,   0,   0,
      1,   0,   0,   0,   1,   0,   0,   1,   1,   1,   1,   0,   1,   1,   0,   0,
      1,   1,   1,   1,   0,   0,   0,   3,   1,   1,   0,   0,   0,   0,   0,   1,
      1,  10,  10,  10,   0,  10,  10,   0,   0,   0,   0,   0,  10,  10,  10,  10,
      3,   3,   3,   3,   3,   3,   3,   3,   1,   1,   1,   1,   1,  10,  10,   0,
      3,   3,   3,   3,   3,   3,  24,   0,   0,   3,   3,   3,   3,   3,   3,   3,
      0,   1,   1,   1,   1,   0,   0,   0,   1,   1,   0,  10,  10,   3,   0,   0,
      1,   1,   1,   1,   1,   1,  32,  32,  10,  10,  10,   1,   1,   1,   3,   3,
      3,   3,   0,   0,   0,   0,   0,   0,  10,  10,  10,  10,  10,   0,  32,  32,
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
      1,   3,   3,   3,   3,   4,   1,  10,   1,   1,  10,  10,  10,  10,  10,  10,
     10,  10,   3,   3,   3,   1,   4,   4,   4,   3,   3,   0,   0,   0,   0,   0,
      1,   3,   3,   3,   3,   3,   0,   0,   4,  16,   1,   1,   1,   1,   1,   1,
      1,  10,  10,  10,  10,  10,  10,   0,   0,   0,  10,   0,  10,  10,   0,  10,
     10,  10,  10,  10,  10,  10,   1,  10,   1,   1,  10,  10,  10,  10,  10,   0,
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
     12,  12,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  12,  12,  12,
      1,   1,   0,   0,   1,  10,  10,   3,  10,  10,   1,   1,   1,  10,  10,  10,
     10,  10,  10,   1,   1,  10,  10,  10,   1,   1,  10,  10,  10,  10,   1,   1,
      1,   1,  10,  10,  10,   1,   0,   0,   0,   0,   1,   0,   0,   1,   1,   0,
      0,   1,   1,   1,   1,   0,   1,   1,   1,   1,   0,   1,   0,   1,   1,   1,
      1,   1,   0,   1,   1,   1,   1,   0,   1,   1,   1,   1,   1,   0,   1,   0,
      1,   1,   1,   1,   0,   0,  32,  32,   1,   1,   1,   1,   1,  10,   1,   1,
      1,   1,   1,   1,  10,   1,   1,   3,   3,   3,   3,   1,   0,   0,   0,   0,
     10,   0,   0,  10,  10,  10,  10,  10,  10,  10,   0,  10,  10,   0,  10,  10,
     32,  32,   0,   0,   0,   0,   0,  35,  32,  32,   0,   0,   0,   0,  33,  33,
      1,   1,   1,   1,  34,   1,   1,   1,  34,   1,   1,   1,   1,   0,   0,   0,
      0,   1,   1,   0,   1,   0,   0,   1,   1,   1,   1,   0,   1,   1,   1,   1,
      0,   1,   0,   1,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   1,
      0,   1,   0,   1,   0,   1,   1,   1,   0,   1,   1,   1,   0,   1,   1,   1,
      2,   2,   2,   2,   2,  22,  22,  22,   2,   2,   2,   2,   2,   2,   1,   1,
      2,   2,   1,   1,   1,  22,  22,  22,  22,  22,  22,  22,  22,  22,  37,  37,
     37,  37,  37,  37,  37,  37,  37,  37,  22,  22,  22,  22,  22,  14,  22,  22,
     22,  22,  22,  22,   1,   1,  22,  22,  22,  22,  22,  22,  22,   1,   1,  22,
     22,  22,  22,  22,   1,  22,  22,  22,  22,  22,  14,  14,  14,  22,  22,  14,
     22,  22,  14,  14,  14,  22,  22,  22,  22,  22,  22,  15,  15,  15,  15,  15,
     22,  22,  14,  14,  22,  22,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  14,  14,
     14,  22,  22,  22,  14,  22,  22,  22,  22,  14,  14,  14,  22,  14,  14,  14,
     22,  22,  22,  22,  22,  22,  22,  14,  22,  14,  22,  22,  22,  22,  22,  22,
      1,  22,   1,  22,   1,  22,  22,  22,  22,  22,  14,  22,  22,  22,  22,   1,
     22,   1,   1,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,   1,
     22,  22,   1,   1,   1,   1,   1,   1,   1,   1,  22,  22,  22,  22,  22,  22,
     22,  22,  22,  22,  14,  14,  22,  22,  22,  22,  14,  22,  22,  22,  22,  22,
     14,  22,  22,  22,  22,  14,  14,  22,   1,   1,   1,   1,  22,  22,  22,  22,
     22,  22,  22,  22,  22,  14,  14,  14,  22,  22,  22,  14,  14,  14,  14,  14,
      1,   1,   1,   1,   1,   1,  36,  36,  36,  31,  31,  31,   1,   1,   1,   1,
     22,  22,  22,  14,  22,  22,  22,  22,  22,  22,  22,  22,  14,  14,  14,  22,
     22,  22,  22,  22,  14,  22,  22,  22,   1,   1,   1,   1,   1,   1,  22,  22,
      1,   1,   1,   1,  14,  22,  22,  14,  22,  22,  22,  22,  22,  22,  14,  22,
     14,  14,  22,  22,  14,  14,  14,  22,  22,  22,  22,  22,  22,  14,  14,  22,
     14,  14,  22,  14,  22,  22,  22,  22,  22,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  22,  22
};

static UINT16 line_break_table_2[3776] = {
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
      6,   6,  48,  52,  53,  54,   6,  28,   6,   6,   6,  55,   6,  56,  33,  33,
     33,  33,  33,  33,   6,   6,  57,   6,   6,  33,  58,   0,  52,   0,   0,   0,
     50,   6,   6,   6,   6,   6,   6,  59,   0,   0,  60,   6,  61,   4,   6,   6,
     62,  63,  64,   6,   6,  65,  66,  67,  68,  69,  70,  71,  72,   4,  73,  74,
     75,  76,  64,   6,   6,  65,  77,  78,  79,  80,  81,  82,  83,   4,  84,  33,
     75,  45,  24,   6,   6,  65,  85,  67,  86,  87,  88,  33,  72,   4,  89,  90,
     75,  63,  64,   6,   6,  65,  85,  67,  68,  80,  91,  71,  72,   4,   6,  33,
     92,  93,  94,  95,  96,  93,   6,  97,  98,  99, 100,  33,  83,   4,   6, 101,
    102,  57,  65,   6,   6,  65,   6, 103, 104,  99, 105,  56,  72,   4, 106,   6,
    107,  57,  65,   6,   6,  65, 108,  67, 104,  99, 105, 109,  72,   4, 110,  33,
     50,  57,  65,   6,   6,   6,   6, 111, 104, 112, 113,   6,  72,   4,   6, 114,
     75,   6,  28, 115,   6,   6,  24, 116,  28, 117, 118,   0,  83,   4, 119,  33,
    120, 121, 121, 121, 121, 121, 121, 122, 121, 123,   4, 124,  33,  33,  33,  33,
    125, 126, 121, 121, 127, 121, 121, 128, 129, 128,   4, 130,  33,  33,  33,  33,
    131, 132, 133,  26,   4,  44, 134, 135,   6,  27,   6,   6,   6, 136,  30, 137,
    138, 139,   0,  30,   0,   0,   0, 140, 141,  57, 142, 143,  33,  33,  33,  33,
    121, 121, 121, 121, 121, 121, 121, 121,   4, 144, 121, 121, 121, 121, 121, 121,
    121, 121,   4, 145,   6,   6,   6,   6,  45, 146,   6,   6,   6,   6,   6,   6,
    147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 148, 148, 148, 148,
    148, 148, 148, 148, 148, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149, 149,
      6,   6,   6,   6,   6,   6,   6,   6,   6,  94,  28,  94,   6,   6,   6,   6,
      6,  94,   6,   6,   6,   6,  94,  28,  94,   6,  28,   6,   6,   6,   6,   6,
      6,   6,  94,   6,   6,   6,   6,   6,   6,   6,   6, 150, 151,   6,   6, 136,
      6,   6,   6, 152,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 153, 153,
    154,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
    154,   6,   6, 155,   6,   6,   6,   6,   6,   6,   6,   6,   6, 156,   6,  88,
      6,  57, 157,  33,   6,   6, 158,  33,   6,   6, 159,  33,   6,  57, 160,  33,
    121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 161, 162,   4, 163,   6, 152,
    164, 165,   4, 163,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  88,
    166,   6,   6,   6,   6, 167,   6,   6,   6,   6,   6,   6,   6,   6, 153,  33,
      6,   6,   6,  28,   0, 168,   0, 168, 169,   4, 121, 121, 121, 128, 170,  33,
    121, 121, 121, 121, 121, 171, 121, 121, 121, 172,   4, 173,   6,   6,   6,   6,
      6,   6, 174, 175, 121, 121, 121, 121, 121, 121, 121, 176, 121, 121, 121, 177,
      4, 163,   4, 163, 121, 128,   0,   0, 178,  33,  33,  33,  33,  33,  33,  33,
    102,   6,   6,   6,   6,   6, 179,   0, 102, 180,   4, 181, 154,  25,  50, 136,
    182,   6,   6,   6,  60, 183,   4,  44,   6,   6,   6,   6,  48,   0, 168,  22,
      6,   6,   6,   6, 179,   0,   0, 184,   4, 185,   4,  44,   6,   6,   6, 186,
      6,  88,   6,   6,   6,   6,   6, 187,   6,  33, 188,   0,   0, 189, 190, 191,
      6,   6,   6,   6,   6,   6,   6,   6,   0,   0,   0,   0,   0,   0,   0, 192,
      6,   6, 153, 153,   6,   6,   6,   6, 153, 153,   6, 193,   6,   6,   6, 153,
      6,   6,   6,   6,   6,   6,  57,   6,  57,   6, 194, 108,   6,   6, 195, 196,
    197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,   0, 210, 211,
    212, 213,   6, 136, 214, 215, 216, 217, 215, 215,   0,   0,   0,   0, 178,  33,
    218, 114, 219,   6, 220, 221,   6,   6,   6,   6, 222, 223, 224, 225, 224, 226,
      6, 227, 224, 226,   6,   6,   6,   6,   6,   6, 228,   6,   6,   6,   6,   6,
    229, 230, 231, 232, 233, 234, 235, 222,   6, 236, 237,   6, 238, 239,   6,   6,
    239,   6, 240, 241, 240,   6,   6,  14,   6,   6,   6,   6,   6, 242,   6,   6,
      6, 243, 237, 244,   6, 245,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 246,   6,
      6,   6,   6,   6,  28,  33,  33,  33,   6,  56,  33,  33, 224, 224, 224, 224,
    224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 247,
    224, 224, 224, 224, 224, 224, 224, 224, 224, 225, 224, 224, 224, 224, 248,   6,
    224, 224, 249,   6, 250, 226, 239, 222, 251, 252, 226,   6, 249,  14,   6,   6,
    253, 254, 255, 256,   6,   6,   6, 257, 258,   6,   6,   6, 259, 260,   6, 261,
      6,   6,   6, 262,   6,   6,   6, 263, 264, 265, 266, 267, 268, 269, 270, 271,
    272, 273,   6,   6,   6,   6,   6,   6,   6,   6,  14, 274, 275, 276, 277, 224,
    224, 224, 225,   6,   6,   6,   6,   6, 278,   6,   6,   6, 279, 276,   6,   6,
    280, 281, 281, 282,   6,   6,   6,   6,   6,   6,   6, 243,   6,   6,   6, 283,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 284, 226,   6,   6, 194,   6,
      6,   6,  45,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,  28,   6,   6,   6,   6,   6,  28,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 174, 285, 286,
      6,   6,   6,   6,  45, 146,   6,   6,   6,   6,   6,   6,   6, 287, 288,  70,
      6,   6,  28,  33,  28,  28,  28,  28,  28,  28,  28,  28,   0,   0,   0,   0,
    289, 290, 291, 292, 293, 294, 295, 296, 297, 298,  56,  33,  33,  33,  33,  33,
    264, 264, 264, 299, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 300,  33,
    264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
    264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 301,  33,  33,  33, 264, 300,
    302, 276, 303, 304, 264, 305, 306, 307, 308, 309, 264, 264, 310, 264, 264, 264,
    311, 312, 313, 314, 315, 309, 264, 264, 310, 264, 264, 264, 311, 312, 316, 317,
    318, 264, 264, 264, 264, 264, 319, 264, 264, 264, 264, 264, 264, 264, 264, 264,
    264, 320, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 300,  33, 321, 321,
    264, 264, 264, 320, 264, 264, 264, 264, 264, 224, 264, 264, 264, 264, 264, 264,
    264, 264, 264, 264, 264, 264, 264, 264,   6,   6,   6,   6,   6,   6,   6,   6,
    264, 264, 322, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
    264, 323, 264, 264, 264, 264, 264, 264, 320,  33,   6,   6,   6,   6,   6, 186,
      6, 324,   6,   6,   4, 325,  33,  33,   6,   6,   6,   6,   6, 174, 188, 183,
      6,   6,   6,  48,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 326,  33,
      6,   6,   6,   6,   6,   6,   6,   6, 115,  56,  33,  33,  33,  33, 327,   6,
    328, 329,   6,   6,  25, 330,   6, 331,   6,   6,   6,   6,   6,   6, 332,  33,
     26,   6,   6,   6,   6,   6, 179,   0, 333, 334,   4, 163,   0,   0,  26, 335,
      4,  44,   6,   6,  48, 336,   6,   6, 174,   0, 168, 287, 147, 147, 147, 337,
     50,   6,   6,   6,   6,   6,  25,   0, 338, 339,   4, 340, 121, 121,   4, 341,
      6,   6,   6,   6,   6,  60, 342,  33, 329, 343,   4, 344, 121, 121, 121, 121,
    121, 121, 121, 121, 121, 121, 121, 121, 345,  33,  33, 346,   6,  25, 347,  33,
    348, 348, 348,  33,  28,  28,   6,   6,   6,   6,   6,   6,   6, 180,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  25, 349,   4, 163,
    350, 351, 351, 352, 351, 351, 351, 350, 351, 351, 352, 351, 351, 351, 350, 351,
    351, 352, 351, 351, 351, 350, 351, 351, 352, 351, 351, 351, 350, 351, 351, 352,
    351, 351, 351, 350, 351, 351, 352, 351, 351, 351, 350, 351, 351, 352, 351, 351,
    351, 350, 351, 351, 352, 351, 351, 351, 350, 351, 351, 352, 351, 351, 351, 350,
    351, 351, 352, 351, 351, 351, 350, 351, 351, 352, 351, 351, 351, 350, 351, 351,
    352, 351, 351, 351, 350, 351, 351, 352, 351, 351, 351, 350, 351, 351, 352, 351,
    351, 351, 350, 351, 351, 352, 351, 351, 351, 350, 351, 351, 352, 351, 351, 351,
    351, 350, 351, 351, 353,  33, 148, 148, 354, 355, 149, 149, 149, 149, 149, 356,
    357, 357, 357, 357, 357, 357, 357, 357, 357, 357, 357, 357, 357, 357, 357, 357,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     28,  33, 358, 359,  34, 360, 361, 362, 363,  34,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6, 152,  33, 358,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6, 364,  33,  33,   6,   6,   6,   6,   6,   6,
      6,   6, 115,   6,   6,   6,   6,   6,   6,  33,  33,  33,  33,  33,   6, 365,
      0,   0, 366, 367,   0,   0, 368, 281, 369, 370, 371, 372, 320, 373,  57,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 374,
    375, 376, 264, 377, 264, 264, 264, 378, 264, 264, 264, 379, 380, 321, 381, 264,
    264, 264, 264, 382, 264, 264, 264, 320, 383, 383, 383, 384, 385,  28,  33, 386,
      6, 108,   6,   6,  28,   6,   6, 387,   6, 153,   6, 153,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  56,
    388,   6,   6,   6,   6,   6, 389,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,  28,   6, 136,  88,  33,  33,  33,  33,  33,   6,   6,   6,   6,   6, 390,
      6,   6,   6, 136,   6,   6,   6,   6,   6,   6,  88,  33,  40,   6,   6, 180,
      6,   6,   6,   6, 180, 327,   6,   6,   6,  56,   6,   6,   6,   6,  48, 391,
      6,   6,   6, 392,   6,   6,   6,   6, 180,   6, 393,  33,  33,  33,  33,  33,
      6,   6,   6, 153,   4, 163,   6,   6,   6,   6, 180,   6,   6,   6,   6, 180,
      6,   6,   6,   6,   6,  33,   6,   6,   6,   6,   6,   6, 180, 287,  33,  33,
      6,   6,   6,   6,   6,   6,  28,  33,   6,   6, 153,  33,   6,  33,  33,  33,
    153,  65,   6,   6,   6,   6,  45, 394,   6,   6, 392,   6,   6,   6,   6,   6,
      6,   6,   6,  28, 287,   6,  33,  33,  33,  33,  33,  33,   6,   6, 395, 358,
      6,   6,   6, 396,   6,   6,   6, 397,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,  22,   6,   6, 115,   6,   6,   6,   6,   6,
    398, 399, 108,  27,   6,   6, 153,  79,   6,  88, 400,  88,   6,   6,   6,   6,
      6,   6,   6,   6,  33,  33,  33,  33,   6,   6,   6,   6, 401, 358, 402,  33,
      6,   6,   6,   6,   6,   6, 153, 403,   6,   6, 153,   6,   6,   6,  56,   6,
      6,   6, 152, 404,  33,  27,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,  88,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,  56,  33,   6,   6,   6,   6,   6,   6,  56, 115,
      6,   6,   6,   6, 179,  33,   4, 163,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   6,   6,   6,  28,
      6,   6,   6,   6,   6, 405, 152,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,  33,   6,   6,  48,   0,  40, 152,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,   6,   6,   6, 180,  33,  33,   6,   6,  28,  33,
    182,   6,   6,   6,   6,   6,   6,   0, 137, 393, 115,   6, 406,   4,  33,  70,
    182,   6,   6,   6,   6,   6,   0, 407, 408, 146,   6,   6,   6,  88,   4, 163,
    182,   6,   6,   6, 174,   0, 409,   4, 410,  33,   6,   6,   6,   6, 411,  33,
    182,   6,   6,   6,   6,   6,  25,   0, 412, 413,   4, 414,  27,   6, 136,  33,
      6,   6,  24,   6,   6, 179,   0, 415,  33,  33,  33,  33,  33,  33,  33,  33,
     28, 416,   6,  45,   6, 417,   6,   6,   6,   6,   6, 174,   0, 391,   4, 163,
    418,  63,  64,   6,   6,  65,  85, 419,  68,  80, 100, 327, 420, 421, 421,  33,
      6,   6,   6,   6,   6,   6, 139,   0, 422, 423,   4, 424, 152,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   0,   0,  50,  33,   4, 163,  33,  33,  33,  33,
      6,   6,   6,   6,   6, 174, 333,   0, 425, 426, 400, 343,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   0,   0, 427,  33,   4, 163, 428, 429,  33,  33,
      6,   6,   6,   6,   6,  25,   0,  88,   4, 163,  33,  33,  33,  33,  33,  33,
    121, 121, 121, 430, 121, 171,   4, 431,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6, 179,   0, 432,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,   6,   6,   6,   6,   6,   6,   6,   6,   4,  44,  56, 287,
     28, 433, 434,   6,   6,   6,  86, 435, 436,  33,   4, 163,  33,  33,  33,  33,
     33,  33,  33,  33,   6, 115,   6,   6,   6,   6,  60, 437, 438,  33,  33,  33,
     60, 182,   6,   6,   6,   6,  25, 439, 440,  33,  60,  50,   6,   6,   6,   6,
      6, 441,   0, 442, 443,  33,  33,  33,   6,   6,   6,   6,   6,   6,   6,  88,
      6,  65,   6,   6,   6, 174, 342,   0, 444,  33,   4,  44,   6, 136, 445,   6,
      6,   6, 437,   0,   0,  30, 342,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     28,  24,   6,   6,   6,   6, 446, 447, 448,  33,   4, 163,  45,  65,   6,   6,
      6, 449, 192,  88,   4, 163,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   6,   6, 450,  88,
     33,  33,  33,  33,  33,  33,  88,  33,   6,   6,   6, 451, 452,   6, 152, 453,
      6,   6,   6, 152,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  28, 454,  33,
      6,   6,   6,   6,   6,   6,   6,   6, 180,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 455,   6,   6,   6,   6,
    456, 457,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 458,
      6,   6,   6,   6,   6,  28, 459, 460,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6, 279,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,  28,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,  88,   6,   6,   6,  28,   4, 461,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   6,   6,   6, 153, 462,  33,
      6,   6,   6,   6,   6,   6, 137, 463, 464,  33,   4, 465,  24,   6,   6, 327,
      6,   6,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6, 466, 467,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6, 468,  60,   0,   0,   0,   0,   0,
      0,  70, 182,   6,  33,  33,  33,  33,  33,  33,  33,  33, 469,  33, 470,  33,
    264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 153,  33,  33,  33,  33,  33,
    264, 471,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
    264, 264, 264, 320,  33,  33,  33,  33,  33,  33, 472,  33, 473,  33, 264, 264,
    264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 300,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  56,   6, 136,
      6,  88,   6, 474, 168,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 153,  33,
      6,   6,   6,   6,  28,  27,   6,   6,   6,   6,   6,   6, 139, 475,   0,   0,
    476,  50,   6,   6,   6, 477,   6,   6,   6,   6,   6,   6,   6,  88,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6, 478,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   6,   6, 180,  33,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  28,  33,   6,   6,   6,  88,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,  57,   6,   6,   6,   6,   6,
      6,   6,   6,  57, 479, 480,   6, 481, 108,   6,   6,   6,   6,   6,   6,   6,
     45, 187,  57,  57,   6,   6,   6, 482, 483, 115,  65,   6,   6,   6,   6,   6,
      6,   6,   6,   6, 153,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
      6,   6,   6,   6,   6,   6,   6,   6,   6, 484,   4,   4,   4,   4,   4,   4,
      0,   0,   0,   0,   0,   0, 422,  25,   0,   0,   0,   0,   0, 102, 485,   6,
    486, 487,  33,  58,  30,   0,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
    342,   0,   0, 488, 489, 391,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6, 136, 422, 153,   4, 340,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,   6,   6,   6,   6,   6, 179,   4, 490,
      6,   6,   6,   6,   6,   6,   6,   6,  63,   6, 342,  33,  33,  33,  33,  33,
      6,   6,   6,   6,   6,   6,   6,   6, 179, 432,   4, 491,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  27,   6,
      6,   6,   6,   6,   6, 492, 493,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     27,   6,   6,   6,   6,   6,   6, 153,  33,  33,  33,  33,  33,  33,  33,  33,
    108,   6,   6,   6, 494,  27, 495, 496, 497, 498, 494, 193, 494, 495, 495,  82,
      6,  24,   6, 180, 499,  24,   6, 180,  33,  33,  33,  33,  33,  33, 152,  33,
    224, 500, 224, 224, 224, 501, 224, 224, 224, 224, 224, 224, 224, 502, 224, 224,
    224, 224, 224, 224, 224, 500, 264, 264, 264, 264, 264, 264, 503, 504, 504, 504,
    505, 264, 264, 506, 264, 264, 507, 508, 509, 510, 264, 264, 264, 264, 264, 511,
    264, 264, 264, 264, 264, 264, 264, 264, 512, 513, 514, 264, 515, 513, 513, 516,
    517, 518, 519, 264, 520, 521, 522, 264, 264, 264, 264, 264, 264, 264, 264, 264,
    261, 264, 523,   6, 263, 264, 524,   6,   6, 525, 264, 264, 264, 264, 526, 527,
    264, 264, 528, 264, 264, 264, 264, 264, 264, 264, 246, 529, 264, 264, 246, 525,
    264, 264, 264, 264, 264, 264, 264, 264, 530, 531,   6,   6,   6,   6, 532, 533,
    264, 264, 264, 264, 534, 264, 535, 264, 514, 536, 264, 264, 264, 264, 264, 264,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 529, 264,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 263, 264, 264, 264, 264, 264,
      6, 529,   6,   6,   6,   6,   6,   6,   6, 264,   6, 525,   6,   6,   6,   6,
      6, 264,   6,   6,   6, 537, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      6, 538, 264, 513, 539, 264, 513, 540, 264, 264, 264, 264, 264, 264, 518, 264,
    264, 264, 264, 264, 264, 264, 541, 542, 264, 530, 543, 544, 264, 264, 264, 264,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6, 529, 264, 264, 264, 264, 264,
      6,   6, 495,   6,   6,   6,   6,   6,   6,  56,  33,  33,  33,  33,   4, 163,
    264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 301,
     81,  33,  33,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,  33
};

static UINT8 line_break_table_3[800] = {
      0,   1,   2,   2,   2,   3,   4,   5,   2,   6,   7,   8,   9,  10,  11,  12,
     13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,
     29,  30,  31,  32,  33,  34,  35,  36,  37,   2,   2,   2,   2,  38,  39,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,   2,  51,   2,   2,  52,  53,
     54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,  69,
      2,   2,   2,  70,   2,   2,  71,  72,  73,  74,  75,  76,  77,  78,  79,  80,
     81,  82,  83,  84,  85,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  86,  79,  79,  79,  79,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,
     87,  79,  79,  79,  79,  79,  79,  79,  79,  88,   2,   2,  89,  90,   2,  91,
     92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 100,
    101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102,
    103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104,
    105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106,
    100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101,
    102, 103, 104, 105, 106, 100, 101, 102, 103, 104, 105, 106, 100, 101, 102, 107,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109,  79,  79,  79,  79, 110, 111,   2,   2, 112, 113, 114, 115, 116, 117,
    118, 119, 120, 121, 109, 122, 123, 124,   2, 125, 126, 109,   2,   2, 127, 109,
    128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 109, 139, 140, 141, 142,
    143, 144, 145, 146, 147, 148, 149, 109, 150, 151, 109, 152, 153, 154, 155, 109,
    156, 157, 158, 159, 160, 161, 109, 109, 162, 163, 164, 165, 109, 166, 109, 167,
      2,   2,   2,   2,   2,   2,   2, 168, 169,   2, 170, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      2,   2,   2,   2, 171, 172, 173,   2, 174, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109,   2,   2,   2, 175, 176, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      2,   2,   2,   2, 177, 178, 179, 180, 109, 109, 109, 109, 181, 182, 183, 184,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79, 185,
     79,  79,  79,  79,  79,  79,   2,   2,   2, 186, 187, 109, 109, 109, 109, 109,
     79,  79, 188,  79,  79, 189, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 190, 191, 109, 109, 109, 109, 109, 109,
      2, 192, 193, 194, 195, 196, 197, 109, 198, 199, 200,   2,   2, 201,   2, 202,
      2,   2,   2,   2, 203, 204, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    205, 109, 206, 109, 109, 207, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
      2, 208, 209, 109, 109, 109, 109, 109, 210, 211, 212, 109, 213, 214, 109, 109,
     79,  79, 215, 216,  79,  79,  79, 217, 218, 219, 220, 221, 222, 223, 224, 225,
    226, 227, 228, 229, 230,  79,   2, 231,  79,  79,  79,  79,  79,  79,  79, 232,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,
     79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79, 232,
    233, 109, 234, 235, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109
};

static UINT8 line_break_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   5,   6,   7,   8,   9,  10,  11,
     12,  13,  14,  15,  16,  10,  17,   5,  18,  10,  10,  19,  10,  20,  21,  22,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  23,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  23,
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
     24,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,
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

static UINT8 lowercase_table_1[368] = {
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
    255, 255, 255, 127,  98,  21, 218,  63,  26,  80,   8,   0, 191,  32,   0,   0,
    170,  42,   0,   0, 170, 170, 170,  58, 168, 170, 171, 170, 170, 170, 255, 149,
    170,  80, 186, 170, 170, 130, 160, 170,   8,   5,   0,   0,   0,   0,  64,   7,
    255, 255, 255, 247, 255,   1, 255, 255, 127,   0, 248,   0,   0, 255, 255, 255,
    255, 255,   0,   0,   0,   0,   0, 255, 255, 255, 255,  15, 255, 255,   7,   0,
      0,   0,   0, 252, 255, 255,  15,   0,   0, 192, 223, 255, 255,   0,   0,   0,
    252, 255, 255,  15,   0,   0, 192, 235, 239, 255,   0,   0,   0, 252, 255, 255,
     15,   0,   0, 192, 255, 255, 255,   0,   0,   0, 252, 255, 255,  15,   0,   0,
    192, 255, 255, 255,   0, 192, 255, 255,   0,   0, 192, 255,  63,   0,   0,   0,
    252, 255, 255, 247,   3,   0,   0, 240, 255, 255, 223,  15, 255, 127,  63,   0,
    255, 253,   0,   0, 247,  11,   0,   0, 252, 255, 255, 255,  15,   0,   0,   0
};

static UINT8 lowercase_table_2[352] = {
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
      0,  26,  48,  49,   5,   5,   5,  50,  15,  51,   0,   0,   0,   0,   0,   0,
      0,   0,   5,  52,  53,   0,   0,   0,   0,  54,   5,  55,  56,  57,  58,  59,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  60,  61,  15,  15,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  62,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
      0,  63,  64,   0,   0,   0,  65,  66,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  15,  67,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,  80,  68,  69,  81,
     71,  72,  82,  64,  75,  83,  84,  85,  86,  82,  87,  26,  88,  75,  89,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  90,  91,   0,   0,   0,   0,   0
};

static UINT8 lowercase_table_3[144] = {
      0,   1,   2,   3,   3,   3,   3,   3,   4,   5,   3,   3,   3,   3,   6,   7,
      8,   3,   9,   3,   3,   3,  10,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,  11,   3,  12,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  13,   3,  14,
      3,   3,  15,   3,   3,   3,  16,   3,   3,   3,   3,   3,  17,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,  18,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,  19,  20,   3,   3,   3,   3,
      3,   3,   3,   3,  21,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3
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

static UINT8 nfkc_quick_check_table_1[776] = {
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
      2,   0,   2,   0,   0,   2,   2,   2,   2,   0,   2,   0,   0,   2,   2,   0,
      0,   0,   0,   0,   0,   2,   0,   2,   2,   2,   2,   2,   2,   0,   2,   0,
      2,   2,   0,   2,   2,   0,   2,   2,   2,   2,   2,   2,   2,   0,   0,   2,
      2,   2,   2,   2,   0,   0,   0,   0,   2,   2,   2,   0,   2,   0,   2,   2,
      0,   0,   2,   2,   2,   0,   0,   0,   0,   0,   1,   0,   0,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   0,   2,   2,
      0,   0,   2,   0,   0,   2,   2,   0,   0,   2,   2,   2,   2,   0,   2,   2,
      2,   2,   0,   2,   0,   2,   2,   2,   2,   2,   2,   0,   0,   2,   2,   2,
      2,   2,   0,   2,   2,   2,   2,   0,   2,   0,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   0,   0,   2,   2,   0,   2,   2,   0,   2,   0,   0,   2,
      0,   2,   0,   2,   0,   0,   0,   0,   0,   2,   2,   2,   2,   0,   2,   0,
      0,   2,   2,   2,   0,   2,   2,   2
};

static UINT8 nfkc_quick_check_table_2[888] = {
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
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,  43,
      0,   0,   0,   8,   0,   7,   0,   0,  11,  12,  74,  25,  75,  73,  11,  11,
     11,  11,  11,  11,  11,  12,  11,  11,  11,  11,  11,  43,   0,   0,   0,   0,
     25,   0,  53,  76,  11,  11,  25,  77,  78,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  43,   0,   0,   0,  53,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  12,   0,   0,  11,  11,  11,  11,  11,  11,
     11,  11,  73,  11,  11,  11,  11,  11,  11,   0,   0,   0,   0,   0,  11,   9,
      0,   0,  11,  43,   0,   0,  11,  11,  79,  11,  50,  11,  25,  80,  81,  11,
     11,  11,  11,  11,  11,  11,  11,   9,  63,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  25,  73,  73,  73,  82,  25,  25,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  36,   0,   0,   0,   0,  31,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  20,  83,   0,   0,   0,   0,   0,  31,   0,   0,
      0,   0,   0,   0,   0,   0,  20,   0,   0,   0,   0,  84,   9,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  53,   1,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  85,  11,  11,  11,  11,  11,  11,  11,  11,  85,  86,  87,  11,  88,
     62,  11,  11,  11,  11,  11,  11,  11,  51,  89,  85,  85,  11,  11,  11,  90,
     77,  73,  91,  11,  11,  11,  11,  11,  11,  11,  11,  11,  12,  11,  11,  11,
     11,  92,  11,  11,  11,  11,  11,  11,  62,  11,  11,  11,  93,  63,  50,  94,
     41,  56,  93,  54,  93,  50,  50,  95,  11,  68,  11,  80,  96,  68,  11,  80,
     11,  52,  11,  11,  11,  25,  11,  11,  11,  11,   0,   0,   0,  82,   0,   0,
      0,   0,   1,   0,   0,   0,   0,   0,  52,   0,  11,  11,  11,  11,  11,  80,
     11,   1,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  43,
     11,  11,  11,  12,   0,   0,   0,   0
};

static UINT8 nfkc_quick_check_table_3[768] = {
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
      0,   0,  86,   0,  87,   0,   0,   0,   0,   0,   0,   0,  15,  20,   0,   0,
      0,   0,  88,   0,   0,   0,  89,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  90,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  91,  92,  93,   0,   0,   0,   0,   0,   0,   0,   0,
     51,  94,  95,  96,  97,  98,  51,  51,  51,  51,  99,  51,  51,  51,  51, 100,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0, 101, 102, 103,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 104, 105, 106,   0, 107, 108,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 109,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     51,  51,  51,  51,  51,  51,  51,  51, 110,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 nfkc_quick_check_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   4,   4,   4,   4,   6,
      4,   7,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   8,   9,  10,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  11,
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

static UINT8 nfkd_quick_check_table_1[600] = {
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
    255, 255, 255, 127, 255,   0, 255, 255,   0,   0,   1,   0,   0,   0,   0,   3,
      0,   0,   0, 240,   0,   2,   0,   0,  15,   0,   0,   0, 255,  63, 229, 127,
    101, 252, 255, 255, 255,  63, 255, 255, 127,   0, 248, 160, 255, 255, 127,  95,
    219, 255, 255, 255, 255, 255,   3,   0,   0,   0, 248, 255,   0,   0, 255, 255,
    255,   0,   0,   0,   0,   0, 255,  31,   0,   0, 255,   3, 159, 255, 247, 255,
    127,  15, 215, 255, 255, 255, 255,  31, 254, 255, 255, 255, 252, 252, 252,  28,
    127, 127,   0,   0,   0,   0,   0,  20,   0,   8,   0,   0,   0, 192,   0,   0,
      0,  24,   0,   0,   0,   0,   0,  88,   0,   0,   0,  12,   0,   0,   0,   1,
      0,   0,   0, 192, 255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255,
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255, 255, 207, 255, 255,
    150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 255,  15,
    238, 251, 255,  15, 255,   7, 255, 255, 255, 127, 255, 255, 255, 255,   0,   0,
      7,   0, 255, 255, 255,   1,   3,   0
};

static UINT8 nfkd_quick_check_table_2[472] = {
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
      0, 127,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 129,   0,   0,   0,   0,   0,   0,   0, 130,   0,   0,
      0, 131,   0,   0,   0,   0,   0,   0,   0,   0, 132,  15,   0,  58,  92,   0,
     59,  59,  65,  59, 133, 134, 135,  59, 136, 137, 138,  59,  59,  59,  59,  59,
     59,  59,  59,  59,  59,   7,  59,  59,  59,  59,  59,  59,  59,  59, 139,  59,
    135, 140, 141, 142, 143, 144,   0,   0, 145, 146, 147,  39, 102,   0,   0,   0,
    148,  60, 149,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 118,
     64,   0,   0,   0,   0,   0,   0,   0
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
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
     43,  44,   7,  45,  46,  47,   7,   7,   7,  48,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  49,   7,   7,  50,  51,  52,  53,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  54,   7,
      7,  55,  56,   7,   7,   7,   7,   7,   7,   7,   7,  57,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,  33,  33,  58,   7,   7,   7,   7,   7
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
      1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   1,   1, 100,   1,   1,
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
      1,   1,   1,   1,   1,   1,   1,   1,   1,   3,   1,   1,   1, 103,   1,   1,
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

static UINT8 other_alphabetic_table_1[468] = {
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
      0,   0,   0, 128,   1,   0,   0,   0,  31,   0,   0,   0,   0,   0, 224, 255,
      7,   0,   0,   0, 254,  51,   0,   0, 128, 255,   3,   0, 240, 255, 127,   0,
    128, 255,  31,   0, 255, 255, 255, 255, 255,   3,   0,   0,   0,   0, 240,  15,
      4,   8,   0,   0, 248,   0,   0,   0,   3,   0,   0,   0,  47,   0,   0,   0,
    192,   7,   0,   0, 128, 255,   7,   0,   0, 254, 127,   0,   8,  48,   0,   0,
      0,   0,   0,  56,   0,   0, 157,  65,   0, 248,  32,   0, 248,   7,   0,   0,
      0,   0,   0,  64,   0,   0, 192,   7, 110, 240,   0,   0, 240,   0,   0,   0,
      0,  24,   0,   0,   0,   0,   0, 255,  63,   0,   0,   0,   0,   0, 255,   1,
      0,   0, 248, 255,   0, 192,   0,   0,   0, 240, 159,  64,  59,   0,   0,   0,
      0, 128,  63, 127,   0,   0,   0,  48,   0,   0, 255, 127,   0, 248,  63,   0,
      0,   0,   0, 224, 255,   7,   0,   0,   0, 240, 255,   1,   0,   0, 191,  25,
      5,   0,   0,   0,   0,   0, 254, 252,  16,   0,   0,   0, 254,   7,   0,   0,
      0,   0, 224, 123,   0,   0, 254,  15,   0, 252, 255,   0,   0, 128, 127, 127,
      0,   0, 252, 255, 255, 254, 127,   0,   0,   0, 126, 180, 139,   0,   0,   0,
      0, 124, 123,   0,   0,   0, 120,   0,   0, 128, 254, 255, 255, 128,   7,   0,
      0,   0,   3,   0, 127, 255, 255, 249, 219,   7,   0,   0, 128,   0,   0,   0,
    255,   3, 255, 255
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
      0,   0,   0,   0,   0,  80,   0,   0,  56,  81,  82,   0,  28,  83,   0,   0,
     56,  69,  46,   0,  56,  84,  85,   0,   0,  86,   0,   0,   0,   0,  52,  45,
     16,  21,  22,  19,   0,   0,   0,   0,   0,  55,  87,   0,   0,  10,  66,   0,
      0,   0,   0,   0,   0,  88,  89,   0,   0,  90,  53,   0,   0,  91,   0,   0,
     92,  93,   0,   0,   0,   0,   0,   0,   0,  94,   0,   0,   0,   0,   0,   0,
      0,  95,  96,   0,   0,   0,  97,  98,  99, 100, 101,   0, 102,   0,   0,   0,
      0, 103,   0,   0, 104, 105,   0,   0,   0, 106, 107,   0, 108,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 109,   0,   0, 110,  61, 111,   0,   0, 112,
      0,   0,   0,   0,  76,   0,   0,   0, 113, 114,   0,   0,   0,   0,   0,   0,
      0,   0, 115,   0,   0,   0,   0,   0,   0,  10, 116, 116,  62,   0,   0,   0
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

static UINT8 other_lowercase_table_1[136] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   4,
      0,   0,   0,   0,   0,   0, 255,   1,   3,   0,   0,   0,  31,   0,   0,   0,
     32,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0, 240, 255, 255,
    255, 255, 255, 255, 255,   7,   0,   1,   0,   0,   0, 248, 255, 255, 255, 255,
      0,   0,   0,   0,   0,   0,   2, 128,   0,   0, 255,  31,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 255, 255,   0,   0, 255, 255, 255,   3,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  48,   0,   0,   0,  48,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   3,
      0,   0,   0, 240,   0,   0,   0,   0
};

static UINT8 other_lowercase_table_2[72] = {
      0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   2,   3,   0,   4,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   6,   7,   0,
      0,   8,   9,   0,   0,  10,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,
      0,  12,   0,   0,   0,   0,   0,   0,   0,   0,  13,   0,   0,  14,   0,  15,
      0,   0,   0,   0,   0,  16,   0,   0
};

static UINT8 other_lowercase_table_3[96] = {
      0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,   2,
      4,   2,   5,   2,   2,   2,   6,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   7,   2,   8,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2
};

static UINT8 other_lowercase_table_4[68] = {
      0,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
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

static UINT8 posix_alphanumeric_table_1[1024] = {
      0,   0,   0,   0,   0,   0, 255,   3, 254, 255, 255,   7,   0,   4,  32,   4,
    255, 255, 127, 255, 255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,
     32,   0,   0,   0,   0,   0, 223, 188,  64, 215, 255, 255, 251, 255, 255, 255,
    255, 255, 191, 255,   3, 252, 255, 255, 255, 255, 254, 255, 255, 255, 127,   2,
    255,   1,   0,   0,   0,   0, 255, 191, 182,   0, 255, 255, 255, 135,   7,   0,
      0,   0, 255,   7, 255, 255, 255, 254,   0, 192, 255, 255, 255, 255, 239,  31,
    254, 225,   0, 156,   0,   0, 255, 255,   0, 224, 255, 255, 255, 255,   3,   0,
      0, 252, 255, 255, 255,   7,  48,   4, 255, 255, 255, 252, 255,  31,   0,   0,
    255, 255, 255,   1, 255,   7,   0,   0, 255, 255, 223, 255, 255,   0, 240, 255,
    248,   3, 255, 255, 255, 255, 255, 239, 255, 223, 225, 255,  15,   0, 254, 255,
    239, 159, 249, 255, 255, 253, 197, 227, 159,  89, 128, 176,  15,   0,   3,  16,
    238, 135, 249, 255, 255, 253, 109, 195, 135,  25,   2,  94,   0,   0,  63,   0,
    238, 191, 251, 255, 255, 253, 237, 227, 191,  27,   1,   0,  15,   0,   0,  30,
    238, 159, 249, 255, 159,  25, 192, 176,  15,   0,   2,   0, 236, 199,  61, 214,
     24, 199, 255, 195, 199,  29, 129,   0, 239, 223, 253, 255, 255, 253, 255, 227,
    223,  29,  96,   7,  15,   0,   0,   0, 255, 253, 239, 227, 223,  29,  96,  64,
     15,   0,   6,   0, 255, 223, 253, 255, 255, 255, 255, 231, 223,  93, 240, 128,
     15,   0,   0, 252, 238, 255, 127, 252, 255, 255, 251,  47, 127, 128,  95, 255,
      0,   0,  12,   0, 254, 255, 255, 255, 255, 255, 255,   7, 127,  32,   0,   0,
    214, 247, 255, 255, 175, 255, 255,  59,  95,  32,   0, 240,   1,   0,   0,   0,
    255, 254, 255, 255, 255,  31, 254, 255,   3, 255, 255, 254, 255, 255, 255,  31,
    255, 255, 127, 249, 255, 255,   0,  60, 191,  32, 255, 255, 255, 255, 255, 247,
    255,  61, 127,  61, 255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255,
    255, 255,  61, 255, 255, 255,   0,   0, 255, 255,  63,  63, 255, 159, 255, 255,
    255, 199, 255,   1, 255, 223,  15,   0, 255, 255,  15,   0, 255, 223,  13,   0,
    255, 255, 207, 255, 255,   1, 128,  16, 255,   7, 255, 255, 255, 255,  63,   0,
    255, 255, 255, 127, 255,  15, 255,   1, 255,  63,  31,   0, 255,  15, 255, 255,
    255,   3,   0,   0, 255, 255, 255,  15, 254, 255,  31,   0, 128,   0,   0, 128,
    255, 255, 239, 255, 239,  15,   0,   0, 255, 243,   0, 252, 191, 255,   3,   0,
    255, 255, 127,   0,   0, 224,   0, 252, 255, 255, 255,  63, 255,   1, 255, 255,
      0, 222, 111,   4, 128, 255,  31,   0,  63,  63, 255, 170, 255, 255, 223,  95,
    220,  31, 207,  15, 255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31,
    132, 252,  47,  62,  80, 189, 255, 243, 224,  67,   0,   0,   0,   0, 192, 255,
    255, 127, 255, 255,  31, 120,  12,   0, 255, 128,   0,   0, 127, 127, 127, 127,
      0, 128,   0,   0, 224,   0,   0,   0, 254,   3,  62,  31, 255, 255, 127, 224,
    224, 255, 255, 255, 255, 127,   0,   0, 255,  31, 255, 255,   0,  12,   0,   0,
    255, 127, 240, 143,   0,   0, 128, 255, 252, 255, 255, 255, 255, 249, 255, 255,
    252,   7,   0,   0,   0,   0, 224, 255, 191, 255, 255, 255, 255,   0,   0,   0,
     47,   0,   0,   0,   0,   0, 252, 232, 255, 255,   7,   0, 255, 255, 247, 255,
    255, 255,   0, 124, 255,  63,   0,   0, 255, 255, 127, 252,   5,   0,   0,  56,
    255, 255,  60,   0, 126, 126, 126,   0, 127, 127, 255, 255, 255,   3, 255, 255,
     15,   0, 255, 255, 127, 248, 255, 255, 255,  63, 255, 255, 255, 255, 255,   3,
    127,   0, 248, 224, 255, 253, 127,  95, 219, 255, 255, 255,   0,   0, 248, 255,
    255, 255, 252, 255,   0,   0, 255,  15,   0,   0, 223, 255, 192, 255, 255, 255,
    252, 252, 252,  28, 255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63,
    255, 255,  31,   0, 255, 255,   1,   0,  15, 255,  62,   0, 255, 255,  15, 255,
    255,   0, 255, 255,  63, 253, 255, 255, 255, 255, 191, 145, 255, 255,  55,   0,
    255, 255, 255, 192, 111, 240, 239, 254,  31,   0,   0,   0, 255,  27,   3,   0,
    128,   0, 255, 255,  63,   0,   0,   0, 240,   0, 255, 255, 255, 255,  71,   0,
     30, 192,   0,  20, 255, 255, 251, 255, 255, 255, 159,  64, 127, 189, 255, 191,
    159,  25, 129, 224, 187,   7,   0, 128,   3,   0,   0,   0, 179,   0,   0,   0,
    255, 255,  63, 127,   0,   0,   0,  63,  17,   0,   0,   0, 255, 255,  63,   1,
      0,   0,   0, 128, 127, 242, 111, 255, 255, 255, 191, 153,   7,   0,   0,   0,
    255, 252, 255, 255,  26,   0,   0,   0, 255, 255, 231, 127, 255, 255, 255,  32,
    255, 253, 255, 255, 255, 255, 127, 127,   0,   0, 252, 255, 255, 254, 127,   0,
    127, 251, 255, 255, 255, 255, 127, 180, 203,   0,   0,   0, 191, 253, 255, 255,
    255, 127, 123,   1,   0,   0,   1,   0, 127,   0,   0,   0, 248, 255, 255, 224,
    255, 135, 255, 255, 255, 128, 255, 255,  11,   0,   3,   0, 255, 255, 255,   0,
      0,   0,   7,   0, 255,   7, 255,  31, 255,   1, 255,  67, 255, 255, 255, 223,
    100, 222, 255, 235, 239, 255, 255, 255, 191, 231, 223, 223, 255, 255, 255, 123,
     95, 252, 253, 255,  63, 255, 255, 255, 253, 255, 255, 247, 247,  15,   0,   0,
    127, 255, 255, 249, 219,   7,   0,   0, 255,  31, 128,  63,   0,  64,   0,   0,
    255,  15,   0,   0, 143,   8,   0,   0, 150, 254, 247,  10, 132, 234, 150, 170,
    150, 247, 247,  94, 255, 251, 255,  15, 238, 251, 255,  15,   3,   0, 255, 255
};

static UINT8 posix_alphanumeric_table_2[928] = {
      0,   1,   2,   2,   0,   3,   4,   4,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   6,   7,   0,   0,   8,   9,  10,  11,   5,  12,
      5,   5,   5,   5,  13,   5,   5,   5,   5,  14,  15,   5,  16,  17,  18,  19,
     20,   5,  21,  22,   5,   5,  23,  24,  25,   5,  26,   5,   5,  27,  28,  29,
     30,  31,  32,  33,   0,  34,  35,  36,   5,  37,  38,  39,  40,  41,  42,  43,
     44,  45,  46,  47,  48,  49,  50,  51,  52,  49,  53,  54,  55,  56,  57,   0,
     58,  59,  60,  61,  58,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,
     73,  74,  75,   0,  76,  77,  78,   0,  79,   0,  80,  81,  82,  83,   0,   0,
      5,  84,  25,   5,  85,   5,  86,  87,   5,   5,  88,   5,  89,  90,  91,   5,
     92,   5,  74,   0,  93,   5,   5,  94,  73,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,  95,   2,   5,   5,  96,  97,  98,  98,  99,   5, 100, 101,   0,
      0,   5,   5,  32,   5, 102,   5, 103, 104, 105,  25, 106,   5, 107, 108,   0,
    109,   5, 104, 110,   0, 111,  79,   0,   5, 112, 113,   0,   5, 114,   5, 115,
      5, 116, 117, 118, 119,  66,   0, 120,   5,   5,   5,   5,   5,   5,   0, 121,
     94,   5, 122, 118,   5, 123, 124, 125,   0,   0,   0, 126, 127,   0,   0,   0,
    128, 129, 130,   5,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 131,   5, 108,   5, 132, 104,   5,   5,   5,   5, 133,
      5,  86,   5, 134, 116, 135, 135,   5,   0, 136,   0,   0,   0,   0,   0,   0,
    137, 138,  73,   5, 139,  73,   5,  87, 140,  14,   5,   5, 141,   5,   0,  25,
      5,   5,   5,   5,   5,   5,   0,   0,   5,   5,   5,   5,   5,   5,   5,  83,
      5,   5,   5,   5,  31,   0,  25, 118, 142, 143,   5, 144,   5,   5,   5,  93,
    145, 146,   5,   5, 147,   5, 148, 149, 150, 151,   5,  98,   5,   5, 152, 153,
     28, 102, 154,  83,   5, 155, 136, 156,   5, 116, 157, 158,   5, 104, 159, 160,
    161, 162,  87, 163,   5,   5,   5,  33,   5,   5,   5,   5,   5, 164, 165, 109,
      5,   5,   5, 166,   5,   5, 167,   0, 168, 169, 170,   5,   5,  27, 171,   5,
      5, 118,  25,   5, 172,   5, 151, 173,   0,   0,   0, 174,   5,   5,   5,  83,
      0,   2,   2, 175,   5, 104, 176,   0, 177, 178, 179,   0,   5,   5,   5,  74,
      0,   0,   5, 180,   0,   0,   0,   0,   0,   0,   0,   0,  83,   5, 181,   0,
      5,  26, 102,  74, 118,   5, 182,   0,   5,   5,   5,   5, 118,  25, 183, 109,
      5, 184,   5,  61,   0,   0,   0,   0,   5, 116, 103, 151,   0,   0,   0,   0,
    185, 186, 103, 116, 104,   0,   0, 187, 103, 167,   0,   0,   5, 188,   0,   0,
    189, 103,   0,  83,  83,   0,  80, 190,   5, 103, 103, 154,  27,   0,   0,   0,
      5,   5,  16,   0,   5, 154,   5, 154,   5, 151,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   5, 191,   0,   0,  83, 192, 193,   0,   0,  25, 190, 116,
      5,   5, 193,   0, 146,  32,  25,  16,   5, 154, 194, 195,   5,   5, 196,   0,
    197, 198,   0,   0, 199, 119,   5,  16,  40,  49, 200,  61,   0,   0,   0,   0,
      5,   5, 201, 202,   5,   5, 203,   0,   0,   0,   0,   0,   5, 204, 205,   0,
      5, 104, 206,   0,   5, 207,   0,   0,  66,  33,   0,   0,   0,   0,   0,   0,
      5,  32,   0,   0,   0,   5,   5, 208, 209, 210, 211,   0,   0, 212,  30, 213,
      5, 214,  25,   5, 215,   0,   5,  32, 216, 217,  79, 218, 172, 219,   0,   0,
    220, 221, 222, 223, 224,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 116,
      0,   0,   0,   0,   0, 225,   0,   0,   5,   5,   5,   5, 167,   0,   0,   0,
      5,   5,   5, 141,   5,   5,   5,   5,   5,   5,  61,   0,   0,   0,   0,   0,
      5, 141,   0,   0,   0,   0,   0,   0,   5,   5, 226,   0,   0,   0,   0,   0,
      5,  32, 104,   0,   0,   0,  25, 157,   5,  93,  61, 227,  93,   0,   0,   0,
      0,   0,   5,   5,   0,   0,   0,   0,   5,   5, 228,   5, 229,   0,   0, 230,
      5,   5,   5,   5,   5,   5,   5, 231,   5,   5,   5,   5,   5,   5, 103,   0,
     16,   0,   0,   0,   0,   0,   0,   0, 104,   0, 232, 194,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5, 109,   5,   5,   5, 233, 234,   0,   0,   0,
      5,   5,  34,   5, 235, 236, 237,   5, 238, 239, 240,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5, 241, 242,  87,  34,  34, 132, 132, 216, 216, 243,   0,
    244, 245,   0,   0,   0,   0,   0,   0,   5, 246, 247,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   5, 248,   5,   5,   5,   5,   5,   5, 190,   0,
      5,   5, 249,   0,   0,   0,   0,   0, 237, 250, 251, 252, 253, 254,   0,   0,
      0,  25, 163, 163, 108,   0,   0,   0,   5,   5,   5,   5,   5,   5, 118,   0,
      5, 180,   5,   5,   5,   5,   5,   5, 118,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5, 255,   5,   5,   5,   5,   5,   5,   5,   5,   5,  79,
    118,   0,   0,   0,   0,   0,   0,   0,   5,   5,  33,   0,   0,   0,   0,   0
};

static UINT8 posix_alphanumeric_table_3[448] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  39,
      1,   1,   1,   1,  40,   1,  41,  42,  43,  44,  45,  46,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  47,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  48,  49,   1,  50,  51,  52,
     53,  54,  55,  56,  57,  58,   1,  59,  60,  61,  62,  63,  64,  65,  66,  67,
     68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  31,  79,  80,  81,  82,
      1,   1,   1,  83,  84,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
      1,  95,  96,  31,  31,  31,  31,  31,  31,  31,  31,  31,  97,  31,  31,  31,
     31,  31,  31,  31,  98,  99, 100, 101,  31,  31,  31,  31,  31,  31,  31,  31,
    102, 103, 104,  31,  31,  31,  31,  31, 105, 106,  31,  31,  31,  31, 107,  31,
     31, 108,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 109,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 110, 111,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 112,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 113,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 114,  31,  31,  31,  31,  31,
      1,   1,   1, 115,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 posix_alphanumeric_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
};

UINT32 lookup_posix_alphanumeric(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 12;
    block = posix_alphanumeric_table_4[block];
    offset = (codepoint >> 8) & 0xF;
    block = posix_alphanumeric_table_3[(block << 4) + offset];
    offset = (codepoint >> 5) & 0x7;
    block = posix_alphanumeric_table_2[(block << 3) + offset];
    offset = (codepoint >> 3) & 0x3;
    block = posix_alphanumeric_table_1[(block << 2) + offset];
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
      0,   0,  24,   0, 192, 255,   0, 200,   0,  60,   0,   0,   0,   0,  16,  64,
      0,   2,   0,  96, 255,  63,   0,   0,   0,   0, 192, 195,   0,   0, 255, 127,
     48,   0,   1,   0,   0,   0,  12,  44,   0,   0,   3,   0,   0,   0,   1,   0,
      0,   0, 248,   7,   0,   0, 128, 128,  16,   0,   0,   0,   0, 128,   0,   0,
      0,   0,   0,   2,   0,   0,  16,   0,   0,   0,   0, 128,   0, 128,   0,  12,
    254, 255, 255, 252,   0,   0,  80,  61,  32,   0,   0,   0,   0,   0,   0, 192,
    191, 223, 255,   7,   0, 252,   0,   0,   0,   0,   0,   8, 255,   1,   0,   0,
      0,   0, 255,   3,   1,   0,   0,   0,   0,  96,   0,   0,   0,   0,   0,  24,
      0,  56,   0,   0,   0,   0,  96,   0,   0,   0, 112,  15, 255,   7,   0,   0,
     49,   0,   0,   0, 255, 255, 255, 255, 127,  63,   0,   0, 255,   7, 240,  31,
      0,   0,   0, 240,   0,   0,   0, 248, 255,   0,   8,   0,   0,   0,   0, 160,
      3, 224,   0, 224,   0, 224,   0,  96,   0,   0, 255, 255, 255,   0, 255, 255,
    255, 255, 255, 127,   0,   0,   0, 124,   0, 124,   0,   0, 123,   3, 208, 193,
    175,  66,   0,  12,  31, 188,   0,   0,   0,  12, 255, 255, 127,   0,   0,   0,
    255, 255,  63,   0,   0,   0, 240, 255, 255, 255, 207, 255, 255, 255, 191, 255,
    224,   7,   0, 222, 255, 127, 255, 255, 255, 255,   7,   0, 255, 255, 255, 251,
    255, 255,  15,   0,   0,   0, 255,  15,  30, 255, 255, 255,   1,   0, 193, 224,
      0,   0, 195, 255,  15,   0,   0,   0,   0, 252, 255, 255, 255,   0,   1,   0,
    255, 255,   1,   0,   0, 224,   0,   0,   0,   0,   8,  64,   0,   0, 252,   0,
    255, 255, 127,   0,   3,   0,   0,   0,   0,   6,   0,   0,   0,  15, 192,   3,
      0,   0, 240,   0,   0, 192,   0,   0,   0,   0,   0,  23, 254,  63,   0, 192,
      0,   0, 128,   3,   0,  12,   0,   0,   0,   8,   0,   0,   0,   2,   0,   0,
      0,   0, 252, 255,   0,   0,   0,  48, 255, 255, 247, 255, 127,  15,   0,   0,
     63,   0,   0,   0, 127, 127,   0,  48,   7,   0,   0,   0,   0,   0, 128, 255,
      0,   0,   0, 254, 255, 115, 255,  31, 255, 255, 255,  31,   0,   0, 128,   1,
      0,   0, 255,   1,   0,   1,   0,   0,   0,   0, 127,   0,   0,   0,   0,  30,
      0,  32,   0,   0,   0,   0, 224,   3, 128,  63,   0,   0,   0,   0,   0, 216,
      0,   0,  48,   0, 224,  33,   0, 232,   0,   0,   0,  63,   0, 248,   0,  44,
     64,   0,   0,   0, 254, 255, 255,   0,  14,   0,   0,   0, 255,  31,   0,   0,
    112,   0,   0,   0,   0,   0,   0, 220,  62,   0,   0,   0,   0,   0, 224, 255,
    255, 255,   3, 128,   0,   0,  31,   0,   0,   0,  32,   0,  48,   0,   0,   0,
      0,   0, 128,   7,   0,   0,   0, 144, 127, 254, 255, 255,  31,  28,   0,   0,
     24, 240, 255, 255, 255, 195, 255, 255,  35,   0,   0,   0,   2,   0,   0,   8,
      8,   0,   0,   0,   0, 224, 223, 255, 239,  15,   0,   0,   0,  16,   1,   0,
      0,  64,   0,   0, 255,  15, 255, 255, 255, 127, 254, 255, 254, 255, 254, 255,
      0, 224, 255, 255, 255, 255,   0,   0, 192, 255, 255, 255,   7,   0, 255, 255,
    255, 255, 255,  15, 255,   1,   3,   0, 255, 255, 255,   0, 255,  31, 255,  31,
    255, 255, 255,   1, 255,  15,   0,   0, 255,   0, 255,   3, 255,  63,   3,   0,
    255, 255, 255, 253, 255, 239, 255, 255, 255,  63,  31,   7, 127,   0, 255, 255,
    255,   1, 127,   0,   7,   0, 127,   0
};

static UINT8 posix_punct_table_2[816] = {
      0,   1,   2,   3,   0,   4,   5,   5,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   6,   7,   0,   0,   0,   8,   9,   0,   0,  10,
      0,   0,   0,   0,  11,   0,   0,   0,   0,   0,  12,   0,  13,  14,  15,  16,
     17,   0,   0,  18,   0,   0,  19,  20,  21,   0,   0,   0,   0,   0,   0,  22,
      0,  23,  14,   0,   0,   0,   0,   0,   0,   0,   0,  24,   0,   0,   0,  25,
      0,   0,   0,  10,   0,   0,   0,  26,   0,   0,   0,  27,   0,   0,   0,  28,
      0,   0,   0,  29,  30,   0,   0,   0,   0,   0,  31,  32,   0,   0,   0,  33,
      0,  34,  35,   0,   0,   0,   0,   0,  36,  37,   0,   0,  38,  39,  40,   0,
      0,   0,  41,   0,  39,   0,   0,  42,   0,   0,   0,  43,  44,   0,   0,   0,
     45,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46,  47,   0,   0,  48,
      0,  49,   0,   0,   0,   0,  50,   0,  51,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  52,   0,   0,   0,  39,  53,  39,   0,   0,   0,   0,  54,   0,   0,
      0,   0,  12,  55,   0,   0,   0,  56,   0,  57,   0,  39,   0,   0,  58,   0,
      0,   0,   0,   0,   0,  59,  60,  61,  62,  63,  64,  65,  66,  53,   0,   0,
     67,  68,  69,   0,  70,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,
     53,  71,  51,   0,  56,  72,   0,   0,  53,  53,  53,  72,  73,  53,  53,  53,
     53,  53,  53,  74,  75,  53,  53,  53,   0,   0,   0,   0,   0,   0,   0,  76,
      0,   0,   0,  27,   0,   0,   0,   0,  53,  77,  78,   0,  79,  53,  53,  80,
     53,  53,  53,  53,  53,  53,  72,  81,  82,  83,   0,   0,  47,  45,   0,  42,
      0,   0,   0,   0,  84,   0,  53,  85,  64,  86,  87,  53,  86,  88,  53,  53,
      0,   0,   0,   0,   0,   0,  53,  53,   0,   0,   0,   0,  62,  53,  71,  39,
     89,   0,   0,  90,   0,   0,   0,  91,  92,  93,   0,   0,  94,   0,   0,   0,
      0,  95,   0,  96,   0,   0,  97,  98,   0,  97,  34,   0,   0,   0,  99,   0,
      0,   0,  56, 100,   0,   0,  39,  26,   0,   0,  42, 101,   0,   0,   0, 102,
      0, 103,   0,   0,   0, 104,  93,   0,   0,  39,   0,   0,   0,   0,   0, 105,
     44,  62, 106, 107,   0,   0,   0,   0,   1,   2,   2, 108,   0,   0,   0, 109,
    110, 111,   0, 112, 113,  45,  62, 114,   0,   0,   0,   0,  34,   0,  27,   0,
      0,   0,   0,  31,   0,   0,   0,   0,   0,   0,   5, 115,   0,   0,   0,   0,
     34,  34,   0,   0,   0,   0,   0,   0,   0,   0, 116,  34,   0,   0, 117, 118,
      0, 112,   0,   0, 119,   0,   0,   0,   0,   0,   0,   0,   0, 120,   0,   0,
      0,   0, 121,   0,   0,   0,   0,   0,   0,   0, 122,   0,   0, 123,  93,   0,
      0,   0,  85, 124,   0,   0, 125,   0,   0, 126,   0,   0,   0, 103,   0,   0,
      0,   0, 127,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,   0, 129,   0,
      0,   0, 130, 131,   0,   0,   0,   0,   0,  56,   0,   0,   0,   0,   0,   0,
      0,  42,   0,   0,   0,   0,   0,   0,   0,   0, 132,   0,   0,   0,   0,  11,
      0,  34,  71,   0, 133, 110,   0,   0,   0,   0, 134,  26,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 115,   0,   0,   0,   0,   0,   0, 135, 136,
      0,   0,   0, 137,   0,   0,   0,   0,   0,   0,   0,  97,   0,   0,   0, 138,
      0, 111, 139,   0,   0,   0,   0,   0,   0,   0,   0,   0, 140,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0, 141,   0,   0,   0,
     53,  53,  53,  53,  53,  53,  53,  72,  53, 142,  53, 143, 144, 145,  53,  43,
     53,  53, 146,   0,   0,   0,   0,   0,  53,  53,  92,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 147,  42, 138, 138,  31,  31, 103, 103, 148,   0,
      0, 140,   0, 149, 150,   0,   0,   0,   0,   0,  31,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  34,   0,   0,  39,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0, 151,   0,   0,   0, 152,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  26,  53, 153,  53,  53,  80, 154, 155,  72,
    156, 157,  41,  41,  86,  21,   0, 158, 159, 160, 161, 108,   0,   0,   0,   0,
     53,  53,  53,  53,  53,  53, 162, 163,  53,  53,  53,  80,  53,  53, 164, 165,
    153,  53, 166,  53,  63, 167,   0,   0,  53,  53,  53, 168,  53,  53, 169,  53,
     53,  53,  80, 170, 171, 172, 173,   0,  53,  53,  53,  53, 106,  53,  51,   0
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
      1,   1,   1,   1,  74,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  75,  76,   1,   1,  77,  78,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  79,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
     80,  81,  82,  83,   1,   1,  84,  85,  29,  29,  86,   1,   1,   1,   1,   1,
      1,  87,  88,   1,   1,   1,   1,   1,   1,  89,   1,   1,  90,  91,  92,   1,
     93,  94,  95,  29,  29,  29,  96,  97,  98,  99, 100, 101,   1,   1,   1,   1
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

static UINT8 prepended_concatenation_mark_table_1[56] = {
      0,   0,   0,   0,   0,   0,   0,   0,  63,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  32,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,
      0,  32,   0,   0,   0,   0,   0,   0
};

static UINT8 prepended_concatenation_mark_table_2[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   2,   3,   0,   0,   0,
      0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   5,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 prepended_concatenation_mark_table_3[48] = {
      0,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 prepended_concatenation_mark_table_4[68] = {
      0,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1
};

UINT32 lookup_prepended_concatenation_mark(Py_UCS4 codepoint) {
    UINT32 block;
    UINT32 offset;
    UINT32 value;

    block = codepoint >> 14;
    block = prepended_concatenation_mark_table_4[block];
    offset = (codepoint >> 10) & 0xF;
    block = prepended_concatenation_mark_table_3[(block << 4) + offset];
    offset = (codepoint >> 6) & 0xF;
    block = prepended_concatenation_mark_table_2[(block << 4) + offset];
    offset = (codepoint >> 3) & 0x7;
    block = prepended_concatenation_mark_table_1[(block << 3) + offset];
    value = (block >> (codepoint & 0x7)) & 0x1;

    return value;
}

/* The tables and function for Print. */

static UINT8 print_table_1[348] = {
      0,   0, 255, 255, 255, 127, 255, 252, 240, 215, 251, 255, 254, 255, 127, 254,
    255, 231, 255,   0, 255, 135,  31,   0, 255, 223, 255, 191,   3,   0, 255,  63,
    255,  79, 255,   7, 223, 255, 248, 255, 239, 159, 249, 255, 255, 253, 197, 243,
    159, 121, 128, 176, 207, 255, 238, 135, 109, 211, 135,  57,   2,  94, 192, 255,
    127,   0, 238, 191, 237, 243, 191,  59,   1,   0,   3, 254, 238, 159, 159,  57,
    224, 176, 236, 199,  61, 214,  24, 199, 255, 195, 199,  61, 129,   0, 253, 255,
    255, 227, 223,  61,  96,   7, 128, 255, 239, 243,  96,  64,   6,   0, 223, 253,
    240, 255, 238, 255, 127, 252, 251,  47, 127, 132,  95, 255,  28,   0, 255,  15,
    214, 247, 175, 255,  95,  63, 255, 243, 255, 254, 255,  31, 191,  32, 255,  61,
    127,  61,  61, 127,  61, 255, 127, 255, 255,   3,  63,  63, 255,   1,  15,   0,
     13,   0,  63,   0, 241, 255, 255, 199, 255, 207, 255, 159,  15, 240, 255, 248,
    255, 251, 255, 170, 207, 239, 220, 127,   0, 128, 243, 255, 191, 255,  15, 254,
    255, 128,   1, 128, 127, 127,   7,   0, 224, 255, 252,   7,  63, 192,  15, 128,
      0, 248, 126, 126, 126,   0, 127, 248, 248, 224, 127,  95, 219, 255, 252, 255,
    247, 255, 127,  15, 252, 252, 252,  28,   0,  62, 255, 239, 255, 183, 135, 255,
    143, 255,  15, 224,  15, 255,  63, 253, 191, 145,  55, 248, 255, 143, 255, 131,
    255, 240, 111, 240, 239, 254,  63, 135,  63, 254,  63, 255,   7, 255,   3,  30,
      0, 254,   7, 252, 255,  59,   3,  32, 127, 189, 237, 251, 129, 224, 207,  31,
      7, 128, 127, 242, 111, 255, 191, 249, 127, 251, 127, 180, 191, 253, 251,   1,
      3, 128, 255, 224, 240,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223,
    255, 123,  95, 252, 255, 249, 219,   7, 159, 255, 150, 254, 247,  10, 132, 234,
    150, 170, 150, 247, 247,  94, 238, 251,  31,   7,   2,   0
};

static UINT8 print_table_2[1632] = {
      0,   0,   1,   1,   1,   1,   1,   2,   0,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,
      4,   1,   5,   1,   1,   1,   1,   1,   1,   1,   1,   6,   1,   7,   1,   1,
      8,   6,   1,   1,   9,   1,  10,  11,   1,  12,   1,   1,   1,   1,   1,   1,
     13,   1,   1,   1,   8,   1,   1,   1,   1,   1,   1,  14,   1,   1,   1,   8,
      1,   1,  15,   2,   1,  16,  17,   0,   0,   0,   1,  18,   9,  19,   1,   1,
     20,  21,  22,  23,  24,  25,  26,   2,  27,  21,  22,  28,  29,  30,  31,  32,
     33,   5,  22,  34,  35,  36,  26,  37,  38,  21,  22,  34,  39,  40,  26,   9,
     41,  42,  43,  44,  45,  46,  31,  17,  12,  47,  22,  48,  49,  50,  26,  51,
     12,  47,  22,  52,  49,  53,  26,  54,  12,  47,   1,   1,  55,  56,  26,   1,
     57,  58,   1,  59,  60,  61,  31,  62,   6,   1,   1,  10,   1,  63,   0,   0,
     64,   1,  65,  15,  66,  67,   0,   0,   1,   1,   1,   1,  68,   1,  69,   6,
      1,  68,   1,  12,  12,  17,   0,   0,   1,   1,   1,   1,  70,   1,   1,   1,
      1,   1,   1,   1,  71,  72,   1,   1,  71,   1,   1,  73,  74,  75,   1,   1,
      1,  74,   1,   1,   1,   8,   1,  69,   1,  76,   1,   1,   1,   1,   1,  77,
     36,   0,   1,   1,   1,   1,   1,  78,  12,  11,   1,  32,   1,  79,  12,  80,
      1,   1,   1,   1,   1,  15,  76,  76,   2,  76,   1,   1,   1,   1,   1,  78,
      1,   1,  17,   1,   1,   1,   1,  81,   1,   2,  63,  63,  82,   1,  15,  11,
      1,   1,  63,   1,  76,  83,   1,   1,   1,  84,   1,   1,   1,   2,   1,  85,
     76,  76,  15,   1,  36,   0,   0,   0,   1,   1,   1,   1,  63,   1,   1,  69,
      1,   1,   1,   1,   1,   1,   1,  86,   1,   1,   1,  87,  48,   1,   1,   1,
     78,   1,   1,   8,   9,   1,   1,  17,   1,   1,   1,   1,   1,   1,   1,  88,
      1,  77,   1,   1,  77,  89,   1,  15,   1,   1,   1,  18,  18,  90,   1,  91,
      1,   1,   1,   0,   0,  92,  31,  93,   2,  69,   1,   1,   0,   1,   1,  36,
     63,   1,   1,   1,   1,   1,   1,   1,   1,   1,  32,   0,  17,   0,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  26,   1,  94,   1,   1,   1,   1,   1,   1,
      1,   1,   2,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,  95,
      1,   1,  70,   1,   1,   1,  96,  97,   1,  32,  98,  98,  98,  98,   1,   1,
      1,   1,   1,   1,   1,  99,   0,   0,   1,  88,   1,   1,   1,   1,   1,  79,
      1,   1,   1,   1,   1,  81,   0,  63,   1,   1,   1,   1,   6,   1,   1,   1,
      1,   7,   1,   1,   1,   1,   1,   1, 100,   1,   1,   6,   1,   1,   1,   1,
      2,   1,   1,   1,   1,   1,  79,   1,   1,   2,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  69,  69,   1,   1,   1,  32,   1,   1,   1,
      1,   1,  63,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   9,
      1,   1,   1,   1, 101,   0,   0, 100,   1,   1,  69,  76,   1,   1,   1,   9,
      1,   1,   1,   1, 102,  76,   1,   1,   1,   1,   1,   1,   1, 103,   1,  69,
      1,   1,   1,   1,  13,  44,   1,   2,   1,   1,   1,  32,  15,  67,   1,   1,
      1,   1,   1,   1,  99, 104,   1,  32, 105, 106,  98,   1,   1,   1,  63,   1,
      1,   1,   1,   1,   1,   1,  15,  76,   1,   1,  79,   1, 107,   1,   1,  63,
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,  15,   1,
      1,   1,   1,   1,   1,  76,   0,   0,  32, 108,   1, 109, 110,   1,   1,   1,
      1,   1,   1,   1,  14,  19,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,
      1, 111,   1,   1,   9,   0,   0,  15,   1,  76,   1,   1,   1, 112, 113,  18,
      1,   1,   1,   1,   1,   1,   1,  85,   6,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   2, 114, 115,  98, 116, 117,   1,  75, 118,  15,  15,   0,   0,
      1,   1,   1,   1,   1,   1,   1,  17, 119,   1,   1, 120,   1,   1,   1,   1,
      2,  69,  36,   0,   0,   1,   1,  15,   1,  69,   1,   1,   1,  36,   1,  63,
      1,   1, 121,   1,  17,   1,   1,  17,   1,  13,   1,   1, 122,  81,   0,   0,
      1,  15,  76,   1,   1, 122,   1,  63,   1,   1,   9,   1,   1,   1, 103,   0,
      1,   1,   1,  32,   1,  81,   9,   0, 123,   1,   1, 124,   1,  94,   1,   1,
      1,   2,  51,   0,   0,   0,   1, 125,   1, 126,   1, 127,   0,   0,   0,   0,
      1,   1,   1, 128,   1, 111,   1,   1, 129, 130,   1, 131,  78,  78,   1,   1,
      1,   1,   0,   0,   1,   1, 107,  32,   1,   1,   1, 132,   1, 133,   1, 134,
      1, 135, 136,   0,   0,   0,   0,   0,   1,   1,   1,   1,  78,   0,   0,   0,
      1,   1,   1,  99,   1,   1,   1, 137,   1,   1,   9,  76,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,   2,   1,   1, 138,  14,   0,   0,   0,   0,
      1,   1,   9,   1,   1,  76,   0,   0,   0,   0,   0,   1,  63,   0,   1,  32,
      1,   1,   1,   1,  15, 111,   1,  92,   1,   1,   1,   1, 139,   1,  78,  76,
      1,   1,   1,  18,   9,   1,   1,  32,   1,   1,   1,   1,   1,   1,   6,  11,
      1,   5,   1,   2,   0,   0,   0,   0, 140,  13,  76,   1,   1,   1,  17,  76,
     20,  21,  22, 141,  39, 142, 143,  11,   1,   1,   1,   1,   1, 117,  14,   0,
      1,   1,   1,   1,   9,  76,   0,   0,   1,   1,   1, 133,   1,  15,   0,   0,
      1,   1,   1,   1,  11,  76,  69,   0,   1,   1,   1,  78,  76,   0,   0,   0,
      1,   8,  63,   1,   0,   0,   0,   0,   1,   1,   1,  63,   0,   0,   0,   0,
      0,   0,   1,   1,   1,   1,   1, 144, 145, 146,   1, 147,  32,  76,   0,   0,
      0,   0,   3,   1,   1,   3,  11,   0,   1,   1,   1,   1,   9,   1,   1,   1,
      1,   1,  99,   0,   1,   1,   1,  78,  22,   1,   1,  75,  81,   1,  69,   1,
      1, 111,  68,  32,   0,   0,   0,   0, 148,   1,   1, 149,   9,  76, 150,   1,
      2, 151,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  78,
      0,   0,   0,  36,   1,   1,   1, 152,   1,  76,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   2,  11,   1,   1,   1,   1,  79,   0,   0,   0,
      1,   1,   2,  78,   0,   0,   0,   0,   1,   1,   1,   1,  32,   0,   0,   0,
      1,   1,   1,  78,   1,   2,  44,   0,   0,   0,   0,   0,   0,   1,  15,  81,
      1,   1,   1,   1,  81,  88,   5, 153,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   1,   1,   1,   1,   1,  17,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,  10,   1,   1,   1,  96,   1,   0,   0,   0,   0,  11,  14,
      1,   1,   1,   1,   1,  81,   0,   0,  78,   0,   0,   0,   0,   0,   0,   0,
      1,   2,   0,   0,   0,  99, 154,   1,   1,   1,   1,   1,   1,   1,   1,  63,
      1,   1,   1,   1,   1,   1,  17,  69,  78,  67,  79,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   1,  81,   1,   1,   7,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,  78,   0,   1,   1,   1,   1,  81,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   1,  79,   1,   1,   1,   1,   1,  32,   1,  78,
      1,   1,   1,   1,   1,  18,   1,   1,   1,  12, 155, 156, 157,   1,   1,   1,
    158, 159,   1, 160, 161,  47,   1,   1,   1,   1, 133,   1,   1,   1,   1,   1,
      1,   1,   1,   1,  84,   1,   1,   1,  63, 104,   6,   0,   0,   0,   0,   0,
     75, 162, 163,   0,   0,   0,   0,   0,   1,   1,  69,  15,  44,   0,   0,   0,
      0,   0,   0,   0,   1,   1,   1, 127,   1,   1,   1,   1, 164,  32,   0,   0,
      1,   1,   1,   1,  63,  44,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,
      1,   1,   1,  11,   0,   0,   0,   0,   6,   1,   1,  15,   0,   0,   0,   0,
    157,   1, 165, 166, 167, 168, 169, 170,  88,  63, 171,  63,   0,   0,   0,  14,
      1,   1,  63,   1,   1,   1,   1,   1,   1,  79,   2,   6,   6,   6,   1,  81,
      1,   1,  15,   0,   0,   0,  31,   1,  99,   1,   1,  63,  78,  14,  81,   0,
      1,   1,   1,   1,   1,   9,  69,  69,   1,   1,   1,   1,   1,   1,   1,  79,
      1,   1,   1,   1,   1,  78,  63,   0,  63,   1,   1,   1,   9,  76,   1,   1,
      9,   1,  15,  14,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,  22,
      1,   1,   1,   1, 117,   1,   1,   1,   1,   1,   1,   1,   1,  79,  15, 172,
     32,   1,  78,  32,  99,  32,   0,   0,   1, 112,   1,   1,  17,   0,   0,  76,
      1,   1,   1,   1,   1,  15,   0,   0,   1,   1,   1,  11,   1,   1,   1,   1,
      1,  15,   1,   1,   1,   1,   1,   1,   1,   1,  14,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,  36,   0,   1,  15,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,  17,   0,   0,   0, 173,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,   1,   1,   1,  15
};

static UINT8 print_table_3[656] = {
      0,   1,   2,   2,   2,   2,   3,   4,   2,   2,   5,   6,   7,   2,   8,   9,
     10,  11,   2,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,
      2,  25,   2,   2,  26,  27,  28,  29,   2,   2,   2,   2,   2,  30,  31,  32,
     33,  34,  35,  36,  37,  38,  39,  40,  41,  42,   2,  43,   2,   2,  44,  45,
     46,  47,   2,  48,   2,   2,   2,   2,  49,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,  50,  51,  52,  53,  54,  55,  56,  57,   2,  58,
     59,  60,  61,  62,  63,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  64,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  65,   2,   2,  66,  67,   2,  68,
     69,  70,  71,  72,  73,  74,  75,  76,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  77,
     78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,  79,  80,  81,  82,   2,   2,  83,  84,  85,  86,  87,  88,
     89,  90,  91,  92,  78,  93,  94,  95,   2,  96,  97,  78,   2,   2,  98,  78,
     99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,  78, 110, 111, 112, 113,
    114, 115, 116, 117, 118, 119, 120,  78, 121, 122,  78, 123, 124, 125, 126,  78,
    127, 128, 129, 130, 131, 132,  78,  78, 133, 134, 135, 136,  78, 137,  78, 138,
      2,   2,   2,   2,   2,   2,   2, 139, 140,   2, 141,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2,   2,   2, 142,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78,   2,   2,   2,   2, 143,  78,  78,  78,
      2,   2,   2,   2, 144, 145, 146, 147,  78,  78,  78,  78, 148, 149, 150, 151,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  67,
      2,   2,   2,   2,   2,   2,   2,   2,   2, 152, 153,  78,  78,  78,  78,  78,
      2,   2, 154,   2,   2, 155,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,  78, 156, 157,  78,  78,  78,  78,  78,  78,
      2, 158, 159, 160, 161, 162, 163,  78, 164, 165, 166,   2,   2, 167,   2, 168,
      2,   2,   2,   2,   2, 169,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
    170,  78, 171,  78,  78, 172,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2, 173, 174,  78,  78,  78,  78,  78, 175, 176, 177,  78, 178, 179,  78,  78,
    180, 181,   2, 182, 183,  78,   2,   2,   2,   2,   2,   2,   2, 184, 185, 186,
    187, 188, 189, 190, 191, 192,   2, 193,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 194,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 195,   2,
    196,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 197,   2,   2,
      2,   2,   2,   2,   2,   2,   2, 198,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2, 199,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2, 200,  78,  78,  78,  78,  78,  78,  78,  78,  78,
    201,  78,   2, 202,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,  78,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2, 203
};

static UINT8 print_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   8,   9,  10,   7,   7,   7,   7,  11,  12,   7,   7,   7,  13,
     14,  15,  16,  17,  18,  12,  19,  12,  20,  12,  12,  12,  12,  21,   7,   7,
     22,  23,  12,  12,  12,  12,  24,  25,  12,  12,  26,  27,  28,  29,  30,  31,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  32,   7,  33,  34,   7,  35,   7,   7,   7,  36,  12,  37,
      7,   7,  38,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
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
     39,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  40,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  40
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

static UINT8 punct_table_1[440] = {
      0,   0,   0,   0, 238, 247,   0, 140,   1,   0,   0, 184,   0,   0,   0,  40,
    130,   8, 192, 136,   0,   0,   0,  64, 128,   0,   0,   0,   0,   0,   0, 252,
      0,   6,   0,   0,  73,   0,   0,   0,   0,   0,  24,   0,   0,  54,   0, 200,
      0,  60,   0,   0,   0,   0,  16,   0, 255,  63,   0,   0,   0,   0, 128,   3,
      0,   0, 255, 127,  48,   0,   1,   0,   0,   0,   0,  32,   0,   0,  64,   0,
      0,   0,   1,   0,   0,   0, 128,   0,  16,   0,   0,   0,   0, 128,   0,  12,
    240, 255,  23,   0,   0,   0,   0,  60,  32,   0,   0,   0,   0,   0,  31,   6,
      0, 252,   0,   0,   0,   0,   0,   8, 255,   1,   0,   0,   1,   0,   0,   0,
      0,  64,   0,   0,   0,   0,   0,  24,   0,  56,   0,   0,   0,   0,  96,   0,
      0,   0, 112,   7, 255,   7,   0,   0,  48,   0,   0,   0,   0,   0,   0, 192,
    127,  63,   0,   0,   0,   0,   0, 240,   0,   0,   0, 248, 255,   0,   8,   0,
      0,   0, 255, 255, 255,   0, 255, 255, 239, 255, 251, 127,   0,   0,   0,  96,
      0,  96,   0,   0,   0,  15,   0,   0,   0, 255,  63,   0,  96,   0,   0,   0,
    192, 255,   0,   0, 248, 255, 255,   1,   0,   0,   0,  15,   0,   0,   0,  48,
      0,   0,   0, 222, 255, 255, 255, 255, 255, 127, 255, 255, 255, 255,   4,   0,
     14, 255, 243, 255,   0,   0,   1,  32,   0, 224,   0,   0,   0,   0,   8,  64,
      0,   0, 252,   0,   0,   0, 240,   0,   0, 192,   0,   0,   0,   0,   0,  23,
      0,   0,   0, 128, 254,  63,   0, 192,   0,   0,   3,   0,   0,   8,   0,   0,
      0,   0, 255,   3, 255, 255, 247, 255,  11,  13,   0,   0,   0,   0,   0, 168,
     63,   0,   0,   0,   7,   0,   0,   0,   0, 128,   0,   0,   0,   0, 255,   1,
      0,   0, 127,   0,   0,   0,   0, 254,   0,   0,   0,  30,   0,  32,   0,   0,
      0,   0, 224,   3, 128,  63,   0,   0,   0,   0,   0, 216,   3,   0,   0,   0,
     15,   0,   0,   0,   0,   0,  48,   0, 224,  33,   0, 232,   0,   0,   0,  63,
      0,   2,   0,   0,   0, 248,   0,  44,  64,   0,   0,   0, 254, 255, 255,   0,
     14,   0,   0,   0, 255,  31,   0,   0,   0,   0,   0, 112, 112,   0,   0,   0,
      4,   0,   0,   0, 127,   0,   0,   0,   0,   0,   0, 220,  62,   0,   0,   0,
      0,   0, 128,   1,   0,   0,  31,   0,   0,   0,  32,   0,   0,   0, 128,  15,
      0,   0, 128,   7, 128,  15,   0,   0
};

static UINT8 punct_table_2[560] = {
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
     39,   0,   0,   0,   0,  40,   0,   0,   0,   0,   7,  31,   0,   0,   0,  41,
      0,  42,   0,  39,   0,   0,  43,   0,  44,  45,  46,  47,  48,   0,   0,   0,
     49,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50,   0,   0,  51,  52,
      0,   0,   0,   0,  53,   0,  54,  55,   0,   0,   0,   0,   0,   0,   0,  56,
      0,   0,   0,  20,   0,   0,   0,   0,  57,  58,  59,   0,   0,   0,   0,   0,
     60,  61,   0,   0,   0,  31,   0,  29,   0,   0,   0,   0,   0,   0,   0,  39,
     62,   0,   0,  63,   0,   0,   0,  64,   0,   0,   0,  65,   0,   0,  66,  67,
      0,  66,  68,   0,   0,   0,  69,   0,   0,   0,  41,   0,   0,   0,  39,  70,
      0,   0,   0,   0,   0,   0,   0,  71,   0,  39,   0,   0,   0,   0,   0,   0,
     72,  44,  73,  74,   0,   0,   0,   0,   1,   2,  75,  76,   0,   0,   0,   0,
     77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  68,   0,  20,   0,
      0,   0,   0,  78,   0,   0,   0,   0,   0,   0,  21,   0,   0,   0,   0,   0,
     68,  68,   0,   0,   0,   0,   0,   0,   0,   0,  79,  68,   0,   0,   0,  80,
      0,  81,   0,   0,  82,   0,   0,   0,   0,   0,   0,   0,   0,  83,   0,   0,
      0,   0,  84,   0,   0,   0,   0,   0,   0,   0,  85,   0,   0,  86,  87,   0,
      0,   0,  88,  89,   0,   0,  90,   0,   0,  91,   0,   0,   0,  92,   0,   0,
      0,   0,  93,   0,   0,   0,  94,   0,   0,   0,   0,   0,   0,   0,  95,   0,
      0,   0,  96,  97,   0,   0,   0,   0,   0,  98,   0,   0,   0,   0,   0,   0,
      0,  29,   0,   0,   0,   0,   0,   0,   0,   0,  99,   0,   0,   0,   0, 100,
      0,  68, 101,   0, 102,  77,   0,   0,   0,   0, 103,  70,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 104,   0,   0,   0,   0,   0,   0,   0,  68,
      0,   0,   0, 105,   0,   0,   0,   0,   0,   0,   0,  66,   0,   0,   0, 106,
      0, 107,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0, 108,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 100,   0,   0,   0,   0,  68,   0,   0,   0,
      0,   0,   0,   0, 109,   0,   0,   0,   0,   0,  39,   0,   0,   0,   0,   0
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
      1,   1,   1,   1,  62,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  63,  64,   1,   1,  65,  66,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  67,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  68,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,  69,   1,   1,   1,   1,   1,   1,
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

static UINT8 script_table_1[5352] = {
     25,  25,  25,  25,  25,  25,  25,  25,  25,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  25,  25,  25,  25,  25,
     25,  25,  70,  25,  25,  25,  25,  25,  70,  70,  70,  70,  70,  70,  70,  25,
     70,  25,  25,  25,  25,  25,  25,  25,  70,  70,  70,  70,  70,  25,  25,  25,
     25,  25,  13,  13,  25,  25,  25,  25,  55,  55,  55,  55,  55,  55,  55,  55,
     43,  43,  43,  43,  25,  43,  43,  43,   0,   0,  43,  43,  43,  43,  25,  43,
      0,   0,   0,   0,  43,  25,  43,  25,  43,  43,  43,   0,  43,   0,  43,  43,
     43,  43,  43,  43,  43,  43,  43,  43,  43,  43,   0,  43,  43,  43,  43,  43,
     43,  43,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  55,  55,  29,
      0,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,
      5,   5,   5,   5,   5,   5,   5,   0,   5,   5,   5,   0,   0,   5,   5,   5,
      0,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,
      0,   0,   0,   0,   0,   0,   0,   0,  52,  52,  52,   0,   0,   0,   0,  52,
     52,  52,  52,  52,  52,   0,   0,   0,   4,   4,   4,   4,   4,  25,   4,   4,
      4,   4,   4,   4,  25,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  25,   4,   0,   4,  25,  25,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,   4,   4,
     55,   4,   4,   4,   4,   4,   4,   4, 136, 136, 136, 136, 136, 136, 136, 136,
    136, 136, 136, 136, 136, 136,   0, 136, 136, 136, 136,   0,   0, 136, 136, 136,
    146, 146, 146, 146, 146, 146, 146, 146, 146, 146,   0,   0,   0,   0,   0,   0,
    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,   0,   0, 100, 100, 100,
    124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124,   0,   0,
    124, 124, 124, 124, 124, 124, 124,   0,  81,  81,  81,  81,  81,  81,  81,  81,
     81,  81,  81,  81,   0,   0,  81,   0, 136, 136, 136,   0,   0,   0,   0,   0,
      4,   4,   4,   4,   4,   0,   4,   4,   0,   0,   0,   4,   4,   4,   4,   4,
      4,   4,  25,   4,   4,   4,   4,   4,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  55,  55,  55,  55,  31,  31,  31,  31,  31,  31,  31,  25,  25,  31,  31,
     11,  11,  11,  11,   0,  11,  11,  11,  11,  11,  11,  11,  11,   0,   0,  11,
     11,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,
     11,   0,  11,  11,  11,  11,  11,  11,  11,   0,  11,   0,   0,   0,  11,  11,
     11,  11,   0,   0,  11,  11,  11,  11,  11,   0,   0,  11,  11,  11,  11,   0,
      0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,  11,  11,   0,  11,
     11,  11,  11,  11,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,  11,   0,
      0,  46,  46,  46,   0,  46,  46,  46,  46,  46,  46,   0,   0,   0,   0,  46,
     46,   0,   0,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,
     46,   0,  46,  46,  46,  46,  46,  46,  46,   0,  46,  46,   0,  46,  46,   0,
     46,  46,   0,   0,  46,   0,  46,  46,  46,   0,   0,  46,  46,  46,   0,   0,
      0,  46,   0,   0,   0,   0,   0,   0,   0,  46,  46,  46,  46,   0,  46,   0,
      0,   0,   0,   0,   0,   0,  46,  46,  46,  46,  46,  46,  46,  46,  46,   0,
      0,  44,  44,  44,   0,  44,  44,  44,  44,  44,  44,  44,  44,  44,   0,  44,
     44,  44,   0,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,   0,  44,  44,  44,  44,  44,  44,  44,   0,  44,  44,   0,  44,  44,  44,
     44,  44,   0,   0,  44,  44,  44,  44,  44,  44,   0,  44,  44,  44,   0,   0,
     44,   0,   0,   0,   0,   0,   0,   0,  44,  44,  44,  44,   0,   0,  44,  44,
     44,  44,   0,   0,   0,   0,   0,   0,   0,  44,  44,  44,  44,  44,  44,  44,
      0, 113, 113, 113,   0, 113, 113, 113, 113, 113, 113, 113, 113,   0,   0, 113,
    113,   0,   0, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113,   0, 113, 113, 113, 113, 113, 113, 113,   0, 113, 113,   0, 113, 113, 113,
    113, 113,   0,   0, 113, 113, 113, 113, 113,   0,   0, 113, 113, 113,   0,   0,
      0,   0,   0,   0,   0, 113, 113, 113,   0,   0,   0,   0, 113, 113,   0, 113,
    113, 113, 113, 113,   0,   0, 113, 113,   0,   0, 143, 143,   0, 143, 143, 143,
    143, 143, 143,   0,   0,   0, 143, 143, 143,   0, 143, 143, 143, 143,   0,   0,
      0, 143, 143,   0, 143,   0, 143, 143,   0,   0,   0, 143, 143,   0,   0,   0,
    143, 143, 143, 143, 143, 143, 143, 143, 143, 143,   0,   0,   0,   0, 143, 143,
    143,   0,   0,   0,   0,   0,   0, 143,   0,   0,   0,   0,   0,   0, 143, 143,
    143, 143, 143,   0,   0,   0,   0,   0, 145, 145, 145, 145, 145, 145, 145, 145,
    145, 145, 145, 145, 145,   0, 145, 145, 145,   0, 145, 145, 145, 145, 145, 145,
    145, 145,   0,   0,   0, 145, 145, 145, 145,   0, 145, 145, 145, 145,   0,   0,
      0,   0,   0,   0,   0, 145, 145,   0, 145, 145, 145,   0,   0,   0,   0,   0,
    145, 145, 145, 145,   0,   0, 145, 145,   0,   0,   0,   0,   0,   0,   0, 145,
     60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,   0,  60,  60,
     60,   0,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,   0,  60,  60,  60,
     60,  60,   0,   0,  60,  60,  60,  60,  60,   0,  60,  60,  60,  60,   0,   0,
      0,   0,   0,   0,   0,  60,  60,   0,   0,   0,   0,   0,   0,   0,  60,   0,
     60,  60,  60,  60,   0,   0,  60,  60,   0,  60,  60,   0,   0,   0,   0,   0,
     80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,   0,  80,  80,
     80,   0,  80,  80,  80,  80,  80,  80,   0,   0,   0,   0,  80,  80,  80,  80,
     80,  80,  80,  80,   0,   0,  80,  80,   0, 130, 130, 130,   0, 130, 130, 130,
    130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,   0,
      0,   0, 130, 130, 130, 130, 130, 130, 130, 130,   0, 130, 130, 130, 130, 130,
    130, 130, 130, 130,   0, 130,   0,   0,   0,   0, 130,   0,   0,   0,   0, 130,
    130, 130, 130, 130, 130,   0, 130,   0,   0,   0,   0,   0,   0,   0, 130, 130,
      0,   0, 130, 130, 130,   0,   0,   0,   0, 147, 147, 147, 147, 147, 147, 147,
    147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147,   0,   0,   0,   0,  25,
    147, 147, 147, 147,   0,   0,   0,   0,   0,  69,  69,   0,  69,   0,  69,  69,
     69,  69,  69,   0,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,
     69,  69,  69,  69,   0,  69,   0,  69,  69,  69,  69,  69,  69,  69,   0,   0,
     69,  69,  69,  69,  69,   0,  69,   0,  69,  69,   0,   0,  69,  69,  69,  69,
    148, 148, 148, 148, 148, 148, 148, 148,   0, 148, 148, 148, 148, 148, 148, 148,
    148, 148, 148, 148, 148,   0,   0,   0, 148, 148, 148, 148, 148,   0, 148, 148,
    148, 148, 148, 148, 148,  25,  25,  25,  25, 148, 148,   0,   0,   0,   0,   0,
     95,  95,  95,  95,  95,  95,  95,  95,  39,  39,  39,  39,  39,  39,  39,  39,
     39,  39,  39,  39,  39,  39,   0,  39,   0,   0,   0,   0,   0,  39,   0,   0,
     39,  39,  39,  25,  39,  39,  39,  39,  48,  48,  48,  48,  48,  48,  48,  48,
     38,  38,  38,  38,  38,  38,  38,  38,  38,   0,  38,  38,  38,  38,   0,   0,
     38,  38,  38,  38,  38,  38,  38,   0,  38,  38,  38,   0,   0,  38,  38,  38,
     38,  38,  38,  38,  38,   0,   0,   0,  38,  38,   0,   0,   0,   0,   0,   0,
     23,  23,  23,  23,  23,  23,  23,  23,  23,  23,  23,  23,  23,  23,   0,   0,
     18,  18,  18,  18,  18,  18,  18,  18, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103,   0,   0,   0, 123, 123, 123, 123, 123, 123, 123, 123,
    123, 123, 123,  25,  25,  25, 123, 123, 123,   0,   0,   0,   0,   0,   0,   0,
    137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137,   0, 137, 137,
    137, 137, 137, 137, 137,   0,   0,   0,  50,  50,  50,  50,  50,  50,  50,  50,
     50,  50,  50,  50,  50,  25,  25,   0,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,   0,   0,   0,   0, 138, 138, 138, 138, 138, 138, 138, 138,
    138, 138, 138, 138, 138,   0, 138, 138, 138,   0, 138, 138,   0,   0,   0,   0,
     66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,   0,   0,
     66,  66,   0,   0,   0,   0,   0,   0,  92,  92,  25,  25,  92,  25,  92,  92,
     92,  92,  92,  92,  92,  92,  92,   0,  92,  92,  92,  92,  92,  92,  92,  92,
     92,  92,   0,   0,   0,   0,   0,   0,  92,   0,   0,   0,   0,   0,   0,   0,
     92,  92,  92,   0,   0,   0,   0,   0,  18,  18,  18,  18,  18,  18,   0,   0,
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,   0,
     72,  72,  72,  72,   0,   0,   0,   0,  72,   0,   0,   0,  72,  72,  72,  72,
    139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139,   0,   0,
    139, 139, 139, 139, 139,   0,   0,   0,  99,  99,  99,  99,  99,  99,  99,  99,
     99,  99,  99,  99,   0,   0,   0,   0,  99,  99,   0,   0,   0,   0,   0,   0,
     99,  99,  99,   0,   0,   0,  99,  99,  16,  16,  16,  16,  16,  16,  16,  16,
     16,  16,  16,  16,   0,   0,  16,  16, 140, 140, 140, 140, 140, 140, 140, 140,
    140, 140, 140, 140, 140, 140, 140,   0, 140, 140, 140, 140, 140,   0,   0, 140,
    140, 140,   0,   0,   0,   0,   0,   0, 140, 140, 140, 140, 140, 140,   0,   0,
     55,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   0,   0,   0,   0,   7,   7,   7,   7,   7,   0,   0,   0,
    134, 134, 134, 134, 134, 134, 134, 134,  10,  10,  10,  10,  10,  10,  10,  10,
     10,  10,  10,  10,   0,   0,   0,   0,   0,   0,   0,   0,  10,  10,  10,  10,
     71,  71,  71,  71,  71,  71,  71,  71,   0,   0,   0,  71,  71,  71,  71,  71,
     71,  71,   0,   0,   0,  71,  71,  71, 104, 104, 104, 104, 104, 104, 104, 104,
     29,   0,   0,   0,   0,   0,   0,   0,  39,  39,  39,   0,   0,  39,  39,  39,
     55,  55,  55,  25,  55,  55,  55,  55,  55,  25,  55,  55,  55,  55,  55,  55,
     55,  25,  25,  25,  25,  55,  25,  25,  25,  25,  25,  25,  55,  25,  25,  25,
     55,  55,  25,   0,   0,   0,   0,   0,  70,  70,  70,  70,  70,  70,  43,  43,
     43,  43,  43,  29,  70,  70,  70,  70,  70,  70,  70,  70,  70,  43,  43,  43,
     43,  43,  70,  70,  70,  70,  43,  43,  43,  43,  43,  70,  70,  70,  70,  70,
     29,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  43,
     55,  55,   0,  55,  55,  55,  55,  55,  43,  43,  43,  43,  43,  43,   0,   0,
      0,  43,   0,  43,   0,  43,   0,  43,  43,  43,  43,  43,  43,   0,  43,  43,
     43,  43,  43,  43,   0,   0,  43,  43,  43,  43,  43,  43,   0,  43,  43,  43,
      0,   0,  43,  43,  43,   0,  43,  43,  43,  43,  43,  43,  43,  43,  43,   0,
     25,  25,  25,  25,  55,  55,  25,  25,  25,  25,  25,  25,  25,   0,  25,  25,
     25,  70,   0,   0,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  70,
     25,  25,  25,  25,  25,  25,  25,   0,  70,  70,  70,  70,  70,   0,   0,   0,
     25,  25,  25,  25,  25,  25,  43,  25,  25,  25,  70,  70,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  70,  25,  70,  25,  25,  25,   0,   0,   0,   0,
     25,  25,  25,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,
     25,  25,  25,  25,   0,   0,  25,  25,  25,  25,  25,  25,  25,  25,   0,  25,
     40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,   0,
     26,  26,  26,  26,   0,   0,   0,   0,   0,  26,  26,  26,  26,  26,  26,  26,
    149, 149, 149, 149, 149, 149, 149, 149,   0,   0,   0,   0,   0,   0,   0, 149,
    149,   0,   0,   0,   0,   0,   0,   0,  47,  47,  47,  47,  47,  47,  47,  47,
     47,  47,   0,  47,  47,  47,  47,  47,  47,  47,  47,  47,   0,   0,   0,   0,
     47,  47,  47,  47,  47,  47,   0,   0,  25,  25,  25,  25,   0,   0,   0,   0,
     25,  25,  25,  25,  25,  47,  25,  47,  25,  47,  47,  47,  47,  47,  47,  47,
     47,  47,  55,  55,  55,  55,  48,  48,  47,  47,  47,  47,  25,  25,  25,  25,
      0,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,
     53,  53,  53,  53,  53,  53,  53,   0,   0,  55,  55,  25,  25,  53,  53,  53,
     25,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,
     61,  61,  61,  25,  25,  61,  61,  61,   0,   0,   0,   0,   0,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,   0,  48,  48,  48,  48,  48,  48,  48,
     48,  48,  48,  48,  48,  48,  48,   0,  48,  48,  48,  48,  48,  48,  48,  25,
     61,  61,  61,  61,  61,  61,  61,  25,  47,  47,  47,  47,  47,   0,   0,   0,
    156, 156, 156, 156, 156, 156, 156, 156, 156, 156, 156, 156, 156,   0,   0,   0,
    156, 156, 156, 156, 156, 156, 156,   0,  75,  75,  75,  75,  75,  75,  75,  75,
    152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152, 152,   0,   0,   0,   0,
      8,   8,   8,   8,   8,   8,   8,   8,  25,  25,  70,  70,  70,  70,  70,  70,
     25,  25,  25,  70,  70,  70,  70,  70,   0,   0,  70,  70,  70,  70,  70,  70,
     70,  70,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  70,  70,  70,
    135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135, 135,   0,   0,   0,
     25,  25,   0,   0,   0,   0,   0,   0, 119, 119, 119, 119, 119, 119, 119, 119,
    125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125,   0,   0,
      0,   0,   0,   0,   0,   0, 125, 125, 125, 125,   0,   0,   0,   0,   0,   0,
     63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  25,  63,
    122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 122,  48,  48,  48,  48,  48,   0,   0,   0,
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,   0,  25,
     58,  58,   0,   0,   0,   0,  58,  58,  95,  95,  95,  95,  95,  95,  95,   0,
     22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,   0,
     22,  22,  22,  22,  22,  22,   0,   0,  22,  22,   0,   0,  22,  22,  22,  22,
    141, 141, 141, 141, 141, 141, 141, 141, 141, 141, 141,   0,   0,   0,   0,   0,
      0,   0,   0, 141, 141, 141, 141, 141,  86,  86,  86,  86,  86,  86,  86,  86,
     86,  86,  86,  86,  86,  86,  86,   0,   0,  38,  38,  38,  38,  38,  38,   0,
     70,  70,  70,  25,  70,  70,  70,  70,  70,  70,  70,  70,  70,  43,  70,  70,
     70,  70,  25,  25,   0,   0,   0,   0,  86,  86,  86,  86,  86,  86,   0,   0,
     86,  86,   0,   0,   0,   0,   0,   0,  48,  48,  48,  48,   0,   0,   0,   0,
      0,   0,   0,  48,  48,  48,  48,  48,  47,  47,   0,   0,   0,   0,   0,   0,
     70,  70,  70,  70,  70,  70,  70,   0,   0,   0,   0,   5,   5,   5,   5,   5,
      0,   0,   0,   0,   0,  52,  52,  52,  52,  52,  52,  52,  52,  52,  52,   0,
     52,  52,  52,  52,  52,   0,  52,   0,  52,  52,   0,  52,  52,   0,  52,  52,
      4,   4,   0,   0,   0,   0,   0,   0,   4,   4,   4,   4,   4,   4,  25,  25,
      0,   0,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   0,   0,
     55,  55,  55,  55,  55,  55,  29,  29,  25,  25,  25,   0,  25,  25,  25,  25,
      4,   4,   4,   4,   4,   0,   0,  25,   0,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  61,  61,  61,  61,  61,  61,  61,  61,  25,  25,
      0,   0,  48,  48,  48,  48,  48,  48,   0,   0,  48,  48,  48,   0,   0,   0,
      0,  25,  25,  25,  25,  25,   0,   0,  74,  74,  74,  74,  74,  74,  74,  74,
     74,  74,  74,  74,   0,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,   0,
     74,  74,  74,   0,  74,  74,   0,  74,  74,  74,  74,  74,  74,  74,   0,   0,
     74,  74,  74,   0,   0,   0,   0,   0,  25,  25,  25,   0,   0,   0,   0,  25,
     25,  25,  25,  25,   0,   0,   0,  25,  25,  25,  25,  25,  25,   0,   0,   0,
     43,   0,   0,   0,   0,   0,   0,   0,  25,  25,  25,  25,  25,  55,   0,   0,
     76,  76,  76,  76,  76,  76,  76,  76,  76,  76,  76,  76,  76,   0,   0,   0,
     19,  19,  19,  19,  19,  19,  19,  19,  19,   0,   0,   0,   0,   0,   0,   0,
     55,  25,  25,  25,  25,  25,  25,  25, 106, 106, 106, 106, 106, 106, 106, 106,
    106, 106, 106, 106,   0,   0,   0,   0,   0,   0,   0,   0,   0, 106, 106, 106,
     41,  41,  41,  41,  41,  41,  41,  41,  41,  41,  41,   0,   0,   0,   0,   0,
    108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108,   0,   0,   0,   0,   0,
    151, 151, 151, 151, 151, 151, 151, 151, 151, 151, 151, 151, 151, 151,   0, 151,
    109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109,   0,   0,   0,   0,
    109, 109, 109, 109, 109, 109,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,
    127, 127, 127, 127, 127, 127, 127, 127, 115, 115, 115, 115, 115, 115, 115, 115,
    115, 115, 115, 115, 115, 115,   0,   0, 115, 115,   0,   0,   0,   0,   0,   0,
    114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  20,  20,  20,  20,  20,  20,  20,  20,
     20,  20,  20,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,
     73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,   0,
     73,  73,  73,  73,  73,  73,   0,   0,  28,  28,  28,  28,  28,  28,   0,   0,
     28,   0,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,
     28,  28,  28,  28,  28,  28,   0,  28,  28,   0,   0,   0,  28,   0,   0,  28,
     54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,  54,   0,  54,
    117, 117, 117, 117, 117, 117, 117, 117,  96,  96,  96,  96,  96,  96,  96,  96,
     96,  96,  96,  96,  96,  96,  96,   0,   0,   0,   0,   0,   0,   0,   0,  96,
     51,  51,  51,  51,  51,  51,  51,  51,  51,  51,  51,   0,  51,  51,   0,   0,
      0,   0,   0,  51,  51,  51,  51,  51, 120, 120, 120, 120, 120, 120, 120, 120,
    120, 120, 120, 120,   0,   0,   0, 120,  77,  77,  77,  77,  77,  77,  77,  77,
     77,  77,   0,   0,   0,   0,   0,  77,  89,  89,  89,  89,  89,  89,  89,  89,
     88,  88,  88,  88,  88,  88,  88,  88,   0,   0,   0,   0,  88,  88,  88,  88,
      0,   0,  88,  88,  88,  88,  88,  88,  64,  64,  64,  64,   0,  64,  64,   0,
      0,   0,   0,   0,  64,  64,  64,  64,  64,  64,  64,  64,   0,  64,  64,  64,
      0,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,   0,   0,  64,  64,  64,   0,   0,   0,   0,  64,
     64,   0,   0,   0,   0,   0,   0,   0, 111, 111, 111, 111, 111, 111, 111, 111,
    107, 107, 107, 107, 107, 107, 107, 107,  82,  82,  82,  82,  82,  82,  82,  82,
     82,  82,  82,  82,  82,  82,  82,   0,   0,   0,   0,  82,  82,  82,  82,  82,
      6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   0,   0,
      0,   6,   6,   6,   6,   6,   6,   6,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,   0,   0,  56,  56,  56,  56,  56,  56,  56,  56,
     56,  56,  56,   0,   0,   0,   0,   0, 121, 121, 121, 121, 121, 121, 121, 121,
    121, 121,   0,   0,   0,   0,   0,   0,   0, 121, 121, 121, 121,   0,   0,   0,
      0, 121, 121, 121, 121, 121, 121, 121, 112, 112, 112, 112, 112, 112, 112, 112,
    112,   0,   0,   0,   0,   0,   0,   0, 105, 105, 105, 105, 105, 105, 105, 105,
    105, 105, 105,   0,   0,   0,   0,   0,   0,   0, 105, 105, 105, 105, 105, 105,
     49,  49,  49,  49,  49,  49,  49,  49,  49,  49,   0,   0,   0,   0,   0,   0,
      4,   4,   4,   4,   4,   4,   4,   0, 155, 155, 155, 155, 155, 155, 155, 155,
    155, 155,   0, 155, 155, 155,   0,   0, 155, 155,   0,   0,   0,   0,   0,   0,
    110, 110, 110, 110, 110, 110, 110, 110, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131,   0,   0,   0,   0,   0,   0,  24,  24,  24,  24,  24,  24,  24,  24,
     24,  24,  24,  24,   0,   0,   0,   0,  37,  37,  37,  37,  37,  37,  37,  37,
     37,  37,  37,  37,  37,  37,  37,   0,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,   0,   0,   0,   0,  14,  14,  14,  14,  14,  14,
      0,   0,   0,   0,   0,   0,   0,  14,  59,  59,  59,  59,  59,  59,  59,  59,
     59,  59,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59,   0,   0,
    132, 132, 132, 132, 132, 132, 132, 132, 132,   0,   0,   0,   0,   0,   0,   0,
    132, 132,   0,   0,   0,   0,   0,   0,  21,  21,  21,  21,  21,  21,  21,  21,
     21,  21,  21,  21,  21,   0,  21,  21,  78,  78,  78,  78,  78,  78,  78,  78,
     78,  78,  78,  78,  78,  78,  78,   0, 126, 126, 126, 126, 126, 126, 126, 126,
      0, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,   0,   0,   0,
     67,  67,  67,  67,  67,  67,  67,  67,  67,  67,   0,  67,  67,  67,  67,  67,
     67,  67,  67,  67,  67,  67,  67,   0,  94,  94,  94,  94,  94,  94,  94,   0,
     94,   0,  94,  94,  94,  94,   0,  94,  94,  94,  94,  94,  94,  94,  94,  94,
     94,  94,  94,  94,  94,  94,   0,  94,  94,  94,   0,   0,   0,   0,   0,   0,
     68,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,   0,   0,   0,   0,   0,
     68,  68,   0,   0,   0,   0,   0,   0,  42,  42,  42,  42,   0,  42,  42,  42,
     42,  42,  42,  42,  42,   0,   0,  42,  42,   0,   0,  42,  42,  42,  42,  42,
     42,  42,  42,  42,  42,  42,  42,  42,  42,   0,  42,  42,  42,  42,  42,  42,
     42,   0,  42,  42,   0,  42,  42,  42,  42,  42,   0,  55,  42,  42,  42,  42,
     42,   0,   0,  42,  42,  42,   0,   0,  42,   0,   0,   0,   0,   0,   0,  42,
      0,   0,   0,   0,   0,  42,  42,  42,  42,  42,  42,  42,   0,   0,  42,  42,
     42,  42,  42,  42,  42,   0,   0,   0,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,   0,  98,  98,  98,  98,  98,   0,   0,   0,   0,   0,   0,
    150, 150, 150, 150, 150, 150, 150, 150, 150, 150,   0,   0,   0,   0,   0,   0,
    128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,   0,   0,
     91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,   0,   0,   0,
     91,  91,   0,   0,   0,   0,   0,   0,  92,  92,  92,  92,  92,   0,   0,   0,
    142, 142, 142, 142, 142, 142, 142, 142, 142,   0,   0,   0,   0,   0,   0,   0,
    142, 142,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   0,   0,   2,   2,   2,   2,   2,   2,   2,   0,   0,   0,   0,
     33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,   0,   0,   0,   0,
    154, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0, 154,  32,  32,  32,  32,  32,  32,  32,   0,
      0,  32,   0,   0,  32,  32,  32,  32,  32,  32,  32,  32,   0,  32,  32,   0,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,   0,  32,
     32,   0,   0,  32,  32,  32,  32,  32,  32,  32,   0,   0,   0,   0,   0,   0,
     97,  97,  97,  97,  97,  97,  97,  97,   0,   0,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,   0,   0,   0, 157, 157, 157, 157, 157, 157, 157, 157,
    133, 133, 133, 133, 133, 133, 133, 133, 133, 133, 133,   0,   0,   0,   0,   0,
    118, 118, 118, 118, 118, 118, 118, 118, 118,   0,   0,   0,   0,   0,   0,   0,
     12,  12,  12,  12,  12,  12,  12,  12,  12,   0,  12,  12,  12,  12,  12,  12,
     12,  12,  12,  12,  12,  12,  12,   0,  12,  12,  12,  12,  12,  12,   0,   0,
     12,  12,  12,  12,  12,   0,   0,   0,  83,  83,  83,  83,  83,  83,  83,  83,
      0,   0,  83,  83,  83,  83,  83,  83,   0,  83,  83,  83,  83,  83,  83,  83,
     83,  83,  83,  83,  83,  83,  83,   0,  84,  84,  84,  84,  84,  84,  84,   0,
     84,  84,   0,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,
      0,   0,  84,   0,  84,  84,   0,  84,  84,  84,   0,   0,   0,   0,   0,   0,
     45,  45,  45,  45,  45,  45,   0,  45,  45,   0,  45,  45,  45,  45,  45,  45,
     45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,  45,   0,
     45,  45,   0,  45,  45,  45,  45,  45,  45,   0,   0,   0,   0,   0,   0,   0,
     45,  45,   0,   0,   0,   0,   0,   0,  79,  79,  79,  79,  79,  79,  79,  79,
     79,   0,   0,   0,   0,   0,   0,   0,  75,   0,   0,   0,   0,   0,   0,   0,
    143, 143,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 143,
     27,  27,  27,  27,  27,  27,  27,  27,  27,  27,   0,   0,   0,   0,   0,   0,
     27,  27,  27,  27,  27,  27,  27,   0,  27,  27,  27,  27,  27,   0,   0,   0,
     27,  27,  27,  27,   0,   0,   0,   0,  35,  35,  35,  35,  35,  35,  35,  35,
     35,  35,  35,  35,  35,  35,  35,   0,  35,   0,   0,   0,   0,   0,   0,   0,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   0,
      8,   0,   0,   0,   0,   0,   0,   0,  93,  93,  93,  93,  93,  93,  93,  93,
     93,  93,  93,  93,  93,  93,  93,   0,  93,  93,   0,   0,   0,   0,  93,  93,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,
    116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116,   0,   0,
    116, 116,   0, 116, 116, 116, 116, 116,   0,   0,   0,   0,   0, 116, 116, 116,
     85,  85,  85,  85,  85,  85,  85,  85,  85,  85,  85,   0,   0,   0,   0,   0,
     90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,   0,   0,   0,   0,  90,
      0,   0,   0,   0,   0,   0,   0,  90, 144, 101,  25,  25,  65,   0,   0,   0,
    144, 144, 144, 144, 144, 144, 144, 144,  65,  65,  65,  65,  65,  65,  65,  65,
     65,  65,  65,  65,  65,  65,   0,   0, 144,   0,   0,   0,   0,   0,   0,   0,
     61,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  61,  61,  61,  61, 101, 101, 101, 101, 101, 101, 101, 101,
    101, 101, 101, 101,   0,   0,   0,   0,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,   0,   0,   0,   0,   0,  34,  34,  34,  34,  34,   0,   0,   0,
     34,   0,   0,   0,   0,   0,   0,   0,  34,  34,   0,   0,  34,  34,  34,  34,
     25,  25,  25,  25,  25,  25,   0,   0,  25,  25,  25,  25,  25,  25,  25,  55,
     55,  55,  25,  25,  25,  25,  25,  25,  25,  25,  25,  55,  55,  55,  55,  55,
     55,  55,  55,  25,  25,  55,  55,  55,  55,  55,  55,  55,  25,  25,  25,  25,
     25,  25,  55,  55,  55,  55,  25,  25,  25,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  25,   0,   0,  25,  25,   0,   0,  25,  25,  25,  25,   0,  25,  25,
     25,  25,   0,  25,   0,  25,  25,  25,  25,  25,  25,  25,   0,  25,  25,  25,
     25,  25,  25,   0,   0,  25,  25,  25,  25,  25,   0,  25,  25,  25,  25,   0,
     25,  25,  25,  25,  25,   0,  25,   0,   0,   0,  25,  25,  25,  25,  25,  25,
     25,   0,  25,  25,  25,  25,  25,  25, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129,   0,   0,   0,   0,   0,   0,   0, 129, 129, 129, 129, 129,
      0, 129, 129, 129, 129, 129, 129, 129,  40,   0,   0,  40,  40,  40,  40,  40,
     40,  40,   0,  40,  40,   0,  40,  40,  40,  40,  40,   0,   0,   0,   0,   0,
    102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102,   0,   0,   0,
    102, 102, 102, 102, 102, 102,   0,   0, 102, 102,   0,   0,   0,   0, 102, 102,
    153, 153, 153, 153, 153, 153, 153, 153, 153, 153,   0,   0,   0,   0,   0, 153,
     87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87,   0,   0,  87,
     87,  87,  87,  87,  87,  87,  87,   0,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,   1,   1,
      4,   4,   4,   4,   0,   4,   4,   4,   0,   4,   4,   0,   4,   0,   0,   4,
      0,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   0,   4,   4,   4,   4,
      0,   4,   0,   4,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   4,
      0,   4,   0,   4,   0,   4,   4,   4,   0,   4,   0,   4,   0,   4,   0,   4,
      0,   4,   4,   4,   4,   0,   4,   0,   4,   4,   0,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   0,   0,   0,   0,   0,   4,   4,   4,   0,   4,   4,   4,
      0,   0,   0,   0,   0,   0,  25,  25,  53,  25,  25,   0,   0,   0,   0,   0,
     47,   0,   0,   0,   0,   0,   0,   0,  47,  47,  47,   0,   0,   0,   0,   0,
      0,  25,   0,   0,   0,   0,   0,   0
};

static UINT16 script_table_2[3808] = {
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
     44,  44,  44,  44,  44,  45,  44,  46,  47,  47,  47,  48,  37,  49,  26,  26,
     26,  26,  26,  26,  31,  31,  50,  31,  31,  26,  51,  31,  52,  31,  31,  31,
     53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  54,  53,  55,  53,  53,  53,
     56,  57,  58,  59,  59,  60,  61,  62,  57,  63,  64,  65,  66,  59,  59,  67,
     68,  69,  70,  71,  71,  72,  73,  74,  69,  75,  76,  77,  78,  71,  79,  26,
     80,  81,  82,  83,  83,  84,  85,  86,  81,  87,  88,  26,  89,  83,  90,  91,
     92,  93,  94,  95,  95,  96,  97,  98,  93,  99, 100, 101, 102,  95,  95,  26,
    103, 104, 105, 106, 107, 104, 108, 109, 104, 105, 110,  26, 111, 108, 108, 112,
    113, 114, 115, 113, 113, 115, 113, 116, 114, 117, 118, 119, 120, 113, 121, 113,
    122, 123, 124, 122, 122, 124, 125, 126, 123, 127, 128, 129, 130, 122, 131,  26,
    132, 133, 134, 132, 132, 132, 132, 132, 133, 134, 135, 132, 136, 132, 132, 132,
    137, 138, 139, 140, 138, 138, 141, 142, 139, 143, 144, 138, 145, 138, 146,  26,
    147, 148, 148, 148, 148, 148, 148, 149, 148, 148, 148, 150,  26,  26,  26,  26,
    151, 152, 153, 153, 154, 153, 153, 155, 156, 155, 153, 157,  26,  26,  26,  26,
    158, 158, 158, 158, 158, 158, 158, 158, 158, 159, 158, 158, 158, 160, 159, 158,
    158, 158, 158, 159, 158, 158, 158, 161, 158, 161, 162, 163,  26,  26,  26,  26,
    164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164,
    164, 164, 164, 164, 165, 165, 165, 165, 166, 167, 165, 165, 165, 165, 165, 168,
    169, 169, 169, 169, 169, 169, 169, 169, 169, 169, 169, 169, 169, 169, 169, 169,
    170, 170, 170, 170, 170, 170, 170, 170, 170, 171, 172, 171, 170, 170, 170, 170,
    170, 171, 170, 170, 170, 170, 171, 172, 171, 170, 172, 170, 170, 170, 170, 170,
    170, 170, 171, 170, 170, 170, 170, 170, 170, 170, 170, 173, 170, 170, 170, 174,
    170, 170, 170, 175, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 177, 177,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
    179, 179, 179, 180, 181, 181, 181, 181, 181, 181, 181, 181, 181, 182, 181, 183,
    184, 185, 186,  26, 187, 187, 188,  26, 189, 189, 190,  26, 191, 192, 193,  26,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 195, 194, 196, 194, 196,
    197, 198, 199, 200, 199, 199, 199, 199, 199, 199, 199, 199, 199, 199, 199, 201,
    199, 199, 199, 199, 199, 202, 178, 178, 178, 178, 178, 178, 178, 178, 203,  26,
    204, 204, 204, 205, 204, 206, 204, 206, 207, 204, 208, 208, 208, 209, 210,  26,
    211, 211, 211, 211, 211, 212, 211, 211, 211, 213, 211, 214, 194, 194, 194, 194,
    215, 215, 215, 216, 217, 217, 217, 217, 217, 217, 217, 218, 217, 217, 217, 219,
    217, 220, 217, 220, 217, 221,   9,   9, 222,  26,  26,  26,  26,  26,  26,  26,
    223, 223, 223, 223, 223, 223, 223, 223, 223, 224, 223, 223, 223, 223, 223, 225,
    226, 226, 226, 226, 226, 226, 226, 226, 227, 227, 227, 227, 227, 227, 228, 229,
    230, 230, 230, 230, 230, 230, 230, 231, 230, 232, 233, 233, 233, 233, 233, 233,
     18, 234, 165, 165, 165, 165, 165, 235, 226,  26, 236,   9, 237, 238, 239, 240,
      2,   2,   2,   2, 241, 242,   2,   2,   2,   2,   2, 243, 244, 245,   2, 246,
      2,   2,   2,   2,   2,   2,   2, 247,   9,   9,   9,   9,   9,   9,   9, 248,
     14,  14, 249, 249,  14,  14,  14,  14, 249, 249,  14, 250,  14,  14,  14, 249,
     14,  14,  14,  14,  14,  14, 251,  14, 251,  14, 252, 253,  14,  14, 254, 255,
      0, 256,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 257,   0, 258, 259,
      0, 260,   2, 261,   0,   0,   0,   0,  26,  26,   9,   9,   9,   9, 222,  26,
      0,   0,   0,   0, 262, 263,   4,   0,   0, 264,   0,   0,   2,   2,   2,   2,
      2, 265,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 260,  26,  26,  26,   0, 266,  26,  26,   0,   0,   0,   0,
    267, 267, 267, 267, 267, 267, 267, 267, 267, 267, 267, 267, 267, 267, 267, 267,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 268,   0,
      0,   0, 269,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    270, 270, 270, 270, 270, 271, 270, 270, 270, 270, 270, 271,   2,   2,   2,   2,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17, 272, 273,
    165, 165, 165, 165, 166, 167, 274, 274, 274, 274, 274, 274, 274, 275, 276, 275,
    170, 170, 172,  26, 172, 172, 172, 172, 172, 172, 172, 172,  18,  18,  18,  18,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 266,  26,  26,  26,  26,  26,
    277, 277, 277, 278, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 279,  26,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 280,  26,  26,  26,   0, 281,
    282,   0,   0,   0, 283, 284,   0, 285, 286, 287, 287, 287, 287, 287, 287, 287,
    287, 287, 288, 289, 290, 291, 291, 291, 291, 291, 291, 291, 291, 291, 291, 292,
    293, 294, 294, 294, 294, 294, 295, 169, 169, 169, 169, 169, 169, 169, 169, 169,
    169, 296,   0,   0, 294, 294, 294, 294,   0,   0,   0,   0, 281,  26, 291, 291,
    169, 169, 169, 296,   0,   0,   0,   0,   0,   0,   0,   0, 169, 169, 169, 297,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 291, 291, 291, 291, 291, 298,
    291, 291, 291, 291, 291, 291, 291, 291, 291, 291, 291,   0,   0,   0,   0,   0,
    277, 277, 277, 277, 277, 277, 277, 277,   0,   0,   0,   0,   0,   0,   0,   0,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 299,
    300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300,
    300, 301, 300, 300, 300, 300, 300, 300, 302,  26, 303, 303, 303, 303, 303, 303,
    304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304, 304,
    304, 304, 304, 304, 304, 305,  26,  26,  18,  18,  18,  18,  18,  18,  18,  18,
     18,  18,  18,  18, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306,  26,
      0,   0,   0,   0, 307,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2, 308,   2,   2,   2,   2,   2,   2, 309, 310,  26,  26,  26,  26, 311,   2,
    312, 312, 312, 312, 312, 313,   0, 314, 315, 315, 315, 315, 315, 315, 315,  26,
    316, 316, 316, 316, 316, 316, 316, 316, 317, 318, 316, 319,  53,  53,  53,  53,
    320, 320, 320, 320, 320, 321, 322, 322, 322, 322, 323, 324, 169, 169, 169, 325,
    326, 326, 326, 326, 326, 326, 326, 326, 326, 327, 326, 328, 164, 164, 164, 329,
    330, 330, 330, 330, 330, 330, 331,  26, 330, 332, 330, 333, 164, 164, 164, 164,
    334, 334, 334, 334, 334, 334, 334, 334, 335,  26,  26, 336, 337, 337, 338,  26,
    339, 339, 339,  26, 172, 172,   2,   2,   2,   2,   2, 340, 341, 342, 176, 176,
    176, 176, 176, 176, 176, 176, 176, 176, 337, 337, 337, 337, 337, 343, 337, 344,
    169, 169, 169, 169, 345,  26, 169, 169, 296, 346, 169, 169, 169, 169, 169, 345,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 280, 277, 277,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 347,  26,  26,  26,  26,
    348,  26, 349, 350,  25,  25, 351, 352, 353,  25,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31, 354,  26,  51,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31, 355,  26,  26,  31,  31,  31,  31,  31,  31,
     31,  31, 356,  31,  31,  31,  31,  31,  31,  26,  26,  26,  26,  26,  31, 357,
      9,   9,   0, 314,   9, 358,   0,   0,   0,   0, 359,   0, 260, 281,  50,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31, 360,
    361,   0,   0,   0,   1,   2,   2,   3,   1,   2,   2,   3, 362, 291, 290, 291,
    291, 291, 291, 363, 169, 169, 169, 296, 364, 364, 364, 365, 260, 260,  26, 366,
    367, 368, 367, 367, 369, 367, 367, 370, 367, 371, 367, 371,  26,  26,  26,  26,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 372,
    373,   0,   0,   0,   0,   0, 374,   0,  14,  14,  14,  14,  14,  14,  14,  14,
     14, 255,   0, 375, 376,  26,  26,  26,  26,  26,   0,   0,   0,   0,   0, 377,
    378, 378, 378, 379, 380, 380, 380, 380, 380, 380, 381,  26, 382,   0,   0, 281,
    383, 383, 383, 383, 384, 385, 386, 386, 386, 387, 388, 388, 388, 388, 388, 389,
    390, 390, 390, 391, 392, 392, 392, 392, 393, 392, 394,  26,  26,  26,  26,  26,
    395, 395, 395, 395, 395, 395, 395, 395, 395, 395, 396, 396, 396, 396, 396, 396,
    397, 397, 397, 398, 397, 399, 400, 400, 400, 400, 401, 400, 400, 400, 400, 401,
    402, 402, 402, 402, 402,  26, 403, 403, 403, 403, 403, 403, 404, 405,  26,  26,
    406, 406, 406, 406, 406, 406, 406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
    406, 406, 406, 406, 406, 406, 407,  26, 406, 406, 408,  26, 406,  26,  26,  26,
    409, 410, 411, 411, 411, 411, 412, 413, 414, 414, 415, 414, 416, 416, 416, 416,
    417, 417, 417, 418, 419, 417,  26,  26,  26,  26,  26,  26, 420, 420, 421, 422,
    423, 423, 423, 424, 425, 425, 425, 426,  26,  26,  26,  26,  26,  26,  26,  26,
    427, 427, 427, 427, 428, 428, 428, 429, 428, 428, 430, 428, 428, 428, 428, 428,
    431, 432, 433, 434, 435, 435, 436, 437, 435, 438, 435, 438, 439, 439, 439, 439,
    440, 440, 440, 440,  26,  26,  26,  26, 441, 441, 441, 441, 442, 443, 442,  26,
    444, 444, 444, 444, 444, 444, 445, 446, 447, 447, 448, 447, 449, 449, 450, 449,
    451, 451, 452, 453,  26, 454,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    455, 455, 455, 455, 455, 455, 455, 455, 455, 456,  26,  26,  26,  26,  26,  26,
    457, 457, 457, 457, 457, 457, 458,  26, 457, 457, 457, 457, 457, 457, 458, 459,
    460, 460, 460, 460, 460,  26, 460, 461,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  31,  31,  31, 462,
    463, 463, 463, 463, 463, 464, 465,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    466, 466, 466, 466, 466,  26, 467, 467, 467, 467, 467, 468,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26, 469, 469, 469, 470,  26,  26, 471, 471, 472,  26,
    473, 473, 473, 473, 473, 473, 473, 473, 473, 474, 475, 473, 473, 473,  26, 476,
    477, 477, 477, 477, 477, 477, 477, 477, 478, 479, 480, 480, 480, 481, 480, 482,
    483, 483, 483, 483, 483, 483, 484, 483, 483,  26, 485, 485, 485, 485, 486,  26,
    487, 487, 487, 487, 487, 487, 487, 487, 487, 487, 487, 487, 488, 138, 489,  26,
    490, 490, 491, 490, 490, 490, 490, 492,  26,  26,  26,  26,  26,  26,  26,  26,
    493, 494, 495, 496, 495, 497, 498, 498, 498, 498, 498, 498, 498, 499, 498, 500,
    501, 502, 503, 504, 504, 505, 506, 507, 502, 508, 509, 510, 511, 512, 512,  26,
    513, 513, 513, 513, 513, 513, 513, 513, 513, 513, 513, 514, 515,  26,  26,  26,
    516, 516, 516, 516, 516, 516, 516, 516, 516,  26, 516, 517,  26,  26,  26,  26,
    518, 518, 518, 518, 518, 518, 519, 518, 518, 518, 518, 519,  26,  26,  26,  26,
    520, 520, 520, 520, 520, 520, 520, 520, 521,  26, 520, 522, 199, 523,  26,  26,
    524, 524, 524, 524, 524, 524, 524, 525, 524, 526,  26,  26,  26,  26,  26,  26,
    527, 527, 527, 528, 527, 529, 527, 527,  26,  26,  26,  26,  26,  26,  26,  26,
    530, 530, 530, 530, 530, 530, 530, 531,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26, 532, 532, 532, 532, 532, 532, 532, 532, 532, 532, 533, 534,
    535, 536, 537, 538, 538, 538, 539, 540, 535,  26, 538, 541,  26,  26,  26,  26,
     26,  26,  26,  26, 542, 543, 542, 542, 542, 542, 542, 543, 544,  26,  26,  26,
    545, 545, 545, 545, 545, 545, 545, 545, 545,  26, 546, 546, 546, 546, 546, 546,
    546, 546, 546, 546, 547,  26,  26,  26, 548, 548, 548, 548, 548, 548, 548, 549,
    550, 551, 550, 550, 550, 550, 552, 550, 553,  26, 550, 550, 550, 554, 555, 555,
    555, 555, 556, 555, 555, 557, 558,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    559, 560, 561, 561, 561, 561, 559, 562, 561,  26, 561, 563, 564, 565, 566, 566,
    566, 567, 568, 569, 566, 570,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26, 571, 571, 571, 572,
     26,  26,  26,  26,  26,  26, 573,  26, 108, 108, 108, 108, 108, 108, 574, 575,
    576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576,
    576, 576, 576, 577,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 578, 579,  26,
    576, 576, 576, 576, 576, 576, 576, 576, 580,  26,  26,  26,  26,  26,  26,  26,
    581, 581, 581, 581, 581, 581, 581, 581, 581, 581, 581, 581, 581, 581, 581, 581,
    581, 581, 581, 581, 581, 582, 581, 583,  26,  26,  26,  26,  26,  26,  26,  26,
    584, 584, 584, 584, 584, 584, 584, 584, 584, 584, 584, 584, 584, 584, 584, 584,
    584, 584, 584, 584, 584, 584, 584, 584, 585,  26,  26,  26,  26,  26,  26,  26,
    306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306, 306,
    306, 306, 306, 306, 306, 306, 306, 586, 587, 587, 587, 588, 587, 589,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26, 590, 590, 590, 591, 591,  26,
    592, 592, 592, 592, 592, 592, 592, 592, 593,  26, 592, 594, 594, 592, 592, 595,
    592, 592,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26, 596, 596, 596, 596, 596, 596, 596, 596,
    596, 596, 596, 597,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    598, 598, 598, 598, 598, 598, 598, 598, 598, 599, 598, 598, 598, 598, 598, 598,
    598, 600, 598, 598,  26,  26,  26,  26,  26,  26,  26,  26, 601,  26, 347,  26,
    602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602,
    602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602, 602,  26,
    603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603,
    603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 604,  26,  26,  26,  26,  26,
    602, 605,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    606, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287,
    287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287,
    287, 287, 287, 288,  26,  26,  26,  26,  26,  26, 607,  26, 608,  26, 609, 609,
    609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609,
    609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 609, 610,
    611, 611, 611, 611, 611, 611, 611, 611, 611, 611, 611, 611, 611, 612, 611, 613,
    611, 614, 611, 615, 281,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 616,  26,
      0,   0,   0,   0, 260, 361,   0,   0,   0,   0,   0,   0, 617, 618,   0, 619,
    620, 621,   0,   0,   0, 622,   0,   0,   0,   0,   0,   0,   0, 623,  26,  26,
     14,  14,  14,  14,  14,  14,  14,  14, 249,  26,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,   0,   0, 281,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 260,  26,   0,   0,   0, 623,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 257,   0,   0,   0,   0,   0,
      0,   0,   0, 257, 624, 625,   0, 626, 627,   0,   0,   0,   0,   0,   0,   0,
    269, 628, 257, 257,   0,   0,   0, 629, 630, 631, 632,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 616,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 268,   0,   0,   0,   0,   0,   0,
    633, 633, 633, 633, 633, 633, 633, 633, 633, 633, 633, 633, 633, 633, 633, 633,
    633, 634,  26, 635, 636, 633,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    271, 270, 270, 637, 638, 639,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    640, 640, 640, 640, 640, 641, 640, 642, 640, 643,  26,  26,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26, 644, 644, 644, 644, 644, 644, 644, 645,
    646, 646, 646, 646, 646, 646, 646, 646, 646, 646, 646, 646, 646, 646, 646, 646,
    646, 646, 646, 646, 646, 646, 646, 646, 647, 646, 648,  26,  26,  26,  26,  26,
    649, 649, 649, 649, 649, 649, 649, 649, 649, 650, 649, 651,  26,  26,  26,  26,
     26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26, 361,   0,
      0,   0,   0,   0,   0,   0, 375,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    361,   0,   0,   0,   0,   0,   0, 616,  26,  26,  26,  26,  26,  26,  26,  26,
    652,  31,  31,  31, 653, 654, 655, 656, 657, 658, 653, 659, 653, 655, 655, 660,
     31, 661,  31, 662, 663, 661,  31, 662,  26,  26,  26,  26,  26,  26, 354,  26,
      0,   0,   0,   0,   0, 281,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 281,  26,   0, 260, 361,   0, 361,   0, 361,   0,   0,   0, 616,  26,
      0,   0,   0,   0,   0, 616,  26,  26,  26,  26,  26,  26, 664,   0,   0,   0,
    665,  26,   0,   0,   0,   0,   0, 281,   0, 623, 314,  26, 616,  26,  26,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26,   0, 375,   0, 375,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 281,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 623,   0, 281,  26,  26,
      0, 281,   0,   0,   0,   0,   0,   0,   0,  26,   0, 314,   0,   0,   0,   0,
      0,  26,   0,   0,   0, 616, 314,  26,  26,  26,  26,  26,  26,  26,  26,  26,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 632,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 627,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 281,  26,   0, 616, 375, 266,
    260,  26,   0,   0,   0, 623, 260,  26, 266,  26, 260,  26,  26,  26,  26,  26,
      0,   0, 359,   0,   0,   0,   0,   0,   0, 266,  26,  26,  26,  26,   0, 314,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 280,  26,  26,  26,  26,
    277, 277, 277, 277, 277, 277, 299,  26, 277, 277, 277, 277, 277, 277, 277, 277,
    277, 277, 277, 280, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277,
    277, 277, 277, 277, 347,  26, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 277, 666,  26,  26,  26,
    277, 277, 277, 280,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,
    277, 277, 277, 277, 277, 277, 277, 277, 277, 667,  26,  26,  26,  26,  26,  26,
    668,  26,  26,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  26,  26
};

static UINT8 script_table_3[688] = {
      0,   1,   2,   2,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,
     14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  32,  33,  34,  35,  36,  37,  37,  37,  37,  37,  38,  39,  40,
     41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,   2,   2,  53,  54,
     55,  56,  57,  58,  59,  59,  59,  59,  60,  59,  59,  59,  59,  59,  59,  59,
     61,  61,  59,  59,  59,  59,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,
     72,  73,  74,  75,  76,  77,  78,  59,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  79,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  80,
     81,  81,  81,  81,  81,  81,  81,  81,  81,  82,  83,  83,  84,  85,  86,  87,
     88,  89,  90,  91,  92,  93,  94,  95,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
     32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  96,
     97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  70,  70,  98,  99, 100, 101, 102, 102, 103, 104, 105, 106, 107, 108,
    109, 110, 111, 112,  97, 113, 114, 115, 116, 117, 118,  97, 119, 119, 120,  97,
    121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131,  97, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142,  97, 143, 144,  97, 145, 146, 147, 148,  97,
    149, 150, 151, 152, 153, 154,  97,  97, 155, 156, 157, 158,  97, 159,  97, 160,
    161, 161, 161, 161, 161, 161, 161, 162, 163, 161, 164,  97,  97,  97,  97,  97,
    165, 165, 165, 165, 165, 165, 165, 165, 166,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97,  97, 167, 167, 167, 167, 168,  97,  97,  97,
    169, 169, 169, 169, 170, 171, 172, 173,  97,  97,  97,  97, 174, 175, 176, 177,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 179,
    178, 178, 178, 178, 178, 178, 180, 180, 180, 181, 182,  97,  97,  97,  97,  97,
    183, 184, 185, 186, 186, 187,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97,  97, 188, 189,  97,  97,  97,  97,  97,  97,
     59, 190, 191, 192, 193, 194, 195,  97, 196, 197, 198,  59,  59, 199,  59, 200,
    201, 201, 201, 201, 201, 202,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
    203,  97, 204,  97,  97, 205,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
    206, 207, 208,  97,  97,  97,  97,  97, 209, 210, 211,  97, 212, 213,  97,  97,
    214, 215,  59, 216, 217,  97,  59,  59,  59,  59,  59,  59,  59, 218, 219, 220,
    221, 222, 223, 224, 225, 226,  59, 227,  97,  97,  97,  97,  97,  97,  97,  97,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70, 228,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70, 229,  70,
    230,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,
     70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70,  70, 231,  70,  70,
     70,  70,  70,  70,  70,  70,  70, 232,  97,  97,  97,  97,  97,  97,  97,  97,
     70,  70,  70,  70, 233,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,
     70,  70,  70,  70,  70,  70, 234,  97,  97,  97,  97,  97,  97,  97,  97,  97,
    235,  97, 236, 237,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  97
};

static UINT8 script_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   8,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   9,  10,  11,  12,  12,  12,  12,  13,  14,  14,  14,  14,  15,
     16,  17,  18,  19,  20,  14,  21,  14,  22,  14,  14,  14,  14,  23,  24,  24,
     25,  26,  14,  14,  14,  14,  27,  28,  14,  14,  29,  30,  31,  32,  33,  34,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  35,   7,  36,  37,   7,  38,   7,   7,   7,  39,  14,  40,
      7,   7,  41,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     42,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,
     14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14
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

static UINT8 sentence_break_table_1[920] = {
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
      5,   5,   0,   0,  10,  10,   0,   0,   4,   4,   4,   0,   5,   0,  13,  13,
      9,   9,   9,   4,   8,   8,   0,   8,   8,   0,   9,   9,   4,   9,   9,   9,
     13,   9,   4,   4,   4,   5,   0,   4,   4,   9,   9,   4,   4,   0,   4,   4,
      4,   4,   9,   9,   8,   8,   9,   9,   9,   0,   0,   9,  13,  13,  13,   0,
      0,   0,   0,   5,   9,   4,   9,   9,   0,   9,   9,   9,   9,   9,   4,   4,
      4,   9,   0,   0,  10,  13,   9,   0,   0,   4,   0,   0,   4,   4,   9,   4,
      9,   4,   4,   4,   4,   4,   0,   0,   0,  13,   0,   0,   0,  13,  13,   0,
      9,   0,   9,   9,   0,   0,   0,   4,   4,   4,   5,   4,   4,   9,   4,   4,
     13,  13,   8,   8,   4,   0,   0,   4,   4,   4,   9,   0,   9,   9,   0,   9,
      0,   0,   8,   8,   9,   0,   4,   0,   0,   9,   9,   0,   9,   4,   0,   0,
      9,   0,   0,   0,   0,   9,   4,   4,   0,   0,   4,   9,   0,   0,   4,   4,
      0,   0,   9,   0,   0,   0,   4,   0,   4,   0,   4,   0,   8,   8,   0,   0,
      0,   9,   0,   9,   0,   4,   0,   4,   0,   4,   2,   2,   2,   2,   4,   4,
      4,   0,   0,   0,   4,   4,   4,   9,   8,   8,  13,  13,   8,   8,   4,   4,
      0,  14,   0,   0,   0,   0,  13,   0,  13,   0,   0,   0,  14,  14,   0,   0,
      9,   0,  13,   9,  12,   9,   9,   9,   9,   9,   9,   2,   2,   0,   0,   0,
      4,  13,  13,   0,   9,   0,   4,   4,   0,   0,  10,  13,  10,  13,   0,   4,
      4,   4,   5,   0,   9,   4,   4,   9,   9,   4,   9,   0,  13,  13,  13,  13,
      0,   0,  13,  13,   9,   9,  13,  13,   0,  14,   0,  14,   7,   0,   7,   7,
     14,   0,   7,   0,  14,   0,   0,   0,  12,  12,  12,  12,  12,  12,  12,   5,
      4,   4,   5,   5,   0,   0,   0,  10,  10,   0,   0,   0,   2,   2,   2,   2,
      1,   0,   0,   0,  11,  11,   5,   5,   5,   5,   5,  12,   0,   2,   2,   0,
     13,  13,   0,   0,   0,   2,   2,  13,   0,   0,   0,  12,   5,   0,   5,   5,
      0,   2,   2,   7,   0,   0,   0,  14,   0,   0,   7,  14,  14,  14,   7,   7,
     14,   0,  14,   0,  14,  14,   0,   7,   9,   7,   0,   0,   0,  14,   7,   7,
      0,   0,   7,   0,   9,   9,   9,  14,   0,   0,  14,  14,   0,   0,   2,   2,
     14,   7,   7,  14,   7,  14,   7,   4,   7,   7,   0,   7,   0,   0,  13,   9,
      0,   0,   2,   0,  12,  10,  13,   0,   0,   2,   2,   2,   9,   9,   0,  13,
      9,   0,  13,  13,  14,   7,   9,   4,   4,   4,   0,   9,   7,   7,   4,   4,
      4,   4,   0,  13,   0,   0,  14,   7,   9,   0,   0,  14,   7,  14,   7,   9,
      7,  14,   7,   0,   0,  14,   7,   9,   7,   7,   7,   9,   9,   9,   4,   9,
      0,   9,   9,   4,   0,  13,  13,  13,   0,   0,   9,   4,  13,  13,   9,   9,
      9,   4,   4,   0,   7,   9,   0,   0,   4,   4,   4,  13,   0,   0,   0,   7,
      0,   9,   4,   9,   9,   9,   2,   2,  10,  10,   0,  10,   0,  10,  10,   0,
      2,   0,   0,   2,   0,  10,  13,  13,  10,   2,   2,   2,   2,   2,   2,   0,
      9,   0,   0,   5,   0,   2,   0,   2,   2,  13,   2,   2,  10,   0,   9,   9,
      0,   5,   5,   5,   9,   9,   0,   4,   0,   5,  13,  13,   4,   0,   8,   8,
      9,  13,  13,   0,   4,  13,   4,   4,   8,   8,   9,   0,  13,  13,   0,  13,
     13,   0,   4,   0,   9,  13,   0,   0,   9,   9,   9,  13,   4,   0,  13,  13,
     13,   0,  13,   0,   4,   9,   0,   9,  13,   9,   0,   0,   5,   0,   0,   0,
      4,  13,   0,   0,   0,   4,   4,  13,   4,   4,   4,   5,   5,   5,   5,   4,
      0,  14,  14,   0,  14,   0,   7,   7
};

static UINT8 sentence_break_table_2[6688] = {
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
     36,  36,  36,  36,  36,  36,  88,   0,  36,  36,  61,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  36,  92,  36,  36,
     36,  36,   0,   0,  93,  44,  44,  44,  94,  44,  44,  44,  44,  44,  44,  44,
     44,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  83,  95,
     44,  44,  44,  44,  88,  44,  36,  36,  83,  96,   7,   7,  82,  36,  36,  36,
     88,  82,  36,  78,  78,  36,  36,  36,  36,  36,  92,  36,  43,  40,  41,  95,
     44,  97,  97,  98,   0,  93,   0,  99,  83, 100,   7,   7,  41,   0,   0, 101,
     58,  82,  61,  62,  78,  36,  36,  36,  36,  36,  92,  36,  92, 102,  41,  75,
     66,  93,  97,  89,  86,   0,  82,  43,   0, 100,   7,   7,  76, 103,   0,   0,
     58,  82,  36,  99,  99,  36,  36,  36,  36,  36,  92,  36,  92,  82,  41,  95,
     44,  59,  59,  89, 104,   0,   0,   0,  83, 100,   7,   7,   0,   0, 105,  44,
     58,  82,  36,  78,  78,  36,  36,  36,  36,  36,  92,  36,  92,  82,  41,  95,
     44,  97,  97,  89,   0,  58,   0,  99,  83, 100,   7,   7,  55,   0,   0,   0,
    106,  82,  61,  40,  92,  41, 102,  92,  62, 104,  61,  40,  36,  36,  41, 107,
     66, 107,  75,  89, 104,  93,   0,   0,   0, 100,   7,   7,   0,   0,   0,   0,
     44,  71,  36,  92,  92,  36,  36,  36,  36,  36,  92,  36,  36,  36,  41, 105,
     44,  75,  75,  89,   0,  60,  61,   0,  83, 100,   7,   7,   0,   0,   0,   0,
     88,  82,  36,  92,  92,  36,  36,  36,  36,  36,  92,  36,  36,  82,  41,  95,
     44,  75,  75,  89,   0,  60,   0, 108,  83, 100,   7,   7, 102,   0,   0,   0,
     44,  36,  36,  92,  92,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  95,
     44,  75,  75,  98,   0,  68,   0,  62,  83, 100,   7,   7,   0,   0,  40,  36,
     58,  82,  36,  36,  36,  61,  40,  36,  36,  36,  36,  36,  99,  36,  36,  55,
     36,  61, 109,  93,  44, 110,  44,  44,   0, 100,   7,   7, 107,   0,   0,   0,
     82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  81,  44,  66,   0,
     36,  68,  44,  66,   7,   7, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    102,  92,  61,  36,  36,  36,  36,  36,  36, 112,  36,  36,  81,  44,  44,  84,
     36,  43,  44,  89,   7,   7, 111,  36,   0,   0,   0,   0,   0,   0,   0,   0,
    104,   0,   0,   0,   0,   0,  89,   0,   7,   7, 111,   0,   0, 113, 114, 115,
     36,  36,  82,  36,  36,  36,  36,  36,  36,  36,  36, 104,  58,  44,  44,  44,
     44,  75,  36,  88,  44,  44,  58,  44,  44,  44,  44,  44,  44,  44,  44, 116,
      0, 109,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44,  44, 117,
      7,   7, 118,   0,  36,  83,  76,  83,  95,  74,  44,  76,  88,  71,  36,  36,
     83,  44,  44,  87,   7,   7, 119,  89,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  50,   0, 120,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  92,  41,  36,  61,  92,  41,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  92,  41,  36,  36,  36,  36,  36,  36,  36,  36,  92,  41,  36,  61,
     92,  41,  36,  36,  36,  61,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  92,  41,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  61,  58, 121,   9, 122,   0,   0,   0,   0,   0,
     36,  36,  36,  36,   0,   0,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11, 123,  15,  39,
     82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 124,  36,  36,  36,  36,
    125,  36,  36,  36,  36,  36, 126, 127,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  40,  36,  36, 104,   0,
     36,  36,  36,  92,  83, 116,   0,   0,  36,  36,  36,  36,  83, 128,   0,   0,
     36,  36,  36,  36,  83,   0,   0,   0,  36,  36,  36,  92, 129,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,
     44,  44,  44,  44,  44,  62,   0, 103,   7,   7, 111,   0,   0,   0,   0,   0,
    130,   0, 131, 132,   7,   7, 111,   0,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,
     36, 133,  36,  36,  36,  36,  36,  36,  36,  36, 134,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  61,  44,  44,  44,   0,  44,  44,  44,   0,
      0,  96,   7,   7,  36,  36,  36,  36,  36,  36,  36,  41,  36, 104,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,  36,  36,  36,  36,
     36,  36,  41,   0,   7,   7, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  68,  44,   0,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  88,  44,  66,  44,  44,  44,  44,  44,  44,  44,  97,
      7,   7, 111,   0,   7,   7, 111,   0,   0,  62, 135,   0,  44,  44,  44,  44,
    116,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     44,  71,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,
     44,  71,  36,   0,   7,   7, 118, 136,   0,   0,  93,  44,  44,   0,   0,   0,
    117,  36,  36,  36,  36,  36,  36,  36,  88,  44,  44,  76,   7,   7,  77,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  83,  44,  44,  44,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44,  44,   9, 122,
      7,   7, 111,  82,   7,   7,  77,  36,  36,  36,  36,  36,  36,  36,  36, 137,
     15,  15,  42,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  82,
      0,   0,   0,   0,  66,  44,  44,  44,  44,  44,  71,  81,  36,  74,  98,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  59,  44,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  34,  15,  27,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     15,  15,  11,  11,  15,  39,  11, 123,  15,  15,  11,  11,  15,  15,  11,  11,
     15,  39,  11, 123,  15,  15, 138, 138,  15,  15,  11,  11,  15,  15,  15,  39,
     15,  15,  11,  11,  15,  15,  11,  11,  15,  15,  11,  11,  15, 139,  11, 140,
     46, 139,  11, 141,  15,  46,  11,   0,  15,  15,  11, 141,  46, 139,  11, 141,
    142, 142, 143, 144, 145, 146, 147, 147,   0, 148, 149, 150,   0,   0, 151, 152,
      0, 153, 152,   0,   0,   0,   0, 154,  63, 155,  63,  63,  21,   0,   0, 156,
      0,   0,   0, 151,  15,  15,  15,  42,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  44,  44,  44,  44,  44,  44,  44,  44, 116,   0,   0,   0,
     48, 157, 158, 159,  23, 120,  10, 123,   0, 160,  49, 161,  11,  38, 162,  33,
      0, 163,  39, 164,   0,   0,   0,   0,  11,  11,  11,  11,  15,  15,  15,  15,
    165,  38, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0, 147,   0,   0,   0,   0,   0,   0,   0, 151,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 166,  11,  11,
     11,  11,  11,  11,  15,  15,  15,  15,  15,  15,  39,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   4, 147, 127,   0, 147, 147, 147,   5,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0, 151,   0,   0,   0,   0,   0,   0,   0, 167, 147, 147,   0,   0,   0,   0,
      4, 147, 147, 147, 147, 147, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 147,   0,   0,   0,   0,   0,   0,   0,   0,   5,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  22,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  24,  31, 168,  26,  32,  25,  29,  15,  33,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  42, 157, 169,  54,   0,   0,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  15, 170,   0,  21,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,  62,   0,   0,   0,  93,
     36,  36,  36,  36,  36,  61,   0,   0,  36,  61,  36,  61,  36,  61,  36,  61,
     36,  61,  36,  61,  36,  61,  36,  61,  44,  44,  44,  44,  44,  44,  44,  44,
    147, 147, 147,   5,   0,   0,   0,   5, 147, 147,   5, 171,   0,   0,   0, 122,
    172,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    173,  82, 147, 147,   5, 147, 147, 174,  82,  36,  83,  44,  82,  41,  36, 104,
     82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  61,  60,  82,  82,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  36,
      0,  82,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  82,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  61,   0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,
     36,  36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 175,
     36,  36,  36, 176,  36,  36,  36,  36,   7,   7,  77,   0,   0,   0,   0,   0,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25, 177,  66,  44,  44, 178,
     25,  25,  25,  25,  25,  25,  25, 179,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 180,   9,   0,   0,
      0,   0,   0,   0,   0,  62,  36,  36, 181,  25,  25,  25,  27,  25,  25,  25,
     25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  25,  15,  15,  26,  30,
     25,  25, 182, 183,  25,  27,  25,  25,  25,  25,  31,  23,  11,  25,  25,  25,
    181,  11, 184,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 185, 186,  36,
    187, 187,  68,  36,  36,  36,  36,  36,  68,  44,   0, 116,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 136,   0,   0,
     76,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,
     44,  89,   0, 136,   7,   7, 111,   0,  44,  44,  44,  44,  76,  36,  62, 188,
      7,   7,  77,  36,  36,  36,  36,  36,  36,  83,  44, 180,  36,  36,  36,  36,
     36,  68,  44,  44,  44,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36, 104,
     44,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44,
    116,   0, 152,  62,   7,   7, 111,   0,  36,  81,  36,  36,   7,   7,  77,  61,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  88,  44,  44,  66,   0,   0,
     68,  36,  36,  89,   7,   7, 111, 189,  36,  36,  36,  36,  36,  61, 190,  76,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  95,  74,  71,  83,
    134,   0,   0,   0,   0,   0,  62,  41,  36,  36,  68,  44, 191, 192,   0,   0,
     82,  61,  82,  61,  82,  61,   0,   0,  36,  61,  36,  61,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  24,  15,  15,  15, 193,   0,  15,  15,  15,  15,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,
     36,  36,  36,  36,  36,  36,  36,  36,  68,  44, 194,  89,   7,   7, 111,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,   0,  36,  36,  36,  36,
     36,  61,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     15,  24,   0,   0, 195,  15,   0, 196,  36,  36,  92,  36,  36,  61,  36,  43,
     99,  92,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0,   0,
      0,   0,   0,   0,  62,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 197,
      0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  40,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,   0,
     44,  44,  44,  44, 198,   4, 127,   0,  44,  44,  44,  44, 199, 174, 147, 147,
    147, 200, 127,   0,   6, 201, 202, 203, 145,   0,   0,   0,  36,  92,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 204,
     90,   0,   5,   6,   7,   7,   8,   9,  10,  11,  11,  11,  11,  11,  12,  13,
     14,  15,  15,  15,  15,  15,  16, 205, 206, 207,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  83,  36,  36,  36,  36,  36,  36,  36,  61,
     40,  36,  40,  36,  40,  36,  40, 104,   0,   0,   0,   0,   0,   0, 208,   0,
     36,  36,  36,  82,  36,  36,  36,  36,  36,  61,  36,  36,  36,  36,  61,  99,
     36,  36,  36,  41,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  86,
     36,  36,  36,  36,  36,  36,  36, 104,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36, 104,   0,   0,   0, 116,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,   0,   0,   0,  82,  36,  36,  36,  36,
     36,  36,  61,   0,  36,  36,  36,  36,  36,  36,  36,  36,  36,  83,  66,   0,
     36,  36,  36,  36,  36,  36,  36,  41,  36,  36,  36,  36,  36,  36,  36,  36,
     36,   0,  36,  36,  82,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  15,  15,  15,  15,  15,  15,
     15,  15,  15,  15,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  41,   7,   7, 111,   0,  11,  11,  11,  11,
     11,  11,  11,  11,  11,   0,  15,  15,  15,  15,  15,  15,  15,  15,  15,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,   0,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,   0,   0,   0,   0,   0,   0,
     36,  41,  92,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  99, 104,  78,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,  36,  36,  36,  61,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  61,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  61,  41,   0,   0,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,  36,  36,  36,  36,  41,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,  40,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     88,  60,   0,  44,  36,  82,  82,  36,  36,  36,  36,  36,  36,  41,  66,  93,
      0,   0,   0,   0,   0, 136,   0,   0,  36,  36,  36,  36,  36,  36,  36, 104,
     36,  36,  36,  36,  36,  36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  82,  36,  36,  36,  36,  36,  36, 192,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  41,   0,   0,
     36,  36,  36,  36,  36,  41,   0,   0,  36,  36,  36,  36,  61,   0,   0,   0,
     36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  22,   0,   0,   0,
     15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  24,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  44,   0,   0,   7,   7, 111,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 209, 116,  41,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36, 104,   0,  62,   0,   0,  36,  36,  36,  36,
     36,  83,  44,  44, 116, 189, 152,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,
     36, 104,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  36,  61,   0,   0,
    117,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,
     44, 194, 122,   0,   0,   0,   0,   0,   0, 100,   7,   7,   0,   0,   0,  93,
    117,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  66, 210,
    152,   0,   0,  20,  36,  36,  36,  36,  36,  36, 104,   0,   7,   7, 111,   0,
    117,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44, 211,   7,   7,
    189, 133,   0,   0,  36,  36,  36,  36,  36,  36,  36,  36,  68, 108,   0,   0,
    117,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44,
     71, 212,  58, 213,   7,   7, 214, 176,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  99,  36,  36,  36,  36,  36,  36,  44,  44,  44, 215, 216,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  61,  92,  99,  36,  36,  36,  99,  36,  36, 217,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  66,   0,   7,   7, 111,   0,
     44,  82,  36,  78,  78,  36,  36,  36,  36,  36,  92,  36,  92,  82, 209,  95,
     44,  97,  97,  89, 104,  93,   0,  82,  83, 107,  44, 116,  44, 116,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  88,  44,  44,
     44, 117, 218, 122,   7,   7, 111, 106,  41,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44,
     44,  99,   0,   0,   7,   7, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  89,  44,  44,
    219,   0, 189, 135, 135, 135,  36,  89,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  44,
    128, 104,   0,   0,   7,   7, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  44,  44, 104,   0,
      7,   7, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  61,  58,  44,  44,  44,   0,   7,   7, 111,  79,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,  44,  44,  66,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  11,  11,  11,  11,  11,  11,  11,  11,
     15,  15,  15,  15,  15,  15,  15,  15,   7,   7, 111,   0,   0,   0,   0,  62,
     36,  61,  55,  36,  36, 102,  36,  36,  36,  36,  36,  36,  44,  59,  97, 117,
     95, 220,   0,   0,   7,   7, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  40,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  88,  44, 107,  44, 221, 116,   0,   0,   0,   0,   0,   0,
     88,  44, 117,  36,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  87,  66,
    136,  93,   0,   0,  88,  44,  44,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  83,  44,  44,  44, 180, 222,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,
     36,  36,  92,  36,  36,  36,  36,  36,  36,  36,  36,  68,  44,  66,  44,  44,
    212,   0,   0,   0,   7,   7, 111,   0,   0,   0,   0,   0,  40,  36,  36,  36,
     36,  36,  36,  36, 107,  44,  44,  44,  44,  44,  58,  44,  44,  66,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  61,  99,  36,  36,  36,  36,  36,  36,  36,  36,  36,  88,  66, 109,  59,
     44,  87,   0,   0,   7,   7, 111,   0,  36,  99,  92,  36,  36,  36,  36,  36,
     36,  36,  83,  66,  59,  44, 104,   0,   7,   7, 111,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  36,  36,  36,  36,  68, 194, 122,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 104,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,  63,  63, 223,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,
     36,  36,  36,  36,  36,  36,  36,  61,   7,   7, 111, 136,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  36,  36,  36,  36,  36,  36,  36,  41,  44, 224,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44, 194, 122,   0,
     36, 122,   0,   0,   7,   7, 111,   0,  62,  36,  36,  36,  36,  36,   0,  82,
     36,  36,  36,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11,  15,  15,  15,  15,  15,  15,  15,  15,
      0,   0,   0,   0,   0,   0, 122,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  61,  93,  88,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,
     44,  44,   0,  93, 117,  36,  36,  36,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  99, 116,   0,   0,  89,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  61,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  61,   0,   0,   0,   0,  36,   0,   0,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  61,   0,  36,  36,  36, 104,
     36,  36, 104,   0,  36,  36,  41, 225,  63,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  58,  89,  58, 226,  63, 227,  44,
     66,  58,  44,   0,   0,   0,   0,   0,   0,   0, 107,  89,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    107, 116,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11, 159,  15,  15,  15,  15,  15,  15,  11,  11,  11,
     11,  11,  11, 159,  15, 139,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11,
    159,  15,  15,  15,  15,  15,  15,  49,  48, 228,  10,  49,  11, 159, 170,  14,
     15,  14,  15,  15,  11,  11,  11,  11,  11,  11, 159,  15,  15,  15,  15,  15,
     15,  50,  22,  10,  11,  49,  11, 229,  15,  15,  15,  15,  15,  15,  50,  22,
     11, 160, 166,  11, 229,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,  11,
     11, 159,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11, 159,  15,
     15,  15,  15,  15,  15,  11,  11,  11,  11,  11,  11, 159,  15,  15,  15,  15,
     15,  15,  11,  11,  11,  11,  11,  11, 159,  15,  15,  15,  15,  15,  15,  11,
     11,  11,  11,  11,  11, 159,  15,  15,  15,  15,  15,  15,  11,  11,  11,  11,
     11,  11, 159,  15,  15,  15,  15,  15,  15,  39,  11,  11,  11,  11,  11,  11,
    229,  15,  15,  15,  15,  15,  24,  15,  33,  11,  11,  11,  11,  11,  22,  15,
     15,  15,  15,  15,  15, 139,  15,  11,  11,  11,  11,  11,  11, 229,  15,  15,
     15,  15,  15,  24,  15,  33,  11,  11,  11,  11,  11,  22,  15,  15,  15,  15,
     15,  15, 139,  15,  11,  11,  11,  11,  11,  11, 229,  15,  15,  15,  15,  15,
     24,  15,  27, 100,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  66,  93,  44,
     44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44, 116,   0,  86,   0,   0,
      0, 116, 122,   0,   0,   0,  93,  44,  58,  44,  44,  44,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     44,  66,  44,  44,  44,  44,  97,  44,  59,  75,  66,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,  44, 117,  36,  41,
      7,   7, 111, 108,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  44,   7,   7, 111,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36, 104,   0,   0,  44,  66,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     11,  11,  11,  11,  11,  11,  11,  11, 159,  15,  15,  15,  15,  15,  15,  15,
     15,  44, 117,   0,   7,   7, 111,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  82,  36,  36,  36,  36,  36,  36, 102,  78,  82,  36,  61,  36, 112,   0,
    108,  62, 112,  82, 102,  78, 112, 112, 102,  78,  61,  36,  61,  36,  82,  43,
     36,  36,  99,  36,  36,  36,  36,   0,  82,  82,  99,  36,  36,  36,  36,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  11,  11,  11,
     11,  11, 123,   0,  11,  11,  11,  11,  11,  11, 123,   0,  11,  11,  11,  11,
     11,  11, 123,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 167, 127,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 111,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  41,   0,   0,   0,   0,   0,   0,   0,   0,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 104,   0,   0,
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

static UINT8 sentence_break_table_3[656] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
     32,  33,  34,  34,  35,  36,  37,  38,  39,  34,  34,  34,  40,  41,  42,  43,
     44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  64,  65,  64,  64,  66,  64,  64,  64,  64,  67,  68,
     64,  64,  64,  69,  64,  64,  64,  64,  70,  71,  72,  73,  74,  64,  64,  64,
     75,  76,  77,  78,  64,  64,  64,  64,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  79,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  80,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  81,  34,  34,  82,  83,  84,  85,
     86,  87,  88,  89,  90,  91,  92,  93,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  94,
     64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  34,  34,  95,  96,  97,  98,  34,  34,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108,  64, 109, 110, 111, 112, 113, 114,  64,  34,  34, 115,  64,
    116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126,  64,  64, 127, 128, 129,
    130, 131, 132, 133, 134, 135, 136,  64, 137, 138,  64, 139, 140, 141, 142,  64,
    143, 144, 145, 146, 147, 148,  64,  64, 149, 150, 151, 152,  64, 153,  64, 154,
     34,  34,  34,  34,  34,  34,  34, 155, 156,  34, 157,  64,  64,  64,  64,  64,
     34,  34,  34,  34,  34,  34,  34,  34, 158,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64,  64,  34,  34,  34,  34, 159,  64,  64,  64,
     34,  34,  34,  34, 160, 161, 162, 163,  64,  64,  64,  64, 164, 165, 166, 167,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 168,
     34,  34,  34,  34,  34,  34,  34,  34,  34, 169, 170,  64,  64,  64,  64,  64,
     34,  34, 171,  34,  34, 172,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64,  64, 173, 174,  64,  64,  64,  64,  64,  64,
     64,  64, 175, 176, 177,  64,  64,  64, 178, 179, 180, 181, 182, 183, 184, 185,
     64,  64,  64,  64, 186, 187,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
    188,  64, 189,  64,  64, 190,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     34, 191, 192,  64,  64,  64,  64,  64,  64,  64,  64,  64, 193, 194,  64,  64,
     64,  64, 195, 196,  64,  64,  64,  64,  64,  64,  64,  64, 197,  64,  64,  64,
     64,  64,  64,  64,  64,  64,  64, 198,  64,  64,  64,  64,  64,  64,  64,  64,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 199,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 200,  34,
    201,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34, 202,  34,  34,
     34,  34,  34,  34,  34,  34,  34, 203,  64,  64,  64,  64,  64,  64,  64,  64,
     34,  34,  34,  34, 204,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,
     34,  34,  34,  34,  34,  34, 205,  64,  64,  64,  64,  64,  64,  64,  64,  64,
    206,  64, 207, 208,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64
};

static UINT8 sentence_break_table_4[544] = {
      0,   1,   2,   3,   4,   5,   6,   7,   7,   8,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   9,  10,  11,   7,   7,   7,   7,  12,  13,  13,  13,  13,  14,
     15,  16,  17,  18,  19,  13,  20,  13,  21,  13,  13,  13,  13,  22,   7,   7,
     23,  24,  13,  13,  13,  13,  25,  26,  13,  13,  27,  28,  29,  30,  31,  32,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  33,   7,  34,  35,   7,  36,   7,   7,   7,  37,  13,  38,
      7,   7,  39,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
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
     40,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,
     13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13,  13
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

static UINT8 sentence_terminal_table_1[196] = {
      0,   0,   0,   0,   2,  64,   0, 128,   0,   2,   0,   0,   0,   0,   0, 192,
      0,   0,  16,   0,   7,   0,   0,   0,   0,   0,   0,   2,   0,   0, 128,  98,
     48,   0,   0,   0,   0,  12,   0,   0, 132,   1,   0,   0,   0,  64,   0,   0,
      0,   0,  96,   0,   8,   2,   0,   0,   0,  15,   0,   0,   0,   0,   0, 204,
      0,   0,   0,  24,   0,   0,   0,  48, 128,   3,   0,   0,   0,  64,   0,  16,
      4,   0,   0,   0,   0,   0,   0, 128,   0, 192,   0,   0,   0,   0, 136,   0,
      0,   0, 192,   0,   0, 128,   0,   0,   0,   3,   0,   0,   0,   0,   0, 224,
      0,   0,   3,   0,   0,   8,   0,   0,   0,   0, 196,   0,   2,   0,   0,   0,
      0,   0, 224,   3, 128,   1,   0,   0,   3,   0,   0,   0,  14,   0,   0,   0,
     96,  32,   0, 192,   0,   0,   0,  27,   0,  24,   0,   0,  12, 254, 255,   0,
      6,   0,   0,   0,   0,   0,   0, 112,  80,   0,   0,   0,  12,   0,   0,   0,
      0,   0, 128,   1,   0,   0,  32,   0,  16,   0,   0,   0,   0,   0,   0,   1,
      0,   1,   0,   0
};

static UINT8 sentence_terminal_table_2[352] = {
      0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   2,   0,   0,   0,   3,   0,   0,   0,   0,   0,   4,   0,
      5,   0,   0,   0,   0,   0,   0,   6,   0,   7,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   8,   0,   0,   0,   0,   0,   0,   9,   0,   0,   0,   0,   0,
      0,   0,   0,  10,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,
      0,  12,   0,   0,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,   0,   0,
      0,   0,  15,   0,   0,   0,   0,   0,   0,  16,   0,   3,   0,   0,   0,   0,
      0,  17,  18,   0,   0,   0,   0,   0,   0,  19,   0,   0,   0,   0,   0,   0,
     20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21,
     22,   0,   0,   0,   0,   0,   0,  23,   0,   0,   0,  24,   0,   0,  22,   0,
      0,  25,   0,   0,   0,   0,  26,   0,   0,   0,  27,   0,   0,   0,   0,  28,
      0,   0,   0,   0,   0,   0,   0,  29,   0,   0,  30,   0,   0,   0,   0,   0,
      1,   0,   0,  31,   0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,
      0,   0,  32,   0,   0,   0,   0,   0,   0,   0,  33,   0,   0,   3,  34,   0,
      0,   0,  35,   0,   0,   0,  36,   0,   0,  37,   0,   0,   0,   2,   0,   0,
      0,   0,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39,   0,
      0,   0,  40,   0,   0,   0,   0,   0,   0,  41,   0,   0,   0,   0,   0,   0,
      0,   0,  42,   0,   0,   0,   0,   0,   0,   0,  43,   0,  16,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  44,   0,   0,   0,  22,   0,   0,   0,  45,
      0,  44,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,
      0,   0,   0,   0,  21,   0,   0,   0,   0,   0,   0,   0,  48,   0,   0,   0
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

static UINT8 soft_dotted_table_1[100] = {
      0,   0,   0,   0,   0,   6,   0,   0,   0, 128,   0,   0,   0,   2,   0,   0,
      0,   1,   0,   0,   0,   0,   0,  32,   0,   0,   4,   0,   0,   0,   8,   0,
      0,   0,  64,   1,   4,   0,   0,   0,   0,   0,  64,   0,  16,   1,   0,   0,
      0,  32,   0,   0,   0,   8,   0,   0,   0,   0,   2,   0,   0,   3,   0,   0,
      0,   0,   0,  16,  12,   0,   0,   0,   0,   0, 192,   0,   0,  12,   0,   0,
      0,   0,   0, 192,   0,   0,  12,   0, 192,   0,   0,   0,   0,   0,   0,  12,
      0, 192,   0,   0
};

static UINT8 soft_dotted_table_2[160] = {
      0,   0,   0,   1,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,
      0,   0,   3,   4,   5,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,
      0,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  10,  11,   0,   0,
      0,  12,   0,   0,   0,   0,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,  14,   0,   0,   0,   0,   0,   0,  15,   0,   0,   0,   0,   0,
      0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,  17,  18,   0,  19,  20,   0,  21,   0,  22,  23,   0,  24,   0,  17,  18,
      0,  19,  20,   0,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static UINT8 soft_dotted_table_3[96] = {
      0,   1,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   4,   5,
      6,   3,   3,   3,   3,   3,   7,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,
      3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   8,   9,   3,   3,   3,   3,
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

static UINT8 terminal_punctuation_table_1[260] = {
      0,   0,   0,   0,   2,  80,   0, 140,   0,   0,   0,  64, 128,   0,   0,   0,
      0,   2,   0,   0,   8,   0,   0,   0,   0,  16,   0, 200,   0,   0,  16,   0,
    255,  23,   0,   0,   0,   0,   0,   3,   0,   0, 255, 127,  48,   0,   0,   0,
      0,   0,   0,  12,   0, 225,   7,   0,   0,  12,   0,   0, 254,   1,   0,   0,
      0,  64,   0,   0,   0,  56,   0,   0,   0,   0,  96,   0,   0,   0, 112,   4,
     60,   3,   0,   0,   0,  15,   0,   0,   0,   0,   0, 236,   0,   0,   0, 248,
      0,   0,   0, 192,   0,   0,   0,  48, 128,   3,   0,   0,   0,  64,   0,  16,
      2, 208,   0,   0,   6,   0,   0,   0,   0, 224,   0,   0,   0,   0, 248,   0,
      0,   0, 192,   0,   0, 192,   0,   0,   0, 128,   0,   0,   0,   0,   0, 224,
      0,   0,   0, 128,   0,   0,   3,   0,   0,   8,   0,   0,   0,   0, 247,   0,
     18,   0,   0,   0,   0,   0,   1,   0,   0,   0, 128,   0,   0,   0,  63,   0,
      0,   0,   0, 252,   0,   0,   0,  30,   0,   0, 224,   3, 128,  63,   0,   0,
      3,   0,   0,   0,  14,   0,   0,   0,  96,  32,   0, 192,   0,   0,   0,  31,
      0,  56,   0,  12,  60, 254, 255,   0,   0,   0,   0, 112,  80,   0,   0,   0,
     12,   0,   0,   0,   0,   0,   0,  24,   0,   0,   2,   0,   0,   0, 128,   1,
      0,   0,  31,   0,   0,   0,  32,   0,   0,   0, 128,   3,  16,   0,   0,   0,
    128,   7,   0,   0
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
      0,   0,   0,   0,   0,  21,   0,   0,   0,   0,  22,   0,   0,   0,   0,   0,
      0,  23,   0,  24,   0,   0,   0,   0,   0,  25,  26,   0,   0,   0,   0,   0,
      0,  27,  28,   0,   0,   0,   0,   0,  29,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  24,  30,   0,   0,   0,   0,   0,   0,  31,
      0,   0,   0,  32,   0,   0,  33,   0,   0,  34,   0,   0,   0,   0,  26,   0,
      0,   0,  35,   0,   0,   0,  36,  37,   0,   0,   0,   0,   0,   0,   0,  38,
      0,   0,  39,   0,   0,   0,   0,   0,   1,   0,   0,  40,   0,   0,   0,   0,
      0,   0,   0,   0,  36,   0,  41,   0,   0,   0,  42,   0,   0,   0,   0,   0,
     36,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,  43,
      0,  44,   0,   0,  45,   0,   0,   0,   0,   0,  46,   0,   0,   0,   0,   0,
      0,   0,  47,   0,   0,  24,  48,   0,   0,   0,  49,   0,   0,   0,  50,   0,
      0,  51,   0,   0,   0,   4,   0,   0,   0,   0,  52,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,  53,   0,   0,   0,  29,   0,   0,   0,   0,   0,
      0,  54,   0,   0,   0,   0,   0,   0,   0,   0,  55,   0,   0,   0,   0,   0,
      0,   0,  56,   0,  57,  29,   0,   0,   0,   0,  49,  58,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,  59,   0,   0,   0,  60,   0,   0,   0,   0,
      0,   0,   0,  33,   0,   0,   0,  61,   0,  62,  63,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  59,   0,   0,   0,   0,   0,   0,   0,  36,   0,   0,   0,
      0,   0,   0,   0,  64,   0,   0,   0
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

static UINT8 unified_ideograph_table_1[80] = {
      0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255,  31,   0, 192,  26, 128, 154,   3,   0,   0,
    255, 255, 255,  63,   0,   0,   0,   0, 255, 255, 255, 255, 255, 255,  31,   0,
    255, 255, 255,  63, 255, 255, 255, 255, 255, 255, 255, 255,   3,   0, 255, 255,
    255, 255, 255, 255,   1,   0,   0,   0, 255,   7,   0,   0,   0,   0,   0,   0
};

static UINT8 unified_ideograph_table_2[88] = {
      0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   0,   1,   1,   1,   1,   1,   1,   1,   2,
      3,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   4,   1,   1,   1,   1,
      1,   1,   1,   1,   5,   1,   1,   1,   6,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   7,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   8,
      1,   1,   1,   1,   1,   9,   0,   0
};

static UINT8 unified_ideograph_table_3[160] = {
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   3,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,
      1,   1,   1,   5,   1,   1,   1,   1,   1,   1,   1,   6,   7,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   8,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      1,   1,   1,   1,   1,   1,   1,   1,   1,  10,   0,   0,   0,   0,   0,   0
};

static UINT8 unified_ideograph_table_4[136] = {
      0,   1,   2,   3,   4,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,   0,
      3,   3,   3,   3,   3,   6,   7,   8,   9,   0,   0,   0,   0,   0,   0,   0,
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

static UINT8 uppercase_table_1[304] = {
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
      0,   0, 192, 255, 255, 127,   0,   0, 157, 234,  37, 192,   5,  40,   4,   0,
     85,  21,   0,   0,  85,  85,  85,   5,  84,  85,  84,  85,  85,  85,   0, 106,
     85,  40,  69,  85,  85, 125,  95,  85, 244,   2,   0,   0,   0,   0,  32,   0,
    255,   0,   0,   0, 255, 255,  15,   0, 255, 255,   7,   0, 255, 255, 255,   3,
      0,   0, 240, 255, 255,  63,   0,   0,   0, 255, 255, 255,   3,   0,   0, 208,
    100, 222,  63,   0, 255,   3,   0,   0, 176, 231, 223,  31,   0,   0,   0, 123,
     95, 252,   1,   0,   0, 240, 255, 255,  63,   0,   0,   0,   3,   0,   0, 240,
      1,   0,   0,   0, 252, 255, 255,   7,   0,   0,   0, 240, 255, 255,  31,   0,
    255,   1,   0,   0,   0,   4,   0,   0,   3,   0,   0,   0, 255,   3, 255, 255
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
     18,  41,   0,  42,   3,   3,   3,  43,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   3,  44,  45,   0,   0,   0,   0,  46,   3,  47,  48,  49,  50,  51,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
     18,  52,   0,   0,   0,  26,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  18,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     55,  56,  57,  58,  59,  60,  26,  61,  62,  63,  64,  65,  66,  55,  56,  57,
     58,  67,  25,  26,  61,  58,  68,  69,  70,  71,  40,  41,  26,  72,  73,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  18,  74,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  75,  75,  61,   0,   0,   0
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
      0,   0,   0,   0,   0,   0,   0,   0,   0,  56,   0,   0,   0,   0,   0,   0,
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

static UINT8 word_table_1[412] = {
      0,   0, 255,   3, 254, 255, 255, 135, 255,   7,   0,   4,  32,   4, 255, 255,
    127, 255, 195, 255,   3,   0,  31,  80,  63,   0, 223, 188,  64, 215, 251, 255,
    191, 255, 127,   2, 255,   1, 255, 191, 182,   0,   7,   0, 255, 195, 239, 159,
    255, 253, 255, 159, 255, 231,  63,  36, 255,  63, 255,  15, 223, 255, 255,   0,
    248, 255, 207, 255, 249, 255, 197, 243, 159, 121, 128, 176,   3,  80, 238, 135,
    109, 211, 135,  57,   2,  94, 192, 255, 238, 191, 237, 243, 191,  59,   1,   0,
      0, 254, 238, 159, 159,  57, 224, 176,   2,   0, 236, 199,  61, 214,  24, 199,
    199,  61, 129,   0, 255, 223, 253, 255, 255, 227, 223,  61,  96,   7, 239, 223,
    239, 243,  96,  64,   6,   0, 223, 125, 240, 128,   0, 252, 238, 255, 127, 252,
    251,  47, 127, 132,  95, 255,  12,   0, 214, 247, 175, 255,  95,  63, 255, 243,
      0,   3, 160, 194, 255, 254, 255,  31,  64,   0, 191,  32, 255, 247, 255,  61,
    127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  31,   0,  15,   0,  13,   0,
    143,  48,   0,  56, 255, 127, 128,   0,   0, 248, 247, 255,  31, 248, 255, 170,
    223,  95, 220,  31, 207,  15,   0,  48,   0, 128,  16,   0,   2, 128, 132, 252,
     47,  62,  80, 189, 224,  67, 255, 128, 127,   0, 127, 127, 224,   0,  62,  31,
    127, 230, 224, 255, 247, 191, 128, 255, 252, 255, 255, 249, 252,   7, 255,  16,
    255, 232,   1, 128, 124,   0, 126, 126, 126,   0, 255,  55, 127, 248, 248, 224,
    127,  95, 219, 255,  24,   0,   0, 224, 252, 252, 252,  28, 255, 239, 255, 183,
      0,  32,  15, 255,  62,   0,  63, 253, 191, 145,  55,   0, 255, 192, 111, 240,
    239, 254,  63, 135, 255,  27, 240,   0,  79,   0,  31, 222, 255,  23, 255,  64,
    127, 189, 237, 251, 129, 224, 207,  31, 191,   0,  63, 255,   0,  63,  17,   0,
    127, 242, 111, 255, 191, 249, 255, 252,  27,   0, 255,  35, 127, 251, 127, 180,
    207,   0, 191, 253, 251,   1, 255, 224, 255,  99, 224, 227,   7, 248, 231,  15,
      0,  60,  28,   0, 100, 222, 255, 235, 239, 255, 191, 231, 223, 223, 255, 123,
     95, 252, 247, 207,  32,   0, 219,   7, 255,  67, 255,   8, 150, 254, 247,  10,
    132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 238, 251
};

static UINT8 word_table_2[1936] = {
      0,   0,   0,   1,   2,   3,   2,   4,   0,   0,   5,   6,   7,   8,   7,   8,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   9,  10,  11,   0,
      7,   7,   7,   7,  12,   0,   0,  13,  14,   7,  15,   7,   7,   7,   7,  16,
      7,   7,   7,   7,   7,   7,   7,   7,  15,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   2,   7,  17,   7,   7,  18,   2,   7,  19,  20,   7,   3,  21,
      0,   4,   7,   7,   7,   7,  22,   7,   7,   7,   7,   7,   7,  23,  24,  25,
      0,   7,   7,   7,  26,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,  27,
      7,   7,  28,   0,   7,  29,   4,   0,   0,   0,   7,  30,  31,  32,  32,   7,
      7,   7,   7,   7,   7,   7,  33,   2,  23,  34,  24,  35,  36,  37,  33,  38,
     39,  34,  24,  40,  41,  42,  43,  12,  44,  15,  24,  45,  46,  47,  33,  48,
     49,  34,  24,  45,  50,  51,  33,  52,  53,  54,  55,  22,  56,  57,  43,   0,
     58,  59,  24,  60,  61,  62,  33,   0,  63,  59,  24,  64,  61,  65,  33,  66,
     58,  59,   7,   7,  67,  68,  33,  69,  70,  71,   7,  72,  73,  74,  43,  75,
      2,   7,   7,   4,  28,   1,   0,   0,  76,   7,  77,  28,  78,  79,   0,   0,
     47,  80,   1,  81,  82,   7,  83,   2,  30,  82,   7,  83,  84,   0,   0,   0,
      7,   7,   7,   7,   1,   7,   7,   7,   7,  28,   7,   7,  85,   7,   7,  86,
      7,   7,   7,   7,  87,  88,   7,   7,  87,   7,   7,  89,  90,   8,   7,   7,
      7,  90,   7,   7,   7,  26,   0,   0,   7,   0,   7,   7,   7,   7,   7,  91,
      2,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,  25,   7,   2,   4,   7,   7,   7,   7,  92,  18,
     58,  93,   7,  93,   7,  94,  58,  95,   7,   7,   7,   7,   7,  96,   1,   0,
     97,   1,   7,   7,   7,   7,   7,  18,   7,   7,   4,   7,   7,   7,   7,  12,
      7,  98,  29,  29,  43,   7,  28,  93,   7,   7,  29,   7,   1,   1,   0,   0,
      7,  29,   7,   7,   7,  98,   7,  25,   1,   1,  99,   7,  47,   0,   0,   0,
      7,   7,   7,   7,  29,   1, 100,  94,   7,   7,   7,   7,   7,   7,   7,  94,
      7,   7,   7,  31,  60,   7,   7,  28,  18,   7,   7,  26,   0, 101,   7,   4,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 102,
      7,  91,   7,   7,  91, 103,   7,  28,   7,   7,   7, 104, 105, 106,  83, 105,
    107,   0,   0, 108,  47, 109,   0, 110,   0,  83,   0,   0,   0,   7,   7,  47,
    111, 112, 113,  79, 114,   0,   7,   7,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  43,   7,   7,   1,   0,
      7,   7,  98,   7,   7,  98,   7,   7,   7,   7,   7,   7,   7,   7, 102,  94,
      7,   7,  85,   7,   7,   7, 115, 108,   7, 116, 117, 117, 117, 117,   7,   7,
      0,   0, 108,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    118,   0,   2, 119,   2,   7,   7,   7,   7, 120,   2,   7,   7,   7,   7,  86,
    121,   7,   7,   2,   7,   7,   7,   7,  98,   0,   7,   7,   0,   0,   0,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  83,
      7,   7,   7,   7,   7,   7,   7,   7,  83,   0,   0,   0,   0,   7,   7,  28,
     83,   7,  29,   0,   7,   7,   7, 122,   7,   7,   7,   7,   7,   7,   7,  10,
      0, 123, 124,   7,   7,   7,   7,   7, 125,   7,   7,   7, 126,   0,   0, 121,
      7,   7, 127,   0,   7,   7,   7,  94,   7,   7,   7,   7,  12,   1,   7, 128,
      7,   7,  28,   7,   7,  94,   7,  83,   7,   7,   7,   7, 129,   1,   7,  98,
      7,   7,   7, 116,  28,   1,   7,  71,   7,   7,   7,   7,  21,  97,   7, 130,
    131, 132, 117,   7,   7,  86,   1,   7,   7,   7,   7,   7,   7,   7, 133,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  94,   7, 134,   7,   7,  29,
      7,   7,   7,   7,   7,   7,  28,   7,   7,   7,   7,   7,   7,   1,   0,   0,
    116, 135,  24, 136, 137,   7,   7,   7,   7,   7,   7,  10,   0,  32,   7,   7,
      7,   7,   7,  28,   0,   7,   7,   7,   7, 124,   7,   7,  31,   0,   0,  29,
      7,   0,   7, 138, 139,   0,   0,  30,   7,   7,   7,   7,   7,   7,   7,  83,
      0,   1,   2,   3,   2,   4,  43,   7,   7,   7,   7,  98, 140, 141,   0,   0,
    142,   7,   8, 143,  28,  28,   0,   0,   7,   7,   7,   7,   7,   7,   7,   4,
      0,   0,   0,   0,   7,   7,   7,  93,   0,   0,   0,   0,   0,   0,   0, 144,
      0,   0,   0,   0,   0,   0,   0,   0,   7,  83,   7,   7,   7,  47,  47,   0,
      7,   7, 139,   7,   4,   7,   7,   4,   7,  28,   7,   7, 145, 146,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   1,   7,   7, 145,   7,  29,
      7,   7,  31,   7,   7,   7,  94,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7, 116,   7,  12,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    147,   7,   7, 148,   7,  12,   7, 116,   7,  98,   0,   0,   0,   0,   7, 149,
      7,  12,   7,   1,   0,   0,   0,   0,   7,   7,   7, 150,   0,   0,   0,   0,
    151, 152,   7, 153,   0,   0,   7,  83,   7,  83,   0,   0,  82,   7, 116,   0,
      7,   7,   7,  12,   7,  12,   7,  21,   7,  10,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,  18,   0,   0,   0,   7,   7,   7,  21,   7,   7,   7,  21,
      7,   7,  31,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 154,  10,   0,   0,   0,   0,
      7,  83,  99,   7,   7,  47,   0,   0,   0,   0,   0,   7,  93,   0,   7, 116,
      7,   7,   7,   7, 116,   0,  43, 108,   7,   7,   7,   4,   0,   7,  18,   1,
      7,   7,   7,  30, 155,   7,   7, 156,   7,   7,   7,   7, 157, 158,   0,   0,
      7,  15,   7, 159,   0,   0,   0,   0, 160,  19,  18,   7,   7,   7,   4,   1,
     23,  34,  24, 161,  50, 162, 163,  93,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,  22,  10,   0,   7,   7,   7,   7, 164,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7, 165,  47, 166,   0,   0,
      7,   7,   7,   7, 167,   1,   0,   0,   7,   7,   7,  18,   1,   0,   0,   0,
      7,  26,  29,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   1, 108,
    168, 169,   7, 170,  94,   1,   0,   0,   0,   0, 171,   7,   7, 171, 172,   0,
      7,   7,   7,  98,  99,   7,   7,   7,   7, 173,   0,   0,   7,   7,   7,  18,
     24,   7,   7,   8,  47,   1,   0, 124,   7, 124,  82, 116,   0,   0,   0,   0,
    174,   7,   7, 175, 176,   1, 177,   7,  98, 178,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 116,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   1,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,  98,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  94,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  98,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7, 116,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,  18,   7,  98,   1,   0,   0,   0,   0,   0,   0,   7,  28,  93,
      7,   7,   7, 116,  94,   1,  32, 179,   7,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,   7,   7,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   3,   7,   7,   7, 115,   7,   0,   0,   0,   0, 172,  10,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  31,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  12,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,  98,   0,   0,   0,  21, 155,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  29,
      7,   7,   7,   7,   7,   7,   4,  83,  18, 180,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 181, 182, 183,   0, 184,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 185,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,  30,   7,   7,   7,  58, 186, 187, 188,   7,   7,   7,
    189, 190,   7, 191, 192,  59,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 165,   7,  59,  86,   7,  86,
      7,  30,   7,  30,  98,   7,  98,   7,  24,   7,  24,   7, 193,   7,   7,   7,
      7,   7,   7, 134,   7,   7,  83, 194, 109, 100,   2,   0,   0,   0,   0,   0,
      8, 125, 195,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  83,  28, 196,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  93, 116,   0,   0,
      7,   7,   7,   7, 197,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    188,   7, 198, 199, 200, 201, 202, 203, 204,  29, 205,  29,   0,   0,   0,   0,
      0,   0,   0,   7,   1,   7,   1,   7,   1,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   0,   0,
      7,   7,   7,  93,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  28,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  47,   0,
      7,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0
};

static UINT8 word_table_3[464] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  32,  31,  31,  31,  31,  31,  31,  31,  33,  34,  35,  31,
     36,  37,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  39,
      1,   1,   1,   1,  40,   1,  41,  42,  43,  44,  45,  46,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  47,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  48,  49,   1,  50,  51,  52,
     53,  54,  55,  56,  57,  58,   1,  59,  60,  61,  62,  63,  64,  65,  66,  67,
     68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  31,  79,  80,  81,  82,
      1,   1,   1,  83,  84,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  87,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  88,  89,  31,  31,  90,  91,
      1,   1,   1,   1,   1,   1,   1,  92,   1,   1,   1,   1,  93,  94,  31,  31,
      1,  95,  96,  31,  31,  31,  31,  31,  31,  31,  31,  31,  97,  31,  31,  31,
     31,  98,  99,  31, 100, 101, 102, 103,  31,  31, 104,  31,  31,  31,  31,  31,
    105, 106, 107,  31,  31,  31,  31,  31, 108, 109,  31,  31,  31,  31, 110,  31,
     31, 111,  31,  31,  31,  31,  31,  31,  31,  31,  31, 112,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 113,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 114, 115,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 116,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 117,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 118,  31,  31,  31,  31,  31,
      1,   1,   1, 119,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31, 120,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 word_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
     28,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
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

static UINT8 word_break_table_1[512] = {
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
      7,   7,   1,   7,   1,   7,   7,   7,   7,   7,   0,   0,   0,   0,   0,   7,
      7,   7,   9,   7,   7,   1,   7,   7,   0,   0,  18,  18,   1,   0,   1,   0,
      7,   0,   0,   7,   7,   7,   1,   0,   1,   0,   7,   0,   0,   0,   0,   1,
      0,   1,   1,   0,   1,   7,   0,   0,   1,   0,   0,   0,   0,   1,   0,   0,
      0,   0,   7,   1,   0,   0,   7,   7,   0,   0,   7,   0,   7,   0,   7,   0,
     18,  18,   0,   0,   7,   0,   0,   0,   0,   7,   0,   7,  18,  18,   7,   7,
     21,   1,   1,   1,   1,   0,   7,   7,   7,   7,   9,   0,   1,   7,   7,   1,
      1,   7,   1,   0,   7,   7,   7,   1,   0,   1,   0,   1,  21,  21,  21,  21,
     21,  21,  21,   0,   7,  22,   9,   9,  16,  16,   0,   0,  16,   0,   0,  14,
     17,  17,   9,   9,   9,   9,   9,   8,   8,   0,   0,   0,  15,   0,   0,   0,
      0,   0,   0,  21,   9,   0,   9,   9,  21,   0,   0,   0,   0,  12,  12,  12,
     12,  12,   0,   0,   0,   7,   7,  12,  12,   0,   0,   0,  12,  12,  12,  12,
     12,  12,  12,   0,   7,   7,   0,   1,   1,   1,   7,   1,   0,   1,   1,   7,
      1,   7,   7,   0,   0,  11,   7,  11,  11,   0,  11,  11,  11,   0,  11,   0,
     11,  11,   0,  11,  15,   0,   0,  14,   0,   8,   8,   8,  15,  14,   0,   0,
      1,   0,   0,   9,   0,   0,   0,  16,   0,   0,  12,  12,  12,  12,   7,   7,
      0,   9,   9,   9,   7,   0,  18,  18,  18,  18,   1,   0,   7,   1,   0,   1,
      7,   7,   7,   9,   9,   9,   9,   7,   0,   0,  19,  19,  19,  19,  19,  19
};

static UINT8 word_break_table_2[5824] = {
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
      9,   9,   9,   9,   9,   9,  57,   0,   9,   9,  10,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,  18,   9,   9,
      9,   9,   0,   0,  59,  17,  17,  17,  60,  17,  17,  17,  17,  17,  17,  17,
     17,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  51,  61,
     17,  17,  17,  17,  57,  17,   9,   9,  51,  62,   6,   6,   8,   9,   9,   9,
     57,   8,   9,  48,  48,   9,   9,   9,   9,   9,  18,   9,  63,  16,  53,  61,
     17,  64,  64,  65,   0,  59,   0,  21,  51,  62,   6,   6,  53,   0,   0,  66,
     26,   8,  10,  67,  48,   9,   9,   9,   9,   9,  18,   9,  18,  68,  53,  46,
     37,  59,  64,  58,  55,   0,   8,  63,   0,  62,   6,   6,  23,  69,   0,   0,
     26,   8,   9,  21,  21,   9,   9,   9,   9,   9,  18,   9,  18,   8,  53,  61,
     17,  27,  27,  58,  70,   0,   0,   0,  51,  62,   6,   6,   0,   0,  43,  17,
     26,   8,   9,  48,  48,   9,   9,   9,   9,   9,  18,   9,  18,   8,  53,  61,
     17,  64,  64,  58,   0,  26,   0,  21,  51,  62,   6,   6,  71,   0,   0,   0,
     72,   8,  10,  16,  18,  53,  68,  18,  67,  70,  10,  16,   9,   9,  53,  73,
     37,  73,  46,  58,  70,  59,   0,   0,   0,  62,   6,   6,   0,   0,   0,   0,
     17,  42,   9,  18,  18,   9,   9,   9,   9,   9,  18,   9,   9,   9,  53,  43,
     17,  46,  46,  58,   0,  28,  10,   0,  51,  62,   6,   6,   0,   0,   0,   0,
     57,   8,   9,  18,  18,   9,   9,   9,   9,   9,  18,   9,   9,   8,  53,  61,
     17,  46,  46,  58,   0,  28,   0,  13,  51,  62,   6,   6,  68,   0,   0,   0,
     17,   9,   9,  18,  18,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  61,
     17,  46,  46,  65,   0,  39,   0,  67,  51,  62,   6,   6,   0,   0,  16,   9,
     26,   8,   9,   9,   9,  10,  16,   9,   9,   9,   9,   9,  21,   9,   9,  71,
      9,  10,  74,  59,  17,  75,  17,  17,   0,  62,   6,   6,  73,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,  17,  37,   0,
      0,  59,  17,  37,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55,  17,  17,  77,
      0,   0,  17,  58,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     70,   0,   0,   0,   0,   0,  58,   0,   6,   6,  76,   0,   0,  78,  55,  73,
      9,   9,   8,   9,   9,   9,   9,   9,   9,   9,   9,  70,  26,  17,  17,  17,
     17,  46,   9,  57,  17,  17,  26,  17,  17,  17,  17,  17,  17,  17,  17,  77,
      0,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59,  17,  17,  17,  17,  37,
      6,   6,  76,   0,   0,  73,  58,  73,  46,  64,  17,  58,  26,  77,   0,   0,
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
      9,   9,   9,  18,  51,  77,   0,   0,   9,   9,   9,   9,  51,  77,   0,   0,
      9,   9,   9,   9,  51,   0,   0,   0,   9,   9,   9,  18,  81,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  17,  17,
     17,  17,  17,  17,  17,   0,   0,  55,   6,   6,  76,   0,   0,   0,   0,   0,
      0,   0,  59,  82,   6,   6,  76,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,   0,
      9,  83,   9,   9,   9,   9,   9,   9,   9,   9,  84,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   0,
      9,   9,   9,   9,   9,   9,   9,  10,  17,  17,  17,   0,  17,  17,  17,   0,
      0,  62,   6,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,  39,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,  26,  17,  37,  17,  17,  17,  17,  17,  17,  17,  64,
      6,   6,  76,   0,   6,   6,  76,   0,   0,   0,   0,   0,  17,  17,  17,  17,
     77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     17,  42,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,
     17,  42,   9,   0,   6,   6,  76,   0,   0,   0,  59,  17,  17,   0,   0,   0,
     85,   9,   9,   9,   9,   9,   9,   9,  57,  17,  17,  23,   6,   6,  47,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  51,  17,  17,  17,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,  17,  17,   0,   0,
      6,   6,  76,   8,   6,   6,  47,   9,   9,   9,   9,   9,   9,   9,   9,  53,
      9,   9,  70,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   8,
      0,   0,   0,   0,  37,  17,  17,  17,  17,  17,  42,  50,   9,  45,  65,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  27,  17,
      9,   9,   9,   9,   9,  53,   9,  53,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  53,   9,  53,   9,   9,  86,  86,   9,   9,   9,   9,   9,   9,   9,  53,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  18,   9,  63,
     16,  18,   9,  70,   9,  16,   9,   0,   9,   9,   9,  70,  16,  18,   9,  70,
     87,  88,  88,  89,   0,   0,  90,   0,   0,  91,  92,  93,   0,   0,   0,  11,
     94,  95,   0,   0,   0,  94,   0,  96,  34,  97,  34,  34,  71,   0,   0,  67,
      0,   0,   0,   0,   9,   9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,  17,  17,  17,  17,  17,  17,  17,  17,  77,   0,   0,   0,
     13,  67,  16,   9,   9,  71,   8,  53,   0,  63,  18,  21,   9,   9,  53,   9,
      0,   8,  53,  13,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,  10,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  70,  67,  39,  23,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  21,   0,  71,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,  67,   0,   0,   0,  59,
      9,   9,   9,   9,   9,  10,   0,   0,   9,  10,   9,  10,   9,  10,   9,  10,
      9,  10,   9,  10,   9,  10,   9,  10,  17,  17,  17,  17,  17,  17,  17,  17,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     98,  71,   0,   0,   0,   0,   0,   0,   0,   0,  73,  17,  99, 100,  67,  70,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 101, 102, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 104, 103,
      0,   8,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   8,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,  10,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 103, 103, 103, 103,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 104,
    103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,
      9,   9,   9,  70,   9,   9,   9,   9,   6,   6,  47,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  37,  17,  17, 105,
      9,   9,   9,   9,   9,   9,   9,  51,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  58,   0,   0,   0,
      0,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
     16,   9,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,   9,   9,
    106, 106,  39,   9,   9,   9,   9,   9,  39,  17,   0,  77,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   0,
     23,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  17,
     17,  58,   0,   0,   6,   6,  76,   0,  17,  17,  17,  17,  23,   9,  67, 107,
      6,   6,  47,   9,   9,   9,   9,   9,   9,  51,  17,  58,   9,   9,   9,   9,
      9,  39,  17,  17,  17,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,  70,
     17,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  17,
     77,   0,   0,  67,   6,   6,  76,   0,   0,  55,   0,   0,   6,   6,  76,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  57,  17,  17,  37,   0,   0,
     39,   9,   9,  58,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,  59,  58,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46,  64,  77,  73,
     55,   0,   0,   0,   0,   0,   0,   0,   9,   9,  39,  17,  16, 108,   0,   0,
      8,  10,   8,  10,   8,  10,   0,   0,   9,  10,   9,  10,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  37,  58,   6,   6,  76,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   0,   9,   9,   9,   9,
      9,  10,  67,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,
      9,  10,   0,   0,  67,   9,   0, 109,  29,  29, 110,  29,  29,  30,  29, 111,
    112, 110,  29,  29,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   0,   0,   0,
      0,   0,   0,   0,  67,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  53,
      0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  16,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   0,
     17,  17,  17,  17, 113,  95,   0,   0,  17,  17,  17,  17,  11,  94,   0,   0,
      0,   0,   0, 114,   5, 115,   0,   0,   0,   0,   0,   0,   9,  18,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9, 116,
      0, 117,   0,   5,   6,   6,   7,   0,   8,   9,   9,   9,   9,   9,  10,  11,
      8,   9,   9,   9,   9,   9,  10,   0,   0, 118, 103, 103, 103, 103, 103, 103,
    103, 103, 103, 103, 103, 103, 103, 119,   9,   9,   9,   9,   9,   9,   9,  10,
     16,   9,  16,   9,  16,   9,  16,  70,   0,   0,   0,   0,   0,   0, 120,   0,
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
      9,   9,   9,   9,   9,   9,   9,   9,   9,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,   0,
      9,   9,   9,   9,   9,  53,   0,   0,   9,   9,   0,   0,   0,   0,   0,   0,
      9,  53,  18,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  21,  70,  48,
      9,   9,   9,   9,   9,  53,   0,   0,   9,   9,   9,   9,   9,  10,   0,   0,
      9,   9,   9,   9,   9,   9,   9,  10,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,  10,  53,   0,   0,
      9,   9,   9,   9,   9,  53,   0,   0,   9,   9,   9,   9,   9,   9,  53,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   0,  16,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     57,  28,   0,  17,   9,   8,   8,   9,   9,   9,   9,   9,   9,  53,  37,  59,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,  70,
      9,   9,   9,   9,   9,   9,   9,  70,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   8,   9,   9,   9,   9,   9,   9, 108,   0,   0,   0,   0,   0,   0,
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
      9,  51,  17,  17,  77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,
      9,  70,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,   9,  10,   0,   0,
     85,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,
     17,  37,   0,   0,   0,   0,   0,   0,   0,  62,   6,   6,   0,   0,   0,  59,
     85,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  17,  37,  14,
      0,   0,   0,  14,   9,   9,   9,   9,   9,   9,  70,   0,   6,   6,  76,   0,
     85,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  17, 121,   6,   6,
      0,  83,   0,   0,   9,   9,   9,   9,   9,   9,   9,   9,  39,  13,   0,   0,
     85,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  17,
     42,  70,  26,  46,   6,   6, 122,  70,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,  21,   9,   9,   9,   9,   9,   9,  17,  17,  17,   0,  74,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,  10,  18,  21,   9,   9,   9,  21,   9,   9,  70,   0,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,  39,  17,  17,  37,   0,   6,   6,  76,   0,
     17,   8,   9,  48,  48,   9,   9,   9,   9,   9,  18,   9,  18,   8,  22,  61,
     17,  64,  64,  58,  70,  59,   0,   8,  51,  73,  17,  77,  17,  77,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  57,  17,  17,
     17,  85,  10,   0,   6,   6,  76,  72,  53,   0,   0,   0,   0,   0,   0,   0,
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
      9,  10,  71,   9,   9,  68,   9,   9,   9,   9,   9,   9,  17,  27,  64,  85,
     61,   0,   0,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   9,   9,  16,   9,   9,   9,   9,   9,
      9,   9,   9,   9,  57,  17,  73,  17, 123,  77,   0,   0,   0,   0,   0,   0,
     57,  17,  85,   9,   9,   9,   9,   9,   9,   9,   9,   9,  39,  17,  56,  37,
      0,  59,   0,   0,  57,  17,  17,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  51,  17,  17,  17,  58,  71,   0,   0,   0,   0,   0,   0,   0,   0,
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
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,  34,  34,  38,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,   0,
      9,   9,   9,   9,   9,   9,   9,  10,   6,   6,  76,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   9,   9,   9,   9,   9,   9,   9,  53,  17,  77,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,  37,   0,   0,
      9,   0,   0,   0,   6,   6,  76,   0,  67,   9,   9,   9,   9,   9,   0,   8,
      9,   9,   9,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,  10,  59,  57,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,   0,  59,  85,   9,   9,   9,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,  21,  77,   0,   0,  58,   0,   0,   0,
    102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 103,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   0,   9,   9,   9,  70,
      9,   9,  70,   0,   9,   9,  53,  28,  34,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
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
      9,  63,  16,   9,  18,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,  53,   9,   9,   9,   9,   9,   9,
     18,   9,   9,   9,   9,   9,  10,   9,   9,   9,   9,   9,   9,   9,  10,   9,
      9,   9,   9,   9,   9,  18,   9,   9,   9,   9,   9,   9,   9,  18,   9,   9,
      9,   9,   9,  10,   9,   9,   9,   9,   9,   9,   9,  10,   9,   9,   9,   9,
      9,   9,  18,   9,   9,   9,   9,   9,   9,   9,  18,   9,   9,   9,   9,   9,
     10,   9,   9,  62,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  37,  59,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  77,   0,  55,   0,   0,
      0,  77,   0,   0,   0,   0,  59,  17,  26,  17,  17,  17,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
     17,  37,  17,  17,  17,  17,  64,  17,  27,  46,  37,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  70,  17,  85,   9,  53,
      6,   6,  76,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  17,   6,   6,  76,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  70,   0,   0,  17,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,  17,  85,   0,   6,   6,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      9,   8,   9,   9,   9,   9,   9,   9,  68,  48,   8,   9,  10,   9,  86,   0,
     13,  67,  86,   8,  68,  48,  86,  86,  68,  48,  10,   9,  10,   9,   8,  63,
      9,   9,  21,   9,   9,   9,   9,   0,   8,   8,  21,   9,   9,   9,   9,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   9,   9,   9,
      9,   9,  53,   0,   9,   9,   9,   9,   9,   9,  53,   0,   9,   9,   9,   9,
      9,   9,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0, 126, 127, 127, 127, 127, 127, 127,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59,  17,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   6,  76,   0,
     14,   0,   0,   0,   0,   0,   0,   0,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,   0,   0,   0,   0
};

static UINT8 word_break_table_3[640] = {
      0,   1,   2,   2,   2,   3,   4,   5,   2,   6,   7,   8,   9,  10,  11,  12,
     13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,
     29,  30,   2,   2,  31,  32,  33,  34,  35,   2,   2,   2,  36,  37,  38,  39,
     40,  41,  42,  43,  44,  45,  46,  47,  48,  49,   2,  50,   2,   2,  51,  52,
     53,  54,  55,  56,  57,  57,  57,  57,  57,  58,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  59,  60,  61,  62,  63,  57,  57,  57,
     64,  65,  66,  67,  57,  68,  69,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
      2,   2,   2,   2,   2,   2,   2,   2,   2,  70,   2,   2,  71,  72,  73,  74,
     75,  76,  77,  78,  79,  80,  81,  82,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
      2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,  83,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  84,  85,   2,   2,  86,  87,  88,  89,  90,  91,
     92,  93,  94,  95,  57,  96,  97,  98,   2,  99, 100,  57,   2,   2, 101,  57,
    102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,  57,  57, 113, 114, 115,
    116, 117, 118, 119, 120, 121, 122,  57, 123, 124,  57, 125, 126, 127, 128,  57,
    129, 130, 131, 132, 133, 134,  57,  57, 135, 136, 137, 138,  57, 139,  57, 140,
      2,   2,   2,   2,   2,   2,   2, 141, 142,   2, 143,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
      2,   2,   2,   2,   2,   2,   2,   2, 144,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,   2,   2,   2,   2, 145,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
      2,   2,   2,   2, 146, 147, 148, 149,  57,  57,  57,  57, 150,  57, 151, 152,
    153,  57, 154,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57, 155, 156,  57,  57,  57,  57,  57,  57,
     57,  57, 157, 158, 159,  57,  57,  57, 160, 161, 162,   2,   2, 163, 164, 165,
     57,  57,  57,  57, 166, 167,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
    168,  57, 169,  57,  57, 170,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
      2, 171, 172,  57,  57,  57,  57,  57,  57,  57,  57,  57, 173, 174,  57,  57,
     57,  57, 175, 176,  57,  57,  57, 177,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57, 178,  57,  57,  57,  57,  57,  57,  57,  57,
    179,  57, 180, 181,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,
     57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57,  57
};

static UINT8 word_break_table_4[272] = {
      0,   1,   2,   3,   4,   4,   4,   4,   4,   4,   5,   6,   6,   7,   4,   8,
      9,  10,  11,  12,  13,   4,  14,   4,   4,   4,   4,  15,   4,  16,  17,  18,
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
     19,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
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
      2,   6,   2,   2,   2,   6,   3,   2,   2,   3,   2,   2,   2,   6,   2,   2,
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

static UINT8 xid_continue_table_1[414] = {
      0,   0, 255,   3, 254, 255, 255, 135, 255,   7,   0,   4, 160,   4, 255, 255,
    127, 255, 195, 255,   3,   0,  31,  80, 223, 184, 192, 215, 251, 255, 191, 255,
    251, 252, 127,   2, 255,   1, 255, 191, 182,   0,   7,   0, 255, 195, 239, 159,
    255, 253, 255, 159, 255, 231,  63,  36, 255,  63, 255,  15, 223, 255, 255,   0,
    248, 255, 207, 255, 249, 255, 197, 243, 159, 121, 128, 176,   3,  80, 238, 135,
    109, 211, 135,  57,   2,  94, 192, 255,  63,   0, 238, 191, 237, 243, 191,  59,
      1,   0,   0, 254, 238, 159, 159,  57, 224, 176,   2,   0, 236, 199,  61, 214,
     24, 199, 199,  61, 129,   0, 255, 223, 253, 255, 255, 227, 223,  61,  96,   7,
    239, 223, 239, 243,  96,  64,   6,   0, 223, 125, 240, 128,   0, 252, 238, 255,
    127, 252, 251,  47, 127, 132,  95, 255,  12,   0, 255, 127, 214, 247, 175, 255,
     95,  63, 255, 243,   0,   3, 160, 194, 255, 254, 255,  31,  64,   0, 191,  32,
    255, 247, 255,  61, 127,  61,  61, 127,  61, 255,  63,  63, 255, 199,  31,   0,
     15,   0,  13,   0, 143,  48,   0,  56, 128,   0,   0, 248, 247, 255, 255, 251,
    255, 170, 223,  95, 220,  31, 207,  15,   0, 128,  16,   0,   2, 128, 226, 255,
    132, 252,  47,  63,  80, 253, 224,  67,  31, 248, 255, 128, 127,   0, 127, 127,
    224,   0,  62,  31, 127, 230, 224, 255, 240, 191, 128, 255, 252, 255, 255, 249,
    252,   7, 255,  16, 255, 232,   1, 128, 124,   0, 126, 126, 126,   0, 255,  55,
    127, 248, 248, 224, 127,  95, 219, 255, 240, 255,  24,   0,   0, 224, 138, 170,
    252, 252, 252,  28, 255, 239, 255, 183,   0,  32,  15, 255,  62,   0,  63, 253,
    191, 145,  55,   0, 255, 192, 111, 240, 239, 254,  63, 135, 255,  27, 240,   0,
     79,   0,  31, 222, 255,  23, 255,  64, 127, 189, 237, 251, 129, 224, 207,  31,
    191,   0,  63, 255,   0,  63,  17,   0, 127, 242, 111, 255, 191, 249, 255, 252,
     27,   0, 255,  35, 127, 251, 127, 180, 191, 253, 251,   1, 255, 224, 255,  99,
    224, 227,   7, 248, 231,  15,   0,  60,  28,   0, 100, 222, 255, 235, 239, 255,
    191, 231, 223, 223, 255, 123,  95, 252, 247, 207,  32,   0, 219,   7, 255,  67,
    150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 238, 251
};

static UINT8 xid_continue_table_2[1904] = {
      0,   0,   0,   1,   2,   3,   2,   4,   0,   0,   5,   6,   7,   8,   7,   8,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   9,  10,  11,   0,
      7,   7,   7,   7,   7,   7,   7,  12,  13,   7,  14,   7,   7,   7,   7,  15,
      7,   7,   7,   7,   7,   7,   7,   7,  16,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   2,   7,  17,   7,   7,  18,   2,   7,  19,  20,   7,   3,  21,
      0,   4,   7,   7,   7,   7,  22,   7,   7,   7,   7,   7,   7,  23,  24,  25,
      0,   7,   7,   7,  26,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,  27,
      7,   7,  28,   0,   7,  29,   4,   0,   0,   0,   7,  30,  31,  32,  14,   7,
      7,   7,   7,   7,   7,   7,  33,   2,  23,  34,  24,  35,  36,  37,  33,  38,
     39,  34,  24,  40,  41,  42,  43,  44,  45,  14,  24,  46,  47,  48,  33,  49,
     50,  34,  24,  46,  51,  52,  33,  53,  54,  55,  56,  22,  57,  58,  43,   0,
     59,  60,  24,  61,  62,  63,  33,   0,  64,  60,  24,  65,  62,  66,  33,  67,
     59,  60,   7,   7,  68,  69,  33,  70,  71,  72,   7,  73,  74,  75,  43,  76,
      2,   7,   7,   4,  77,   1,   0,   0,  78,   7,  79,  28,  80,  81,   0,   0,
     48,  82,   1,  83,  84,   7,  85,   2,  30,  84,   7,  85,  86,   0,   0,   0,
      7,   7,   7,   7,   1,   7,   7,   7,   7,  28,   7,   7,  87,   7,   7,  88,
      7,   7,   7,   7,  89,  90,   7,   7,  89,   7,   7,  91,  92,   8,   7,   7,
      7,  92,   7,   7,   7,  26,  49,  10,   7,   0,   7,   7,   7,   7,   7,  93,
      2,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,  25,   7,   2,   4,   7,   7,   7,   7,  94,  18,
     59,  95,   7,  95,   7,  96,  59,  97,   7,   7,   7,   7,   7,  98,   1,   0,
     99,   1,   7,   7,   7,   7,   7,  18,   7,   7,   4,   7,   7,   7,   7,  44,
      7,  77,  29,  29,  43,   7,  28,  95,   7,   7,  29,   7,   1,   4,   0,   0,
      7,  29,   7,   7,   7,  77,   7,  25,   1,   1, 100,  19,  48,   0,   0,   0,
      7,   7,   7,   7,  29,   1, 101,  96,   7,   7,   7,   7,   7,   7,   7,  96,
      7,   7,   7,  31,  61,   7,   7,  28,  18,   7,   7,  26,   0, 102,   7,   4,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 103,
      7,  93,   7,   7,  93, 104,   7,  28,   7,   7,   7, 105, 106, 107,  85, 106,
      0,   0,   0, 108,  48, 109,   0, 110,   0,  85,   0,   0,   0,  85, 111,  48,
    112, 113, 114,  81, 115,   0,   7,   7,  18,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  77,   7,   7,  77,   7,   7,   7,   7,   7,   7,   7,   7, 116,  96,
      7,   7,  87,   7,   7,   7, 117, 108,   7, 118, 119, 119, 119, 119,   7,   7,
    120,   0,   2, 121,   2,   7,   7,   7,   7, 122,   2,   7,   7,   7,   7,  88,
    123,   7,   7,   2,   7,   7,   7,   7,  77,   0,   7,   7,   0,   0,   0,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  85,
      7,   7,   7,   7,   7,   7,   7,   7,  85,   0,   0,   0,   0,   7,   7,  28,
     85,   7,  29,   0,   7,   7,   7, 124,   7,   7,   7,   7,   7,   7,   7,  10,
      0, 125, 126,   7,   7,   7,   7,   7, 127,   7,   7,   7, 128,   0,   0, 123,
      7,   7, 129,   0,   7,   7,   7,  96,   7,   7,   7,   7,  44,   1,   7, 130,
      7,   7,  28,   7,   7,  96,   7,  85,   7,   7,   7,   7, 131,   1,   7,  77,
      7,   7,   7, 118,  28,   1,   7,  72,   7,   7,   7,   7,  21,  99,   7, 132,
    133, 134, 119,   7,   7,  88,   1,   7,   7,   7,   7,   7,   7,   7, 135,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  96,   7, 136,   7,   7,  29,
      7,   7,   7,   7,   7,   7,  28,   7,   7,   7,   7,   7,   7,   1,   0,   0,
    118, 137,  24, 138, 139,   7,   7,   7,   7,   7,   7,  10,   0,  32,   7,   7,
      7,   7,   7,   7,   7,  28, 140,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,  28,   0,   7,   7,   7,   7, 126,   7,   7,  31,   0,   0,   1,
      7,   0,   7, 141, 142,   0,   0, 143,   7,   7,   7,   7,   7,   7,   7,  85,
      0,   1,   2,   3,   2,   4,  43,   7,   7,   7,   7,  77, 144, 145,   0,   0,
    146,   7,   8, 147,  28,  28,   0,   0,   7,   7,   7,   7,   7,   7,   7,   4,
      0,   0,   0,   0,   7,   7,   7,  95,   0,   0,   0,   0,   0,   0,   0, 148,
      0,   0,   0,   0,   0,   0,   0,   0,   7,  85,   7,   7,   7,  48,  48,   0,
      7,   7, 142,   7,   4,   7,   7,   4,   7,  28,   7,   7, 149, 150,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   1,   7,   7, 149,   7,  29,
      7,   7,  31,   7,   7,   7,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7, 118,   7,  44,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    151,   7,   7, 152,   7,  44,   7, 118,   7,  77,   0,   0,   0,   0,   7, 153,
      7,  44,   7,   1,   0,   0,   0,   0,   7,   7,   7, 154,   0,   0,   0,   0,
    155, 156,   7, 157,   0,   0,   7,  85,   7,  85,   0,   0,  84,   7, 118,   0,
      7,   7,   7,  44,   7,  44,   7,  21,   7,  10,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,  18,   0,   0,   0,   7,   7,   7,  21,   7,   7,   7,  21,
      7,   7,  31,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7, 158,  10,   0,   0,   0,   0,
      7,  85, 100,   7,   7,  48,   0,   0,   0,   0,   0,   7,  95,   0,   7, 118,
      7,   7,   7,   7, 118,   0,  43, 108,   7,   7,   7,   4,   0,   7,  18,   1,
      7,   7,   7,  30, 159,   7,   7, 160,   7,   7,   7,   7, 161, 162,   0,   0,
      7,  14,   7, 163,   0,   0,   0,   0, 164,  19,  18,   7,   7,   7,   4,   1,
     23,  34,  24, 165,  51, 166, 167,  95,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,  22,  10,   0,   7,   7,   7,   7, 168,   1,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7, 169,  48, 170,   0,   0,
      7,   7,   7,   7, 171,   1,   0,   0,   7,   7,   7,  18,   1,   0,   0,   0,
      7,  26,  29,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   7,   7,   7,   7,   1, 108,
    172, 173,   7, 174,  96,   1,   0,   0,   0,   0, 175,   7,   7, 175, 176,   0,
      7,   7,   7,  77, 100,   7,   7,   7,   7, 177,   0,   0,   7,   7,   7,  18,
     24,   7,   7,   8,  48,   1,   0, 126,   7, 126,  84, 118,   0,   0,   0,   0,
    178,   7,   7, 179,  31,   1, 180,   7,  77, 181,   1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 118,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   1,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,  77,   0,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7, 118,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,  18,   7,  77,   1,   0,   0,   0,   0,   0,   0,   7,  28,  95,
      7,   7,   7, 118,  96,   1,  32, 182,   7,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   7,   7,   7,   7,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   3,   7,   7,   7, 117,   7,   0,   0,   0,   0, 176,  10,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  31,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  44,   0,   0,
     18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,  77,   0,   0,   0,  21, 159,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  29,
      7,   7,   7,   7,   7,   7,   4,  85,  18, 183,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0, 184, 185, 186,   0, 187,   0,   0,   0,   0,   0,
      0,   0,   0,   0, 188,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,  30,   7,   7,   7,  59, 189, 190, 191,   7,   7,   7,
    192, 193,   7, 194, 195,  60,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7, 169,   7,  60,  88,   7,  88,
      7,  30,   7,  30,  77,   7,  77,   7,  24,   7,  24,   7, 196,   7,   7,   7,
      7,   7,   7, 136,   7,   7,  85, 197, 109, 101,   2,   0,   0,   0,   0,   0,
      8, 127, 198,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,  85,  28, 199,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  95, 118,   0,   0,
      7,   7,   7,   7,  29,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    191,   7, 200, 201, 202, 203, 204, 205, 103,  29, 206,  29,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  28,   0,   0,
      7,   7,   7,  95,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,  28,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  10,   7,   7,   7,   7,   7,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  48,   0,
      7,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   0
};

static UINT8 xid_continue_table_3[464] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  32,  33,  31,  31,
     34,  35,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  36,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  37,
      1,   1,   1,   1,  38,   1,  39,  40,  41,  42,  43,  44,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  45,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  46,  47,  48,  49,  50,  51,
     52,  53,  54,  55,  56,  57,   1,  58,  59,  60,  61,  62,  63,  64,  65,  66,
     67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  31,  78,  79,  80,  81,
      1,   1,   1,  82,  83,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  86,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  87,  88,  31,  31,  89,  90,
      1,   1,   1,   1,   1,   1,   1,  91,   1,   1,   1,   1,  92,  93,  31,  31,
      1,  94,  95,  31,  31,  31,  31,  31,  31,  31,  31,  31,  96,  31,  31,  31,
     31,  97,  98,  31,  99, 100, 101, 102,  31,  31, 103,  31,  31,  31,  31,  31,
    104, 105, 106,  31,  31,  31,  31,  31, 107, 108,  31,  31,  31,  31, 109,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31, 110,  31,  31,  31,  31,
      1,   1,   1,   1,   1,   1, 111,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 112, 113,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 114,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 115,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 116,  31,  31,  31,  31,  31,
      1,   1,   1, 117,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31, 118,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 xid_continue_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,  21,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  22,  23,  24,   5,  25,  26,
      5,  27,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
     28,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
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

static UINT8 xid_start_table_1[968] = {
      0,   0,   0,   0, 254, 255, 255,   7,   0,   4,  32,   4, 255, 255, 127, 255,
    255, 255, 255, 255, 195, 255,   3,   0,  31,  80,   0,   0,   0,   0, 223, 184,
     64, 215, 255, 255, 251, 255, 255, 255, 255, 255, 191, 255,   3, 252, 255, 255,
    255, 255, 254, 255, 255, 255, 127,   2, 255,   1,   0,   0,   0,   0, 255, 255,
    255, 135,   7,   0, 255,   7,   0,   0,   0, 192, 254, 255, 255, 255,  47,   0,
     96, 192,   0, 156,   0,   0, 253, 255, 255, 255,   0,   0,   0, 224, 255, 255,
     63,   0,   2,   0,   0, 252, 255, 255, 255,   7,  48,   4, 255, 255,  63,   4,
     16,   1,   0,   0, 255, 255, 255,   1, 255, 255, 223, 255, 255,   0,   0,   0,
    240, 255, 255, 255, 255, 255, 255,  35,   0,   0,   1, 255,   3,   0, 254, 255,
    225, 159, 249, 255, 255, 253, 197,  35,   0,  64,   0, 176,   3,   0,   3,  16,
    224, 135, 249, 255, 255, 253, 109,   3,   0,   0,   0,  94,   0,   0,  28,   0,
    224, 191, 251, 255, 255, 253, 237,  35,   0,   0,   1,   0,   3,   0,   0,   2,
    224, 159, 249, 255,   0,   0,   0, 176,   3,   0,   2,   0, 232, 199,  61, 214,
     24, 199, 255,   3, 224, 223, 253, 255, 255, 253, 255,  35,   0,   0,   0,   7,
      3,   0,   0,   0, 225, 223, 253, 255, 255, 253, 239,  35,   0,   0,   0,  64,
      3,   0,   6,   0, 240, 223, 253, 255, 255, 255, 255,  39,   0,  64, 112, 128,
      3,   0,   0, 252, 224, 255, 127, 252, 255, 255, 251,  47, 127,   0,   0,   0,
    254, 255, 255, 255, 255, 255,   5,   0, 214, 247, 255, 255, 175, 255,   5,  32,
     95,   0,   0, 240,   1,   0,   0,   0, 255, 254, 255, 255, 255,  31,   0,   0,
      0,  31,   0,   0, 255,   7,   0, 128,   0,   0,  63,  60,  98, 192, 225, 255,
      3,  64,   0,   0, 191,  32, 255, 255, 255, 255, 255, 247, 255,  61, 127,  61,
    255,  61, 255, 255, 255, 255,  61, 127,  61, 255, 127, 255, 255, 255,  61, 255,
    255, 255, 255,   7, 255, 255,  63,  63, 255, 159, 255, 255, 255, 199, 255,   1,
    255, 223,   3,   0, 255, 255,   3,   0, 255, 223,   1,   0, 255, 255,  15,   0,
      0,   0, 128,  16, 255,   5, 255, 255, 255, 255,  63,   0, 255, 255, 255, 127,
    255,  63,  31,   0, 255,  15, 255, 255, 255,   3,   0,   0, 255, 255, 127,   0,
    255, 255,  31,   0, 128,   0,   0,   0, 224, 255, 255, 255, 224,  15,   0,   0,
    248, 255, 255, 255,   1, 192,   0, 252,  63,   0,   0,   0,  15,   0,   0,   0,
      0, 224,   0, 252, 255, 255, 255,  63, 255,   1, 255, 255, 255, 255, 255, 231,
      0, 222, 111,   4,  63,  63, 255, 170, 255, 255, 223,  95, 220,  31, 207,  15,
    255,  31, 220,  31,   0,   0,   2, 128,   0,   0, 255,  31, 132, 252,  47,  63,
     80, 253, 255, 243, 224,  67,   0,   0, 255, 127, 255, 255,  31, 120,  12,   0,
    255, 128,   0,   0, 127, 127, 127, 127, 224,   0,   0,   0, 254,   3,  62,  31,
    255, 255, 127, 224, 255, 127,   0,   0, 255, 255, 255,  31, 255,  31, 255, 255,
      0,  12,   0,   0, 255, 127,   0, 128,   0,   0, 128, 255, 252, 255, 255, 255,
    255, 249, 255, 255, 252,   7,   0,   0,   0,   0, 224, 255, 187, 247, 255, 255,
      7,   0,   0,   0,   0,   0, 252, 104,  63,   0, 255, 255, 255, 255,   7,   0,
      0, 128,   0,   0, 223, 255,   0, 124, 247,  15,   0,   0, 255, 255, 127, 196,
    255, 255,  98,  62,   5,   0,   0,  56, 255,   7,  28,   0, 126, 126, 126,   0,
    127, 127, 255, 255, 255,   3, 255, 255,  15,   0, 255, 255, 127, 248, 255, 255,
    255, 255, 255,  15, 255,  63, 255, 255, 255, 255, 255,   3, 127,   0, 248, 160,
    255, 253, 127,  95, 219, 255, 255, 255,   0,   0, 248, 255, 255, 255, 252, 255,
      0,   0, 255,   3,   0,   0, 138, 170, 192, 255, 255, 255, 252, 252, 252,  28,
    255, 239, 255, 255, 127, 255, 255, 183, 255,  63, 255,  63, 255, 255,   1,   0,
    255,   7, 255, 255,  15, 255,  62,   0, 255, 255,  15, 255, 255,   0, 255, 255,
     63, 253, 255, 255, 255, 255, 191, 145, 255, 255,  55,   0, 255, 255, 255, 192,
      1,   0, 239, 254,  31,   0,   0,   0, 255,   3,   3,   0, 128,   0, 255, 255,
    255, 255, 255,   0, 144,   0, 255, 255, 255, 255,  71,   0,  30,   0,   0,  20,
    255, 255, 251, 255, 255,  15,   0,   0, 127, 189, 255, 191,   0,   0,   1, 224,
    128,   7,   0, 128, 176,   0,   0,   0,   0,   0,   0,  15,  16,   0,   0,   0,
    255,   7,   0,   1,   0,   0,   0, 128, 127, 242, 111, 255, 255, 255,   0, 128,
      2,   0,   0,   0, 255, 252, 255, 255,  10,   0,   0,   0,   1, 248, 255, 255,
    255, 255,   7,   4,   0,   0,   1, 240, 255,   3,   0,  32, 255, 253, 255, 255,
      0,   0, 252, 255, 127, 251, 255, 255,  64,   0,   0,   0, 191, 253, 255, 255,
    255,   3,   0,   1, 255,  63,   0,   0, 248, 255, 255, 224, 255,   7,   1,   0,
     11,   0,   0,   0,   0,   0,   7,   0, 240,   0, 255, 255, 255,   7, 255,  31,
    255,   1, 255,   3, 255, 255, 255, 223, 100, 222, 255, 235, 239, 255, 255, 255,
    191, 231, 223, 223, 255, 255, 255, 123,  95, 252, 253, 255,  63, 255, 255, 255,
    253, 255, 255, 247, 255,  31, 128,  63,   0,  64,   0,   0,  15,   8,   0,   0,
    150, 254, 247,  10, 132, 234, 150, 170, 150, 247, 247,  94, 255, 251, 255,  15,
    238, 251, 255,  15,   3,   0, 255, 255
};

static UINT8 xid_start_table_2[896] = {
      0,   0,   1,   1,   0,   2,   3,   3,   4,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   5,   6,   0,   0,   0,   7,   8,   9,   4,  10,
      4,   4,   4,   4,  11,   4,   4,   4,   4,  12,  13,   4,  14,   0,  15,  16,
      0,   4,  17,  18,   4,   4,  19,  20,  21,  22,  23,   4,   4,  24,  25,  26,
     27,  28,  29,  17,   0,  30,  31,   0,  32,  33,  34,  35,  36,  37,  38,  39,
     40,  41,  42,  43,  44,  45,  46,  47,  48,  45,  49,  50,  51,  52,  46,   0,
     53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,   0,
     68,  69,  67,   0,  70,  71,  72,   0,  73,   0,  74,  75,  76,   0,   0,   0,
      4,  77,  78,  79,  80,   4,  81,  82,   4,   4,  83,   4,  84,  85,  86,   4,
     87,   4,  88,   0,  22,   4,   4,  89,  68,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,  90,   1,   4,   4,  91,  92,  93,  93,  94,   4,  95,  96,   0,
      0,   4,   4,  29,   4,  97,   4,  98,  99,   0,  15, 100,   4, 101, 102,   0,
    103,   4, 104,   0,   0, 105,   0,   0, 106,  95, 107,   0, 108, 109,   4, 110,
      4, 111, 112, 113, 114, 115,   0, 116,   4,   4,   4,   4,   4,   4,   0,   0,
     89,   4, 117, 113,   4, 118, 119, 120,   0,   0,   0, 121, 122,   0,   0,   0,
    123, 124, 125,   4,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
      4, 126,  99,   4,   4,   4,   4, 127,   4,  81,   4, 128, 103, 129, 129,   0,
    130, 131,  68,   4, 132,  68,   4,  82, 106,  12,   4,   4, 133,   4,   0,  15,
      4,   4,   4,   4,   4,   4,   4, 134,   4,   4,   4,   4,  75,   0,  15, 113,
    135, 136,   4, 137, 113,   4,   4,  22, 138, 139,   4,   4, 140,   4, 141, 142,
    143, 144,   4,  95, 139,  95,   0, 145,  25, 146,  67, 134,  32, 147, 148, 149,
      4,  14, 150, 151,   4, 152, 153, 154, 155, 156,  82, 157,   4,   4,   4, 144,
      4,   4,   4,   4,   4, 158, 159, 160,   4,   4,   4, 161,   4,   4, 162,   0,
    163, 164, 165,   4,   4,  93, 166,   4,   4,   4, 113,  32,   4,   4,   4,   4,
      4, 113,  15,   4, 167,   4,  31, 168,   0,   0,   0, 169,   4,   4,   4, 134,
      0,   1,   1, 170, 113,  99, 171,   0, 172, 173, 174,   0,   4,   4,   4,  88,
      0,   0,   4, 104,   0,   0,   0,   0,   0,   0,   0,   0, 134,   4, 175,   0,
      4,  23, 176,  98, 113,   4, 177,   0,   4,   4,   4,   4, 113,  15, 178, 160,
      4, 179,   4, 111,   0,   0,   0,   0,   4, 103,  98,  31,   0,   0,   0,   0,
    180, 181,  98, 103,  99,   0,   0, 182,  98, 162,   0,   0,   4, 183,   0,   0,
    184,  98,   0, 134, 134,   0,  74, 185,   4,  98,  98, 147,  93,   0,   0,   0,
      4,   4,  14,   0,   4, 147,   4, 147,   4, 111,   0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   4, 186,   0,   0, 134, 187, 110,   0,   0,  15, 185, 103,
    108, 188,   0,   0, 108,  22,  15,  14, 108,  67, 189, 190, 108, 147, 191,   0,
    192, 193,   0,   0, 194, 114,  99,   0,  48,  45, 195,  56,   0,   0,   0,   0,
      4, 104, 196,  56,   4,  22, 197,   0,   0,   0,   0,   0,   4, 133, 198,   0,
      4,  22, 199,   0,   4, 200,   0,   0,  88,   0,   0,   0,   0,   0,   0,   0,
      4, 193,   0,   0,   0,   4,   4, 201, 202, 203, 204,   0,   0, 205, 175, 206,
    207, 208, 209,   4, 210,   0,   4,  29, 211, 133,  73, 212,  22,   0,   0,   0,
    213, 175, 214, 215, 216,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 147,
      0,   0,   0,   0,   0,  46,   0,   0,   4,   4,   4,   4, 162,   0,   0,   0,
      4,   4,   4, 133,   4,   4,   4,   4,   4,   4, 111,   0,   0,   0,   0,   0,
      4, 133,   0,   0,   0,   0,   0,   0,   4,   4,  67,   0,   0,   0,   0,   0,
      4,  29,  99,   0,   0,   0,  15, 217,   4,  22, 111, 218,  22,   0,   0,   0,
      0,   0,   4,   4,   0,   0,   0,   0,   4,   4, 219,   0, 166,   0,   0, 220,
      4,   4,   4,   4,   4,   4,   4, 188,   4,   4,   4,   4,   4,   4,  98,   0,
     14,   0,   0,   0,   0,   0,   0,   0,  99,   0, 221, 222,   4,   4,   4,   4,
      4,   4,   4,   4,   4,   4,   4, 160,   4,   4,   4, 223, 224,   0,   0,   0,
      4,   4,  30,   4, 225, 226, 227,   4, 228, 229, 230,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4, 231, 232,  82,  30,  30, 126, 126, 211, 211, 150,   0,
      4, 233, 234,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4, 193,
      4,   4,   4,   4,   4,   4, 185,   0,   4,   4, 235,   0,   0,   0,   0,   0,
    227, 236, 237, 238, 239, 240,   0,   0,   4,   4,   4,   4,   4,   4, 113,   0,
      4, 104,   4,   4,   4,   4,   4,   4, 113,   4,   4,   4,   4,   4,   4,   4,
      4,   4,   4,   4,   4, 241,   4,   4,   4,   4,   4,   4,   4,   4,   4,  73,
    113,   0,   0,   0,   0,   0,   0,   0,   4,   4,  17,   0,   0,   0,   0,   0
};

static UINT8 xid_start_table_3[432] = {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
     16,   1,  17,  18,  19,   1,  20,  21,  22,  23,  24,  25,  26,  27,   1,  28,
     29,  30,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  32,  33,  31,  31,
     34,  35,  31,  31,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  27,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  36,
      1,   1,   1,   1,  37,   1,  38,  39,  40,  41,  42,  43,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,  44,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,  31,   1,  45,  46,  47,  48,  49,  50,
     51,  52,  53,  54,  55,  56,   1,  57,  58,  59,  60,  61,  62,  63,  64,  65,
     66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  31,  77,  78,  79,  80,
      1,   1,   1,  81,  82,  83,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
      1,   1,   1,   1,  84,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,   1,   1,  85,  31,  31,  31,  31,  31,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1,  86,  87,  31,  31,  88,  89,
      1,   1,   1,   1,   1,   1,   1,  90,   1,   1,   1,   1,  91,  92,  31,  31,
      1,  93,  94,  31,  31,  31,  31,  31,  31,  31,  31,  31,  95,  31,  31,  31,
     31,  31,  31,  31,  96,  97,  98,  99,  31,  31,  31,  31,  31,  31,  31,  31,
     31, 100, 101,  31,  31,  31,  31,  31, 102, 103,  31,  31,  31,  31, 104,  31,
      1,   1,   1,   1,   1,   1, 105,   1,   1,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1, 106, 107,   1,   1,   1,   1,   1,   1,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 108,   1,
      1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, 109,  31,  31,  31,  31,
     31,  31,  31,  31,  31,  31,  31,  31,   1,   1, 110,  31,  31,  31,  31,  31,
      1,   1,   1, 111,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31
};

static UINT8 xid_start_table_4[272] = {
      0,   1,   2,   3,   4,   5,   5,   5,   5,   6,   7,   5,   5,   8,   9,  10,
     11,  12,  13,  14,  15,   9,  16,   5,  17,   9,   9,  18,   9,  19,  20,   9,
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  21,  22,  23,   5,  24,  25,
      5,  26,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,
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
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9
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
