//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol WFFileStorageServiceOperation;

@interface WFSaveFileAction
{
    id <WFFileStorageServiceOperation> _saveOperation;	// 8 = 0x8
}

+ (id)userInterfaceXPCInterface;	// IMP=0x0000000000299729
+ (id)userInterfaceProtocol;	// IMP=0x0000000000299718
- (void).cxx_destruct;	// IMP=0x000000000029a13d
@property(retain, nonatomic) id <WFFileStorageServiceOperation> saveOperation; // @synthesize saveOperation=_saveOperation;
- (id)minimumSupportedClientVersion;	// IMP=0x000000000029a0aa
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x0000000000299fdf
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x0000000000299f4f
- (_Bool)requiresRemoteExecution;	// IMP=0x0000000000299f20
- (void)updatePathPrefix;	// IMP=0x0000000000299f1a
- (_Bool)outputsMultipleItems;	// IMP=0x0000000000299f08
- (_Bool)inputsMultipleItems;	// IMP=0x0000000000299f00
- (id)showPickerKey;	// IMP=0x0000000000299ef3
- (id)filePathKey;	// IMP=0x0000000000299ee6
- (void)finishRunningWithError:(id)arg1;	// IMP=0x0000000000299e80
- (void)cancel;	// IMP=0x0000000000299e12
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 storageService:(id)arg3 subpath:(id)arg4;	// IMP=0x0000000000299cab
- (void)runWithStorageService:(id)arg1 directory:(id)arg2 subpath:(id)arg3 input:(id)arg4;	// IMP=0x0000000000299b8c
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;	// IMP=0x000000000029988e
- (_Bool)isProgressIndeterminate;	// IMP=0x0000000000299886

@end

