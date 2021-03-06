//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXVoiceOverActivity, SCRCThreadKey;

@interface VOTOutputComponent : NSObject
{
    unsigned long long _currentOutputActionID;	// 8 = 0x8
    SCRCThreadKey *_threadKey;	// 16 = 0x10
    AXVoiceOverActivity *_lastUsedActivity;	// 24 = 0x18
    double _lastUsedActivityTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000bcfe
@property(nonatomic) double lastUsedActivityTime; // @synthesize lastUsedActivityTime=_lastUsedActivityTime;
@property(retain, nonatomic) AXVoiceOverActivity *lastUsedActivity; // @synthesize lastUsedActivity=_lastUsedActivity;
- (_Bool)stringIsInSupportedCharacters:(id)arg1;	// IMP=0x001000000000bcc5
- (id)determineLanguageForEvent:(id)arg1;	// IMP=0x001000000000bc04
- (id)determineLanguageForAction:(id)arg1 overrideLanguage:(id)arg2 targetLanguage:(id)arg3;	// IMP=0x001000000000b9d7
- (void)notifyActionComplete:(id)arg1;	// IMP=0x001000000000b858
- (void)notifyRangeWillOutput:(struct _NSRange)arg1 container:(id)arg2;	// IMP=0x001000000000b6fc
- (void)handleEvent:(id)arg1;	// IMP=0x001000000000b6f6
- (void)preprocessAction:(id)arg1;	// IMP=0x001000000000b6f0
- (void)setCurrentOutputActionID:(unsigned long long)arg1;	// IMP=0x001000000000b6e6
- (id)determineActivityForAction:(id)arg1;	// IMP=0x001000000000b3a7
- (double)outputMutedActivityLastToggleTime;	// IMP=0x001000000011db65
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x001000000011db3e
- (_Bool)determineOutputMutedForActivity:(id)arg1;	// IMP=0x001000000000b205
- (void)performAction:(id)arg1 owner:(id)arg2;	// IMP=0x001000000000b05a
- (id);	// IMP=0x001000000000aff6

@end

