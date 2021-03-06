//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKEvent, NSArray, NSDate, NSString;

@protocol CKEphemeralReadableEventSequence
- (NSArray *)eventsBetween:(NSDate *)arg1 and:(NSDate *)arg2;
- (NSArray *)eventsWithIdentifier:(NSString *)arg1;
- (CKEvent *)first;
- (CKEvent *)last;
@end

