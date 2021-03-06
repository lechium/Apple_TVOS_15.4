//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@interface AXMEvaluationNode <NSSecureCoding>
{
    double _minimumConfidence;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    unsigned long long _effectivePriority;	// 24 = 0x18
}

+ (unsigned long long)defaultPriority;	// IMP=0x000000000007762a
+ (void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1;	// IMP=0x00000000000775bd
+ (_Bool)isANEDeviceAvailable;	// IMP=0x0000000000077582
+ (struct CGSize)preferredModelInputSize;	// IMP=0x000000000007756c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000077246
@property(nonatomic) unsigned long long effectivePriority; // @synthesize effectivePriority=_effectivePriority;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) double minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
- (id)_diagnosticNameForRequests:(id)arg1 metrics:(id)arg2;	// IMP=0x00000000000779b5
- (_Bool)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 metrics:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000776a2
- (_Bool)shouldEvaluate:(id)arg1;	// IMP=0x000000000007769a
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x0000000000077694
- (void)resetEffectivePriority;	// IMP=0x000000000007765d
- (void)boostEffectivePriority;	// IMP=0x0000000000077635
- (_Bool)validateVisionKitSoftLinkSymbols;	// IMP=0x0000000000077447
- (void)nodeInitialize;	// IMP=0x00000000000773db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077334
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007724e

@end

