//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AppMetricsService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)defaultService;	// IMP=0x00200000000be6e1
- (void).cxx_destruct;	// IMP=0x00200000000bef73
- (id)_currentClient;	// IMP=0x00100000000beef2
- (void)resetMetricsEventsForType:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bed42
- (void)recordMetricsEventsForType:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000beb92
- (void)postMetricsEventsForType:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000be9e2
- (void)getMetricsEventsForType:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000be736
- (id)init;	// IMP=0x00100000000be65f

@end

