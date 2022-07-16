//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>

@class BSServiceConnectionEndpoint, NSDictionary, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSSpringBoardCall : NSObject <NSCopying>
{
    NSString *_schemeIfNotFileURL;	// 8 = 0x8
    _Bool _callCompletionHandlerWhenFullyComplete;	// 16 = 0x10
    NSDictionary *_launchOptions;	// 24 = 0x18
    BSServiceConnectionEndpoint *_targetServiceConnectionEndpoint;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    NSXPCConnection *_clientXPCConnection;	// 48 = 0x30
}

+ (id)springBoardDeadlockPreventionQueue;	// IMP=0x000000000010aa4b
+ (id)springBoardQueue;	// IMP=0x000000000010a9ca
- (void).cxx_destruct;	// IMP=0x000000000010a981
@property _Bool callCompletionHandlerWhenFullyComplete; // @synthesize callCompletionHandlerWhenFullyComplete=_callCompletionHandlerWhenFullyComplete;
@property(retain) NSXPCConnection *clientXPCConnection; // @synthesize clientXPCConnection=_clientXPCConnection;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) BSServiceConnectionEndpoint *targetServiceConnectionEndpoint; // @synthesize targetServiceConnectionEndpoint=_targetServiceConnectionEndpoint;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010a7c3
- (id)debugDescription;	// IMP=0x000000000010a68a
- (void)callWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000010a404
@property(copy) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void)promptAndCallSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000010b866
- (void)lieWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000010b730
- (void)callSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000010aacc

@end

