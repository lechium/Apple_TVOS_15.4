//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPullSnapshotRequest, NSString;

@interface _ADDeviceSyncCommandPullSnapshotRequestMutation : NSObject
{
    ADDeviceSyncCommandPullSnapshotRequest *_baseModel;	// 8 = 0x8
    NSString *_dataType;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDataType:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008358c
- (id)generate;	// IMP=0x00100000000834df
- (void)setDataType:(id)arg1;	// IMP=0x00100000000834bf
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0010000000083454
- (id)init;	// IMP=0x0010000000083440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
