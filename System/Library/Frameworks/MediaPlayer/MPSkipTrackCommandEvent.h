//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSkipTrackCommandEvent
{
    _Bool _requestingDefermentToPlaybackQueuePosition;	// 56 = 0x38
}

@property(readonly, nonatomic, getter=isRequestingDefermentToPlaybackQueuePosition) _Bool requestingDefermentToPlaybackQueuePosition; // @synthesize requestingDefermentToPlaybackQueuePosition=_requestingDefermentToPlaybackQueuePosition;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000074ff7

@end
