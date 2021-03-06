//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriAnalyticsLogicalClockStatistics : NSObject
{
    unsigned long long _startedOn;	// 8 = 0x8
    unsigned long long _endedOn;	// 16 = 0x10
    unsigned long long _lastMessageEmittedOn;	// 24 = 0x18
    unsigned long long _messagesEmitted;	// 32 = 0x20
}

@property(nonatomic) unsigned long long messagesEmitted; // @synthesize messagesEmitted=_messagesEmitted;
@property(nonatomic) unsigned long long lastMessageEmittedOn; // @synthesize lastMessageEmittedOn=_lastMessageEmittedOn;
@property(nonatomic) unsigned long long endedOn; // @synthesize endedOn=_endedOn;
@property(nonatomic) unsigned long long startedOn; // @synthesize startedOn=_startedOn;
- (void)noteMessageEmitted;	// IMP=0x000000000000a0ec
@property(readonly, nonatomic) unsigned long long utilizationLifetimeInNanoseconds;
@property(readonly, nonatomic) unsigned long long clockAgeInNanoseconds;

@end

