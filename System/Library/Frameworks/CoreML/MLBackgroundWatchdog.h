//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MLBackgroundWatchdog : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
}

+ (id)watchdogWithTimeout:(double)arg1 label:(id)arg2 queue:(id)arg3;	// IMP=0x00000000001631ae
+ (id)watchdogWithTimeout:(double)arg1 queue:(id)arg2;	// IMP=0x0000000000163197
- (void).cxx_destruct;	// IMP=0x0000000000163187
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)invalidate;	// IMP=0x000000000016312f
- (void)dealloc;	// IMP=0x00000000001630f5

@end

