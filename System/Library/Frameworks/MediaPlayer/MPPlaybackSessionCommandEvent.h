//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPPlaybackSessionCommandEvent
{
    NSString *_identifier;	// 56 = 0x38
    NSString *_revision;	// 64 = 0x40
    long long _priority;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000007693e
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000000767d2

@end

