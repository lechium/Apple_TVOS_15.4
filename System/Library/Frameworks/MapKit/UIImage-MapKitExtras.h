//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

#import <MapKit/MKArtworkImageSource-Protocol.h>

@class NSString;

@interface UIImage (MapKitExtras) <MKArtworkImageSource>
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000002c665
+ (id)_mapkit_imageNamed:(id)arg1;	// IMP=0x000000000002c5d4
+ (id)_mapkit_liveTransitIndicatorImageUsingDarkMode:(_Bool)arg1;	// IMP=0x00000000001fcf4f
+ (id)_mapkit_liveTransitIndicatorImageApplyingColorForStatus:(long long)arg1 darkMode:(_Bool)arg2;	// IMP=0x00000000001fced2
+ (id)_mapkit_imageFromVKImage:(id)arg1;	// IMP=0x0000000000225dd4
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;	// IMP=0x0000000000225d27
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(_Bool)arg4;	// IMP=0x0000000000225c85
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;	// IMP=0x0000000000225c70
- (id)_mapkit_imageWithAlpha:(double)arg1;	// IMP=0x000000000002cb2d
- (id)_mapkit_templateImageWithTintColor:(id)arg1;	// IMP=0x000000000002c981
- (id)_mapkit_horizontallyFlippedImage;	// IMP=0x000000000002c887
- (id)_mapkit_dimmedImage;	// IMP=0x000000000002c70c
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x0000000000069f79
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x0000000000069f70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
