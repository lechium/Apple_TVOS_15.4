//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class PLPrefetchConfiguration;

@interface PLCloudResourcePrefetchPredicateOptions : NSObject <NSCopying>
{
    _Bool _excludeDynamicResources;	// 8 = 0x8
    long long _prefetchMode;	// 16 = 0x10
    long long _prefetchOptimizeMode;	// 24 = 0x18
    PLPrefetchConfiguration *_prefetchConfiguration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004a1688
@property(retain, nonatomic) PLPrefetchConfiguration *prefetchConfiguration; // @synthesize prefetchConfiguration=_prefetchConfiguration;
@property(nonatomic) _Bool excludeDynamicResources; // @synthesize excludeDynamicResources=_excludeDynamicResources;
@property(nonatomic) long long prefetchOptimizeMode; // @synthesize prefetchOptimizeMode=_prefetchOptimizeMode;
@property(nonatomic) long long prefetchMode; // @synthesize prefetchMode=_prefetchMode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004a1589
- (id)initWithPrefetchMode:(long long)arg1 prefetchOptimizeMode:(long long)arg2 excludeDynamicResources:(_Bool)arg3 prefetchConfiguration:(id)arg4;	// IMP=0x00000000004a14f8

@end
