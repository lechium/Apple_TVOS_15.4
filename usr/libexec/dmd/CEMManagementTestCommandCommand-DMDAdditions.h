//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMManagementTestCommandCommand.h>

@class NSString;

@interface CEMManagementTestCommandCommand (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x0020000000006524
- (_Bool)dmf_requestExecutesWithoutReturning;	// IMP=0x001000000000651c
- (id)dmf_executeOperationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006514
- (id)dmf_executeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000063a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

