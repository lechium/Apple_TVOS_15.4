//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriPrivateLearningAnalytics/BPSSubscriber-Protocol.h>

@class MISSING_TYPE;

@interface _TtC28SiriPrivateLearningAnalyticsP33_95987ADD223C83697EEA450CF0CC3A3519ScanTurnsSubscriber : NSObject <BPSSubscriber>
{
    MISSING_TYPE *downstream;	// 8 = 0x8
    MISSING_TYPE *innerSubscription;	// 16 = 0x10
    MISSING_TYPE *eventTables;	// 24 = 0x18
    MISSING_TYPE *endpointer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000273e0
- (id)init;	// IMP=0x0000000000027360
- (void)cancel;	// IMP=0x0000000000027330
- (void)receiveCompletion:(id)arg1;	// IMP=0x0000000000027270
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000026d50
- (void)receiveSubscription:(id)arg1;	// IMP=0x00000000000266e0

@end

