//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileAsset/NSSecureCoding-Protocol.h>

@class NSString;

@interface MAAssetDiff : NSObject <NSSecureCoding>
{
    unsigned long long _diffRaw;	// 8 = 0x8
    unsigned long long _diff;	// 16 = 0x10
    unsigned long long _mask;	// 24 = 0x18
    NSString *_description;	// 32 = 0x20
    NSString *_assessment;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000155c0
+ (id)allowEverythingDifferent;	// IMP=0x00000000000155ac
+ (id)requireSameAssetTypeAndAllAttributes;	// IMP=0x00000000000155a0
+ (id)requireSameAssetTypeAndDownloadContent;	// IMP=0x0000000000015589
+ (id)requireSameAssetTypeAndAssetId;	// IMP=0x0000000000015572
- (id)description;	// IMP=0x000000000001599c
- (id)summary;	// IMP=0x000000000001598e
- (unsigned long long)category;	// IMP=0x0000000000015984
- (_Bool)hasOnlyAllowedDifferences:(id)arg1;	// IMP=0x0000000000015940
- (_Bool)isSameDownloadPolicy;	// IMP=0x000000000001592a
- (_Bool)isSameDownloadUrl;	// IMP=0x0000000000015914
- (_Bool)isSameDownloadContent;	// IMP=0x00000000000158fe
- (_Bool)isSameForNonAssetIdAttributes;	// IMP=0x00000000000158e8
- (_Bool)isSameAssetId;	// IMP=0x00000000000158d2
- (_Bool)isSameForAllAttributes;	// IMP=0x00000000000158bc
- (_Bool)isSameAssetType;	// IMP=0x00000000000158a6
- (_Bool)isAnythingDifferent;	// IMP=0x0000000000015895
- (id)initFromInverseOfCategories:(unsigned long long)arg1;	// IMP=0x000000000001586b
- (id)initFromDiff:(unsigned long long)arg1;	// IMP=0x000000000001580c
- (id)initDifferentAssetType:(_Bool)arg1 assetId:(_Bool)arg2 attributes:(_Bool)arg3 assetIdAttributes:(_Bool)arg4 dynamicAssetId:(_Bool)arg5 nonIdAttributes:(_Bool)arg6 content:(_Bool)arg7 url:(_Bool)arg8 policy:(_Bool)arg9;	// IMP=0x000000000001570d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001568c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000155c8

@end

