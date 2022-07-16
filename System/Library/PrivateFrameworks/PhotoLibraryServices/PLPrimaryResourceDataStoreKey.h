//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLTaggedPointerDataStoreKey-Protocol.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey <PLTaggedPointerDataStoreKey>
{
}

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;	// IMP=0x0000000000306642
+ (unsigned int)strategyFromExternalResource:(id)arg1 asset:(id)arg2;	// IMP=0x0000000000306509
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;	// IMP=0x00000000003064a6
- (id)descriptionForAssetID:(id)arg1;	// IMP=0x00000000003063e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000306389
- (_Bool)isEqualToKey:(id)arg1;	// IMP=0x000000000030637c
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;	// IMP=0x00000000003062a3
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;	// IMP=0x0000000000306296
- (id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;	// IMP=0x0000000000306168
- (id)_initWithKeyStruct:(const void *)arg1;	// IMP=0x00000000003060af
- (id)_init;	// IMP=0x0000000000306080
- (id)uniformTypeIdentifier;	// IMP=0x000000000030601d
- (id)fileURLForAssetID:(id)arg1;	// IMP=0x0000000000305fba
- (id)keyData;	// IMP=0x0000000000305f57
- (id)initWithKeyStruct:(const void *)arg1;	// IMP=0x0000000000305ec8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
