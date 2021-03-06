//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKIconManager;

@interface MKTransitArtworkManager : NSObject
{
    VKIconManager *_iconManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000073707
- (void).cxx_destruct;	// IMP=0x00000000000745a8
@property(readonly, nonatomic) VKIconManager *iconManager; // @synthesize iconManager=_iconManager;
- (id)_imageFroMVKImage:(id)arg1;	// IMP=0x000000000007433d
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00000000000742bb
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id *)arg7;	// IMP=0x0000000000074254
- (id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id *)arg7;	// IMP=0x0000000000073d5a
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 withWidthPaddingMultiple:(double)arg6;	// IMP=0x0000000000073bf4
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5;	// IMP=0x0000000000073bd7
- (id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5;	// IMP=0x0000000000073a88
- (id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(_Bool)arg5 widthPaddingMultiple:(double)arg6;	// IMP=0x00000000000738d1
- (_Bool)_isMemoryConstrained;	// IMP=0x0000000000073855
- (void)purge;	// IMP=0x0000000000073818
- (id)initWithIconManager:(id)arg1;	// IMP=0x00000000000737ad

@end

