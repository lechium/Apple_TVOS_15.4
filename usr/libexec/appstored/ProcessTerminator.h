//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSString, RBSTerminationAssertion;

@interface ProcessTerminator : NSObject
{
    NSConditionLock *_condition;	// 8 = 0x8
    RBSTerminationAssertion *_assertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000165c73
- (void)assertionTargetProcessDidExit:(id)arg1;	// IMP=0x0010000000165c30
- (_Bool)terminateProcessWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x0010000000165bd1
- (_Bool)terminateProcessBeforeDate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000165a3c
- (void)dealloc;	// IMP=0x00100000001659dc
- (id)initWithPredicate:(id)arg1 explanation:(id)arg2;	// IMP=0x00100000001658ae
- (id)initWithBundleID:(id)arg1 explanation:(id)arg2;	// IMP=0x0010000000165828

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

