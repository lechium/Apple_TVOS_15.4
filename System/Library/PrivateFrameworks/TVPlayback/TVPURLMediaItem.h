//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSURL;

@interface TVPURLMediaItem
{
    NSURL *_url;	// 8 = 0x8
    NSSet *_traits;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000821d
@property(copy, nonatomic) NSSet *traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000000000815a
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x000000000000809c
- (id)mediaItemURL;	// IMP=0x000000000000808a
- (id)initWithURL:(id)arg1 traits:(id)arg2;	// IMP=0x0000000000007fb4
- (id)init;	// IMP=0x0000000000007f75

@end

