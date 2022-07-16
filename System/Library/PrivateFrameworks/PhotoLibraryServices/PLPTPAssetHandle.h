//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSSet, NSString;

@interface PLPTPAssetHandle : NSObject
{
    _Bool _requiresConversion;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSManagedObjectID *_assetID;	// 24 = 0x18
    NSManagedObjectID *_sidecarID;	// 32 = 0x20
    NSSet *_siblingAssetHandleTypes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002de86c
@property(readonly, copy, nonatomic) NSSet *siblingAssetHandleTypes; // @synthesize siblingAssetHandleTypes=_siblingAssetHandleTypes;
@property(readonly, nonatomic) _Bool requiresConversion; // @synthesize requiresConversion=_requiresConversion;
@property(readonly, copy, nonatomic) NSManagedObjectID *sidecarID; // @synthesize sidecarID=_sidecarID;
@property(readonly, copy, nonatomic) NSManagedObjectID *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *auxiliaryResourceFilenameMarker;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002de760
- (id)description;	// IMP=0x00000000002de680
- (_Bool)hasSiblingAssetWithAssetHandleType:(long long)arg1;	// IMP=0x00000000002de625
- (id)assetHandleBySettingSiblingAssetHandleTypes:(id)arg1;	// IMP=0x00000000002de5ba
- (id)assetHandleBySettingRequiresConversion;	// IMP=0x00000000002de575
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(_Bool)arg4 siblingAssetHandleTypes:(id)arg5;	// IMP=0x00000000002de471
- (id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(_Bool)arg4;	// IMP=0x00000000002de3c6

@end
