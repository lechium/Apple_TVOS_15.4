//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DEUpdaterURLParams : NSObject
{
    NSString *_distribution;	// 8 = 0x8
    NSString *_publicationURLSrc;	// 16 = 0x10
    NSURL *_publicationURL;	// 24 = 0x18
    NSURL *_downloadURLPrefix;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b8b24
@property(retain, nonatomic) NSURL *downloadURLPrefix; // @synthesize downloadURLPrefix=_downloadURLPrefix;
@property(retain, nonatomic) NSURL *publicationURL; // @synthesize publicationURL=_publicationURL;
@property(retain, nonatomic) NSString *publicationURLSrc; // @synthesize publicationURLSrc=_publicationURLSrc;
@property(retain, nonatomic) NSString *distribution; // @synthesize distribution=_distribution;

@end

