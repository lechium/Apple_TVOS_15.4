//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (struct CGImage *)newThumbnailFillToSize:(struct CGSize)arg1 imagePxSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 scale:(double)arg4;	// IMP=0x000000000006d97a
+ (_Bool)writesToDisk;	// IMP=0x000000000006d94b
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 balloonBundleID:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints)arg3 outSize:(struct CGSize *)arg4 error:(id *)arg5;	// IMP=0x000000000006d70e
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;	// IMP=0x000000000006d400
+ (struct CGImage *)cropAndScaleImageWithImageSource:(struct CGImageSource *)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2;	// IMP=0x000000000006d29c
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;	// IMP=0x000000000006d180
+ (id)UTITypes;	// IMP=0x000000000006d173
+ (id)fetchUTITypes;	// IMP=0x000000000006d007

@end
