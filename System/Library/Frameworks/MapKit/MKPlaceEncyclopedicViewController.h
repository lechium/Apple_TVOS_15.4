//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKPlaceTextBlockCell, NSMutableArray, NSString;
@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    _Bool _textBlockExpanded;	// 8 = 0x8
    MKPlaceTextBlockCell *_textCell;	// 16 = 0x10
    NSMutableArray *_factoidCells;	// 24 = 0x18
    id <GEOEncyclopedicInfo> _encyclopedicInfo;	// 32 = 0x20
    id <MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000019b261
@property(nonatomic) __weak id <MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate; // @synthesize encyclopedicControllerDelegate=_encyclopedicControllerDelegate;
@property(retain, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo; // @synthesize encyclopedicInfo=_encyclopedicInfo;
- (id)infoCardChildUnactionableUIElements;	// IMP=0x000000000019b216
- (id)infoCardChildPossibleActions;	// IMP=0x000000000019b209
- (id)_textBlockText;	// IMP=0x000000000019b1b9
- (id)_textBlockTitle;	// IMP=0x000000000019b169
- (id)_factoids;	// IMP=0x000000000019b119
- (void)_viewEncyclopedicContent;	// IMP=0x000000000019af86
- (void)_updateViews;	// IMP=0x000000000019a1f3
- (void)viewDidLoad;	// IMP=0x0000000000199fd9
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000199fd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

