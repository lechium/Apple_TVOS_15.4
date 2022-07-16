//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TDTemplateRenderingMode;

@interface TDSimpleArtworkElementProduction
{
}

- (id)associatedFileModificationDateWithDocument:(id)arg1;	// IMP=0x0000000000061773
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;	// IMP=0x0000000000061435

// Remaining properties
@property(nonatomic) short autoscalingType; // @dynamic autoscalingType;
@property(nonatomic) _Bool isFlippable; // @dynamic isFlippable;
@property(nonatomic) _Bool optOutOfThinning; // @dynamic optOutOfThinning;
@property(nonatomic) _Bool preservesVectorRepresentation; // @dynamic preservesVectorRepresentation;
@property(nonatomic) _Bool recognitionImage; // @dynamic recognitionImage;
@property(retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode; // @dynamic templateRenderingMode;

@end

