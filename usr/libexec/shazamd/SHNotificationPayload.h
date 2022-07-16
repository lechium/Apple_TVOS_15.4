//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHMediaItem;

__attribute__((visibility("hidden")))
@interface SHNotificationPayload : NSObject
{
    SHMediaItem *_mediaItem;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (id)notificationFromLegacyUserInfoFormat:(id)arg1;	// IMP=0x0040000000021dd3
+ (id)userInfoPayloadForMediaItem:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000021ca5
+ (id)payloadFromNotificationContentUserInfo:(id)arg1;	// IMP=0x0010000000021a7c
- (void).cxx_destruct;	// IMP=0x0020000000021fde
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) SHMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;

@end

