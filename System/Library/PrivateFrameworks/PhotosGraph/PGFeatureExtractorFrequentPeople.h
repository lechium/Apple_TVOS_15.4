//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PGFeatureExtractorFrequentPeople
{
    unsigned long long _numberOfFrequentPeopleToExtract;	// 8 = 0x8
    PHFetchResult *_frequencySortedPersons;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a7925
@property(retain, nonatomic) PHFetchResult *frequencySortedPersons; // @synthesize frequencySortedPersons=_frequencySortedPersons;
@property(readonly, nonatomic) unsigned long long numberOfFrequentPeopleToExtract; // @synthesize numberOfFrequentPeopleToExtract=_numberOfFrequentPeopleToExtract;
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a73a5
- (id)featureNames;	// IMP=0x00000000002a72cc
- (long long)featureLength;	// IMP=0x00000000002a72ba
- (id)name;	// IMP=0x00000000002a729b
- (id)initWithNumberOfFrequentPeopleToExtract:(unsigned long long)arg1;	// IMP=0x00000000002a7234

@end

