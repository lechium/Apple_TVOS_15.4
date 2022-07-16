//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class FBSProcessAssertion, FBSProcessExecutionPolicy, FBSProcessWatchdog, NSString;
@protocol FBSProcess, FBSSceneHandle;

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    id <FBSSceneHandle> _scene;	// 24 = 0x18
    FBSProcessExecutionPolicy *_executionPolicy;	// 32 = 0x20
    CDUnknownBlockType _errorHandler;	// 40 = 0x28
    _Bool _open;	// 48 = 0x30
    _Bool _invalidated;	// 49 = 0x31
    id <FBSProcess> _process;	// 56 = 0x38
    FBSProcessAssertion *_assertion;	// 64 = 0x40
    FBSProcessWatchdog *_watchdog;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000020ac0
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(copy, nonatomic) FBSProcessExecutionPolicy *executionPolicy; // @synthesize executionPolicy=_executionPolicy;
@property(nonatomic) __weak id <FBSSceneHandle> scene; // @synthesize scene=_scene;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000207e6
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000020796
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000206ac
- (id)succinctDescription;	// IMP=0x000000000002065c
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000020458
- (void)close;	// IMP=0x000000000002037f
- (void)open;	// IMP=0x000000000001fcd7
- (_Bool)_isValid;	// IMP=0x000000000001fc93
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @dynamic errorHandler;
- (void)dealloc;	// IMP=0x000000000001f7c7
- (id)initWithName:(id)arg1 scene:(id)arg2 executionPolicy:(id)arg3;	// IMP=0x000000000001f2fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

