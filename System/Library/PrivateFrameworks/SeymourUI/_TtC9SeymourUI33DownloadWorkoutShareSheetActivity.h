//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class MISSING_TYPE, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33DownloadWorkoutShareSheetActivity : UIActivity
{
    MISSING_TYPE *assetClient;	// 8 = 0x8
    MISSING_TYPE *storefrontLocalizer;	// 48 = 0x30
    MISSING_TYPE *workoutIdentifier;	// 88 = 0x58
}

+ (long long)activityCategory;	// IMP=0x00000000001d93e0
- (void).cxx_destruct;	// IMP=0x00000000001d98e0
- (id)init;	// IMP=0x00000000001d9880
- (void)performActivity;	// IMP=0x00000000001d9850
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000001d9680
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000001d9510
@property(nonatomic, readonly) UIImage *activityImage;
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;

@end
