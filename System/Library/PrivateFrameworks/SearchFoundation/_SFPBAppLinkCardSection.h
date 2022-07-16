//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBAppLinkCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@interface _SFPBAppLinkCardSection : PBCodable <_SFPBAppLinkCardSection, NSSecureCoding>
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
    NSString *_title;	// 56 = 0x38
    NSString *_subtitle;	// 64 = 0x40
    NSArray *_appLinks;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000007e184
@property(copy, nonatomic) NSArray *appLinks; // @synthesize appLinks=_appLinks;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000007d7b2
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000007d6f4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007cd4c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007c26e
- (void)writeTo:(id)arg1;	// IMP=0x000000000007be6f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007be62
- (id)appLinksAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007be45
- (unsigned long long)appLinksCount;	// IMP=0x000000000007be28
- (void)addAppLinks:(id)arg1;	// IMP=0x000000000007bdae
- (void)clearAppLinks;	// IMP=0x000000000007bd91
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007bbe8
- (unsigned long long)punchoutOptionsCount;	// IMP=0x000000000007bbcb
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x000000000007bb51
- (void)clearPunchoutOptions;	// IMP=0x000000000007bb34
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001aa54b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

