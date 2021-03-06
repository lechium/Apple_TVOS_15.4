//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSSet, NSString, PPTopicRecord;

@interface PPTopic : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>
{
    NSString *_topicIdentifier;	// 8 = 0x8
    NSString *_clusterIdentifier;	// 16 = 0x10
}

+ (id)clusterIdentifierFromTopicId:(id)arg1;	// IMP=0x00000000000569e2
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000569da
- (void).cxx_destruct;	// IMP=0x00000000000554c8
@property(readonly, nonatomic) NSString *clusterIdentifier; // @synthesize clusterIdentifier=_clusterIdentifier;
@property(readonly, nonatomic) NSString *topicIdentifier; // @synthesize topicIdentifier=_topicIdentifier;
- (id)id;	// IMP=0x00000000000554a6
- (id)initWithId:(id)arg1;	// IMP=0x0000000000055494
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000005543b
@property(readonly, nonatomic) NSSet *featureNames;
@property(readonly, nonatomic) double sentimentScore;
- (id)description;	// IMP=0x00000000000553c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005535b
- (_Bool)isEqualToTopic:(id)arg1;	// IMP=0x00000000000552a8
- (unsigned long long)hash;	// IMP=0x0000000000055292
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055287
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000551f7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000055116
@property(readonly, nonatomic) PPTopicRecord *mostRelevantRecord;
- (id)initWithTopicIdentifier:(id)arg1;	// IMP=0x00000000000550fa
- (id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2;	// IMP=0x0000000000054f8c

@end

