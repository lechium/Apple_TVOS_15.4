//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying>
{
    unsigned long long _cachedHash;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    RERelevanceProviderEnvironment *_environment;	// 24 = 0x18
}

+ (id)relevanceSimulatorID;	// IMP=0x00000000000af5b0
+ (id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000000af505
- (void).cxx_destruct;	// IMP=0x00000000000af739
- (id)environment;	// IMP=0x00000000000af723
- (void)setEnvironment:(id)arg1;	// IMP=0x00000000000af712
- (unsigned long long)hash;	// IMP=0x00000000000af6cf
- (unsigned long long)_hash;	// IMP=0x00000000000af6c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000af66a
- (id)providerWithPriority:(unsigned long long)arg1;	// IMP=0x00000000000af63a
- (unsigned long long)relevancePriority;	// IMP=0x00000000000af630
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af5dc
- (id)dictionaryEncoding;	// IMP=0x00000000000af5cf
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000af5bd
- (id)init;	// IMP=0x00000000000af571

@end

