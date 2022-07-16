//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSBundleProxy, MISSING_TYPE, NSArray, NSOperationQueue, SDAirDropHandler, SDAirDropHandleriCloudDrive;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerGenericFiles
{
    NSOperationQueue *_workOperationsQueue;	// 8 = 0x8
    SDAirDropHandleriCloudDrive *_icloudDriveHandler;	// 16 = 0x10
    SDAirDropHandler *_selectedHandler;	// 24 = 0x18
    LSBundleProxy *_selectedProxy;	// 32 = 0x20
    _Bool _willUseOpenWithAlert;	// 40 = 0x28
    NSArray *_availableApplications;	// 48 = 0x30
    LSBundleProxy *_selectedApplication;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000acfa2
@property(retain, nonatomic) LSBundleProxy *selectedApplication; // @synthesize selectedApplication=_selectedApplication;
@property(copy, nonatomic) NSArray *availableApplications; // @synthesize availableApplications=_availableApplications;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000acef3
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x00100000000ace2f
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;	// IMP=0x00100000000acd44
- (void)performActionWithBundleProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ac6db
- (void)addOpenWithActions;	// IMP=0x00100000000ac38f
- (void)acceptActionTriggered;	// IMP=0x00100000000ac29c
- (_Bool)shouldOpenAutomaticallyAfterUserAccepts;	// IMP=0x00100000000ac1a4
- (id)actionForBundleProxy:(id)arg1;	// IMP=0x00100000000abfef
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x00100000000abf8e
- (void)updatePossibleActions;	// IMP=0x00100000000abc61
- (id)suitableContentsDescription;	// IMP=0x00100000000aba2b
- (id)firstReceivedFilename;	// IMP=0x00100000000ab960
- (long long)transferTypes;	// IMP=0x00100000000ab92b
- (_Bool)canHandleTransfer;	// IMP=0x00100000000ab2f2
- (MISSING_TYPE *)initWithTransfer:bundleIdentifier: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000ab21b
- (id)initWithTransfer:(id)arg1;	// IMP=0x00100000000ab207

@end

