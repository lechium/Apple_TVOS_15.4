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

@class NSSet, NSString, PPNamedEntity, PPNamedEntityMetadata, PPSource;

@interface PPNamedEntityRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider>
{
    PPNamedEntity *_entity;	// 8 = 0x8
    PPSource *_source;	// 16 = 0x10
    NSString *_extractionOsBuild;	// 24 = 0x18
    float _initialScore;	// 32 = 0x20
    float _decayRate;	// 36 = 0x24
    unsigned int _extractionAssetVersion;	// 40 = 0x28
    unsigned char _algorithm;	// 44 = 0x2c
    unsigned char _changeType;	// 45 = 0x2d
    PPNamedEntityMetadata *_metadata;	// 48 = 0x30
    BOOL _bucketizedSentimentScore;	// 56 = 0x38
}

+ (id)describeChangeType:(unsigned char)arg1;	// IMP=0x0000000000008d20
+ (id)algorithmForName:(id)arg1;	// IMP=0x0000000000008ae0
+ (id)describeAlgorithm:(unsigned long long)arg1;	// IMP=0x0000000000008976
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000896e
- (void).cxx_destruct;	// IMP=0x0000000000008345
@property(readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) PPNamedEntity *entity; // @synthesize entity=_entity;
- (id)identifier;	// IMP=0x0000000000008307
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000008090
@property(readonly, nonatomic) NSSet *featureNames;
- (_Bool)isEqualToNamedEntityRecord:(id)arg1;	// IMP=0x0000000000007e93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007e14
- (unsigned long long)hash;	// IMP=0x0000000000007cbc
- (id)description;	// IMP=0x0000000000007bd2
@property(readonly, nonatomic) PPNamedEntityMetadata *metadata;
@property(readonly, nonatomic) unsigned int extractionAssetVersion;
@property(readonly, nonatomic) double sentimentScore; // @dynamic sentimentScore;
@property(readonly, nonatomic) double decayRate;
@property(readonly, nonatomic) double initialScore;
@property(readonly, nonatomic) unsigned long long algorithm;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007a43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007a38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000790b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000076a7

@end

