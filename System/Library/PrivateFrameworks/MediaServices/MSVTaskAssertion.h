//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol OS_dispatch_source;

@interface MSVTaskAssertion : NSObject
{
    NSString *_uuid;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_subsystem;	// 24 = 0x18
    int _pid;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_invalidationTimer;	// 40 = 0x28
    _Bool _acquired;	// 48 = 0x30
    BKSProcessAssertion *_processAssertion;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    CDUnknownBlockType _invalidationHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000007ccb
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned int)_BSKReasonForMSVReason:(unsigned long long)arg1;	// IMP=0x0000000000007c11
- (unsigned int)_BSKFlagsForMSVFlags:(unsigned long long)arg1;	// IMP=0x0000000000007c05
- (void)_cancelInvalidationTimerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007b66
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidateOnDate:(id)arg1;	// IMP=0x0000000000007976
- (void)invalidate;	// IMP=0x000000000000789d
- (_Bool)acquire;	// IMP=0x0000000000007894
- (_Bool)isAcquired;	// IMP=0x000000000000788b
- (id)description;	// IMP=0x00000000000077dc
- (void)dealloc;	// IMP=0x000000000000770b
- (id)init;	// IMP=0x0000000000007651
- (id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;	// IMP=0x000000000000762d
- (id)initWithName:(id)arg1 pid:(int)arg2 bundleID:(id)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6;	// IMP=0x0000000000007613
- (id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;	// IMP=0x00000000000075ed
- (id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6;	// IMP=0x000000000000717e

@end
