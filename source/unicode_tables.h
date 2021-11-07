// #include "pyport.h"
#include "Python.h"

#define UNICODE_VERSION "14.0.0"

typedef unsigned char UINT8;
typedef signed char INT8;
typedef unsigned short UINT16;
typedef signed short INT16;
typedef unsigned int UINT32;
typedef signed int INT32;

#define UP_ALPHABETIC_NAMES 0
#define UP_ALPHANUMERIC_NAMES 0
#define UP_ANY_NAMES 0
#define UP_ASCII_HEX_DIGIT_NAMES 0
#define UP_BIDI_CLASS_NAMES 2
#define UP_BIDI_CONTROL_NAMES 0
#define UP_BIDI_MIRRORED_NAMES 0
#define UP_BLANK_NAMES 0
#define UP_BLOCK_NAMES 25
#define UP_CANONICAL_COMBINING_CLASS_NAMES 346
#define UP_CASED_NAMES 0
#define UP_CASE_IGNORABLE_NAMES 0
#define UP_CHANGES_WHEN_CASEFOLDED_NAMES 0
#define UP_CHANGES_WHEN_CASEMAPPED_NAMES 0
#define UP_CHANGES_WHEN_LOWERCASED_NAMES 0
#define UP_CHANGES_WHEN_TITLECASED_NAMES 0
#define UP_CHANGES_WHEN_UPPERCASED_NAMES 0
#define UP_CNTRL_NAMES 0
#define UP_DASH_NAMES 0
#define UP_DECOMPOSITION_TYPE_NAMES 404
#define UP_DEFAULT_IGNORABLE_CODE_POINT_NAMES 0
#define UP_DEPRECATED_NAMES 0
#define UP_DIACRITIC_NAMES 0
#define UP_DIGIT_NAMES 0
#define UP_EAST_ASIAN_WIDTH_NAMES 422
#define UP_EXTENDER_NAMES 0
#define UP_GENERAL_CATEGORY_NAMES 428
#define UP_GRAPH_NAMES 0
#define UP_GRAPHEME_BASE_NAMES 0
#define UP_GRAPHEME_CLUSTER_BREAK_NAMES 458
#define UP_GRAPHEME_EXTEND_NAMES 0
#define UP_GRAPHEME_LINK_NAMES 0
#define UP_HANGUL_SYLLABLE_TYPE_NAMES 476
#define UP_HEX_DIGIT_NAMES 0
#define UP_HYPHEN_NAMES 0
#define UP_ID_CONTINUE_NAMES 0
#define UP_IDEOGRAPHIC_NAMES 0
#define UP_IDS_BINARY_OPERATOR_NAMES 0
#define UP_ID_START_NAMES 0
#define UP_IDS_TRINARY_OPERATOR_NAMES 0
#define UP_INDIC_POSITIONAL_CATEGORY_NAMES 482
#define UP_INDIC_SYLLABIC_CATEGORY_NAMES 498
#define UP_JOIN_CONTROL_NAMES 0
#define UP_JOINING_GROUP_NAMES 534
#define UP_JOINING_TYPE_NAMES 638
#define UP_LINE_BREAK_NAMES 644
#define UP_LOGICAL_ORDER_EXCEPTION_NAMES 0
#define UP_LOWERCASE_NAMES 0
#define UP_MATH_NAMES 0
#define UP_NFC_QUICK_CHECK_NAMES 687
#define UP_NFD_QUICK_CHECK_NAMES 690
#define UP_NFKC_QUICK_CHECK_NAMES 687
#define UP_NFKD_QUICK_CHECK_NAMES 690
#define UP_NONCHARACTER_CODE_POINT_NAMES 0
#define UP_NUMERIC_TYPE_NAMES 692
#define UP_NUMERIC_VALUE_NAMES 696
#define UP_OTHER_ALPHABETIC_NAMES 0
#define UP_OTHER_DEFAULT_IGNORABLE_CODE_POINT_NAMES 0
#define UP_OTHER_GRAPHEME_EXTEND_NAMES 0
#define UP_OTHER_ID_CONTINUE_NAMES 0
#define UP_OTHER_ID_START_NAMES 0
#define UP_OTHER_LOWERCASE_NAMES 0
#define UP_OTHER_MATH_NAMES 0
#define UP_OTHER_UPPERCASE_NAMES 0
#define UP_PATTERN_SYNTAX_NAMES 0
#define UP_PATTERN_WHITE_SPACE_NAMES 0
#define UP_POSIX_ALPHANUMERIC_NAMES 0
#define UP_POSIX_DIGIT_NAMES 0
#define UP_POSIX_PUNCT_NAMES 0
#define UP_POSIX_XDIGIT_NAMES 0
#define UP_PREPENDED_CONCATENATION_MARK_NAMES 0
#define UP_PRINT_NAMES 0
#define UP_PUNCT_NAMES 0
#define UP_QUOTATION_MARK_NAMES 0
#define UP_RADICAL_NAMES 0
#define UP_REGIONAL_INDICATOR_NAMES 0
#define UP_SCRIPT_NAMES 839
#define UP_SENTENCE_BREAK_NAMES 1002
#define UP_SENTENCE_TERMINAL_NAMES 0
#define UP_SOFT_DOTTED_NAMES 0
#define UP_TERMINAL_PUNCTUATION_NAMES 0
#define UP_UNIFIED_IDEOGRAPH_NAMES 0
#define UP_UPPERCASE_NAMES 0
#define UP_VARIATION_SELECTOR_NAMES 0
#define UP_WHITE_SPACE_NAMES 0
#define UP_WORD_NAMES 0
#define UP_WORD_BREAK_NAMES 1017
#define UP_XDIGIT_NAMES 0
#define UP_XID_CONTINUE_NAMES 0
#define UP_XID_START_NAMES 0

extern char* value_names[1040];

UINT32 lookup_alphabetic(Py_UCS4 codepoint);
UINT32 lookup_alphanumeric(Py_UCS4 codepoint);
UINT32 lookup_any(Py_UCS4 codepoint);
UINT32 lookup_ascii_hex_digit(Py_UCS4 codepoint);
UINT32 lookup_bidi_class(Py_UCS4 codepoint);
UINT32 lookup_bidi_control(Py_UCS4 codepoint);
UINT32 lookup_bidi_mirrored(Py_UCS4 codepoint);
UINT32 lookup_blank(Py_UCS4 codepoint);
UINT32 lookup_block(Py_UCS4 codepoint);
UINT32 lookup_canonical_combining_class(Py_UCS4 codepoint);
UINT32 lookup_cased(Py_UCS4 codepoint);
UINT32 lookup_case_ignorable(Py_UCS4 codepoint);
UINT32 lookup_changes_when_casefolded(Py_UCS4 codepoint);
UINT32 lookup_changes_when_casemapped(Py_UCS4 codepoint);
UINT32 lookup_changes_when_lowercased(Py_UCS4 codepoint);
UINT32 lookup_changes_when_titlecased(Py_UCS4 codepoint);
UINT32 lookup_changes_when_uppercased(Py_UCS4 codepoint);
UINT32 lookup_cntrl(Py_UCS4 codepoint);
UINT32 lookup_dash(Py_UCS4 codepoint);
UINT32 lookup_decomposition_type(Py_UCS4 codepoint);
UINT32 lookup_default_ignorable_code_point(Py_UCS4 codepoint);
UINT32 lookup_deprecated(Py_UCS4 codepoint);
UINT32 lookup_diacritic(Py_UCS4 codepoint);
UINT32 lookup_digit(Py_UCS4 codepoint);
UINT32 lookup_east_asian_width(Py_UCS4 codepoint);
UINT32 lookup_extender(Py_UCS4 codepoint);
UINT32 lookup_general_category(Py_UCS4 codepoint);
UINT32 lookup_graph(Py_UCS4 codepoint);
UINT32 lookup_grapheme_base(Py_UCS4 codepoint);
UINT32 lookup_grapheme_cluster_break(Py_UCS4 codepoint);
UINT32 lookup_grapheme_extend(Py_UCS4 codepoint);
UINT32 lookup_grapheme_link(Py_UCS4 codepoint);
UINT32 lookup_hangul_syllable_type(Py_UCS4 codepoint);
UINT32 lookup_hex_digit(Py_UCS4 codepoint);
UINT32 lookup_hyphen(Py_UCS4 codepoint);
UINT32 lookup_id_continue(Py_UCS4 codepoint);
UINT32 lookup_ideographic(Py_UCS4 codepoint);
UINT32 lookup_ids_binary_operator(Py_UCS4 codepoint);
UINT32 lookup_id_start(Py_UCS4 codepoint);
UINT32 lookup_ids_trinary_operator(Py_UCS4 codepoint);
UINT32 lookup_indic_positional_category(Py_UCS4 codepoint);
UINT32 lookup_indic_syllabic_category(Py_UCS4 codepoint);
UINT32 lookup_join_control(Py_UCS4 codepoint);
UINT32 lookup_joining_group(Py_UCS4 codepoint);
UINT32 lookup_joining_type(Py_UCS4 codepoint);
UINT32 lookup_line_break(Py_UCS4 codepoint);
UINT32 lookup_logical_order_exception(Py_UCS4 codepoint);
UINT32 lookup_lowercase(Py_UCS4 codepoint);
UINT32 lookup_math(Py_UCS4 codepoint);
UINT32 lookup_nfc_quick_check(Py_UCS4 codepoint);
UINT32 lookup_nfd_quick_check(Py_UCS4 codepoint);
UINT32 lookup_nfkc_quick_check(Py_UCS4 codepoint);
UINT32 lookup_nfkd_quick_check(Py_UCS4 codepoint);
UINT32 lookup_noncharacter_code_point(Py_UCS4 codepoint);
UINT32 lookup_numeric_type(Py_UCS4 codepoint);
UINT32 lookup_numeric_value(Py_UCS4 codepoint);
UINT32 lookup_other_alphabetic(Py_UCS4 codepoint);
UINT32 lookup_other_default_ignorable_code_point(Py_UCS4 codepoint);
UINT32 lookup_other_grapheme_extend(Py_UCS4 codepoint);
UINT32 lookup_other_id_continue(Py_UCS4 codepoint);
UINT32 lookup_other_id_start(Py_UCS4 codepoint);
UINT32 lookup_other_lowercase(Py_UCS4 codepoint);
UINT32 lookup_other_math(Py_UCS4 codepoint);
UINT32 lookup_other_uppercase(Py_UCS4 codepoint);
UINT32 lookup_pattern_syntax(Py_UCS4 codepoint);
UINT32 lookup_pattern_white_space(Py_UCS4 codepoint);
UINT32 lookup_posix_alphanumeric(Py_UCS4 codepoint);
UINT32 lookup_posix_digit(Py_UCS4 codepoint);
UINT32 lookup_posix_punct(Py_UCS4 codepoint);
UINT32 lookup_posix_xdigit(Py_UCS4 codepoint);
UINT32 lookup_prepended_concatenation_mark(Py_UCS4 codepoint);
UINT32 lookup_print(Py_UCS4 codepoint);
UINT32 lookup_punct(Py_UCS4 codepoint);
UINT32 lookup_quotation_mark(Py_UCS4 codepoint);
UINT32 lookup_radical(Py_UCS4 codepoint);
UINT32 lookup_regional_indicator(Py_UCS4 codepoint);
UINT32 lookup_script(Py_UCS4 codepoint);
UINT32 lookup_sentence_break(Py_UCS4 codepoint);
UINT32 lookup_sentence_terminal(Py_UCS4 codepoint);
UINT32 lookup_soft_dotted(Py_UCS4 codepoint);
UINT32 lookup_terminal_punctuation(Py_UCS4 codepoint);
UINT32 lookup_unified_ideograph(Py_UCS4 codepoint);
UINT32 lookup_uppercase(Py_UCS4 codepoint);
UINT32 lookup_variation_selector(Py_UCS4 codepoint);
UINT32 lookup_white_space(Py_UCS4 codepoint);
UINT32 lookup_word(Py_UCS4 codepoint);
UINT32 lookup_word_break(Py_UCS4 codepoint);
UINT32 lookup_xdigit(Py_UCS4 codepoint);
UINT32 lookup_xid_continue(Py_UCS4 codepoint);
UINT32 lookup_xid_start(Py_UCS4 codepoint);
