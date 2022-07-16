//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNTask.h>

@class CNChangeHistoryEventFactory, CNSaveRequest;
@protocol CNChangeHistoryEventVisitorPrivate;

__attribute__((visibility("hidden")))
@interface CNSaveRequestVisitationTask : CNTask
{
    CNSaveRequest *_saveRequest;	// 24 = 0x18
    id <CNChangeHistoryEventVisitorPrivate> _visitor;	// 32 = 0x20
    CNChangeHistoryEventFactory *_factory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b3347
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly) id <CNChangeHistoryEventVisitorPrivate> visitor; // @synthesize visitor=_visitor;
@property(readonly) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)sendDifferentMeCardEvent;	// IMP=0x00000000000b3219
- (void)sendPreferredContactForImageEvents;	// IMP=0x00000000000b3135
- (void)sendPreferredContactForNameEvents;	// IMP=0x00000000000b3055
- (void)sendUnlinkContactEvents;	// IMP=0x00000000000b2f74
- (void)sendLinkContactsEvents;	// IMP=0x00000000000b2e8d
- (void)sendRemoveSubgroupFromGroupEvents;	// IMP=0x00000000000b2da9
- (void)sendAddSubgroupToGroupEvents;	// IMP=0x00000000000b2cc5
- (void)sendRemoveMemberFromGroupEvents;	// IMP=0x00000000000b2be1
- (void)sendAddMemberToGroupEvents;	// IMP=0x00000000000b2afd
- (void)sendDeletedGroupEvents;	// IMP=0x00000000000b2a1c
- (void)sendUpdatedGroupEvents;	// IMP=0x00000000000b293b
- (void)sendAddedGroupEvents;	// IMP=0x00000000000b2857
- (void)sendDeletedContactEvents;	// IMP=0x00000000000b2776
- (void)sendUpdatedContactEvents;	// IMP=0x00000000000b2695
- (void)sendAddedContactEvents;	// IMP=0x00000000000b25b1
- (id)run:(id *)arg1;	// IMP=0x00000000000b24c9
- (id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3;	// IMP=0x00000000000b23f1

@end
