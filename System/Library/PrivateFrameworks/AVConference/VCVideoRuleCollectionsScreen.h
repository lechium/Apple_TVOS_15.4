//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreen
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000002fb8b6
- (_Bool)setupMacDecodingOnlyRules;	// IMP=0x00000000002fc72d
- (_Bool)setupH264Rules;	// IMP=0x00000000002fbe77
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x00000000002fbb6a
- (void)initSupportedPayloads;	// IMP=0x00000000002fbb16
- (id)initForMacDecodingOnly;	// IMP=0x00000000002fba4a
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x00000000002fb8e4

@end

