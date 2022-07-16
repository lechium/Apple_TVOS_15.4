//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFUnfairLock, HMMutableArray, NSArray, NSString, NSUUID, _HMContext;
@protocol HMAccessoryBrowserDelegate, OS_dispatch_queue;

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _browsing;	// 16 = 0x10
    id <HMAccessoryBrowserDelegate> _delegate;	// 24 = 0x18
    _HMContext *_context;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    HMMutableArray *_accessories;	// 48 = 0x30
    unsigned long long _generationCounter;	// 56 = 0x38
}

+ (id)unconfigureQueue;	// IMP=0x00000000001bd4d5
- (void).cxx_destruct;	// IMP=0x00000000001bcb83
@property(nonatomic, getter=isBrowsing) _Bool browsing; // @synthesize browsing=_browsing;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMMutableArray *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleNewAccessoriesRemoved:(id)arg1;	// IMP=0x00000000001bc1ec
- (void)_handleNewAccessoriesFound:(id)arg1;	// IMP=0x00000000001bb5b9
- (void)_registerNotificationHandlers;	// IMP=0x00000000001bb321
- (void)_updateNewAccessories:(id)arg1;	// IMP=0x00000000001ba94e
- (void)_fetchNewAccessories;	// IMP=0x00000000001ba687
- (void)_fetchNewAccessoriesWithPrivacyCheck;	// IMP=0x00000000001ba4e8
- (void)_start;	// IMP=0x00000000001ba33a
- (void)_stopSearchingForNewAccessoriesWithError:(id)arg1;	// IMP=0x00000000001b9f19
- (void)stopSearchingForNewAccessoriesWithError:(id)arg1;	// IMP=0x00000000001b9d95
- (void)stopSearchingForNewAccessories;	// IMP=0x00000000001b9cbc
- (void)handleStartWithError:(id)arg1 response:(id)arg2;	// IMP=0x00000000001b9af6
- (void)_startSearchingForNewAccessories;	// IMP=0x00000000001b986b
- (void)startSearchingForNewAccessories;	// IMP=0x00000000001b9691
@property(readonly, copy, nonatomic) NSArray *discoveredAccessories;
@property(nonatomic) __weak id <HMAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000001b91b1
- (id)init;	// IMP=0x00000000001b9055

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

