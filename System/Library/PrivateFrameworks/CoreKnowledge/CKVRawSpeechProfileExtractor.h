//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKVRawSpeechProfileExtractor : NSObject
{
}

+ (id)_convertItemsFromEntities:(id)arg1 categoryName:(id)arg2 categoryMetadata:(id)arg3 converter:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000e83ab
+ (id)_extractNamespaceFromCategoryName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e8139
+ (id)_extractEntitiesFromCategoryData:(id)arg1 categoryName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e7b86
+ (_Bool)_isValidCategoryWithName:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e78e2
+ (id)_dictionaryFromUserDataArray:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e73b3
+ (id)_extractUserDataFromRawSpeechProfile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e7079
+ (id)extractItemsFromRawSpeechProfile:(id)arg1 metadata:(id)arg2 converter:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000e6bde
+ (id)extractLocaleFromRawSpeechProfile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e6991

@end

