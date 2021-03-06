//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDAutoReplying-Protocol.h>

@class NSString;
@protocol IMDAutoReplyDelegate, OS_dispatch_queue;

@interface IMDAvailabilityAutoReplier : NSObject <IMDAutoReplying>
{
    id <IMDAutoReplyDelegate> _replyDelegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_privateWorkQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004a413
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // @synthesize privateWorkQueue=_privateWorkQueue;
@property(nonatomic) __weak id <IMDAutoReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
- (_Bool)_sosURLMatchInText:(id)arg1;	// IMP=0x000000000004a2cd
- (_Bool)_sosTransportValidForMessage:(id)arg1;	// IMP=0x000000000004a262
- (_Bool)_messageIsSOS:(id)arg1;	// IMP=0x000000000004a140
- (_Bool)_hasRecentOutgoingMessagesInChat:(id)arg1;	// IMP=0x0000000000049fed
- (_Bool)_favoritesContainsParticipants:(id)arg1;	// IMP=0x0000000000049d18
- (_Bool)_contactsContainsParticipants:(id)arg1;	// IMP=0x0000000000049b42
- (_Bool)_shouldSendTextAutoReplyForChat:(id)arg1;	// IMP=0x0000000000049a09
- (void)_sendTextAutoReplyToChat:(id)arg1 withUrgentBreakthroughInstructions:(_Bool)arg2;	// IMP=0x0000000000049790
- (id)_autoReplyMessageTextWithUrgentBreakthroughInstructions:(_Bool)arg1;	// IMP=0x00000000000496ae
- (_Bool)_messageHasLegacyUrgentTriggerMatchInText:(id)arg1;	// IMP=0x00000000000494e4
- (_Bool)_isSMSChat:(id)arg1;	// IMP=0x0000000000049496
- (void)iterateRecentMessagesInChat:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000048aa1
- (_Bool)_haveRecentUrgentMessageInGracePeriodForChat:(id)arg1;	// IMP=0x00000000000484fc
- (_Bool)_shouldIgnoreDoNotDisturbForMessages:(id)arg1 inChat:(id)arg2;	// IMP=0x00000000000481d4
- (id)_messageGuidsForMessages:(id)arg1;	// IMP=0x0000000000047ff0
- (_Bool)_messageItemSupportsAvailabilityReply:(id)arg1;	// IMP=0x0000000000047de9
- (_Bool)_messageItemSupportsBreakthroughNotification:(id)arg1;	// IMP=0x0000000000047c59
- (id)_messageItemsSupportingBreakthroughNotifications:(id)arg1;	// IMP=0x00000000000479eb
- (_Bool)_haveRecentlySentUnavailabilityAutoReplyMessageToChat:(id)arg1;	// IMP=0x0000000000047625
- (_Bool)_isInDrivingFocus;	// IMP=0x00000000000473d0
- (_Bool)_deviceSupportsSMSAutoReplyForChat:(id)arg1;	// IMP=0x0000000000047337
- (_Bool)_localDeviceHasSIMMatchingChat:(id)arg1;	// IMP=0x0000000000047308
- (_Bool)_deviceSupportsiMessageAutoReply;	// IMP=0x00000000000472bf
- (_Bool)_deviceIsPhone;	// IMP=0x000000000004726f
- (void)_sendTextAutoReplyIfNecessaryForMessages:(id)arg1 withUrgentBreakthroughInstructions:(_Bool)arg2 inChat:(id)arg3;	// IMP=0x000000000004717f
- (void)_sendDeliveredQuietelyForMessages:(id)arg1 forIncomingMessageFromIDSID:(id)arg2 inChat:(id)arg3;	// IMP=0x0000000000046eb4
- (id)_messageItemsSupportingAvailabilityReplyFromItems:(id)arg1;	// IMP=0x0000000000046c46
- (_Bool)_messageSenderEligibleToReceiveAvailabilityInformation:(id)arg1;	// IMP=0x0000000000046ad7
- (_Bool)_chatEligibleForAvailabilityInformation:(id)arg1;	// IMP=0x00000000000469e0
- (id)_dndHandleForIMDHandle:(id)arg1;	// IMP=0x0000000000046931
- (_Bool)_userIsAvailableToHandle:(id)arg1;	// IMP=0x00000000000467cf
- (_Bool)sendSMSAutoReplyDuringUnavailability;	// IMP=0x0000000000046784
- (_Bool)kettleFeatureEnabled;	// IMP=0x0000000000046739
- (void)_processMessagesForAvailabilityAutoReply:(id)arg1 forIncomingMessageFromIDSID:(id)arg2 inChat:(id)arg3;	// IMP=0x000000000004645f
- (void)processMessages:(id)arg1 inChat:(id)arg2 fromIDSID:(id)arg3;	// IMP=0x000000000004630e
- (id)init;	// IMP=0x00000000000462b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

