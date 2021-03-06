//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDMessageSortOrderAssigner : NSObject
{
}

- (void)assignAndPersistSortIDForIncomingMessage:(id)arg1 onChat:(id)arg2;	// IMP=0x00000000000530ef
- (void)assignSortIDToIncomingMessage:(id)arg1 onChat:(id)arg2;	// IMP=0x000000000005304c
- (void)persistMessage:(id)arg1;	// IMP=0x0000000000053012
- (void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)arg1 onChat:(id)arg2;	// IMP=0x0000000000052d31
- (void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)arg1 existingMessagesWithSameReplyToGUID:(id)arg2;	// IMP=0x00000000000529d0
- (id)copyOfMessagesWithReplyToGUID:(id)arg1;	// IMP=0x0000000000052998
- (id)messageWithGUID:(id)arg1;	// IMP=0x0000000000052960

@end

