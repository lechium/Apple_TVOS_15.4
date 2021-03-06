//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol MKUGCCallToActionViewDelegate;

__attribute__((visibility("hidden")))
@interface MKUGCCallToActionViewController <MKModuleViewControllerProtocol>
{
    NSMutableArray *_sectionItemViews;	// 8 = 0x8
    NSArray *_callToActionAppearances;	// 16 = 0x10
    id <MKUGCCallToActionViewDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b71fa
@property(nonatomic) __weak id <MKUGCCallToActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *callToActionAppearances; // @synthesize callToActionAppearances=_callToActionAppearances;
- (void)setCallToActionAppearances:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b7109
- (void)_reloadCallToActionViewsAnimated:(_Bool)arg1;	// IMP=0x00000000000b70e3
- (void)_setupCallToActionViewsAnimated:(_Bool)arg1;	// IMP=0x00000000000b6e10
- (void)viewDidLoad;	// IMP=0x00000000000b6d56
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000b6ceb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

