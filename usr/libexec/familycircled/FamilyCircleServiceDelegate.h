//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAActivityManager, NSString;
@protocol FAQueueProvider;

@interface FamilyCircleServiceDelegate : NSObject
{
    FAActivityManager *_activityManager;	// 8 = 0x8
    id <FAQueueProvider> _queueProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000b337
@property(readonly, nonatomic) id <FAQueueProvider> queueProvider; // @synthesize queueProvider=_queueProvider;
- (void)runHeartbeatWithOptions:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000afd0
- (id)_familyGrandSlamSignerWithAccountStore:(id)arg1;	// IMP=0x001000000000af1f
- (id)_grandSlamSignerWithAccountStore:(id)arg1;	// IMP=0x001000000000ae8e
- (id)_grandSlamAccountForAccountStore:(id)arg1;	// IMP=0x001000000000ae0b
- (void)didDeleteAccount:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ade9
- (void)didAddAccount:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000adc7
- (void)fetchFollowupsWithAltDSID:(id)arg1 options:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ac2a
- (void)fetchEligibilityForPropertyName:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a9ea
- (void)launchOutOfProcessFamilyWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a8ac
- (void)launchICloudFamilySettingsWithOptions:(id)arg1;	// IMP=0x001000000000a813
- (void)updateFamilyMemberFlagWithDSID:(id)arg1 flag:(id)arg2 enabled:(_Bool)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000000a4d7
- (void)didReceiveFamilyEventPushNotificationWithPayload:(id)arg1 options:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a3fa
- (void)clearFamilyCircleCacheWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a22b
- (void)registerPushToken:(id)arg1 options:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a005
- (void)fetchFamilyMemberPhotoWithDSID:(id)arg1 hashedDSID:(id)arg2 size:(long long)arg3 localFallback:(_Bool)arg4 options:(id)arg5 replyBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000009af0
- (void)removeFamilyMemberWithDSID:(id)arg1 options:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000983d
- (void)fetchFamilyCircleWithCachePolicy:(unsigned long long)arg1 signedInAccountShouldBeApprover:(_Bool)arg2 options:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009407
- (id)_networkService;	// IMP=0x0010000000009337
- (id)_primaryAccount;	// IMP=0x00100000000092f1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000009253
- (id)initWithQueueProvider:(id)arg1;	// IMP=0x00100000000091a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
