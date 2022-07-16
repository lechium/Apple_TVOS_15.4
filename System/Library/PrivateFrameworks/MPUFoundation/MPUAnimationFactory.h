//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPUFoundation/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSString;

@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    _Bool _removedOnCompletion;	// 8 = 0x8
    NSArray *_allowedKeyPaths;	// 16 = 0x10
    NSString *_fillMode;	// 24 = 0x18
    double _timeOffset;	// 32 = 0x20
    CAMediaTimingFunction *_timingFunction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000009ea0
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic, getter=isRemovedOnCompletion) _Bool removedOnCompletion; // @synthesize removedOnCompletion=_removedOnCompletion;
@property(copy, nonatomic) NSString *fillMode; // @synthesize fillMode=_fillMode;
@property(copy, nonatomic) NSArray *allowedKeyPaths; // @synthesize allowedKeyPaths=_allowedKeyPaths;
- (id)_timingFunctionForAnimation;	// IMP=0x0000000000009e1d
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000009d3d
- (id)init;	// IMP=0x0000000000009ce7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

