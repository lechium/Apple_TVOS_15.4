//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlacesKit/CLLocationManagerDelegate-Protocol.h>
#import <PlacesKit/MKMapViewDelegate-Protocol.h>
#import <PlacesKit/PXPlacesGeotaggedItemDataSourceDelegate-Protocol.h>

@class CLLocationManager, NSMapTable, NSMutableDictionary, NSOrderedSet, NSSet, NSString, PXPlacesImageCache, PXPlacesMapPipelineExecutionContext, PXPlacesMapView;
@protocol MKAnnotation, OS_dispatch_queue, OS_dispatch_source, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerFocusDelegate, PXPlacesMapControllerLoadingStateDelegate, PXPlacesMapControllerSelectionDelegate;

@interface PXPlacesMapController : NSObject <MKMapViewDelegate, CLLocationManagerDelegate, PXPlacesGeotaggedItemDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_pipelinesQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dataSourcesQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_executionContextQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_uiUpdateTimer;	// 32 = 0x20
    NSMapTable *_dataSourceExecutionContexts;	// 40 = 0x28
    NSMapTable *_pendingDataSourceChanges;	// 48 = 0x30
    _Bool _pipelineExecutionAllowed;	// 56 = 0x38
    _Bool _mapViewIsVisible;	// 57 = 0x39
    _Bool _signalFocusWhenMapViewBecomesVisible;	// 58 = 0x3a
    int _currentLocationAuthorizationStatus;	// 60 = 0x3c
    id <PXPlacesMapControllerSelectionDelegate> _selectionDelegate;	// 64 = 0x40
    id <PXPlacesMapControllerChangeDelegate> _changeDelegate;	// 72 = 0x48
    id <PXPlacesMapControllerFocusDelegate> _focusDelegate;	// 80 = 0x50
    id <PXPlacesMapControllerLoadingStateDelegate> _stateDelegate;	// 88 = 0x58
    id <MKAnnotation> _currentSelection;	// 96 = 0x60
    NSSet *_dataSources;	// 104 = 0x68
    NSMapTable *_dataSourceToPipelineMap;	// 112 = 0x70
    PXPlacesMapView *_mapView;	// 120 = 0x78
    PXPlacesMapPipelineExecutionContext *_currentExecutionContext;	// 128 = 0x80
    PXPlacesImageCache *_cache;	// 136 = 0x88
    CLLocationManager *_locationManager;	// 144 = 0x90
    NSMutableDictionary *_showDebugMapRectColors;	// 152 = 0x98
    struct CLLocationCoordinate2D _initialCenterCoordinate;	// 160 = 0xa0
    struct UIEdgeInsets _initialEdgePadding;	// 176 = 0xb0
    CDStruct_02837cd9 _signalFocusMapRect;	// 208 = 0xd0
}

+ (void)launchMapsAtCoordinate:(struct CLLocationCoordinate2D)arg1 withTitle:(id)arg2;	// IMP=0x000000000001f577
- (void).cxx_destruct;	// IMP=0x000000000001d274
@property(retain, nonatomic) NSMutableDictionary *showDebugMapRectColors; // @synthesize showDebugMapRectColors=_showDebugMapRectColors;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) PXPlacesImageCache *cache; // @synthesize cache=_cache;
@property(nonatomic) CDStruct_02837cd9 signalFocusMapRect; // @synthesize signalFocusMapRect=_signalFocusMapRect;
@property(nonatomic) _Bool signalFocusWhenMapViewBecomesVisible; // @synthesize signalFocusWhenMapViewBecomesVisible=_signalFocusWhenMapViewBecomesVisible;
@property _Bool mapViewIsVisible; // @synthesize mapViewIsVisible=_mapViewIsVisible;
@property _Bool pipelineExecutionAllowed; // @synthesize pipelineExecutionAllowed=_pipelineExecutionAllowed;
@property(retain) PXPlacesMapPipelineExecutionContext *currentExecutionContext; // @synthesize currentExecutionContext=_currentExecutionContext;
@property(retain, nonatomic) PXPlacesMapView *mapView; // @synthesize mapView=_mapView;
@property(retain) NSMapTable *dataSourceToPipelineMap; // @synthesize dataSourceToPipelineMap=_dataSourceToPipelineMap;
@property(retain) NSSet *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) id <MKAnnotation> currentSelection; // @synthesize currentSelection=_currentSelection;
@property(nonatomic) int currentLocationAuthorizationStatus; // @synthesize currentLocationAuthorizationStatus=_currentLocationAuthorizationStatus;
@property(nonatomic) struct UIEdgeInsets initialEdgePadding; // @synthesize initialEdgePadding=_initialEdgePadding;
@property(nonatomic) struct CLLocationCoordinate2D initialCenterCoordinate; // @synthesize initialCenterCoordinate=_initialCenterCoordinate;
@property __weak id <PXPlacesMapControllerLoadingStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property __weak id <PXPlacesMapControllerFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
@property __weak id <PXPlacesMapControllerChangeDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property __weak id <PXPlacesMapControllerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000000001cf44
- (void)mapViewWillStartLocatingUser:(id)arg1;	// IMP=0x000000000001ce86
- (void)mapContainerViewDidDisappear;	// IMP=0x000000000001ce72
- (void)mapContainerViewWillDisappear;	// IMP=0x000000000001ce6c
- (void)mapContainerViewDidAppear;	// IMP=0x000000000001cd32
- (void)mapContainerViewWillAppear;	// IMP=0x000000000001ccf3
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;	// IMP=0x000000000001cca7
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x000000000001cac8
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;	// IMP=0x000000000001c278
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x000000000001c1b4
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x000000000001c159
- (void)dataSource:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000001bddb
@property(readonly, nonatomic) NSOrderedSet *currentSelectedGeotaggables;
- (double)_zPositionForAnnotationIndex:(long long)arg1;	// IMP=0x000000000001bce0
- (void)_executeUpdatePlanResults:(id)arg1;	// IMP=0x000000000001b02a
- (double)_fadeOutAnimationDuration;	// IMP=0x000000000001b01c
- (double)_fadeInAnimationDuration;	// IMP=0x000000000001b00e
- (double)_defaultAnimationDuration;	// IMP=0x000000000001b000
- (void)_updateMapWithDataSource:(id)arg1 dataSourceChange:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001aec6
- (id)executePipeline:(id)arg1 dataSourceChange:(id)arg2 context:(id)arg3;	// IMP=0x000000000001adf9
- (void)_updateMapWithDataSources:(id)arg1 dataSourceChangeTable:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ab82
- (void)_updateMapWithAllDataSources:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aa8f
- (CDStruct_02837cd9)_ensureMinimumSize:(CDStruct_02837cd9)arg1;	// IMP=0x000000000001a9a3
- (void)setVisibleMapRelativeToViewPort:(id)arg1 andViewSize:(struct CGSize)arg2 forRenderer:(id)arg3;	// IMP=0x000000000001a8b4
- (void)_setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001a70d
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forRenderer:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001a68b
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forPipeline:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001a61e
- (void)_showDebugMapRect:(CDStruct_02837cd9)arg1 color:(id)arg2;	// IMP=0x000000000001a3cb
- (CDStruct_02837cd9)mapRectForNearbyQueriesFromRect:(CDStruct_02837cd9)arg1 atScale:(double)arg2 targetViewSize:(struct CGSize)arg3;	// IMP=0x000000000001a344
- (CDStruct_02837cd9)mapRectForGeotaggablesFromDataSource:(id)arg1 renderer:(id)arg2 mapViewSize:(struct CGSize)arg3 fitAdjusted:(_Bool *)arg4;	// IMP=0x0000000000019f99
- (CDStruct_02837cd9)_mapRectForGeotaggablesFromPipeline:(id)arg1 fitAdjusted:(_Bool *)arg2;	// IMP=0x0000000000019e8e
- (void)focusOnGeotaggablesFromPipelineImmediately:(id)arg1;	// IMP=0x0000000000019d34
- (void)focusOnGeotaggablesFromPipeline:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000019c4a
- (id)visibleGeotaggableFromDataSource:(id)arg1;	// IMP=0x0000000000019b2b
- (void)runPipelines;	// IMP=0x0000000000019b17
- (void)resumePipelines:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019b01
- (void)suspendPipelines;	// IMP=0x0000000000019af7
- (void)removePipeline:(id)arg1;	// IMP=0x000000000001989c
- (void)removeDataSource:(id)arg1;	// IMP=0x000000000001957a
- (void)addPipeline:(id)arg1;	// IMP=0x0000000000019458
- (id)createTrackingBarButtonItem;	// IMP=0x0000000000019401
- (void)loadView;	// IMP=0x0000000000019273
- (void)dealloc;	// IMP=0x0000000000019208
- (id)init;	// IMP=0x0000000000019047

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

