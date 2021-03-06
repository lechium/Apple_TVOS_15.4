//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject
{
    AVOutputSettingsAssistantInternal *_internal;	// 8 = 0x8
}

+ (id)outputSettingsAssistantWithPreset:(id)arg1;	// IMP=0x00000000001241d7
+ (id)availableOutputSettingsPresets;	// IMP=0x0000000000124035
+ (id)_allOutputSettingsPresets;	// IMP=0x0000000000123fc0
+ (_Bool)validatesSourceVideoMinFrameDuration;	// IMP=0x0000000000124feb
+ (id)videoEncoderCapabilities;	// IMP=0x0000000000124fd2
+ (id)videoSettingsAdjusterForPreset:(id)arg1;	// IMP=0x0000000000124f9c
+ (id)baseSettingsProviderForPreset:(id)arg1;	// IMP=0x0000000000124f66
- (id)videoEncoderSpecification;	// IMP=0x0000000000124f58
- (void)setVideoEncoderSpecification:(id)arg1;	// IMP=0x0000000000124e97
- (void)setSourceVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000124d72
- (CDStruct_1b6d18a9)sourceVideoMinFrameDuration;	// IMP=0x0000000000124d56
- (void)setSourceVideoAverageFrameDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000124c4a
- (CDStruct_1b6d18a9)sourceVideoAverageFrameDuration;	// IMP=0x0000000000124c2e
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x0000000000124bf5
- (const struct opaqueCMFormatDescription *)sourceVideoFormat;	// IMP=0x0000000000124be7
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x0000000000124bae
- (const struct opaqueCMFormatDescription *)sourceAudioFormat;	// IMP=0x0000000000124ba0
@property(readonly, nonatomic) NSDictionary *videoSettings;
@property(readonly, nonatomic) NSDictionary *audioSettings;
@property(readonly, nonatomic) NSString *outputFileType;
- (void)dealloc;	// IMP=0x0000000000124352
- (id)initWithPreset:(id)arg1;	// IMP=0x000000000012421a
- (id)init;	// IMP=0x0000000000124206

@end

