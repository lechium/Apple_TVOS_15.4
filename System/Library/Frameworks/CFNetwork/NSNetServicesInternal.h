//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_tcp_listener;

@interface NSNetServicesInternal : NSObject
{
    NSMutableArray *_monitors;	// 8 = 0x8
    NSObject<OS_tcp_listener> *_listener;	// 16 = 0x10
    struct __CFRunLoop *_scheduledRunLoop;	// 24 = 0x18
    struct __CFString *_scheduledMode;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x000000000002a673

@end
