//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet
{
    _NSFaultingMutableSetMutationMethods *_mutationMethods;	// 32 = 0x20
}

- (void)unionSet:(id)arg1;	// IMP=0x0000000000055d63
- (void)setSet:(id)arg1;	// IMP=0x0000000000055cd7
- (void)removeObject:(id)arg1;	// IMP=0x0000000000055c41
- (void)removeAllObjects;	// IMP=0x0000000000055bf5
- (void)minusSet:(id)arg1;	// IMP=0x0000000000055bc2
- (void)intersectSet:(id)arg1;	// IMP=0x0000000000055a4c
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x00000000000559d0
- (void)addObject:(id)arg1;	// IMP=0x000000000005593a
- (void)dealloc;	// IMP=0x000000000005588c

@end

