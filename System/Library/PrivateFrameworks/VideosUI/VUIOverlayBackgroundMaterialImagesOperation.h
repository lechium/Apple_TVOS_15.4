//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSDictionary, UIImage;

__attribute__((visibility("hidden")))
@interface VUIOverlayBackgroundMaterialImagesOperation : NSOperation
{
    NSArray *_overlayMaterialRequests;	// 8 = 0x8
    UIImage *_resizedSourceBackgroundImage;	// 16 = 0x10
    NSDictionary *_overlayMaterialImageByIdentifier;	// 24 = 0x18
    UIImage *_sourceBackgroundImage;	// 32 = 0x20
    struct CGSize _resizedBackgroundImageSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000013b81a
@property(retain, nonatomic) UIImage *sourceBackgroundImage; // @synthesize sourceBackgroundImage=_sourceBackgroundImage;
@property(copy, nonatomic) NSDictionary *overlayMaterialImageByIdentifier; // @synthesize overlayMaterialImageByIdentifier=_overlayMaterialImageByIdentifier;
@property(retain, nonatomic) UIImage *resizedSourceBackgroundImage; // @synthesize resizedSourceBackgroundImage=_resizedSourceBackgroundImage;
@property(copy, nonatomic) NSArray *overlayMaterialRequests; // @synthesize overlayMaterialRequests=_overlayMaterialRequests;
@property(nonatomic) struct CGSize resizedBackgroundImageSize; // @synthesize resizedBackgroundImageSize=_resizedBackgroundImageSize;
- (id)_blurredMaterialImageWithSourceBackgroundImage:(id)arg1 forRect:(struct CGRect)arg2 croppedRect:(struct CGRect)arg3;	// IMP=0x000000000013b51b
- (void)main;	// IMP=0x000000000013b0a2
- (id)init;	// IMP=0x000000000013b033
- (id)initWithSourceBackgroundImage:(id)arg1;	// IMP=0x000000000013afc5

@end

