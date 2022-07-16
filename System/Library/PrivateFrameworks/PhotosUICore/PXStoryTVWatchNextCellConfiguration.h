//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PXStoryTVCellSpec;

@interface PXStoryTVWatchNextCellConfiguration
{
    PXStoryTVCellSpec *_spec;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    long long _countdownValue;	// 32 = 0x20
    long long _maximumCountdownValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004c7a14
@property(nonatomic) long long maximumCountdownValue; // @synthesize maximumCountdownValue=_maximumCountdownValue;
@property(nonatomic) long long countdownValue; // @synthesize countdownValue=_countdownValue;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PXStoryTVCellSpec *spec; // @synthesize spec=_spec;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c771e
- (unsigned long long)hash;	// IMP=0x00000000004c7671
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c7535

@end
