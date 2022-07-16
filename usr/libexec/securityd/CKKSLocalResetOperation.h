//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSLocalResetOperation
{
    NSString<OctagonStateString> *_nextState;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    CKKSOperationDependencies *_deps;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000bf686
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)onqueuePerformLocalReset;	// IMP=0x00100000000be4b2
- (void)main;	// IMP=0x00100000000be40e
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x00100000000be32e

@end

