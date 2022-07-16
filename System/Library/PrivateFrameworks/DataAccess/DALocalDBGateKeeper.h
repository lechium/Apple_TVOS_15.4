//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol DADataclassLockWatcher;

@interface DALocalDBGateKeeper : NSObject
{
    _Bool _claimedOwnershipOfContacts;	// 8 = 0x8
    _Bool _claimedOwnershipOfEvents;	// 9 = 0x9
    _Bool _claimedOwnershipOfNotes;	// 10 = 0xa
    id <DADataclassLockWatcher> _contactsLockHolder;	// 16 = 0x10
    NSMutableArray *_contactsWaiters;	// 24 = 0x18
    NSMutableSet *_waiterIDsExpectingContactsLock;	// 32 = 0x20
    id <DADataclassLockWatcher> _eventsLockHolder;	// 40 = 0x28
    NSMutableArray *_eventsWaiters;	// 48 = 0x30
    NSMutableSet *_waiterIDsExpectingEventsLock;	// 56 = 0x38
    id <DADataclassLockWatcher> _notesLockHolder;	// 64 = 0x40
    NSMutableArray *_notesWaiters;	// 72 = 0x48
    NSMutableSet *_waiterIDsExpectingNotesLock;	// 80 = 0x50
    NSString *_unitTestHackRunLoopMode;	// 88 = 0x58
}

+ (id)sharedGateKeeper;	// IMP=0x000000000003a51e
- (void).cxx_destruct;	// IMP=0x000000000003cf40
@property(retain, nonatomic) NSString *unitTestHackRunLoopMode; // @synthesize unitTestHackRunLoopMode=_unitTestHackRunLoopMode;
@property(retain, nonatomic) NSMutableSet *waiterIDsExpectingNotesLock; // @synthesize waiterIDsExpectingNotesLock=_waiterIDsExpectingNotesLock;
@property(retain, nonatomic) NSMutableArray *notesWaiters; // @synthesize notesWaiters=_notesWaiters;
@property(retain, nonatomic) id <DADataclassLockWatcher> notesLockHolder; // @synthesize notesLockHolder=_notesLockHolder;
@property(nonatomic) _Bool claimedOwnershipOfNotes; // @synthesize claimedOwnershipOfNotes=_claimedOwnershipOfNotes;
@property(retain, nonatomic) NSMutableSet *waiterIDsExpectingEventsLock; // @synthesize waiterIDsExpectingEventsLock=_waiterIDsExpectingEventsLock;
@property(retain, nonatomic) NSMutableArray *eventsWaiters; // @synthesize eventsWaiters=_eventsWaiters;
@property(retain, nonatomic) id <DADataclassLockWatcher> eventsLockHolder; // @synthesize eventsLockHolder=_eventsLockHolder;
@property(nonatomic) _Bool claimedOwnershipOfEvents; // @synthesize claimedOwnershipOfEvents=_claimedOwnershipOfEvents;
@property(retain, nonatomic) NSMutableSet *waiterIDsExpectingContactsLock; // @synthesize waiterIDsExpectingContactsLock=_waiterIDsExpectingContactsLock;
@property(retain, nonatomic) NSMutableArray *contactsWaiters; // @synthesize contactsWaiters=_contactsWaiters;
@property(retain, nonatomic) id <DADataclassLockWatcher> contactsLockHolder; // @synthesize contactsLockHolder=_contactsLockHolder;
@property(nonatomic) _Bool claimedOwnershipOfContacts; // @synthesize claimedOwnershipOfContacts=_claimedOwnershipOfContacts;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;	// IMP=0x000000000003cde4
- (id)stateString;	// IMP=0x000000000003cc7f
- (void)claimedOwnershipOfDataclasses:(long long)arg1;	// IMP=0x000000000003cbb5
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(long long)arg2 moreComing:(_Bool)arg3;	// IMP=0x000000000003c65e
- (void)unregisterWaiterForDataclassLocks:(id)arg1;	// IMP=0x000000000003c201
- (void)_sendAllClearNotifications;	// IMP=0x000000000003bd4a
- (void)registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003bd32
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003bd17
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 preempt:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b8c7
- (void)_notifyWaitersForDataclasses:(id)arg1;	// IMP=0x000000000003b3fc
- (void)_abortWaiterForWrappers:(id)arg1;	// IMP=0x000000000003af35
- (_Bool)_canWakenWaiter:(id)arg1;	// IMP=0x000000000003ac90
- (void)dealloc;	// IMP=0x000000000003a6ab
- (id)init;	// IMP=0x000000000003a573

@end

