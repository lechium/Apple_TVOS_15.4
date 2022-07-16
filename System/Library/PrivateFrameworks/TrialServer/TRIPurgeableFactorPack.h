//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSSet, NSString;
@protocol TRIFactorPackId;

@interface TRIPurgeableFactorPack : NSObject <NSCopying>
{
    NSString<TRIFactorPackId> *_factorPackId;	// 8 = 0x8
    NSString *_namespaceName;	// 16 = 0x10
    NSSet *_purgeableAssetFactorNames;	// 24 = 0x18
}

+ (id)packWithFactorPackId:(id)arg1 namespaceName:(id)arg2 purgeableAssetFactorNames:(id)arg3;	// IMP=0x000000000001009c
- (void).cxx_destruct;	// IMP=0x0000000000010528
@property(readonly, nonatomic) NSSet *purgeableAssetFactorNames; // @synthesize purgeableAssetFactorNames=_purgeableAssetFactorNames;
@property(readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
@property(readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId; // @synthesize factorPackId=_factorPackId;
- (id)init;	// IMP=0x0000000000010504
- (id)description;	// IMP=0x00000000000104bc
- (unsigned long long)hash;	// IMP=0x000000000001045d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000103f5
- (_Bool)isEqualToPack:(id)arg1;	// IMP=0x0000000000010234
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010229
- (id)copyWithReplacementPurgeableAssetFactorNames:(id)arg1;	// IMP=0x00000000000101d4
- (id)copyWithReplacementNamespaceName:(id)arg1;	// IMP=0x000000000001017f
- (id)copyWithReplacementFactorPackId:(id)arg1;	// IMP=0x000000000001012a
- (id)initWithFactorPackId:(id)arg1 namespaceName:(id)arg2 purgeableAssetFactorNames:(id)arg3;	// IMP=0x000000000000fe74

@end

