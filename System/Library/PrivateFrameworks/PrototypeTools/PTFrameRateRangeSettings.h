//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface PTFrameRateRangeSettings <BSDescriptionProviding>
{
    unsigned short _reasonComponent;	// 8 = 0x8
    unsigned short _reason;	// 10 = 0xa
    int _minimum;	// 12 = 0xc
    int _maximum;	// 16 = 0x10
    int _preferred;	// 20 = 0x14
    unsigned long long _preset;	// 24 = 0x18
}

+ (_Bool)ignoresKey:(id)arg1;	// IMP=0x0000000000003c09
+ (id)settingsControllerModule;	// IMP=0x0000000000003456
@property(nonatomic) unsigned short reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned short reasonComponent; // @synthesize reasonComponent=_reasonComponent;
@property(nonatomic) unsigned long long preset; // @synthesize preset=_preset;
@property(nonatomic) int preferred; // @synthesize preferred=_preferred;
@property(nonatomic) int maximum; // @synthesize maximum=_maximum;
@property(nonatomic) int minimum; // @synthesize minimum=_minimum;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000003eb4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000003e64
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000003e48
- (id)succinctDescription;	// IMP=0x0000000000003df8
@property(readonly, copy) NSString *description;
- (void)setFrameRateRange:(struct CAFrameRateRange)arg1 reasonComponent:(unsigned short)arg2 reason:(unsigned short)arg3;	// IMP=0x0000000000003dcd
- (void)validate;	// IMP=0x0000000000003d6d
@property(nonatomic) unsigned int highFrameRateReason;
@property(nonatomic) struct CAFrameRateRange frameRateRange;
- (id)drillDownSummary;	// IMP=0x0000000000003c68
- (void)setFrameRateRange:(struct CAFrameRateRange)arg1 highFrameRateReason:(unsigned int)arg2;	// IMP=0x0000000000003b0d
- (void)setDefaultValues;	// IMP=0x00000000000033f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
