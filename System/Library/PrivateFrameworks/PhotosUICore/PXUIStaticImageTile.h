//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXImageUIView, PXImageViewSpec, UIView;

@interface PXUIStaticImageTile : NSObject <PXUIViewBasicTile, PXReusableObject>
{
    PXImageViewSpec *_spec;	// 8 = 0x8
    PXImageUIView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000051bdfc
@property(readonly, nonatomic) PXImageUIView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) PXImageViewSpec *spec; // @synthesize spec=_spec;
- (void)prepareForReuse;	// IMP=0x000000000051bda9
- (void)becomeReusable;	// IMP=0x000000000051bd67
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x000000000051bc67
- (id)initWithImage:(id)arg1;	// IMP=0x000000000051bbc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

