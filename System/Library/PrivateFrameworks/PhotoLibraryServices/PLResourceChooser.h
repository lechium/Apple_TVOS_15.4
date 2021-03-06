//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLResourceChooser : NSObject
{
}

+ (unsigned long long)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id *)arg3 imageType:(long long *)arg4;	// IMP=0x0000000000300a6c
+ (long long)_fileResourceTypeForCloudResourceType:(unsigned long long)arg1 hasAdjustments:(_Bool)arg2 requiresUnadjustedVersion:(_Bool)arg3;	// IMP=0x00000000003009ea
+ (void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned long long *)arg3 localCPLResourceType:(unsigned long long *)arg4 localCPLResourceFilePath:(id *)arg5 fileReservation:(id *)arg6;	// IMP=0x000000000030013a
+ (id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id *)arg3;	// IMP=0x00000000002ffc80
+ (id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id *)arg3;	// IMP=0x00000000002ffa5e
+ (id)_penultimateItemFromAllItems:(id)arg1;	// IMP=0x00000000002ff98e
+ (id)_originalItemFromAllItems:(id)arg1;	// IMP=0x00000000002ff87e
+ (id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id *)arg3 outImageType:(long long *)arg4;	// IMP=0x00000000002ff464
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 allowMetadataSnapshot:(_Bool)arg3 forceLarge:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(long long *)arg6;	// IMP=0x00000000002fee21
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 forceLarge:(_Bool)arg3 allowMetadataSnapshot:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(long long *)arg6;	// IMP=0x00000000002fe926
- (id)init;	// IMP=0x00000000002fe8f7

@end

