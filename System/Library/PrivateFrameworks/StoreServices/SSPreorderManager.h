//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject
{
    SSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSArray *_itemKinds;	// 24 = 0x18
    SSXPCConnection *_observerConnection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_observerQueue;	// 40 = 0x28
    struct __CFArray *_observers;	// 48 = 0x30
    NSArray *_preorders;	// 56 = 0x38
}

+ (id)musicStoreItemKinds;	// IMP=0x00000000000cb69e
+ (id)bookStoreItemKinds;	// IMP=0x00000000000cb677
- (void)_sendMessageToObservers:(SEL)arg1;	// IMP=0x00000000000cc12b
- (void)_registerAsObserver;	// IMP=0x00000000000cc085
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;	// IMP=0x00000000000cbff9
- (void)_connectAsObserver;	// IMP=0x00000000000cbe38
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000cbd9f
- (void)reloadFromServer;	// IMP=0x00000000000cbd53
@property(readonly) NSArray *preorders;
@property(readonly) NSArray *itemKinds;
- (void)cancelPreorders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cb7ad
- (void)addObserver:(id)arg1;	// IMP=0x00000000000cb748
- (void)dealloc;	// IMP=0x00000000000cb5dc
- (id)initWithItemKinds:(id)arg1;	// IMP=0x00000000000cb4c4
- (id)init;	// IMP=0x00000000000cb4b0

@end

