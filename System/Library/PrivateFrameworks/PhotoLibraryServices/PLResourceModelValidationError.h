//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface PLResourceModelValidationError : NSError
{
}

+ (id)tableThumbUUIDMistmatchErrorForKey:(id)arg1 indexFromKey:(unsigned long long)arg2 assetID:(id)arg3;	// IMP=0x0000000000183d45
+ (id)unreachableFileThumbnailErrorForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000000183be2
+ (id)unreachableTableThumbnailErrorForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000000183a7f
+ (id)unreachableKeyErrorForKey:(id)arg1 atURL:(id)arg2 resource:(id)arg3;	// IMP=0x0000000000183865
+ (id)malformedTableThumbnailKeyErrorForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000000183685
+ (id)malformedKeyErrorForKey:(id)arg1 resource:(id)arg2;	// IMP=0x00000000001834cc
+ (id)unexpectedLocalResourceError:(id)arg1;	// IMP=0x00000000001833bb
+ (id)localAvailabilityInconsistencyErrorForResource:(id)arg1;	// IMP=0x00000000001832aa
+ (id)duplicatedCPLTypeAssetErrorForAsset:(id)arg1 cplType:(unsigned long long)arg2;	// IMP=0x00000000001830ed
+ (id)duplicateResourceErrorAmongResources:(id)arg1 forAsset:(id)arg2;	// IMP=0x0000000000182ecb
+ (id)missingRequiredResourcesErrorForAsset:(id)arg1 message:(id)arg2;	// IMP=0x0000000000182d19
+ (id)allPossibleErrorCodes;	// IMP=0x0000000000182c94
- (id)description;	// IMP=0x0000000000182ad1
- (id)init;	// IMP=0x0000000000182aa2

@end

