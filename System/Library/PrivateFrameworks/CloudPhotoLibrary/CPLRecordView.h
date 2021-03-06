//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLPlaceholderRecord, CPLRecordChange, CPLScopedIdentifier, NSData;

@interface CPLRecordView : NSObject
{
}

@property(readonly, nonatomic) NSData *recordChangeData;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3;	// IMP=0x00000000000ea20d
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 diffTracker:(id)arg4;	// IMP=0x00000000000ea15c
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id *)arg3 changeType:(unsigned long long)arg4 diffTracker:(id)arg5;	// IMP=0x00000000000ea0a6
- (id)redactedDescription;	// IMP=0x00000000000ea013
- (id)description;	// IMP=0x00000000000e9fa1
- (id)changeForType:(unsigned long long)arg1;	// IMP=0x00000000000e9f8f
@property(readonly, nonatomic) CPLPlaceholderRecord *placeholderRecord;
@property(readonly, nonatomic) CPLRecordChange *synthesizedRecord;
@property(readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
- (_Bool)supportsResources;	// IMP=0x000000000005b595
- (id)relation;	// IMP=0x000000000005b540
- (Class)recordClass;	// IMP=0x000000000005b4f9
- (id)secondaryScopedIdentifier;	// IMP=0x000000000005b4a4
- (id)relatedScopedIdentifier;	// IMP=0x000000000005b44f

@end

