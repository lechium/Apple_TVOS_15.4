//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x002000000015f4a3
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x001000000015f3d5
- (void)_gkInvokeOnce;	// IMP=0x001000000015f3a7
- (void)_gkClearTarget;	// IMP=0x001000000015f36f
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x001000000015f308
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;	// IMP=0x001000000015f0b3
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x001000000015efeb
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x001000000015ef47
- (id)_gkReplyHandlerInvocation;	// IMP=0x001000000015eeac
- (void)_gkClearCopiedArguments;	// IMP=0x001000000015ed05
- (void)_gkCopyArguments;	// IMP=0x001000000015eaa9
- (void)_gkPrintBlockSignature;	// IMP=0x001000000015e9ce
- (_Bool)_gkHasReplyBlock;	// IMP=0x001000000015f508
@end

