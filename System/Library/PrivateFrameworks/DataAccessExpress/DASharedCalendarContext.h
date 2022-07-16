//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DASharedCalendarContext : NSObject
{
    _Bool _shouldSyncCalendar;	// 8 = 0x8
    NSString *_calendarID;	// 16 = 0x10
    NSString *_accountID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _completionBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000002a3f
@property(nonatomic) _Bool shouldSyncCalendar; // @synthesize shouldSyncCalendar=_shouldSyncCalendar;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSString *calendarID; // @synthesize calendarID=_calendarID;
- (void)finishedWithError:(id)arg1;	// IMP=0x0000000000002745
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000262c

@end

