//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUnfairLock;
@protocol CNCancelable, CNScheduler;

@interface CNCoalescingTimer : NSObject
{
    _Bool _open;	// 8 = 0x8
    _Bool _someoneWaiting;	// 9 = 0x9
    id <CNCancelable> _scheduledToken;	// 16 = 0x10
    id <CNScheduler> _downstreamScheduler;	// 24 = 0x18
    CNUnfairLock *_resourceLock;	// 32 = 0x20
    id <CNScheduler> _delayScheduler;	// 40 = 0x28
    CDUnknownBlockType _block;	// 48 = 0x30
    double _delay;	// 56 = 0x38
    unsigned long long _options;	// 64 = 0x40
}

+ (id)os_log;	// IMP=0x0000000000014415
- (void).cxx_destruct;	// IMP=0x0000000000014a38
@property(nonatomic, getter=isSomeoneWaiting) _Bool someoneWaiting; // @synthesize someoneWaiting=_someoneWaiting;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) id <CNScheduler> delayScheduler; // @synthesize delayScheduler=_delayScheduler;
@property(readonly, nonatomic) CNUnfairLock *resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly, nonatomic) id <CNScheduler> downstreamScheduler; // @synthesize downstreamScheduler=_downstreamScheduler;
@property(retain, nonatomic) id <CNCancelable> scheduledToken; // @synthesize scheduledToken=_scheduledToken;
- (void)nts_closeDoor;	// IMP=0x000000000001486c
- (void)nts_openDoor;	// IMP=0x00000000000147df
- (void)nts_makeSomeoneWait;	// IMP=0x0000000000014777
- (void)nts_letSomeoneIn;	// IMP=0x00000000000146eb
- (_Bool)nts_isDoorOpened;	// IMP=0x00000000000146d9
- (void)handleEvent;	// IMP=0x00000000000145e5
- (void)dealloc;	// IMP=0x00000000000145a3
- (id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5;	// IMP=0x0000000000014471

@end

