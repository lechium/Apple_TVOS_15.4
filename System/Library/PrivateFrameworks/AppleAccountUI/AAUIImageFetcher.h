//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface AAUIImageFetcher : NSObject
{
    NSURLSession *_urlSession;	// 8 = 0x8
}

+ (id)sharedImageFetcher;	// IMP=0x0000000000027cc8
- (void).cxx_destruct;	// IMP=0x00000000000280ea
- (id)_urlSession;	// IMP=0x0000000000027fed
- (void)fetchImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027d1d

@end
