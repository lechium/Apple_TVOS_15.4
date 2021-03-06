//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class MPMediaItem, NSString;

@interface WFMPMediaContentItem <WFContentItemClass>
{
}

+ (_Bool)isAvailableOnPlatform:(long long)arg1;	// IMP=0x0000000000079eb9
+ (_Bool)hasLibrary;	// IMP=0x0000000000079eb1
+ (id)countDescription;	// IMP=0x0000000000079ea0
+ (id)pluralFilterDescription;	// IMP=0x0000000000079e88
+ (id)filterDescription;	// IMP=0x0000000000079e70
+ (id)pluralTypeDescription;	// IMP=0x0000000000079e58
+ (id)typeDescription;	// IMP=0x0000000000079e40
+ (id)contentCategories;	// IMP=0x0000000000079dd9
+ (id)outputTypes;	// IMP=0x0000000000079cdb
+ (id)ownedTypes;	// IMP=0x0000000000079c5d
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000079929
+ (id)stringConversionBehavior;	// IMP=0x00000000000798bf
+ (id)propertyBuilders;	// IMP=0x0000000000076d8b
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000075d23
- (id)preferredFileType;	// IMP=0x0000000000075c06
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;	// IMP=0x000000000007561f
@property(readonly, nonatomic) NSString *albumTitle;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) NSString *title;
- (id)additionalRepresentationsForSerialization;	// IMP=0x00000000000753f3
- (id)assetURL;	// IMP=0x000000000007528c
@property(readonly, nonatomic) MPMediaItem *mediaItem;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;	// IMP=0x00000000000a6fee
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a6f5d
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a6ef0

@end

