//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NEPathEventObserver : NSObject
{
    struct network_config_cellular_blocked_observer_s *_cellBlockedObserver;	// 8 = 0x8
    struct network_config_cellular_blocked_observer_s *_cellFailedObserver;	// 16 = 0x10
    struct network_config_cellular_blocked_observer_s *_wifiBlockedObserver;	// 24 = 0x18
    CDUnknownBlockType _eventHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001510bd
@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property struct network_config_cellular_blocked_observer_s *wifiBlockedObserver; // @synthesize wifiBlockedObserver=_wifiBlockedObserver;
@property struct network_config_cellular_blocked_observer_s *cellFailedObserver; // @synthesize cellFailedObserver=_cellFailedObserver;
@property struct network_config_cellular_blocked_observer_s *cellBlockedObserver; // @synthesize cellBlockedObserver=_cellBlockedObserver;
- (void)dealloc;	// IMP=0x0000000000151020
- (void)cancel;	// IMP=0x0000000000150f42
- (id)initWithQueue:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000150bcc
- (void)handleEvent:(long long)arg1 forPID:(id)arg2 UUID:(id)arg3;	// IMP=0x0000000000150666
- (id)stringForEvent:(long long)arg1;	// IMP=0x000000000015062c
- (id)init;	// IMP=0x000000000015061e

@end
