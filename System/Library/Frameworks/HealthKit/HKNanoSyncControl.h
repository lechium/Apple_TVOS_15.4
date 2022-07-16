//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKNanoSyncControlClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKNanoSyncControl : NSObject <_HKXPCExportable, HKNanoSyncControlClient>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x0000000000043d71
- (void).cxx_destruct;	// IMP=0x0000000000044307
- (id)remoteInterface;	// IMP=0x00000000000442fd
- (id)exportedInterface;	// IMP=0x00000000000442f3
- (void)connectionInvalidated;	// IMP=0x00000000000442ed
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004410b
- (void)resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043ff5
- (void)forceLastChanceNanoSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043fdb
- (void)forceNanoSyncWithPullRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043fc7
- (void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043e99
- (void)fetchNanoSyncPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043d83
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000043c7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

