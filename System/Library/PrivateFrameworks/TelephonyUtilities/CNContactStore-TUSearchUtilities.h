//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContactStore.h>

#import <TelephonyUtilities/TUContactProvider-Protocol.h>
#import <TelephonyUtilities/TUContactsDataSource-Protocol.h>
#import <TelephonyUtilities/TUConversationContactProvider-Protocol.h>
#import <TelephonyUtilities/TUHandleContactProvider-Protocol.h>

@class NSString;

@interface CNContactStore (TUSearchUtilities) <TUContactsDataSource, TUContactProvider, TUHandleContactProvider, TUConversationContactProvider>
+ (id)tu_contactStore;	// IMP=0x000000000006a85f
+ (_Bool)tu_isAuthorized;	// IMP=0x000000000006a845
+ (long long)tu_authorizationStatus;	// IMP=0x000000000006a82a
- (id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000020e63
- (id)contactForDestinationId:(id)arg1;	// IMP=0x0000000000020cd0
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000020b99
- (id)contactForIdentifier:(id)arg1;	// IMP=0x0000000000020a70
- (id)tu_enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006ab65
- (id)tu_contactsForHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006ab53
- (id)tu_contactsByContactHandleForContactHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006a93a
- (id)tu_contactsForContactHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006a928
- (id)tu_contactsByHandleForHandles:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008ff96
- (id)tu_contactsByRemoteConversationMemberForConversations:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ddf22
- (id)tu_contactsByConversationMemberForConversationMembers:(id)arg1 keyDescriptors:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dd821

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

