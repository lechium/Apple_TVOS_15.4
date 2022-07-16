//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMMapPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (id)titleBarMaskImageForWidth:(double)arg1 constraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;	// IMP=0x000000000006f72e
+ (id)valueForKey:(id)arg1 forURLComponents:(id)arg2;	// IMP=0x000000000006f6bb
+ (struct CLLocationCoordinate2D)_legacyCoordinateForvCardURL:(id)arg1;	// IMP=0x000000000006f2b6
+ (struct CLLocationCoordinate2D)coordinateForvCardURL:(id)arg1;	// IMP=0x000000000006f2a4
+ (_Bool)supportsBlastDoor;	// IMP=0x000000000006f275
+ (id)vCardURLSForData:(id)arg1;	// IMP=0x000000000006f1af
+ (id)vCardDataForURL:(id)arg1;	// IMP=0x000000000006f185
+ (struct CGSize)mapThumbnailFillSizeForWidth:(double)arg1;	// IMP=0x000000000006f14a
+ (id)mapSnapshotterQueue;	// IMP=0x000000000006f0eb
+ (_Bool)writesToDisk;	// IMP=0x000000000006f0e3
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;	// IMP=0x000000000006f025
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 interfaceStyle:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000006e6fc
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;	// IMP=0x000000000006e6e2
+ (id)UTITypes;	// IMP=0x000000000006e669

@end

