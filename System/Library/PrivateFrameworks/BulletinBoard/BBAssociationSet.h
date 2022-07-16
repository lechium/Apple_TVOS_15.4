//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BBAssociationSet : NSObject
{
    NSString *_associationSetKey;	// 8 = 0x8
    unsigned long long _associatedObjectMemoryPointerFunction;	// 16 = 0x10
}

+ (id)setWithWeakAssociation;	// IMP=0x0000000000054621
+ (id)setWithStrongAssociation;	// IMP=0x00000000000545fd
- (void).cxx_destruct;	// IMP=0x0000000000054af5
- (void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2;	// IMP=0x0000000000054992
- (id)associatedObjectsForObject:(id)arg1;	// IMP=0x0000000000054863
- (void)associateObject:(id)arg1 withObject:(id)arg2;	// IMP=0x000000000005472f
- (id)_initWithMemoryPointerFunction:(unsigned long long)arg1;	// IMP=0x0000000000054648

@end
