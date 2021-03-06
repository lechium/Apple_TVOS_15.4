//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties
{
    _Bool _reverseLocationDataIsValid;	// 16 = 0x10
    _Bool _shiftedLocationIsValid;	// 17 = 0x11
    NSData *_reverseLocationData;	// 24 = 0x18
    unsigned long long _variationSuggestionStates;	// 32 = 0x20
}

+ (id)propertiesToFetch;	// IMP=0x00000000000e3337
+ (id)propertySetName;	// IMP=0x00000000000e332a
- (void).cxx_destruct;	// IMP=0x00000000000e3317
@property(readonly, nonatomic) unsigned long long variationSuggestionStates; // @synthesize variationSuggestionStates=_variationSuggestionStates;
@property(readonly, nonatomic) _Bool shiftedLocationIsValid; // @synthesize shiftedLocationIsValid=_shiftedLocationIsValid;
@property(readonly, nonatomic) NSData *reverseLocationData; // @synthesize reverseLocationData=_reverseLocationData;
@property(readonly, nonatomic) _Bool reverseLocationDataIsValid; // @synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid;
- (id)placeNamesForLocalizedDetailedDescriptionIsHome:(_Bool *)arg1;	// IMP=0x00000000000e3261
- (id)localizedGeoDescriptionIsHome:(_Bool *)arg1;	// IMP=0x00000000000e31ed
- (id)_locationInfo;	// IMP=0x00000000000e3187
@property(readonly, nonatomic) NSString *addressString;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000000e2f57

@end

