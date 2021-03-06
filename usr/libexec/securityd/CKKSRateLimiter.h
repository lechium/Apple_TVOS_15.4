//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKKSRateLimiter : NSObject
{
    NSDictionary *_config;	// 8 = 0x8
    NSMutableDictionary *_buckets;	// 16 = 0x10
    NSDate *_overloadUntil;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000030a42
- (void).cxx_destruct;	// IMP=0x0020000000030972
@property(retain) NSDate *overloadUntil; // @synthesize overloadUntil=_overloadUntil;
@property(retain) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
@property(retain) NSDictionary *config; // @synthesize config=_config;
- (id)topOffendingAccessGroups:(unsigned long long)arg1;	// IMP=0x001000000003066f
- (id)diagnostics;	// IMP=0x0010000000030386
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003030d
- (void)trim:(id)arg1;	// IMP=0x001000000002ffe7
- (void)reset;	// IMP=0x001000000002ff90
- (unsigned long long)stateSize;	// IMP=0x001000000002ff4c
- (int)judge:(id)arg1 at:(id)arg2 limitTime:(id *)arg3;	// IMP=0x001000000002f959
- (id)consumeTokenFromBucket:(id)arg1 type:(int)arg2 at:(id)arg3;	// IMP=0x001000000002f767
- (int)capacity:(int)arg1;	// IMP=0x001000000002f689
- (int)rate:(int)arg1;	// IMP=0x001000000002f5ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002f36f
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002ef52
- (id)init;	// IMP=0x001000000002ef3e

@end

