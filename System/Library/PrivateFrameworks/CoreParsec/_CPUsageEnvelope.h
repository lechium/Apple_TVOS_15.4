//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPUsageEnvelope-Protocol.h>

@class NSData, NSString, _CPDeviceContext, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@interface _CPUsageEnvelope : PBCodable <_CPUsageEnvelope, NSSecureCoding>
{
    int _configuredLookbackTimeInDays;	// 8 = 0x8
    int _totalSessions;	// 12 = 0xc
    _CPUsageSinceLookback *_usageSinceLookback;	// 16 = 0x10
    _CPSafariUsagePropensity *_safariUsagePropensity;	// 24 = 0x18
    _CPSpotlightUsagePropensity *_spotlightUsagePropensity;	// 32 = 0x20
    _CPImagesUsagePropensity *_imagesUsagePropensity;	// 40 = 0x28
    _CPNewsUsagePropensity *_newsUsagePropensity;	// 48 = 0x30
    long long _collectionStartTimestamp;	// 56 = 0x38
    long long _collectionEndTimestamp;	// 64 = 0x40
    _CPDeviceContext *_context;	// 72 = 0x48
    NSData *_uuidBytes;	// 80 = 0x50
    unsigned long long _whichKind;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000044336
@property(readonly, nonatomic) unsigned long long whichKind; // @synthesize whichKind=_whichKind;
@property(copy, nonatomic) NSData *uuidBytes; // @synthesize uuidBytes=_uuidBytes;
@property(retain, nonatomic) _CPDeviceContext *context; // @synthesize context=_context;
@property(nonatomic) int totalSessions; // @synthesize totalSessions=_totalSessions;
@property(nonatomic) int configuredLookbackTimeInDays; // @synthesize configuredLookbackTimeInDays=_configuredLookbackTimeInDays;
@property(nonatomic) long long collectionEndTimestamp; // @synthesize collectionEndTimestamp=_collectionEndTimestamp;
@property(nonatomic) long long collectionStartTimestamp; // @synthesize collectionStartTimestamp=_collectionStartTimestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004393c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000435f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000435e9
@property(retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity; // @synthesize newsUsagePropensity=_newsUsagePropensity;
@property(retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity; // @synthesize imagesUsagePropensity=_imagesUsagePropensity;
@property(retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity; // @synthesize spotlightUsagePropensity=_spotlightUsagePropensity;
@property(retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity; // @synthesize safariUsagePropensity=_safariUsagePropensity;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // @synthesize usageSinceLookback=_usageSinceLookback;
- (void)clearKind;	// IMP=0x000000000004322c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

