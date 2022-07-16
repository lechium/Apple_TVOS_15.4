//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzerCreating-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class MLModel, NSArray, NSString, SNTimeDurationConstraint;

@interface SNClassifySoundRequest : NSObject <SNAnalyzerCreating, SNRequest>
{
    MLModel *_model;	// 8 = 0x8
    double _overlapFactor;	// 16 = 0x10
    SNTimeDurationConstraint *_windowDurationConstraint;	// 24 = 0x18
    NSArray *_knownClassifications;	// 32 = 0x20
    NSString *_classifierIdentifier;	// 40 = 0x28
    CDStruct_1b6d18a9 _windowDuration;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025272
+ (id)knownClassificationsForClassifierIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002498d
- (void).cxx_destruct;	// IMP=0x0000000000025425
@property(retain) NSString *classifierIdentifier; // @synthesize classifierIdentifier=_classifierIdentifier;
@property(readonly, copy) NSArray *knownClassifications; // @synthesize knownClassifications=_knownClassifications;
@property(readonly) SNTimeDurationConstraint *windowDurationConstraint; // @synthesize windowDurationConstraint=_windowDurationConstraint;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000253ad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002527a
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToClassifySoundRequest:(id)arg1;	// IMP=0x0000000000024eec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024e71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024e42
- (id)createAnalyzerWithError:(id *)arg1;	// IMP=0x0000000000024dd4
@property CDStruct_1b6d18a9 windowDuration; // @synthesize windowDuration=_windowDuration;
@property double overlapFactor; // @synthesize overlapFactor=_overlapFactor;
- (id)initWithClassifierIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024aa2
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024512

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
