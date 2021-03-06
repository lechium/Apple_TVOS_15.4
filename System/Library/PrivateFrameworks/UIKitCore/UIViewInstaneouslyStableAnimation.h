//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIIntervalAnimating-Protocol.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating>
{
    id <UIVectorOperatable> _velocity;	// 8 = 0x8
    id <UIVectorOperatable> _targetValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f934ce
@property(retain, nonatomic) id <UIVectorOperatable> targetValue; // @synthesize targetValue=_targetValue;
- (_Bool)isStable;	// IMP=0x0000000000f934b5
- (id)value;	// IMP=0x0000000000f934a7
- (void)setVelocity:(id)arg1;	// IMP=0x0000000000f9346c
- (id)velocity;	// IMP=0x0000000000f9345e
- (id)stepWithDelta:(double)arg1;	// IMP=0x0000000000f93450
- (id)initWithTargetValue:(id)arg1 velocity:(id)arg2;	// IMP=0x0000000000f933a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

