//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKPlaceCardConforming-Protocol.h>

@class CLLocation, CNContact, CNContactNavigationController, GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, MKMapItem, NSString, UIScrollView, _MKPlaceActionButtonController;
@protocol CNContactViewControllerPrivateDelegate, UIScrollViewDelegate, _MKPlaceItem, _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate;

@interface _MKPlaceViewController <_MKPlaceCardConforming>
{
    _Bool _showShareActionsButton;	// 8 = 0x8
    _Bool _showEditButton;	// 9 = 0x9
    _Bool _showTitleBar;	// 10 = 0xa
    _Bool _hideDirectionsButtons;	// 11 = 0xb
    _Bool _hideInlineMap;	// 12 = 0xc
    _Bool _showInlineMapInHeader;	// 13 = 0xd
    _Bool _showNearbyApps;	// 14 = 0xe
    _Bool _showReportAProblem;	// 15 = 0xf
    _Bool _disableReportAProblem;	// 16 = 0x10
    _Bool _showContactActions;	// 17 = 0x11
    _Bool _showSimulateLocation;	// 18 = 0x12
    _Bool _showOpenInSkyline;	// 19 = 0x13
    _Bool _showOpenInPinpoint;	// 20 = 0x14
    _Bool _placeInBookmarks;	// 21 = 0x15
    _Bool _placeInCollections;	// 22 = 0x16
    _Bool _placeInShortcuts;	// 23 = 0x17
    id <_MKPlaceItem> _placeItem;	// 24 = 0x18
    NSString *_headerTitle;	// 32 = 0x20
    id <_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;	// 40 = 0x28
    CNContactNavigationController<CNContactViewControllerPrivateDelegate> *_contactsNavigationController;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
    id <_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;	// 64 = 0x40
    CDUnknownBlockType _placeViewFeedbackAppLaunchHandler;	// 72 = 0x48
    double headerHeight;	// 80 = 0x50
    id <UIScrollViewDelegate> _scrollViewDelegate;	// 88 = 0x58
    double _contentAlpha;	// 96 = 0x60
    _MKPlaceActionButtonController *_headerSecondaryButtonController;	// 104 = 0x68
    GEOAutomobileOptions *_automobileOptions;	// 112 = 0x70
    GEOTransitOptions *_transitOptions;	// 120 = 0x78
    GEOCyclingOptions *_cyclingOptions;	// 128 = 0x80
    _MKPlaceActionButtonController *_headerAlternatePrimaryButtonController;	// 136 = 0x88
    double _headerSecondaryNameLabelPadding;	// 144 = 0x90
    CLLocation *_location;	// 152 = 0x98
}

+ (double)headerHeightInMinimalMode;	// IMP=0x00000000001ea2d4
- (void).cxx_destruct;	// IMP=0x00000000001ea875
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) double headerSecondaryNameLabelPadding; // @synthesize headerSecondaryNameLabelPadding=_headerSecondaryNameLabelPadding;
@property(nonatomic) _Bool placeInShortcuts; // @synthesize placeInShortcuts=_placeInShortcuts;
@property(nonatomic) _Bool placeInCollections; // @synthesize placeInCollections=_placeInCollections;
@property(retain, nonatomic) _MKPlaceActionButtonController *headerAlternatePrimaryButtonController; // @synthesize headerAlternatePrimaryButtonController=_headerAlternatePrimaryButtonController;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions; // @synthesize cyclingOptions=_cyclingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) _MKPlaceActionButtonController *headerSecondaryButtonController; // @synthesize headerSecondaryButtonController=_headerSecondaryButtonController;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) _Bool placeInBookmarks; // @synthesize placeInBookmarks=_placeInBookmarks;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) double headerHeight; // @synthesize headerHeight;
@property(copy, nonatomic) CDUnknownBlockType placeViewFeedbackAppLaunchHandler; // @synthesize placeViewFeedbackAppLaunchHandler=_placeViewFeedbackAppLaunchHandler;
@property(nonatomic) __weak id <_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate; // @synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController; // @synthesize contactsNavigationController=_contactsNavigationController;
@property(nonatomic) __weak id <_MKPlaceViewControllerDelegate> placeViewControllerDelegate; // @synthesize placeViewControllerDelegate=_placeViewControllerDelegate;
@property(nonatomic) _Bool showOpenInPinpoint; // @synthesize showOpenInPinpoint=_showOpenInPinpoint;
@property(nonatomic) _Bool showOpenInSkyline; // @synthesize showOpenInSkyline=_showOpenInSkyline;
@property(nonatomic) _Bool showSimulateLocation; // @synthesize showSimulateLocation=_showSimulateLocation;
@property(nonatomic) _Bool showContactActions; // @synthesize showContactActions=_showContactActions;
@property(nonatomic) _Bool disableReportAProblem; // @synthesize disableReportAProblem=_disableReportAProblem;
@property(nonatomic) _Bool showReportAProblem; // @synthesize showReportAProblem=_showReportAProblem;
@property(nonatomic) _Bool showNearbyApps; // @synthesize showNearbyApps=_showNearbyApps;
@property(nonatomic) _Bool showInlineMapInHeader; // @synthesize showInlineMapInHeader=_showInlineMapInHeader;
@property(nonatomic) _Bool hideInlineMap; // @synthesize hideInlineMap=_hideInlineMap;
@property(nonatomic) _Bool hideDirectionsButtons; // @synthesize hideDirectionsButtons=_hideDirectionsButtons;
@property(nonatomic) _Bool showTitleBar; // @synthesize showTitleBar=_showTitleBar;
@property(nonatomic) _Bool showEditButton; // @synthesize showEditButton=_showEditButton;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(nonatomic) _Bool showShareActionsButton; // @synthesize showShareActionsButton=_showShareActionsButton;
- (void)placeCardWillCloseFromClientType:(unsigned long long)arg1;	// IMP=0x00000000001ea40c
- (void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;	// IMP=0x00000000001ea406
- (void)hideTitle:(_Bool)arg1;	// IMP=0x00000000001ea400
- (_Bool)_showReportAProblem;	// IMP=0x00000000001ea3f8
- (void)errorLoadingMapItemUpdate:(id)arg1;	// IMP=0x00000000001ea3f2
- (void)mapItemWillUpdate;	// IMP=0x00000000001ea3ec
- (void)displayTransitSystemWithMUID:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001ea3e6
@property(readonly, nonatomic) CNContact *contact;
@property(retain, nonatomic) MKMapItem *mapItem;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(_Bool)arg3;	// IMP=0x00000000001ea320
- (void)updateHeaderTitle;	// IMP=0x00000000001ea31a
- (void)setPlaceItem:(id)arg1 updateOriginalContact:(_Bool)arg2;	// IMP=0x00000000001ea2f1
- (void)setPlaceItem:(id)arg1;	// IMP=0x00000000001ea2dd
- (id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000001ea21a
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;	// IMP=0x00000000001ea17b
- (id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001ea12f
- (id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001ea095
- (id)initWithMapItem:(id)arg1;	// IMP=0x00000000001ea016
- (void)removeAdditionalViewController:(id)arg1;	// IMP=0x00000000001ea010
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;	// IMP=0x00000000001ea00a
- (id)additionalViewControllersAtPosition:(long long)arg1;	// IMP=0x00000000001ea002

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end

