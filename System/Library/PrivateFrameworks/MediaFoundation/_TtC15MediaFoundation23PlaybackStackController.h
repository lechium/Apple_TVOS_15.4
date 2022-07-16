//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <MediaFoundation/MFAudioSessionControlling-Protocol.h>
#import <MediaFoundation/MFPlayerConfigurable-Protocol.h>
#import <MediaFoundation/MFResettable-Protocol.h>
#import <MediaFoundation/MFStackModeConfigurable-Protocol.h>
#import <MediaFoundation/MFStateDumpable-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC15MediaFoundation23PlaybackStackController : _TtCs12_SwiftObject <MFStateDumpable, MFResettable, MFAudioSessionControlling, MFStackModeConfigurable, MFPlayerConfigurable>
{
    MISSING_TYPE *queueController;	// 16 = 0x10
    MISSING_TYPE *queueAssetLoader;	// 24 = 0x18
    MISSING_TYPE *playerController;	// 40 = 0x28
    MISSING_TYPE *reporter;	// 48 = 0x30
    MISSING_TYPE *internalController;	// 56 = 0x38
    MISSING_TYPE *errorController;	// 64 = 0x40
    MISSING_TYPE *backgroundTaskController;	// 72 = 0x48
    MISSING_TYPE *currentSetQueueIdentifier;	// 80 = 0x50
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;
- (void)reset;	// IMP=0x00000000000a2b30
- (void)activateAudioSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a2c20
- (void)updateAudioSessionWithConfiguration:(id)arg1;	// IMP=0x00000000000a2bd0
- (void)setupForManagedSessionWithAudioSession:(id)arg1;	// IMP=0x00000000000a2f90
- (void)setupForShared;	// IMP=0x00000000000a2f60
- (void)setupForSolo;	// IMP=0x00000000000a2e50
@property(nonatomic, readonly) _Bool isModeManagedSession;
@property(nonatomic, readonly) _Bool isModeShared;
@property(nonatomic, readonly) _Bool isModeSolo;
@property(nonatomic, readonly) NSString *modeDescription;
- (void)setRelativeVolume:(float)arg1;	// IMP=0x00000000000a3140
- (void)setSpatializationFormat:(long long)arg1;	// IMP=0x00000000000a3110

@end

