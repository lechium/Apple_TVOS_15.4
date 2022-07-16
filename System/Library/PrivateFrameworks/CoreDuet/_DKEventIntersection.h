//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _DKEventIntersection : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    NSArray *_events;	// 24 = 0x18
}

+ (id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;	// IMP=0x0000000000061572
- (void).cxx_destruct;	// IMP=0x00000000000616f3
@property(readonly) NSArray *events; // @synthesize events=_events;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;	// IMP=0x0000000000061600

@end
