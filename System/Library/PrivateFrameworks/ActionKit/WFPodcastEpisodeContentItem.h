//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFPodcastEpisodeContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;	// IMP=0x0000000000273da0
+ (id)pluralTypeDescription;	// IMP=0x0000000000273d88
+ (id)typeDescription;	// IMP=0x0000000000273d70
+ (id)outputTypes;	// IMP=0x0000000000273c79
+ (id)ownedTypes;	// IMP=0x0000000000273bfd
+ (id)propertyBuilders;	// IMP=0x00000000002736e4
- (id)preferredFileType;	// IMP=0x000000000027347b
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000273182
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;	// IMP=0x0000000000272f8f
- (void)getArtworkDataWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000272ee3
- (id)getArtworkURLForSize:(struct CGSize)arg1 type:(id)arg2;	// IMP=0x0000000000272ca8
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;	// IMP=0x0000000000272bad
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;	// IMP=0x0000000000272b20
- (id)episode;	// IMP=0x0000000000272af2

@end

