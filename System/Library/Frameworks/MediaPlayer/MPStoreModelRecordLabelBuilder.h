//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MPStoreModelRecordLabelBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int name:1;
        unsigned int descriptionText:1;
        unsigned int shortDescriptionText:1;
        unsigned int artwork:1;
        unsigned int editorialArtwork:1;
    } _requestedRecordLabelProperties;	// 8 = 0x8
}

+ (id)allSupportedProperties;	// IMP=0x000000000015da27
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;	// IMP=0x000000000015daf8

@end

