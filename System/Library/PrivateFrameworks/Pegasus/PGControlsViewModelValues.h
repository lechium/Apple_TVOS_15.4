//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString, PGPlaybackStatePrerollAttributes, UIColor, UIImage;

@interface PGControlsViewModelValues : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionaryRepresentation;	// 8 = 0x8
}

+ (id)defaultPrerollTintColor;	// IMP=0x0000000000047841
- (void).cxx_destruct;	// IMP=0x0000000000048114
@property(readonly, nonatomic) NSMutableDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048042
- (id)_objectForKey:(id)arg1;	// IMP=0x0000000000047fbf
- (long long)_integerForKey:(id)arg1;	// IMP=0x0000000000047f7b
- (_Bool)_boolForKey:(id)arg1;	// IMP=0x0000000000047f37
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000047e41
@property(readonly, nonatomic) UIColor *prerollTintColor;
@property(readonly, nonatomic) _Bool isPrerollActive;
@property(readonly, copy, nonatomic) NSString *restoreButtonSystemImageName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047d01
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000047c44
- (id)init;	// IMP=0x0000000000047c30
@property(readonly, nonatomic) _Bool controlsShouldAutoHide;
@property(readonly, nonatomic) _Bool progressBarShouldUpdate;
@property(readonly, nonatomic) _Bool includesDoubleDoubleTapGestureRecognizer;
@property(readonly, nonatomic) _Bool includesDoubleTapGestureRecognizer;
@property(readonly, nonatomic) _Bool includesSingleTapGestureRecognizer;
@property(readonly, nonatomic) _Bool isSkipForwardButtonEnabled;
@property(readonly, nonatomic) _Bool isActionButtonEnabled;
@property(readonly, nonatomic) _Bool isSkipBackButtonEnabled;
@property(readonly, nonatomic) _Bool includesProgressBar;
@property(readonly, nonatomic) _Bool includesLiveIndicatorBadge;
@property(readonly, nonatomic) _Bool includesSkipForwardButton;
@property(readonly, nonatomic) _Bool includesSkipBackButton;
@property(readonly, nonatomic) _Bool includesActionButton;
@property(readonly, nonatomic) _Bool includesCancelButton;
@property(readonly, nonatomic) _Bool includesWaitingToPlayIndicator;
@property(readonly, nonatomic) _Bool includesContentLoadingIndicator;
@property(readonly, nonatomic) _Bool includesRestoreButton;
@property(readonly, nonatomic) _Bool actionButtonsWantBackground;
@property(readonly, copy, nonatomic) NSString *cancelButtonCustomText;
@property(readonly, nonatomic) UIImage *cancelButtonCustomImage;
@property(readonly, copy, nonatomic) NSString *skipForwardButtonSystemImageName;
@property(readonly, copy, nonatomic) NSString *skipBackButtonSystemImageName;
@property(readonly, nonatomic) UIColor *cancelButtonBackgroundTintColor;
@property(readonly, nonatomic) UIColor *cancelButtonImageTintColor;
@property(readonly, nonatomic) UIColor *skipForwardButtonBackgroundTintColor;
@property(readonly, nonatomic) UIColor *skipForwardButtonImageTintColor;
@property(readonly, nonatomic) UIColor *skipBackButtonBackgroundTintColor;
@property(readonly, nonatomic) UIColor *skipBackButtonImageTintColor;
@property(readonly, nonatomic) UIColor *actionButtonBackgroundTintColor;
@property(readonly, nonatomic) UIColor *actionButtonImageTintColor;
@property(readonly, copy, nonatomic) NSString *cancelButtonSystemImageName;
@property(readonly, copy, nonatomic) NSString *actionButtonSystemImageName;
@property(readonly, nonatomic) PGPlaybackStatePrerollAttributes *prerollAttributes;
@property(readonly, copy, nonatomic) NSString *skipForwardButtonAccessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *skipBackButtonAccessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *actionButtonAccessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *cancelButtonAccessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *restoreButtonAccessibilityIdentifier;

@end

