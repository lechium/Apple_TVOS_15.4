//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRNowPlayingState;

@interface MRSetStateMessage
{
    MRNowPlayingState *_state;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000014e92
- (unsigned long long)type;	// IMP=0x0000000000014e87
@property(readonly, nonatomic) MRNowPlayingState *state;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;	// IMP=0x0000000000014ddc
- (id)initWithNowPlayingState:(id)arg1;	// IMP=0x0000000000014cce

@end

