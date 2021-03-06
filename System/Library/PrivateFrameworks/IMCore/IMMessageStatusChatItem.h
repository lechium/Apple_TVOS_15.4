//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMChatTranscriptStatusItem-Protocol.h>

@class IMHandle, IMServiceImpl, NSAttributedString, NSDate, NSString;

@interface IMMessageStatusChatItem <IMChatTranscriptStatusItem>
{
    long long _statusType;	// 40 = 0x28
    NSDate *_time;	// 48 = 0x30
    long long _expireStatusType;	// 56 = 0x38
    NSDate *_timeAdded;	// 64 = 0x40
    NSDate *_timeStale;	// 72 = 0x48
    unsigned long long _count;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000077ac0
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) long long expireStatusType; // @synthesize expireStatusType=_expireStatusType;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) long long statusType; // @synthesize statusType=_statusType;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5;	// IMP=0x0000000000077945
- (id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000007791e
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x00000000000778fb
@property(readonly, nonatomic) long long messageStatusType;
@property(readonly, nonatomic) NSString *errorText;
@property(readonly, nonatomic, getter=isFromMe) _Bool fromMe;
- (void)_setTimeAdded:(id)arg1;	// IMP=0x0000000000077747
- (id)_timeAdded;	// IMP=0x0000000000077732
- (id)_timeStale;	// IMP=0x0000000000077613
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077576
@property(readonly, nonatomic) NSDate *dateOfStatus;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) IMHandle *handle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, nonatomic) IMServiceImpl *service;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDate *transcriptDate;
@property(readonly, copy, nonatomic) NSAttributedString *transcriptText;
@property(readonly, nonatomic) _Bool wantsTail;

@end

