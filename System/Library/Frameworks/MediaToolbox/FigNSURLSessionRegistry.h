//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FigNSURLSessionRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableArray *_sessionArray;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x000000000029f8ab
- (id)init;	// IMP=0x000000000029f816
- (void)releaseSession:(id)arg1;	// IMP=0x000000000029f666
- (void)_checkForDoom:(id)arg1;	// IMP=0x000000000029f4e4
- (void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 outSession:(id *)arg3 outAssertion:(struct FigOpaqueAssertion **)arg4;	// IMP=0x000000000029f034

@end
