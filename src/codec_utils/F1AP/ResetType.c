/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "ResetType.h"

#include "UE-associatedLogicalF1-ConnectionListRes.h"
#include "ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_ResetType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ResetType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ResetType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ResetType, choice.f1_Interface),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResetAll,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"f1-Interface"
		},
	{ ATF_POINTER, 0, offsetof(struct ResetType, choice.partOfF1_Interface),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_associatedLogicalF1_ConnectionListRes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"partOfF1-Interface"
		},
	{ ATF_POINTER, 0, offsetof(struct ResetType, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_4590P1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ResetType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* f1-Interface */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* partOfF1-Interface */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
static asn_CHOICE_specifics_t asn_SPC_ResetType_specs_1 = {
	sizeof(struct ResetType),
	offsetof(struct ResetType, _asn_ctx),
	offsetof(struct ResetType, present),
	sizeof(((struct ResetType *)0)->present),
	asn_MAP_ResetType_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ResetType = {
	"ResetType",
	"ResetType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ResetType_constr_1, &asn_PER_type_ResetType_constr_1, CHOICE_constraint },
	asn_MBR_ResetType_1,
	3,	/* Elements count */
	&asn_SPC_ResetType_specs_1	/* Additional specs */
};

