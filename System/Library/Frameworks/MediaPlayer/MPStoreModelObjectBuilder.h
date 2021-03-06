//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject
{
    _Bool _preventStoreItemMetadataCaching;	// 8 = 0x8
    MPPropertySet *_requestedPropertySet;	// 16 = 0x10
}

+ (id)allSupportedProperties;	// IMP=0x00000000001e85de
- (void).cxx_destruct;	// IMP=0x00000000001e85ce
@property(nonatomic) _Bool preventStoreItemMetadataCaching; // @synthesize preventStoreItemMetadataCaching=_preventStoreItemMetadataCaching;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1 userIdentity:(id)arg2;	// IMP=0x00000000001e8504
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;	// IMP=0x00000000001e84fc
- (id)modelObjectWithStoreItemMetadata:(id)arg1 userIdentity:(id)arg2;	// IMP=0x00000000001e84e5
- (id)modelObjectWithStorePlatformDictionary:(id)arg1;	// IMP=0x00000000001e8458
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;	// IMP=0x00000000001e83b5
- (id)modelObjectWithStoreItemMetadata:(id)arg1;	// IMP=0x00000000001e8328
- (id)initWithRequestedPropertySet:(id)arg1;	// IMP=0x00000000001e82b5

@end

