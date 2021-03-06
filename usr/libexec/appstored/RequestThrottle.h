//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RequestThrottlePersistence;
@protocol Clock;

@interface RequestThrottle : NSObject
{
    id <Clock> _clock;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    RequestThrottlePersistence *_persistence;	// 24 = 0x18
}

+ (_Bool)_isErrorExemptFromThrottle:(id)arg1;	// IMP=0x00400000001f5fc1
- (void).cxx_destruct;	// IMP=0x00200000001f618b
- (_Bool)shouldRequestItemID:(id)arg1 externalVersionID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001f5c84
- (void)recordSuccessForItemID:(id)arg1;	// IMP=0x00100000001f5bc0
- (void)recordError:(id)arg1 forItemID:(id)arg2 externalVersionID:(id)arg3;	// IMP=0x00100000001f59bc
- (void)invalidateExpiredFailures;	// IMP=0x00100000001f57b9
- (id)initWithClock:(id)arg1 duration:(double)arg2 persistence:(id)arg3;	// IMP=0x00100000001f56eb

@end

