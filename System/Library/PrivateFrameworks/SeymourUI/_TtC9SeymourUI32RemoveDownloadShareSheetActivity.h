//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class MISSING_TYPE, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI32RemoveDownloadShareSheetActivity : UIActivity
{
    MISSING_TYPE *assetClient;	// 8 = 0x8
    MISSING_TYPE *storefrontLocalizer;	// 48 = 0x30
    MISSING_TYPE *workoutIdentifier;	// 88 = 0x58
}

+ (long long)activityCategory;	// IMP=0x00000000004efff0
- (void).cxx_destruct;	// IMP=0x00000000004f05d0
- (id)init;	// IMP=0x00000000004f0570
- (void)performActivity;	// IMP=0x00000000004f0540
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000004f0370
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000004f0200
@property(nonatomic, readonly) UIImage *activityImage;
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;

@end

