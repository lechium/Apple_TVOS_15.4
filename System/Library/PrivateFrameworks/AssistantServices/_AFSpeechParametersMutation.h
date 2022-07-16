//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSpeechParametersMutating-Protocol.h>

@class AFSpeechParameters, CLLocation, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface _AFSpeechParametersMutation : NSObject <AFSpeechParametersMutating>
{
    AFSpeechParameters *_baseModel;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSString *_interactionIdentifier;	// 24 = 0x18
    NSString *_task;	// 32 = 0x20
    NSArray *_loggingContext;	// 40 = 0x28
    NSString *_applicationName;	// 48 = 0x30
    NSData *_profile;	// 56 = 0x38
    NSDictionary *_overrides;	// 64 = 0x40
    NSURL *_modelOverrideURL;	// 72 = 0x48
    NSURL *_originalAudioFileURL;	// 80 = 0x50
    _Bool _narrowband;	// 88 = 0x58
    _Bool _detectUtterances;	// 89 = 0x59
    _Bool _censorSpeech;	// 90 = 0x5a
    _Bool _farField;	// 91 = 0x5b
    _Bool _secureOfflineOnly;	// 92 = 0x5c
    _Bool _shouldStoreAudioOnDevice;	// 93 = 0x5d
    double _maximumRecognitionDuration;	// 96 = 0x60
    NSString *_inputOrigin;	// 104 = 0x68
    CLLocation *_location;	// 112 = 0x70
    NSArray *_jitGrammar;	// 120 = 0x78
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasLanguage:1;
        unsigned int hasInteractionIdentifier:1;
        unsigned int hasTask:1;
        unsigned int hasLoggingContext:1;
        unsigned int hasApplicationName:1;
        unsigned int hasProfile:1;
        unsigned int hasOverrides:1;
        unsigned int hasModelOverrideURL:1;
        unsigned int hasOriginalAudioFileURL:1;
        unsigned int hasNarrowband:1;
        unsigned int hasDetectUtterances:1;
        unsigned int hasCensorSpeech:1;
        unsigned int hasFarField:1;
        unsigned int hasSecureOfflineOnly:1;
        unsigned int hasShouldStoreAudioOnDevice:1;
        unsigned int hasMaximumRecognitionDuration:1;
        unsigned int hasInputOrigin:1;
        unsigned int hasLocation:1;
        unsigned int hasJitGrammar:1;
    } _mutationFlags;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000011b672
- (id)generate;	// IMP=0x000000000011b067
- (void)setJitGrammar:(id)arg1;	// IMP=0x000000000011b041
- (void)setLocation:(id)arg1;	// IMP=0x000000000011b01b
- (void)setInputOrigin:(id)arg1;	// IMP=0x000000000011aff5
- (void)setMaximumRecognitionDuration:(double)arg1;	// IMP=0x000000000011afe0
- (void)setShouldStoreAudioOnDevice:(_Bool)arg1;	// IMP=0x000000000011afcd
- (void)setSecureOfflineOnly:(_Bool)arg1;	// IMP=0x000000000011afba
- (void)setFarField:(_Bool)arg1;	// IMP=0x000000000011afa7
- (void)setCensorSpeech:(_Bool)arg1;	// IMP=0x000000000011af94
- (void)setDetectUtterances:(_Bool)arg1;	// IMP=0x000000000011af81
- (void)setNarrowband:(_Bool)arg1;	// IMP=0x000000000011af6e
- (void)setOriginalAudioFileURL:(id)arg1;	// IMP=0x000000000011af48
- (void)setModelOverrideURL:(id)arg1;	// IMP=0x000000000011af22
- (void)setOverrides:(id)arg1;	// IMP=0x000000000011aeff
- (void)setProfile:(id)arg1;	// IMP=0x000000000011aedc
- (void)setApplicationName:(id)arg1;	// IMP=0x000000000011aeb9
- (void)setLoggingContext:(id)arg1;	// IMP=0x000000000011ae96
- (void)setTask:(id)arg1;	// IMP=0x000000000011ae73
- (void)setInteractionIdentifier:(id)arg1;	// IMP=0x000000000011ae50
- (void)setLanguage:(id)arg1;	// IMP=0x000000000011ae2d
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000011adc2
- (id)init;	// IMP=0x000000000011adae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
