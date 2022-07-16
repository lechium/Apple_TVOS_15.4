//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLResource-Protocol.h>

@class NSString, PLUniformTypeIdentifier;
@protocol PLResourceDataStore, PLResourceDataStoreKey;

@protocol PLWriteableResource <PLResource>
@property(retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property(retain, nonatomic) NSString *codecFourCharCodeName;
@property(nonatomic) int qualitySortValue;
@property(nonatomic) long long unorientedHeight;
@property(nonatomic) long long unorientedWidth;
@property(nonatomic) float scale;
@property(nonatomic) short remoteAvailability;
@property(retain, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
@property(nonatomic) long long dataStoreSubtype;
@property(retain, nonatomic) id <PLResourceDataStore> dataStore;
@property(nonatomic) unsigned int orientation;
@property(nonatomic) unsigned int recipeID;
@property(nonatomic) unsigned int version;
@property(nonatomic) unsigned int resourceType;
@end

