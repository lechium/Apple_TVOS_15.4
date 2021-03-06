//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBScoreboardCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBSportsTeam;

@interface _SFPBScoreboardCardSection : PBCodable <_SFPBScoreboardCardSection, NSSecureCoding>
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
    _SFPBSportsTeam *_team1;	// 72 = 0x48
    _SFPBSportsTeam *_team2;	// 80 = 0x50
    NSString *_accessibilityDescription;	// 88 = 0x58
    NSString *_eventStatus;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000131ec0
@property(copy, nonatomic) NSString *eventStatus; // @synthesize eventStatus=_eventStatus;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(retain, nonatomic) _SFPBSportsTeam *team2; // @synthesize team2=_team2;
@property(retain, nonatomic) _SFPBSportsTeam *team1; // @synthesize team1=_team1;
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
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000131492
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001313d4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001309e9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012fbc6
- (void)writeTo:(id)arg1;	// IMP=0x000000000012f7b3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012f7a6
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012f5a1
- (unsigned long long)punchoutOptionsCount;	// IMP=0x000000000012f584
- (void)addPunchoutOptions:(id)arg1;	// IMP=0x000000000012f50a
- (void)clearPunchoutOptions;	// IMP=0x000000000012f4ed
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001db902

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

