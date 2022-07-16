//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFCoreAnalyticsEvent-Protocol.h>

@class NSDictionary, NSString;

@interface SFPairedUnlockEvent : NSObject <SFCoreAnalyticsEvent>
{
    _Bool _succeeded;	// 8 = 0x8
    _Bool _phoneAutoUnlockEnabled;	// 9 = 0x9
    _Bool _canRelock;	// 10 = 0xa
    _Bool _relockedWatch;	// 11 = 0xb
    _Bool _usingEscrowRecord;	// 12 = 0xc
    _Bool _retriedWithEscrowRecord;	// 13 = 0xd
    unsigned short _failureReason;	// 14 = 0xe
    unsigned short _attemptHourLocal;	// 16 = 0x10
    unsigned int _keyExchangeDuration;	// 20 = 0x14
    unsigned int _pillDelay;	// 24 = 0x18
    unsigned int _confirmationDuration;	// 28 = 0x1c
    unsigned int _totalUnlockProcessDuration;	// 32 = 0x20
    unsigned int _totalUnlockDuration;	// 36 = 0x24
    NSString *_bannerDismissReason;	// 40 = 0x28
    long long _bannerDismissalCount;	// 48 = 0x30
    long long _phoneState;	// 56 = 0x38
    NSString *_watchHardwareModel;	// 64 = 0x40
    NSString *_watchSoftwareVersion;	// 72 = 0x48
}

+ (id)eventName;	// IMP=0x000000000004bef8
- (void).cxx_destruct;	// IMP=0x000000000004c61d
@property(nonatomic) unsigned int totalUnlockDuration; // @synthesize totalUnlockDuration=_totalUnlockDuration;
@property(nonatomic) unsigned int totalUnlockProcessDuration; // @synthesize totalUnlockProcessDuration=_totalUnlockProcessDuration;
@property(nonatomic) unsigned int confirmationDuration; // @synthesize confirmationDuration=_confirmationDuration;
@property(nonatomic) unsigned int pillDelay; // @synthesize pillDelay=_pillDelay;
@property(nonatomic) unsigned int keyExchangeDuration; // @synthesize keyExchangeDuration=_keyExchangeDuration;
@property(copy, nonatomic) NSString *watchSoftwareVersion; // @synthesize watchSoftwareVersion=_watchSoftwareVersion;
@property(copy, nonatomic) NSString *watchHardwareModel; // @synthesize watchHardwareModel=_watchHardwareModel;
@property(nonatomic) _Bool retriedWithEscrowRecord; // @synthesize retriedWithEscrowRecord=_retriedWithEscrowRecord;
@property(nonatomic) _Bool usingEscrowRecord; // @synthesize usingEscrowRecord=_usingEscrowRecord;
@property(nonatomic) long long phoneState; // @synthesize phoneState=_phoneState;
@property(nonatomic) long long bannerDismissalCount; // @synthesize bannerDismissalCount=_bannerDismissalCount;
@property(nonatomic) NSString *bannerDismissReason; // @synthesize bannerDismissReason=_bannerDismissReason;
@property(nonatomic) _Bool relockedWatch; // @synthesize relockedWatch=_relockedWatch;
@property(nonatomic) _Bool canRelock; // @synthesize canRelock=_canRelock;
@property(nonatomic) _Bool phoneAutoUnlockEnabled; // @synthesize phoneAutoUnlockEnabled=_phoneAutoUnlockEnabled;
@property(nonatomic) unsigned short attemptHourLocal; // @synthesize attemptHourLocal=_attemptHourLocal;
@property(nonatomic) unsigned short failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
- (void)submitEvent;	// IMP=0x000000000004c451
@property(readonly, copy, nonatomic) NSDictionary *eventPayload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

