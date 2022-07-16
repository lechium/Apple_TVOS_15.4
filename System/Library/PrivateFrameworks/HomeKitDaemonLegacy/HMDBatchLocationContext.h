//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFTimer, NSDate, NSMutableArray;
@protocol HMDBatchLocationDelegate;

@interface HMDBatchLocationContext : NSObject
{
    id <HMDBatchLocationDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_tuples;	// 16 = 0x10
    HMFTimer *_timer;	// 24 = 0x18
    NSDate *_startDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006f8a1f
@property(readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) NSMutableArray *tuples; // @synthesize tuples=_tuples;
@property __weak id <HMDBatchLocationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000006f88c8

@end

