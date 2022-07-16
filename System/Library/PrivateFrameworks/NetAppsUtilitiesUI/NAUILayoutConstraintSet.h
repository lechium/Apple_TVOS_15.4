//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface NAUILayoutConstraintSet : NSObject
{
    UIView *_owningView;	// 8 = 0x8
    CDUnknownBlockType _builder;	// 16 = 0x10
    NSArray *_constraints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000070cc
@property(copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) CDUnknownBlockType builder; // @synthesize builder=_builder;
@property(readonly, nonatomic) __weak UIView *owningView; // @synthesize owningView=_owningView;
- (void)updateConstraintConstants;	// IMP=0x0000000000006b0d
- (void)invalidate;	// IMP=0x0000000000006a5a
- (void)activateIfNeeded;	// IMP=0x000000000000692d
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithOwningView:(id)arg1 constraintBuilder:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006836

@end
