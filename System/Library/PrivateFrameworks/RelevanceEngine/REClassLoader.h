//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray;
@protocol REClassLoaderConfiguration;

@interface REClassLoader : NSObject <NSCopying>
{
    NSArray *_cachedDataSources;	// 8 = 0x8
    NSArray *_cachedBundleConfigurations;	// 16 = 0x10
    struct os_unfair_lock_s _loadingLock;	// 24 = 0x18
    id <REClassLoaderConfiguration> _configuration;	// 32 = 0x20
}

+ (id)groupLoaderWithLoaders:(id)arg1;	// IMP=0x0000000000096afa
+ (id)loaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3;	// IMP=0x0000000000096a65
+ (id)loaderWithBlock:(CDUnknownBlockType)arg1 configuration:(id)arg2;	// IMP=0x00000000000969f5
+ (id)loaderWithObjects:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000096985
- (void).cxx_destruct;	// IMP=0x0000000000097141
@property(readonly, nonatomic) id <REClassLoaderConfiguration> configuration; // @synthesize configuration=_configuration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009712b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097120
- (void)_enumerateBundleConfigurations:(CDUnknownBlockType)arg1;	// IMP=0x000000000009711a
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000097114
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000096f01
- (void)enumerateClassesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000096baf
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000096ba9
- (void)prewarm;	// IMP=0x0000000000096b47
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000009692b
- (id)init;	// IMP=0x00000000000968f0

@end

