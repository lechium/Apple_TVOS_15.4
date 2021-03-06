//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTableRowCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBTableAlignmentSchema;

@interface _SFPBTableRowCardSection : PBCodable <_SFPBTableRowCardSection, NSSecureCoding>
{
    _Bool _canBeHidden;	// 8 = 0x8
    _Bool _hasTopPadding;	// 9 = 0x9
    _Bool _hasBottomPadding;	// 10 = 0xa
    _Bool _isSubHeader;	// 11 = 0xb
    _Bool _reducedRowHeight;	// 12 = 0xc
    _Bool _alignRowsToHeader;	// 13 = 0xd
    int _separatorStyle;	// 16 = 0x10
    int _verticalAlign;	// 20 = 0x14
    NSArray *_punchoutOptions;	// 24 = 0x18
    NSString *_punchoutPickerTitle;	// 32 = 0x20
    NSString *_punchoutPickerDismissText;	// 40 = 0x28
    NSString *_type;	// 48 = 0x30
    _SFPBColor *_backgroundColor;	// 56 = 0x38
    NSArray *_richDatas;	// 64 = 0x40
    NSString *_tableIdentifier;	// 72 = 0x48
    _SFPBTableAlignmentSchema *_alignmentSchema;	// 80 = 0x50
    NSArray *_datas;	// 88 = 0x58
    NSString *_tabGroupIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000125dba
@property(nonatomic) _Bool alignRowsToHeader; // @synthesize alignRowsToHeader=_alignRowsToHeader;
@property(nonatomic) int verticalAlign; // @synthesize verticalAlign=_verticalAlign;
@property(nonatomic) _Bool reducedRowHeight; // @synthesize reducedRowHeight=_reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier; // @synthesize tabGroupIdentifier=_tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader; // @synthesize isSubHeader=_isSubHeader;
@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema; // @synthesize alignmentSchema=_alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier; // @synthesize tableIdentifier=_tableIdentifier;
@property(copy, nonatomic) NSArray *richDatas; // @synthesize richDatas=_richDatas;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000124f92
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000124ed4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001240a9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001232ab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000122cfd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000122cf0
- (id)dataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000122c5f
- (unsigned long long)dataCount;	// IMP=0x0000000000122c42
- (void)addData:(id)arg1;	// IMP=0x0000000000122bc8
- (void)clearData;	// IMP=0x0000000000122bab
- (void)setData:(id)arg1;	// IMP=0x0000000000122b77
- (id)richDataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000122b12
- (unsigned long long)richDataCount;	// IMP=0x0000000000122af5
- (void)addRichData:(id)arg1;	// IMP=0x0000000000122a7b
- (void)clearRichData;	// IMP=0x0000000000122a5e
- (void)setRichData:(id)arg1;	// IMP=0x0000000000122a2a
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012291d
- (unsigned long long)punchoutOptionsCount;	// IMP=0x0000000000122900
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x0000000000122886
- (void)clearPunchoutOptions;	// IMP=0x0000000000122869
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001e8270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

