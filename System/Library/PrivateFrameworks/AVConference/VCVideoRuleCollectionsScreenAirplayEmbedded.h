//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenAirplayEmbedded
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000002f4b94
- (unsigned int)tilesPerFrame:(int)arg1 hdrMode:(unsigned long long)arg2;	// IMP=0x00000000002f58b0
- (_Bool)setupH264Rules;	// IMP=0x00000000002f5128
- (_Bool)setupRules;	// IMP=0x00000000002f5116
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x00000000002f4d7d
- (void)initSupportedPayloads;	// IMP=0x00000000002f4d0e
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x00000000002f4c0a

@end
