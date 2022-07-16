//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/NSCopying-Protocol.h>

@class NSString;

@interface TVSUIApplicationProxyIconCacheKey : NSObject <NSCopying>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    double _displayScale;	// 16 = 0x10
    NSString *_lifetimeCacheKeyString;	// 24 = 0x18
    NSString *_applicationIconName;	// 32 = 0x20
}

+ (id)iconCacheKeyForProxy:(id)arg1;	// IMP=0x0000000000004d96
- (void).cxx_destruct;	// IMP=0x000000000000527d
@property(copy, nonatomic) NSString *applicationIconName; // @synthesize applicationIconName=_applicationIconName;
@property(copy, nonatomic) NSString *lifetimeCacheKeyString; // @synthesize lifetimeCacheKeyString=_lifetimeCacheKeyString;
@property(readonly) double displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005193
- (unsigned long long)hash;	// IMP=0x0000000000005139
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005053
@property(readonly, copy, nonatomic) NSString *filesystemSafeKeyName;
- (id)_init;	// IMP=0x0000000000004d67
- (id)init;	// IMP=0x0000000000004d59

@end

