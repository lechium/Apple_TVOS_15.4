//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface PHAssetLocalDateProperties
{
    NSNumber *_inferredTimeZoneOffset;	// 16 = 0x10
    long long _creationDateSource;	// 24 = 0x18
}

+ (id)propertiesToFetch;	// IMP=0x00000000000e3584
+ (id)propertySetName;	// IMP=0x00000000000e3577
- (void).cxx_destruct;	// IMP=0x00000000000e3564
@property(readonly, nonatomic) long long creationDateSource; // @synthesize creationDateSource=_creationDateSource;
@property(readonly, nonatomic) NSNumber *inferredTimeZoneOffset; // @synthesize inferredTimeZoneOffset=_inferredTimeZoneOffset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000000e3414

@end

