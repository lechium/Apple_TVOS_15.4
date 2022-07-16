//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXNewSearchResult-Protocol.h>

@class NSArray, NSString;

@interface PXSearchResultAssetAggregation : NSObject <PXNewSearchResult>
{
    NSArray *_assetUUIDs;	// 8 = 0x8
    unsigned long long _subtype;	// 16 = 0x10
    NSString *_thumbnailAssetUUID;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    unsigned long long _assetCount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004da1a5
@property(nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *thumbnailAssetUUID; // @synthesize thumbnailAssetUUID=_thumbnailAssetUUID;
@property(readonly, nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
@property(readonly, copy, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d9ecd
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetUUIDs:(id)arg3 subtype:(unsigned long long)arg4;	// IMP=0x00000000004d9a6e
- (id)init;	// IMP=0x00000000004d99f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

