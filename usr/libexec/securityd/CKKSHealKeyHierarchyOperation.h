//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, CKKSResultOperation, NSHashTable, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSHealKeyHierarchyOperation
{
    _Bool _allowFullRefetchResult;	// 10 = 0xa
    _Bool _newCloudKitRecordsWritten;	// 11 = 0xb
    _Bool _cloudkitWriteFailures;	// 12 = 0xc
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    CKKSOperationDependencies *_deps;	// 24 = 0x18
    NSString<OctagonStateString> *_nextState;	// 32 = 0x20
    CKKSResultOperation *_setResultStateOperation;	// 40 = 0x28
    NSHashTable *_ckOperations;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000008fb2a
@property(retain) NSHashTable *ckOperations; // @synthesize ckOperations=_ckOperations;
@property(retain) CKKSResultOperation *setResultStateOperation; // @synthesize setResultStateOperation=_setResultStateOperation;
@property _Bool cloudkitWriteFailures; // @synthesize cloudkitWriteFailures=_cloudkitWriteFailures;
@property _Bool newCloudKitRecordsWritten; // @synthesize newCloudKitRecordsWritten=_newCloudKitRecordsWritten;
@property _Bool allowFullRefetchResult; // @synthesize allowFullRefetchResult=_allowFullRefetchResult;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (_Bool)ensureKeyPresent:(id)arg1 viewState:(id)arg2;	// IMP=0x001000000008f4e9
- (void)attemptToHealView:(id)arg1 currentTrustStates:(id)arg2;	// IMP=0x001000000008f389
- (void)groupStart;	// IMP=0x001000000008ef09
- (id)initWithDependencies:(id)arg1 allowFullRefetchResult:(_Bool)arg2 intending:(id)arg3 errorState:(id)arg4;	// IMP=0x001000000008edf3
- (id)init;	// IMP=0x001000000008ede5

@end

