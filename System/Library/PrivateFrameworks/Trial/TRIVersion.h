//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>

@class NSNumber;

@interface TRIVersion : NSObject <NSCopying>
{
    NSNumber *_majorVersion;	// 8 = 0x8
    NSNumber *_minorVersion;	// 16 = 0x10
    NSNumber *_patchVersion;	// 24 = 0x18
}

+ (id)versionWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;	// IMP=0x000000000003f1d0
+ (id)parseVersionFromString:(id)arg1 withPrefix:(id)arg2;	// IMP=0x000000000002dba0
- (void).cxx_destruct;	// IMP=0x000000000003f65c
@property(readonly, nonatomic) NSNumber *patchVersion; // @synthesize patchVersion=_patchVersion;
@property(readonly, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)init;	// IMP=0x000000000003f638
- (id)description;	// IMP=0x000000000003f5f0
- (unsigned long long)hash;	// IMP=0x000000000003f591
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f529
- (_Bool)isEqualToVersion:(id)arg1;	// IMP=0x000000000003f368
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f35d
- (id)copyWithReplacementPatchVersion:(id)arg1;	// IMP=0x000000000003f308
- (id)copyWithReplacementMinorVersion:(id)arg1;	// IMP=0x000000000003f2b3
- (id)copyWithReplacementMajorVersion:(id)arg1;	// IMP=0x000000000003f25e
- (id)initWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;	// IMP=0x000000000003efa8
- (long long)compare:(id)arg1;	// IMP=0x000000000002e0df

@end

