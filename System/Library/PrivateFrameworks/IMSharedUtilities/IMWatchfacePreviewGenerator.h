//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMWatchfacePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 balloonBundleID:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints)arg3 outSize:(struct CGSize *)arg4 error:(id *)arg5;	// IMP=0x0000000000014841
+ (_Bool)writesToDisk;	// IMP=0x00000000000147e8
+ (id)UTITypes;	// IMP=0x00000000000147c1
+ (_Bool)_isAvailable;	// IMP=0x0000000000014792

@end

