//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/NSCopying-Protocol.h>

@class NSString;

@interface TVSUIApplicationProxyLifetimeCacheKey : NSObject <NSCopying>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    NSString *_bundlePathHash;	// 16 = 0x10
    double _lastModifiedDate;	// 24 = 0x18
}

+ (id)cacheKeyForProxy:(id)arg1;	// IMP=0x00000000000049c3
- (void).cxx_destruct;	// IMP=0x0000000000004d31
@property(readonly, nonatomic) double lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSString *bundlePathHash; // @synthesize bundlePathHash=_bundlePathHash;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004c84
- (unsigned long long)hash;	// IMP=0x0000000000004c6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004bb1
@property(readonly, copy, nonatomic) NSString *filesystemSafeKeyName;
- (id)_init;	// IMP=0x0000000000004994
- (id)init;	// IMP=0x0000000000004986

@end

