//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDIncomingCallFilterDataSource, CXCallDirectorySanitizer, CXCallDirectoryStore, NSString;
@protocol CSDCallCenterObserver, CSDDeviceLockStateObserver, OS_dispatch_queue;

@interface CSDIncomingCallFilter : NSObject
{
    _Bool _kettleFeatureComplete;	// 8 = 0x8
    double _twoTimeCallthroughInterval;	// 16 = 0x10
    CXCallDirectoryStore *_callDirectoryStore;	// 24 = 0x18
    CSDIncomingCallFilterDataSource *_dataSource;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <CSDDeviceLockStateObserver> _deviceLockObserver;	// 48 = 0x30
    id <CSDCallCenterObserver> _callCenterObserver;	// 56 = 0x38
    CXCallDirectorySanitizer *_callDirectorySanitizer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001021ae
@property(readonly, nonatomic) _Bool kettleFeatureComplete; // @synthesize kettleFeatureComplete=_kettleFeatureComplete;
@property(readonly, nonatomic) CXCallDirectorySanitizer *callDirectorySanitizer; // @synthesize callDirectorySanitizer=_callDirectorySanitizer;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) id <CSDDeviceLockStateObserver> deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSDIncomingCallFilterDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CXCallDirectoryStore *callDirectoryStore; // @synthesize callDirectoryStore=_callDirectoryStore;
@property(nonatomic) double twoTimeCallthroughInterval; // @synthesize twoTimeCallthroughInterval=_twoTimeCallthroughInterval;
- (void)callsChangedForCallCenterObserver:(id)arg1;	// IMP=0x00100000001020ba
- (id)_callDirectoryPhoneNumberVariantsForSourceAddress:(id)arg1 countryCode:(id)arg2;	// IMP=0x0010000000101e3c
- (_Bool)callDirectoryAllowsCallFromSourceAddress:(id)arg1 countryCode:(id)arg2;	// IMP=0x0010000000101bb4
- (_Bool)callDirectoryAllowsCallFromSourceAddress:(id)arg1;	// IMP=0x0010000000101b1c
- (_Bool)_doNotDisturbAllowsCallFromSourceAddress:(id)arg1 providerIdentifier:(id)arg2;	// IMP=0x0010000000101ad7
- (id)_callFilterIdentifier;	// IMP=0x0010000000101a84
- (CDUnknownBlockType)_callFilterBlock;	// IMP=0x0010000000101830
- (id)initWithDataSource:(id)arg1 deviceLockObserver:(id)arg2 callCenterObserver:(id)arg3 callDirectoryStoreBuilder:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x001000000010168e
- (id)init;	// IMP=0x00100000001013bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
