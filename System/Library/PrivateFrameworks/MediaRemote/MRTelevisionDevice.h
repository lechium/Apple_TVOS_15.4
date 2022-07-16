//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/RTIInputSystemPayloadDelegate-Protocol.h>

@class NSObject, NSString, RTIInputSystemSourceSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTelevisionDevice <RTIInputSystemPayloadDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    _Bool _hiliteMode;	// 16 = 0x10
    unsigned int _gameControllerInputMode;	// 20 = 0x14
    CDUnknownBlockType _gameControllerInputModeCallback;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_gameControllerInputModeCallbackQueue;	// 32 = 0x20
    CDUnknownBlockType _gameControllerPropertiesCallback;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_gameControllerPropertiesCallbackQueue;	// 48 = 0x30
    CDUnknownBlockType _recordingStateCallback;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_recordingStateCallbackQueue;	// 64 = 0x40
    CDUnknownBlockType _textInputCallback;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_textInputCallbackQueue;	// 80 = 0x50
    CDUnknownBlockType _rtiCallback;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_rtiCallbackQueue;	// 96 = 0x60
    RTIInputSystemSourceSession *_rtiSourceSession;	// 104 = 0x68
    CDUnknownBlockType _hiliteModeCallback;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_hiliteModeCallbackQueue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000ced81
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hiliteModeCallbackQueue; // @synthesize hiliteModeCallbackQueue=_hiliteModeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType hiliteModeCallback; // @synthesize hiliteModeCallback=_hiliteModeCallback;
@property(retain, nonatomic) RTIInputSystemSourceSession *rtiSourceSession; // @synthesize rtiSourceSession=_rtiSourceSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *rtiCallbackQueue; // @synthesize rtiCallbackQueue=_rtiCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType rtiCallback; // @synthesize rtiCallback=_rtiCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *textInputCallbackQueue; // @synthesize textInputCallbackQueue=_textInputCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType textInputCallback; // @synthesize textInputCallback=_textInputCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue; // @synthesize recordingStateCallbackQueue=_recordingStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType recordingStateCallback; // @synthesize recordingStateCallback=_recordingStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerPropertiesCallbackQueue; // @synthesize gameControllerPropertiesCallbackQueue=_gameControllerPropertiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType gameControllerPropertiesCallback; // @synthesize gameControllerPropertiesCallback=_gameControllerPropertiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue; // @synthesize gameControllerInputModeCallbackQueue=_gameControllerInputModeCallbackQueue;
@property(nonatomic) unsigned int gameControllerInputMode; // @synthesize gameControllerInputMode=_gameControllerInputMode;
@property(copy, nonatomic) CDUnknownBlockType gameControllerInputModeCallback; // @synthesize gameControllerInputModeCallback=_gameControllerInputModeCallback;
@property(readonly, nonatomic) _Bool hiliteMode; // @synthesize hiliteMode=_hiliteMode;
- (void)handleTextActionPayload:(id)arg1;	// IMP=0x00000000000ce86f
- (void)wake;	// IMP=0x00000000000cde9c
- (void)exitHiliteMode;	// IMP=0x00000000000cddbe
- (void)processVoiceInputAudioDataForDeviceID:(unsigned int)arg1 withBuffer:(id)arg2 time:(CDStruct_ace97b7a)arg3 gain:(float)arg4;	// IMP=0x00000000000cdc9a
- (void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cda3a
- (void)sendGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;	// IMP=0x00000000000cd7e8
- (void)unregisterGameController:(unsigned long long)arg1;	// IMP=0x00000000000cd748
- (void)registerGameControllerWithProperties:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cd3c6
- (void)getRTISessionWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ccf2b
- (void)clearActiveTextEditingSessionData;	// IMP=0x00000000000ccf1a
- (void)deleteBackwardInActiveTextEditingSession;	// IMP=0x00000000000ccf09
- (void)setTextOnActiveTextEditingSessionWithText:(id)arg1;	// IMP=0x00000000000ccef7
- (void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1;	// IMP=0x00000000000ccdd2
- (void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cc974
- (void)sendTouchEvent:(struct _MRHIDTouchEvent)arg1 toVirtualDeviceWithID:(unsigned long long)arg2;	// IMP=0x00000000000cc7e2
- (void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc3dd
- (id)currentClientUpdatesConfigMessage;	// IMP=0x00000000000cc2c8
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000000cbca2
- (void)setHiliteModeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00000000000cbb65
- (void)setVoiceRecordingStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00000000000cba3a
- (void)setRTICallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00000000000cb8fd
- (void)setTextEditingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00000000000cb7c0
- (void)setGameControllerPropertiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00000000000cb695
- (void)setGameControllerInputModeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00000000000cb560
- (id)initWithTransport:(id)arg1;	// IMP=0x00000000000cb300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

