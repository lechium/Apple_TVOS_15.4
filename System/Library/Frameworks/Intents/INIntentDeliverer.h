//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INIntentDelivering-Protocol.h>
#import <Intents/INIntentParameterOptionsProviding-Protocol.h>

@class NSString;
@protocol INIntentDeliveringDelegate, OS_dispatch_queue;

@interface INIntentDeliverer : NSObject <INIntentParameterOptionsProviding, INIntentDelivering>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <INIntentDeliveringDelegate> _delegate;	// 16 = 0x10
    CDStruct_4c969caf _auditToken;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000000034e163
- (void).cxx_destruct;	// IMP=0x000000000034ae9a
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <INIntentDeliveringDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_stopSendingUpdatesForIntent:(id)arg1 fromConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000034ad92
- (void)_startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 fromConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000034ac7b
- (void)_deliverIntent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000034abb8
- (void)_processIntent:(id)arg1 intentResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000034aa8f
- (_Bool)_updateIntent:(id)arg1 intentSlotDescription:(id)arg2 resolutionResultDataProvider:(id)arg3;	// IMP=0x000000000034a3d2
- (void)_processDefaultValue:(id)arg1 forIntent:(id)arg2 parameterNamed:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000349ba2
- (CDUnknownBlockType)_processOptionsForIntent:(id)arg1 parameterNamed:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000349a8a
- (CDUnknownBlockType)_processResolutionDataProviderForIntent:(id)arg1 intentSlotDescription:(id)arg2 updateIntent:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000034995b
- (CDUnknownBlockType)_processIntentResponseCompletionHandlerWithIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000349865
- (void)_invokeIntentHandlerMethodForIntent:(id)arg1 intentHandler:(id)arg2 parameterNamed:(id)arg3 keyForSelectors:(id)arg4 executionHandler:(CDUnknownBlockType)arg5 unimplementedHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000349620
- (void)_resolveIntentParameter:(id)arg1 forIntent:(id)arg2 intentHandler:(id)arg3 updateIntent:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000000034905c
- (void)getSupportsParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000348f71
- (void)getParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 searchTerm:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000348e44
- (void)stopSendingUpdatesForIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000348d45
- (void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000348c14
- (void)handleIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000348a04
- (void)confirmIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003487f4
- (void)resolveIntentParameter:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003486ff
- (void)resolveIntentParameters:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003482b2
- (void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000348178
- (void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 searchTerm:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000003480ba
- (id)initWithQueue:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;	// IMP=0x0000000000348034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

