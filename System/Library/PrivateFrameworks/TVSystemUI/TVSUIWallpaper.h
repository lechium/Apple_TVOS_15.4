//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSUIWallpaper : NSObject
{
}

+ (id)_wallpaperImageForVariant:(long long)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x000000000001df54
+ (id)_wallpaperPathForVariant:(long long)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x000000000001dd74
+ (id)_ambientIBWallpaperForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000001dae0
+ (void)_notifyWallpaperChange;	// IMP=0x000000000001dacf
+ (id)_wallpaperViewForVariant:(long long)arg1 availableStyles:(id)arg2;	// IMP=0x000000000001d97f
+ (id)_wallpaperViewForVariant:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000001d64e
+ (id)wallpaperViewForUserInterfaceStyle:(long long)arg1 variant:(long long)arg2;	// IMP=0x000000000001d576
+ (id)wallpaperViewForVariant:(long long)arg1;	// IMP=0x000000000001d4e0

@end

