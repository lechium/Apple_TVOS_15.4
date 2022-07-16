//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPrivateMediaItemValueData-Protocol.h>

@class NSArray, NSString;

@interface _INPBPrivateMediaItemValueData : PBCodable <_INPBPrivateMediaItemValueData, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int ampConfidenceLevel:1;
        unsigned int ampConfidenceScore:1;
        unsigned int isAvailable:1;
        unsigned int isHardBan:1;
        unsigned int requiresSubscription:1;
    } _has;	// 8 = 0x8
    _Bool _isAvailable;	// 12 = 0xc
    _Bool _isHardBan;	// 13 = 0xd
    _Bool _requiresSubscription;	// 14 = 0xe
    int _ampConfidenceLevel;	// 16 = 0x10
    float _ampConfidenceScore;	// 20 = 0x14
    NSString *_assetInfo;	// 24 = 0x18
    NSString *_bundleId;	// 32 = 0x20
    NSArray *_internalSignals;	// 40 = 0x28
    NSArray *_mediaSubItems;	// 48 = 0x30
    NSString *_provider;	// 56 = 0x38
    NSString *_providerAppName;	// 64 = 0x40
    NSString *_punchoutURI;	// 72 = 0x48
    NSString *_recommendationId;	// 80 = 0x50
    NSString *_sharedUserIdFromPlayableMusicAccount;	// 88 = 0x58
    NSString *_universalResourceLink;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000433591
+ (Class)mediaSubItemsType;	// IMP=0x0000000000433580
- (void).cxx_destruct;	// IMP=0x0000000000432e53
@property(copy, nonatomic) NSString *universalResourceLink; // @synthesize universalResourceLink=_universalResourceLink;
@property(copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount; // @synthesize sharedUserIdFromPlayableMusicAccount=_sharedUserIdFromPlayableMusicAccount;
@property(nonatomic) _Bool requiresSubscription; // @synthesize requiresSubscription=_requiresSubscription;
@property(copy, nonatomic) NSString *recommendationId; // @synthesize recommendationId=_recommendationId;
@property(copy, nonatomic) NSString *punchoutURI; // @synthesize punchoutURI=_punchoutURI;
@property(copy, nonatomic) NSString *providerAppName; // @synthesize providerAppName=_providerAppName;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSArray *mediaSubItems; // @synthesize mediaSubItems=_mediaSubItems;
@property(nonatomic) _Bool isHardBan; // @synthesize isHardBan=_isHardBan;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(copy, nonatomic) NSArray *internalSignals; // @synthesize internalSignals=_internalSignals;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(nonatomic) float ampConfidenceScore; // @synthesize ampConfidenceScore=_ampConfidenceScore;
@property(nonatomic) int ampConfidenceLevel; // @synthesize ampConfidenceLevel=_ampConfidenceLevel;
- (id)dictionaryRepresentation;	// IMP=0x000000000043252b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004314cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000043116a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004310d8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000430fd9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000430ad5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000430ac8
@property(readonly, nonatomic) _Bool hasUniversalResourceLink;
@property(readonly, nonatomic) _Bool hasSharedUserIdFromPlayableMusicAccount;
@property(nonatomic) _Bool hasRequiresSubscription;
@property(readonly, nonatomic) _Bool hasRecommendationId;
@property(readonly, nonatomic) _Bool hasPunchoutURI;
@property(readonly, nonatomic) _Bool hasProviderAppName;
@property(readonly, nonatomic) _Bool hasProvider;
- (id)mediaSubItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004308aa
@property(readonly, nonatomic) unsigned long long mediaSubItemsCount;
- (void)addMediaSubItems:(id)arg1;	// IMP=0x0000000000430813
- (void)clearMediaSubItems;	// IMP=0x00000000004307f6
@property(nonatomic) _Bool hasIsHardBan;
@property(nonatomic) _Bool hasIsAvailable;
- (id)internalSignalAtIndex:(unsigned long long)arg1;	// IMP=0x000000000043070f
@property(readonly, nonatomic) unsigned long long internalSignalsCount;
- (void)addInternalSignal:(id)arg1;	// IMP=0x0000000000430678
- (void)clearInternalSignals;	// IMP=0x000000000043065b
@property(readonly, nonatomic) _Bool hasBundleId;
@property(readonly, nonatomic) _Bool hasAssetInfo;
@property(nonatomic) _Bool hasAmpConfidenceScore;
- (int)StringAsAmpConfidenceLevel:(id)arg1;	// IMP=0x0000000000430495
- (id)ampConfidenceLevelAsString:(int)arg1;	// IMP=0x0000000000430419
@property(nonatomic) _Bool hasAmpConfidenceLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

