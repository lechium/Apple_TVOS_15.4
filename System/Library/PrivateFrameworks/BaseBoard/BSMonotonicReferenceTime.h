//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BSMonotonicReferenceTime : NSObject
{
    double _startTimeStamp;	// 8 = 0x8
}

+ (id)referenceTimeForDate:(id)arg1;	// IMP=0x0000000000063d9e
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x0000000000063cf3
+ (id)distantFuture;	// IMP=0x0000000000063c56
+ (id)distantPast;	// IMP=0x0000000000063bb9
+ (id)now;	// IMP=0x0000000000063b25
- (id)date;	// IMP=0x0000000000063e8c
- (double)timeIntervalSinceReferenceTime:(id)arg1;	// IMP=0x0000000000063e7c
@property(readonly, nonatomic) double timeIntervalSinceNow;
@property(readonly, nonatomic) double timeIntervalToNow;

@end

