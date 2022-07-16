//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMVO2MaxClassification : NSObject
{
    struct unique_ptr<CLVO2MaxClassifier, std::default_delete<CLVO2MaxClassifier>> fVO2MaxClassifier;	// 8 = 0x8
}

+ (int)CLHKBiologicalSexFromBiologicalSex:(long long)arg1;	// IMP=0x000000000015a1c7
+ (long long)biologicalSexFromCLHKBiologicalSex:(int)arg1;	// IMP=0x000000000015a1b2
- (id).cxx_construct;	// IMP=0x000000000015a1ec
- (void).cxx_destruct;	// IMP=0x000000000015a1dc
- (id)classificationDataFromStruct:(struct CLVO2MaxClassificationData)arg1;	// IMP=0x000000000015a027
- (void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 vo2Max:(double)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000159e0c
- (void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000159bfb
- (void)queryAllClassificationsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000159afc
- (id)init;	// IMP=0x0000000000159a88

@end

