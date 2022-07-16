//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMapPlaceCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@interface _SFPBMapPlaceCardSection : PBCodable <_SFPBMapPlaceCardSection, NSSecureCoding>
{
    _Bool _canBeHidden;	// 8 = 0x8
    _Bool _hasTopPadding;	// 9 = 0x9
    _Bool _hasBottomPadding;	// 10 = 0xa
    _Bool _shouldSearchDirectionsAlongCurrentRoute;	// 11 = 0xb
    int _separatorStyle;	// 12 = 0xc
    NSArray *_punchoutOptions;	// 16 = 0x10
    NSString *_punchoutPickerTitle;	// 24 = 0x18
    NSString *_punchoutPickerDismissText;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    _SFPBColor *_backgroundColor;	// 48 = 0x30
    NSData *_mapsData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000ef6b4
@property(nonatomic) _Bool shouldSearchDirectionsAlongCurrentRoute; // @synthesize shouldSearchDirectionsAlongCurrentRoute=_shouldSearchDirectionsAlongCurrentRoute;
@property(copy, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000eeeda
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000eee1c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000ee61d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000edd3e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000eda23
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000eda16
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ed8c5
- (unsigned long long)punchoutOptionsCount;	// IMP=0x00000000000ed8a8
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x00000000000ed82e
- (void)clearPunchoutOptions;	// IMP=0x00000000000ed811
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001bfa4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
