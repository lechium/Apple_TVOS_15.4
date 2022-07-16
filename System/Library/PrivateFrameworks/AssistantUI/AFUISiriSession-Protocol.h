//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFMetrics, AFSpeechSynthesisRecord, AFUserUtteranceSelectionResults, AceObject, NSDictionary, NSString, NSUUID, SABaseClientBoundCommand, SASRequestOptions;
@protocol SAAceCommand;

@protocol AFUISiriSession <NSObject>
- (void)notifyStateManagerTransactionEnded;
- (void)notifyStateManagerTransactionBegan;
- (void)notifyStateManagerSpeakingEnded;
- (void)notifyStateManagerSpeakingBegan;
- (void)notifyStateManagerPresentationTransitionEnded;
- (void)notifyStateManagerPresentationTransitionBegan;
- (void)didLoseAttentionWithEvent:(long long)arg1;
- (void)didGainAttentionWithEvent:(long long)arg1;
- (void)speechSynthesisDidUpdatePowerLevelTo:(float)arg1;
- (void)speechSynthesisDidFinish:(AFSpeechSynthesisRecord *)arg1;
- (void)audioRoutePickerWillDismiss;
- (void)audioRoutePickerWillShow;
- (void)recordMetricsContext:(NSString *)arg1 forDisambiguatedAppWIthBundleIdentifier:(NSString *)arg2;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForErrorCommand:(SABaseClientBoundCommand *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)siriUIDidPresentDynamicSnippetWithInfo:(NSDictionary *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1 turnIdentifier:(NSUUID *)arg2;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(AFUserUtteranceSelectionResults *)arg3 turnIdentifier:(NSUUID *)arg4;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)telephonyRequestCompleted;
- (void)endForReason:(long long)arg1;
- (void)end;
- (void)updateRequestOptions:(SASRequestOptions *)arg1;
- (void)stopRequestWithOptions:(SASRequestOptions *)arg1;
- (void)startRequestWithOptions:(SASRequestOptions *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startRequestWithOptions:(SASRequestOptions *)arg1;
- (void)setApplicationContext;
- (void)setAlertContext;
- (void)rollbackClearContext;
- (void)resetContextTypes:(long long)arg1;
- (void)clearContext;
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActiveWithCompletion:(void (^)(unsigned int, NSError *))arg1;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)setAnnouncementRequestsPermittedByPresentationWhileActive:(_Bool)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)setCarDNDActive:(_Bool)arg1;
- (void)setDeviceInStarkMode:(_Bool)arg1;
@end

