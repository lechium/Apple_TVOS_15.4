//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UMMobileKeyBag : NSObject
{
}

+ (_Bool)_start:(_Bool)arg1 syncBubbleForUser:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000000215f
+ (int)_foregroundUID;	// IMP=0x0000000000002154
+ (_Bool)clearSyncBubblesWithOutError:(id *)arg1;	// IMP=0x0000000000002140
+ (_Bool)stopSyncBubbleForUser:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000002126
+ (_Bool)startSyncBubbleForUser:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000002109
+ (id)syncBubbleMachServiceNamesForUser:(id)arg1;	// IMP=0x0000000000002101
+ (id)allSyncBubbleUsers;	// IMP=0x00000000000020f9
+ (id)queuedSyncBubbleUsers;	// IMP=0x0000000000001fd0
+ (id)currentSyncBubbleUser;	// IMP=0x0000000000001fc8
+ (id)dictionaryRepresentationOfTask:(id)arg1;	// IMP=0x0000000000001faf
+ (id)taskFromDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000001fa7
+ (double)passcodeBackOffIntervalForUser:(id)arg1;	// IMP=0x0000000000001f99
+ (id)personaSpecForUser:(id)arg1;	// IMP=0x0000000000001f91
+ (_Bool)writeAttributesToDiskForUser:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000001eec
+ (void)updateLoginSessionType;	// IMP=0x0000000000001ee6
+ (_Bool)isLoginSession;	// IMP=0x0000000000001ede
+ (_Bool)fetchAttributesForUser:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000001ed6
+ (id)userFromAttributes:(id)arg1;	// IMP=0x0000000000001ebd
+ (id)deleteUser:(id)arg1;	// IMP=0x0000000000001eb5
+ (id)loadUser:(id)arg1 withPasscodeData:(id)arg2;	// IMP=0x0000000000001e75
+ (void)currentUserSwitchContextHasBeenUsed;	// IMP=0x0000000000001e6f
+ (id)currentUserSwitchContext;	// IMP=0x0000000000001e67
+ (_Bool)adoptPersonaVoucherForAccoutID:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000001df3
+ (id)currentPersona;	// IMP=0x0000000000001dda
+ (id)allUsersWithFilter:(_Bool)arg1;	// IMP=0x0000000000001dcd
+ (id)lastLoggedInUser;	// IMP=0x0000000000001dc5
+ (id)loginUser;	// IMP=0x0000000000001c9a
+ (id)currentUser;	// IMP=0x0000000000001b64
+ (unsigned int)lastLoggedInUID;	// IMP=0x0000000000001b5c
+ (unsigned long long)userQuotaSize;	// IMP=0x0000000000001b54
+ (unsigned long long)maxNumberOfUsers;	// IMP=0x0000000000001b44
+ (unsigned long long)userType;	// IMP=0x0000000000001b3c
+ (_Bool)isInternalBuild;	// IMP=0x0000000000001b34
+ (_Bool)inSyncBubble;	// IMP=0x0000000000001a99
+ (_Bool)isMultiUser;	// IMP=0x0000000000001a91
+ (void)initialize;	// IMP=0x0000000000001a8b

@end

