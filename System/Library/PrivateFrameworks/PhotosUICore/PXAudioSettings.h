//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXAudioSettings
{
    _Bool _workaround80278485;	// 8 = 0x8
    _Bool _flexReturnOnlyLocalSongs;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x00000000005d6d80
+ (void)purgeFlexDataFromModuleController:(id)arg1;	// IMP=0x000000000063a791
+ (id)settingsControllerModule;	// IMP=0x000000000063a4da
@property(nonatomic) _Bool flexReturnOnlyLocalSongs; // @synthesize flexReturnOnlyLocalSongs=_flexReturnOnlyLocalSongs;
@property(nonatomic) _Bool workaround80278485; // @synthesize workaround80278485=_workaround80278485;
- (void)setDefaultValues;	// IMP=0x00000000005d6ce3
- (id)parentSettings;	// IMP=0x00000000005d6cca

@end
