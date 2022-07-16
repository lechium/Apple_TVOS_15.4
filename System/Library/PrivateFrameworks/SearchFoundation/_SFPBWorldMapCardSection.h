//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBWorldMapCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBLatLng;

@interface _SFPBWorldMapCardSection : PBCodable <_SFPBWorldMapCardSection, NSSecureCoding>
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
    _SFPBLatLng *_pinLocation;	// 56 = 0x38
    NSString *_highlightedTimeZoneName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000eb296
@property(copy, nonatomic) NSString *highlightedTimeZoneName; // @synthesize highlightedTimeZoneName=_highlightedTimeZoneName;
@property(retain, nonatomic) _SFPBLatLng *pinLocation; // @synthesize pinLocation=_pinLocation;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000eaaae
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000ea9f0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000ea1f0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e9828
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e94f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e94ec
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e9397
- (unsigned long long)punchoutOptionsCount;	// IMP=0x00000000000e937a
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x00000000000e9300
- (void)clearPunchoutOptions;	// IMP=0x00000000000e92e3
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000186d05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

