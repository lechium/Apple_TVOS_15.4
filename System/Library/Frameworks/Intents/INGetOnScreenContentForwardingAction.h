//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WFOnScreenContentServiceOptions;

@interface INGetOnScreenContentForwardingAction
{
    NSString *_sceneIdentifier;	// 8 = 0x8
    WFOnScreenContentServiceOptions *_serviceOptions;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003d2778
+ (Class)responseClass;	// IMP=0x00000000003d2767
- (void).cxx_destruct;	// IMP=0x00000000003d2635
@property(readonly, nonatomic) WFOnScreenContentServiceOptions *serviceOptions; // @synthesize serviceOptions=_serviceOptions;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d2574
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d23fd
- (id)initWithSceneIdentifier:(id)arg1 serviceOptions:(id)arg2;	// IMP=0x00000000003d233e

@end

