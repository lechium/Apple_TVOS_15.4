//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaAnnounceCarPlayBannerTapped, SISchemaAnnounceCarPlayGlyphSettingToggled, SISchemaAudioFirstBufferRecorded, SISchemaAudioStopRecording, SISchemaAudioStopRecordingStarted, SISchemaCarPlayHeadUnitContext, SISchemaCasinoRelationship, SISchemaClientEventMetadata, SISchemaClientFlow, SISchemaClientTransportEventMetadata, SISchemaConversationTrace, SISchemaDeviceDynamicContext, SISchemaDeviceFixedContext, SISchemaDeviceLockStateChanged, SISchemaDialogOutput, SISchemaDictationAlternativeSelected, SISchemaDictationAlternativesViewed, SISchemaDictationContentEdited, SISchemaDictationContext, SISchemaDictationEndPointCancel, SISchemaDictationEndPointStop, SISchemaDictationTranscriptionMetadata, SISchemaEngagedAccessoryContext, SISchemaIntercomMessageRecorded, SISchemaInvocation, SISchemaKeyboardDismissed, SISchemaLocation, SISchemaPNRFatalError, SISchemaPNRSpeechRecognitionSourceContext, SISchemaPNRTextToSpeechRequestReceived, SISchemaPunchOut, SISchemaSiriCue, SISchemaSpeechTranscription, SISchemaTextToSpeechBegin, SISchemaTextToSpeechEnd, SISchemaTurnMTERequest, SISchemaUEILaunchContext, SISchemaUEIRequestCategorization, SISchemaUEIUIRenderingContext, SISchemaUEIUUFRReady, SISchemaUEIUserSpeakingContext, SISchemaUIStateTransition, SISchemaUUFRCompletion, SISchemaUUFRFatalError, SISchemaUUFRPresented, SISchemaUUFRSaid, SISchemaUUFRShown, SISchemaUUFRShownTier1, SISchemaUserViewRegionInteraction;

@interface SISchemaClientEvent
{
    SISchemaClientEventMetadata *_eventMetadata;	// 8 = 0x8
    SISchemaClientTransportEventMetadata *_transportMetadata;	// 16 = 0x10
    SISchemaAudioFirstBufferRecorded *_audioFirstBufferRecorded;	// 24 = 0x18
    SISchemaAudioStopRecording *_audioStopRecording;	// 32 = 0x20
    SISchemaConversationTrace *_clientConversationTrace;	// 40 = 0x28
    SISchemaDeviceDynamicContext *_deviceDynamicContext;	// 48 = 0x30
    SISchemaDeviceFixedContext *_deviceFixedContext;	// 56 = 0x38
    SISchemaDictationContext *_dictationContext;	// 64 = 0x40
    SISchemaInvocation *_invocation;	// 72 = 0x48
    SISchemaLocation *_location;	// 80 = 0x50
    SISchemaPunchOut *_punchOut;	// 88 = 0x58
    SISchemaSiriCue *_siriCue;	// 96 = 0x60
    SISchemaUUFRPresented *_uufrPresented;	// 104 = 0x68
    SISchemaSpeechTranscription *_speechTranscription;	// 112 = 0x70
    SISchemaTextToSpeechBegin *_textToSpeechBegin;	// 120 = 0x78
    SISchemaTextToSpeechEnd *_textToSpeechEnd;	// 128 = 0x80
    SISchemaUIStateTransition *_uiStateTransition;	// 136 = 0x88
    SISchemaClientFlow *_clientFlow;	// 144 = 0x90
    SISchemaDialogOutput *_dialogOutput;	// 152 = 0x98
    SISchemaDictationEndPointStop *_dictationEndPointStop;	// 160 = 0xa0
    SISchemaDictationEndPointCancel *_dictationEndPointCancel;	// 168 = 0xa8
    SISchemaDictationAlternativeSelected *_dictationAlternativeSelected;	// 176 = 0xb0
    SISchemaDictationTranscriptionMetadata *_dictationTranscriptionMetadata;	// 184 = 0xb8
    SISchemaCarPlayHeadUnitContext *_carPlayHeadUnitContext;	// 192 = 0xc0
    SISchemaUUFRCompletion *_uufrCompletion;	// 200 = 0xc8
    SISchemaUUFRShown *_uufrShown;	// 208 = 0xd0
    SISchemaUUFRSaid *_uufrSaid;	// 216 = 0xd8
    SISchemaUUFRFatalError *_uufrFatalError;	// 224 = 0xe0
    SISchemaDictationAlternativesViewed *_dictationAlternativesViewed;	// 232 = 0xe8
    SISchemaIntercomMessageRecorded *_intercomMessageRecorded;	// 240 = 0xf0
    SISchemaCasinoRelationship *_casinoRelationship;	// 248 = 0xf8
    SISchemaUserViewRegionInteraction *_userViewRegionInteraction;	// 256 = 0x100
    SISchemaDeviceLockStateChanged *_deviceLockStateChanged;	// 264 = 0x108
    SISchemaUEIRequestCategorization *_ueiRequestCategorization;	// 272 = 0x110
    SISchemaAudioStopRecordingStarted *_audioStopRecordingStarted;	// 280 = 0x118
    SISchemaUEILaunchContext *_ueiLaunchContext;	// 288 = 0x120
    SISchemaUEIUserSpeakingContext *_ueiUserSpeakingContext;	// 296 = 0x128
    SISchemaUEIUUFRReady *_ueiUUFRReady;	// 304 = 0x130
    SISchemaUEIUIRenderingContext *_ueiUIRenderingContext;	// 312 = 0x138
    SISchemaPNRTextToSpeechRequestReceived *_pnrTextToSpeechRequestReceived;	// 320 = 0x140
    SISchemaPNRSpeechRecognitionSourceContext *_pnrSpeechRecognitionSourceContext;	// 328 = 0x148
    SISchemaPNRFatalError *_pnrFatalError;	// 336 = 0x150
    SISchemaTurnMTERequest *_turnMTERequest;	// 344 = 0x158
    SISchemaKeyboardDismissed *_keyboardDismissed;	// 352 = 0x160
    SISchemaEngagedAccessoryContext *_engagedAccessoryContext;	// 360 = 0x168
    SISchemaAnnounceCarPlayBannerTapped *_announceCarPlayBannerTapped;	// 368 = 0x170
    SISchemaAnnounceCarPlayGlyphSettingToggled *_announceCarPlayGlyphSettingToggled;	// 376 = 0x178
    SISchemaDictationContentEdited *_dictationContentEdited;	// 384 = 0x180
    SISchemaUUFRShownTier1 *_uufrShownTier1;	// 392 = 0x188
    _Bool _hasEventMetadata;	// 400 = 0x190
    _Bool _hasTransportMetadata;	// 401 = 0x191
    _Bool _hasAudioFirstBufferRecorded;	// 402 = 0x192
    _Bool _hasAudioStopRecording;	// 403 = 0x193
    _Bool _hasClientConversationTrace;	// 404 = 0x194
    _Bool _hasDeviceDynamicContext;	// 405 = 0x195
    _Bool _hasDeviceFixedContext;	// 406 = 0x196
    _Bool _hasDictationContext;	// 407 = 0x197
    _Bool _hasInvocation;	// 408 = 0x198
    _Bool _hasLocation;	// 409 = 0x199
    _Bool _hasPunchOut;	// 410 = 0x19a
    _Bool _hasSiriCue;	// 411 = 0x19b
    _Bool _hasUufrPresented;	// 412 = 0x19c
    _Bool _hasSpeechTranscription;	// 413 = 0x19d
    _Bool _hasTextToSpeechBegin;	// 414 = 0x19e
    _Bool _hasTextToSpeechEnd;	// 415 = 0x19f
    _Bool _hasUiStateTransition;	// 416 = 0x1a0
    _Bool _hasClientFlow;	// 417 = 0x1a1
    _Bool _hasDialogOutput;	// 418 = 0x1a2
    _Bool _hasDictationEndPointStop;	// 419 = 0x1a3
    _Bool _hasDictationEndPointCancel;	// 420 = 0x1a4
    _Bool _hasDictationAlternativeSelected;	// 421 = 0x1a5
    _Bool _hasDictationTranscriptionMetadata;	// 422 = 0x1a6
    _Bool _hasCarPlayHeadUnitContext;	// 423 = 0x1a7
    _Bool _hasUufrCompletion;	// 424 = 0x1a8
    _Bool _hasUufrShown;	// 425 = 0x1a9
    _Bool _hasUufrSaid;	// 426 = 0x1aa
    _Bool _hasUufrFatalError;	// 427 = 0x1ab
    _Bool _hasDictationAlternativesViewed;	// 428 = 0x1ac
    _Bool _hasIntercomMessageRecorded;	// 429 = 0x1ad
    _Bool _hasCasinoRelationship;	// 430 = 0x1ae
    _Bool _hasUserViewRegionInteraction;	// 431 = 0x1af
    _Bool _hasDeviceLockStateChanged;	// 432 = 0x1b0
    _Bool _hasUeiRequestCategorization;	// 433 = 0x1b1
    _Bool _hasAudioStopRecordingStarted;	// 434 = 0x1b2
    _Bool _hasUeiLaunchContext;	// 435 = 0x1b3
    _Bool _hasUeiUserSpeakingContext;	// 436 = 0x1b4
    _Bool _hasUeiUUFRReady;	// 437 = 0x1b5
    _Bool _hasUeiUIRenderingContext;	// 438 = 0x1b6
    _Bool _hasPnrTextToSpeechRequestReceived;	// 439 = 0x1b7
    _Bool _hasPnrSpeechRecognitionSourceContext;	// 440 = 0x1b8
    _Bool _hasPnrFatalError;	// 441 = 0x1b9
    _Bool _hasTurnMTERequest;	// 442 = 0x1ba
    _Bool _hasKeyboardDismissed;	// 443 = 0x1bb
    _Bool _hasEngagedAccessoryContext;	// 444 = 0x1bc
    _Bool _hasAnnounceCarPlayBannerTapped;	// 445 = 0x1bd
    _Bool _hasAnnounceCarPlayGlyphSettingToggled;	// 446 = 0x1be
    _Bool _hasDictationContentEdited;	// 447 = 0x1bf
    _Bool _hasUufrShownTier1;	// 448 = 0x1c0
    unsigned long long _whichEvent_Type;	// 456 = 0x1c8
}

+ (id)getTagForEventTypeClass:(Class)arg1;	// IMP=0x00000000000e0d48
+ (Class)getEventTypeClassForTag:(int)arg1;	// IMP=0x00000000000e0a4c
- (void).cxx_destruct;	// IMP=0x00000000000e1b96
@property(nonatomic) _Bool hasUufrShownTier1; // @synthesize hasUufrShownTier1=_hasUufrShownTier1;
@property(nonatomic) _Bool hasDictationContentEdited; // @synthesize hasDictationContentEdited=_hasDictationContentEdited;
@property(nonatomic) _Bool hasAnnounceCarPlayGlyphSettingToggled; // @synthesize hasAnnounceCarPlayGlyphSettingToggled=_hasAnnounceCarPlayGlyphSettingToggled;
@property(nonatomic) _Bool hasAnnounceCarPlayBannerTapped; // @synthesize hasAnnounceCarPlayBannerTapped=_hasAnnounceCarPlayBannerTapped;
@property(nonatomic) _Bool hasEngagedAccessoryContext; // @synthesize hasEngagedAccessoryContext=_hasEngagedAccessoryContext;
@property(nonatomic) _Bool hasKeyboardDismissed; // @synthesize hasKeyboardDismissed=_hasKeyboardDismissed;
@property(nonatomic) _Bool hasTurnMTERequest; // @synthesize hasTurnMTERequest=_hasTurnMTERequest;
@property(nonatomic) _Bool hasPnrFatalError; // @synthesize hasPnrFatalError=_hasPnrFatalError;
@property(nonatomic) _Bool hasPnrSpeechRecognitionSourceContext; // @synthesize hasPnrSpeechRecognitionSourceContext=_hasPnrSpeechRecognitionSourceContext;
@property(nonatomic) _Bool hasPnrTextToSpeechRequestReceived; // @synthesize hasPnrTextToSpeechRequestReceived=_hasPnrTextToSpeechRequestReceived;
@property(nonatomic) _Bool hasUeiUIRenderingContext; // @synthesize hasUeiUIRenderingContext=_hasUeiUIRenderingContext;
@property(nonatomic) _Bool hasUeiUUFRReady; // @synthesize hasUeiUUFRReady=_hasUeiUUFRReady;
@property(nonatomic) _Bool hasUeiUserSpeakingContext; // @synthesize hasUeiUserSpeakingContext=_hasUeiUserSpeakingContext;
@property(nonatomic) _Bool hasUeiLaunchContext; // @synthesize hasUeiLaunchContext=_hasUeiLaunchContext;
@property(nonatomic) _Bool hasAudioStopRecordingStarted; // @synthesize hasAudioStopRecordingStarted=_hasAudioStopRecordingStarted;
@property(nonatomic) _Bool hasUeiRequestCategorization; // @synthesize hasUeiRequestCategorization=_hasUeiRequestCategorization;
@property(nonatomic) _Bool hasDeviceLockStateChanged; // @synthesize hasDeviceLockStateChanged=_hasDeviceLockStateChanged;
@property(nonatomic) _Bool hasUserViewRegionInteraction; // @synthesize hasUserViewRegionInteraction=_hasUserViewRegionInteraction;
@property(nonatomic) _Bool hasCasinoRelationship; // @synthesize hasCasinoRelationship=_hasCasinoRelationship;
@property(nonatomic) _Bool hasIntercomMessageRecorded; // @synthesize hasIntercomMessageRecorded=_hasIntercomMessageRecorded;
@property(nonatomic) _Bool hasDictationAlternativesViewed; // @synthesize hasDictationAlternativesViewed=_hasDictationAlternativesViewed;
@property(nonatomic) _Bool hasUufrFatalError; // @synthesize hasUufrFatalError=_hasUufrFatalError;
@property(nonatomic) _Bool hasUufrSaid; // @synthesize hasUufrSaid=_hasUufrSaid;
@property(nonatomic) _Bool hasUufrShown; // @synthesize hasUufrShown=_hasUufrShown;
@property(nonatomic) _Bool hasUufrCompletion; // @synthesize hasUufrCompletion=_hasUufrCompletion;
@property(nonatomic) _Bool hasCarPlayHeadUnitContext; // @synthesize hasCarPlayHeadUnitContext=_hasCarPlayHeadUnitContext;
@property(nonatomic) _Bool hasDictationTranscriptionMetadata; // @synthesize hasDictationTranscriptionMetadata=_hasDictationTranscriptionMetadata;
@property(nonatomic) _Bool hasDictationAlternativeSelected; // @synthesize hasDictationAlternativeSelected=_hasDictationAlternativeSelected;
@property(nonatomic) _Bool hasDictationEndPointCancel; // @synthesize hasDictationEndPointCancel=_hasDictationEndPointCancel;
@property(nonatomic) _Bool hasDictationEndPointStop; // @synthesize hasDictationEndPointStop=_hasDictationEndPointStop;
@property(nonatomic) _Bool hasDialogOutput; // @synthesize hasDialogOutput=_hasDialogOutput;
@property(nonatomic) _Bool hasClientFlow; // @synthesize hasClientFlow=_hasClientFlow;
@property(nonatomic) _Bool hasUiStateTransition; // @synthesize hasUiStateTransition=_hasUiStateTransition;
@property(nonatomic) _Bool hasTextToSpeechEnd; // @synthesize hasTextToSpeechEnd=_hasTextToSpeechEnd;
@property(nonatomic) _Bool hasTextToSpeechBegin; // @synthesize hasTextToSpeechBegin=_hasTextToSpeechBegin;
@property(nonatomic) _Bool hasSpeechTranscription; // @synthesize hasSpeechTranscription=_hasSpeechTranscription;
@property(nonatomic) _Bool hasUufrPresented; // @synthesize hasUufrPresented=_hasUufrPresented;
@property(nonatomic) _Bool hasSiriCue; // @synthesize hasSiriCue=_hasSiriCue;
@property(nonatomic) _Bool hasPunchOut; // @synthesize hasPunchOut=_hasPunchOut;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) _Bool hasInvocation; // @synthesize hasInvocation=_hasInvocation;
@property(nonatomic) _Bool hasDictationContext; // @synthesize hasDictationContext=_hasDictationContext;
@property(nonatomic) _Bool hasDeviceFixedContext; // @synthesize hasDeviceFixedContext=_hasDeviceFixedContext;
@property(nonatomic) _Bool hasDeviceDynamicContext; // @synthesize hasDeviceDynamicContext=_hasDeviceDynamicContext;
@property(nonatomic) _Bool hasClientConversationTrace; // @synthesize hasClientConversationTrace=_hasClientConversationTrace;
@property(nonatomic) _Bool hasAudioStopRecording; // @synthesize hasAudioStopRecording=_hasAudioStopRecording;
@property(nonatomic) _Bool hasAudioFirstBufferRecorded; // @synthesize hasAudioFirstBufferRecorded=_hasAudioFirstBufferRecorded;
@property(nonatomic) _Bool hasTransportMetadata; // @synthesize hasTransportMetadata=_hasTransportMetadata;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) SISchemaClientTransportEventMetadata *transportMetadata; // @synthesize transportMetadata=_transportMetadata;
@property(retain, nonatomic) SISchemaClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)getEventType;	// IMP=0x00000000000e09fa
- (void)setEventType:(id)arg1;	// IMP=0x00000000000e02b0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000de67c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000de5be
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000dc329
- (unsigned long long)hash;	// IMP=0x00000000000dbdac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8df8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d7c31
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cf3b9
- (void)deleteUufrShownTier1;	// IMP=0x00000000000cf383
@property(retain, nonatomic) SISchemaUUFRShownTier1 *uufrShownTier1; // @synthesize uufrShownTier1=_uufrShownTier1;
- (void)deleteDictationContentEdited;	// IMP=0x00000000000cef87
@property(retain, nonatomic) SISchemaDictationContentEdited *dictationContentEdited; // @synthesize dictationContentEdited=_dictationContentEdited;
- (void)deleteAnnounceCarPlayGlyphSettingToggled;	// IMP=0x00000000000ceb8b
@property(retain, nonatomic) SISchemaAnnounceCarPlayGlyphSettingToggled *announceCarPlayGlyphSettingToggled; // @synthesize announceCarPlayGlyphSettingToggled=_announceCarPlayGlyphSettingToggled;
- (void)deleteAnnounceCarPlayBannerTapped;	// IMP=0x00000000000ce78f
@property(retain, nonatomic) SISchemaAnnounceCarPlayBannerTapped *announceCarPlayBannerTapped; // @synthesize announceCarPlayBannerTapped=_announceCarPlayBannerTapped;
- (void)deleteEngagedAccessoryContext;	// IMP=0x00000000000ce393
@property(retain, nonatomic) SISchemaEngagedAccessoryContext *engagedAccessoryContext; // @synthesize engagedAccessoryContext=_engagedAccessoryContext;
- (void)deleteKeyboardDismissed;	// IMP=0x00000000000cdf97
@property(retain, nonatomic) SISchemaKeyboardDismissed *keyboardDismissed; // @synthesize keyboardDismissed=_keyboardDismissed;
- (void)deleteTurnMTERequest;	// IMP=0x00000000000cdb9b
@property(retain, nonatomic) SISchemaTurnMTERequest *turnMTERequest; // @synthesize turnMTERequest=_turnMTERequest;
- (void)deletePnrFatalError;	// IMP=0x00000000000cd79f
@property(retain, nonatomic) SISchemaPNRFatalError *pnrFatalError; // @synthesize pnrFatalError=_pnrFatalError;
- (void)deletePnrSpeechRecognitionSourceContext;	// IMP=0x00000000000cd3a3
@property(retain, nonatomic) SISchemaPNRSpeechRecognitionSourceContext *pnrSpeechRecognitionSourceContext; // @synthesize pnrSpeechRecognitionSourceContext=_pnrSpeechRecognitionSourceContext;
- (void)deletePnrTextToSpeechRequestReceived;	// IMP=0x00000000000ccfa7
@property(retain, nonatomic) SISchemaPNRTextToSpeechRequestReceived *pnrTextToSpeechRequestReceived; // @synthesize pnrTextToSpeechRequestReceived=_pnrTextToSpeechRequestReceived;
- (void)deleteUeiUIRenderingContext;	// IMP=0x00000000000ccbab
@property(retain, nonatomic) SISchemaUEIUIRenderingContext *ueiUIRenderingContext; // @synthesize ueiUIRenderingContext=_ueiUIRenderingContext;
- (void)deleteUeiUUFRReady;	// IMP=0x00000000000cc7af
@property(retain, nonatomic) SISchemaUEIUUFRReady *ueiUUFRReady; // @synthesize ueiUUFRReady=_ueiUUFRReady;
- (void)deleteUeiUserSpeakingContext;	// IMP=0x00000000000cc3b3
@property(retain, nonatomic) SISchemaUEIUserSpeakingContext *ueiUserSpeakingContext; // @synthesize ueiUserSpeakingContext=_ueiUserSpeakingContext;
- (void)deleteUeiLaunchContext;	// IMP=0x00000000000cbfb7
@property(retain, nonatomic) SISchemaUEILaunchContext *ueiLaunchContext; // @synthesize ueiLaunchContext=_ueiLaunchContext;
- (void)deleteAudioStopRecordingStarted;	// IMP=0x00000000000cbbbb
@property(retain, nonatomic) SISchemaAudioStopRecordingStarted *audioStopRecordingStarted; // @synthesize audioStopRecordingStarted=_audioStopRecordingStarted;
- (void)deleteUeiRequestCategorization;	// IMP=0x00000000000cb7bf
@property(retain, nonatomic) SISchemaUEIRequestCategorization *ueiRequestCategorization; // @synthesize ueiRequestCategorization=_ueiRequestCategorization;
- (void)deleteDeviceLockStateChanged;	// IMP=0x00000000000cb3c3
@property(retain, nonatomic) SISchemaDeviceLockStateChanged *deviceLockStateChanged; // @synthesize deviceLockStateChanged=_deviceLockStateChanged;
- (void)deleteUserViewRegionInteraction;	// IMP=0x00000000000cafc7
@property(retain, nonatomic) SISchemaUserViewRegionInteraction *userViewRegionInteraction; // @synthesize userViewRegionInteraction=_userViewRegionInteraction;
- (void)deleteCasinoRelationship;	// IMP=0x00000000000cabcb
@property(retain, nonatomic) SISchemaCasinoRelationship *casinoRelationship; // @synthesize casinoRelationship=_casinoRelationship;
- (void)deleteIntercomMessageRecorded;	// IMP=0x00000000000ca7cf
@property(retain, nonatomic) SISchemaIntercomMessageRecorded *intercomMessageRecorded; // @synthesize intercomMessageRecorded=_intercomMessageRecorded;
- (void)deleteDictationAlternativesViewed;	// IMP=0x00000000000ca3d3
@property(retain, nonatomic) SISchemaDictationAlternativesViewed *dictationAlternativesViewed; // @synthesize dictationAlternativesViewed=_dictationAlternativesViewed;
- (void)deleteUufrFatalError;	// IMP=0x00000000000c9fcf
@property(retain, nonatomic) SISchemaUUFRFatalError *uufrFatalError; // @synthesize uufrFatalError=_uufrFatalError;
- (void)deleteUufrSaid;	// IMP=0x00000000000c9bd9
@property(retain, nonatomic) SISchemaUUFRSaid *uufrSaid; // @synthesize uufrSaid=_uufrSaid;
- (void)deleteUufrShown;	// IMP=0x00000000000c97e3
@property(retain, nonatomic) SISchemaUUFRShown *uufrShown; // @synthesize uufrShown=_uufrShown;
- (void)deleteUufrCompletion;	// IMP=0x00000000000c93ed
@property(retain, nonatomic) SISchemaUUFRCompletion *uufrCompletion; // @synthesize uufrCompletion=_uufrCompletion;
- (void)deleteCarPlayHeadUnitContext;	// IMP=0x00000000000c8ff7
@property(retain, nonatomic) SISchemaCarPlayHeadUnitContext *carPlayHeadUnitContext; // @synthesize carPlayHeadUnitContext=_carPlayHeadUnitContext;
- (void)deleteDictationTranscriptionMetadata;	// IMP=0x00000000000c8c01
@property(retain, nonatomic) SISchemaDictationTranscriptionMetadata *dictationTranscriptionMetadata; // @synthesize dictationTranscriptionMetadata=_dictationTranscriptionMetadata;
- (void)deleteDictationAlternativeSelected;	// IMP=0x00000000000c880b
@property(retain, nonatomic) SISchemaDictationAlternativeSelected *dictationAlternativeSelected; // @synthesize dictationAlternativeSelected=_dictationAlternativeSelected;
- (void)deleteDictationEndPointCancel;	// IMP=0x00000000000c8415
@property(retain, nonatomic) SISchemaDictationEndPointCancel *dictationEndPointCancel; // @synthesize dictationEndPointCancel=_dictationEndPointCancel;
- (void)deleteDictationEndPointStop;	// IMP=0x00000000000c801f
@property(retain, nonatomic) SISchemaDictationEndPointStop *dictationEndPointStop; // @synthesize dictationEndPointStop=_dictationEndPointStop;
- (void)deleteDialogOutput;	// IMP=0x00000000000c7c29
@property(retain, nonatomic) SISchemaDialogOutput *dialogOutput; // @synthesize dialogOutput=_dialogOutput;
- (void)deleteClientFlow;	// IMP=0x00000000000c7833
@property(retain, nonatomic) SISchemaClientFlow *clientFlow; // @synthesize clientFlow=_clientFlow;
- (void)deleteUiStateTransition;	// IMP=0x00000000000c743d
@property(retain, nonatomic) SISchemaUIStateTransition *uiStateTransition; // @synthesize uiStateTransition=_uiStateTransition;
- (void)deleteTextToSpeechEnd;	// IMP=0x00000000000c7047
@property(retain, nonatomic) SISchemaTextToSpeechEnd *textToSpeechEnd; // @synthesize textToSpeechEnd=_textToSpeechEnd;
- (void)deleteTextToSpeechBegin;	// IMP=0x00000000000c6c51
@property(retain, nonatomic) SISchemaTextToSpeechBegin *textToSpeechBegin; // @synthesize textToSpeechBegin=_textToSpeechBegin;
- (void)deleteSpeechTranscription;	// IMP=0x00000000000c685b
@property(retain, nonatomic) SISchemaSpeechTranscription *speechTranscription; // @synthesize speechTranscription=_speechTranscription;
- (void)deleteUufrPresented;	// IMP=0x00000000000c6465
@property(retain, nonatomic) SISchemaUUFRPresented *uufrPresented; // @synthesize uufrPresented=_uufrPresented;
- (void)deleteSiriCue;	// IMP=0x00000000000c606f
@property(retain, nonatomic) SISchemaSiriCue *siriCue; // @synthesize siriCue=_siriCue;
- (void)deletePunchOut;	// IMP=0x00000000000c5c79
@property(retain, nonatomic) SISchemaPunchOut *punchOut; // @synthesize punchOut=_punchOut;
- (void)deleteLocation;	// IMP=0x00000000000c5883
@property(retain, nonatomic) SISchemaLocation *location; // @synthesize location=_location;
- (void)deleteInvocation;	// IMP=0x00000000000c548d
@property(retain, nonatomic) SISchemaInvocation *invocation; // @synthesize invocation=_invocation;
- (void)deleteDictationContext;	// IMP=0x00000000000c5097
@property(retain, nonatomic) SISchemaDictationContext *dictationContext; // @synthesize dictationContext=_dictationContext;
- (void)deleteDeviceFixedContext;	// IMP=0x00000000000c4ca1
@property(retain, nonatomic) SISchemaDeviceFixedContext *deviceFixedContext; // @synthesize deviceFixedContext=_deviceFixedContext;
- (void)deleteDeviceDynamicContext;	// IMP=0x00000000000c48ab
@property(retain, nonatomic) SISchemaDeviceDynamicContext *deviceDynamicContext; // @synthesize deviceDynamicContext=_deviceDynamicContext;
- (void)deleteClientConversationTrace;	// IMP=0x00000000000c44b5
@property(retain, nonatomic) SISchemaConversationTrace *clientConversationTrace; // @synthesize clientConversationTrace=_clientConversationTrace;
- (void)deleteAudioStopRecording;	// IMP=0x00000000000c40bf
@property(retain, nonatomic) SISchemaAudioStopRecording *audioStopRecording; // @synthesize audioStopRecording=_audioStopRecording;
- (void)deleteAudioFirstBufferRecorded;	// IMP=0x00000000000c3cc9
@property(retain, nonatomic) SISchemaAudioFirstBufferRecorded *audioFirstBufferRecorded; // @synthesize audioFirstBufferRecorded=_audioFirstBufferRecorded;
- (void)deleteTransportMetadata;	// IMP=0x00000000000c38f2
- (void)deleteEventMetadata;	// IMP=0x00000000000c38c9
- (id)qualifiedMessageName;	// IMP=0x00000000000c35b7
- (int)getAnyEventType;	// IMP=0x00000000000c35ac
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031a927
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031a8ef

@end

