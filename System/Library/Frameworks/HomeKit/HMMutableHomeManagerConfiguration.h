//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFLocationAuthorization, NSOperationQueue;
@protocol HMFLocking;

@interface HMMutableHomeManagerConfiguration
{
    id <HMFLocking> _lock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000025e88f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025e760
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025e631
@property(retain) HMFLocationAuthorization *locationAuthorization;
@property(retain) NSOperationQueue *delegateQueue;
@property(getter=isAdaptive) _Bool adaptive;
@property(getter=isDiscretionary) _Bool discretionary;
@property unsigned long long options;
@property unsigned long long cachePolicy;
- (_Bool)shouldConnect;	// IMP=0x000000000025db9e
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;	// IMP=0x000000000025da3e

@end

