//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCloudController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPCloudController : NSObject
{
    MPCloudController *_underlyingCloudController;	// 8 = 0x8
}

+ (id)canShowCloudDownloadButtonsDidChangeNotificationName;	// IMP=0x000000000000bbd8
+ (id)sharedCloudController;	// IMP=0x000000000000b830
- (void).cxx_destruct;	// IMP=0x000000000000bc88
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)arg1;	// IMP=0x000000000000bbe5
- (long long)cloudAddToPlaylistBehavior;	// IMP=0x000000000000bbb0
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bb89
@property(readonly, nonatomic) _Bool canShowCloudDownloadButtons;
- (void)dealloc;	// IMP=0x000000000000bad9
- (id)_initWithUnderlyingCloudController:(id)arg1;	// IMP=0x000000000000b967

@end

