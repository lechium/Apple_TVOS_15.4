//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PurchaseManifest : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

+ (id)_sharedManifestWithManifestType:(long long)arg1;	// IMP=0x004000000000f9bc
+ (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f800
+ (void)removeItemWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000000f587
+ (void)rebuildWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000000f4bb
+ (void)observeXPCServer:(id)arg1;	// IMP=0x001000000000f447
+ (void)getPathsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000000f07c
+ (id)sharedManifestForDownloadKind:(id)arg1;	// IMP=0x001000000000cd45
+ (void)jetsam;	// IMP=0x001000000000cce2
- (_Bool)_writeToFile;	// IMP=0x002000000000fd58
- (id)_dictionary;	// IMP=0x001000000000f9f0
- (id)removeItemsWithAssetPaths:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000df1a
- (void)rebuildManifest;	// IMP=0x001000000000d62d
@property(readonly) NSArray *purchaseManifestItems;
@property(readonly) NSString *path;
- (void)jetsam;	// IMP=0x001000000000d387
- (void)addCompletedItem:(id)arg1;	// IMP=0x001000000000cf84
- (void)dealloc;	// IMP=0x001000000000cc8f
- (id)initWithPurchaseDirectory:(id)arg1;	// IMP=0x001000000000cbbc
- (id)init;	// IMP=0x001000000000cba8

@end

