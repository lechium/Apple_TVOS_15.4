//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKSetupFlowControllerProtocol-Protocol.h>

@class NSHashTable, NSString, PKAccount, PKAccountService, PKApplyController, PKDeviceSharingCapabilitiesManager, PKFamilyMember, PKFamilyMemberCollection, PKPaymentService;
@protocol OS_dispatch_queue;

@interface PKAccountInvitationController : NSObject <PKPaymentServiceDelegate, PKSetupFlowControllerProtocol>
{
    PKPaymentService *_paymentService;	// 8 = 0x8
    PKAccountService *_accountService;	// 16 = 0x10
    struct os_unfair_lock_s _lockObservers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    PKAccount *_account;	// 48 = 0x30
    unsigned long long _feature;	// 56 = 0x38
    long long _context;	// 64 = 0x40
    PKApplyController *_applyController;	// 72 = 0x48
    PKDeviceSharingCapabilitiesManager *_deviceCapabiltiesManager;	// 80 = 0x50
    PKFamilyMemberCollection *_familyMemberCollection;	// 88 = 0x58
    PKFamilyMember *_familyMember;	// 96 = 0x60
    unsigned long long _accessLevel;	// 104 = 0x68
}

+ (void)presentCreateAccountUserInvitationWithViewController:(id)arg1 account:(id)arg2 accountUserCollection:(id)arg3 familyMemberCollection:(id)arg4 context:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001f96ff
+ (_Bool)canInviteAccountUserWithAccount:(id)arg1;	// IMP=0x00000000001f9694
- (void).cxx_destruct;	// IMP=0x00000000001fce5c
@property(nonatomic) unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(retain, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKFamilyMemberCollection *familyMemberCollection; // @synthesize familyMemberCollection=_familyMemberCollection;
@property(readonly, nonatomic) PKDeviceSharingCapabilitiesManager *deviceCapabiltiesManager; // @synthesize deviceCapabiltiesManager=_deviceCapabiltiesManager;
@property(readonly, nonatomic) PKApplyController *applyController; // @synthesize applyController=_applyController;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned long long feature; // @synthesize feature=_feature;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)_informObserversOfFamilyMemberChange;	// IMP=0x00000000001fcdb1
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fcbbd
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000001fcb64
- (void)registerObserver:(id)arg1;	// IMP=0x00000000001fcb0b
- (void)_fetchFamilyMemberDeviceCapabilties;	// IMP=0x00000000001fca49
- (id)_filteredFamilyMembersFromFamilyMembers:(id)arg1 accountUsers:(id)arg2 invitations:(id)arg3;	// IMP=0x00000000001fc583
- (void)accessLevelOptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fc022
- (void)familyMembersForceReload:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fac1f
- (void)didAddAccountPendingFamilyMembers:(id)arg1;	// IMP=0x00000000001fac09
- (long long)familyCircleCount;	// IMP=0x00000000001fabc1
- (_Bool)isCurrentFamilyMemberAnOrganizer;	// IMP=0x00000000001fab79
- (void)nextViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001faae0
- (void)didUpdateFamilyMembers:(id)arg1;	// IMP=0x00000000001fa6b2
- (id)initWithAccount:(id)arg1 context:(long long)arg2 familyMemberCollection:(id)arg3;	// IMP=0x00000000001f935b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

