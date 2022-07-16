//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class CLRegion, MNLocationProviderCLParameters, NSBundle, NSString;
@protocol MNLocationProviderDelegate;

@protocol MNLocationProvider <NSObject>
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) unsigned long long traceVersion;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(readonly, nonatomic) _Bool isAuthorized;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate;
- (void)stopMonitoringForRegion:(CLRegion *)arg1;
- (void)startMonitoringForRegion:(CLRegion *)arg1;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;

@optional
- (void)setCLParameters:(MNLocationProviderCLParameters *)arg1;
- (id)initWithEffectiveBundleIdentifier:(NSString *)arg1;
- (id)initWithEffectiveBundle:(NSBundle *)arg1;
@end
