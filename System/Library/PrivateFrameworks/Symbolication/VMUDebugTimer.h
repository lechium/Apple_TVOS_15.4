//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_os_log;

@interface VMUDebugTimer : NSObject
{
    NSDate *_programStartTime;	// 8 = 0x8
    NSDate *_eventStartTime;	// 16 = 0x10
    NSString *_eventMessage;	// 24 = 0x18
    NSString *_categoryMessage;	// 32 = 0x20
    NSObject<OS_os_log> *_logHandle;	// 40 = 0x28
    unsigned long long _signpostID;	// 48 = 0x30
}

+ (id)sharedTimerIfCreated;	// IMP=0x000000000004d763
+ (id)sharedTimer;	// IMP=0x000000000004d6d2
- (void).cxx_destruct;	// IMP=0x000000000004db1e
@property(readonly) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(readonly) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
- (void)stop;	// IMP=0x000000000004daaa
- (void)endEvent:(const char *)arg1;	// IMP=0x000000000004d99a
- (void)startWithCategory:(const char *)arg1 message:(const char *)arg2;	// IMP=0x000000000004d826
- (void)startWithMessage:(const char *)arg1;	// IMP=0x000000000004d7f7
- (id)init;	// IMP=0x000000000004d774

@end

