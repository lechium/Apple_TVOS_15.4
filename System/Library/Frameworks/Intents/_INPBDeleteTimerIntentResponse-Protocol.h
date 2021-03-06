//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBTimer;

@protocol _INPBDeleteTimerIntentResponse <NSObject>
+ (Class)deletedTimersType;
@property(readonly, nonatomic) unsigned long long deletedTimersCount;
@property(copy, nonatomic) NSArray *deletedTimers;
- (_INPBTimer *)deletedTimersAtIndex:(unsigned long long)arg1;
- (void)addDeletedTimers:(_INPBTimer *)arg1;
- (void)clearDeletedTimers;
@end

