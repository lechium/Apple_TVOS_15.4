//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <PhotosUICore/_PXFeedbackTapToRadarViewControllerDelegate-Protocol.h>

@class NSArray, NSString, _PXFeedbackTapToRadarViewController;

@interface PXFeedbackTapToRadarViewController : UINavigationController <_PXFeedbackTapToRadarViewControllerDelegate>
{
    _Bool _requestScreenshotPermission;	// 8 = 0x8
    CDUnknownBlockType _fileRadarHandler;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSString *_routesDescription;	// 32 = 0x20
    _PXFeedbackTapToRadarViewController *_feedbackViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000163492
@property(retain, nonatomic) _PXFeedbackTapToRadarViewController *feedbackViewController; // @synthesize feedbackViewController=_feedbackViewController;
@property(copy, nonatomic) NSString *routesDescription; // @synthesize routesDescription=_routesDescription;
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) _Bool requestScreenshotPermission; // @synthesize requestScreenshotPermission=_requestScreenshotPermission;
@property(copy, nonatomic) CDUnknownBlockType fileRadarHandler; // @synthesize fileRadarHandler=_fileRadarHandler;
- (id)availableRoutesDescription;	// IMP=0x00000000001633d5
- (id)availableRoutes;	// IMP=0x00000000001633c3
- (_Bool)shouldRequestScreenshotPermission;	// IMP=0x00000000001633b1
- (void)didSelectFileRadarButtonWithScreenshotAllowed:(_Bool)arg1 attachDiagnose:(_Bool)arg2 selectedRoute:(id)arg3;	// IMP=0x000000000016333e
- (id)init;	// IMP=0x00000000001632b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

