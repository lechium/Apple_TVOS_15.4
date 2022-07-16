//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSDisplayConfiguration, FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification;

@interface FBSMutableSceneParameters
{
    FBSDisplayConfiguration *_displayConfiguration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001f2e9
- (void)setDisplay:(id)arg1;	// IMP=0x000000000001f21d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f1e5
- (void)applyParameters:(id)arg1;	// IMP=0x000000000001efe1
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ef41
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ef12
@property(copy, nonatomic, setter=_setSpecification:) FBSSceneSpecification *specification; // @dynamic specification;
@property(copy, nonatomic) FBSSceneSettings *settings; // @dynamic settings;

// Remaining properties
@property(copy, nonatomic) FBSSceneClientSettings *clientSettings; // @dynamic clientSettings;

@end

