//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface UIWebClipIcon : NSObject
{
    _Bool _precomposed;	// 8 = 0x8
    _Bool _siteWide;	// 9 = 0x9
    struct CGSize _bestSize;	// 16 = 0x10
    NSURL *_url;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000010c3867
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct CGSize bestSize; // @synthesize bestSize=_bestSize;
@property(nonatomic, getter=isSiteWide) _Bool siteWide; // @synthesize siteWide=_siteWide;
@property(nonatomic, getter=isPrecomposed) _Bool precomposed; // @synthesize precomposed=_precomposed;
- (long long)compare:(id)arg1 preferringDeviceIconSizes:(_Bool)arg2;	// IMP=0x00000000010c365f

@end
