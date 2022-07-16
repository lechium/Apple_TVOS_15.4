//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMChat_Internal)
+ (Class)contextClass;	// IMP=0x00000000000a19fb
- (id)_copy;	// IMP=0x00000000000a1e97
- (_Bool)_isSenderUnknown;	// IMP=0x00000000000a1e53
- (_Bool)_isInvitation;	// IMP=0x00000000000a1e4b
- (void)_setInvitation:(_Bool)arg1;	// IMP=0x00000000000a1e45
- (id)_otherHandle;	// IMP=0x00000000000a1dfa
- (id)_senderHandle;	// IMP=0x00000000000a1daf
- (void)_refreshContextWithAccountHandles;	// IMP=0x00000000000a1b0d
- (id)_serviceWithInternalName:(id)arg1;	// IMP=0x00000000000a1af4
- (id)_accountController;	// IMP=0x00000000000a1adb
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;	// IMP=0x00000000000a1a14
- (id)message;	// IMP=0x00000000000a1a0c
- (_Bool)shouldGenerateTopLevelChatItem;	// IMP=0x0000000000104515
- (id)_serviceHandle;	// IMP=0x00000000001044c9
- (id)_service;	// IMP=0x00000000001044b0
- (id)_newChatItems;	// IMP=0x00000000001044a8
- (_Bool)_hasMessageChatItem;	// IMP=0x00000000001044a0
- (_Bool)isIncomingTypingOrCancelTypingMessage;	// IMP=0x0000000000107e4b
- (_Bool)isTypingOrCancelTypingMessage;	// IMP=0x0000000000107e43
@end
