//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXInboxModelMediaProvider-Protocol.h>

@class NSString;

@interface PXSampleInboxMediaProvider : NSObject <PXInboxModelMediaProvider>
{
}

+ (id)_mockImage;	// IMP=0x00000000001a60a1
- (void)cancelImageRequest:(int)arg1;	// IMP=0x00000000001a609b
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a6033

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
