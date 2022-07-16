//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction
{
    NSMutableArray *_exportSessions;	// 8 = 0x8
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x00000000003575ea
- (void).cxx_destruct;	// IMP=0x000000000035556a
@property(retain, nonatomic) NSMutableArray *exportSessions; // @synthesize exportSessions=_exportSessions;
- (void)updateSpeedVisibility;	// IMP=0x0000000000355410
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000355362
- (void)initializeParameters;	// IMP=0x0000000000355321
- (void)finishRunningWithError:(id)arg1;	// IMP=0x00000000003552bb
- (void)cancel;	// IMP=0x0000000000355249
- (void)encodeItems:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000354255
- (id)metadataForAsset:(id)arg1 newMetadata:(id)arg2;	// IMP=0x0000000000353e2d
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000353daa
- (void)getMetadataItems:(CDUnknownBlockType)arg1;	// IMP=0x0000000000353559
- (id)nonEmptyStringValueForKey:(id)arg1;	// IMP=0x00000000003534c4

@end

