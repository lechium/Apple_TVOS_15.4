//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNDowntimeWhitelistContainerFetching-Protocol.h>

@class ACAccountStore, CNContactStore, CNContainer, NSNotificationCenter, NSString;
@protocol NSObject;

@interface CNDowntimeWhitelistContainerFetcher : NSObject <CNDowntimeWhitelistContainerFetching>
{
    CNContainer *_primaryiCloudContainer;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    id <NSObject> _accountStoreDidChangeNotificationToken;	// 40 = 0x28
}

+ (id)os_log;	// IMP=0x00000000000258fe
- (void).cxx_destruct;	// IMP=0x00000000000261f6
@property(readonly, nonatomic) id <NSObject> accountStoreDidChangeNotificationToken; // @synthesize accountStoreDidChangeNotificationToken=_accountStoreDidChangeNotificationToken;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)fetchPrimaryiCloudCardDAVAccountIdentifier;	// IMP=0x0000000000026056
- (id)fetchPrimaryiCloudCardDAVContainer;	// IMP=0x0000000000025da4
@property(readonly, nonatomic) CNContainer *primaryiCloudContainer; // @synthesize primaryiCloudContainer=_primaryiCloudContainer;
@property(readonly, nonatomic) CNContainer *downtimeWhitelistContainer;
- (void)dealloc;	// IMP=0x0000000000025cab
- (void)beginObservingChangeNotifications;	// IMP=0x0000000000025ac9
- (id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3;	// IMP=0x00000000000259f0
- (id)init;	// IMP=0x000000000002595a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

