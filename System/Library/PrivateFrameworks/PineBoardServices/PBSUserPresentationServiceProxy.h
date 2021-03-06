//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/PBSUserPresentationServiceInterface-Protocol.h>

@class NSHashTable, NSMapTable, NSString;
@protocol PBSUserPresentationServiceInterface;

@interface PBSUserPresentationServiceProxy : NSObject <PBSUserPresentationServiceInterface>
{
    NSMapTable *_pendingCompletionHandlers;	// 8 = 0x8
    NSHashTable *_pendingMessageReplies;	// 16 = 0x10
    id <PBSUserPresentationServiceInterface> _remoteProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000030890
@property(retain, nonatomic) id <PBSUserPresentationServiceInterface> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property(readonly, nonatomic) NSHashTable *pendingMessageReplies; // @synthesize pendingMessageReplies=_pendingMessageReplies;
@property(readonly, nonatomic) NSMapTable *pendingCompletionHandlers; // @synthesize pendingCompletionHandlers=_pendingCompletionHandlers;
- (CDUnknownBlockType)_removePendingReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030670
- (CDUnknownBlockType)_removeCompletionHandlerForRequest:(id)arg1;	// IMP=0x0000000000030540
- (void)dismissUIWithRequest:(id)arg1;	// IMP=0x00000000000303e0
- (void)messageUIWithRequest:(id)arg1 message:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002fc50
- (void)presentUIWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f200
- (void)handleConnectionInterruption:(id)arg1;	// IMP=0x000000000002ea10
- (id)initWithRemoteServiceProxy:(id)arg1;	// IMP=0x000000000002e8e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

