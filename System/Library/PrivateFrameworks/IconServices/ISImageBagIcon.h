//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISImageCache, NSArray;

@interface ISImageBagIcon
{
    NSArray *_images;	// 16 = 0x10
    NSArray *_decorations;	// 24 = 0x18
    ISImageCache *_imageCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001ec49
@property(retain) ISImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (id)decorations;	// IMP=0x000000000001ec11
@property(readonly) NSArray *images; // @synthesize images=_images;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001eb08
- (id)imageForImageDescriptor:(id)arg1;	// IMP=0x000000000001e9b9
- (void)_prepareImagesForImageDescriptors:(id)arg1;	// IMP=0x000000000001e731
- (id)_generateImageWithDescriptor:(id)arg1;	// IMP=0x000000000001e4b8
- (id)initWithImageBag:(id)arg1;	// IMP=0x000000000001e3f7
- (id)initWithImages:(id)arg1 decorations:(id)arg2;	// IMP=0x000000000001e320
- (id)initWithImages:(id)arg1;	// IMP=0x000000000001e307

@end
