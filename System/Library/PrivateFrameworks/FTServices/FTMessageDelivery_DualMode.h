//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FTServices/FTMessageDeliveryProtocol-Protocol.h>
#import <FTServices/FTMessageQueueDelegate-Protocol.h>

@class FTMessageDelivery, FTMessageQueue, IDSBaseMessage, NSArray, NSString;

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate>
{
    FTMessageDelivery *_httpDelivery;	// 8 = 0x8
    FTMessageDelivery *_apsDelivery;	// 16 = 0x10
    FTMessageQueue *_dualModeQueue;	// 24 = 0x18
    NSString *_userAgentString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000069d4
- (void)invalidate;	// IMP=0x0000000000006999
@property(readonly) NSArray *queuedMessages;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;	// IMP=0x0000000000006938
- (void)handleTranslationAndDeliveryOnAPS:(id)arg1;	// IMP=0x00000000000059fb
- (void)dequeueMessageIfNeeded;	// IMP=0x000000000000564d
- (void)cancelMessage:(id)arg1;	// IMP=0x00000000000055ed
- (_Bool)sendMessage:(id)arg1;	// IMP=0x00000000000054c2
@property(copy, nonatomic) NSString *userAgent;
- (id)initWithPreferedType:(long long)arg1;	// IMP=0x0000000000005373
- (void)_enterBackOffMode;	// IMP=0x00000000000052c7
- (_Bool)_isInBackoffMode;	// IMP=0x0000000000004ece
- (_Bool)_shouldUseDualDeliveryForMessage:(id)arg1;	// IMP=0x00000000000042c2
- (long long)_randomPercentageChanceForDualDelivery;	// IMP=0x000000000000429a

// Remaining properties
@property(readonly) NSArray *allMessages;
@property(readonly) _Bool busy;
@property(readonly) IDSBaseMessage *currentMessage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool hasQueuedItems;
@property(readonly) unsigned long long hash;
@property _Bool logToRegistration;
@property unsigned long long maxConcurrentMessages;
@property(readonly) long long maxLargeMessageSize;
@property(readonly) long long maxMessageSize;
@property _Bool retryInAirplaneMode;
@property(readonly) Class superclass;

@end
