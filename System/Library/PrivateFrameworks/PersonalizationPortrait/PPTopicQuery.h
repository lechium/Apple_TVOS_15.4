//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _scoreWithBiases;	// 8 = 0x8
    _Bool _scoreWithStrictFiltering;	// 9 = 0x9
    _Bool _excludeWithoutSentiment;	// 10 = 0xa
    _Bool _scoreWithCalibration;	// 11 = 0xb
    _Bool _orderByIdentifier;	// 12 = 0xc
    _Bool _removeNearDuplicates;	// 13 = 0xd
    _Bool _filterByRelevanceDate;	// 14 = 0xe
    unsigned long long _limit;	// 16 = 0x10
    NSDate *_fromDate;	// 24 = 0x18
    NSDate *_toDate;	// 32 = 0x20
    NSDate *_scoringDate;	// 40 = 0x28
    NSSet *_matchingSourceBundleIds;	// 48 = 0x30
    NSSet *_excludingSourceBundleIds;	// 56 = 0x38
    NSSet *_matchingGroupIds;	// 64 = 0x40
    NSSet *_matchingDocumentIds;	// 72 = 0x48
    unsigned long long _deviceFilter;	// 80 = 0x50
    double _decayRate;	// 88 = 0x58
    NSSet *_matchingTopicIds;	// 96 = 0x60
    NSSet *_matchingMappedTopicIds;	// 104 = 0x68
    NSString *_matchingContactHandle;	// 112 = 0x70
    unsigned long long _minimumComponentCount;	// 120 = 0x78
    NSSet *_matchingAlgorithms;	// 128 = 0x80
    NSSet *_excludingAlgorithms;	// 136 = 0x88
    NSString *_matchingTopicTrie;	// 144 = 0x90
}

+ (id)_algorithmsDescription:(id)arg1;	// IMP=0x000000000001f671
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f669
+ (id)queryForCSSearchableItem:(id)arg1;	// IMP=0x000000000001f47f
- (void).cxx_destruct;	// IMP=0x000000000001f3d5
@property(nonatomic) _Bool filterByRelevanceDate; // @synthesize filterByRelevanceDate=_filterByRelevanceDate;
@property(nonatomic) _Bool removeNearDuplicates; // @synthesize removeNearDuplicates=_removeNearDuplicates;
@property(nonatomic) _Bool orderByIdentifier; // @synthesize orderByIdentifier=_orderByIdentifier;
@property(retain, nonatomic) NSString *matchingTopicTrie; // @synthesize matchingTopicTrie=_matchingTopicTrie;
@property(retain, nonatomic) NSSet *excludingAlgorithms; // @synthesize excludingAlgorithms=_excludingAlgorithms;
@property(retain, nonatomic) NSSet *matchingAlgorithms; // @synthesize matchingAlgorithms=_matchingAlgorithms;
@property(nonatomic) unsigned long long minimumComponentCount; // @synthesize minimumComponentCount=_minimumComponentCount;
@property(nonatomic) _Bool scoreWithCalibration; // @synthesize scoreWithCalibration=_scoreWithCalibration;
@property(retain, nonatomic) NSString *matchingContactHandle; // @synthesize matchingContactHandle=_matchingContactHandle;
@property(nonatomic) _Bool excludeWithoutSentiment; // @synthesize excludeWithoutSentiment=_excludeWithoutSentiment;
@property(nonatomic) _Bool scoreWithStrictFiltering; // @synthesize scoreWithStrictFiltering=_scoreWithStrictFiltering;
@property(retain, nonatomic) NSSet *matchingMappedTopicIds; // @synthesize matchingMappedTopicIds=_matchingMappedTopicIds;
@property(retain, nonatomic) NSSet *matchingTopicIds; // @synthesize matchingTopicIds=_matchingTopicIds;
@property(nonatomic) _Bool scoreWithBiases; // @synthesize scoreWithBiases=_scoreWithBiases;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *matchingDocumentIds; // @synthesize matchingDocumentIds=_matchingDocumentIds;
@property(retain, nonatomic) NSSet *matchingGroupIds; // @synthesize matchingGroupIds=_matchingGroupIds;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)customizedDescription;	// IMP=0x000000000001e866
- (id)description;	// IMP=0x000000000001e648
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e5e1
- (_Bool)isEqualToTopicQuery:(id)arg1;	// IMP=0x000000000001df9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ddb3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001db77
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d6ce
- (id)init;	// IMP=0x000000000001d670
@property(nonatomic) _Bool overrideDecayRate;

@end

