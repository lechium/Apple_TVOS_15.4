//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _HKElectrocardiogramComparisonFilter
{
}

+ (long long)enumRepresentationForKeyPath:(id)arg1;	// IMP=0x00000000000b7f36
+ (_Bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000b7c44
+ (_Bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b7b1e
+ (_Bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000000b7a71
+ (id)allowedValueClassesForKeyPath:(id)arg1;	// IMP=0x00000000000b7918
+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;	// IMP=0x00000000000b78e6
+ (_Bool)isSupportedKeyPath:(id)arg1;	// IMP=0x00000000000b7848
- (_Bool)_acceptsECGWithSymptomsStatus:(long long)arg1;	// IMP=0x00000000000b8398
- (_Bool)_acceptsECGWithPrivateClassification:(unsigned long long)arg1;	// IMP=0x00000000000b8327
- (_Bool)_acceptsECGWithAverageHeartRate:(id)arg1;	// IMP=0x00000000000b828d
- (_Bool)_acceptsECGWithPublicClassification:(long long)arg1;	// IMP=0x00000000000b821c
- (_Bool)acceptsDataObject:(id)arg1;	// IMP=0x00000000000b807e

@end

