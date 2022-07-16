//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNNodeManipulableItem
{
}

+ (void)removeItemsFromScene:(id)arg1;	// IMP=0x00000000001265c9
+ (void)addItems:(id)arg1 toScene:(id)arg2;	// IMP=0x0000000000126452
+ (id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2;	// IMP=0x0000000000126086
- (void)validateClone;	// IMP=0x00000000001266f6
- (id)cloneForManipulators;	// IMP=0x00000000001262e3
- (id)parentItem;	// IMP=0x000000000012624d
- (void)setPosition:(struct SCNVector3)arg1;	// IMP=0x000000000012620d
- (struct SCNVector3)scale;	// IMP=0x00000000001261e2
- (struct SCNMatrix4)worldTransform;	// IMP=0x0000000000126191
- (void)setWorldTransform:(struct SCNMatrix4)arg1;	// IMP=0x0000000000126166
- (void)setTransform:(struct SCNMatrix4)arg1;	// IMP=0x000000000012613b
- (struct SCNMatrix4)transform;	// IMP=0x00000000001260ea
- (_Bool)isNodeManipulator;	// IMP=0x00000000001260e2

@end
