//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKObjectType, NSString, _HKFilter;

@interface HKQueryServerConfiguration
{
    _Bool _shouldDeactivateAfterInitialResults;	// 8 = 0x8
    _Bool _shouldSuppressDataCollection;	// 9 = 0x9
    NSString *_debugIdentifier;	// 16 = 0x10
    HKObjectType *_objectType;	// 24 = 0x18
    _HKFilter *_filter;	// 32 = 0x20
    long long _qualityOfService;	// 40 = 0x28
    double _activationTime;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000183be
- (void).cxx_destruct;	// IMP=0x00000000000119ec
@property(nonatomic) double activationTime; // @synthesize activationTime=_activationTime;
@property(nonatomic) _Bool shouldSuppressDataCollection; // @synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection;
@property(nonatomic) _Bool shouldDeactivateAfterInitialResults; // @synthesize shouldDeactivateAfterInitialResults=_shouldDeactivateAfterInitialResults;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b74b7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000270a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b73c5
- (id)init;	// IMP=0x00000000000b7382

@end

