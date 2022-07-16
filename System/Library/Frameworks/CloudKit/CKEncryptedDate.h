//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CKEncryptedDate <CKRecordValue, NSCopying, NSSecureCoding>
{
}

- (id)value;	// IMP=0x00000000001088cc
@property(readonly, nonatomic) NSDate *date;
- (id)initWithDate:(id)arg1;	// IMP=0x0000000000108618

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

