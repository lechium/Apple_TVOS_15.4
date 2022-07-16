//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BLLibraryUtility : NSObject
{
}

+ (_Bool)_isMultiUser;	// IMP=0x0000000000024d3f
+ (_Bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000024b19
+ (id)identifierFromBookPath:(id)arg1 allowHash:(_Bool)arg2 allowStoreID:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000247d4
+ (id)identifierFromBookPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000247b4
+ (id)identifierFromBookContainer:(id)arg1 allowHash:(_Bool)arg2 allowStoreID:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000024505
+ (id)_storeIdFromiTunesMetadataPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000243fc
+ (id)_iTunesMetadataPathForEpubPath:(id)arg1;	// IMP=0x00000000000243e0
+ (id)generateFileUniqueIdFromPath:(id)arg1;	// IMP=0x000000000002430a
+ (id)uniqueIdFromEpubPath:(id)arg1;	// IMP=0x00000000000242a4
+ (id)uniqueIdFromPdfPath:(id)arg1;	// IMP=0x000000000002428b
+ (id)md5FromPath:(id)arg1;	// IMP=0x000000000002416c
+ (id)dcIdentifierFromBookPath:(id)arg1;	// IMP=0x0000000000024015
+ (id)_dcIdentifierFromOpfPath:(id)arg1 isEPUB:(_Bool)arg2;	// IMP=0x0000000000023c8a
+ (id)opfPathFromEpubPath:(id)arg1;	// IMP=0x0000000000023bf0
+ (id)opfPathFromFullOpfContainerPath:(id)arg1;	// IMP=0x0000000000023b4f
+ (id)p_opfPathFromContainerXmlDoc:(struct _xmlDoc *)arg1 epubPath:(id)arg2;	// IMP=0x000000000002391d
+ (id)p_opfPathFromContainerXmlPath:(id)arg1 epubPath:(id)arg2;	// IMP=0x0000000000023834

@end
