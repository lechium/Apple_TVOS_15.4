//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TLAlertPlaybackCompletionContext, TLAlertStoppingOptions, TLSystemSound;
@protocol TLAlertPlaybackObserver;

@interface TLAlertSystemSoundContext : NSObject
{
    _Bool _hasPlaybackStarted;	// 8 = 0x8
    _Bool _beingInterrupted;	// 9 = 0x9
    _Bool _beingDeemphasized;	// 10 = 0xa
    _Bool _deemphasized;	// 11 = 0xb
    _Bool _hasDeemphasizedPlaybackStarted;	// 12 = 0xc
    _Bool _shouldBeInterruptedAfterDeemphasizedPlaybackStarts;	// 13 = 0xd
    TLSystemSound *_sound;	// 16 = 0x10
    TLAlertPlaybackCompletionContext *_playbackCompletionContext;	// 24 = 0x18
    id <TLAlertPlaybackObserver> _playbackObserver;	// 32 = 0x20
    NSString *_toneIdentifierForDeemphasizingAlert;	// 40 = 0x28
    TLAlertStoppingOptions *_stoppingOptionsForDeferredInterruption;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002b801
@property(copy, nonatomic) TLAlertStoppingOptions *stoppingOptionsForDeferredInterruption; // @synthesize stoppingOptionsForDeferredInterruption=_stoppingOptionsForDeferredInterruption;
@property(nonatomic) _Bool shouldBeInterruptedAfterDeemphasizedPlaybackStarts; // @synthesize shouldBeInterruptedAfterDeemphasizedPlaybackStarts=_shouldBeInterruptedAfterDeemphasizedPlaybackStarts;
@property(nonatomic) _Bool hasDeemphasizedPlaybackStarted; // @synthesize hasDeemphasizedPlaybackStarted=_hasDeemphasizedPlaybackStarted;
@property(nonatomic, getter=isDeemphasized) _Bool deemphasized; // @synthesize deemphasized=_deemphasized;
@property(nonatomic, getter=isBeingDeemphasized) _Bool beingDeemphasized; // @synthesize beingDeemphasized=_beingDeemphasized;
@property(copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert; // @synthesize toneIdentifierForDeemphasizingAlert=_toneIdentifierForDeemphasizingAlert;
@property(nonatomic, getter=isBeingInterrupted) _Bool beingInterrupted; // @synthesize beingInterrupted=_beingInterrupted;
@property(nonatomic) _Bool hasPlaybackStarted; // @synthesize hasPlaybackStarted=_hasPlaybackStarted;
@property(nonatomic) __weak id <TLAlertPlaybackObserver> playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(retain, nonatomic) TLAlertPlaybackCompletionContext *playbackCompletionContext; // @synthesize playbackCompletionContext=_playbackCompletionContext;
@property(retain, nonatomic) TLSystemSound *sound; // @synthesize sound=_sound;
- (id)description;	// IMP=0x000000000002b4ee

@end

