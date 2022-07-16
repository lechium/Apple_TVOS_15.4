//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol AXNotificationObserverDelegate;

@interface AXNotificationObserver : NSObject
{
    struct __AXObserver *_observer;	// 8 = 0x8
    id <AXNotificationObserverDelegate> _delegate;	// 16 = 0x10
    NSArray *_notifications;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000167ac
@property(retain, nonatomic) NSArray *notifications; // @synthesize notifications=_notifications;
@property(nonatomic) __weak id <AXNotificationObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000016717
- (void)_didObserveNotification:(int)arg1 notificationData:(void *)arg2;	// IMP=0x0000000000016639
- (void)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x0000000000016362
- (id)initWithNotifications:(id)arg1;	// IMP=0x000000000001611f

@end
