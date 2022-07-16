//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSWatchMetricsConfiguration, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsController : NSObject
{
    SSXPCConnection *_connection;	// 8 = 0x8
    SSWatchMetricsConfiguration *_metricsConfiguration;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017359c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) SSWatchMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
- (_Bool)isEnabled;	// IMP=0x000000000017352e
- (id)_connection;	// IMP=0x00000000001734d9
- (void)insertEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000173135
- (id)init;	// IMP=0x0000000000173059

@end
