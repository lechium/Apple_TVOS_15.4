//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NDFileUtilities : NSObject
{
}

+ (_Bool)itemShouldBePurged:(id)arg1;	// IMP=0x00400000000322a6
+ (void)markItemAsPurged:(id)arg1;	// IMP=0x001000000003225a
+ (id)fetchStreamingZipModificationDate:(id)arg1;	// IMP=0x00100000000321d4
+ (void)removeStreamingZipModificationDate:(id)arg1;	// IMP=0x0010000000032172
+ (void)updateStreamingZipModificationDate:(id)arg1;	// IMP=0x00100000000320dc
+ (void)setDaemonWorkState:(_Bool)arg1;	// IMP=0x0010000000031f4c
+ (id)defaultDownloadDirectoryForBundleID:(id)arg1;	// IMP=0x0010000000031eae
+ (id)defaultDownloadDirectoryContainer;	// IMP=0x0010000000031c4a
+ (void)createDirectoryAtURL:(id)arg1;	// IMP=0x0010000000031acc
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x001000000003194e
+ (_Bool)createDataVaultDirectoryAtPath:(id)arg1;	// IMP=0x001000000003149f
+ (void)removeItemAtURL:(id)arg1;	// IMP=0x0010000000031327
+ (void)removeItemAtPath:(id)arg1;	// IMP=0x00100000000311af
+ (id)nsurlsessiondLaunchdPath;	// IMP=0x001000000003113d
+ (id)sessionPath:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0010000000031066
+ (id)bundleManagerPath:(id)arg1;	// IMP=0x0010000000030f95
+ (id)nsurlsessiondPath;	// IMP=0x0010000000030ee7

@end

