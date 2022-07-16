//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RenderBox/NSCopying-Protocol.h>

@interface RBDisplayListPredicate : NSObject <NSCopying>
{
    struct Invertible _predicate;	// 8 = 0x8
}

+ (id)predicate;	// IMP=0x00000000000180b3
- (id).cxx_construct;	// IMP=0x000000000001837e
- (void).cxx_destruct;	// IMP=0x0000000000018326
- (id)filteringDisplayList:(id)arg1;	// IMP=0x0000000000018181
@property(nonatomic) _Bool invertsResult;
- (void)addPredicate:(id)arg1;	// IMP=0x0000000000018157
- (void)addConditionWithFillColor:(CDStruct_0b1c536a)arg1 colorSpace:(int)arg2;	// IMP=0x0000000000018115
- (void)addCondition:(int)arg1;	// IMP=0x0000000000018105
- (void)removeAll;	// IMP=0x00000000000180f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000180c5

@end
