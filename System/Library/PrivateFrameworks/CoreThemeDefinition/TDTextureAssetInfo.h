//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class NSURL;

@interface TDTextureAssetInfo : NSObject <NSCopying>
{
    _Bool _flipped;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    unsigned long long _mipLevel;	// 24 = 0x18
    long long _textureFace;	// 32 = 0x20
}

@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property(nonatomic) long long textureFace; // @synthesize textureFace=_textureFace;
@property(nonatomic) unsigned long long mipLevel; // @synthesize mipLevel=_mipLevel;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSURL *mipsURL;
- (id)description;	// IMP=0x000000000004c959
- (void)dealloc;	// IMP=0x000000000004c919
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c862

@end

