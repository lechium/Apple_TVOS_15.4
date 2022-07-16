//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHManager, CSDIncomingCallFilter, NSMutableArray, NSMutableDictionary, NSString, TUCallProviderManager;
@protocol CSDCallCenterObserver, CSDTransactionManager, CSDUserNotificationDelegate, OS_dispatch_queue;

@interface CSDRecentsController : NSObject
{
    CSDIncomingCallFilter *_incomingCallFilter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSDCallCenterObserver> _callCenterObserver;	// 24 = 0x18
    id <CSDTransactionManager> _transactionManager;	// 32 = 0x20
    CHManager *_recentsManager;	// 40 = 0x28
    TUCallProviderManager *_callProviderManager;	// 48 = 0x30
    id <CSDUserNotificationDelegate> _delegate;	// 56 = 0x38
    NSMutableArray *_transactionObjectsAwaitingCallHistory;	// 64 = 0x40
    NSMutableDictionary *_cachedCalls;	// 72 = 0x48
    NSMutableDictionary *_cachedCallUUIDsToConversationAVMode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000103e93
@property(readonly, nonatomic) NSMutableDictionary *cachedCallUUIDsToConversationAVMode; // @synthesize cachedCallUUIDsToConversationAVMode=_cachedCallUUIDsToConversationAVMode;
@property(readonly, nonatomic) NSMutableDictionary *cachedCalls; // @synthesize cachedCalls=_cachedCalls;
@property(readonly, nonatomic) NSMutableArray *transactionObjectsAwaitingCallHistory; // @synthesize transactionObjectsAwaitingCallHistory=_transactionObjectsAwaitingCallHistory;
@property(readonly, nonatomic) __weak id <CSDUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
- (id);	// IMP=0x0010000000103e4b
@property(readonly, nonatomic) id <CSDTransactionManager> transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDIncomingCallFilter *incomingCallFilter; // @synthesize incomingCallFilter=_incomingCallFilter;
- (void)callCenterObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x0010000000103981
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x001000000010349c
- (void)_endTransactionForObjectAfterCallHistoryDatabaseChanges:(id)arg1;	// IMP=0x00100000001031a9
- (id)_callHistoryTransactionObjectWithIdentifier:(id)arg1;	// IMP=0x001000000010313d
- (_Bool)_canAddCallToCallHistory:(id)arg1;	// IMP=0x001000000010306b
- (void)_handleCallHistoryChanged;	// IMP=0x0010000000102e5e
- (void)_addPendingCallToCallHistory:(id)arg1;	// IMP=0x0010000000102d1c
- (void)_addCallToCallHistory:(id)arg1;	// IMP=0x0010000000102b1f
- (void)updateBytesOfDataUsed:(long long)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 callHistoryIdentifier:(id)arg3;	// IMP=0x001000000010286a
- (void)clearNotificationsIfNecessary;	// IMP=0x0010000000102744
- (void)_callHistoryChanged:(id)arg1;	// IMP=0x00100000001025f0
- (void)dealloc;	// IMP=0x001000000010257b
- (id)initWithCallCenterObserver:(id)arg1 transactionManager:(id)arg2 queue:(id)arg3;	// IMP=0x00100000001022c6
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000010222d
- (id)init;	// IMP=0x0010000000102202

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CHManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(readonly) Class superclass;

@end

