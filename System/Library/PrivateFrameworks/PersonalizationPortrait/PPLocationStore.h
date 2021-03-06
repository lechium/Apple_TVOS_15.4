//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSString, PPClientFeedbackHelper;

@interface PPLocationStore : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPClientFeedbackHelper *_clientFeedbackHelper;	// 8 = 0x8
}

+ (id)describeLocationConsumer:(unsigned long long)arg1;	// IMP=0x00000000000119ef
+ (id)placemarkWithName:(id)arg1 clLocation:(id)arg2;	// IMP=0x000000000001198a
+ (id)placemarkWithLatitudeDegrees:(id)arg1 longitudeDegrees:(id)arg2 name:(id)arg3 thoroughfare:(id)arg4 subthoroughFare:(id)arg5 locality:(id)arg6 subLocality:(id)arg7 administrativeArea:(id)arg8 subAdministrativeArea:(id)arg9 postalCode:(id)arg10 countryCode:(id)arg11 country:(id)arg12 inlandWater:(id)arg13 ocean:(id)arg14 areasOfInterest:(id)arg15;	// IMP=0x00000000000116f4
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 thoroughfare:(id)arg3 subthoroughFare:(id)arg4 locality:(id)arg5 subLocality:(id)arg6 administrativeArea:(id)arg7 subAdministrativeArea:(id)arg8 postalCode:(id)arg9 countryCode:(id)arg10 country:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14;	// IMP=0x00000000000113a6
+ (id)_mergedThoroughfareForThorughfare:(id)arg1 subThoroughfare:(id)arg2 subPremises:(id)arg3;	// IMP=0x00000000000111f3
+ (id)defaultStore;	// IMP=0x0000000000011190
- (void).cxx_destruct;	// IMP=0x0000000000010de7
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000010db2
- (id)locationRecordsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010b81
- (_Bool)iterLocationRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010865
- (id)rankedLocationsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010634
- (_Bool)iterRankedLocationsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010318
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x00000000000102b9
- (_Bool)cloudSyncWithError:(id *)arg1;	// IMP=0x000000000001025f
- (_Bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(_Bool)arg5 decayRate:(double)arg6 error:(id *)arg7;	// IMP=0x000000000000ffb1
- (void)registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fd15
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fbb7
- (id)init;	// IMP=0x000000000000fb4e

// Remaining properties
@property(retain, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;

@end

