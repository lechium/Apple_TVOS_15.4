//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUNeighborhoodActivityConduitXPCClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUNeighborhoodActivityConduitXPCClientDelegate;

@interface TUNeighborhoodActivityConduitXPCClient : NSObject <TUNeighborhoodActivityConduitXPCClient>
{
    int _token;	// 8 = 0x8
    id <TUNeighborhoodActivityConduitXPCClientDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSXPCConnection *_xpcConnection;	// 32 = 0x20
}

+ (id)neighborhoodActivityServerXPCInterface;	// IMP=0x000000000007ea6d
+ (id)neighborhoodActivityClientXPCInterface;	// IMP=0x000000000007e77b
+ (id)allowedXPCClasses;	// IMP=0x000000000007e648
+ (void)setAsynchronousServer:(id)arg1;	// IMP=0x000000000007cc92
+ (id)asynchronousServer;	// IMP=0x000000000007cc79
- (void).cxx_destruct;	// IMP=0x000000000007ee98
@property(nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TUNeighborhoodActivityConduitXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007e59d
- (id)server;	// IMP=0x000000000007e514
- (oneway void)leftSplitSessionForConversationWithUUID:(id)arg1;	// IMP=0x000000000007df6d
- (oneway void)joinedSplitSessionForConversationWithUUID:(id)arg1 fromDevice:(id)arg2;	// IMP=0x000000000007de3c
- (oneway void)contactInfoUpdated:(id)arg1 fromDevice:(id)arg2;	// IMP=0x000000000007dd0b
- (oneway void)joinableConversationDisappeared:(id)arg1 fromDevice:(id)arg2;	// IMP=0x000000000007dbda
- (oneway void)joinableConversationAppeared:(id)arg1 onDevice:(id)arg2;	// IMP=0x000000000007daa9
- (void)cancelPendingJoinRequest;	// IMP=0x000000000007d98e
- (void)joinConversation:(id)arg1 onDevice:(id)arg2 withContext:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000007d73b
- (void)getCurrentSplitSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d571
- (void)fetchNearbyConversations:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d34f
- (void)fetchNearbyConversationsWithProfileIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007d13f
- (void)ensureConnection;	// IMP=0x000000000007d043
- (void)dealloc;	// IMP=0x000000000007cfa5
- (id)init;	// IMP=0x000000000007cca6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

