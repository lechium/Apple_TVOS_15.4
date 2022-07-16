//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCollectionCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBCollectionStyle, _SFPBColor, _SFPBCommandButtonItem, _SFPBRichText;

@interface _SFPBCollectionCardSection : PBCodable <_SFPBCollectionCardSection, NSSecureCoding>
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
    _SFPBRichText *_title;	// 64 = 0x40
    _SFPBCommandButtonItem *_buttonItem;	// 72 = 0x48
    _SFPBCollectionStyle *_collectionStyle;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000d8096
@property(retain, nonatomic) _SFPBCollectionStyle *collectionStyle; // @synthesize collectionStyle=_collectionStyle;
@property(retain, nonatomic) _SFPBCommandButtonItem *buttonItem; // @synthesize buttonItem=_buttonItem;
@property(retain, nonatomic) _SFPBRichText *title; // @synthesize title=_title;
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
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d763a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000d757c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000d6a82
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d5e8e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d5a4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d5a40
- (id)cardSectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d59e7
- (unsigned long long)cardSectionsCount;	// IMP=0x00000000000d59ca
- (void)addCardSections:(id)arg1;	// IMP=0x00000000000d5950
- (void)clearCardSections;	// IMP=0x00000000000d5933
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d57f2
- (unsigned long long)punchoutOptionsCount;	// IMP=0x00000000000d57d5
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x00000000000d575b
- (void)clearPunchoutOptions;	// IMP=0x00000000000d573e
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000000203ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

