//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString;

@interface TRCompanionAuthOperationHandler : NSObject <TROperationHandler>
{
    CDUnknownBlockType _companionAuthHandler;	// 8 = 0x8
    CDUnknownBlockType _companionAuthHandlerWithError;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000055a0
@property(copy, nonatomic) CDUnknownBlockType companionAuthHandlerWithError; // @synthesize companionAuthHandlerWithError=_companionAuthHandlerWithError;
@property(copy, nonatomic) CDUnknownBlockType companionAuthHandler; // @synthesize companionAuthHandler=_companionAuthHandler;
- (void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005044
- (void)registerMessageHandlersForSession:(id)arg1;	// IMP=0x0000000000004fa5
- (id)initWithCompanionAuthHandlerWithError:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004f32
- (id)initWithCompanionAuthHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004ebf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

