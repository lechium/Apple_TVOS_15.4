//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKNotificationPreferences-Protocol.h>

@class CalPreferences, NSString;

@interface EKCalendarPreferences : NSObject <EKNotificationPreferences>
{
    CalPreferences *_preferences;	// 8 = 0x8
    CalPreferences *_calPreferences;	// 16 = 0x10
}

+ (id)calendarPreferences;	// IMP=0x0000000000102510
- (void).cxx_destruct;	// IMP=0x0000000000102e17
@property(retain) CalPreferences *calPreferences; // @synthesize calPreferences=_calPreferences;
- (void)_updateDisplayOrderForSources:(id)arg1 key:(id)arg2;	// IMP=0x0000000000102dce
- (unsigned long long)_displayOrderForSourceWithIdentifier:(id)arg1 key:(id)arg2;	// IMP=0x0000000000102d0f
- (void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)arg1;	// IMP=0x0000000000102cf6
- (unsigned long long)displayOrderForAccountWithSourceIdentifier:(id)arg1;	// IMP=0x0000000000102cdd
- (id)displayOrderForAccounts;	// IMP=0x0000000000102ca7
- (void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)arg1;	// IMP=0x0000000000102c8e
- (unsigned long long)displayOrderForLocalGroupWithSourceIdentifier:(id)arg1;	// IMP=0x0000000000102c75
- (id)_keyForDelegateID:(id)arg1;	// IMP=0x0000000000102c2d
- (_Bool)_checkedStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 withKey:(id)arg3;	// IMP=0x0000000000102bac
- (id)_disabledOrCollapsedItemsForDelegateID:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000102ac6
- (void)_updateStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 state:(_Bool)arg3 withKey:(id)arg4 withNotification:(id)arg5;	// IMP=0x00000000001028c1
- (_Bool)expandedStateForTopLevelNodeWithUID:(id)arg1;	// IMP=0x0000000000102844
- (void)updateExpandedStateForTopLevelNodeWithUID:(id)arg1 state:(_Bool)arg2;	// IMP=0x0000000000102812
- (id)disabledCalendarsForMainWindow;	// IMP=0x00000000001027f9
- (id)disabledCalendarsForDelegateWithUID:(id)arg1;	// IMP=0x00000000001027e0
- (_Bool)checkedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2;	// IMP=0x000000000010275f
- (void)updateCheckedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2 state:(_Bool)arg3;	// IMP=0x0000000000102732
@property _Bool timeToLeaveEnabled;
@property _Bool showDeclinedEventsEnabled;
@property(nonatomic) _Bool invitationNotificationsDisabled;
@property(nonatomic) _Bool sharedCalendarNotificationsDisabled;
- (id)init;	// IMP=0x0000000000102565

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
