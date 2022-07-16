//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlacePhotoGalleryViewController, UIImageView;

@protocol MKPlacePhotoGalleryViewControllerDelegate <NSObject>
- (UIImageView *)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;

@optional
- (void)placePhotoGalleryDidSelectAddPhoto:(MKPlacePhotoGalleryViewController *)arg1;
- (void)placePhotoGallery:(MKPlacePhotoGalleryViewController *)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryDidFinishDismissing:(MKPlacePhotoGalleryViewController *)arg1;
- (void)placePhotoGallery:(MKPlacePhotoGalleryViewController *)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;
- (void)placePhotoGallery:(MKPlacePhotoGalleryViewController *)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryAdditionalViewTapped:(MKPlacePhotoGalleryViewController *)arg1;
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;
- (void)placePhotoGallery:(MKPlacePhotoGalleryViewController *)arg1 willCloseAtIndex:(unsigned long long)arg2;
@end

