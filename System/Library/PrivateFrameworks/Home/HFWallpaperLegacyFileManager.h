//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject
{
    NSURL *_wallpaperFolderURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017911d
@property(retain, nonatomic) NSURL *wallpaperFolderURL; // @synthesize wallpaperFolderURL=_wallpaperFolderURL;
- (id)filenameForType:(long long)arg1 variant:(long long)arg2;	// IMP=0x0000000000179053
- (id)clearAllWallpapers;	// IMP=0x0000000000178eb1
- (void)migrateCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000178419
- (id)init;	// IMP=0x00000000001783b3

@end
