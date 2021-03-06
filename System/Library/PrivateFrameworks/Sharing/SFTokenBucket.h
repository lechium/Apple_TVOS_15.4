//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SFTokenBucket : NSObject
{
    unsigned long long _bucketSize;	// 8 = 0x8
    unsigned long long _tokensAvailable;	// 16 = 0x10
    unsigned long long _tokenDurationTicks;	// 24 = 0x18
    unsigned long long _lastRefreshTicks;	// 32 = 0x20
}

- (_Bool)acquireToken;	// IMP=0x000000000001d864
- (id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2;	// IMP=0x000000000001d842
- (id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2;	// IMP=0x000000000001d816
- (id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2;	// IMP=0x000000000001d7b7
- (id)init;	// IMP=0x000000000001d7a7

@end

