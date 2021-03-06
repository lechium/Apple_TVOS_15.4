//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScoreBoard/BSDescriptionProviding-Protocol.h>
#import <ScoreBoard/NSCopying-Protocol.h>

@class NSString;
@protocol SCRAsyncTargetContextProvider, SCRSyncTargetContextProvider, SCRTargetContextProvider;

@interface SCRTaskTargetConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    NSString *_targetIdentifier;	// 8 = 0x8
    id <SCRSyncTargetContextProvider> _syncContextProvider;	// 16 = 0x10
    id <SCRAsyncTargetContextProvider> _asyncContextProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000033e4
@property(readonly, nonatomic) id <SCRAsyncTargetContextProvider> asyncContextProvider; // @synthesize asyncContextProvider=_asyncContextProvider;
@property(readonly, nonatomic) id <SCRSyncTargetContextProvider> syncContextProvider; // @synthesize syncContextProvider=_syncContextProvider;
@property(readonly, copy, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000033aa
- (id)succinctDescription;	// IMP=0x000000000000335a
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000325b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000320b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000315d
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002f30
@property(readonly, nonatomic) id <SCRTargetContextProvider> contextProvider;
- (id)initWithTarget:(id)arg1 contextProvider:(id)arg2;	// IMP=0x0000000000002e7c
- (void)_validateContext:(id)arg1;	// IMP=0x0000000000002c59
- (id)_expectedTargetContextProtocol;	// IMP=0x0000000000002b9f
- (Class)_expectedTargetContextClass;	// IMP=0x0000000000002ae8
- (void)invalidateTargetContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000029e9
- (void)createContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000273e
- (id)_initWithTarget:(id)arg1 syncProvider:(id)arg2 asyncProvider:(id)arg3;	// IMP=0x0000000000002578
- (id)initWithTarget:(id)arg1 asyncContextProvider:(id)arg2;	// IMP=0x0000000000002561
- (id)initWithTarget:(id)arg1 syncContextProvider:(id)arg2;	// IMP=0x000000000000254c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

