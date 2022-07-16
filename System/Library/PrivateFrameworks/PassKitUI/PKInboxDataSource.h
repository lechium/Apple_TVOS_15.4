//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSMutableArray, NSString, PKPaymentService;
@protocol PKInboxDataSourceDelegate;

@interface PKInboxDataSource : NSObject <PKPaymentServiceDelegate>
{
    id <PKInboxDataSourceDelegate> _delegate;	// 8 = 0x8
    PKPaymentService *_paymentService;	// 16 = 0x10
    NSMutableArray *_activeInboxMessages;	// 24 = 0x18
    NSMutableArray *_hiddenInboxMessages;	// 32 = 0x20
    NSMutableArray *_expiredInboxMessages;	// 40 = 0x28
    NSMutableArray *_inboxUpdateCompletionBlocks;	// 48 = 0x30
    _Bool _updatingInbox;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 60 = 0x3c
    _Bool _hasInboxMessages;	// 64 = 0x40
    _Bool _inboxVisible;	// 65 = 0x41
    unsigned long long _badgeCount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003ccb0d
- (void)_accountUserInvitationsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003cc2de
- (void)_updateInboxMessages;	// IMP=0x00000000003cb960
- (void)featureApplicationChanged:(id)arg1;	// IMP=0x00000000003cb94e
- (void)featureApplicationRemoved:(id)arg1;	// IMP=0x00000000003cb93c
- (void)featureApplicationAdded:(id)arg1;	// IMP=0x00000000003cb92a
@property(readonly, nonatomic) _Bool hasInboxMessages; // @synthesize hasInboxMessages=_hasInboxMessages;
@property(readonly, nonatomic) _Bool inboxVisible; // @synthesize inboxVisible=_inboxVisible;
@property(readonly, nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)updateInboxWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003cb828
- (id)inboxMessageWithIdentifier:(id)arg1;	// IMP=0x00000000003cb4af
- (id)expiredInboxMessages;	// IMP=0x00000000003cb471
- (id)activeInboxMessages;	// IMP=0x00000000003cb433
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000003cb367

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
