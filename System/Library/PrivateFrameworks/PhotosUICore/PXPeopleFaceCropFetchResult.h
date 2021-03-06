//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, PXPeopleFaceCropFetchOptions, UIImage;

@interface PXPeopleFaceCropFetchResult : NSObject
{
    _Bool _isCropped;	// 8 = 0x8
    _Bool _isDegraded;	// 9 = 0x9
    UIImage *_image;	// 16 = 0x10
    NSManagedObjectID *_assetObjectID;	// 24 = 0x18
    PXPeopleFaceCropFetchOptions *_options;	// 32 = 0x20
    struct CGRect _faceRect;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004751af
@property(readonly, nonatomic) PXPeopleFaceCropFetchOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) _Bool isDegraded; // @synthesize isDegraded=_isDegraded;
@property(readonly, nonatomic) _Bool isCropped; // @synthesize isCropped=_isCropped;
@property(readonly, nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(readonly, nonatomic) NSManagedObjectID *assetObjectID; // @synthesize assetObjectID=_assetObjectID;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;	// IMP=0x0000000000474e71
- (id)initWithImage:(id)arg1 assetObjectID:(id)arg2 faceRect:(struct CGRect)arg3 isCropped:(_Bool)arg4 isDegraded:(_Bool)arg5 options:(id)arg6;	// IMP=0x0000000000474d8f

@end

