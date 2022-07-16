//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/ACMonitoredAccountStoreDelegateProtocol-Protocol.h>
#import <WatchListKit/PBSUserProfileManagerObserver-Protocol.h>

@class ACAccount, ACMonitoredAccountStore, NSArray, NSSet, NSString, PBSUserProfileManager;

@interface WLKAccountMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol, PBSUserProfileManagerObserver>
{
    _Bool _needsGroupAccountsRefresh;	// 8 = 0x8
    ACAccount *_activeAccount;	// 16 = 0x10
    NSArray *_accountsForGroupRecommendation;	// 24 = 0x18
    ACMonitoredAccountStore *_monitoredAccountStore;	// 32 = 0x20
    PBSUserProfileManager *_userProfileManager;	// 40 = 0x28
    NSSet *_groupAltDSIDs;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000009bc3
- (void).cxx_destruct;	// IMP=0x000000000000ab05
@property(retain, nonatomic) NSSet *groupAltDSIDs; // @synthesize groupAltDSIDs=_groupAltDSIDs;
@property(retain, nonatomic) PBSUserProfileManager *userProfileManager; // @synthesize userProfileManager=_userProfileManager;
@property(nonatomic) _Bool needsGroupAccountsRefresh; // @synthesize needsGroupAccountsRefresh=_needsGroupAccountsRefresh;
@property(retain, nonatomic) ACMonitoredAccountStore *monitoredAccountStore; // @synthesize monitoredAccountStore=_monitoredAccountStore;
@property(readonly, nonatomic) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
- (void)accountWasRemoved:(id)arg1;	// IMP=0x000000000000aa66
- (void)accountWasModified:(id)arg1;	// IMP=0x000000000000aa34
- (void)accountWasAdded:(id)arg1;	// IMP=0x000000000000aa02
- (void)userProfileManager:(id)arg1 didUpdateGroupRecommendationsSession:(id)arg2;	// IMP=0x000000000000a9ed
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x000000000000a9e7
- (void)_refreshGroupAltDSIDsWithGroupSession:(id)arg1;	// IMP=0x000000000000a764
- (void)_refreshGroupRecommendationAccounts;	// IMP=0x000000000000a501
- (_Bool)_shouldNotifyStoreFrontChange:(id)arg1 newAccount:(id)arg2;	// IMP=0x000000000000a35c
- (_Bool)_shouldNotifyAccountChange:(id)arg1 newAccount:(id)arg2;	// IMP=0x000000000000a1ae
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x0000000000009f49
@property(readonly, copy, nonatomic) NSArray *accountsForGroupRecommendation; // @synthesize accountsForGroupRecommendation=_accountsForGroupRecommendation;
- (void)dealloc;	// IMP=0x0000000000009e51
- (id)init;	// IMP=0x0000000000009c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
