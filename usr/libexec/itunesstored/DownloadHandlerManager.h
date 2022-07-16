//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DownloadHandlerManager : NSObject
{
    NSMutableDictionary *_clientsByHandlerID;	// 8 = 0x8
    NSMutableDictionary *_disconnectedSessionsByClientID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSMutableDictionary *_globalHandlersByClientID;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observersQueue;	// 48 = 0x30
    NSMutableDictionary *_sessionsByID;	// 56 = 0x38
}

+ (id)handlerManager;	// IMP=0x00400000001799c7
- (void)_sendMessage:(long long)arg1 forSessionID:(long long)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000017d802
- (id)_popDownloadSessionForSessionID:(long long)arg1;	// IMP=0x001000000017d77c
- (void)_notifyObserversOfSessionChanges:(id)arg1;	// IMP=0x001000000017d5ba
- (void)_notifyObserversOfSessionChange:(id)arg1;	// IMP=0x001000000017d55d
- (void)_notifyObserversOfHandlersChange;	// IMP=0x001000000017d3b3
- (long long)_globalHandlerIDForClientID:(id)arg1;	// IMP=0x001000000017d384
- (void)_endSessionWithID:(long long)arg1 state:(long long)arg2;	// IMP=0x001000000017d324
- (void)_endDisconnectedSessionsForClientID:(id)arg1;	// IMP=0x001000000017d298
- (id)_disconnectSessionsForHandlerID:(long long)arg1;	// IMP=0x001000000017d170
- (id)_clientForSession:(id)arg1;	// IMP=0x001000000017d100
- (id)_clientForProperties:(id)arg1;	// IMP=0x001000000017cffa
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000017cb09
- (void)useCredential:(id)arg1 forAuthenticationSessionWithID:(long long)arg2;	// IMP=0x001000000017c8f8
- (void)setSessionProperties:(id)arg1 forSessionWithID:(long long)arg2;	// IMP=0x001000000017c820
- (void)setGlobalDownloadHandlerID:(long long)arg1 forClientID:(id)arg2;	// IMP=0x001000000017c48b
- (id)sessionForSessionID:(long long)arg1;	// IMP=0x001000000017c352
- (void)retrySessionWithID:(long long)arg1;	// IMP=0x001000000017c182
- (void)resetDisavowedSessionsForHandlerWithID:(long long)arg1;	// IMP=0x001000000017bf16
- (void)removeHandlerObserver:(id)arg1;	// IMP=0x001000000017bea9
- (void)releaseDownloadSessionWithID:(long long)arg1;	// IMP=0x001000000017bcf5
- (void)rejectSpaceForAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000017bb41
- (void)performDefaultForAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000017b98d
- (void)pauseSessionWithID:(long long)arg1;	// IMP=0x001000000017b7d6
- (id)openSessionWithProperties:(id)arg1;	// IMP=0x001000000017b5e4
- (void)modifyDownloadHandlerWithID:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000017b438
- (void)finishDownloadSessionWithID:(long long)arg1;	// IMP=0x001000000017b284
- (void)failDownloadSessionWithID:(long long)arg1 error:(id)arg2;	// IMP=0x001000000017b073
- (void)endBackgroundTaskForSessionWithID:(long long)arg1 identifier:(id)arg2;	// IMP=0x001000000017af2d
- (void)disconnectDownloadSessionWithID:(long long)arg1;	// IMP=0x001000000017ad79
- (void)disavowDownloadSessionWithID:(long long)arg1 error:(id)arg2;	// IMP=0x001000000017ab33
- (void)continueAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000017a97f
- (void)closeUnstartedSessionWithID:(long long)arg1;	// IMP=0x001000000017a8d4
- (_Bool)canOpenSessionWithProperties:(id)arg1;	// IMP=0x001000000017a80e
- (void)cancelSessionWithID:(long long)arg1;	// IMP=0x001000000017a63e
- (void)cancelAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000017a48a
- (void)beginSessionWithID:(long long)arg1;	// IMP=0x0010000000179feb
- (id)beginBackgroundTaskForSessionWithID:(long long)arg1 reason:(unsigned int)arg2 expirationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000179dcf
- (void)addHandlerObserver:(id)arg1;	// IMP=0x0010000000179d62
- (void)addDownloadHandler:(id)arg1;	// IMP=0x0010000000179a44
- (void)dealloc;	// IMP=0x0010000000179917
- (id)init;	// IMP=0x0010000000179815

@end
