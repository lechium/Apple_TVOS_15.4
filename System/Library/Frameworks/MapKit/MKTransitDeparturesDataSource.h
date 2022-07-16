//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKTransitDeparturesCellDelegate-Protocol.h>
#import <MapKit/MKTransitDeparturesDataProviderDelegate-Protocol.h>
#import <MapKit/MKTransitSystemFilterViewDelegate-Protocol.h>
#import <MapKit/UITableViewDataSource-Protocol.h>
#import <MapKit/UITableViewDelegate-Protocol.h>
#import <MapKit/_MKTransitConnectionCellDelegate-Protocol.h>

@class MKArtworkDataSourceCache, MKMapItem, MKTransitDeparturesDataProvider, MKTransitSystemFilterHeaderFooterView, NSMapTable, NSMutableDictionary, NSString, UITableView;
@protocol MKTransitDeparturesDataSourceHosting, _MKInfoCardAnalyticsDelegate;

@interface MKTransitDeparturesDataSource : NSObject <_MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKTransitDeparturesDataProviderDelegate, UITableViewDelegate, UITableViewDataSource, MKTransitSystemFilterViewDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    NSMapTable *_cachedSectionHeaders;	// 16 = 0x10
    NSMapTable *_cachedSectionFooters;	// 24 = 0x18
    NSMutableDictionary *_cachedImageOptions;	// 32 = 0x20
    NSMutableDictionary *_cachedMaxImageWidths;	// 40 = 0x28
    NSMutableDictionary *_cachedColumnCenteringWidths;	// 48 = 0x30
    _Bool _animatingRowInsertion;	// 56 = 0x38
    struct CGSize _transitioningSize;	// 64 = 0x40
    struct CGRect _lastMaxWidthBounds;	// 80 = 0x50
    _Bool _showingIncidents;	// 112 = 0x70
    MKTransitSystemFilterHeaderFooterView *_filterView;	// 120 = 0x78
    _Bool _limitInteraction;	// 128 = 0x80
    _Bool _allowTransitLineSelection;	// 129 = 0x81
    _Bool _supportSystemSectionCollapsing;	// 130 = 0x82
    MKMapItem *_mapItem;	// 136 = 0x88
    MKArtworkDataSourceCache *_artworkCache;	// 144 = 0x90
    id <MKTransitDeparturesDataSourceHosting> _host;	// 152 = 0x98
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;	// 160 = 0xa0
    MKTransitDeparturesDataProvider *_dataProvider;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000133788
@property(readonly, nonatomic) MKTransitDeparturesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic, getter=supportsSystemSectionCollapsing) _Bool supportSystemSectionCollapsing; // @synthesize supportSystemSectionCollapsing=_supportSystemSectionCollapsing;
@property(nonatomic, getter=allowsTransitLineSelection) _Bool allowTransitLineSelection; // @synthesize allowTransitLineSelection=_allowTransitLineSelection;
@property(nonatomic, getter=hasLimitedInteraction) _Bool limitInteraction; // @synthesize limitInteraction=_limitInteraction;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <MKTransitDeparturesDataSourceHosting> host; // @synthesize host=_host;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)filterView:(id)arg1 didChangeSystemSelection:(id)arg2;	// IMP=0x0000000000133652
- (_Bool)_newStationCardUIEnabled;	// IMP=0x000000000013362e
- (long long)_departureSequenceFrequencyTypeForAllDeparturesSections;	// IMP=0x0000000000133494
- (int)_transitCategoryForSequence:(id)arg1;	// IMP=0x0000000000133478
- (int)transitCategoryForFrequencyType:(long long)arg1;	// IMP=0x000000000013345d
- (int)_transitCategoryForSection:(long long)arg1;	// IMP=0x00000000001333fa
- (int)currentTransitCategory;	// IMP=0x00000000001333c9
- (id)possibleActions;	// IMP=0x000000000013337c
- (void)recordIncidentsShowing:(_Bool)arg1;	// IMP=0x00000000001332d4
- (void)_didSelectRowAtIndexPath:(id)arg1;	// IMP=0x0000000000132a4a
- (_Bool)_shouldHighlightRowAtIndexPath:(id)arg1;	// IMP=0x0000000000132885
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000132870
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000013285b
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000013280f
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001326a9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000013260e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001325f9
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000001325f1
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000013248e
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000132485
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000013241b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001323d7
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001323c6
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001323b8
- (void)_sectionHeaderButtonPressed:(id)arg1;	// IMP=0x00000000001321e8
- (double)_heightForFooterInSection:(long long)arg1;	// IMP=0x00000000001321c4
- (id)_viewForFooterInRow:(long long)arg1 inSection:(long long)arg2;	// IMP=0x0000000000131ff4
- (id)_headerTextForSection:(long long)arg1;	// IMP=0x0000000000131e06
- (id)_viewForHeaderInRow:(long long)arg1 inSection:(long long)arg2;	// IMP=0x0000000000131a24
- (_Bool)sectionHasFooter:(long long)arg1;	// IMP=0x0000000000131a1c
- (_Bool)sectionHasHeader:(long long)arg1;	// IMP=0x00000000001318d9
- (id)_departureSequenceForIndexPath:(id)arg1 outIsNewLine:(_Bool *)arg2 outNextLineIsSame:(_Bool *)arg3;	// IMP=0x0000000000131800
- (id)_departureSequenceForIndexPath:(id)arg1;	// IMP=0x00000000001317e9
- (id)_indexPathWithHeader:(id)arg1;	// IMP=0x0000000000131755
- (id)_indexPathWithoutHeader:(id)arg1;	// IMP=0x00000000001316c1
- (void)_showIncidentDetails;	// IMP=0x00000000001315ed
- (id)_incidentCellForRow:(long long)arg1 inSection:(long long)arg2;	// IMP=0x0000000000131144
- (void)infoButtonSelectedInConnectionCell:(id)arg1;	// IMP=0x0000000000131075
- (id)_attributionCellForRow:(long long)arg1;	// IMP=0x0000000000130fad
- (id)_connectionCellForRow:(long long)arg1;	// IMP=0x0000000000130cf8
- (id)_messageCellForRow:(long long)arg1 inSection:(long long)arg2;	// IMP=0x0000000000130b13
- (void)_setDisclosureArrowExpanded:(_Bool)arg1 inSystemCellAtIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000130860
- (void)_toggleHiddenSystemInSection:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000130481
- (id)_systemCellForRow:(long long)arg1 inSection:(long long)arg2;	// IMP=0x00000000001301db
- (void)incidentButtonSelectedInDeparturesCell:(id)arg1;	// IMP=0x000000000012ff41
- (void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x000000000012f273
- (void)_configureTransitHeaderCell:(id)arg1 forIndexPath:(id)arg2 withSectionType:(long long)arg3;	// IMP=0x000000000012ecea
- (id)_departuresCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x000000000012eb4a
- (id)_existingCellAtIndexPath:(id)arg1;	// IMP=0x000000000012eb34
- (id)_cellForRowAtIndexPath:(id)arg1;	// IMP=0x000000000012e931
- (long long)_numberOfRowsInSection:(long long)arg1;	// IMP=0x000000000012e792
- (double)_maxImageWidthForSystem:(id)arg1;	// IMP=0x000000000012e2bf
- (id)_imageForLine:(id)arg1;	// IMP=0x000000000012e220
- (id)_imageForLine:(id)arg1 size:(long long)arg2;	// IMP=0x000000000012e06b
- (long long)_lineImageSizeForSystem:(id)arg1;	// IMP=0x000000000012d82d
- (double)_availableWidth;	// IMP=0x000000000012d765
- (id)_imageWithArtworkDataSource:(id)arg1 size:(long long)arg2;	// IMP=0x000000000012d618
- (id)_cellHostingView;	// IMP=0x000000000012d60a
- (id)_imageWithArtworkDataSource:(id)arg1;	// IMP=0x000000000012d5f3
- (id)_smallerImageWithArtworkDataSource:(id)arg1;	// IMP=0x000000000012d5dc
- (id)_smallestImageWithArtworkDataSource:(id)arg1;	// IMP=0x000000000012d5c5
@property(readonly, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
- (id)imageForTransitLine:(id)arg1;	// IMP=0x000000000012d55c
- (id)imageForDepartureSequence:(id)arg1;	// IMP=0x000000000012d4b2
- (id)_imageOptionSizeArraysForEnumeration;	// IMP=0x000000000012d3f8
- (id)_pagingPromptForSection:(long long)arg1;	// IMP=0x000000000012d29e
- (_Bool)_shouldPageSection:(long long)arg1;	// IMP=0x000000000012d1d6
- (void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2;	// IMP=0x000000000012c733
- (void)transitDeparturesDataProviderDidReload:(id)arg1;	// IMP=0x000000000012c5fc
- (void)transitDeparturesDataProviderDidUpdateDepartures:(id)arg1;	// IMP=0x000000000012c5f6
- (void)transitDeparturesDataProviderWillUpdateDepartures:(id)arg1;	// IMP=0x000000000012c5f0
- (id)traitsForTransitDeparturesDataProvider:(id)arg1;	// IMP=0x000000000012c591
- (void)reloadData;	// IMP=0x000000000012c554
- (void)reloadSections;	// IMP=0x000000000012c517
- (void)invalidateLayout;	// IMP=0x000000000012c4d2
- (void)didTransition;	// IMP=0x000000000012c48e
- (void)willTransitionToSize:(struct CGSize)arg1;	// IMP=0x000000000012c472
- (_Bool)allowsSystemSectionCollapsing;	// IMP=0x000000000012c3e2
@property(nonatomic, getter=isActive) _Bool active;
- (id)initWithTableView:(id)arg1 mapItem:(id)arg2;	// IMP=0x000000000012c1e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

