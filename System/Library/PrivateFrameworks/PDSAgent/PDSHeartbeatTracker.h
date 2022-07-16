//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSDate, PDSBag;
@protocol OS_dispatch_queue, PDSHeartbeatTrackerDelegate;

@interface PDSHeartbeatTracker : NSObject
{
    _Bool _scheduledActivity;	// 8 = 0x8
    IMTimer *_heartbeatTimer;	// 16 = 0x10
    PDSBag *_serverBag;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _kvStoreBlock;	// 40 = 0x28
    id <PDSHeartbeatTrackerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001340a
@property(nonatomic) _Bool scheduledActivity; // @synthesize scheduledActivity=_scheduledActivity;
@property(nonatomic) __weak id <PDSHeartbeatTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType kvStoreBlock; // @synthesize kvStoreBlock=_kvStoreBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PDSBag *serverBag; // @synthesize serverBag=_serverBag;
@property(retain, nonatomic) IMTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
- (void)_markNextCheckpointTimeWithTTL:(double)arg1;	// IMP=0x0000000000013262
@property(readonly, nonatomic) NSDate *trackedHeartbeatDate;
@property(readonly, nonatomic) _Bool isPassedTrackedHeartbeatDate;
- (void)noteShouldTrackHeartbeat;	// IMP=0x0000000000012f03
- (void)noteShouldNotTrackHeartbeat;	// IMP=0x0000000000012e88
- (void)_setupMaintenanceActivity;	// IMP=0x0000000000012b44
- (void)noteUpdatedHeartbeatTTL:(double)arg1;	// IMP=0x00000000000129dc
- (void)_handleHeartbeatFired;	// IMP=0x0000000000012990
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 kvStoreBlock:(CDUnknownBlockType)arg3 serverBag:(id)arg4;	// IMP=0x00000000000126cc

@end

