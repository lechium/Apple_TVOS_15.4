//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSSet;

@interface DNDApplicationConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _minimumBreakthroughUrgency;	// 8 = 0x8
    NSMutableSet *_allowedThreads;	// 16 = 0x10
    NSMutableSet *_deniedThreads;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000121db
+ (id)defaultConfiguration;	// IMP=0x0000000000011c25
- (void).cxx_destruct;	// IMP=0x000000000001246d
@property(readonly, copy, nonatomic) NSSet *deniedThreads; // @synthesize deniedThreads=_deniedThreads;
@property(readonly, copy, nonatomic) NSSet *allowedThreads; // @synthesize allowedThreads=_allowedThreads;
@property(readonly, nonatomic) unsigned long long minimumBreakthroughUrgency; // @synthesize minimumBreakthroughUrgency=_minimumBreakthroughUrgency;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000123c5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000121e3
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000121a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012199
- (id)diffDescription;	// IMP=0x00000000000120b9
- (id)description;	// IMP=0x0000000000012032
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011dee
- (unsigned long long)hash;	// IMP=0x0000000000011d53
- (id)_initWithMinimumBreakthroughUrgency:(unsigned long long)arg1 allowedThreads:(id)arg2 deniedThreads:(id)arg3;	// IMP=0x0000000000011c5a
- (id)init;	// IMP=0x0000000000011c3e

@end

