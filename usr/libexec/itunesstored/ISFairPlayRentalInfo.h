//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ISFairPlayRentalInfo : NSObject
{
    unsigned int _playbackDuration;	// 8 = 0x8
    unsigned int _playbackStartTime;	// 12 = 0xc
    unsigned int _rentalDuration;	// 16 = 0x10
    unsigned int _rentalStartTime;	// 20 = 0x14
}

@property(nonatomic) unsigned int rentalStartTime; // @synthesize rentalStartTime=_rentalStartTime;
@property(nonatomic) unsigned int rentalDuration; // @synthesize rentalDuration=_rentalDuration;
@property(nonatomic) unsigned int playbackStartTime; // @synthesize playbackStartTime=_playbackStartTime;
@property(nonatomic) unsigned int playbackDuration; // @synthesize playbackDuration=_playbackDuration;

@end

