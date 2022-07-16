//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface PXPeopleFaceTileImageRequestResult : NSObject
{
    _Bool _isDegraded;	// 8 = 0x8
    _Bool _isVeryLowQuality;	// 9 = 0x9
    UIImage *_image;	// 16 = 0x10
    id _originalObjectID;	// 24 = 0x18
    id _assetObjectID;	// 32 = 0x20
    struct CGSize _originalImageSize;	// 40 = 0x28
    struct CGRect _faceRect;	// 56 = 0x38
    struct PXFaceTileImageParams _params;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000006140bb
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(nonatomic) _Bool isVeryLowQuality; // @synthesize isVeryLowQuality=_isVeryLowQuality;
@property(nonatomic) struct PXFaceTileImageParams params; // @synthesize params=_params;
@property(retain, nonatomic) id assetObjectID; // @synthesize assetObjectID=_assetObjectID;
@property(retain, nonatomic) id originalObjectID; // @synthesize originalObjectID=_originalObjectID;
@property(readonly, nonatomic) _Bool isDegraded; // @synthesize isDegraded=_isDegraded;
@property(readonly, nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;	// IMP=0x0000000000613f2c
- (id)initWithImage:(id)arg1 faceRect:(struct CGRect)arg2 isDegraded:(_Bool)arg3;	// IMP=0x0000000000613e9c

@end

