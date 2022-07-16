//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SDStatusMonitor, SFUserAlert;
@protocol OS_os_transaction, SDAirDropControllerDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropController : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    SFUserAlert *_phUserNotification;	// 32 = 0x20
    SFUserAlert *_radiosUserNotification;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
    id <SDAirDropControllerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000190a64
@property __weak id <SDAirDropControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x0010000000190983
- (void)start;	// IMP=0x0000000000190929
- (void)removeObservers;	// IMP=0x00100000001908d6
- (void)addObservers;	// IMP=0x0010000000190829
- (void)somethingChanged:(id)arg1;	// IMP=0x0010000000190817
- (void)setStatusAndNotify;	// IMP=0x00100000001906d6
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00100000001905e8
- (void)presentDisablePersonalHotspotAlert;	// IMP=0x00100000001905e2
- (void)presentEnableRadiosAlertForBluetooth:(_Bool)arg1 andWLAN:(_Bool)arg2;	// IMP=0x00100000001905dc
- (void)configureSettingsForAirDrop;	// IMP=0x0010000000190502
- (void)dealloc;	// IMP=0x00100000001904c4
- (id)init;	// IMP=0x001000000019043b

@end
