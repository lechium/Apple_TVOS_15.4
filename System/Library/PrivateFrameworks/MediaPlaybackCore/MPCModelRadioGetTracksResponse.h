//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioGetTracksResponse : NSObject
{
    long long _tracklistAction;	// 8 = 0x8
    MPSectionedCollection *_tracks;	// 16 = 0x10
    double _networkingTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000163a1e
@property(readonly, nonatomic) double networkingTime; // @synthesize networkingTime=_networkingTime;
@property(readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) long long tracklistAction; // @synthesize tracklistAction=_tracklistAction;
- (id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2 networkingTime:(double)arg3;	// IMP=0x0000000000163972

@end

