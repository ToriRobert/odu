/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "NRNRB.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_NRNRB_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_NRNRB_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  28 }	/* (0..28,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NRNRB_value2enum_1[] = {
	{ 0,	5,	"nrb11" },
	{ 1,	5,	"nrb18" },
	{ 2,	5,	"nrb24" },
	{ 3,	5,	"nrb25" },
	{ 4,	5,	"nrb31" },
	{ 5,	5,	"nrb32" },
	{ 6,	5,	"nrb38" },
	{ 7,	5,	"nrb51" },
	{ 8,	5,	"nrb52" },
	{ 9,	5,	"nrb65" },
	{ 10,	5,	"nrb66" },
	{ 11,	5,	"nrb78" },
	{ 12,	5,	"nrb79" },
	{ 13,	5,	"nrb93" },
	{ 14,	6,	"nrb106" },
	{ 15,	6,	"nrb107" },
	{ 16,	6,	"nrb121" },
	{ 17,	6,	"nrb132" },
	{ 18,	6,	"nrb133" },
	{ 19,	6,	"nrb135" },
	{ 20,	6,	"nrb160" },
	{ 21,	6,	"nrb162" },
	{ 22,	6,	"nrb189" },
	{ 23,	6,	"nrb216" },
	{ 24,	6,	"nrb217" },
	{ 25,	6,	"nrb245" },
	{ 26,	6,	"nrb264" },
	{ 27,	6,	"nrb270" },
	{ 28,	6,	"nrb273" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NRNRB_enum2value_1[] = {
	14,	/* nrb106(14) */
	15,	/* nrb107(15) */
	0,	/* nrb11(0) */
	16,	/* nrb121(16) */
	17,	/* nrb132(17) */
	18,	/* nrb133(18) */
	19,	/* nrb135(19) */
	20,	/* nrb160(20) */
	21,	/* nrb162(21) */
	1,	/* nrb18(1) */
	22,	/* nrb189(22) */
	23,	/* nrb216(23) */
	24,	/* nrb217(24) */
	2,	/* nrb24(2) */
	25,	/* nrb245(25) */
	3,	/* nrb25(3) */
	26,	/* nrb264(26) */
	27,	/* nrb270(27) */
	28,	/* nrb273(28) */
	4,	/* nrb31(4) */
	5,	/* nrb32(5) */
	6,	/* nrb38(6) */
	7,	/* nrb51(7) */
	8,	/* nrb52(8) */
	9,	/* nrb65(9) */
	10,	/* nrb66(10) */
	11,	/* nrb78(11) */
	12,	/* nrb79(12) */
	13	/* nrb93(13) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_NRNRB_specs_1 = {
	asn_MAP_NRNRB_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NRNRB_enum2value_1,	/* N => "tag"; sorted by N */
	29,	/* Number of elements in the maps */
	30,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NRNRB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NRNRB = {
	"NRNRB",
	"NRNRB",
	&asn_OP_NativeEnumerated,
	asn_DEF_NRNRB_tags_1,
	sizeof(asn_DEF_NRNRB_tags_1)
		/sizeof(asn_DEF_NRNRB_tags_1[0]), /* 1 */
	asn_DEF_NRNRB_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRNRB_tags_1)
		/sizeof(asn_DEF_NRNRB_tags_1[0]), /* 1 */
	{ &asn_OER_type_NRNRB_constr_1, &asn_PER_type_NRNRB_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NRNRB_specs_1	/* Additional specs */
};

