//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;	// 8 = 0x8
    WFTumblrAccessResource *_tumblrAccessResource;	// 16 = 0x10
}

+ (id)referencedActionResourceClasses;	// IMP=0x00000000002fa899
+ (void)initialize;	// IMP=0x00000000002fa875
- (void).cxx_destruct;	// IMP=0x00000000002fa3ba
@property(retain, nonatomic) WFTumblrAccessResource *tumblrAccessResource; // @synthesize tumblrAccessResource=_tumblrAccessResource;
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000002fa394
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;	// IMP=0x00000000002fa188
- (_Bool)isHidden;	// IMP=0x00000000002fa13f
- (void)possibleStatesDidChange;	// IMP=0x00000000002fa0e5
- (void)updateBlogs;	// IMP=0x00000000002f9fd5
- (void)wasAddedToWorkflow;	// IMP=0x00000000002f9f94
- (void)setActionResources:(id)arg1;	// IMP=0x00000000002f9d2d
- (Class)singleStateClass;	// IMP=0x00000000002f9d1c

@end
