//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLDispatchSilo, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLPrivacyManager : CLIntersiloService
{
    struct unique_ptr<CLClientManager_Type::Client, std::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_deferVacuum;	// 16 = 0x10
    NSMutableDictionary *_activities;	// 24 = 0x18
    _Bool _disabled;	// 32 = 0x20
    unsigned long long _timeStarted;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0020000000a84226
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a8420d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a841b0
- (id).cxx_construct;	// IMP=0x0020000000a85cc4
- (void).cxx_destruct;	// IMP=0x0010000000a85c9c
- (void)onActivity:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000a8572c
- (void)retryActivityForEncryptionClass:(id)arg1 reason:(int)arg2;	// IMP=0x0010000000a85497
- (_Bool)isReadyToVacuumEncryptionClass:(id)arg1;	// IMP=0x0010000000a8530a
- (void)checkInForActivityWithIdentifier:(id)arg1;	// IMP=0x0010000000a851e7
- (void)vacuumAll;	// IMP=0x0010000000a84bcc
- (void)scheduleVacuumWithReason:(id)arg1;	// IMP=0x0010000000a84850
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000a8470b
- (void)beginService;	// IMP=0x0010000000a84331
- (void)dealloc;	// IMP=0x0010000000a842e3
- (id)init;	// IMP=0x0010000000a84282

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
