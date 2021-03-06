//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (NAAdditions)
- (void)_na_removeNotificationObserverProxy:(id)arg1;	// IMP=0x0000000000017ac8
- (void)_na_addNotificationObserverProxy:(id)arg1;	// IMP=0x00000000000179fe
- (id)na_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;	// IMP=0x00000000000179f1
- (void)na_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;	// IMP=0x00000000000179e0
- (void)na_removeNotificationBlockObserver:(id)arg1;	// IMP=0x00000000000179ce
- (id)na_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000178da
- (id)na_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000177de
@end

