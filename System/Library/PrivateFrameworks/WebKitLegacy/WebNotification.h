//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebNotificationPrivate;

@interface WebNotification : NSObject
{
    WebNotificationPrivate *_private;	// 8 = 0x8
}

- (void)finalize;	// IMP=0x000000000010c9f0
- (void)dispatchErrorEvent;	// IMP=0x000000000010c9e0
- (void)dispatchClickEvent;	// IMP=0x000000000010c9d0
- (void)dispatchCloseEvent;	// IMP=0x000000000010c9c0
- (void)dispatchShowEvent;	// IMP=0x000000000010c9b0
- (unsigned long long)notificationID;	// IMP=0x000000000010c9a0
- (id)origin;	// IMP=0x000000000010c990
- (id)dir;	// IMP=0x000000000010c980
- (id)lang;	// IMP=0x000000000010c970
- (id)iconURL;	// IMP=0x000000000010c960
- (id)tag;	// IMP=0x000000000010c950
- (id)body;	// IMP=0x000000000010c940
- (id)title;	// IMP=0x000000000010c930
- (void)dealloc;	// IMP=0x000000000010c8f0
- (id)init;	// IMP=0x000000000010c8e0

@end

