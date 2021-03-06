//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PVContext;

@interface PVEventManager : NSObject
{
    NSMutableArray *_notificationListeners;	// 8 = 0x8
    PVContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003ebd5
- (void)notifyListeners:(id)arg1;	// IMP=0x000000000003ea2f
- (void)publishEvent:(id)arg1 source:(id)arg2;	// IMP=0x000000000003e90e
- (void)removeNotificationListener:(id)arg1;	// IMP=0x000000000003e892
- (void)addNotificationListener:(id)arg1;	// IMP=0x000000000003e816
- (id)initWithContext:(id)arg1;	// IMP=0x000000000003e791

@end

