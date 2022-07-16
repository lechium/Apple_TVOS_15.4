//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject
{
    NSMutableDictionary *_availabilityHandlers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000017646
- (void).cxx_destruct;	// IMP=0x000000000001837d
- (long long)availabilityForListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000181f2
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000017fa7
- (_Bool)addListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000017e45
- (_Bool)hasListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000017dc2
- (id)containerForService:(id)arg1 create:(_Bool)arg2;	// IMP=0x0000000000017c2c
- (void)_stopListeningToMonitor:(id)arg1;	// IMP=0x0000000000017b9c
- (void)_startListeningToMonitor:(id)arg1;	// IMP=0x0000000000017b05
- (void)_handleServiceMonitorNotification:(id)arg1;	// IMP=0x0000000000017a15
- (void)_postNotificationForService:(id)arg1 availability:(long long)arg2;	// IMP=0x0000000000017896
- (_Bool)_isValidServiceType:(id)arg1;	// IMP=0x00000000000177de
- (void)dealloc;	// IMP=0x0000000000017764
- (id)init;	// IMP=0x000000000001769b

@end

