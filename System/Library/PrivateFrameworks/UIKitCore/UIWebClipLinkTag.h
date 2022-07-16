//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject
{
    _Bool _mediaMatchesPortraitOrientation;	// 8 = 0x8
    _Bool _mediaMatchesLandscapeOrientation;	// 9 = 0x9
    NSString *_href;	// 16 = 0x10
    NSString *_rel;	// 24 = 0x18
    NSString *_sizes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000010c3937
@property(nonatomic) _Bool mediaMatchesLandscapeOrientation; // @synthesize mediaMatchesLandscapeOrientation=_mediaMatchesLandscapeOrientation;
@property(nonatomic) _Bool mediaMatchesPortraitOrientation; // @synthesize mediaMatchesPortraitOrientation=_mediaMatchesPortraitOrientation;
@property(copy, nonatomic) NSString *sizes; // @synthesize sizes=_sizes;
@property(copy, nonatomic) NSString *rel; // @synthesize rel=_rel;
@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(readonly, nonatomic) NSURL *hrefURL;

@end
