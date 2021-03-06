//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@class NSDictionary, NSPredicateOperator;

__attribute__((visibility("hidden")))
@interface AVAssetVariantChannelCountPredicate : NSPredicate
{
    long long _channelcount;	// 16 = 0x10
    NSDictionary *_mediaSelectionOptionPlist;	// 24 = 0x18
    NSPredicateOperator *_operator;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011f04a
- (void)dealloc;	// IMP=0x000000000011f4cd
- (id)description;	// IMP=0x000000000011f453
- (id)predicateFormat;	// IMP=0x000000000011f446
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000011f42b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011f420
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;	// IMP=0x000000000011f353
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011f150
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011f052
- (id)initWithChannelCount:(long long)arg1 mediaSelectionOption:(id)arg2 operatorType:(unsigned long long)arg3;	// IMP=0x000000000011ef07

@end

