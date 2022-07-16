//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PLResourceIdentity-Protocol.h>

@class NSString, PLPhotoLibrary, PLUniformTypeIdentifier;

@interface PHImageRequestResource : NSObject <PLResourceIdentity>
{
    PLPhotoLibrary *_photoLibrary;	// 8 = 0x8
    unsigned int _resourceType;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    unsigned int _recipeID;	// 24 = 0x18
    PLUniformTypeIdentifier *_uniformTypeIdentifier;	// 32 = 0x20
}

+ (id)possibleClassesInDictionaryRepresentation;	// IMP=0x00000000000cf43f
+ (id)dictionaryRepresentationFromResourceIdentity:(id)arg1;	// IMP=0x00000000000cf1b7
+ (id)imageRequestResourceForDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000cf00e
- (void).cxx_destruct;	// IMP=0x00000000000cef53
@property(readonly, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned int resourceType; // @synthesize resourceType=_resourceType;
@property(readonly, copy) NSString *description;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000cecc8
- (id)initWithResource:(id)arg1;	// IMP=0x00000000000ce973
- (id)initWithResourceType:(unsigned int)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 uti:(id)arg4 conformsToTypes:(long long)arg5;	// IMP=0x00000000000ce8be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

