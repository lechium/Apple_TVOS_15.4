//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TLAlert;

@interface TLAlertQueuePlayerStateDescriptor : NSObject
{
    _Bool _hasInvokedCompletionHandlerForPlayingAlert;	// 8 = 0x8
    _Bool _isAlertActivationAssertionAcquired;	// 9 = 0x9
    TLAlert *_playingAlert;	// 16 = 0x10
    CDUnknownBlockType _playingAlertCompletionHandler;	// 24 = 0x18
    TLAlert *_alertForAudioEnvironmentSetup;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003b7fa
@property(retain, nonatomic) TLAlert *alertForAudioEnvironmentSetup; // @synthesize alertForAudioEnvironmentSetup=_alertForAudioEnvironmentSetup;
@property(readonly, nonatomic) CDUnknownBlockType playingAlertCompletionHandler; // @synthesize playingAlertCompletionHandler=_playingAlertCompletionHandler;
@property(readonly, nonatomic) TLAlert *playingAlert; // @synthesize playingAlert=_playingAlert;
@property(nonatomic, getter=isAlertActivationAssertionAcquired) _Bool alertActivationAssertionAcquired; // @synthesize alertActivationAssertionAcquired=_isAlertActivationAssertionAcquired;
- (void)invokePlayingAlertCompletionHandlerWithPlaybackCompletionType:(long long)arg1 error:(id)arg2;	// IMP=0x000000000003b6a7
- (id)debugDescription;	// IMP=0x000000000003b690
- (id)description;	// IMP=0x000000000003b67c
- (id)_descriptionForDebugging:(_Bool)arg1;	// IMP=0x000000000003b485
- (void)_transferPlayingAlertAndCompletionHandlerFromPreviousStateDescriptor:(id)arg1;	// IMP=0x000000000003b41e
- (id)_initForRelinquishingActivationAssertionWithAlertForAudioEnvironmentSetup:(id)arg1 previousStateDescriptor:(id)arg2;	// IMP=0x000000000003b37a
- (id)stateDescriptorByRelinquishingActivationAssertion;	// IMP=0x000000000003b314
- (id)initForAcquiringActivationAssertionWithAlertForAudioEnvironmentSetup:(id)arg1 previousStateDescriptor:(id)arg2;	// IMP=0x000000000003b270
- (id)stateDescriptorForCompletedPlayback;	// IMP=0x000000000003b22d
- (id)initWithPlayingAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 previousStateDescriptor:(id)arg3;	// IMP=0x000000000003b121

@end

