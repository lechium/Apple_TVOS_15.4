//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDBackupRecoveryResultsParser-Protocol.h>

@class NSString;

@interface CDPDBackupFMIPResultsParser : NSObject <CDPDBackupRecoveryResultsParser>
{
}

- (id)resultsDictionaryFromRecoveryResult:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002384c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

