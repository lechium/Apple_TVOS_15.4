//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVKit/NSCopying-Protocol.h>

@class NSString;

@interface TVApplicationProxyIconCacheKey : NSObject <NSCopying>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    NSString *_lifetimeCacheKeyString;	// 16 = 0x10
    NSString *_applicationIconName;	// 24 = 0x18
}

+ (id)iconCacheKeyForProxy:(id)arg1;	// IMP=0x0000000000035077
- (void).cxx_destruct;	// IMP=0x0000000000035425
@property(copy, nonatomic) NSString *applicationIconName; // @synthesize applicationIconName=_applicationIconName;
@property(copy, nonatomic) NSString *lifetimeCacheKeyString; // @synthesize lifetimeCacheKeyString=_lifetimeCacheKeyString;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035351
- (unsigned long long)hash;	// IMP=0x000000000003533b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003526b
@property(readonly, copy, nonatomic) NSString *filesystemSafeKeyName;
- (id)_init;	// IMP=0x0000000000035048
- (id)init;	// IMP=0x000000000003503a

@end

