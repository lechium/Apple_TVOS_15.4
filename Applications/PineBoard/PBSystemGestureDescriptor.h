//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol PBSystemGestureFailurePolicy, PBSystemGestureRecognitionPolicy, PBSystemGestureSimultaneousRecognitionPolicy;

@interface PBSystemGestureDescriptor : NSObject
{
    NSSet *_systemGestureRecognizerDescriptors;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    long long _level;	// 24 = 0x18
    id <PBSystemGestureRecognitionPolicy> _recognitionPolicy;	// 32 = 0x20
    id <PBSystemGestureSimultaneousRecognitionPolicy> _simultaneousRecognitionPolicy;	// 40 = 0x28
    id <PBSystemGestureFailurePolicy> _failurePolicy;	// 48 = 0x30
}

+ (id)descriptorForType:(unsigned long long)arg1;	// IMP=0x00100000000bc500
- (void).cxx_destruct;	// IMP=0x002000000022aa50
@property(readonly, nonatomic) id <PBSystemGestureFailurePolicy> failurePolicy; // @synthesize failurePolicy=_failurePolicy;
@property(readonly, nonatomic) id <PBSystemGestureSimultaneousRecognitionPolicy> simultaneousRecognitionPolicy; // @synthesize simultaneousRecognitionPolicy=_simultaneousRecognitionPolicy;
- (id)recognitionPolicy;	// IMP=0x001000000022a9f0
@property(readonly, nonatomic) long long level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSSet *systemGestureRecognizerDescriptors; // @synthesize systemGestureRecognizerDescriptors=_systemGestureRecognizerDescriptors;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000022a710
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000022a350
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000022a2c0
- (id)succinctDescriptionBuilder;	// IMP=0x001000000022a210
- (id)succinctDescription;	// IMP=0x001000000022a1a0
- (id)initWithSystemGestureRecognizerDescriptors:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 recognitionPolicy:(id)arg4 simultaneousRecognitionPolicy:(id)arg5 failurePolicy:(id)arg6;	// IMP=0x0010000000229f90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

