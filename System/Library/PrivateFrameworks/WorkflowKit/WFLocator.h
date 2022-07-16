//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/CLLocationManagerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocation, CLLocationManager, NSString;

@interface WFLocator : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    CLInUseAssertion *_inUseAssertion;	// 16 = 0x10
    CLLocation *_bestEffortLocation;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    double _timeout;	// 40 = 0x28
}

+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e6870
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e6856
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e680c
- (void).cxx_destruct;	// IMP=0x00000000001e6514
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CLLocation *bestEffortLocation; // @synthesize bestEffortLocation=_bestEffortLocation;
@property(retain, nonatomic) CLInUseAssertion *inUseAssertion; // @synthesize inUseAssertion=_inUseAssertion;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000001e626d
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000000001e5e7e
- (void)finishUpdatingLocation;	// IMP=0x00000000001e5b07
- (void)startUpdatingLocation;	// IMP=0x00000000001e5a0e
- (void)requestLocation;	// IMP=0x00000000001e593b
- (void)start;	// IMP=0x00000000001e5877
- (_Bool)useRequestLocation;	// IMP=0x00000000001e586f
- (void)dealloc;	// IMP=0x00000000001e5815
- (id)initWithWorkflowEnvironment:(long long)arg1;	// IMP=0x00000000001e5742

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

