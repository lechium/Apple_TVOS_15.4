//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMSpamFilterHelper : NSObject
{
}

+ (id)mapID:(id)arg1 usingKey:(id)arg2;	// IMP=0x0000000000058437
+ (id)internationalSpamFilterLearnMoreURL;	// IMP=0x000000000005838d
+ (_Bool)isFilterUnknownSendersEnabled;	// IMP=0x0000000000058375
+ (_Bool)isChineseSpamFilteringEnabled;	// IMP=0x00000000000581eb
+ (_Bool)isInternationalSpamFilteringEnabled;	// IMP=0x0000000000058018
+ (id)_cnRecordForAliases:(id)arg1;	// IMP=0x0000000000057f6e
+ (_Bool)isKnownContact:(id)arg1;	// IMP=0x0000000000057e09
+ (id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2;	// IMP=0x00000000000578d7
+ (void)participantsAreiMessagable:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000576bb
+ (_Bool)anyParticipantIsKnownContact:(id)arg1;	// IMP=0x000000000005754e
+ (_Bool)anyParticipantIsCandidateForBlackhole:(id)arg1;	// IMP=0x00000000000573e1
+ (_Bool)senderIsKnownContact:(id)arg1;	// IMP=0x00000000000573cf
+ (_Bool)senderIsCandidateForBlackhole:(id)arg1;	// IMP=0x0000000000057222
+ (_Bool)senderIsChinaHandle:(id)arg1;	// IMP=0x0000000000057199
+ (_Bool)senderIsCandidateForSMSDowngrade:(id)arg1;	// IMP=0x0000000000057028
+ (_Bool)accountCountryIsCandidateForSMSFilter:(id)arg1;	// IMP=0x0000000000056f13
+ (_Bool)accountCountryIsCandidateForHawking:(id)arg1;	// IMP=0x0000000000056e6e
+ (_Bool)accountRegionIsCandidateForHawking:(id)arg1;	// IMP=0x0000000000056dc9
+ (_Bool)receivingID:(id)arg1 isCountryCode:(id)arg2;	// IMP=0x0000000000056d3a
+ (_Bool)receiverIsCandidateForSMSFilter:(id)arg1;	// IMP=0x0000000000056c7e
+ (_Bool)receiverIsCandidateForHawking:(id)arg1;	// IMP=0x0000000000056c1b
+ (_Bool)isBlackholeEnabledForEligibleAccounts:(_Bool)arg1;	// IMP=0x0000000000056b7e
+ (_Bool)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(_Bool)arg3 withOtherParticipants:(id)arg4 givenHistory:(_Bool)arg5 forEligibleAccounts:(_Bool)arg6;	// IMP=0x0000000000056a2c
+ (_Bool)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(_Bool)arg3 givenHistory:(_Bool)arg4 forEligibleAccounts:(_Bool)arg5;	// IMP=0x00000000000568b5
+ (_Bool)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(_Bool)arg3;	// IMP=0x00000000000567da
+ (_Bool)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(_Bool)arg3 withConversationDowngradeState:(_Bool)arg4 andConversationHistoryState:(_Bool)arg5;	// IMP=0x0000000000056608

@end

