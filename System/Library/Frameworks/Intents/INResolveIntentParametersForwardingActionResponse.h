//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INIntent, NSDictionary;

@interface INResolveIntentParametersForwardingActionResponse
{
    _Bool _success;	// 8 = 0x8
    INIntent *_updatedIntent;	// 16 = 0x10
    NSDictionary *_parameterResolutionResults;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cf8a6
- (void).cxx_destruct;	// IMP=0x00000000000cf875
@property(readonly, nonatomic) NSDictionary *parameterResolutionResults; // @synthesize parameterResolutionResults=_parameterResolutionResults;
@property(readonly, nonatomic) INIntent *updatedIntent; // @synthesize updatedIntent=_updatedIntent;
@property(readonly, nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cf61a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cf55b
- (id)initWithSuccess:(_Bool)arg1 updatedIntent:(id)arg2 parameterResolutionResults:(id)arg3 error:(id)arg4;	// IMP=0x00000000000cf4a1

@end

