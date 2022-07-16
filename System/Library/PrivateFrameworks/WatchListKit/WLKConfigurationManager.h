//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WLKServerConfigurationResponse, WLKSharedFileStorage;
@protocol OS_dispatch_queue;

@interface WLKConfigurationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 8 = 0x8
    WLKServerConfigurationResponse *_config;	// 16 = 0x10
    WLKSharedFileStorage *_fileCache;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000001bd60
- (void).cxx_destruct;	// IMP=0x000000000001d650
- (id)_stringForCachePolicy:(unsigned long long)arg1;	// IMP=0x000000000001d5f0
- (void)_handleLibraryDidChangeNotification:(id)arg1;	// IMP=0x000000000001d5de
- (void)_invalidateNetworkCache;	// IMP=0x000000000001d492
- (void)_invalidateCache;	// IMP=0x000000000001d3f1
- (void)_setConfig:(id)arg1;	// IMP=0x000000000001d35c
- (id)_config;	// IMP=0x000000000001d322
- (void)_setUtsk:(id)arg1;	// IMP=0x000000000001d0f1
- (id)_utsk;	// IMP=0x000000000001d082
- (id)_configurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3;	// IMP=0x000000000001cebe
- (id)_configuration;	// IMP=0x000000000001cea5
- (void)fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c008
- (void)fetchConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bfec
- (id)init;	// IMP=0x000000000001bfad
- (id)_init;	// IMP=0x000000000001be97

@end

