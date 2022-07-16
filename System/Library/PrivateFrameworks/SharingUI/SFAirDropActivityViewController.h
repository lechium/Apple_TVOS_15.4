//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SharingUI/SFAirDropBrowserBatchDelegate-Protocol.h>
#import <SharingUI/SFCollectionViewDelegateLayout-Protocol.h>
#import <SharingUI/SFPersonCollectionViewCellDelegate-Protocol.h>
#import <SharingUI/SFWirelessSettingsControllerDelegate-Protocol.h>
#import <SharingUI/UICollectionViewDataSource-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSOperationQueue, NSString, SFAirDropActiveIconView, SFAirDropBrowser, SFAirDropIconView, SFWirelessSettingsController, UIButton, UICollectionView, UICollectionViewFlowLayout, UIFocusContainerGuide, UILabel, UIVisualEffectView;
@protocol SFAirDropActivityViewControllerDelegate;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserBatchDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate>
{
    NSString *_sendingAppBundleID;	// 8 = 0x8
    long long _attachmentCount;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    long long _sharedItemsRequestID;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIButton *_reportBugButton;	// 48 = 0x30
    NSLayoutConstraint *_titleLabelTopConstraint;	// 56 = 0x38
    double _titleLabelTopConstraintDefaultConstant;	// 64 = 0x40
    SFAirDropIconView *_airDropIconView;	// 72 = 0x48
    NSLayoutConstraint *_airDropIconLeftConstraint;	// 80 = 0x50
    UILabel *_noWifiTextView;	// 88 = 0x58
    NSLayoutConstraint *_noWifiRightConstraint;	// 96 = 0x60
    SFAirDropActiveIconView *_airDropActiveIconView;	// 104 = 0x68
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;	// 112 = 0x70
    UILabel *_instructionsTextView;	// 120 = 0x78
    NSLayoutConstraint *_instructionsRightConstraint;	// 128 = 0x80
    SFAirDropActiveIconView *_airDropInactiveIconView;	// 136 = 0x88
    NSLayoutConstraint *_airDropInactiveIconLeftConstraint;	// 144 = 0x90
    UILabel *_noAWDLTextView;	// 152 = 0x98
    NSLayoutConstraint *_noAWDLRightConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_largeTextAirdropViewYConstraint;	// 168 = 0xa8
    NSArray *_textViewConstraints;	// 176 = 0xb0
    NSArray *_largeTextTextViewConstraints;	// 184 = 0xb8
    NSArray *_airdropViewYConstraints;	// 192 = 0xc0
    NSArray *_largeTextAirdropViewYConstraints;	// 200 = 0xc8
    UICollectionView *_collectionView;	// 208 = 0xd0
    UICollectionView *_detailCollectionView;	// 216 = 0xd8
    UIButton *_showMoreButton;	// 224 = 0xe0
    _Bool _shouldExpandTextIfNeeded;	// 232 = 0xe8
    UICollectionViewFlowLayout *_collectionViewLayout;	// 240 = 0xf0
    SFAirDropBrowser *_browser;	// 248 = 0xf8
    id _progressToken;	// 256 = 0x100
    NSMutableDictionary *_personToProgress;	// 264 = 0x108
    NSMutableDictionary *_personToStoredTransferFinalState;	// 272 = 0x110
    NSMutableDictionary *_personToSharedItemsRequestID;	// 280 = 0x118
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;	// 288 = 0x120
    SFWirelessSettingsController *_wirelessSettings;	// 296 = 0x128
    NSMutableOrderedSet *_cachedSharedItems;	// 304 = 0x130
    _Bool _itemsRequested;	// 312 = 0x138
    _Bool _itemsReady;	// 313 = 0x139
    NSOperationQueue *_operationQueue;	// 320 = 0x140
    long long _generatedPreviews;	// 328 = 0x148
    UIVisualEffectView *_titleVibrancyView;	// 336 = 0x150
    UIVisualEffectView *_instructionsVibrancyView;	// 344 = 0x158
    UIVisualEffectView *_iconsVibrancyView;	// 352 = 0x160
    UIButton *_doneButton;	// 360 = 0x168
    UIFocusContainerGuide *_fcg;	// 368 = 0x170
    struct __SFOperation *_logger;	// 376 = 0x178
    struct CGSize _minimumPreferredContentSize;	// 384 = 0x180
    NSArray *_people;	// 400 = 0x190
    NSMapTable *_realNameToFirstSeenTimestamp;	// 408 = 0x198
    unsigned long long _peopleStartTimestamp;	// 416 = 0x1a0
    _Bool _browserPaused;	// 424 = 0x1a8
    _Bool _didSelectNode;	// 425 = 0x1a9
    int _sharedItemsCount;	// 428 = 0x1ac
    NSMutableDictionary *_sharedItemsMap;	// 432 = 0x1b0
    _Bool _sharedItemsAvailable;	// 440 = 0x1b8
    _Bool _otherActivityViewPresented;	// 441 = 0x1b9
    _Bool _darkStyleOnLegacyApp;	// 442 = 0x1ba
    _Bool _multipleRows;	// 443 = 0x1bb
    _Bool _manuallyManageBrowsing;	// 444 = 0x1bc
    NSObject<SFAirDropActivityViewControllerDelegate> *_delegate;	// 448 = 0x1c0
    NSArray *_urlsBeingShared;	// 456 = 0x1c8
    NSArray *_photosAssetIDs;	// 464 = 0x1d0
    NSString *_overriddenTitleText;	// 472 = 0x1d8
    NSString *_overriddenNoWiFIBTText;	// 480 = 0x1e0
    NSString *_overriddenNoAWDLText;	// 488 = 0x1e8
    NSString *_overriddenInstructionsText;	// 496 = 0x1f0
    CDStruct_4c969caf _sendingApplicationAuditToken;	// 504 = 0x1f8
}

+ (_Bool)airDropActivityCanPerformActivityWithItemClasses:(id)arg1;	// IMP=0x0000000000014727
+ (_Bool)isAirDropAvailable;	// IMP=0x000000000001471f
- (void).cxx_destruct;	// IMP=0x000000000001e2f3
@property(nonatomic) _Bool manuallyManageBrowsing; // @synthesize manuallyManageBrowsing=_manuallyManageBrowsing;
@property(copy, nonatomic) NSString *overriddenInstructionsText; // @synthesize overriddenInstructionsText=_overriddenInstructionsText;
@property(copy, nonatomic) NSString *overriddenNoAWDLText; // @synthesize overriddenNoAWDLText=_overriddenNoAWDLText;
@property(copy, nonatomic) NSString *overriddenNoWiFIBTText; // @synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText;
@property(copy, nonatomic) NSString *overriddenTitleText; // @synthesize overriddenTitleText=_overriddenTitleText;
@property(copy, nonatomic) NSArray *photosAssetIDs; // @synthesize photosAssetIDs=_photosAssetIDs;
@property(copy, nonatomic) NSArray *urlsBeingShared; // @synthesize urlsBeingShared=_urlsBeingShared;
@property(nonatomic) _Bool multipleRows; // @synthesize multipleRows=_multipleRows;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(nonatomic) _Bool otherActivityViewPresented; // @synthesize otherActivityViewPresented=_otherActivityViewPresented;
@property(nonatomic) _Bool sharedItemsAvailable; // @synthesize sharedItemsAvailable=_sharedItemsAvailable;
@property(nonatomic) __weak NSObject<SFAirDropActivityViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_4c969caf sendingApplicationAuditToken; // @synthesize sendingApplicationAuditToken=_sendingApplicationAuditToken;
- (void)_emitTelemetryForPerson:(id)arg1;	// IMP=0x000000000001df72
- (void)_collectTelemetryForPeople:(id)arg1;	// IMP=0x000000000001dd02
- (void)_stopTelemetry;	// IMP=0x000000000001dce1
- (void)_startTelemetry;	// IMP=0x000000000001dc91
- (void)cleanupWithSelectedActivityType:(id)arg1;	// IMP=0x000000000001db46
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x000000000001dac7
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000001d9ab
- (void)doneButtonAction:(id)arg1;	// IMP=0x000000000001d936
- (void)generateSpecialPreviewPhotoForRequestID:(long long)arg1;	// IMP=0x000000000001d38d
- (_Bool)addItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;	// IMP=0x000000000001d363
- (_Bool)addItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;	// IMP=0x000000000001d1b2
- (void)handleOtherItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;	// IMP=0x000000000001c8f3
- (void)handleImageItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x000000000001c66a
- (void)handleLivePhotoItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x000000000001c081
- (_Bool)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x000000000001bd52
- (_Bool)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x000000000001bae0
- (_Bool)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000001b4d2
- (_Bool)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6;	// IMP=0x000000000001b22f
- (_Bool)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x000000000001ad88
- (_Bool)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x000000000001a6f3
- (_Bool)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id *)arg3;	// IMP=0x0000000000019adb
- (void)startTransferForPeople:(id)arg1;	// IMP=0x0000000000018fc3
- (void)setNeedsRequestingSharedItems;	// IMP=0x0000000000018fa7
- (id)cellForPerson:(id)arg1;	// IMP=0x0000000000018bc2
- (void)browserDidUpdatePeople:(id)arg1;	// IMP=0x000000000001873d
- (id)indexSetToIndexPaths:(id)arg1 inSection:(long long)arg2;	// IMP=0x000000000001860d
- (void)showMore:(id)arg1;	// IMP=0x00000000000185eb
- (void)wirelessSettingsDidChange:(id)arg1;	// IMP=0x0000000000018496
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;	// IMP=0x0000000000018410
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;	// IMP=0x000000000001839b
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;	// IMP=0x0000000000018342
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;	// IMP=0x0000000000018043
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;	// IMP=0x0000000000017dc3
- (void)unsubscribeToProgresses;	// IMP=0x0000000000017c2c
- (void)subscribeToProgresses;	// IMP=0x0000000000017a68
- (struct CGSize)_cachedPreferredItemSize;	// IMP=0x000000000001796d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000001786b
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000017828
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000001677c
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000001676c
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000016654
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000162fa
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000162dd
@property(readonly, nonatomic) struct CGSize suggestedThumbnailSize;
- (struct CGSize)calculatePreferredContentSize;	// IMP=0x0000000000015e32
- (id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned int)arg3;	// IMP=0x0000000000015c82
- (void)_updateFontSizes;	// IMP=0x0000000000015c1d
- (void)updatePreferredContentSize;	// IMP=0x0000000000015bef
- (void)updateContentAreaAnimated:(_Bool)arg1;	// IMP=0x000000000001509e
- (void)updateShowMoreButtonForShowPeople:(_Bool)arg1 inactive:(_Bool)arg2 active:(_Bool)arg3 static:(_Bool)arg4;	// IMP=0x0000000000015098
- (id)preferredFocusEnvironments;	// IMP=0x000000000001501f
- (void)enableAirDropRequiredFeatures;	// IMP=0x0000000000014fbd
- (_Bool)isBluetoothEnabled;	// IMP=0x0000000000014f79
- (_Bool)isWifiEnabled;	// IMP=0x0000000000014f35
- (_Bool)isTetheredModeEnabled;	// IMP=0x0000000000014efb
- (_Bool)isDebugMode;	// IMP=0x0000000000014ec4
- (_Bool)enableModernShareSheeet;	// IMP=0x0000000000014df7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000146f0
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;	// IMP=0x000000000001449b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000014495
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001448f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000014489
- (void)_createtvOSLayoutConstraints;	// IMP=0x0000000000013011
- (void)_createiOSLayoutConstraints;	// IMP=0x0000000000011996
- (void)_updateExclusionPathsForTextViews;	// IMP=0x0000000000011990
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001194f
- (void)viewDidLoad;	// IMP=0x00000000000109c5
- (id)titleText;	// IMP=0x000000000001098c
- (id)instructionsText;	// IMP=0x0000000000010953
- (id)noAWDLText;	// IMP=0x00000000000108f2
- (id)noWiFiBTText;	// IMP=0x000000000001088d
- (id)wifiBtHelpTextLocalizedStringKey;	// IMP=0x0000000000010857
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000010774
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001051d
- (void)willEnterForeground:(id)arg1;	// IMP=0x00000000000104e6
- (void)didEnterBackground:(id)arg1;	// IMP=0x00000000000104af
- (void)_setIsLoadingActivityItemProviders:(_Bool)arg1;	// IMP=0x00000000000102f9
- (void)stopBrowsing;	// IMP=0x00000000000100af
- (void)startBrowsing;	// IMP=0x000000000000ff5e
- (void)invalidate;	// IMP=0x000000000000fd88
- (void)dealloc;	// IMP=0x000000000000fd4a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000fa84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
