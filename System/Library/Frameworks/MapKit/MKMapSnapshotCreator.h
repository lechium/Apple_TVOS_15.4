//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapViewDelegate-Protocol.h>

@class MKMapSnapshotRequest, NSLock, NSMutableArray, NSString, UIImage;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate>
{
    UIImage *_lastSnapshot;	// 8 = 0x8
    NSString *_lastAttributionString;	// 16 = 0x10
    NSLock *_requestLock;	// 24 = 0x18
    NSMutableArray *_requests;	// 32 = 0x20
    MKMapSnapshotRequest *_servingRequest;	// 40 = 0x28
}

+ (_Bool)supportsSharingThumbnails;	// IMP=0x000000000004045a
- (void).cxx_destruct;	// IMP=0x0000000000040cf3
@property(retain, nonatomic) MKMapSnapshotRequest *servingRequest; // @synthesize servingRequest=_servingRequest;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000040c4a
- (void)flushRequestQueue;	// IMP=0x0000000000040bc6
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;	// IMP=0x0000000000040b1d
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 requester:(id)arg4 context:(id)arg5;	// IMP=0x00000000000409b6
- (void)_respondWithSnapshot;	// IMP=0x00000000000407f1
- (id)_newSnapshotWithView:(id)arg1;	// IMP=0x00000000000406cf
- (void)_processRequest;	// IMP=0x0000000000040565
- (void)dealloc;	// IMP=0x00000000000404fa
- (id)init;	// IMP=0x0000000000040473

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

