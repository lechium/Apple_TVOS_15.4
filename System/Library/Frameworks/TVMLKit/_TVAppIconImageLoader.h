//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVImageLoader-Protocol.h>

@class NSOperationQueue, NSString;

@interface _TVAppIconImageLoader : NSObject <TVImageLoader>
{
    NSOperationQueue *_imageLoaderQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000505ed
- (void).cxx_destruct;	// IMP=0x0000000000050ad6
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000050ab4
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000050a96
- (id)_createApplicationIconForIdentifier:(id)arg1;	// IMP=0x0000000000050a3f
- (void)cancelLoad:(id)arg1;	// IMP=0x00000000000509f3
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000507b5
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000000005074b
- (id)URLForObject:(id)arg1;	// IMP=0x0000000000050698
- (id)init;	// IMP=0x0000000000050642

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

