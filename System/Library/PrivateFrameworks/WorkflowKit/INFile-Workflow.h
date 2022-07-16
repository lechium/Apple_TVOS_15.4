//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INFile.h>

#import <WorkflowKit/WFCodableAttributeContentConvertible-Protocol.h>
#import <WorkflowKit/WFCodableAttributeTransformable-Protocol.h>

@class NSString;

@interface INFile (Workflow) <WFCodableAttributeContentConvertible, WFCodableAttributeTransformable>
+ (Class)wf_contentItemClass;	// IMP=0x00000000002189b3
+ (id)wf_fileWithFileRepresentation:(id)arg1 bookmarkData:(id)arg2 displayName:(id)arg3;	// IMP=0x0000000000218815
+ (id)wf_fileWithFileRepresentation:(id)arg1 displayName:(id)arg2;	// IMP=0x00000000002186b4
- (_Bool)wf_removedOnCompletion;	// IMP=0x00000000002185ca
- (id)wf_initWithBookmarkData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 removedOnCompletion:(id)arg4;	// IMP=0x00000000002184eb
- (id)wf_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 removedOnCompletion:(id)arg5;	// IMP=0x00000000002183ed
- (id)wf_fileRepresentation;	// IMP=0x00000000002181d5
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000218127
- (id)wf_contentItemWithCodableAttribute:(id)arg1;	// IMP=0x00000000002180c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

