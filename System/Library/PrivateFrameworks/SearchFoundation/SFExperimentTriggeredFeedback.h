//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFCounterfactualInfo;

@interface SFExperimentTriggeredFeedback
{
    SFCounterfactualInfo *_counterfactual;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c6590
- (void).cxx_destruct;	// IMP=0x00000000001c657d
@property(retain, nonatomic) SFCounterfactualInfo *counterfactual; // @synthesize counterfactual=_counterfactual;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c644e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c6338
- (id)initWithCfDiffered:(_Bool)arg1 cfUsed:(_Bool)arg2 cfError:(unsigned long long)arg3;	// IMP=0x00000000001c6270
- (id)init;	// IMP=0x00000000001c6241

@end
