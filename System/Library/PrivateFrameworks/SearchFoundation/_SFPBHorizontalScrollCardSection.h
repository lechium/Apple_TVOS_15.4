//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBHorizontalScrollCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@interface _SFPBHorizontalScrollCardSection : PBCodable <_SFPBHorizontalScrollCardSection, NSSecureCoding>
{
    _Bool _canBeHidden;	// 8 = 0x8
    _Bool _hasTopPadding;	// 9 = 0x9
    _Bool _hasBottomPadding;	// 10 = 0xa
    int _separatorStyle;	// 12 = 0xc
    NSArray *_punchoutOptions;	// 16 = 0x10
    NSString *_punchoutPickerTitle;	// 24 = 0x18
    NSString *_punchoutPickerDismissText;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    _SFPBColor *_backgroundColor;	// 48 = 0x30
    NSArray *_cardSections;	// 56 = 0x38
    unsigned long long _numberOfRows;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000f3ba7
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000f3282
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000f31c4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f2872
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f1f93
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f1bdc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f1bcf
- (id)cardSectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f1ba1
- (unsigned long long)cardSectionsCount;	// IMP=0x00000000000f1b84
- (void)addCardSections:(id)arg1;	// IMP=0x00000000000f1b0a
- (void)clearCardSections;	// IMP=0x00000000000f1aed
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f19ac
- (unsigned long long)punchoutOptionsCount;	// IMP=0x00000000000f198f
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x00000000000f1915
- (void)clearPunchoutOptions;	// IMP=0x00000000000f18f8
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001b289d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

