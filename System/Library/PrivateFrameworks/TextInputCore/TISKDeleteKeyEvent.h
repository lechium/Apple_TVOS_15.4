//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TISKDeleteKeyEvent
{
    long long _deletePostion;	// 64 = 0x40
}

@property(nonatomic) long long deletePostion; // @synthesize deletePostion=_deletePostion;
- (id)description;	// IMP=0x000000000017998c
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;	// IMP=0x0000000000179737
- (void)reportToSession:(id)arg1;	// IMP=0x00000000001795c6
- (long long)_metricDeleteKeyPostion;	// IMP=0x00000000001795a8
- (id)init:(id)arg1 emojiSearchMode:(_Bool)arg2 order:(long long)arg3;	// IMP=0x0000000000179505

@end
