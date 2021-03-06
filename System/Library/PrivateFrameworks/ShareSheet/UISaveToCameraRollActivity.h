//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UISaveToCameraRollSaveItemsController;

@interface UISaveToCameraRollActivity
{
    long long _imageCount;	// 8 = 0x8
    long long _livePhotoCount;	// 16 = 0x10
    long long _videoCount;	// 24 = 0x18
    _UISaveToCameraRollSaveItemsController *_saveController;	// 32 = 0x20
}

+ (unsigned long long)_xpcAttributes;	// IMP=0x00000000000567e4
- (void).cxx_destruct;	// IMP=0x000000000005758b
@property(retain, nonatomic) _UISaveToCameraRollSaveItemsController *saveController; // @synthesize saveController=_saveController;
@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) long long livePhotoCount; // @synthesize livePhotoCount=_livePhotoCount;
@property(nonatomic) long long imageCount; // @synthesize imageCount=_imageCount;
- (void)performActivity;	// IMP=0x00000000000574fa
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000000057376
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000571a0
- (_Bool)_canSaveImages;	// IMP=0x00000000000570d2
- (id)_systemImageName;	// IMP=0x00000000000570a0
- (id)_activityImage;	// IMP=0x0000000000056c6b
- (id)activityTitle;	// IMP=0x0000000000056825
- (id)activityType;	// IMP=0x0000000000056811

@end

