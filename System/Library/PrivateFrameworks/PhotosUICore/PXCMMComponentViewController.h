//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PXCMMSession;

@interface PXCMMComponentViewController : UIViewController
{
    PXCMMSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003cf712
@property(readonly, nonatomic) PXCMMSession *session; // @synthesize session=_session;
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x00000000003cf6f8
- (id)initWithSession:(id)arg1;	// IMP=0x00000000003cf686
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cf603
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000003cf573

@end
