//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _pairedWithWatch;	// 24 = 0x18
    NSArray *_connectedWatches;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000090df48
+ (id)shortDescription;	// IMP=0x000000000090df3b
+ (_Bool)isCompatibleWatchDevice:(id)arg1;	// IMP=0x000000000090df33
+ (id)sharedManager;	// IMP=0x000000000090dea6
- (void).cxx_destruct;	// IMP=0x000000000090d18f
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000000090d03b
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000000090cd74
- (id)connectedWatchFromDeviceID:(id)arg1;	// IMP=0x000000000090cc1b
@property(readonly, copy) NSArray *connectedWatches; // @synthesize connectedWatches=_connectedWatches;
@property(readonly, getter=isPairedWithWatch) _Bool pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property(readonly, copy) NSArray *watches;
- (void)__initializeConnectedDevices;	// IMP=0x000000000090c51e
- (id)attributeDescriptions;	// IMP=0x000000000090c452
- (id)init;	// IMP=0x000000000090c2b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

