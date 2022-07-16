//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TISKTimestampEvent
{
    double _timestamp;	// 32 = 0x20
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (double)touchUpTimestamp;	// IMP=0x000000000017ab36
- (double)touchDownTimestamp;	// IMP=0x000000000017ab24
- (_Bool)isMissingATouch;	// IMP=0x000000000017ab07
- (id)init:(int)arg1 timestamp:(double)arg2 emojiSearchMode:(_Bool)arg3 order:(long long)arg4;	// IMP=0x000000000017aa97

@end

