//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPRatingCommand
{
    float _minimumRating;	// 64 = 0x40
    float _maximumRating;	// 68 = 0x44
}

@property(nonatomic) float maximumRating; // @synthesize maximumRating=_maximumRating;
@property(nonatomic) float minimumRating; // @synthesize minimumRating=_minimumRating;
- (id)newCommandEventWithRating:(float)arg1;	// IMP=0x0000000000237bad
- (id)_mediaRemoteCommandInfoOptions;	// IMP=0x0000000000237aa1

@end

