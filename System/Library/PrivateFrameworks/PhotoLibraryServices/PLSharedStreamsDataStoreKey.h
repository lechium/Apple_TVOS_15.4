//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLChooserKeyProperties-Protocol.h>

@class NSString;

@interface PLSharedStreamsDataStoreKey <PLChooserKeyProperties>
{
    NSString *_relativePath;	// 8 = 0x8
    unsigned int _sharedStreamsResourceType;	// 16 = 0x10
}

+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1;	// IMP=0x0000000000544bb5
+ (id)_keyDataWithRelativePath:(id)arg1 type:(unsigned int)arg2;	// IMP=0x0000000000544ac5
+ (id)_relativeDCIMFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4;	// IMP=0x00000000005449bd
+ (id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 fileName:(id)arg3;	// IMP=0x00000000005448d0
+ (id)_replacementPathExtensionForType:(unsigned int)arg1;	// IMP=0x0000000000544873
- (void).cxx_destruct;	// IMP=0x0000000000544860
- (id)fileURLForAssetID:(id)arg1;	// IMP=0x00000000005445ab
- (id)descriptionForAssetID:(id)arg1;	// IMP=0x00000000005444ed
- (unsigned int)recipeIDForAssetID:(id)arg1;	// IMP=0x00000000005444c7
- (_Bool)isDerivative;	// IMP=0x00000000005444bf
- (unsigned int)resourceVersion;	// IMP=0x00000000005444b7
- (unsigned int)resourceType;	// IMP=0x0000000000544491
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;	// IMP=0x00000000005442be
- (id)uniformTypeIdentifier;	// IMP=0x000000000054425d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005441fe
- (_Bool)isEqualToKey:(id)arg1;	// IMP=0x00000000005441f1
- (id)initWithKeyStruct:(const void *)arg1;	// IMP=0x000000000054411e
- (id)keyData;	// IMP=0x00000000005440e5
- (id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;	// IMP=0x0000000000543ba3

@end
