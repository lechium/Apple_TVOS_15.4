//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLocale;

@interface PGFeatureExtractorLocale
{
    NSLocale *_currentLocale;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016b0fa
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016affc
- (long long)featureLength;	// IMP=0x000000000016aff1
- (id)featureNames;	// IMP=0x000000000016ae96
- (id)name;	// IMP=0x000000000016ae77
@property(retain, nonatomic) NSLocale *currentLocale; // @synthesize currentLocale=_currentLocale;
- (id)init;	// IMP=0x000000000016ade1

@end

