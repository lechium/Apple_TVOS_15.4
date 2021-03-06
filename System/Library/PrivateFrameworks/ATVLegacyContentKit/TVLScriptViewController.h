//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class TVLDocument, TVLScriptArrayElement;

@interface TVLScriptViewController : UIViewController
{
    TVLScriptArrayElement *_feedElement;	// 8 = 0x8
    TVLDocument *_feedDocument;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003c38a
@property(retain, nonatomic) TVLDocument *feedDocument; // @synthesize feedDocument=_feedDocument;
@property(retain, nonatomic) TVLScriptArrayElement *feedElement; // @synthesize feedElement=_feedElement;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003bd78
- (void)loadView;	// IMP=0x000000000003bc55
- (id)context;	// IMP=0x000000000003bc05
- (id)initWithFeedElement:(id)arg1;	// IMP=0x000000000003baf1

@end

