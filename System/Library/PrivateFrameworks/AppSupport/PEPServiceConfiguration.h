//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PEPServiceConfiguration : NSObject
{
    NSString *_cacheFilePath;	// 8 = 0x8
    _Bool _shouldDownloadNetworkConfigFile;	// 16 = 0x10
    double _cachedFileLastModifyDate;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000001d0f1
- (_Bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000000001d843
- (_Bool)registerNetworkDefaultsForAppID:(id)arg1;	// IMP=0x000000000001d809
- (void)_updateDefaults:(id)arg1;	// IMP=0x000000000001d20d
- (void)_postNotification;	// IMP=0x000000000001d1ae
- (void)dealloc;	// IMP=0x000000000001d173
- (id)init;	// IMP=0x000000000001d116

@end
