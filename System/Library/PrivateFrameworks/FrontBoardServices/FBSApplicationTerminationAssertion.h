//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSTerminationAssertion, NSString;
@protocol OS_dispatch_queue;

@interface FBSApplicationTerminationAssertion : NSObject
{
    BKSTerminationAssertion *_assertion;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
    long long _assertionState;	// 40 = 0x28
}

+ (id)_queue;	// IMP=0x000000000005f490
- (void).cxx_destruct;	// IMP=0x000000000005fff3
- (void)invalidate;	// IMP=0x000000000005ffb8
- (id)description;	// IMP=0x000000000005fef4
- (void)dealloc;	// IMP=0x000000000005fd59
- (id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f798
@property(readonly, nonatomic) long long assertionState;
@property(readonly, copy, nonatomic) NSString *reason;
@property(readonly, copy, nonatomic) NSString *bundleID;

@end
