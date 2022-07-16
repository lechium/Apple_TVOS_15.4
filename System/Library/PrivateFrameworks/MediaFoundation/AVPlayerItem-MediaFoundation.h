//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayerItem.h>

#import <MediaFoundation/MFPlayerItem-Protocol.h>

@class NSString, NSURL;

@interface AVPlayerItem (MediaFoundation) <MFPlayerItem>
+ (double)HLSDownloadedDurationThreshold;	// IMP=0x0000000000026c80
+ (double)DownloadedDurationThreshold;	// IMP=0x0000000000026c70
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) double time;
@property(nonatomic) _Bool prefersSeekOverSkip;
@property(nonatomic, readonly) _Bool isFullyDownloaded;
@property(nonatomic, readonly) _Bool isAssetLoaded;
@property(nonatomic, readonly) _Bool hasLoadableAsset;
@property(nonatomic) _Bool isVideoContent;
@property(nonatomic, copy) NSString *title;
@property(nonatomic) long long repeatIndex;
@property(nonatomic, copy) NSString *contentItemID;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) AVPlayerItem *avPlayerItem;
- (id)initWithUrl:(id)arg1 contentItemID:(id)arg2 repeatIndex:(long long)arg3 isVideoContent:(_Bool)arg4 prefersSeekOverSkip:(_Bool)arg5;	// IMP=0x0000000000026d90
@end
