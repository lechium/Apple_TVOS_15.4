//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetrics;

@interface AppMetrics : NSObject
{
    AMSMetrics *_metrics;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001bb569
- (void).cxx_destruct;	// IMP=0x00200000001bbca7
- (id)_amsMetrics;	// IMP=0x00100000001bbbf1
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bbb49
- (void)flushMetricsWithLogKey:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bb85e
- (void)insertEventsIntoDatabase:(id)arg1;	// IMP=0x00100000001bb722
- (void)insertEventIntoDatabase:(id)arg1;	// IMP=0x00100000001bb5f6

@end
