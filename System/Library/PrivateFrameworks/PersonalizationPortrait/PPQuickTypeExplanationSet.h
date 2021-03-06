//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding>
{
    NSMutableSet *_set;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003fd20
+ (id)uniqueKeycodeFromExplanation:(unsigned char)arg1;	// IMP=0x000000000003faa8
+ (id)stringFromExplanation:(unsigned char)arg1;	// IMP=0x000000000003f82f
- (void).cxx_destruct;	// IMP=0x000000000003f7f0
- (_Bool)isEqualToQuickTypeExplanationSet:(id)arg1;	// IMP=0x000000000003f7cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f765
- (id)description;	// IMP=0x000000000003f517
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f4c2
- (unsigned long long)hash;	// IMP=0x000000000003f4ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f489
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f38f
- (unsigned long long)count;	// IMP=0x000000000003f327
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f25d
- (void)push:(unsigned char)arg1;	// IMP=0x000000000003f1c6
- (id)init;	// IMP=0x000000000003f15e

@end

