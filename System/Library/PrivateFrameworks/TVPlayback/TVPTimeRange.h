//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVPTimeRange : NSObject
{
    double _startTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
}

+ (CDStruct_5c5366e1)forwardmostCMTimeRangeInCMTimeRanges:(id)arg1;	// IMP=0x00000000000f6922
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;	// IMP=0x00000000000f7028
- (id)intersectTimeRange:(id)arg1;	// IMP=0x00000000000f6e43
- (_Bool)containsTime:(double)arg1;	// IMP=0x00000000000f6dfa
@property(readonly, nonatomic) double endTime;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;	// IMP=0x00000000000f6d69
- (id)initWithCMTimeRange:(CDStruct_5c5366e1)arg1;	// IMP=0x00000000000f6ccc
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;	// IMP=0x00000000000f6cb6

@end

