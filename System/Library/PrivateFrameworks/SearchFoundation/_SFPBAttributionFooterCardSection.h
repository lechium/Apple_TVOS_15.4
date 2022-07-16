//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBAttributionFooterCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBPunchout, _SFPBRichText;

@interface _SFPBAttributionFooterCardSection : PBCodable <_SFPBAttributionFooterCardSection, NSSecureCoding>
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
    _SFPBRichText *_leadingAttribution;	// 56 = 0x38
    _SFPBPunchout *_leadingAttributionPunchout;	// 64 = 0x40
    _SFPBRichText *_trailingAttribution;	// 72 = 0x48
    _SFPBPunchout *_trailingAttributionPunchout;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000084413
@property(retain, nonatomic) _SFPBPunchout *trailingAttributionPunchout; // @synthesize trailingAttributionPunchout=_trailingAttributionPunchout;
@property(retain, nonatomic) _SFPBRichText *trailingAttribution; // @synthesize trailingAttribution=_trailingAttribution;
@property(retain, nonatomic) _SFPBPunchout *leadingAttributionPunchout; // @synthesize leadingAttributionPunchout=_leadingAttributionPunchout;
@property(retain, nonatomic) _SFPBRichText *leadingAttribution; // @synthesize leadingAttribution=_leadingAttribution;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000083ace
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000083a10
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000083063
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008246f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000820ce
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000820c1
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000081f64
- (unsigned long long)punchoutOptionsCount;	// IMP=0x0000000000081f47
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x0000000000081ecd
- (void)clearPunchoutOptions;	// IMP=0x0000000000081eb0
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000000e4b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
