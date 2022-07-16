//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class CLLocation, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol AFSpeechParametersMutating <NSObject>
- (void)setJitGrammar:(NSArray *)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setInputOrigin:(NSString *)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setShouldStoreAudioOnDevice:(_Bool)arg1;
- (void)setSecureOfflineOnly:(_Bool)arg1;
- (void)setFarField:(_Bool)arg1;
- (void)setCensorSpeech:(_Bool)arg1;
- (void)setDetectUtterances:(_Bool)arg1;
- (void)setNarrowband:(_Bool)arg1;
- (void)setOriginalAudioFileURL:(NSURL *)arg1;
- (void)setModelOverrideURL:(NSURL *)arg1;
- (void)setOverrides:(NSDictionary *)arg1;
- (void)setProfile:(NSData *)arg1;
- (void)setApplicationName:(NSString *)arg1;
- (void)setLoggingContext:(NSArray *)arg1;
- (void)setTask:(NSString *)arg1;
- (void)setInteractionIdentifier:(NSString *)arg1;
- (void)setLanguage:(NSString *)arg1;
@end

