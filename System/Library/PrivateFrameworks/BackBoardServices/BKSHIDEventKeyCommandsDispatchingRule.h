//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventKeyCommandsDispatchingPredicate, NSArray, NSString;

@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>
{
    BKSHIDEventKeyCommandsDispatchingPredicate *_predicate;	// 8 = 0x8
    NSArray *_targets;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017d56
+ (id)ruleForDispatchingKeyCommandsMatchingPredicate:(id)arg1 toTargets:(id)arg2;	// IMP=0x0000000000017667
- (void).cxx_destruct;	// IMP=0x00000000000175c1
@property(readonly, copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(readonly, copy, nonatomic) BKSHIDEventKeyCommandsDispatchingPredicate *predicate; // @synthesize predicate=_predicate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000174fa
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000174aa
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000017442
- (id)succinctDescription;	// IMP=0x00000000000173f2
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017358
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016f34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016ec6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016ebb
- (id)_initWithPredicate:(id)arg1 targets:(id)arg2;	// IMP=0x0000000000016c9f
- (id)init;	// IMP=0x0000000000016b71

// Remaining properties
@property(readonly) Class superclass;

@end

