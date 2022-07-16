//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, NSString, NSTimer, PFVideoAVObjectBuilder, PLProgressView;
@protocol PLVideoRemakerDelegate;

@interface PLVideoRemaker : NSObject
{
    NSString *_trimmedPath;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _trimStartTime;	// 24 = 0x18
    double _trimEndTime;	// 32 = 0x20
    int _mode;	// 40 = 0x28
    AVAssetExportSession *_exportSession;	// 48 = 0x30
    float _percentComplete;	// 56 = 0x38
    NSTimer *_progressTimer;	// 64 = 0x40
    PLProgressView *_progressView;	// 72 = 0x48
    _Bool _shouldExportToPhotoDataDirectory;	// 80 = 0x50
    NSObject<PLVideoRemakerDelegate> *_delegate;	// 88 = 0x58
    CDUnknownBlockType _progressHandler;	// 96 = 0x60
    NSString *_exportPresetOverride;	// 104 = 0x68
    NSString *_customAccessibilityLabel;	// 112 = 0x70
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;	// 120 = 0x78
}

+ (int)getSDRemakerModeForMode:(int)arg1;	// IMP=0x00000000000316d5
+ (int)getHDRemakerModeForMode:(int)arg1;	// IMP=0x00000000000316c1
+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;	// IMP=0x0000000000031658
+ (double)maximumDurationForTrimMode:(int)arg1;	// IMP=0x0000000000031539
+ (long long)fileLengthLimitForRemakerMode:(int)arg1;	// IMP=0x0000000000031525
- (void).cxx_destruct;	// IMP=0x0000000000031150
@property(readonly, retain, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // @synthesize _videoAVObjectBuilder=__videoAVObjectBuilder;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(nonatomic) double trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(nonatomic) double trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *exportPresetOverride; // @synthesize exportPresetOverride=_exportPresetOverride;
@property(nonatomic) _Bool shouldExportToPhotoDataDirectory; // @synthesize shouldExportToPhotoDataDirectory=_shouldExportToPhotoDataDirectory;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) __weak NSObject<PLVideoRemakerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_exportCompletedWithSuccess:(_Bool)arg1;	// IMP=0x0000000000030fab
- (void)cancel;	// IMP=0x0000000000030f7d
- (void)_didEndRemakingWithTemporaryPath:(id)arg1;	// IMP=0x0000000000030f12
- (id)_fileFormatForURL:(id)arg1;	// IMP=0x0000000000030abf
- (void)remake;	// IMP=0x0000000000030748
- (id)_metadata;	// IMP=0x00000000000306f3
- (void)_updateProgress;	// IMP=0x0000000000030647
- (void)_removeProgressTimer;	// IMP=0x0000000000030614
- (void)_resetProgressTimer;	// IMP=0x00000000000305c1
@property(readonly, nonatomic) NSString *exportPreset;
- (id)progressView;	// IMP=0x000000000003047c
- (id)messageForRemakingProgress;	// IMP=0x0000000000030442
- (void)dealloc;	// IMP=0x000000000003039f
- (id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(_Bool)arg2;	// IMP=0x0000000000030268
- (id)initWithAVAsset:(id)arg1;	// IMP=0x0000000000030200
- (id)initWithPublishingMedia:(id)arg1;	// IMP=0x00000000000300fe

@end
