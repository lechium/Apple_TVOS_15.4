//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;
@protocol SRStarkItemControllerDelegate;

@interface _TtC4Siri37SRCarPlayVisualResponseViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *presentationDelegate;	// 16 = 0x10
    MISSING_TYPE *snippet;	// 24 = 0x18
    MISSING_TYPE *aceSnippet;	// 32 = 0x20
    MISSING_TYPE *currentTurnContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000088190
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000088130
- (void)siriDidFinishSpeakingWithIdentifier:(id)arg1;	// IMP=0x0010000000087fb0
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0010000000087f10
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x0010000000087e30
- (unsigned long long)autoDismissalReason;	// IMP=0x0010000000087da0
- (long long)autoDismissalStrategy;	// IMP=0x0010000000087d80
- (void)viewDidLoad;	// IMP=0x0010000000087d40
- (void)loadView;	// IMP=0x0010000000087b70
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000087aa0
- (id)initWithAceSnippet:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000087a30
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate; // @synthesize delegate;

@end

