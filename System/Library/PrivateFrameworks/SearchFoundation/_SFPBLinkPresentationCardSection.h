//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBLinkPresentationCardSection-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBLinkPresentationCardSection : PBCodable <_SFPBLinkPresentationCardSection, NSSecureCoding>
{
    _Bool _isHighlighted;	// 8 = 0x8
    NSString *_coreSpotlightIdentifier;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    NSArray *_peopleToBadges;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e43cd
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(copy, nonatomic) NSArray *peopleToBadges; // @synthesize peopleToBadges=_peopleToBadges;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier; // @synthesize coreSpotlightIdentifier=_coreSpotlightIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e3f9e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e3ee0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e3ab5
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e3668
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e3490
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e3483
- (id)peopleToBadgeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e3456
- (unsigned long long)peopleToBadgeCount;	// IMP=0x00000000000e3439
- (void)addPeopleToBadge:(id)arg1;	// IMP=0x00000000000e33bf
- (void)clearPeopleToBadge;	// IMP=0x00000000000e33a2
- (void)setPeopleToBadge:(id)arg1;	// IMP=0x00000000000e336e
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001f186f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

