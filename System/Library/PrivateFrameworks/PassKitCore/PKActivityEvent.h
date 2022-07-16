//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PKActivityEvent : NSObject
{
    _Bool _unread;	// 8 = 0x8
    NSString *_eventType;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
}

+ (id)eventsWithTransactions:(id)arg1;	// IMP=0x00000000000c5d49
- (void).cxx_destruct;	// IMP=0x00000000000c619e
@property(readonly, nonatomic, getter=isUnread) _Bool unread; // @synthesize unread=_unread;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (_Bool)isEqualToActivityEvent:(id)arg1;	// IMP=0x00000000000c6106
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c60a9
- (unsigned long long)hash;	// IMP=0x00000000000c6015
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(_Bool)arg3;	// IMP=0x00000000000c5f56

@end

