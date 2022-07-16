//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000002513fb
- (unsigned int)tilesPerFrame:(int)arg1;	// IMP=0x0000000000251747
- (_Bool)setupH264Rules;	// IMP=0x0000000000251556
- (_Bool)setupRules;	// IMP=0x0000000000251544
- (void)initSupportedPayloads;	// IMP=0x000000000025152d
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x0000000000251429

@end
