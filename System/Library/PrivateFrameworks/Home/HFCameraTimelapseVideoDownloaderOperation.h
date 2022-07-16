//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBlockOperation.h>

@class HFCameraAnalyticsCameraTimelapseLoadEvent, HMCameraClip, NSURL;
@protocol HFCameraTimelapseVideoDownloaderDelegate;

@interface HFCameraTimelapseVideoDownloaderOperation : NSBlockOperation
{
    _Bool _fileAlreadyExists;	// 8 = 0x8
    id <HFCameraTimelapseVideoDownloaderDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _downloadingBlock;	// 24 = 0x18
    HMCameraClip *_timelapseClip;	// 32 = 0x20
    NSURL *_destinationURL;	// 40 = 0x28
    HFCameraAnalyticsCameraTimelapseLoadEvent *_timelapseLoadEvent;	// 48 = 0x30
}

+ (id)downloadingOperationForTimelapseClip:(id)arg1;	// IMP=0x00000000000c3a40
- (void).cxx_destruct;	// IMP=0x00000000000c41fe
@property(retain, nonatomic) HFCameraAnalyticsCameraTimelapseLoadEvent *timelapseLoadEvent; // @synthesize timelapseLoadEvent=_timelapseLoadEvent;
@property(nonatomic) _Bool fileAlreadyExists; // @synthesize fileAlreadyExists=_fileAlreadyExists;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) HMCameraClip *timelapseClip; // @synthesize timelapseClip=_timelapseClip;
@property(copy, nonatomic) CDUnknownBlockType downloadingBlock; // @synthesize downloadingBlock=_downloadingBlock;
@property(nonatomic) __weak id <HFCameraTimelapseVideoDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fileDownloadFinishedWithElapsedTime:(double)arg1;	// IMP=0x00000000000c3f38
- (void)fileDownloadFailedWithError:(id)arg1;	// IMP=0x00000000000c3d80
- (void)fileDownloadNotNeeded;	// IMP=0x00000000000c3bd0
- (id)init;	// IMP=0x00000000000c3933

@end

