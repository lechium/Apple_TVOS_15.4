//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSApplicationProxy, NSString, NSURL;

@interface HBMutableLaunchRequest
{
    _Bool _wantsPlaybackShroud;	// 40 = 0x28
}

@property(nonatomic) _Bool wantsPlaybackShroud; // @synthesize wantsPlaybackShroud=_wantsPlaybackShroud;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000b6ed
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @dynamic applicationProxy;
@property(copy, nonatomic) NSURL *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *applicationIdentifier; // @dynamic applicationIdentifier;

@end

