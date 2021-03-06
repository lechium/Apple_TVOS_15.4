//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOXPCActivity;
@protocol OS_dispatch_queue;

@interface GEOMobileAssetResourceUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_updateWorkQueue;	// 8 = 0x8
    GEOXPCActivity *_activity;	// 16 = 0x10
    _Bool _running;	// 24 = 0x18
}

+ (void)run;	// IMP=0x00400000000189cf
+ (void)registerXPCActivity;	// IMP=0x00100000000187a1
+ (id)sharedUpdater;	// IMP=0x001000000001868c
- (void).cxx_destruct;	// IMP=0x00200000000198ed
- (void)_pruneOldResourcesIn:(id)arg1;	// IMP=0x001000000001945d
- (void)_processResources:(id)arg1 group:(id)arg2;	// IMP=0x0010000000019107
- (void)_fetchAssets;	// IMP=0x0010000000018d79
- (void)_updateComplete;	// IMP=0x0010000000018cf6
- (void)_updateOnQueue;	// IMP=0x0010000000018a6d
- (void)_update;	// IMP=0x0010000000018a0c
- (void)_registerActivity;	// IMP=0x00100000000187bc
- (id)initInternal;	// IMP=0x00100000000186f1

@end

