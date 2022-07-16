//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemRelation : NSObject
{
}

+ (id)allRelationWithRelations:(id)arg1;	// IMP=0x0000000000c9fcc0
+ (id)anyRelationWithRelations:(id)arg1;	// IMP=0x0000000000c9fc6a
+ (id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2;	// IMP=0x0000000000c9fc29
+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;	// IMP=0x0000000000c9fb9d
- (id)description;	// IMP=0x0000000000c9fe63
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c9fd49
- (id)type;	// IMP=0x0000000000c9fd41
@property(readonly, nonatomic) NSArray *itemStates;
@property(readonly, nonatomic, getter=isFulfilled) _Bool fulfilled;

@end

