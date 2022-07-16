//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSMutableCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>
#import <PersonalizationPortrait/PPRecord-Protocol.h>

@class NSArray, NSSet, NSString, NSUUID, PPLocation, PPSource;

@interface PPLocationRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>
{
    NSUUID *_uuid;	// 8 = 0x8
    PPLocation *_location;	// 16 = 0x10
    PPSource *_source;	// 24 = 0x18
    unsigned char _algorithm;	// 32 = 0x20
    float _initialScore;	// 36 = 0x24
    float _decayRate;	// 40 = 0x28
    NSArray *_contextualNamedEntities;	// 48 = 0x30
    NSString *_extractionOsBuild;	// 56 = 0x38
    unsigned int _extractionAssetVersion;	// 64 = 0x40
    BOOL _bucketizedSentimentScore;	// 68 = 0x44
    _Bool _isAmbiguous;	// 69 = 0x45
}

+ (id)algorithmForName:(id)arg1;	// IMP=0x000000000002f0a4
+ (id)describeAlgorithm:(unsigned short)arg1;	// IMP=0x000000000002ef6d
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002ef65
+ (id)sharedAmbiguousRecord;	// IMP=0x000000000002ef02
- (void).cxx_destruct;	// IMP=0x000000000002e7b1
@property(readonly, nonatomic) _Bool isAmbiguous; // @synthesize isAmbiguous=_isAmbiguous;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) NSArray *contextualNamedEntities; // @synthesize contextualNamedEntities=_contextualNamedEntities;
- (id)identifier;	// IMP=0x000000000002e77e
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000002e45c
@property(readonly, nonatomic) NSSet *featureNames;
- (id)description;	// IMP=0x000000000002e2f4
@property(readonly, nonatomic) unsigned int extractionAssetVersion;
@property(readonly, nonatomic) double sentimentScore;
@property(readonly, nonatomic) double decayRate;
@property(readonly, nonatomic) double initialScore;
@property(readonly, nonatomic) unsigned short algorithm;
@property(readonly, nonatomic) PPSource *source;
@property(readonly, nonatomic) PPLocation *location;
@property(readonly, nonatomic) NSUUID *uuid;
- (unsigned long long)hash;	// IMP=0x000000000002e11f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e0a0
- (_Bool)isEqualToLocationRecord:(id)arg1;	// IMP=0x000000000002de3a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002dd0e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002da87
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d932
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d927
- (void)supplementFieldsWithClusterID:(id)arg1 locationWithLatLong:(id)arg2;	// IMP=0x000000000002d4cb
- (id)initAmbiguousRecord;	// IMP=0x000000000002d493
- (id)init;	// IMP=0x000000000002d48d
- (id)init_;	// IMP=0x000000000002d45e

@end
