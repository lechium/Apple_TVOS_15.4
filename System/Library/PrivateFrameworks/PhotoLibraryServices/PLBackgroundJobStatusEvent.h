//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PLBackgroundJobStatusEvent : NSObject
{
    NSDate *_eventTimestamp;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000059c8ed
@property(retain) NSDate *eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(readonly) NSString *statusDump;

@end
