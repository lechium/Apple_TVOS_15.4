//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVOutputSettingsAssistantVideoSettingsAdjuster-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster>
{
    NSString *_outputSettingsPresetIdentifier;	// 8 = 0x8
    NSDictionary *_exportSettings;	// 16 = 0x10
}

- (id)colorSpaceFromSourceFormatDescriptions:(id)arg1 andRendererColorSpace:(id)arg2;	// IMP=0x0000000000125a87
- (long long)averageBitRateForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 andTargetFrameRate:(float)arg2 andEncoderSpecification:(id)arg3;	// IMP=0x00000000001259da
- (void)dealloc;	// IMP=0x0000000000125990
- (id)initWithOutputSettingsPreset:(id)arg1;	// IMP=0x0000000000125905

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

