//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFPriorityDesignator.h>

#import <Message/MFCancelable-Protocol.h>

@class MFError, MFInvocationQueue, MFMailboxUid, NSMutableSet, NSString, NSThread;

@interface MFActivityMonitor : MFPriorityDesignator <MFCancelable>
{
    NSThread *_runningThread;	// 16 = 0x10
    NSString *_taskName;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_statusMessage;	// 40 = 0x28
    NSString *_descriptionString;	// 48 = 0x30
    MFInvocationQueue *_ourQueue;	// 56 = 0x38
    double _percentDone;	// 64 = 0x40
    unsigned int _key:13;	// 72 = 0x48
    unsigned int _canCancel:1;	// 73 = 0x49
    unsigned int _shouldCancel:1;	// 73 = 0x49
    unsigned int _isActive:1;	// 73 = 0x49
    unsigned int _changeCount:8;	// 74 = 0x4a
    id _delegate;	// 80 = 0x50
    id _target;	// 88 = 0x58
    MFError *_error;	// 96 = 0x60
    unsigned long long _expectedLength;	// 104 = 0x68
    unsigned long long _maxCount;	// 112 = 0x70
    unsigned long long _currentCount;	// 120 = 0x78
    double _currentItemPercentDone;	// 128 = 0x80
    unsigned int _supportsPerItemProgress:1;	// 136 = 0x88
    MFMailboxUid *_mailbox;	// 144 = 0x90
    double _lastTime;	// 152 = 0x98
    double _startTime;	// 160 = 0xa0
    unsigned long long _gotNewMessagesState;	// 168 = 0xa8
    unsigned long long _bytesRead;	// 176 = 0xb0
    unsigned long long _bytesWritten;	// 184 = 0xb8
    NSMutableSet *_reasons;	// 192 = 0xc0
    NSMutableSet *_associatedCancelables;	// 200 = 0xc8
    _Bool _isRemoteSearch;	// 208 = 0xd0
}

+ (void)destroyMonitor;	// IMP=0x0000000000099172
+ (id)currentMonitor;	// IMP=0x0000000000099143
@property(nonatomic) _Bool isRemoteSearch; // @synthesize isRemoteSearch=_isRemoteSearch;
@property(retain) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
- (unsigned long long)bytesWritten;	// IMP=0x0000000000099523
- (unsigned long long)bytesRead;	// IMP=0x0000000000099512
- (void)recordBytesWritten:(unsigned long long)arg1;	// IMP=0x0000000000099501
- (void)recordBytesRead:(unsigned long long)arg1;	// IMP=0x00000000000994f0
- (void)resetConnectionStats;	// IMP=0x00000000000994d2
- (void)setError:(id)arg1;	// IMP=0x000000000009946d
- (id)error;	// IMP=0x000000000009941a
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;	// IMP=0x0000000000099362
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;	// IMP=0x00000000000992aa
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;	// IMP=0x0000000000099263
- (void)relinquishExclusiveAccessKey:(int)arg1;	// IMP=0x0000000000099203
- (int)acquireExclusiveAccessKey;	// IMP=0x00000000000991a1
- (void)setInvocationQueue:(id)arg1;	// IMP=0x000000000009910a
- (void)cancel;	// IMP=0x00000000000990f3
- (void)_cancelAssociatedCancelables;	// IMP=0x0000000000099087
- (void)removeCancelable:(id)arg1;	// IMP=0x000000000009902a
- (void)addCancelable:(id)arg1;	// IMP=0x0000000000098f8c
@property(nonatomic) _Bool shouldCancel;
@property(nonatomic) _Bool canBeCancelled;
- (id)activityTargets;	// IMP=0x0000000000098d24
- (id)primaryTarget;	// IMP=0x0000000000098c96
- (void)setPrimaryTarget:(id)arg1;	// IMP=0x0000000000098b2e
- (void)removeActivityTarget:(id)arg1;	// IMP=0x0000000000098a36
- (void)addActivityTargets:(id)arg1;	// IMP=0x000000000009884c
- (void)addActivityTarget:(id)arg1;	// IMP=0x000000000009875d
- (_Bool)_lockedAddActivityTarget:(id)arg1;	// IMP=0x00000000000986e1
- (id)activityTarget;	// IMP=0x000000000009868e
- (void)setActivityTarget:(id)arg1;	// IMP=0x0000000000098609
- (void)setDisplayName:(id)arg1;	// IMP=0x00000000000985f5
- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x0000000000098530
- (id)displayName;	// IMP=0x00000000000984d9
- (void)setTaskName:(id)arg1;	// IMP=0x0000000000098426
- (id)taskName;	// IMP=0x00000000000983cf
@property(readonly, copy) NSString *description;
- (unsigned long long)expectedLength;	// IMP=0x000000000009829c
- (void)setExpectedLength:(unsigned long long)arg1;	// IMP=0x000000000009828b
- (double)startTime;	// IMP=0x0000000000098279
- (double)percentDone;	// IMP=0x0000000000098267
- (void)setPercentDone:(double)arg1;	// IMP=0x0000000000098253
- (id)statusMessage;	// IMP=0x00000000000981d1
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;	// IMP=0x00000000000981bd
- (void)setStatusMessage:(id)arg1;	// IMP=0x0000000000098180
- (int)changeCount;	// IMP=0x000000000009816f
- (id)reasons;	// IMP=0x0000000000098148
- (_Bool)hasReason:(id)arg1;	// IMP=0x000000000009812b
- (void)addReason:(id)arg1;	// IMP=0x00000000000980de
- (unsigned long long)gotNewMessagesState;	// IMP=0x00000000000980cd
- (void)setGotNewMessagesState:(unsigned long long)arg1;	// IMP=0x00000000000980b6
- (void)reset;	// IMP=0x0000000000097f80
- (void)setPercentDoneOfCurrentItem:(double)arg1;	// IMP=0x0000000000097ef7
- (id)_ntsThrottledUserInfoDict;	// IMP=0x0000000000097e84
- (void)setSupportsPerItemProgress:(_Bool)arg1;	// IMP=0x0000000000097e6c
- (void)setCurrentCount:(unsigned long long)arg1;	// IMP=0x0000000000097ded
- (void)setMaxCount:(unsigned long long)arg1;	// IMP=0x0000000000097d6e
- (void)_didChange;	// IMP=0x0000000000097d3d
- (void)postDidChangeWithUserInfo:(id)arg1;	// IMP=0x0000000000097ce9
- (id)userInfoForNotification;	// IMP=0x0000000000097b23
- (void)notifyConnectionEstablished;	// IMP=0x0000000000097ae4
- (void)finishedActivity:(id)arg1;	// IMP=0x0000000000097a26
- (void)startActivity;	// IMP=0x0000000000097952
- (void)postActivityFinished:(id)arg1;	// IMP=0x00000000000978cf
- (void)postActivityStarting;	// IMP=0x0000000000097890
- (void)cancelMessage;	// IMP=0x000000000009786b
- (void)setDelegate:(id)arg1;	// IMP=0x000000000009785a
- (_Bool)isActive;	// IMP=0x0000000000097847
- (void)dealloc;	// IMP=0x0000000000097771
- (id)init;	// IMP=0x00000000000976ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

