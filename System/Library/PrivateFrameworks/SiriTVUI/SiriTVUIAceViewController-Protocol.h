//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/SiriUIViewController-Protocol.h>

@protocol SiriTVUIAceViewControllerDelegate, SiriTVUIAnalyticsDelegate;

@protocol SiriTVUIAceViewController <SiriUIViewController>
@property(nonatomic) __weak id <SiriTVUIAnalyticsDelegate> analyticsDelegate;
@property(nonatomic) __weak id <SiriTVUIAceViewControllerDelegate> aceViewControllerDelegate;

@optional
- (void)siriWillDismissViewAnimated:(_Bool)arg1;
- (void)siriDidRevealView;
- (void)siriWillRevealView;
- (void)siriDidObscureView;
- (void)siriWillObscureView;
@end

