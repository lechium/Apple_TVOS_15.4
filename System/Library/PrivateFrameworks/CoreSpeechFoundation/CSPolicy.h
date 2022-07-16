//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeechFoundation/CSEventMonitorDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CSPolicy : NSObject <CSEventMonitorDelegate>
{
    NSMutableArray *_monitors;	// 8 = 0x8
    NSMutableArray *_conditions;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000008e41
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;	// IMP=0x0000000000008cdd
- (void)notifyCallbackWithOption:(unsigned long long)arg1;	// IMP=0x0000000000008c51
- (void)notifyCallback:(_Bool)arg1 option:(unsigned long long)arg2;	// IMP=0x0000000000008bda
- (_Bool)isEnabled;	// IMP=0x0000000000008b20
- (_Bool)_checkAllConditionsEnabled;	// IMP=0x0000000000008a0a
- (void)subscribeEventMonitor:(id)arg1;	// IMP=0x0000000000008917
- (void)addConditions:(CDUnknownBlockType)arg1;	// IMP=0x00000000000087f8
- (void)dealloc;	// IMP=0x000000000000865a
- (void)setCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008635
- (id)init;	// IMP=0x000000000000857f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
