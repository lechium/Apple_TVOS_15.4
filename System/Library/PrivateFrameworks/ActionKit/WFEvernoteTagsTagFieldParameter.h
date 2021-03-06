//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDynamicTagFieldParameter.h>

#import <ActionKit/WFDynamicTagFieldDataSource-Protocol.h>

@class NSString, WFEvernoteAccessResource;

@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter <WFDynamicTagFieldDataSource>
{
    WFEvernoteAccessResource *_evernoteAccessResource;	// 8 = 0x8
}

+ (id)referencedActionResourceClasses;	// IMP=0x00000000001e7309
- (void).cxx_destruct;	// IMP=0x00000000001e716a
@property(retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource; // @synthesize evernoteAccessResource=_evernoteAccessResource;
- (id)suggestedTagsForTagField:(id)arg1;	// IMP=0x00000000001e7073
- (void)updateTags;	// IMP=0x00000000001e6fba
- (void)wasAddedToWorkflow;	// IMP=0x00000000001e6f61
- (void)setActionResources:(id)arg1;	// IMP=0x00000000001e6cfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

