//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NCLayoutLoopDetector : NSObject
{
    NSMutableArray *_notificationLayoutsInProgress;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000036f9
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableArray *notificationLayoutsInProgress; // @synthesize notificationLayoutsInProgress=_notificationLayoutsInProgress;
- (void)_saveNotificationLayoutsInProgress;	// IMP=0x000000000000355b
- (id)_savedNotificationLayoutsInProgress;	// IMP=0x00000000000034c8
- (void)removeNotificationRequestFromLayoutsInProgress:(id)arg1;	// IMP=0x000000000000340e
- (void)addNotificationRequestToLayoutsInProgress:(id)arg1;	// IMP=0x0000000000003354
- (_Bool)layoutInProgressContainsNotificationRequest:(id)arg1;	// IMP=0x00000000000032fd
- (id)init;	// IMP=0x000000000000322a

@end

