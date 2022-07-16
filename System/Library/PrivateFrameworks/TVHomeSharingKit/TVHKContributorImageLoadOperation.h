//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSURL;
@protocol TVHKContributorImageLoadOperationDelegate;

__attribute__((visibility("hidden")))
@interface TVHKContributorImageLoadOperation
{
    id <TVHKContributorImageLoadOperationDelegate> _delegate;	// 8 = 0x8
    NSURL *_imageURL;	// 16 = 0x10
    NSOperation *_imageLoadOperation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a65b6
@property(retain, nonatomic) NSOperation *imageLoadOperation; // @synthesize imageLoadOperation=_imageLoadOperation;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) __weak id <TVHKContributorImageLoadOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startURLImageLoadOperationWithTemplateURLString:(id)arg1;	// IMP=0x00000000000a62a6
- (id)_contributorImageLoadParams;	// IMP=0x00000000000a6294
- (void)cancel;	// IMP=0x00000000000a6216
- (void)executionDidBegin;	// IMP=0x00000000000a6064
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 delegate:(id)arg4;	// IMP=0x00000000000a5fd5
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x00000000000a5f66

@end
