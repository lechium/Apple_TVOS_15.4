//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPTrialWrapper, _PASLock;

@interface PPFeatureRedactor : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
    PPTrialWrapper *_trialWrapper;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001257e7
- (void)transformFeaturesInPlace:(id)arg1;	// IMP=0x0000000000125707
- (id)initWithTrialWrapper:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000012551a

@end

