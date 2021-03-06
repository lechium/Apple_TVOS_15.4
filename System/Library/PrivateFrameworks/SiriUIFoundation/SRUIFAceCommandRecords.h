//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUIFoundation/SRUIFAceCommandRecordDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SRUIFAceCommandRecordsDelegate;

@interface SRUIFAceCommandRecords : NSObject <SRUIFAceCommandRecordDelegate>
{
    id <SRUIFAceCommandRecordsDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_recordsByCommandIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013737
@property(readonly, nonatomic, getter=_recordsByCommandIdentifier) NSMutableDictionary *recordsByCommandIdentifier; // @synthesize recordsByCommandIdentifier=_recordsByCommandIdentifier;
@property(nonatomic) __weak id <SRUIFAceCommandRecordsDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)resultForAceCommand:(id)arg1;	// IMP=0x00000000000136c2
- (void)recordActionCompletedForAceCommand:(id)arg1 success:(_Bool)arg2;	// IMP=0x00000000000134a1
- (void)recordActionStoppedForAceCommand:(id)arg1;	// IMP=0x00000000000133b4
- (void)recordActionStartedForAceCommand:(id)arg1;	// IMP=0x00000000000132c7
- (id)_recordForAceCommand:(id)arg1;	// IMP=0x0000000000013214
- (id)aceCommandWithIdentifier:(id)arg1;	// IMP=0x0000000000013172
- (id)pendingAddViewsWithReflectionDialogPhaseWithRefId:(id)arg1;	// IMP=0x0000000000012eea
- (void)registerAceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012ca9
- (void)aceCommandRecordDidChangeResult:(id)arg1;	// IMP=0x0000000000012bed
- (id)init;	// IMP=0x0000000000012b87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

