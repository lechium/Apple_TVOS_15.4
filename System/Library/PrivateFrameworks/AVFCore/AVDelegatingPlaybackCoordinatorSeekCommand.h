//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCoordinatedPlaybackParticipant, AVDelegatingPlaybackCoordinator, NSDate, NSString;

@interface AVDelegatingPlaybackCoordinatorSeekCommand
{
    AVDelegatingPlaybackCoordinator *_coordinator;	// 8 = 0x8
    AVCoordinatedPlaybackParticipant *_originator;	// 16 = 0x10
    NSString *_expectedCurrentItemIdentifier;	// 24 = 0x18
    long long _commandOrderIndex;	// 32 = 0x20
    CDStruct_1b6d18a9 _itemTime;	// 40 = 0x28
    _Bool _shouldPause;	// 64 = 0x40
    _Bool _shouldBufferInAnticipationOfPlayback;	// 65 = 0x41
    float _anticipatedPlaybackRate;	// 68 = 0x44
    NSDate *_completionDueDate;	// 72 = 0x48
}

@property(readonly, nonatomic) NSDate *completionDueDate; // @synthesize completionDueDate=_completionDueDate;
@property(readonly, nonatomic) float anticipatedPlaybackRate; // @synthesize anticipatedPlaybackRate=_anticipatedPlaybackRate;
@property(readonly, nonatomic) _Bool shouldBufferInAnticipationOfPlayback; // @synthesize shouldBufferInAnticipationOfPlayback=_shouldBufferInAnticipationOfPlayback;
@property(readonly, nonatomic) CDStruct_1b6d18a9 itemTime; // @synthesize itemTime=_itemTime;
- (id)expectedCurrentItemIdentifier;	// IMP=0x00000000000f4708
- (id)originator;	// IMP=0x00000000000f46f7
- (void)dealloc;	// IMP=0x00000000000f4683
- (id)initWithCoordinator:(id)arg1 originator:(id)arg2 expectedCurrentItemIdentifier:(id)arg3 commandOrderIndex:(long long)arg4 itemTime:(CDStruct_1b6d18a9)arg5 shouldPause:(_Bool)arg6 shouldBufferInAnticipationOfPlayback:(_Bool)arg7 anticipatedPlaybackRate:(float)arg8 completionDueDate:(id)arg9;	// IMP=0x00000000000f4573
- (id)init;	// IMP=0x00000000000f452c

@end

