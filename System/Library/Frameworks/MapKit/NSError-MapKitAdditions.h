//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSURL;

@interface NSError (MapKitAdditions)
+ (id)_errorWithExtensionServiceError:(long long)arg1;	// IMP=0x000000000019773e
@property(readonly, retain, nonatomic) NSURL *_mapkit_locationErrorSettingsURL;
@property(readonly, nonatomic, getter=_mapkit_isCLErrorNetwork) _Bool _mapkit_CLErrorNetwork;
@property(readonly, nonatomic, getter=_mapkit_isCLHeadingFailure) _Bool _mapkit_CLHeadingFailure;
@property(readonly, nonatomic, getter=_mapkit_isCLLocationUnknown) _Bool _mapkit_CLLocationUnknown;
@property(readonly, nonatomic, getter=_mapkit_isCLDenied) _Bool _mapkit_CLDenied;
- (id)_mapkit_error;	// IMP=0x00000000000eacc0
- (id)_mapkit_transitIncident;	// IMP=0x00000000000eb8e4
- (long long)_mapkit_underlyingGEOError;	// IMP=0x00000000000eb862
- (_Bool)_mapkit_isLocationAuthorizationError;	// IMP=0x00000000000eb7e4
- (long long)_mapkit_directionsErrorCode;	// IMP=0x00000000000eb762
- (_Bool)_mapkit_isDirectionsError;	// IMP=0x00000000000eb6f8
- (id)_mapkit_errorWithDirectionsError:(id)arg1;	// IMP=0x00000000000eaeb4
@end

