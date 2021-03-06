//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSNumber, NSString;

@interface TVRestrictionPINServiceViewController : UIViewController
{
    NSNumber *_dismissResult;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00200000000022a0
+ (id)_exportedInterface;	// IMP=0x0010000000002160
- (void).cxx_destruct;	// IMP=0x00200000000023b0
@property(readonly, nonatomic) NSNumber *dismissResult; // @synthesize dismissResult=_dismissResult;
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000020e0
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0010000000001db0
- (void)viewDidLoad;	// IMP=0x0010000000001a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

